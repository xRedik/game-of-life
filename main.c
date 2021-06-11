#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
#include<unistd.h>
#include "./board/board.h"
#include "./game/game.h"

int main(int argc, char *argv[]){
  srand(time(NULL));
  GameLife game;
  if(argc<3){
    printf("Please enter the width and height of the board as argument\n");
    return 0;
  }
  int width = atoi(argv[1]), heigth = atoi(argv[2]);
  
  new_game_life(&game,width,heigth);
  random_table(&game);
  while(true){
    show_board(&game);
    update_game(&game);
    sleep(1);
  }
}