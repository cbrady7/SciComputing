\//Chris Brady
//Sci Comp

#include<iostream>
#include<string>
#include<vector>
#include<fstream>

#include "hw_6_ex_1_f.h"

using namespace std;

int main(int argc, char* argv[]){
	
	double y0 = stod(argv[1]);
	double b = stod(argv[2]);
	int N = stoi(argv[3]);
	string output_name = argv[4];
	double y = y0;
	double x = 0;
	double h = b/N;
	
	ofstream ofs;
	ofs.open(output_name);
	
	if(!ofs.is_open()){
		cout<<"File failed to open!"<<endl;
		return 0;
	}

	ofs<<x<<" "<<y<<"\n";	
	
	for(int i = 0; i < N; i++){
		y += h*f(x,y);
		x += h;
		ofs<<x<<" "<<y<<"\n";
	}
	ofs << flush;
	ofs.close();
	return 0;

}	

	
