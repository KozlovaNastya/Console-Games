# Snake Game in C++

## Introduction

This is a simple console-based Snake game implemented in `C++`. The player controls the snake using the keyboard and must eat the fruit to grow in size while avoiding collisions with itself.

## Features

- Console-based graphics using `ASCII` characters.

- Responsive controls with real-time movement.

- Food spawning at random locations.

- Snake grows in size upon eating food.

- Wall-wrapping mechanics (snake moves through one wall and appears on the opposite side).

- Simple game-over condition when colliding with itself.

## How to Play

- Use the following keys to control the snake:

  - `W` - Move Up

  - `A` - Move Left

  - `S` - Move Down

  - `D` - Move Right

  - `X` - Quit the game

- Eat the fruit (`f`) to increase your score and grow the snake.

- Avoid colliding with yourself.

- The game ends when the snake collides with its own body.

## Game Mechanics

- The snake moves continuously in the last input direction.

- The tail follows the head, growing when food is eaten.

- The game screen is bordered with `#` symbols.

- The snake can pass through walls and reappear on the opposite side.

## Installation & Execution
1. Ensure you have a `C++` compiler installed (e.g., `MinGW` for Windows or `g++` for Linux/macOS).

2. Copy the source code into a file, e.g., `main.cpp`.

3. Open a terminal or command prompt and navigate to the file location.

4. Compile the program:

```
g++ main.cpp -o main`
```

5. Run the game:

```
./main
```

## Dependencies

- Windows OS (for `conio.h` and `windows.h` support). To run it on Linux/macOS, modifications will be needed.

- `C++` compiler supporting `C++98` or later.

## Potential Improvements

- Add difficulty levels (increase snake speed as score increases).

- Implement a high-score system.

- Add a pause function.

- Improve graphics using a graphical library like `SFML` or `SDL`.

- Implement sound effects.
