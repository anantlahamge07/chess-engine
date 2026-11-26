#pragma once
#include "types.hpp"
#include <array>



class Board {

    private:
        std::array<Piece, 64> board{};

    public:
        Board() = default;

        bool Board::is_inBound(uint8_t x) const;

        Piece retrievePiece(SquareIndex squareIndex) const;

        void placePiece(Piece piece, SquareIndex squareIndex);

        void Board::movePiece(SquareIndex from, SquareIndex to);

        void removePiece(SquareIndex squareIndex);

        void clearBoard();

        bool is_occupied(SquareIndex squareIndex);
};