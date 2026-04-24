#include "acequia_manager.h"
#include <iostream>

/*Instructions for this problem:

	The intend of this project is to simulate water management conservation principles in the context of New Mexico

	In this simulation, there exists several Regions (North, South, etc.). Each region class includes both:
	- a given water level
	- a given water need
	- a indicator boolean for if the region is flooded
	- an indicator boolean for if the region is in drought

	With each region, there are given waterSources provided (perhaps a .dat file list each waterSource to  a region) 
	and certain waterSources have canals connected to them to deliver water across regions.

	Given the current state of the region, students wil be asked to utlize the canals that connect regions to
	develop the logic and algorithm for finding a solution. The simulation has a fixed time



	The student solution will be evaluated on the criteria that each region meets the following:
	- a given region is NOT flooded
	- a given region is NOT in drought
	- the region waterNeed does not exceed the region waterLevel 
*/

/*This will be how the solveProblems function is set up. The student may enter their on  */
/*
void solveProblems(AcequiaManager& manager)
{
	//the student can call the members of the canals object such as name of canal. sourceRegion, and destinationRegion
	//This could be helpful in informing the students strategy to solve the problem
	auto canals = manager.getCanals();
	//students may call to get Region and WaterSource objects to inform decisions 


	while(!manager.isSolved && manager.hour!=manager.SimulationMax)
	{	
		//enter student code here


		manager.nexthour();
	}
}
*/


/*example 1 format:

Setting particular commands to the canals at each time instance.

*/

/*
void solveProblems(AcequiaManager& manager)
{
	auto canals = manager.getCanals();
	while(!manager.isSolved && manager.hour!=manager.SimulationMax)
	{
	//Students will implement this function to solve the probelms
	//Example: Adjust canal flow rates and directions
		if(manager.hour==0)
		{
			canals[0]->setFlowRate(1);
			canals[0]->toggleOpen(true);
		}
		else if(manager.hour==1)
		{
			canals[1]->setFlowRate(0.5);
			canals[1]->toggleOpen(true);
		}
		else if(manager.hour==82)
		{
			canals[0]->toggleOpen(false);
			canals[1]->toggleOpen(false);
		}
	//student may add any necessary functions or check on the progress of each region as the simulation moves forward. 
	//The manager takes care of updating the waterLevels of each region and waterSource while the student is just expected
	//to solve how to address the state of each region

		
		manager.nexthour();
	}
}
*/

/*example 3:
Setting multiple canals at a particular time instance
*/

void solveProblems(AcequiaManager& manager)
{
	auto canals = manager.getCanals();
	while(!manager.isSolved && manager.hour!=manager.SimulationMax)
	{
	//Students will implement this function to solve the probelms
	//Example: Adjust canal flow rates and directions
		if(manager.hour==1)
		{
			canals[0]->setFlowRate(0.1);
			canals[0]->toggleOpen(true);
			canals[1]->setFlowRate(0.2);
			canals[1]->toggleOpen(true);
		}
		else if(manager.hour==3)
		{
			canals[0]->toggleOpen(false);
			canals[1]->toggleOpen(false);
		}
	//student may add any necessary functions or check on the progress of each region as the simulation moves forward. 
	//The manager takes care of updating the waterLevels of each region and waterSource while the student is just expected
	//to solve how to address the state of each region

		
		manager.nexthour();
	}
}



/*In this solution, students can make functions that aid in identifying the best course of action for moving
water resources. They can set conditions that then work on the canal vectors based on the information reported

This can help in optimizing solutions for dynamic constraints such as weather (rain, or dried up waterSources) and
make the solution to the problem more abstract, allowing the logic and algorithm to be the sole priority of the student
while the computation is left for the Acequia Manager

This would be the perfect opportunity to identify the tools learned from ECE 231L such as:
data structures (stacks, queues, trees(?)), templates, vector class functions, etc... to aid in the algorithm solution
*/




/*Example 3 */
/*
void getProblemRegions(std::vector<Region *> regions, std::vector<std::string> &DefReg, std::vector<std::string> &GoodReg)
{
	//A function that finds which regions are in good standing and which are in bad standing
}

int getRegion(std::vector<Region *> regions, std::string name)
{
	//a function that gets the name of a region
}

std::string findCanal(std::string region, std::vector<Canal *> canals)
{
	//a function that finds a solution canal to solve the problem
}

void getRegionStatus(std::vector<Region *> regions)
{
	//a function that prints teh current status of a region
}

void solveProblems(AcequiaManager& manager)
{

	auto canals = manager.getCanals();
	auto regions = manager.getRegions();
	//finding the status of the region
	
	std::vector<std::string> ProbRegs;
	std::vector<std::string> GoodRegs;
	std::string targetCanal;
	while(!manager.isSolved && manager.hour!=manager.SimulationMax)
	{
		getRegionStatus(regions);
		getProblemRegions(regions, ProbRegs, GoodRegs);
		if(ProbRegs.size() != 0)
		{
				//find a canal that provides water to that region and adjust canal settings
	
		}
		if(GoodRegs.size() != 0)
		{
			//if a region is good, then leave then no need to open canals
		}

		manager.nexthour();
	}
}
*/