\//Christopher Brady
//Sci Comp
//HW #1 Problem 3

#include<iostream>
using namespace std;

int main(){
	int apples, bananas, oranges, lemons;
	float total = 0;
	cout<<"Please enter the number of apples: ";
	cin>> apples;
	total += apples;
	cout<<"The total bill for "<<apples<<" apples is: $"<<apples<<endl;
	cout<<"Please enter the number of bunches of bananas: ";
	cin>>bananas;
	cout<<"The total bill for "<<bananas<<" bananas is: $"<<bananas*3.5<<endl;
	total += bananas*3.5;
	cout<<"Please enter the number of oranges: ";
	cin>>oranges;
	cout<<"The total bill for "<<oranges<<" oranges is: $"<<oranges*.75<<endl;
	total += .75*oranges;
	cout<<"Please enter the number or lemons: ";
	cin>>lemons;
	cout<<"The total bill for "<<lemons<<" lemons is: $"<<lemons*1.75<<endl;
	total += lemons*1.75;
	cout<<"\nThe overal total bill is: $"<<total<<endl;
	
}
