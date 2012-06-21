
cmake_minimum_required(VERSION 2.8.7)

project(MinimalistiCliWithoutSlicer)

find_package(SlicerExecutionModel REQUIRED)
include(${SlicerExecutionModel_USE_FILE})

find_package(ITK REQUIRED)
include(${ITK_USE_FILE})

SEMMacroBuildCLI(
  NAME ${PROJECT_NAME}
  TARGET_LIBRARIES ${ITK_LIBRARIES}
  )

