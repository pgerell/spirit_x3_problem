#pragma once

#include "ast_adapted.hpp"

struct start_class;
using start_type = x3::rule<start_class, ast::Start>;
BOOST_SPIRIT_DECLARE(const start_type);//reflect what's in common_def.hpp

const start_type& start_rule();
