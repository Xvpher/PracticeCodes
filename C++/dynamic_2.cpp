#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

long func(std::vector<long> arr, int total, int n, std::vector<std::vector<int>> memo)
{
  long ans;
  if(n<0) return 0;
  if(memo[n][total] != -1) return memo[n][total];
  if(total<0) return 0;
  if(total == 0) return 1;
  if(total < arr[n]) ans = func(arr, total, n-1, memo);
  else ans = func(arr, total-arr[n], n, memo) + func(arr, total, n-1, memo);
  memo[n][total] = ans;
  return ans;
}

// Complete the getWays function below.
long getWays(long n, vector<long> c) {
sort(c.begin(),c.end());
std::vector<std::vector<int>> memo(c.size(), std::vector<int>(n+1,-1));
return func(c, n, c.size()-1, memo);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nm_temp;
    getline(cin, nm_temp);

    vector<string> nm = split_string(nm_temp);

    int n = stoi(nm[0]);

    int m = stoi(nm[1]);

    string c_temp_temp;
    getline(cin, c_temp_temp);

    vector<string> c_temp = split_string(c_temp_temp);

    vector<long> c(m);

    for (int i = 0; i < m; i++) {
        long c_item = stol(c_temp[i]);

        c[i] = c_item;
    }

    // Print the number of ways of making change for 'n' units using coins having the values given by 'c'

    long ways = getWays(n, c);
    cout<<ways<<endl;
    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
