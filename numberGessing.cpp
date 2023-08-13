#include<iostream>
#include<cstdlib>                   // library is required in order to use rand() function
#include<time.h>

// https://www.algolist.net/Cpp/Guess_game

using namespace std;

int main()
{
    srand(time(0));
    int number;
    number = rand()% 1000 + 1;
    // cout << "Random Number : " << number << endl;
    
    
    int guess;          // Asked player for guess
    
    // keep gussing 
    do{
    cout<< "Enter your estimate:";
    cin>> guess;

    // Compare player estimate the proposed number
    if(guess<number)
        cout<<"Your estimate is less than the secret number" << endl;
    else if (guess>number)
        cout<<"Your estimate is more than the secret number" << endl;
    else 
        cout<<"Your estimate is right" << endl;
    
    } while (guess!=number);
    // cout<< "actual estimate:"<< number<<endl;

    system("PAUSE");                //prevent console window from closing 
    return 0;
}