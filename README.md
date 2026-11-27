# Chess Engine

A chess engine written in **C++**. The project is being developed incrementally, starting with the core board and position representation before moving on to move generation and chess rules.

## Project status

The project is currently in its foundational stage.

### Implemented

- **Core types** — `Color`, `PieceType`, `Piece`, `SquareIndex`, `Move`, and castling-right definitions.
- **Square utilities** — conversion between board indices and algebraic square notation, plus square-related validation.
- **Board representation** — a 64-square board backed by `std::array`, with operations to retrieve, place, move, remove, and clear pieces.
- **Position representation** — stores the board and game-state information, including side to move, castling rights, en passant target, and move counters.
- **Position accessors** — getters and setters for the position state.

### In progress

- Initial board setup — placing all 32 pieces in their standard starting squares. The `Board::setupInitialBoard()` method is currently a TODO.
- Position reset — restoring the complete position to the standard starting state.

### Planned

1. Finalise the move representation and special-move flags.
2. Implement pseudo-legal move generation for each piece type.
3. Handle special moves: castling, en passant, and pawn promotion.
4. Implement legal-move filtering, including check and king-safety detection.
5. Add position notation support (FEN) and move execution/undo.
6. Develop move evaluation and search.
7. Add tests and a playing interface.

## Project structure

```text
.
├── include/
│   └── core/
│       ├── board.hpp
│       ├── position.hpp
│       ├── square.hpp
│       └── types.hpp
├── src/
│   └── core/
│       ├── board.cpp
│       ├── position.cpp
│       └── square.cpp
└── main.cpp
```

## Build

Compile the current source files with a C++ compiler:

```bash
g++ -std=c++17 -Wall -Wextra -Iinclude main.cpp src/core/*.cpp -o chess-engine
```

Run:

```bash
./chess-engine
```

## Design direction

The code is organised around a few core responsibilities:

- `Board` manages the pieces occupying the 64 squares.
- `Position` stores the board together with the game state.
- `SquareIndex` provides a compact index for each square.

The board indexing convention is **a1 = 0**, **b1 = 1**, continuing across the first rank, with **h8 = 63**.

The implementation is still evolving; features listed under *Planned* are not yet implemented.
