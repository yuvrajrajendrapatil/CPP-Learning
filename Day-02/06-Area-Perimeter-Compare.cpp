#include <iostream>
using namespace std;
int main()
{
    int l, b;

    cout << "Enter Length : ;
 cin >> l;

 cout << Enter Breadth : ;
 cin >> b;

 if(l * b > 2 * (l + b)) {
 cout << Area Is Greater Than Perimeter;
 }
 else if(l * b == 2 * (l + b)) {
 cout << Area Is Equal To Perimeter;
 }
 else {
 cout << Area Is Less Than Perimeter;
 }

 return 0;
}
