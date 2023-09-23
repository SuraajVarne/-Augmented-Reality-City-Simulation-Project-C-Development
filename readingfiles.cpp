#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<sstream>
//#include<conio.h>
using namespace std;

 
int main () 
{
  
 
vector < vector < string >> myArray;
  
vector < string > row;
  
string row_text;
string single_line;
  string data;
    ifstream config ( "config1.txt" );

    if (!config)
    {
        cout << "Unable to open the file. config file \n";
  
        return 0;
    }
    
    else{
        getline (config, data);
        cout << "file name: " << data.substr(data.find(":") + 1) << endl;
		getline (config, data);
        cout << "Time Limit: " << data.substr(data.find(":") + 1) << endl;
		getline (config, data);
        cout << "Refresh Rate: " << data.substr(data.find(":") + 1) << endl;
    }
 
fstream file ("region1.csv");
  
 
if (file.is_open ())
    {
      
while (getline (file, single_line))
	
	{
	  
row.clear ();
	  
 
stringstream str (single_line);
	  
 
while (getline (str, row_text, ',')){
	    
row.push_back (row_text);
}
	  
myArray.push_back (row);
	
}
    
}
  
 
 
  else
    {
      
cout << "Error reading the file region file." << endl;
    
}
  
for (int i = 0; i < myArray.size (); i++)
    {
      
 
for (int j = 0; j < myArray[i].size (); j++)
	{
	  
cout << myArray[i][j] << " ";
	
} 
cout << endl;
    
} 
 file.close();
 config.close();
return 0;

}


