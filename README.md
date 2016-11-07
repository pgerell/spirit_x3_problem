# spirit_x3_problem

With KEEP_CHAR defined the code builds with both boost 1.60 and 1.61.
Without KEEP_CHAR defined it fails with 1.61.

The following commit introduced the problem.
https://github.com/boostorg/spirit/commit/a8e391bd99dddb3f9ece84bdb1bb9236b0a37cf7

The problem seems to be that the attribute types are short-circuited for sequences of one 
even though we explicitly request a specific binding using FUSION_DEFINE_FOR_STRUCT(ast::Start, count);
In this short example we could easily work around this issue by not omitting the result of the
char_ parser in the start rule or by changing the attribute types to what boost 1.61+ expects
In our full code it is not as simple as we rely on the types being unique when traversing the 
ast using variant visitors.
