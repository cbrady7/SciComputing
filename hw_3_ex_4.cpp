//Chris Brady
//Hw 3 ex 4
//Sci Comp

using namespace std;
#include<iostream>

int fFunc(int n);
int hFunc(int o);
int sFunc(int p);

int main(){
	int input;
	cout<<"Input a positive integer: "<<endl;
	cin>>input;
	cout<<"S("<<input<<") = "<<sFunc(input)<<"."<<endl;

}

int fFunc(int n){
	if(n%2 == 0){
		return n/2;
	}
	else{
		return 3*n+1;
	}
}

int hFunc(int o){
	int iterator = 0;
	while(o != 1){
		o = fFunc(o);
		iterator++;
	}
	return iterator;
}

int sFunc(int p){
	int sum = 0;
	for(int i = 1; i <= p; i++){
		sum += hFunc(i);
	}
	return sum;
}
