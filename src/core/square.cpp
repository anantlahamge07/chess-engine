#include "../../include/core/square.hpp"
#include <array>
#include <algorithm>
char getFile(SquareIndex squareIndex) {
    uint8_t mod = squareIndex.square % 8;
    return files[mod];
    
}

uint8_t getRank(SquareIndex squareIndex) {
    return squareIndex.square/8;    
}

SquareIndex getSquareIndex(char file, uint8_t rank) {
    uint8_t fileIndex = *(std::find(files.begin(), files.end(), file));
    SquareIndex squareIndex;
    squareIndex.square = (8 * (fileIndex - 1) + rank);
}

bool validateSquare(SquareIndex squareIndex) {
    return (squareIndex.square < 64 && squareIndex.square >= 0);
}

SquareIndex convertChessNotation(std::string chessNotation) {
    char file = 'a';
    uint8_t fileIndex = *(std::find(files.begin(), files.end(), file));
    std::string rank_str = 0;
    int k = 0;
    while(chessNotation[k] != '\0') { 
        if (k == 0) {
            k++;
            continue;
        }
        rank_str += chessNotation[k];
        k++;
    }
    int rank = std::stoi(rank_str);
    SquareIndex squareIndex;
    squareIndex.square = 8 * (rank - 1) + fileIndex;
    return squareIndex;
}

