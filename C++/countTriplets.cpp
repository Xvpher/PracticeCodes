#include <bits/stdc++.h>

using namespace std;

// Complete the countTriplets function below.
long countTriplets(vector<long> arr, long r) {
unordered_map <int,int> mp;
int len = arr.size();
for (int i = 0; i < len; i++) mp[arr[i]]++;
for (int i = 0; i < len; i++)
{

}

}

int main()
{
    int n,r;
    cin>>n>>r;
    vector<long> arr(n);
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    long ans = countTriplets(arr, r);

    cout << ans << "\n";

    return 0;
}
