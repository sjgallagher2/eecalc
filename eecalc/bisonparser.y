//Bison file for the EE's calculator program
%scanner Scanner.h
%scanner-token-function scanner.lex()
%stype double
%token IDENTIFIER CHAR NUMBER

%%

startrule:
    tokenshow
|
    startrule tokenshow
;

tokenshow:
    token
    {
        *outputstream << $1;
    }
;

token:
    IDENTIFIER
    {
        $$ = $1;
    }
|
    NUMBER
    {
        $$ = std::stoi( scanner.matched() );
    }
|
    CHAR
    {
        $$ = $1;
    }
|
    token '+' token
    {
        $$ = $1 + $3;
    }
;


















/*
=====================================
%stype double
%token NUM
%left '-' '+'
%left '*' '/'
%left NEG

%%

input:
    //empty
|
    input line
;

line:
    '\n'
|
    exp '\n'
    {
        std::cout << $1 << '\n';
    }
;

exp:
        NUM
        {
            $$ = scanner.matched();
        }
|
        exp '+' exp
        {
            $$ = $1 + $3;
        }
|
        exp '-' exp
        {
            $$ = $1 - $3;
        }
|
        exp '*' exp
        {
            $$ = $1 * $3;
        }
|
        exp '/' exp
        {
            $$ = $1 / $3;
        }
|
        '-' exp %prec NEG
        {
            $$ = -$2;
        }
|
        '(' exp ')'
        {
            $$ = $2;
        }
;
*/
