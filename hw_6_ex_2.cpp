//Chris Brady
//April 22nd



#include<iostream>
#include<iomanip>
#include<string>
#include<cmath>
#include<random>
#include<functional>

#include "hw_6_ex_2_f.h"

using namespace std;

int main(int argc, char* argv[]){

	double a = stod(argv[1]);
	double b = stod(argv[2]);
	
	long long int N = stoll(argv[3]);
	
	int seed_value;
	random_device rd;
	
	seed_value = rd();
	mt19937 generator(seed_value);
	uniform_real_distribution<double> distribution(a, b);

	double h = (b-a)/N;

	auto draw = bind(distribution, generator);
	double x; 
	double sum = 0;
	for (long long int i = 0; i < N; i++){
		x = draw();
		sum += f(x);
	}
	
	float result = sum*h;
	cout<<"The integral of this funtion from "<<a<<" to " <<b<<" by Monte Carlo using "<<N<<" samples is  "<<result<<endl;	
	
	return 0;
}
