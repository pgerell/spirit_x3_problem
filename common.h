#pragma once

#include "boost/spirit/home/x3.hpp"
#include "ast.h"

struct start_class;
using start_type = x3::rule<start_class, ast::Start>;
BOOST_SPIRIT_DECLARE(start_type);

const start_type& start_rule();

