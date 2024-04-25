#include <time.h>
#include <chrono>
#include <stdlib.h>
namespace native_fhir
{
 //////////////////
 // ARROW PARQUET TEST
 std::shared_ptr<arrow::Table> 
 ArrowTableFromDataTable(DataTable table) 
 {
  TimeFunction;

  Temp temp = ScratchBegin(0, 0);

  std::vector<std::shared_ptr < arrow::Array> > arrays;
  arrow::FieldVector fields;

  TimeBlock("ARROW - Copying Values")
  {
   for (DataColumnNode *col = table.first; col; col = col->next)
   {
    std::string name((char*)col->v.name.str, col->v.name.size);
    switch (col->v.value_type)
    {
     default: NF_NotImplemented;
     case ColumnValueType::String:
     {
      auto field = arrow::field(name, arrow::utf8());
      fields.push_back(field);
      arrow::StringBuilder builder;
      ColumnIterator it = {};
      it.Init(&(col->v), 0);
      it.stride = sizeof(NullableString8);

      for (int i = 0; i < col->v.num_values; i++)
      {
       NullableString8* ptr = (NullableString8*)it.Next();
       if (ptr->has_value)
       {
        std::string str((char*)ptr->str, ptr->size);
        PARQUET_THROW_NOT_OK(builder.Append(str));
       }
       else { PARQUET_THROW_NOT_OK(builder.AppendNull()); }
      }

      std::shared_ptr < arrow::Array > arr;
      PARQUET_THROW_NOT_OK(builder.Finish(&arr));
      arrays.push_back(arr);
     } break;
     case ColumnValueType::Boolean:
     {
      auto field = arrow::field(name, arrow::boolean());
      fields.push_back(field);
      arrow::BooleanBuilder builder;
      ColumnIterator it = {};
      it.Init(&(col->v), 0);
      it.stride = sizeof(NullableBoolean);

      for (int i = 0; i < col->v.num_values; i++)
      {
       NullableBoolean* ptr = (NullableBoolean*)it.Next();
       if (ptr->has_value)
       {
        PARQUET_THROW_NOT_OK(builder.Append((bool)ptr->value));
       }
       else { PARQUET_THROW_NOT_OK(builder.AppendNull()); }
      }

      std::shared_ptr < arrow::Array > arr;
      PARQUET_THROW_NOT_OK(builder.Finish(&arr));
      arrays.push_back(arr);
     } break;
     case ColumnValueType::ISO8601_Time:
     {
      // TODO(agw): add proper timestamp
      auto timestamp_type = arrow::timestamp(arrow::TimeUnit::MILLI, "+00:00");
      auto field = arrow::field(name, timestamp_type);
      fields.push_back(field);

      arrow::TimestampBuilder builder(timestamp_type, arrow::default_memory_pool());

      ColumnIterator it = {};
      it.Init(&(col->v), 0);
      it.stride = sizeof(ISO8601_Time);

      for (int i = 0; i < col->v.num_values; i++)
      {
       ISO8601_Time* ptr = (ISO8601_Time*)it.Next();

       S64 millis = 0;
       if (ptr->precision != Precision::Unknown)
       {
        tm time = {};
        time.tm_year = ptr->year - 1900;
        time.tm_mon = ptr->month - 1;
        time.tm_mday = ptr->day;

        time.tm_sec = ptr->second;
        time.tm_min = ptr->minute;
        time.tm_hour = ptr->hour;

        // NOTE(agw): mktime returns seconds
        time_t ttime = mktime(&time);
        millis = ttime * 1000;

        Temp decimal_temp = {};
        decimal_temp.arena = temp.arena;
        decimal_temp.pos = temp.arena->pos;

        String8 decimal_str = PushStr8F(decimal_temp.arena, "0.%d", ptr->millisecond);
        double d = strtod((const char*)decimal_str.str, 0);
        ArenaPopTo(decimal_temp.arena, decimal_temp.pos);

        S64 dm = d * 1000;
        millis += dm;
        PARQUET_THROW_NOT_OK(builder.Append(millis));
       }
       else { PARQUET_THROW_NOT_OK(builder.AppendNull()); }

      }

      std::shared_ptr < arrow::Array > arr;
      PARQUET_THROW_NOT_OK(builder.Finish(&arr));
      arrays.push_back(arr);
     } break;
     case ColumnValueType::Int32:
     {
      auto field = arrow::field(name, arrow::int32());
      fields.push_back(field);
      arrow::Int32Builder builder;
      ColumnIterator it = {};
      it.Init(&(col->v), 0);
      it.stride = sizeof(NullableInt32);

      for (int i = 0; i < col->v.num_values; i++)
      {
       NullableInt32* ptr = (NullableInt32*)it.Next();
       if (ptr->has_value)
       {
        PARQUET_THROW_NOT_OK(builder.Append(ptr->value));
       }
       else { PARQUET_THROW_NOT_OK(builder.AppendNull()); }
      }

      std::shared_ptr < arrow::Array > arr;
      PARQUET_THROW_NOT_OK(builder.Finish(&arr));
      arrays.push_back(arr);
     } break;
     case ColumnValueType::Int64:
     {
      auto field = arrow::field(name, arrow::int64());
      fields.push_back(field);
      arrow::Int64Builder builder;
      ColumnIterator it = {};
      it.Init(&(col->v), 0);
      it.stride = sizeof(NullableInt64);

      for (int i = 0; i < col->v.num_values; i++)
      {
       NullableInt64* ptr = (NullableInt64*)it.Next();
       if (ptr->has_value)
       {
        PARQUET_THROW_NOT_OK(builder.Append(ptr->value));
       }
       else { PARQUET_THROW_NOT_OK(builder.AppendNull()); }
      }

      std::shared_ptr < arrow::Array > arr;
      PARQUET_THROW_NOT_OK(builder.Finish(&arr));
      arrays.push_back(arr);
     } break;
     case ColumnValueType::Double:
     {
      auto field = arrow::field(name, arrow::int64());
      fields.push_back(field);
      arrow::DoubleBuilder builder;
      ColumnIterator it = {};
      it.Init(&(col->v), 0);
      it.stride = sizeof(NullableDouble);

      for (int i = 0; i < col->v.num_values; i++)
      {
       NullableDouble* ptr = (NullableDouble*)it.Next();
       if (ptr->has_value)
       {
        PARQUET_THROW_NOT_OK(builder.Append(ptr->value));
       }
       else { PARQUET_THROW_NOT_OK(builder.AppendNull()); }
      }

      std::shared_ptr < arrow::Array > arr;
      PARQUET_THROW_NOT_OK(builder.Finish(&arr));
      arrays.push_back(arr);
     } break;
    }
   }
  }

  std::shared_ptr < arrow::Schema > schema;
  std::shared_ptr < arrow::Table > ret;
  TimeBlock("ARROW - Making Schema")
  {
   schema = arrow::schema(fields);
  }

  TimeBlock("ARROW - Making Table")
  {
   ret = arrow::Table::Make(schema, arrays);
  }
  return ret;
 }

 arrow::Status
 WriteTable(String8 file_path, std::shared_ptr <arrow::Table> table)
 {
  TimeFunction;
  using parquet::ArrowWriterProperties;
  using parquet::WriterProperties;


  // Choose compression
  std::shared_ptr <WriterProperties> props =
  WriterProperties::Builder().compression(arrow::Compression::UNCOMPRESSED)->build();

  // Opt to store Arrow schema for easier reads back into Arrow
  std::shared_ptr <ArrowWriterProperties> arrow_props =
  ArrowWriterProperties::Builder().store_schema()->build();

  std::shared_ptr < arrow::io::FileOutputStream > outfile;
  std::string path_to_file((char*)file_path.str, file_path.size);
  ARROW_ASSIGN_OR_RAISE(outfile, arrow::io::FileOutputStream::Open(path_to_file));

  ARROW_RETURN_NOT_OK(parquet::arrow::WriteTable(*table.get(),
                                                 arrow::default_memory_pool(), outfile,
                                                 /*chunk_size=*/1024*1024, props, arrow_props));
  return arrow::Status::OK();
 }
};