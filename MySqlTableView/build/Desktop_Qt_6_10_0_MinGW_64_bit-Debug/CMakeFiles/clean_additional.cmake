# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\MySqlTableView_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\MySqlTableView_autogen.dir\\ParseCache.txt"
  "MySqlTableView_autogen"
  )
endif()
