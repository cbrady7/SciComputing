//Chris Brady 
//Sci Comp 2018


#include<iostream>
#include<fstream>
#include<map>
#include<utility>
#include<string>
#include<vector>
#include<sstream>

using namespace std;

string translate(string enc_inp);

int main(){
/*
	ifstream ifs("key.txt");

	map<string, string> key;
	string x;
	string y;	
	while(ifs >> x >> y){
	key[x] = y;
	}
	key[" "]=" ";
	
	ifs.close();
*/
	ifstream textin;
	textin.open("encrypted_text.txt");

	string line;

	ofstream ofs;
	ofs.open("decrypted_text.txt");	

	while(getline(textin, line)){
		ofs <<translate(line);
	
	}
//	cout<<key["V"]<<"Vv";
}

string translate(string enc_inp){
	
	ifstream ifs("key.txt");

	map<string, string> key;
	string x;
	string y;	
	while(ifs >> x >> y){
	key[x] = y;
	}
	key[" "]=" ";
	
	

	ifs.close();
	string holder, preholder;
//	stringstream ss;
//	string damn = "V";
//	cout<<"V convert: "<<key[damn]<<endl;
	istringstream iss;

	iss.str(enc_inp);
	string word;
	
	string res;

	while(iss >> word){
		for(int i = 0; i < word.size(); i++){
			stringstream ss;
			ss << word[i];
			ss >> holder;
			res += key[holder];
		}
	res += " ";
	}
	res += "\n";
	return(res);

}

