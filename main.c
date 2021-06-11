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
  if(argc<4){
    printf("Please enter the width,height and game type (circular or clipped) of the board as argument\n");
    return 0;
  }
  int width = atoi(argv[1]), heigth = atoi(argv[2]);
  
  new_game_life(&game,width,heigth,argv[3]);
  random_table(&game);
  while(true){
    show_board(&game);
    update_game(&game);
    sleep(1);
  }
}