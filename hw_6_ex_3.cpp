//Chris Brady
//4.22.18

#include<iostream>
#include<random>
#include<cmath>
#include<functional>
#include<string>

using namespace std;

int main(int argc, char* argv[]){
	
	double a = stod(argv[1]);
	double b = stod(argv[2]);

	
	random_device rd;
	int seed_value = rd();

	mt19937 generator(seed_value);
	uniform_real_distribution<double> distribution(-1,1);
	
	auto draw = bind(distribution, generator);

	int N = stoll(argv[3]);
	int success = 0;

	double x, y, dist, net_dist;

	for(int i = 0; i < N; i++){
		x = draw();
		y = draw();

		if((x*x + y*y) > 1){
			i--;
		}
		else{
			dist =pow( pow(a-x, 2)+pow(b-y,2),.5);
			net_dist += dist;
			}
	}
	double avg_dist = net_dist/N;
	cout<<"The expected distance between a random point in the unit disk and ("<<a<<" , "<<b<<") is "<<avg_dist<<endl;

return 0;	
}
