#pragma once

#include "boost/spirit/home/x3.hpp"

 
namespace x3 = boost::spirit::x3;

typedef std::string::const_iterator iterator_type;

// This is set only when ast.h is included from ast_adapted.h, which is an internal header
#ifndef FUSION_DEFINE_FOR_STRUCT
#define FUSION_DEFINE_FOR_STRUCT(...)
#endif

namespace ast {

  struct Count {
    int value;
  };
  
  struct Start {
    //char ch;
    Count count;
  };
  
 
}
// These definitions need to be outside of namespace scope, since the fusion macros need to be in global scope

FUSION_DEFINE_FOR_STRUCT(ast::Count, value);
//FUSION_DEFINE_FOR_STRUCT(ast::Start, ch, count);
FUSION_DEFINE_FOR_STRUCT(ast::Start, count);


