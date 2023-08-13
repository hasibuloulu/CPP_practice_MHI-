#include<iostream>
using namespace std;

int main()
{
    int i=1, j, k;
    // j = i++;            // output is i = 2,  j = 1
    // cout << " i =  " << i << " " << " Postincrement j = : " << j << endl;
    
     k = ++i;               // output is i = 2,  j = 2
     cout << " i =  " << i << " " << " Preincrement k = : " << k << endl;
    return 0;

}