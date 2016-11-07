
include_directories(SYSTEM ${Boost_INCLUDE_DIR})
add_executable(bug2
    ast.hpp
    ast_adapted.hpp
    common.cc
    common.hpp
    common_def.hpp
    expression.cc
    expression.hpp
    expression_def.hpp
    prog.cc
)
add_definitions(-DBOOST_SPIRIT_X3_NO_FILESYSTEM)
if(NOT WIN32)
    add_definitions(-ftemplate-depth=1024)
endif()
