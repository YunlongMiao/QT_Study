# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\MySqlQT_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\MySqlQT_autogen.dir\\ParseCache.txt"
  "MySqlQT_autogen"
  )
endif()
