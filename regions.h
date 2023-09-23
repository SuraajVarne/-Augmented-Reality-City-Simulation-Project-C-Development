#include <vector>

/* Parent Region Class */
class Region{
public:
    Region();
    Region(int);
    void AddAdjacent(Region*);
    vector<Region*> GetAdjacent();
    void SetPollution(int);
    int GetPollution();
private:
    vector<Region*> adjacencies;
    int pollution;
}


/* Residential Region Class */
class Residential : public Region{
public:
    Residential();
    Residential(int);
    void SetPopulation(int);
    int GetPopulation();
private:
    int population;
}

/* Industrial Region Class */

/* Commercial Region Class */

/* Powerline Region Class */

/* Road Region Class */

