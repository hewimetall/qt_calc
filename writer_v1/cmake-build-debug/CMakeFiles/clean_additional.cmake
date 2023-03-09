# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/s21_valid_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/s21_valid_autogen.dir/ParseCache.txt"
  "CMakeFiles/writer_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/writer_autogen.dir/ParseCache.txt"
  "s21_valid_autogen"
  "writer_autogen"
  )
endif()
