// ConsoleApplication38.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include "point.h"
#include <time.h>
point center(point* c, int n)                                  // function receives a cluster and gets its center
{
    point temp;
    float sumx = 0, sumy = 0;
    for (int i = 0; i < n; i++)
    {
        sumx += c[i].getx();                                 // getting the sum of x coordinates
        sumy += c[i].gety();                                 // getting the sum of y coordinates

    }
    temp.setx(sumx / n);                                     // setting the temp as the average
    temp.sety(sumy / n);
    return temp;
}
void check(point* A, int sizeA, point* B, int sizeB, point p)
{
    point middleA = center(A, sizeA);                           // declaring a point that has the center of A
    point middleB = center(B, sizeB);                           // declaring a point that has the center of B
    if (p.distance(middleA) > p.distance(middleB))
    {
        cout << "point p belongs to B"<<endl;
    }
    else
        cout << "point p belongs to A"<<endl;
}
int main()
{
    int n, m;
    cout << "enter cluster A & B size" << endl;
    cin >> n;
    cout << "enter how many points you want to try" << endl;
    cin >> m;
    

    point* A = new point[n];
    point* B = new point[n];
    point *p = new point[m];
    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        A[i].setx((rand() % 19) + 71);
        A[i].sety((rand() % 19) + 71);                         // setting a random number from 71 to 89
        B[i].setx((rand() % 19) + 21);
        B[i].sety((rand() % 19) + 21);                         // setting a random number from 21 to 39
    }
    for (int i = 0; i < m; i++)
    {
        p[i].setx((rand() % 94) + 6);
        p[i].sety((rand() % 94) + 6);
        cout << "index: " << i + 1 << endl;
        check(A, n, B, n, p[i]);
        
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
