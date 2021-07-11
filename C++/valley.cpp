#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
std::string::iterator i;
int valley=0,lvl=0;
for(i=s.begin(); i!=s.end(); i++)
{
    char g = *i;
    if(g=='U') lvl++;
    else lvl--;
    if(lvl==0 && g=='U') valley++;
}
return(valley);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
