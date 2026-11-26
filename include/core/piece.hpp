
#pragma once
#include <cstdint>

// constants for board dimensions
#define ROWS 8
#define COLUMNS 8

enum class Color: uint8_t {
    WHITE,
    BLACK
};

enum class PieceType: uint8_t {
    NONE,
    PAWN,
    KNIGHT,
    BISHOP,
    ROOK,
    QUEEN,
    KING
};
// represents a square integer between 0 and 63 (for each square of the chess board)
uint8_t squareIndex;


