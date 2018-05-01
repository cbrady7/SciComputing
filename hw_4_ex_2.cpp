//Chris BRady
//HW 4 ex 2
//Sci Comp

#include<iostream>
#include<vector>
#include<iomanip>

using namespace std;

int checkValid(int score, string name, vector<string> &names);
int getScore();
string getName();
vector<int> lowScores(vector<int> &v);
vector<int> highScores(vector<int> &u);

int main(){
	vector<string> nameList; 
	vector<int> scores;
	int scoreIn;
	string  nameIn;
	
	nameIn = getName();
	scoreIn = getScore();
	while(checkValid(scoreIn, nameIn, nameList) == 1){
		nameList.push_back(nameIn);
		scores.push_back(scoreIn);
		nameIn = getName();
		scoreIn = getScore();
	}
	vector<int> resultsL = lowScores(scores);
	vector<int> resultsH = highScores(scores);
	cout<<"The low score of "<<resultsL[0]<<" was earned by the following students: "<<endl;
	for(int i = 1; i < resultsL.size(); i++){
		cout<<nameList[resultsL[i]]<<endl;
	}
	cout<<"The high score of "<<resultsH[0]<<" was earned by the following students: "<<endl;
	for(int k = 1; k<resultsH.size(); k++){
		cout<<nameList[resultsH[k]]<<endl;
	}
return 0;
}


int checkValid(int score, string name, vector<string> &names){
	if((score < 0)||(score >100)){
		return 0;
	}
	else if(name == "EndInput"){
		return 0;
	}
	for(int i = 0; i < names.size(); i++){
		if(names[i] == name){
			return 0;
		}
	}
	return 1;
}

int getScore(){
	int placeHolder;
	cout<<"Enter the corresponding integer score between 0 and 100"<<endl;
	cin>> placeHolder;
	return placeHolder;
}
string getName(){
	string placeHolder;
	cout<<"Enter a first name or enter 'EndInput' to end indicate the set is complete."<<endl;
	cin>>placeHolder;
	return placeHolder;
}
vector<int> lowScores(vector<int> &v){
	int lowScore = v[0];
	vector<int> indices;
	indices.push_back(lowScore);
	indices.push_back(0);
	for(int i = 1; i < v.size(); i++){
		if(v[i]< lowScore){
			indices.clear();
			indices.push_back(v[i]);
			indices.push_back(i);
			lowScore = v[i];
		}
		else if(v[i] == lowScore){
			indices.push_back(i);
		}
	}
	return indices;
}

vector<int> highScores(vector<int> &u){
	int highScore = u[0];
	vector<int> index;
	index.push_back(highScore);
	index.push_back(0);
	for(int j = 1; j < u.size(); j++){
		cout<<"Checking for highe "<<u[j]<<endl;
		if(u[j]>highScore){
			index.clear();
			index.push_back(u[j]);
			index.push_back(j);
			highScore = u[j];
		}
		else if(u[j] == highScore){
			index.push_back(j);
		}
	}
	return index;
}
