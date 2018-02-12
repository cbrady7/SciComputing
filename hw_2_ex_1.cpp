//Chris Brady
//Excercise 1 Hw 2
//Sci Computing

#include<iostream>
using namespace std;

int main(){
	//initialize 3 three integers
	int a, b, c;
	cout<<"Input 3 integers. Press 'enter' after each entry."<<endl;
	//store integers as a, b and c
	cin>>a>>b>>c;
	cout<<"Lowest to highest:"<<endl;
	//begin series of conditionals to determing order
	if(a <= b){
		if(a <= c){
			cout<<a<<endl;
			if(b <= c){
				cout<<b<<endl;
				cout<<c<<endl;
			}
			else{
				cout<<c<<endl;
				cout<<b<<endl;				}
			}
		else if (c <= a){
			cout<<c<<endl;
			cout<<a<<endl;
			cout<<b<<endl;
		}
	}
	else if(b <= a){
		if (b <= c){
			cout<<b<<endl;
			if(a <= c){
				cout<<a<<endl;
				cout<<c<<endl;
				}
			else{
				cout<<c<<endl;
				cout<<a<<endl;
				}
		}
		else if(c <= b){
			cout<<c<<endl;
			cout<<b<<endl;
			cout<<a<<endl;
		}
	}
return 0;
}
