# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\ObjectTimer_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\ObjectTimer_autogen.dir\\ParseCache.txt"
  "ObjectTimer_autogen"
  )
endif()
