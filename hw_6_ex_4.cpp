//Chris Brady
//4/22/18
#define _USE_MATH_DEFINES

#include<vector>
#include<iostream>
#include<random>
#include<cmath>
#include<functional>
#include<string>

using namespace std;

double rand_walk(int dimensions, int stepCount);

int main(int argc, char* argv[]){

	int d = stoi(argv[1]);
	int K = stoi(argv[2]);
	int N = stoi(argv[3]);
double netDist = 0;
	
for (int a = 0; a < N; a++){
	netDist += rand_walk(d, K);
}

double avDist = netDist/N;

cout<<"In "<<d<<" dimension(s), the average distance to the origin after "<<K<<" steps is: "<<endl;
cout<<avDist<<"\n"<<endl;
cout<<"This result was generated from a Monte Carlo simulation with "<<N<<" trials."<<endl;
cout<<"This value is "<<abs(pow(2*K/M_PI,.5)-avDist)<<" from the estimated "<<pow(2*K/M_PI,.5)<<" from the approximation of (2*K/pi)^.5"<<endl;
return 0;

}


double rand_walk(int dimensions, int stepCount){
	vector<int> location;


	for(int j = 0; j < dimensions; j++){
		location.push_back(0);
	}

	random_device rd;
	int seed_val = rd();
	mt19937 generator(seed_val);

	uniform_int_distribution<int> distribution(0,dimensions-1);
	
	auto draw = bind(distribution, generator);
	
	bernoulli_distribution dist2(.5);
	
	auto draw2 = bind(dist2, generator);

	int x, dir;

	for(int i = 0; i < stepCount; i++){
		x = draw();
		dir = 2*draw2()-1;  
		location[x] += dir;;
	}
	float dist_square = 0;
	float dist = 0;
 
	for (int l = 0; l < dimensions; l++){
		dist_square += pow(location[l],2);
	}
	dist = pow(dist_square, .5);
return dist;
}
