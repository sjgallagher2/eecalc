//C file for ONLY the custom constructor for the Parser class
#include "Parser.ih"

Parser::Parser(std::stringstream *inputstream, std::stringstream *outputstream)
{
    scanner.switchStreams(*inputstream, *outputstream);
    output_stream = outputstream;
}
