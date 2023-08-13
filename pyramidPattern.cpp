#include<iostream>
using namespace std;

int main()
{
    int n = 6, i, j;

    // cout << "Enter number of rows: ";
    // cin >> rows;
    
    for (i=1; i<=n; i++){               // The outer loop counts the number of pyramid rows
        for(j=1; j<=i; j++){            // The inner loop counts the number of stars that are displayed in each row.
            cout<<"*";
        }
        cout<< endl;
    }
    return 0;
}