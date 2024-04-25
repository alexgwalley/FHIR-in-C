//////////////////
// ~ ARROW - Parquet Gen
#include <arrow/api.h>
#include <arrow/io/api.h>
#include <parquet/arrow/reader.h>
#include <parquet/arrow/writer.h>
#include <parquet/exception.h>

#include <parquet/arrow/writer.h>
#include <arrow/util/type_fwd.h>

#include "view_runner/data_table/data_table.h"
#include "view_runner/parquet/apache_arrow.h"

#include "view_runner/view_definition/view_definition.h"
#include "view_runner/test_execution/test_execution.h"