#include<iostream>
using namespace std;


int main()
{
    int n,i;
    float num[100], sum = 0.0, average;

    cout << "Enter the number of Data:";
    cin >> n;

    while (n>100 || n <=0)
    {
        cout <<"Error! number should in range of (1 to 100)"<<endl;
        cout <<"Error the number agian:";
        cin>>n;
    }
   for(i = 0; i < n; ++i)
    {
        cout << i + 1 << ". Enter number: ";
        cin >> num[i];
        sum += num[i];
    }

    average = sum / n;
    cout << "Average = " << average;

    return 0; 
}

/*
#include <iostream>
using namespace std;

int main() {
    int n, i;

    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Factors of " << n << " are: ";  
    for(i = 1; i <= n; ++i) {
        if(n % i == 0)
            cout << i << " ";
    }

    return 0;
}
*/