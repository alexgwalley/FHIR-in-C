#pragma once

namespace native_fhir
{
 std::shared_ptr < arrow::Table > ArrowTableFromDataTable(DataTable table);
 arrow::Status WriteTable(String8 file_path, std::shared_ptr < arrow::Table > table);
};