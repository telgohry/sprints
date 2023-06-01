#include <stdio.h>
#include <stdlib.h>

// Macros
#define STACK_SIZE 10

// typedefs
typedef unsigned char uint8_t;
typedef signed char   int8_t;

typedef struct stack {
    uint8_t elements[STACK_SIZE];
    int8_t top
}ST_stack_t;

// Functions Prototypes
void createEmptyStack(ST_stack_t *stack);
int8_t push(ST_stack_t *stack, uint8_t data);
int8_t pop(ST_stack_t *stack, uint8_t *data);
int8_t printStack(ST_stack_t *stack);
int8_t getStackTop(ST_stack_t *stack, uint8_t *topData);
int8_t isFull(ST_stack_t *stack);
int8_t isEmpty(ST_stack_t *stack);
int8_t isBalancedParanthethes(uint8_t *expression);


int main() {
    ST_stack_t stack;
    uint8_t data;

    /******************************************** Stack Testing ********************************************/
    /*
    createEmptyStack(&stack);
    push(&stack, 'T');
    push(&stack, 'A');
    push(&stack, 'R');
    push(&stack, 'E');
    push(&stack, 'K');

    getStackTop(&stack, &data);
    printf("\nstack top: %c\n\n", data);
    printStack(&stack);
    printf("\n");

    push(&stack, 'T');
    push(&stack, 'A');
    push(&stack, 'R');
    push(&stack, 'E');
    push(&stack, 'K');
    push(&stack, 'T');
    push(&stack, 'G');

    getStackTop(&stack, &data);
    printf("\nstack top: %c\n\n", data);
    printStack(&stack);

    pop(&stack, &data);
    pop(&stack, &data);
    pop(&stack, &data);
    pop(&stack, &data);

    getStackTop(&stack, &data);
    printf("\nstack top: %c\n\n", data);
    printStack(&stack);

    pop(&stack, &data);
    pop(&stack, &data);
    pop(&stack, &data);
    pop(&stack, &data);
    pop(&stack, &data);
    pop(&stack, &data);
    pop(&stack, &data);

    getStackTop(&stack, &data);
    printf("\nstack top: %c\n\n", data);
    printStack(&stack);
    */

    /******************************************** Check parentheses Testing ********************************************/

    int8_t result = 0;

    printf("\n---------------------------------------------------------------------------------------------------------\n");
    printf("Test case 1: {(2+3)}\n");
    result = isBalancedParanthethes("{(2+3)}");

    if(result == -2)
    {
        printf("Output: neither of parentheses is used\n\n");
    }
    else if (result == -1)
    {
        printf("Output: parentheses are not balanced\n\n");
    }
    else
    {
        printf("Output: parentheses are balanced\n\n");
    }

    printf("Test case 2: {((2+3)}\n");
    result = isBalancedParanthethes("{((2+3)}");

    if(result == -2)
    {
        printf("Output: neither of parentheses is used\n\n");
    }
    else if (result == -1)
    {
        printf("Output: parentheses are not balanced\n\n");
    }
    else
    {
        printf("Output: parentheses are balanced\n\n");
    }

    printf("Test case 3: [(2+3)]\n");
    result = isBalancedParanthethes("[(2+3)]");

    if(result == -2)
    {
        printf("Output: neither of parentheses is used\n\n");
    }
    else if (result == -1)
    {
        printf("Output: parentheses are not balanced\n\n");
    }
    else
    {
        printf("Output: parentheses are balanced\n\n");
    }

    printf("Test case 4: {(2+3)/((3+3)*(15-10))}\n");
    result = isBalancedParanthethes("{(2+3)/((3+3)*(15-10))}");

    if(result == -2)
    {
        printf("Output: neither of parentheses is used\n\n");
    }
    else if (result == -1)
    {
        printf("Output: parentheses are not balanced\n\n");
    }
    else
    {
        printf("Output: parentheses are balanced\n\n");
    }

    printf("Test case 5: (2+3)/((3+3)*(15-10))\n");
    result = isBalancedParanthethes(" (2+3)/((3+3)*(15-10))");

    if(result == -2)
    {
        printf("Output: neither of parentheses is used\n\n");
    }
    else if (result == -1)
    {
        printf("Output: parentheses are not balanced\n\n");
    }
    else
    {
        printf("Output: parentheses are balanced\n\n");
    }

    printf("Test case 6: {{2+3)/((3+3)*(15-10)))\n");
    result = isBalancedParanthethes("{{2+3)/((3+3)*(15-10)))");

    if(result == -2)
    {
        printf("Output: neither of parentheses is used\n\n");
    }
    else if (result == -1)
    {
        printf("Output: parentheses are not balanced\n\n");
    }
    else
    {
        printf("Output: parentheses are balanced\n\n");
    }

    printf("Test case 7: {(2+3(/((3+3)*(15-10))}\n");
    result = isBalancedParanthethes("{(2+3(/((3+3)*(15-10))}");

    if(result == -2)
    {
        printf("Output: neither of parentheses is used\n\n");
    }
    else if (result == -1)
    {
        printf("Output: parentheses are not balanced\n\n");
    }
    else
    {
        printf("Output: parentheses are balanced\n\n");
    }

    printf("Test case 8: {(2+3)/((3+3(*)15-10))}\n");
    result = isBalancedParanthethes("{(2+3)/((3+3(*)15-10))}");

    if(result == -2)
    {
        printf("Output: neither of parentheses is used\n\n");
    }
    else if (result == -1)
    {
        printf("Output: parentheses are not balanced\n\n");
    }
    else
    {
        printf("Output: parentheses are balanced\n\n");
    }

    printf("Test case 9: })2+3)/((3+3)*(15-10))}\n");
    result = isBalancedParanthethes("})2+3)/((3+3)*(15-10))}");

    if(result == -2)
    {
        printf("Output: neither of parentheses is used\n\n");
    }
    else if (result == -1)
    {
        printf("Output: parentheses are not balanced\n\n");
    }
    else
    {
        printf("Output: parentheses are balanced\n\n");
    }

    printf("Test case 10: {(2+3)/(<3+3>*(15-10))}\n");
    result = isBalancedParanthethes("{(2+3)/(<3+3>*(15-10))}");

    if(result == -2)
    {
        printf("Output: neither of parentheses is used\n\n");
    }
    else if (result == -1)
    {
        printf("Output: parentheses are not balanced\n\n");
    }
    else
    {
        printf("Output: parentheses are balanced\n\n");
    }

    printf("Test case 11: [<2+3>]\n");
    result = isBalancedParanthethes("[<2+3>]");

    if(result == -2)
    {
        printf("Output: neither of parentheses is used\n\n");
    }
    else if (result == -1)
    {
        printf("Output: parentheses are not balanced\n\n");
    }
    else
    {
        printf("Output: parentheses are balanced\n\n");
    }






    system("pause");
    return 0;
}

