//The file for generating the lexer with FLEXC++
%%
[ \t\n]+                            // skip white space chars.
[0-9]*[\.][0-9]*                    |
[0-9]+                              return Parser::NUMBER;
[\+\-\*\/\(\)\^\[\]\|]              return matched()[0];
[[:alpha:]]                         return matched()[0];
