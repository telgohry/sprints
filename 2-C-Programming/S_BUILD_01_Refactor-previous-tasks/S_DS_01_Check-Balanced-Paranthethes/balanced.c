#include <stdio.h>
#include "balanced.h"
#include "stack.h"

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