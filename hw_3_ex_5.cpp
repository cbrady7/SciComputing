//Chris Brady
//Sci Comp
//Hw 3 ex 5

#include<iostream>
using namespace std;

int fFunc(int n);
int sFunc(int p);

int main(){
cout<<"Enter a positive integer: "<<endl;
int input;
cin>>input;

cout<<"S("<<input<<") = "<<sFunc(input)<<"."<<endl;

return 0;
}

int fFunc(int n){
	if(n <= 1){	return n;}
	else if(n == 2){return 3;}
	else if(n%2 == 0){
		return 2*fFunc(n/2)+3;
	}
	else{
		return fFunc((n+1)/2)+fFunc((n-1)/2);
	}
}
int sFunc(int p){
	int sum = 0;
	for(int i = 1; i <= p; i++){
		if((fFunc(i)%2) != 0){
			sum += fFunc(i);
		}
	}
	return sum;
}

