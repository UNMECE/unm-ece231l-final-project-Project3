#include "acequia_manager.h"
#include <iostream>

void solveProblems(AcequiaManager& manager)
{

        auto canals = manager.getCanals();

        auto regions = manager.getRegions();

    double flow = 0.5; //magic sauce numbah play with it if you want

    while (!manager.isSolved && manager.hour < manager.SimulationMax)
    {
            double needNorth = regions[0]->waterNeed - regions[0]->waterLevel;
            double needSouth = regions[1]->waterNeed - regions[1]->waterLevel;
            double needEast  = regions[2]->waterNeed - regions[2]->waterLevel;
//R ya thirstie mayyyteee? heres a gatorade
//waterneed thing
        if (needNorth > 0)
        {
            canals[3]->toggleOpen(true);
            canals[3]->setFlowRate(flow);
        }
else
        {
            canals[3]->toggleOpen(false);
        }
//slamming a bunch of if else type deals

        if (needSouth > 0)
        {
            canals[0]->toggleOpen(true);
            canals[0]->setFlowRate(flow);
        }
        else
        {
            canals[0]->toggleOpen(false);
        }
        if (needEast > 0)
        {
            canals[1]->toggleOpen(true);
            canals[1]->setFlowRate(flow);
        }
        else
        {
            canals[1]->toggleOpen(false);
        }
        if (needEast > 0 && needNorth <= 0)
        {
            canals[2]->toggleOpen(true);
            canals[2]->setFlowRate(flow * 0.5);
        }
        else
        {
            canals[2]->toggleOpen(false);
        }
        manager.nexthour();
    }
}