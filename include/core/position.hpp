#pragma once
#include "types.hpp"
#include "board.hpp"



class Position {

    private:
        bool initialPosition;
        CastlingRights castlingRights;
        Board board;
        Color sideToMove;
        SquareIndex EnPassantSquare;
        // this is important for the 50-move rule
        uint8_t halfMoveCount;
        uint32_t fullMoveCount;



    public:
        Position(): initialPosition(true), sideToMove(Color::WHITE), halfMoveCount(0), fullMoveCount(0) {};

        // all the getters
        Board& getBoard() const;

        Color getSideToMove() const;

        SquareIndex getEnPassantSquare() const;

        uint8_t getHalfMoveCount() const;
        
        uint32_t getFullMoveCount() const;

        bool getInitialPosition() const;

        // all the setters
        void setSideToMove();

        void setEnPassantSquare();

        void setHalfMoveCount();
        
        void setFullMoveCount();

        bool isSquareOccupied();

        void reset();




};