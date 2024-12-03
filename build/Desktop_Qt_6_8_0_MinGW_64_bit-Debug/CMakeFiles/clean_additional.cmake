# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Spaniard_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Spaniard_autogen.dir\\ParseCache.txt"
  "Spaniard_autogen"
  )
endif()
