//Given two positive integers a and b,your task is to find the gcd of the two numbers.
//The idea is to find the minimum of the two numbers and find its highest factor which is also a factor of the other number.
#include <iostream>
using namespace std;
int gcd(int a,int b){
  int result = min(a,b); //find the minimum of a and b
  while(result > 0){
  if(a % result == 0 && b % result == 0){
    break;
    }
  result--;
  }
  return result;
}
int main(){
int a,b;
cin >> a >> b;
cout << gcd(a,b) << endl;
return 0;
}
