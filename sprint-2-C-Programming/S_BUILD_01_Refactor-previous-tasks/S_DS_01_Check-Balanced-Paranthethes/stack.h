#include "main.h"

// Macros
#define STACK_SIZE 10

//typedefs
typedef struct stack {
    uint8_t elements[STACK_SIZE];
    int8_t top;
}ST_stack_t;

// Functions Prototypes
void createEmptyStack(ST_stack_t *stack);
int8_t push(ST_stack_t *stack, uint8_t data);
int8_t pop(ST_stack_t *stack, uint8_t *data);
int8_t printStack(ST_stack_t *stack);
int8_t getStackTop(ST_stack_t *stack, uint8_t *topData);
int8_t isFull(ST_stack_t *stack);
int8_t isEmpty(ST_stack_t *stack);
