#pragma once

#include "ast_adapted.hpp"

struct start_class;
using start_type = x3::rule<start_class, ast::Start>;
const start_type& start_rule();

BOOST_SPIRIT_DECLARE(start_type);
