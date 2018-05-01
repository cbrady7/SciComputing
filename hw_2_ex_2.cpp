//Christopher Brady
//Sci Comp
//HW #1 Problem 3

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int cur_fruit, apples, bananas, oranges, lemons;
	string number = "s ";
	string fruits[4] = {"apple", "banana", "orange", "lemon"};
	float cost[4] = {1,3.5,.75,1.75};
	float total = 0;
	for(int i = 0; i <4; i++){
		cout<<"Please enter the number of "<<fruits[i]<<"s: ";
		cin>> cur_fruit;
			while(cur_fruit < 0){
				cout<<"\nThis is not a valid number of "<<fruits[i]<<"s. Please enter a positive number"<<endl;
				cin>>cur_fruit;
			}
		total += cur_fruit*cost[i];
		if(i == 1){
			if(cur_fruit == 1){
				cout<<"The total bill for 1 bunch of bananas is: $3.50"<<endl;
				}
			else{
				cout<<"The total bill for "<<cur_fruit<<" bunches of bananas is: $"<<fixed<<setprecision(2)<<cur_fruit*3.5<<endl;
				}
		}
		else{
			if(cur_fruit == 1){
				number = " ";
				}
			else{
				number = "s ";
				}
			cout<<"The total bill for "<<cur_fruit<<" "<<fruits[i]<<number<<"is: $"<<fixed<<setprecision(2)<<cur_fruit*cost[i]<<endl;
		}
	}	
	cout<<"\n\nThe overall total bill is: $"<<total<<endl;
}

