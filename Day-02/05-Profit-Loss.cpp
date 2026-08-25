#include <iostream>
using namespace std;
int main()
{
    int cp;
    cout << "Enter Cost Price : ;
 cin >> cp;
 int sp;
 cout << Enter Selling Price : ;
 cin >> sp;
 if(sp > cp) {
 cout << You are in :  << sp - cp << ₹ Profit;
 }
 else if(sp < cp) {
 cout << You are in :  << cp - sp << ₹ Loss;
 }
 else {
 cout << No Profit No Loss;
 }
 return 0;
}
