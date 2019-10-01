#include<bits/stdc++.h>

using namespace std;


bool solve_maze(char maze[10][10], int solve[][10], int i, int j, int m, int n){

	if(i==m && j==n){
		solve[i][j]=1;

		for(int k=0;k<=m;k++){
			for(int l=0;l<=n;l++){

				cout << solve[k][l];
			}

			cout << endl;
		}
		cout << endl;
		return true;
	}

	if(i>m||j>n)
		return false;
	if(maze[i][j]=='X')
		return false;

	solve[i][j]=1;

	bool ans1=solve_maze(maze, solve, i, j+1, m, n);
	bool ans2=solve_maze(maze, solve, i+1, j, m, n);

	solve[i][j]=0;
	if(ans1||ans2)
		return true;
	return false;

}



int main(){
	
	char maze[10][10]={"0000X","XX000", "00000", "X0000", "00000"};
	int solve[10][10]={0};

	bool ans= solve_maze(maze, solve, 0, 0, 4, 4);

	if(!ans)
		cout << "NO PATH";




}