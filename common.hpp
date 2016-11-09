#pragma once

#include "ast_adapted.hpp"

struct start_class;
using start_type = x3::rule<start_class, ast::Start>;
const start_type start_dummy;//mimic what common_def.hpp does.
using start_decl=decltype(start_dummy);//mimic what common.cpp does.
BOOST_SPIRIT_DECLARE(start_decl);//mimich what common_def.hpp does.

const start_type& start_rule();
