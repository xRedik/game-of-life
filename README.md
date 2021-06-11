# Game of Life

### Summary
This is the implementaion of Conway's Game of Life with using C programming language by Farid Guliyev and Emil Guluzade. The are 3 main tag in this repository. And step2 and step3 was committed with using the branches, you can see the history clearly as you want. Now let's give the brief informations about the steps.

### How We Developed This Project
#### Step1
The first tag is step1 which consists of game itself with clipped version and makefile. With using makefile we can run, clear, dict, and doc the files. For compiling the game you should only write make command. Then for running the program you should execute the program with arguments width and height, like
```
./gamelife 10 10
```
As I said this 10 10 show us the width and height of the board. Of course you can choose whatever board size you want.
#### Step2

Step2 basically the same program but with using cmake instead of make. For running it you should write the commands
```
mkdir build
cmake -S . -B build/
cd build
make
```
#### Step2
This program is just the life of game which has the extra feature which we can enter as argument if we want our game as circular or clipped, like
```
./gamelife 10 10 circular
```
After that our game of life will be circular. Now let's see the our game of life style which screenshotted from terminal

![image game of life](https://user-images.githubusercontent.com/56725845/121757204-d99f6180-cb2d-11eb-8558-18769fbf33aa.png)
