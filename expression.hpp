#pragma once

#include "ast.hpp"

struct count_class;
using count_type = x3::rule<count_class, ast::Count>;
BOOST_SPIRIT_DECLARE(count_type);

const count_type& count_rule();
