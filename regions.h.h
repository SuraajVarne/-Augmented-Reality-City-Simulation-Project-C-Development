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
};


/* Residential Region Class */
class Residential : public Region{
public:
    Residential();
    Residential(int);
    void SetPopulation_Residential(int);
    int GetPopulation_Residential();
private:
    int population_Residential;
};

/* Industrial Region Class */
class Industrial : public Region{
public:
    Industrial();
    Industrial(int);
    void SetPopulation_Industrial(int);
    int GetPopulation_Industrial();
private:
    int population_Industrial;
};

/* Commercial Region Class */
class Commercial : public Region{
public:
    Commercial();
    Commercial(int);
    void SetPopulation_Commercial(int);
    int GetPopulation_Commercial();
private:
    int population_Commercial;
};

/* Powerline Region Class */

/* Road Region Class */

