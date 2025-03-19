# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\FileControl_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\FileControl_autogen.dir\\ParseCache.txt"
  "FileControl_autogen"
  )
endif()
