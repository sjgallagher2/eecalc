//The file for generating the lexer with FLEXC++

%%

[ \t\n]+                            // skip white space chars.
[0-9]+                              return Parser::NUMBER;
\+                                  return '+';
[[:alpha:]_][[:alpha:][:digit:]_]*  return Parser::IDENTIFIER;
.                                   return Parser::CHAR;









/*
===================================
%%
[[:space:]]+
[0-9]+         |
[0-9]*[\.][0-9]*     {
                            std::cout << "Number lexed: " << matched() << std::endl;
                            return Parser::NUM;
                    }
*/
