#ifndef BOARD_H
#define BOARD_H

#define YELLOW "\e[43m  \033[m"
#define BLUE "\e[44m  \033[m"
#define WHITE "\e[47m  \033[m"
#define BLACK "\e[40m  \033[m"
#define CLEAR_SCREEN "\e[1;1H\e[2J"
/**
 *  @brief struct of the game
 */
typedef struct{

  int width; /**< width of the board*/ 
  int height; /**< height of the board */ 
  int *board; /**< pointer to the board which we will allocate dynamically*/ 

}  GameLife;


/**
 *  @brief getting the value of the one proper element of the game board
 *
 *  @param gamelife: the pointer to the struct game
 *  @param row: the row of the element which we want to get
 *  @param column: the column of the element which we want to get
 *
 *  @return return the value of the that element 
 */
int get_value(GameLife *gamelife, int row, int column);

/**
 *  @brief setting the value of the one proper element of the game board with some value
 *
 *  @param gamelife: the pointer to the struct game
 *  @param row: the row of the element which we want to set
 *  @param column: the column of the element which we want to set
 *  @param value: the new value which we want to set to that element
 *  @return nothing returns (void function)
 */
void set_value(GameLife *gamelife, int row, int column, int value);

/**
 *  @brief create the new game for game of life and initializing all values of board to 0
 *
 *  @param gamelife: the pointer to the struct game
 *  @param width: the width of the game board which we want to create
 *  @param height: the height of the game board which we want to create
 *
 *  @return nothing returns (void function)
 */
void new_game_life(GameLife *gamelife, int width, int height);

/**
 *  @brief showing the board of the game in terminal
 *
 *  @param gamelife: the pointer to the struct game
 *
 *  @return nothing returns (void function)
 */
void show_board(GameLife *gamelife);

#endif