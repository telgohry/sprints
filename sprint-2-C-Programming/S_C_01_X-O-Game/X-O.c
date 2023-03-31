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
/* ********************** Global Variables End   ************************** */

/* ********************** Functions Prototypes Start ********************** */
void drawBoard(uint8_t *board);
void updateBoard (uint8_t *board, uint8_t position, uint8_t value);
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
    
}


/* ********************** Functions Implementation End ************************** */
