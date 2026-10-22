# C++ Noughts and Crosses

A command-line Noughts and Crosses (Tic-Tac-Toe) game written in C++. This project demonstrates foundational C++ concepts including control flow, user input validation, and game loop logic.

## Features
* **Two-Player Support:** Alternates turns between Player 1 (`O`) and Player 2 (`X`).
* **Move Validation:** Prevents players from overwriting existing moves or selecting invalid grid numbers.
* **Win/Draw Detection:** Automatically detects 3-in-a-row (rows, columns, diagonals) or declares a draw if the board fills up.
* **Replayability:** Prompts users to start a new round without exiting the program.

## How to Compile and Run

1. Open your terminal in the directory containing `main.cpp`.
2. Compile the code using g++:
   ```bash
   g++ -o tictactoe main.cpp
