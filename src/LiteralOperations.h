#ifndef __LITERALOPERATIONS_H__
#define __LITERALOPERATIONS_H__

typedef enum { ADDLW 

}Mnemonic;

typedef struct {
	Mnemonic mnemonic;
	char *name;

}Instruction;

typedef struct{
	Instruction *instruction; 
	int operand1;
	int operand2;
	int operand3;
	
}Bytecode;

typedef struct{
	int value;
}WREG;

int executeAddlw(int literal, int WREG);
Bytecode *create_WREG();

#endif