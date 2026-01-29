//Given a non-negative number n,your task is to convert the given number into an equivalent binary representation.
#include <iostream>
#include <algorithm>
using namespace std;
string dectoBinary(int n){
  string bin = "";
  while(n > 0){
  int bit = n % 2;
  bin.push_back('0' + bit);
  n /= 2;
  }
reverse(bin.begin(),bin.end());
return bin;
}
int main(){
int n;
cin >> n;
cout << dectoBinary(n) << endl;
return 0;
}
