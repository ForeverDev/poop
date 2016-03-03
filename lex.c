#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lex.h"

Token* Token_new(TokenType t, const char* word) {

	Token* token = malloc(sizeof(Token));

	unsigned int length = strlen(word);

	token->type = t;
	token->word = malloc(length + 1);
	strcpy(token->word, word);
	token->word[length] = 0;

	return token;

}

void Token_print(Token* t) {
	
	printf("(TYPE %d : WORD '%s')\n", t->type, t->word);

}
