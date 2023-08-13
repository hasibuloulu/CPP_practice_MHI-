#include <iostream>
using namespace std;

// varable declearation 
extern int a,b;                 // we can use extern keyword to declare a variable at any place
extern int c;
extern float f;

// Gobal variable declearation
int g;

int main()
{
    // Variable definition: (local variable declearation)
    int a, b;
    int c;
    float f;
 
   // actual initialization
    a = 10;
    b = 20;
    c = a + b;
    cout << c << endl ;

    f = 70.0/3.0;
    cout << f << endl ;

    g = a + b + f;
    cout << g << endl ;
 
   return 0;
}
