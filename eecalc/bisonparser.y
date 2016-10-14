//Bison file for the EE's calculator program
%scanner Scanner.h
%scanner-token-function scanner.lex()
%stype double
%token NUMBER

%left '+' '-'
%left '*' '/'
%right '^'

%%

startrule:
    tokenshow
|
    startrule tokenshow
;

tokenshow:
    token
    {
        *output_stream << $1;
    }
;

token:
    NUMBER
    {
        $$ = std::stof( scanner.matched() );
    }
|                                   //operators
    token '^' token
    {
        $$ = pow( $1 , $3 );
    }
|
    '-' token
    {
        $$ = -1 * $2;
    }
|
    token '+' token
    {
        $$ = $1 + $3;
    }
|
    token '-' token
    {
        $$ = $1 - $3;
    }
|
    token '*' token
    {
        $$ = $1 * $3;
    }
|
    token '/' token
    {
        $$ = $1 / $3;
    }
|
    token '|' '|' token
    {
        $$ = $1*$4/($1+$4);
    }
|
    '[' token ']'
    {
        $$ = $2;
    }
|
    '(' token ')'
    {
        $$ = $2;
    }
|                                   //metric pref
    token 'M'
    {
        $$ = $1*pow10(6);
    }
|
    token 'k'
    {
        $$ = $1*pow10(3);
    }
|
    token 'm'
    {
        $$ = $1*pow10(-3);
    }
|
    token 'u'
    {
        $$ = $1*pow10(-6);
    }
|
    token 'n'
    {
        $$ = $1*pow10(-9);
    }
|
    token 'p'
    {
        $$ = $1*pow10(-12);
    }
|                                   //trig
    's' 'i' 'n' '(' token ')'
    {
        $$ = sin($5);
    }
|                                   //constants
    'e'
    {
        $$ = 2.7182818284;
    }
|
    'p' 'i'
    {
        $$ = 3.1415926535;
    }
;
