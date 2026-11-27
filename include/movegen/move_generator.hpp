#pragma once
#include <vector>
#include "../core/types.hpp"
#include "../core/position.hpp"
// this class generates pseudo legal moves from the current postion

class MoveGenerator {

    
    public:
    
        MoveGenerator() = default;
    
        void generatePseudoLegalMoves(const Position &position);
    
    private:

        std::vector<Move> generatedMoves{};
        void generatePawnMoves();
        void generateKnightMoves();
        void generateBishopMoves();
        void generateRookMoves();
        void generateQueenMoves();
        void generateKingMoves();

        // helper functions, which will make our life easier
        void addMove(Move move);
        bool isFriendlyPiece(SquareIndex squareIndex);
}