//Bison file for the EE's calculator program
%scanner Scanner.h
%baseclass-preinclude <complex>
%scanner-token-function scanner.lex()
%stype std::complex<double>
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
        if(std::imag($1) == 0)
        {
            *output_stream << std::real($1);
        }
        else
        {
            *output_stream << $1;
        }
    }
;

token:
    NUMBER
    {
        $$ = {std::stof(scanner.matched()),0};
    }
|
    'j' token
    {
        $$ = {0,std::real($2)};
    }
|                                               //operators
    token '^' token
    {
        $$ = pow( $1 , $3 );
    }
|
    '-' token
    {
        $$ = -1.0*$2;
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
|                                   //functions
    's' 'q' 'r' 't' '(' token ')'
    {
        $$ = sqrt($6);
    }
|
    'l' 'n' '(' token ')'
    {
        $$ = log($4);
    }
|
    'm' 'a' 'g' '(' token ')'
    {
        $$ = std::norm($5);
    }
|
    'p' 'h' 'a' 's' 'e' '(' token ')'
    {
        $$ = std::arg($7);
    }
|
    'c' 'o' 'n' 'j' '(' token ')'
    {
        $$ = std::conj($6);
    }
|
    'f' 't' 'o' 'w' '(' token ')'
    {
        $$ = {std::real($6)*2*3.1415926,0};
    }
|
    'f' 't' 'o' 't' '(' token ')'
    {
        $$ = {1/std::real($6),0};
    }
|
    'd' 'e' 'g' '(' token ')'
    {
        $$ = {std::real($5)*180/3.1415926,0};
    }
|
    'f' 'c' '(' token ',' token ')'
    {
        $$ = {1.0/(2*3.1415926*std::real($4)*std::real($6)),0};
    }
|
    'L' 'C' '(' token ',' token ')'
    {
        $$ = {1/(2*3.1415926*sqrt(std::real($4)*std::real($6))),0};
    }
|
    'X' 'c' '(' token ',' token ')'
    {
        double omegaf = -1/(2*3.1415926);
        $$ = {0,omegaf/(std::real($6)*std::real($4))};
    }
|                                   //trig
    's' 'i' 'n' '(' token ')'
    {
        $$ = sin($5);
    }
|
    'c' 'o' 's' '(' token ')'
    {
        $$ = cos($5);
    }
|
    't' 'a' 'n' '(' token ')'
    {
        $$ = tan($5);
    }
|
    'a' 's' 'i' 'n' '(' token ')'
    {
        $$ = asin($6);
    }
|
    'a' 'c' 'o' 's' '(' token ')'
    {
        $$ = acos($6);
    }
|
    'a' 't' 'a' 'n' '(' token ')'
    {
        $$ = atan($6);
    }
|
    's' 'i' 'n' 'h' '(' token ')'
    {
        $$ = sinh($6);
    }
|                                   //constants
    'e'
    {
        $$ = {2.7182818284,0};
    }
|
    'p' 'i'
    {
        $$ = {3.1415926535,0};
    }
;

