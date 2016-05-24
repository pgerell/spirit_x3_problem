
include_directories(SYSTEM ${Boost_INCLUDE_DIR})
add_executable(bug2
    ast.h
    ast_adapted.h
    common.cpp
    common.h
    common_def.h
    expression.cpp
    expression.h
    expression_def.h
    main.cpp
)
add_definitions(-DBOOST_SPIRIT_X3_NO_FILESYSTEM)
if(NOT WIN32)
    add_definitions(-ftemplate-depth=1024)
endif()
