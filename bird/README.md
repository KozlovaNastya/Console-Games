# Flappy Bird in C++

## Introduction

This is a simple console-based Flappy Bird-style game implemented in `C++`. The player controls a bird `0` and must navigate through a series of moving towers `L` by jumping upwards and avoiding collisions.

## Features

- Console-based `ASCII` graphics.

- Gravity simulation for the bird.

- Randomly generated towers with a gap for passing through.

- Score tracking system.

- Simple game-over condition upon collision.

## How to Play

- Use the following keys to control the bird:

  - `W` - Jump upwards.

  - `X` - Quit the game.

- The bird automatically falls over time due to gravity.

- The objective is to navigate through the gaps in the towers and achieve the highest score possible.

- The game ends if the bird collides with a tower or the screen borders.

## Game Mechanics

- The bird moves continuously downward unless the player jumps.

- Towers move from right to left across the screen.

- The game generates new towers after the old ones move off-screen.

- The game score increases when the player successfully passes through a tower gap.

## Installation & Execution

1. Ensure you have a `C++` compiler installed (e.g., `MinGW` for Windows or `g++` for Linux/macOS).

2. Copy the source code into a file, e.g., `main.cpp`.

3. Open a terminal or command prompt and navigate to the file location.

4. Compile the program:

```
g++ main.cpp -o main
```

5. Run the game:
```
./main
```

## Dependencies

- Windows OS (for `conio.h` support). To run it on Linux/macOS, modifications will be needed.

- `C++` compiler supporting `C++98` or later.

## Potential Improvements

1. Add difficulty scaling (increase game speed over time).

2. Implement a high-score tracking system.

3. Add a pause function.

4. Improve graphics using a graphical library like `SFML` or `SDL`.

5. Implement sound effects.
