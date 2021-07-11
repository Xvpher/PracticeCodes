// C++ program to find maximum achievable value
// with a knapsack of weight W and multiple
// instances allowed.
#include<bits/stdc++.h>
using namespace std;

// Returns the maximum value with knapsack of
// W capacity
int unboundedKnapsack(int W, int n, int val[], int wt[])
{
	// dp[i] is going to store maximum value
	// with knapsack capacity i.
	int dp[W+1];
	memset(dp, 0, sizeof dp);

	int ans = 0;

	// Fill dp[] using above recursive formula
	for (int i=0; i<=W; i++)
	for (int j=0; j<n; j++)
		if (wt[j] <= i)
			dp[i] = max(dp[i], 10*dp[i-wt[j]]+val[j]);

	return dp[W];
}

// Driver program
int main()
{
	int W = 10;
	int val[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int wt[] = {8, 8, 8, 8, 8, 8, 8, 3, 2};
	int n = sizeof(val)/sizeof(val[0]);

	cout << unboundedKnapsack(W, n, val, wt)<<endl;

	return 0;
}
