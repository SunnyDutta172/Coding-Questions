//Given a number n,my task is to check whether that number n is divisible by 4 or not.
#include <iostream>
using namespace std;
int divBy4(long long int n){
  if(n % 4 == 0) return 1;
  else return 0;
}
int main(){
long long int n;
cin >> n;
cout << divBy4(n) << endl;
return 0;
}
