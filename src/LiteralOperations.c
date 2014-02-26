#include <stdio.h>
#include "LiteralOperations.h"
#include <malloc.h>
void execute(Bytecode *code){
	switch(code->Instructions->mnemonic){
		case 1:
			executeAddlw(code->operand1);
			break; 
	//if(code->instruction->mnemonic == addwfc)
		//executeAddwfc(code);
	
	}	

Bytecode *createBytecode(){
	Bytecode *code = malloc(sizeof(Bytecode));
	code->instruction = NULL;
	code->operand1 = -1;
	code->operand2 = -1;
	code->operand3 = -1;
	return code;
}
	
Bytecode *create_WREG(){
	WREG *wreg = malloc(sizeof(WREG));
		wreg->value=0;
		return wreg;
}


int executeAddlw(int literal, WREG *WREG){

	WREG->value = literal;
	return literal;
}