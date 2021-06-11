#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"board.h"
#include"game.h"

void new_game_life(GameLife *gamelife, int width, int height){
   gamelife->width = width;
   gamelife->height = height;
   gamelife->main_board = (int *)malloc(gamelife->width * gamelife->height * sizeof(int));
   gamelife->temp_board = (int *)malloc(gamelife->width * gamelife->height * sizeof(int));

   for(int i=0;i< gamelife->height;i++){
      for(int j=0;j< gamelife->width;j++){
        set_value(gamelife,i,j,0,"main_board");
        set_value(gamelife,i,j,0,"temp_board");
      }
   }
}


int get_value(GameLife *gamelife, int row, int column, char *type){
  if(!strcmp(type,"main_board"))
    return *(gamelife->main_board + column*gamelife->height + row);
  return *(gamelife->temp_board + column*gamelife->height + row);
}

void set_value(GameLife *gamelife, int row, int column, int value, char *type){
    if(!strcmp(type,"main_board"))
      *(gamelife->main_board + column*gamelife->height + row) = value;
    else if(!strcmp(type,"temp_board"))
      *(gamelife->temp_board + column*gamelife->height + row) = value;
}

void color_value(GameLife *gamelife,int row, int column){
  if(get_value(gamelife,row,column,"main_board"))
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