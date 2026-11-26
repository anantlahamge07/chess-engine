#include "../../include/core/board.hpp"
#include <cstddef>


void Board::placePiece(Piece piece, SquareIndex squareIndex) {
    this->board[squareIndex.square] = piece;
}
void Board::movePiece(SquareIndex from, SquareIndex to) {
    // validating the inputs
    if (from.square == to.square) return;
    if (!is_inBound(from.square) || !is_inBound(to.square)) return;
    Piece piece = retrievePiece(from);
    this->board[from.square] = EmptyPiece;
    this->board[to.square] = piece;
}
bool Board::is_inBound(uint8_t x) const {
    return (x >= 0 && x < 64);
}
void Board::removePiece(SquareIndex squareIndex) {
    this->board[squareIndex.square] = EmptyPiece;
}
void Board::clearBoard() {
    return this->board.fill(EmptyPiece);
}

Piece Board::retrievePiece(SquareIndex squareIndex) const {
    return this->board[squareIndex.square];
}

bool Board::is_occupied(SquareIndex squareIndex) {
    return this->board[squareIndex.square].type != PieceType::NONE;
}
// TODO: implement me
void Board::setupInitialBoard() {
    return;
}
