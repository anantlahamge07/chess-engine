#include "../../include/core/position.hpp"



Position::Position() {};

Board Position::getBoard() const {
    return this->board;
}

SquareIndex Position::getEnPassantSquare() const {
    return this->enPassantSquare;
}


Color Position::getSideToMove() const {
    return this->sideToMove;
}


uint8_t Position::getHalfMoveCount() const {
    return this->halfMoveCount;
}

uint32_t Position::getFullMoveCount() const {
    return this->fullMoveCount;
}

bool Position::getInitialPosition() const {
    return this->initialPosition;
}

// all the setters
void Position::setSideToMove(Color sideToMove) {
    this->sideToMove = sideToMove;
}

void Position::setEnPassantSquare(SquareIndex enPassentSquare) {
    this->enPassantSquare = enPassantSquare;
}

void Position::setHalfMoveCount(uint8_t halfMovecount) {
    this->halfMoveCount = halfMoveCount;

}

void Position::setFullMoveCount(uint8_t fullMovecount) {
    this->fullMoveCount = fullMoveCount;
}

bool Position::isSquareOccupied(SquareIndex squareIndex) {
    return this->board.is_occupied(squareIndex);
}

void Position::reset() {

}
