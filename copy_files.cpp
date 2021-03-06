#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc , char const *argv[]){
    ifstream fin;
 	ofstream fout;
	
	if(argc==1){
		cerr << "Enter two elements" <<endl;
	}
	// open the first file
 	fin.open(string(argv[1]));
	char c;

 	if (fin.fail()) // check if it is successful 
 	{
 		cerr << " Cannot open the input file!" << endl;
 		return 1;
 	}
 	

	// open the second file

	fout.open(string(argv[2]));
 	if (fout.fail())
 	{
 		cerr << " Cannot open the output file!" << endl;
 		return 1;
 	}
 	
 	while(fin.get(c)) 
	{
		fout << c;
	}
 	
 	fin.close(); 

 	fout.close();


    return 0;
}
