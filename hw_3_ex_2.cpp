//Chris Brady
//HW 3 Ex 2
//Sci Comp

#include<iostream>
using namespace std;

void permCalc(int n, int k);
int factorial(int b);

int main(){

	for(int i =1; i <= 10; i++){
		for (int j = 0; j <= i; j++){
			permCalc(i, j);
			}
		}
}


void permCalc(int n, int k){
	int num, denom, result;
	denom = factorial(k)*factorial(n-k);
	num = factorial(n);
	result = num/denom;
	cout<<n<<" permutation "<<k<<" = "<<result<<"."<<endl;

}


int factorial(int b){
	int var =1;
	int out = 1;
	while(var <= b){
		out = out*var;
		var++;
	}
	return out;
}
