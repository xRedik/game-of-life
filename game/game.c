#include<stdio.h>
#include<stdlib.h>
#include"game.h"

void random_table(GameLife *gamelife){
  for (int i = 0; i < gamelife->height; i++)
    for (int j = 0; j < gamelife->width; j++)
      set_value(gamelife,i,j,rand() % 2,"main_board");

  for(int i=0;i<gamelife->height;i++)
    for(int j=0;j<gamelife->width;j++)
      set_value(gamelife,i,j,get_value(gamelife,i,j,"main_board"),"temp_board");
}

int count_alive_neighbors(GameLife *gamelife,int row, int column){
  int arr_neighbors[8][2] = {{row-1,column},{row+1,column},
                             {row,column-1},{row,column+1},
                             {row-1,column-1},{row+1,column+1},
                             {row-1,column+1},{row+1,column-1}};
  int c=0;
  for(int i=0;i<8;i++)
    if(arr_neighbors[i][0]>=0 && arr_neighbors[i][1]>=0 && 
       arr_neighbors[i][0]<gamelife->height && arr_neighbors[i][1]<gamelife->width)
      if(get_value(gamelife,arr_neighbors[i][0],arr_neighbors[i][1],"main_board"))
        c++;
  return c;
}

void update_game(GameLife *gamelife){
  for (int i = 0; i < gamelife->height; i++){
    for (int j = 0; j < gamelife->width; j++){
      int alive_n = count_alive_neighbors(gamelife,i,j);
      if(!get_value(gamelife,i,j,"main_board") && alive_n==3){
        set_value(gamelife,i,j,1,"temp_board");
        continue;
      }
      
      if(get_value(gamelife,i,j,"main_board") && (alive_n==2 || alive_n==3))
        set_value(gamelife,i,j,1,"temp_board");
      else
        set_value(gamelife,i,j,0,"temp_board");
    }
  }
  for(int i=0;i<gamelife->height;i++){
    for(int j=0;j<gamelife->width;j++){
      set_value(gamelife,i,j,get_value(gamelife,i,j,"temp_board"),"main_board");
    }
  }
}