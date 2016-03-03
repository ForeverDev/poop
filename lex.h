#ifndef LEX_H
#define LEX_H

typedef enum TokenType {
	
	UNKNOWN = 0x00,
	IDENTIFIER,	

} TokenType;

typedef struct Token {

	TokenType	type;
	char*		word;

} Token;

typedef struct TokenList {

	Token*		t;


} TokenList;

Token*	Token_new(TokenType, const char*);
void	Token_print(Token*);

#endif
