//Chris Brady
//Sci Comp
//Hw 2 ex 5

#include<iostream>
#include<cmath>

using namespace std;

int main(){
float tolerance ,sumPartial, sum = 0;
int input, i = 0, sign = 0;
sumPartial = tolerance+1;

	cout<<"Enter a non-negative tolerance."<<endl;
	cin>>tolerance;
	while(abs(sumPartial) >= tolerance){
		if(i%2 == 0){
			sign = 1;
		}
		else{
			sign = -1;
		}
		sumPartial = sign/(2*i+1+log(i*i+1));
		sum += sumPartial;
		cout<<sumPartial<<endl;
		i++;
	}
cout<<"The calculated sum is "<<sum<<". It took "<<i+1<<" iterations."<<endl;
return 0;

}
