#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <conio.h>
using namespace std;

int main()
{
    string data;
    ifstream config ( "config1.txt" );

    if (!config)
    {
        cout << "Unable to open the file.\n";
        getch();
        return 0;
    }
    
    while(config.good())
    {
        getline (config, data);
        cout << data.substr(data.find(":") + 1) << endl;
    }
    return 0;
}