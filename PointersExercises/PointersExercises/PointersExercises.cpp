#include <iostream>

int main()
{
    std::cout << "Hello World!\n";

    using namespace std;

    // Part 1
    // the 1st one prints S
    // the 2nd one prints T
    // the 3rd one prints 6940 
    // The 4th one prints S
    // The 5th one prints 9772

    //char c = 'T', d = 'S';
    //char* p1 = &c;
    //char* p2 = &d;
    //char* p3;

    //p3 = &d;

    //cout << "*p3 = " << *p3 << endl;   // (1)

    //p3 = p1;

    //cout << "*p3 = " << *p3;   // (2)
    //cout << ", p3 = " << p3 << endl;   // (3)

    //*p1 = *p2;

    //cout << "*p1 = " << *p1;   // (4)
    //cout << ", p1 = " << p1 << endl;   // (5)








    // Part 2/3
    int* p;
    int i;
    int k;

    i = 42;
    k = i;
    p = &i;

    *p = 75;

    cout << "i = " << i << endl;
















    // Part 4
    // Fixed by changing the double to a char
    char c = 'A';
    char* part4_p = &c;



























    // Part 5/6
    char blocks[3] = { 'A', 'B', 'C' };
    char* ptr = &blocks[0];
    char temp;

    temp 
}
