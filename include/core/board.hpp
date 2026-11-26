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

        Piece retievePiece() const;

        void placePiece();

        void removePiece(Piece piece);

        void clearBoard();
};