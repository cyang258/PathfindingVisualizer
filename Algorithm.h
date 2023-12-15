#ifndef ALGORITHM_H
#define ALGORITHM_H

#include <vector>
#include "Board.h"

/**
* Abstract algorithm class and connects it to current board.
*/
class Algorithm
{
   protected:
       Board* currentBoard;
   public:
       virtual std::pair<std::vector<std::pair<int, int>>, std::vector<std::pair<int, int>>> runAlgorithm() = 0;
};

#endif