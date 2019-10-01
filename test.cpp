
#include<bits/stdc++.h>

using namespace std;

 int n, m;

// A function to check if a given cell (row, col) can be included in DFS 
int isSafe( vector< vector<int>> M, int row, int col, vector<vector<bool>> visited, int ROW, int COL) 
{ 
	// row number is in range, column number is in range and value is 1 
	// and not yet visited 
	return (row >= 0) && (row < ROW) &&	 
		(col >= 0) && (col < COL) &&	 
		(M[row][col] && !visited[row][col]); 
} 

// A utility function to do DFS for a 2D boolean matrix. It only considers 
// the 8 neighbours as adjacent vertices 
void DFS(vector< vector<int>> M, int row, int col, vector<vector<bool>> visited, int ROW, int COL) 
{ 
	// These arrays are used to get row and column numbers of 8 neighbours 
	// of a given cell 
	static int rowNbr[] = {-1, -1, -1, 0, 0, 1, 1, 1}; 
	static int colNbr[] = {-1, 0, 1, -1, 1, -1, 0, 1}; 

	// Mark this cell as visited 
	visited[row][col] = true; 

	// Recur for all connected neighbours 
	for (int k = 0; k < 8; ++k) 
		if (isSafe(M, row + rowNbr[k], col + colNbr[k], visited, ROW, COL) ) 
			DFS(M, row + rowNbr[k], col + colNbr[k], visited, ROW, COL); 
} 

// The main function that returns count of islands in a given boolean 
// 2D matrix 
int countIslands(vector<vector<int>> M, int n, int m) 
{ 
	// Make a bool array to mark visited cells. 
	// Initially all cells are unvisited 
	vector<vector<bool>> visited; 

	// Initialize count as 0 and travese through the all cells of 
	// given matrix 
	int count = 0; 
	for (int i = 0; i < n; ++i) 
		for (int j = 0; j < m; ++j) 
			if (M[i][j] && !visited[i][j]) // If a cell with value 1 is not 
			{						 // visited yet, then new island found 
				DFS(M, i, j, visited, n, m);	 // Visit all cells in this island. 
				++count;				 // and increment island count 
			} 

	return count; 
} 

// Driver program to test above function 
int main() 
{ 
	int t;
	cin >> t;
	while(t--){
	    cin >> n >> m;
	    vector<vector<int>> arr(n);

	    for(int i=0;i<n;i++){
	    	vector<int> row;
	        for(int j=0;j<m; j++){
	            int q;
	            cin >> q;
	            row.push_back(q);
	        }
	        arr.push_back(row);
	    }
	    cout << "here";
	printf("Number of islands is: %d\n", countIslands(arr, n , m)); 
	}

	return 0; 
} 
