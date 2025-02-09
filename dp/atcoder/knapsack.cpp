/* A Naive recursive implementation of 0-1 Knapsack problem */
#include<stdio.h> 
#include<bits/stdc++.h>

// A utility function that returns maximum of two integers 
int max(int a, int b) { return (a > b)? a : b; } 
int dp[1000][1000];

// Returns the maximum value that can be put in a knapsack of capacity W 
int knapSack(int W, int wt[], int val[], int n) 
{ 
// Base Case 
if (n == 0 || W == 0) 
	return 0; 

// If weight of the nth item is more than Knapsack capacity W, then 
// this item cannot be included in the optimal solution 
if (wt[n-1] > W) 
	return knapSack(W, wt, val, n-1); 

if(dp[W][n]!=-1)
	return dp[W][n];

// Return the maximum of two cases: 
// (1) nth item included 
// (2) not included 

dp[W][n] = max( val[n-1] + knapSack(W-wt[n-1], wt, val, n-1), 
					knapSack(W, wt, val, n-1) 
				); 

return dp[W][n];
} 

// Driver program to test above function 
int main() 
{ 
	int val[] = {60, 100, 120}; 
	int wt[] = {10, 20, 30}; 
	int W = 50; 
	memset(dp, -1, sizeof(dp));
	int n = sizeof(val)/sizeof(val[0]); 
	printf("%d", knapSack(W, wt, val, n)); 
	return 0; 
} 
