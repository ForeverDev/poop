#ifndef LEX_H
#define LEX_H

typedef enum TokenType {

	IDENTIFIER,	

} TokenType;

typedef struct Token {

	TokenType	type;
	char*		word;

} Token;

struct struct TokenList {

	Token*		t;


} TokenList;

Token*	Token_new(TokenType, const char*);
void	Token_print(Token*);

#endif
