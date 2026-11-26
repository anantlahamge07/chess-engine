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

// represents an empty piece
constexpr Piece EmptyPiece{
    PieceType::NONE,
    Color::WHITE
};


enum class CastlingRights: uint8_t {
    WHITE_KINGSIDE = 1,
    WHITE_QUEENSIDE = 2,
    BLACK_KINGSIDE = 4,
    BLACK_QUEENSIDE = 8
};

// sturtc representing a pice of the game
typedef struct Piece {
    PieceType type;
    Color color;
};


// represents a square integer between 0 and 63 (for each square of the chess board)
typedef struct SquareIndex {
    uint8_t square;
};

// represents 64 squares using a 64 bit integer
uint64_t bitBoard;
