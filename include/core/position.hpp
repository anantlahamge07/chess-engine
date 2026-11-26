#pragma once
#include "types.hpp"
#include "board.hpp"



class Position {

    private:
        bool initialPosition;
        uint8_t castlingRights;
        Board board;
        Color sideToMove;
        SquareIndex enPassantSquare;
        // this is important for the 50-move rule
        uint8_t halfMoveCount;
        uint32_t fullMoveCount;



    public:
        Position(): initialPosition(true), castlingRights(1 | 2 | 4 | 8), sideToMove(Color::WHITE), halfMoveCount(0), fullMoveCount(1) {};

        // all the getters
        Board getBoard() const;

        Color getSideToMove() const;

        SquareIndex getEnPassantSquare() const;

        uint8_t getHalfMoveCount() const;
        
        uint32_t getFullMoveCount() const;

        bool getInitialPosition() const;

        // all the setters
        void setSideToMove(Color sideToMove);

        void setEnPassantSquare(SquareIndex enPassentSquare);

        void setHalfMoveCount(uint8_t halfMovecount);
        
        void setFullMoveCount(uint8_t fullMovecount);

        bool isSquareOccupied(SquareIndex squareIndex);

        void reset();




};