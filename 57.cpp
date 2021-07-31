#include <iostream> 
#include <fstream> 
#include <string> 
using namespace std; 
int main () { 
string line;
ofstream thefile; 
 
 
    thefile.open ("Student1.txt");    
    thefile <<"writing this to a file. \n";       
    thefile.close();      
    ifstream myfile ("Student1.txt"); 
      if (myfile.is_open()) 
    { 
      while (! myfile.eof()) 
    { 
      getline (myfile, line);       cout << line << endl; 
    } 
} 
else cout << "unable to open file"; cout<<line; cin>>line; return 0; 
} 



writing this to a file. 

My Name is Amit