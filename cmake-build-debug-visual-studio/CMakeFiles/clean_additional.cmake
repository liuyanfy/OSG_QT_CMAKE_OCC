# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\QT_CMAKE_OSG_OCC_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\QT_CMAKE_OSG_OCC_autogen.dir\\ParseCache.txt"
  "QT_CMAKE_OSG_OCC_autogen"
  )
endif()
