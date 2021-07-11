// #include <bits/stdc++.h>
//
// using namespace std;
//
//
// void Pascal(int n)
// {
// for (int line = 1; line <= n; line++)
// {
//     int count = 1;
//     for (int i = 1; i <= line; i++)
//     {
//         cout<<count<<" ";
//         count = count * (line - i) / i;
//     }
//     cout<<"\n";
// }
// }
//
//
// int main()
// {
//     int n;
//     std::cin >> n;
//     Pascal(n);
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

void printPascal(int n)
{

    int arr[n][n];

    for (int line = 0; line < n; line++)
    {

        for (int i = 0; i <= line; i++)
        {

        if (line == i || i == 0)
            arr[line][i] = 1;

        else
            arr[line][i] = arr[line - 1][i - 1] +
                            arr[line - 1][i];
        cout << arr[line][i] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    int n;
    std::cin >> n;
    printPascal(n);
    return 0; 
}
