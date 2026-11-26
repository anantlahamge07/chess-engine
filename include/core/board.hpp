#pragma once
#include "types.hpp"
#include <array>

namespace chess {

    class Board {

        private:
            std::array<Piece, 64> board{};

        public:
            Board() = default;

            Piece retrieve_piece() const;

            bool place_piece();

            bool remove_piece(Piece piece);

            bool clear_board();
    }
}