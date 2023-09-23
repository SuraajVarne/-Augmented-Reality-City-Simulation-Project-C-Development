#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<sstream>

using namespace std;

 
int main () 
{
  
 
vector < vector < string >> myArray;
  
vector < string > row;
  
string row_text;
string single_line;
  
 
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
      
cout << "Error reading the file..." << endl;
    
}
  
for (int i = 0; i < myArray.size (); i++)
    {
      
 
for (int j = 0; j < myArray[i].size (); j++)
	{
	  
cout << myArray[i][j] << " ";
	
} 
cout << endl;
    
} 
 
return 0;

}


