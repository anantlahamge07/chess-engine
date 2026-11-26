#include "../../include/core/square.hpp"
#include <algorithm>
char getFile(SquareIndex squareIndex) {
    uint8_t mod = squareIndex.square % 8;
    return files[mod];
    
}

uint8_t getRank(SquareIndex squareIndex) {
    return (squareIndex.square/8) + 1;    
}


bool validateSquare(SquareIndex squareIndex) {
    return (squareIndex.square >= 0 && squareIndex.square < 64);
}
SquareIndex getSquareIndex(char file, uint8_t rank) {
    auto it = std::find(files.begin(), files.end(), file);
    size_t fileIndex = std::distance(files.begin(), it);
    SquareIndex squareIndex;
    squareIndex.square = (8 * ( rank - 1) + (uint8_t) fileIndex);
    return squareIndex;
}

std::optional<SquareIndex> convertChessNotation(std::string chessNotation) {
    char file = chessNotation[0];
    uint8_t fileIndex = *(std::find(files.begin(), files.end(), file));
    std::string rank_str = "";
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
    SquareIndex squareIndex = getSquareIndex(file, rank);

    if (validateSquare(squareIndex)) {
        return squareIndex;
    }
    return std::nullopt;
}

