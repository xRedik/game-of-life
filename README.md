# Game of Life

### Summary
The are 3 main tag in this repository. Step2 and step3 was committed with using the branches, you can see the history clearly as you want. Also the functions and variables of the main struct was documented with using doxygen. The output also was printed with using ansii colors. Now let's give the detailed informations about the steps.

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
#### Step3
This program is just the life of game which has the extra feature which we can enter as argument if we want our game as circular or clipped, like
```
./gamelife 10 10 circular
```
After that our game of life will be circular. Now let's see the our game of life style which screenshotted from terminal

![Screenshot from 2021-06-12 03-29-44](https://user-images.githubusercontent.com/56725845/121757402-7661ff00-cb2e-11eb-9673-80b22abb1ede.png)
