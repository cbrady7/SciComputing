//Chris Brady
//Scientific Computing
//Hw 2 excercize 3

#include<iostream>

using namespace std;

int main(){

int N;
int firstSum = 0, formSum = 0;

cout<<"Enter a positive  integer, N: "<<endl;

cin>>N;

for(int i = 0; i<=N; i++){
	firstSum += i*i*i;
	}
cout<<"The sum of the cubes of integers from 0 to N is: "<<firstSum<<endl;


formSum = ((N*(N+1))/2)*((N*(N+1))/2);

cout<<"According to the formula, the sum of the cubes is :"<<formSum<<endl;

return 0;

}
