#pragma once
#include "types.hpp"
#include <string>
#include <array>
#include <optional>
constexpr std::array<char, 8> files = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};

char getFile(SquareIndex squareIndex);

uint8_t getRank(SquareIndex squareIndex);

SquareIndex getSquareIndex(char file, uint8_t rank);

bool validateSquare(SquareIndex squareIndex);

std::optional<SquareIndex> convertChessNotation(std::string chess_notation);

