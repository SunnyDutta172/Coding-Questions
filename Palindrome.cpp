//Given an integer n,our job is to tell whether the given number is a palindrome number or not.
#include <iostream>
using namespace std;
bool isPalindrome(int n){
  int reverse = 0;
  int temp = abs(n);
  while(temp != 0){
  reverse = (temp % 10) + (reverse * 10);
  temp /= 10;
  }
  return (reverse == abs(n));
}
int main(){
int n;
cin >> n;
cout << isPalindrome(n) << endl;
return 0;
}
  
