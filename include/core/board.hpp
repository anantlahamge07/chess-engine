#pragma once
#include "types.hpp"
#include <array>

// namespace chess {
// }

class Board {

    private:
        std::array<Piece, 64> board{};

    public:
        Board() = default;

        Piece retrievePiece(PieceType pieceType, Color color) const;

        void placePiece(Piece piece, SquareIndex squareIndex);

        void removePiece(Piece piece);

        void clearBoard();
};