#ifndef GAME_H
#define GAME_H

#include"board.h"

/**
 *  @brief randomly putting the value 1 or 0 to the elements of the board
 *
 *  @param gamelife: the pointer to the struct game
 *
 *  @return nothing returns (void function)
 */
void random_table(GameLife *gamelife);

/**
 *  @brief counting the alive neighbors of the element of the board
 *
 *  @param gamelife: the pointer to the struct game
 *  @param row: the row of the element which we want to count neighbors of it
 *  @param column: the column of the element which we want to count neighbors of it
 * 
 *  @return the number of alive neighbors
 */
int count_alive_neighbors(GameLife *gamelife, int row, int column);

/**
 *  @brief updating the elements of the board according to the rules of the game
 *
 *  @param gamelife: the pointer to the struct game
 *
 *  @return nothing returns (void function)
 */
void update_game(GameLife *gamelife);

#endif