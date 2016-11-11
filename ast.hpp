#pragma once
#include "boost/spirit/home/x3.hpp"
namespace x3 = boost::spirit::x3;

typedef std::string::const_iterator iterator_type;

// This is set only when ast.hpp is included from ast_adapted.hpp, which is an internal header
#ifndef FUSION_DEFINE_FOR_STRUCT
#define FUSION_DEFINE_FOR_STRUCT(...)
#endif

//#define KEEP_CHAR
#ifdef KEEP_CHAR
//This allows link to succeed with boost_1_61_0
#pragma message "yesdef(KEEP_CHAR)"
#else
//This causes link to fail with boost_1_61_0
#pragma message "notdef(KEEP_CHAR)"
#endif

namespace ast {

  struct Count {
    int value;
  };
  
  struct Start {
#ifdef KEEP_CHAR
    char ch;
#endif
    Count count;
  };
  
 
}
// These definitions need to be outside of namespace scope, since the fusion macros need to be in global scope

FUSION_DEFINE_FOR_STRUCT(ast::Count, value);

#ifdef KEEP_CHAR
FUSION_DEFINE_FOR_STRUCT(ast::Start, ch, count);
#else
FUSION_DEFINE_FOR_STRUCT(ast::Start, count);
#endif