// Functions Implementation

/* Description:
 * - This function takes a reference to a stacks type
 * - Initialize this stack with Zeros
 * - Initialize the top with -1
 * Return:
 * - Nothing to return
 */
void createEmptyStack(ST_stack_t *stack)
{
    for(uint8_t i=0; i<STACK_SIZE; i++)
    {
        stack->elements[i] = 0;
    }

    stack->top = -1;
}

/* Description:
 * - This function takes a reference to the stack and data to store
 * - Stores the data passed into the stack
 * Return:
 * - returns -1 if the stack is full
 * - returns 0 otherwise
 */
int8_t push(ST_stack_t *stack, uint8_t data)
{
    if(!isFull(stack))
    {
        stack->top++;
        stack->elements[stack->top] = data;
    }
    else
    {
        return -1;
    }

    return 0;
}

/* Description:
 * - This function takes a reference to the stack
 * - Stores the data popped from the stack in a data variable
 * Return:
 * - returns -2 if the stack is empty
 * - returns 0 otherwise
 */
int8_t pop(ST_stack_t *stack, uint8_t *data)
{
    if(!isEmpty(stack))
    {
        *data = stack->elements[stack->top];
        stack->top--;
    }
    else
    {
        return -2;
    }

    return 0;
}

/* Description:
 * - This function takes a reference to the stack
 * - Prints all stack's data starting from the top
 * Return:
 * - returns -1 if the stack is full
 * - returns -2 if the stack is empty
 * - returns 0 otherwise
 */
int8_t printStack(ST_stack_t *stack) {

    uint8_t data;

    if (isEmpty(stack))
    {
        return -2;
    }

    for(uint8_t i = 0; i <= stack->top; i++)
    {
        getStackTop(stack, &data);
        printf("%c  ", stack->elements[i]);
    }

    if (isFull(stack))
    {
        return -1;
    }

    return 0;
}

/* Description:
 * - This function takes a reference to the stack
 * - Stores its top data into a variable
 * Return:
 * - returns -2 if the stack is empty
 * - 0 otherwise
 */
int8_t getStackTop(ST_stack_t *stack, uint8_t *topData)
{
    if(!isEmpty(stack))
    {
        *topData = stack->elements[stack->top];
        return 0;
    }
    else
    {
        return -2;
    }
}

/* Description:
 * - This function takes a reference to the stack
 * - Checks if the stack is full or not
 * Return:
 * - returns -1 if the stack is full
 * - 0 otherwise
 */
int8_t isFull(ST_stack_t *stack)
{
    if(stack->top == STACK_SIZE-1)
    {
        return -1;
    }

    return 0;
}

/* Description:
 * - This function takes a reference to the stack
 * - Checks if the stack is empty or not
 * Return:
 * - returns -2 if the stack is empty
 * - 0 otherwise
 */
int8_t isEmpty(ST_stack_t *stack)
{
    if(stack->top == -1)
    {
        return -2;
    }

    return 0;
}

/* Description:
 * - This function takes an expression array max 10 characters
 * - Checks if the parentheses are balanced or not
 * - Checks the following parentheses types {, }, (, ) only
 * Return:
 * - returns -2 if the neither of paranthethes is used
 * - returns -1 if the parentheses are not balanced
 * - returns 0 if the parentheses are balanced
 */
int8_t isBalancedParanthethes(uint8_t *expression)
{
    ST_stack_t stack;
    uint8_t flag = 0;
    uint8_t data;

    createEmptyStack(&stack);

    // check parentheses types
    for(uint8_t i=0; expression[i] != '\0'; i++)
    {
        if(expression[i] == '(' || expression[i] == ')' || expression[i] == '{' || expression[i] == '}')
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
    {
        return -2;
    }

    // check parentheses balanced or not
    for(uint8_t i=0; expression[i]!='\0'; i++)
    {
        if(expression[i] == '(' || expression[i] == '{')
        {
            push(&stack, expression[i]);
        }
        else if (expression[i] == ')' || expression[i] == '}')
        {
            if(isEmpty(&stack))
            {
                return -1;
            }
            pop(&stack, &data);

            // ASCII of '(' = 40 & ')' = 41 so the difference between the two = 1
            if(expression[i] == ')' && expression[i]-data != 1)
            {
                    return -1;
            }
            // ASCII of '{' = 123 & '}' = 125 so the difference between the two = 2
            else if(expression[i] == '}' && expression[i]-data != 2)
            {
                    return -1;
            }
        }
    }

    if(isEmpty(&stack))
    {
        return 0;
    }
}



