#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
#include<unistd.h>
#include"game.h"
#include"board.h"

int main(int argc, char *argv[]){
  srand(time(NULL));
  GameLife game;
  if(argc<3){
    printf("Please enter the width and height of the board as argument\n");
    return 0;
  }
  int width = atoi(argv[1]), heigth = atoi(argv[2]);
  
  new_game_life(&game,width,heigth);
  //random_table(&game);
  set_value(&game,1,2,1,"main_board");
  set_value(&game,2,3,1,"main_board");
  set_value(&game,3,3,1,"main_board");
  set_value(&game,3,2,1,"main_board");
  set_value(&game,3,1,1,"main_board");

  set_value(&game,1,2,1,"temp_board");
  set_value(&game,2,3,1,"temp_board");
  set_value(&game,3,3,1,"temp_board");
  set_value(&game,3,2,1,"temp_board");
  set_value(&game,3,1,1,"temp_board");

  while(true){
    show_board(&game);
    update_game(&game);
    sleep(1);
  }
}