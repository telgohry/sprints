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
#include <string.h>
#include <ctype.h>
/* ********************** Includes End *********************************** */

/* ********************** Macros Start ********************************* */
#define PLAYERS_NUM 2
/* ********************** Macros End *********************************** */

/* ********************** Typedefs Start ********************************** */
typedef unsigned char uint8_t;
/* ********************** Typedefs End ************************************ */

/* ********************** Global Variables Start ************************** */
uint8_t board[] = {'0','1','2','3','4','5','6','7','8','9'};
uint8_t configArray[2] = {0};
uint8_t gameState = 2;
uint8_t player=1;
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
    printf("Welcome to the X-O Game!\n");

    drawBoard(board);

    // Set player configurations
    setPlayerConfig(configArray);

    // Main game loop
    while (gameState == 2) {
        printf("\nPlayer %d's turn:\n", player);
        loadAndUpdate(player);
        drawBoard(board);
        getGameState(board, &gameState);
        if(gameState==0 || gameState==1)
        {
            break;
        }
        player = (player == 1) ? 2 : 1;
    }

    // Game over
    switch (gameState) {
        case 0:
            printf("\nPlayer %d wins!\n", player);
            break;
        case 1:
            printf("\nIt's a draw!\n");
            break;
    }

    system("pause");
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
    printf("\n\n");
}

/* ---------------------- updateBoard Function Implementation ---------------------- */
void updateBoard (uint8_t *board, uint8_t position, uint8_t value)
{
    board[position] = value;
}

/* ---------------------- getPlayerSymbol Function Implementation ---------------------- */
uint8_t getPlayerSymbol(uint8_t playerNumber, uint8_t * symbol)
{
    printf("Player %d, choose your symbol (X or O): ", playerNumber);
    char input;
    scanf(" %c", &input);
    input = toupper(input);
    if (input == 'X' || input == 'O') {
        for (int i = 0; i < 2; i++) {
            if (configArray[i] == input) {
                return 1; // Symbol already chosen
            }
        }
        *symbol = input;
        configArray[playerNumber - 1] = input;
        return 0; // Symbol valid and not chosen before
    } else {
        return 1; // Symbol invalid
    }
}

/* ---------------------- setPlayerConfig Function Implementation ---------------------- */
void setPlayerConfig(uint8_t *configArray)
{
    for (int i = 1; i <= 2; i++) {
        uint8_t symbol;
        while (getPlayerSymbol(i, &symbol) == 1) {
            printf("Symbol already chosen or invalid. Please choose again.\n");
        }
        configArray[i - 1] = symbol;
    }
}

/* ---------------------- loadAndUpdate Function Implementation ---------------------- */
void loadAndUpdate(uint8_t playerNumber)
{
    uint8_t symbol = configArray[playerNumber - 1];
    uint8_t position;

    printf("Player %d, enter position (1-9): ", playerNumber);
    scanf("%hhu", &position);

    updateBoard(board, position, symbol);
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
