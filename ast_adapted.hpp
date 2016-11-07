#pragma once

#include "boost/fusion/include/adapt_struct.hpp"
#include "boost/fusion/include/std_pair.hpp"
#include "boost/fusion/include/std_tuple.hpp"


#define FUSION_DEFINE_FOR_STRUCT(...) BOOST_FUSION_ADAPT_STRUCT(__VA_ARGS__)

#include "ast.hpp"
