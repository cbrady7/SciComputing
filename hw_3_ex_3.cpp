//Chris Brady
//Hw 3 ex 3
//Sci Comp

#include<iostream>
using namespace std;

bool primeTest(int a);

int main(){
	int input; 
	cout<<"Input an integer: "<<endl;
	cin>>input;
	if(primeTest(input) == 1){
		cout<<input<<" is a prime number."<<endl;
		}
	else{
		cout<<input<<" is not a prime number."<<endl;
	}
}

bool primeTest(int a){
if(a == 1){
	return false;
	}
for(int i = 2; i< a; i++){

	if(a%i == 0){
		return false;
		}
	}
	return true;
}

