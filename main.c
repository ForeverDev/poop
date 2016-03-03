#include <stdio.h>
#include <stdlib.h>
#include "lex.h"

int main(int argc, char** argv) {

	Token* t = Token_new(IDENTIFIER, "testing");
	
	Token_print(t);


	return 0;

}
