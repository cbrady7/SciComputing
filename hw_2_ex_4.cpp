//Chris Brady
//Sci Comp
//Hw 2 Ex 4

#include<iostream>

using namespace std;

int main(){
	int N, sum = 0;
	
	cout<<"Enter a positive integer, N: "<<endl;
	cin>>N;
	
	for(int i = 0; i<=N; i++){
		int counter = 0;
		if(i%2 == 0){
			counter++;
			}
		if(i%5 == 0){
			counter++;
			}
		if(counter == 1){
			sum += i;
		}
	}
	cout<<"The sum of the integers, divisible by either 2 or 5 but not both, from 1 to "<<N<<" inclusive is: "<<sum<<endl;
	return 0;
}
