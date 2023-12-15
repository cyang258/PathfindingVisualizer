#ifndef LOGICSERVER_H
#define LOGICSERVER_H

#include "AlgorithmFactory.h"
#include "Block.h"
#include <vector>

/**
* Class to handle calls between the algorithm class and interface.
*/
class LogicServer
{
    public:
        /**
        * The constructor calls the pathfinding algorithm based on the chosen algorithm.
        */
        LogicServer(Board* board) {
            AlgorithmFactory* factory;
            type = 0;
            algorithmInstance_ = factory->createAlgorithmInstance(type, board);
        }
        void setAlgorithm(int algorithmType, Board* board);
        int getAlgorithmType();
        std::pair<std::vector<std::pair<int, int>>, std::vector<std::pair<int, int>>> runAlgorithm();
    private:
        int type;
        Algorithm *algorithmInstance_;
};
#endif