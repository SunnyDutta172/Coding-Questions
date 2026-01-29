//Given a number x, determine whether the given number is Armstrong's Number or not.A positive integer of n digits is called an Armstrong Number of order n(order is the number of digits) if abcd.. = pow(a,n)+pow(b,n)+pow(c,n)+pow(d,n)+.....
//The idea is to count the number of digits(order of x).Let the order be n.Then for every digit 'r' in input x,we will calculate r^n.And,finally if the sum of all such values is equal to x then the number is a Armstrong Number,Otherwise it's not.
#include <iostream>
using namespace std;
int power(int x,int y){ //x^y
if(y == 0) return 1;
if(y % 2 == 0) return power(x , y/2) * power(x , y/2);
return x * power(x , y/2) * power(x , y/2);
}
int order(int n){
int t = 0;
  while(n){
    t++;
    n /= 10;
  }
return t;
}
bool armstrong(int n){
  int x = order(n);
  int sum = 0;
  int temp = n;
  while(temp){
  int r = temp % 10;
  sum += power(r,x);
  temp /= 10;
  }
return (sum == n);
}
int main(){
int n;
cin >> n;
cout << armstrong(n) << endl;
return 0;
}
