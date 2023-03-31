/**
 ******************************************************************************
 * @file           : X-O.c
 * @author         : Tarek Gohry
 * @brief          : Contains the functionality X-O Game
 ******************************************************************************
 */

/* ********************** Includes Start ********************************* */
#include <stdio.h>
#include <stdlib.h>
/* ********************** Includes End *********************************** */

/* ********************** Typedefs Start ********************************** */
typedef unsigned char uint8_t;
/* ********************** Typedefs End ************************************ */

/* ********************** Global Variables Start ************************** */
uint8_t board[] = {'0','1','2','3','4','5','6','7','8','9'};
uint8_t configArray[2];
uint8_t gameState = 2;
/* ********************** Global Variables End   ************************** */

/* ********************** Functions Prototypes Start ********************** */
void drawBoard(uint8_t *board);
void updateBoard (uint8_t *board, uint8_t position, uint8_t value);
uint8_t getPlayerSymbol(uint8_t playerNumber, uint8_t * symbol);
void setPlayerConfig(uint8_t *configArray);
void loadAndUpdate(uint8_t playerNumber);
void getGameState(uint8_t *board, uint8_t *gameState);
/* ********************** Functions Prototypes End ************************ */

int main()
{
    return 0;
}

/* ********************** Functions Implementation Start ************************ */

/* ---------------------- drawBoard Function Implementation ---------------------- */
void drawBoard(uint8_t *board)
{
    printf("\n\n");
    printf("\t| %c | %c | %c |\n\n", board[1], board[2], board[3]);
    printf("\t| %c | %c | %c |\n\n", board[4], board[5], board[6]);
    printf("\t| %c | %c | %c |\n\n", board[7], board[8], board[9]);
    printf("\n\n\n\n");
}

/* ---------------------- updateBoard Function Implementation ---------------------- */
void updateBoard (uint8_t *board, uint8_t position, uint8_t value)
{
    board[position] = value;
}

/* ---------------------- getPlayerSymbol Function Implementation ---------------------- */
uint8_t getPlayerSymbol(uint8_t playerNumber, uint8_t * symbol)
{

}

/* ---------------------- setPlayerConfig Function Implementation ---------------------- */
void setPlayerConfig(uint8_t *configArray)
{

}

/* ---------------------- loadAndUpdate Function Implementation ---------------------- */
void loadAndUpdate(uint8_t playerNumber)
{
    uint8_t pos;
    printf("Enter the position you want to move on? ");
    fflush(stdin);
    scanf("%d", pos);

}

/* ---------------------- getGameState Function Implementation ---------------------- */
void getGameState(uint8_t *board, uint8_t *gameState)
{
    // Check rows win
    if
    ((board[1] == board [2] && board[1]==board[3]) ||
    (board[4] == board [5] && board[4]==board[6]) ||
    (board[7] == board [8] && board[7]==board[9]))
    {
        *gameState=0;
        return;
    }
    // Check cols win
    else if
    ((board[1] == board [4] && board[1]==board[7]) ||
    (board[2] == board [5] && board[2]==board[8]) ||
    (board[3] == board [6] && board[3]==board[9]))
    {
        *gameState=0;
        return;
    }
    // Check diagonals win
    else if
    ((board[1] == board [5] && board[1]==board[9]) ||
    (board[3] == board [5] && board[3]==board[7]))
    {
        *gameState=0;
        return;
    }
    // Check continue
    else
    {
        for(uint8_t i=1; i<=9; i++)
        {
            if(board[i] != 'X' || board[i] != 'x' || board[i] != 'O' || board[i] != 'o')
            {
                *gameState = 2;
                return;
            }
        }
    }

    // Draw
    *gameState=1;
    return;
}

/* ********************** Functions Implementation End ************************** */
