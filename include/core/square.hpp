#pragma once
#include "types.hpp"
#include <string>
constexpr std::array<char, 8> files = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};

char get_file(SquareIndex squareIndex);

uint8_t get_rank(SquareIndex squareIndex);

SquareIndex get_squareindex(char file, uint8_t rank);

bool validate_square(SquareIndex squareIndex);

SquareIndex convert_chess_notation(std::string chess_notation);

