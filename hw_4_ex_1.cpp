//Chris Brady
//Hw 4 Ex 1
//Sci Comp

#include<iostream>
#include<iomanip>
#include<vector>


using namespace std;
int isValid(int input);
float get_max(const vector<float> &v);
float get_min(const vector<float> &u);

int main(){
	vector<float> vec;
	int isValid = 1;
	float inp;
	while(isValid == 1){
		cout<<"Enter a real number: "<<endl;
		cin>>inp;
		if(cin.fail()){
			isValid = 0;
		}
		else{
			vec.push_back(inp);
		}
	}	
	float maximum = get_max(vec);
	float minimum = get_min(vec);
	cout<<"The maximum value is : "<<maximum<<endl;
	cout<<"The minimum value is : "<<minimum<<endl;
}

float get_max(const vector<float> &v){
	float max = v[0];
	for (int i = 1; i < v.size(); i++){
		if (v[i] > max){
			max = v[i];
		}
	}
	return max;
}

float get_min(const vector<float> &u){
	float min = u[0];
	for (int j = 1; j < u.size(); j++){
		if(u[j] < min){
			min = u[j];
		}
	}
	return min;
}


	
