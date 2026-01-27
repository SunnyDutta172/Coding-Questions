//Given an integer n,your job is to reverse the digits of the number.
// We will repeatedly extract the last digit of the number by n % 10 and append it to the revNum.After extracting it we will reduce the number by n / 10.And we will continue the process until n becomes 0.
#include <iostream>
using namespace std;
int reverseDigits(int n){
  int revNum = 0;
  while(n>0){
  revNum = revNum*10 + n % 10;
  n /= 10;
  }
  return revNum;
}
int main(){
  int n;
  cin >> n;
  cout << reverseDigits(n) << endl;
  return 0;
}
