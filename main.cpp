// ConsoleApplication38.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include "point.h"
#include <time.h>
point center(point* c, int n)
{
    point temp;
    float sumx = 0, sumy = 0;
    for (int i = 0; i < n; i++)
    {
        sumx += c[i].getx();
        sumy += c[i].gety();

    }
    temp.setx(sumx / n);
    temp.sety(sumy / n);
    return temp;
}
void check(point* A, int sizeA, point* B, int sizeB, point p)
{
    point middleA = center(A, sizeA);
    point middleB = center(B, sizeB);
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
        A[i].sety((rand() % 19) + 71);
        B[i].setx((rand() % 19) + 21);
        B[i].sety((rand() % 19) + 21);
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
