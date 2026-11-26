#pragma once
#include "types.hpp"

enum class MoveFlags {
    EN_PASSANT,
    PROMOTION,
    CASTLE,
    DOUBLE_PAWN_PUSH
};

typedef struct Move {
    SquareIndex from;
    SquareIndex to;
    PieceType promotion;
    MoveFlags moveFlags;
};