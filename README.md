# eecalc
The electrical engineer's calculator. A simple calculator with electronics calculations built in for simpler circuit design. 
The EECalc was inspired by the the unending number of 'parallel' and voltage divider equations that come with the design of large analog circuits. This tool simply includes several features such as the || operator, and support for imaginary and complex numbers, to aid in the design of analog circuits. 

Operations include:
  Arithmetic
  Trigonometry
  Complex numbers
  Exponentials
  Angular velocity
  Conversions from decimal to fraction, form frequency to period, and from frequency to angular velocity
  Common mathematical constants
  Metric prefixes, from pico- to milli-, to save time calculating with capacitor and inductor values
  Reactance calculation for inductors and capacitors at a given frequency
  LC resonant frequency
  RC time constant
  Variable store
  Graphing
  Functions
  Custom programs for voltage dividers and other tools

The EECalc is a powerful and simple tool that does what every EE thinks a calculator should do anyway. Save time, avoid mistakes, and improve your designs.

--
--
# Functionality
The EECalc is written in C++ 11, and makes use of such libraries as sstream, complex, and GTK+ 2.0. The lexer/parser is written through BisonC++ and FlexC++. There is a custom interface designed into the Parser.h and parse.cc files that are generated from bisonc++ and flexc++, including the addition of an overloaded constructor.

The EECalc is only functional with real numbers, for the time being. Much work is going into implementing the <complex> class, but there are issues with how bisonc++ is handling the types. 

The project is written within the CodeBlocks IDE, and a project is included in the source. Building requires the statement of using C++11 for the compiler. If the parser is changed, then flexc++ and bisonc++ must be run again, and the overloaded constructor must be added to Parser.h and parse.cc once again. That is, until a more effective workaround is found for speeding up this process. 

I hope you enjoy the EECalc as much as I've enjoyed writing it. 
Sam Gallagher
