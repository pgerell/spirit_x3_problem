#pragma once

#include "ast.hpp"

struct start_class;
using start_type = x3::rule<start_class, ast::Start, true>;
BOOST_SPIRIT_DECLARE(start_type);

const start_type& start_rule();

