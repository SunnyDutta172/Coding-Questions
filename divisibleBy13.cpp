//Given a number n,my task is to find out whether that number is divis=ible by 13 or not.
#include <iostream>
using namespace std;
bool divisibleBy13(int n){
  return (n % 13 == 0);
}
int main(){
int n;
cin >> n;
cout << divisibleBy13(n) << endl;
return 0;
}
