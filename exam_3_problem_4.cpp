//Chris Brady
//Final Exam Problem 3

#include<iostream>
#include<iomanip>
#include<string>
#include<random>
#include<vector>
#include<functional>

using namespace std;

int checkMoves(int curx, int cury, int movx, int movy, int dims);

int main(int argc, char* argv[]){
	int dim = stoi(argv[1]);
	int num_trials = stoi(argv[2]);

	//initialize random device
	random_device rd;
	int seed = rd();
	mt19937 generator(seed);
	
	uniform_int_distribution<int> distribution(0,dim-1);

	auto draw = bind(distribution, generator);

	int netsum = 0;

	int x, y;

	for(int i = 0; i < num_trials; i++){
		int sum = 1;
	//	int board[dim][dim]={0};
		int counter = 0;	
		vector<vector<int> > board(dim);
		for(int i = 0; i < dim; i++){
			board[i].resize(dim);
		}
		board[0][0] = 1;
		int xloc = 0;
		int yloc = 0;		

		while(sum < dim*dim){
			x = draw();
			y = draw();
			cout<<"current locatoin "<<xloc<<" , "<<yloc<<" testing for : "<<x<<" , "<<y<<endl;
				if (checkMoves(xloc, yloc, x, y, dim) == 1){
				if(board[x][y] == 0){
					board[x][y] += 1;
					sum += 1;
				}
				xloc = x;
				yloc = y;
				counter += 1;
			}
	//		cout<<"Where we've been: "<<endl;
	//		for(int i = 0; i < dim; i++){
	//			for( int j = 0; j < dim; j++){
	//				cout<<board[i][j]<<" ";
	//				}
	//				cout<<endl;
	//	}
		}
		netsum += counter;
	} 
	cout<<netsum/num_trials<<endl;
}
int checkMoves(int curx, int cury, int movx, int movy, int dims){
	cout<<"Entering Check Moves ("<<curx<<" , "<<cury<<")"<<endl;

	vector<vector<int> > goodMoves(dims);
	for(int i = 0; i < dims; i++){
		goodMoves[i].resize(dims);
	//	cout<<"initialized matrix"<<endl;
	}
	for(int i = 0; i < dims; i++){
		goodMoves[curx][i] = 1;
		goodMoves[i][cury] = 1;
	//	cout<<"marked off perp boxes"<<endl;
	}
	for(int i = 1; i < dims; i++){
		if((curx + i)<dims){
			if((cury +i)<dims){
				cout<<"br is good"<<endl;
				goodMoves[curx+i][cury +i]= 1;
			}
			if((cury -i) > -1){
				cout<<"bl is good"<<endl;
				goodMoves[curx +i][cury-i]= 1;
			}
		}
		if((curx - i) > -1){
			if((cury+i)<dims){
				cout<<"tr is good"<<endl;
				goodMoves[curx-i][cury +i] = 1;
		//		cout<<"please"<<endl;
			}
			if((cury - i) > -1){
				cout<<"tl is good"<<endl;
				goodMoves[curx-i][cury -i] = 1;
			}
		}
	}
	
	for(int i = 0; i <dims; i++){
		for(int j = 0; j<dims; j++){
			cout<<goodMoves[i][j]<<" ";
		}
		cout<<endl;
	}
	goodMoves[curx][cury]=0;
	if(goodMoves[movx][movy] == 1){
	//	cout<<"Exiting check moves"<<endl;
		return 1;
	}
	else{
	//	cout<<"Exiting check moves"<<endl;	
		return 0;
	}
}
	
