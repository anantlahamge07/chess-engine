#include "include/core/square.hpp"

int main(int argc, char const *argv[])
{
    SquareIndex squareIndex;
    squareIndex.square = 0;
    std::string chessNotation = "21";
    auto t = getSquareIndex('a', 10);
    auto res = convertChessNotation(chessNotation);
    printf("%u\n", t.square);
    if (res.has_value()) {
        printf("%u\n", res.value().square);
    } else {
        printf("input is not a valid chess notation\n");
    }
    return 0;
}
