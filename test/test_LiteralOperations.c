#include "unity.h"
#include "LiteralOperations.h"

void tearDown(){}
void setUp(){}

void test_addlw(){
	Bytecode *addlw;
	addlw = createBytecode();
	addlw->instruction->mnemonic = 1;
	
	WREG *wreg;
	wreg = create_WREG();
	wreg->value = 1;
	execute(ADDLW);
/*
	Bytecode *instruction;
	
	execute(ADDLW);
	
	
	instruction = 
	instruction->operand1 = NULL;
	
	executeAddlw(literal, WREG);
	
	*/
	ASSERT_TEST_NOT_NULL(wreg->value) ;
}