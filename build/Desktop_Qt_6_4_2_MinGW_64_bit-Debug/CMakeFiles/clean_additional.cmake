# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\StudentManagerSystem_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\StudentManagerSystem_autogen.dir\\ParseCache.txt"
  "StudentManagerSystem_autogen"
  )
endif()
