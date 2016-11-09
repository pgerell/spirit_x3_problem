#pragma once

#include "ast_adapted.hpp"

struct start_class;
using start_type = x3::rule<start_class, ast::Start>;
using start_decl=const start_type;
BOOST_SPIRIT_DECLARE(start_decl);//reflect what's in common_def.hpp

const start_type& start_rule();
