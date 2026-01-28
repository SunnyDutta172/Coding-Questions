//Given two Positive numbers x and y, we have to check whether y is a power of x or not.
#include <iostream>
using namespace std;
bool isPower(int x,long int y){
  if(x == 1) return (y == 1);
long  int pow = 1;
while(pow < y){
  pow *= x;
 }
return (pow == y);
}
int main(){
int x,y;
cin >> x >> y;
cout << isPower(x,y) << endl;
return 0;
}
