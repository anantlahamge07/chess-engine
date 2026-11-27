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
        Color color;
        void generatePawnMoves();
        void generateKnightMoves();
        void generateBishopMoves();
        void generateRookMoves();
        void generateQueenMoves();
        void generateKingMoves();
        std::vector<Move> getGeneratedMoves() const;
        // helper functions, which will make our life easier
        void addMove(Move move);
        bool isFriendlyPiece(const Position &postion, SquareIndex squareIndex);
        bool MoveGenerator::isSquareEmpty(const Position &position, SquareIndex suqareIndex);
}