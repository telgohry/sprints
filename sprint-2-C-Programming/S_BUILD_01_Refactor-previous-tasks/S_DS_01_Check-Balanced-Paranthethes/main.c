#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "stack.h"
#include "balanced.h"


int main() {
    //stackTestcases();
    checkParenthesesTestcases();

    system("pause");
    return 0;
}

void stackTestcases()
{
    ST_stack_t stack;
    uint8_t data;

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
}

void checkParenthesesTestcases()
{
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
}


