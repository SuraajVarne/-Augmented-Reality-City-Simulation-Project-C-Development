/*
* Code file defining the functions for all region classes in the simulation
*
* Author: Kevin, Suraj, and Divyam
*/
#include <iostream>
#include <string>
#include "regions.h"
#include "citysubjects.h"

/* Parent Region Class */
Region::Region(){
    pollution = 0;
    population = 0;
    regionLetter = " ";
}
void Region::SetPollution(int newPollution){ pollution = newPollution; }
int Region::GetPollution() { return pollution; }
void Region::SetPopulation(int newPopulation){ population = newPopulation; }
int Region::GetPopulation() { return population; }
std::string Region::GetRegionLetter() {
    if(population > 0 && regionLetter != " "){
        return "" + std::to_string(population);
    }
    return this->regionLetter;
}
void Region::Update(std::vector<Region*> adjacencies){
    std::cout << "If you are accessing this function, then you did something wrong" << std::endl;
}



/* Residential Region Class */
Residential::Residential(){ population = 0;regionLetter = "R"; }
void Residential::Update(std::vector<Region*> adjacencies) { 
int count = 0;
    //Increase population based on surrounding neighbors
    for(Region* region : adjacencies){

        if(population == 0 && ((dynamic_cast<Powerline*>(region) != nullptr) || region->GetPopulation() > 0)){              //If the population is 0, and either one of the regions around is a powerline or population = 1, increase population to 1
            population = 1;
            
        }
        else if(population == 1 && region->GetPopulation() >= 1){
            count + =1;
            if(count >= 2){
                population = 2;
                count = 0;
            }
        }
        else if(population == 2 && region->GetPopulation() >= 2){
            count += 1;
            if (count >= 4){ 
            population = 3;
            count = 0;
            }
        }
        else if(population == 3 &&  region->GetPopulation() >= 3){
            count +=1;
            if(count >= 6){
            population = 4;
            count = 0;
            }
        }
        else if(population == 4 && region->GetPopulation() >= 4){
            count +=1;
            if(count >= 8){
                count = 0;
            population = 5;
            }
        }

        //TODO: Circumstances for when population = 1/2/3/4
    }
}


/* Industrial Region Class */
Industrial::Industrial(){ Region(); regionLetter = "I"; }
void Industrial::Update(std::vector<Region*> adjacencies) { 
    int count = 0;
    //Increase population based on surrounding neighbors AND available workers
    for(Region* region : adjacencies){
    
        if(population == 0 && ((dynamic_cast<Powerline*>(region) != nullptr)){
        population = 1;
        }
        else if(population == 1 && region->GetPopulation() >= 1){
            count +=1;
            if(count >= 2){
            population = 2;
            count = 0;
            }
        }
        else if(population == 2 && region->GetPopulation() >= 2){
            count += 1;
            if(count >= 4){
            population = 2;
            count = 0;
            }
        }
        
        //TODO: circumstances for when population = 0/1/2
        //      Do not forget to update pollution of surrounding regions ONLY based on increasing population
    }
}


/* Commercial Region Class */
Commercial::Commercial(){ Region(); regionLetter = "C"; }
void Commercial::Update(std::vector<Region*> adjacencies) { 
        int count = 0;
    //Increase population based on surrounding neighbors, available workers, AND available goods
    for(Region* region : adjacencies){

        if(population == 0 && ((dynamic_cast<Powerline*>(region) != nullptr)){
            population = 1;
        }
        else if(population == 1 && region->GetPopulation() >= 1){
            count += 1;
            if(count >= 1){
                count = 0;
                population = 2;
            }
        }

        //TODO: circumstances for when population = 0/1
    }
}


/* Powerplant Region Class */
Powerplant::Powerplant(){  Region(); regionLetter = "P"; }
void Powerplant::Update(){
    //TODO: Likely does not need implementation

}


/* Powerline Region Class */
Powerline::Powerline(){ Region(); regionLetter = "T"; }
void Powerline::Update() { 
    //TODO: Only needs implementation if powerline adjacent to a power plant is required

}


/* Road Region Class */
Road::Road(){ Region(); regionLetter = "-"; }
void Road::Update() { 
    //TODO: Only needs implementation if required
}


/* PowerlineRoad Region Class */
PowerlineRoad::PowerlineRoad(){ Region(); regionLetter = "#"; }
void PowerlineRoad::Update() { 
    //TODO: Only needs implementation if required
}