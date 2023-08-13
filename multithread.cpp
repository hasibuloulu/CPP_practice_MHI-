#include <iostream>
#include <thread>
using namespace std;

void myFunc()
{
    std::cout << "So, are we there yet?" << std::endl;
}

int main()
{
    std::thread t1(myFunc);  // t1 start running
    t1.detach();             // t1 run freely (daemon process)

    return 0;
}
