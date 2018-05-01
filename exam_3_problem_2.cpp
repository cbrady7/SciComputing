//Chris Brady
//Problem 2
//

#include<iostream>
#include<vector>
#include<random>
#include<string>
#include<iomanip>
#include<functional>
#include<fstream>

using namespace std;



int main(int argc, char* argv[]){
	int seed;
	random_device rd;

	seed = rd();
	
	int num_marbles = stoi(argv[1]);
	int num_steps = stoi(argv[2]);
	int num_sims = stoi(argv[3]);
	
	int jar1, picked;


	mt19937 generator(seed);
	uniform_int_distribution<int> distribution(0, num_marbles);

	auto draw = bind(distribution, generator);

	uniform_int_distribution<int> dist2(0, num_marbles-1);

	auto draw2 = bind(dist2, generator);

	int results[num_marbles+1] = {0};

	for(long int i = 0; i < num_sims; i++){
		jar1 = draw();
		for(int j = 0; j < num_steps; j++){
			picked = draw2();
			if(picked < jar1){
				jar1 -= 1;
			}
			else{
				jar1 += 1;
			}
		}
		results[jar1] += 1;
	}
	
	ofstream ofs;
	ofs.open("exam_3_problem_2_output.dat");
	
	for(int i = 0; i <= num_marbles; i++){
		ofs<<fixed<<setprecision(6)<<float(results[i])/float(num_sims)<<endl;

	}	
	ofs.close();

	
return 0;
}
