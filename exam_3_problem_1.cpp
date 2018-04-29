//Chris Brady 
//Sci Comp
//Final Exam Problem 1
//read in integers from csv and return GCDs of each line

#include <iostream>
#include <fstream> 
#include <vector>
#include <string>

#include <sstream>
#include<cctype>

using namespace std;

vector<int> process_line(string line);
int gcdCheck(int a, int b);
int lineTest(const vector<int> &subject, int n);

int main(){
	ifstream ifs("exam_3_problem_1_input.txt");

	vector<vector<int> > info;

	string line;

	while(getline(ifs, line)){
		info.push_back(process_line(line));
	}

	ifs.close();
	
	ofstream ofs;

	ofs.open("exam_3_problem_1_output.txt");	

	for(int i = 0; i < info.size(); i++){
		ofs<<lineTest(info[i], info[i].size())<<"\n";	
	}
		
	ofs << flush;

	return 0;

}

vector<int> process_line(string line){
	istringstream iss(line);

	string elem;

	vector<int> processed_line;

	while(getline(iss, elem, ',')){
		processed_line.push_back(stoi(elem));
	}

	return processed_line;
}
int gcdCheck(int a, int b){
	if(a == 0){
		return b;
	}
	return gcdCheck(b%a,a);

}
int lineTest(const vector<int> &subject, int n){
	int result = subject[0];
	for (int i = 1; i < subject.size(); i++){
		result = gcdCheck(subject[i],result);
	}
	return result;
}

