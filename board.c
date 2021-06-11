#include<stdio.h>
#include<stdlib.h>
#include"board.h"
#include"game.h"

void new_game_life(GameLife *gamelife, int width, int height){
   gamelife->width = width;
   gamelife->height = height;
   gamelife->board = (int *)malloc(gamelife->width * gamelife->height * sizeof(int));

   for(int i=0;i< gamelife->height;i++){
       for(int j=0;j< gamelife->width;j++)
          set_value(gamelife,i,j,0);
   }
}


int get_value(GameLife *gamelife, int row, int column){
    return *(gamelife->board + column*gamelife->height + row);
}

void set_value(GameLife *gamelife, int row, int column, int value){
    *(gamelife->board + column*gamelife->height + row) = value;
}

void color_value(GameLife *gamelife,int row, int column){
  if(get_value(gamelife,row,column))
    printf(YELLOW);
  else
    printf("  ");
}

void show_board(GameLife *gamelife){
  printf(CLEAR_SCREEN);
  for(int i=0;i<gamelife->height;i++){
    for(int j=0;j<gamelife->width;j++)
      color_value(gamelife,i,j);
    printf("\n");
  }
}