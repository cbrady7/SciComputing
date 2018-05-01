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
		
		vector<vector<int> > board(dim);
		for(int i = 0; i < dim; i++){
			for(board[i].resize(dim);
		}
		
		int xloc = 0;
		int yloc = 0;		

		while(sum < dim*dim){
			x = draw();
			y = draw();
			if (checkMoves(xloc, yloc, x, y, dim) == 1){
				if(board[x][y] == 0){
					board[x][y] += 1;
					sum += 1;
				}
				xloc = x;
				yloc = y;
			}
		}
		netsum += sum;
	} 
	cout<<netsum/num_trials<<endl;
}
int checkMoves(int curx, int cury, int movx, int movy, int dims){
	vector<vector<int> > goodMoves(dims);
	for(int i = 0; i < dims; i++){
		goodMoves[i].resize(dims);
	}
	for(int i = 0; i < dims; i++){
		goodMoves[curx][i] = 1;
		goodMoves[i][cury] = 1;
	}
	for(int i = 1; i < dims; i++){
		if((curx + i)<dims){
			if((cury +i)<dims){
				goodMoves[curx+i][cury +i]= 1;
			}
			if((cury -i)<dims){
				goodMoves[curx +i][cury-i]= 1;
			}
		}
		if((cury - i)<dims){
			if((cury+i)<dims){
				goodMoves[curx-i][cury +i] = 1;
			}
			if((cury - i)<dims){
				goodMoves[curx-i][cury -i] = 1;
			}
		}
	}
	goodMoves[curx][cury]=0;
	if(goodMoves[movx][movy] == 1){
		return 1;
	}
	else{
		return 0;
	}
}
	
