#include <iostream>
using namespace std;


int main()
 {
   // use const prefix to declare constants with a specific type as follows 
   const int  LENGTH = 10;
   const int  WIDTH  = 5;
   const char NEWLINE = '\n';
   int area;  
   
   area = LENGTH * WIDTH;
   cout << area;
   cout << NEWLINE;
   return 0;
}