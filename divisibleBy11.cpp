//Given a number n,we have to find out Whether that number is divisible by 11 or not.
#include <iostream>
using namespace std;
bool divisibleBy11(int n){
  return n % 11 == 0;
}
int main(){
int n;
cin >> n;
cout << divisibleBy11(n) << endl;
return 0;
}
