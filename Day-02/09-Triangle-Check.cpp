#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter 3 numbers i will tell if they can be sides of a triangle :  << endl;
 cout << Side A : ;
 cin >> a;
 cout << Side B : ;
 cin >> b;
 cout << Side C : ;
 cin >> c;
 if(a > 0 && b > 0 && c > 0 && a + b > c && b + c > a && c + a > b)
 {
 cout << They Can Make Triangle;
 }
 else
 {
 cout << They Can Not Make Triangle;
 }
 return 0;
}
