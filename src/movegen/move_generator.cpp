#include "../../include/movegen/move_generator.hpp"

void MoveGenerator::generatePseudoLegalMoves(const Position &position) {
    Board board = position.getBoard();
    for (uint8_t i = 0; i < 64; i++)
    {
        SquareIndex squareIndex ;
        squareIndex.square = i;
        // getting the piece on the ith index
        Piece piece = board.retrievePiece(squareIndex);
        // we just want to generate moves for our pieces, not for the opponent's pieces
        // we will skip if the quare is empty
        if (!isFriendlyPiece(position, squareIndex) || isSquareEmpty(position, squareIndex)) {
            continue;
        }
        switch (piece.type)
        {
        case PieceType::BISHOP:
            generateBishopMoves();
            break;
        case PieceType::PAWN:
            generatePawnMoves();
            break;
        case PieceType::KNIGHT:
            generateKingMoves();
            break;
        case PieceType::QUEEN:
            generateQueenMoves();
            break;
        case PieceType::KING:
            generateKingMoves();
            break;
        case PieceType::ROOK:
            generateRookMoves();
            break;
        default:
            break;
        }
    }
}

bool MoveGenerator::isFriendlyPiece(const Position &postion, SquareIndex squareIndex) {
    return postion.getBoard().retrievePiece(squareIndex).color == this->color;
}
bool MoveGenerator::isSquareEmpty(const Position &position, SquareIndex squareIndex) {
    return !(position.getBoard().is_occupied(squareIndex));
}