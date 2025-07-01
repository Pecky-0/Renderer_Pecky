cmake_minimum_required( VERSION 3.4 )

project( Renderer_Pecky )

include_directories(
    include
)

AUX_SOURCE_DIRECTORY( src SRC_FILES )

add_executable(Renderer_Pecky ${SRC_FILES})