#include "regions.h"

/* Parent Region Class */
Region::Region(){
    pollution = 0;
}
Region::Region(int initPollution){
    pollution = initPollution;
}

void AddAdjacent(Region* addRegion){
    //TODO: Determine usefulness of tracking adjacent regions
}
// vector<Region*> GetAdjacent(){
//     return null;
// }

void Region::SetPollution(int newPollution){ pollution = newPollution; }
int Region::GetPollution() { return pollution; }


/* Residential Region Class */
// Residential();
// Residential(int);
// void SetPopulation(int);
// int GetPopulation();


/* Industrial Region Class */

/* Commercial Region Class */

/* Powerline Region Class */

/* Road Region Class */
