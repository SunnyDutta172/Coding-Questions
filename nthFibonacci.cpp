//Given a positive number n, find its nth Fibonacci Number.
//Fibonacci Series:- 1,1,2,3,5,8,13,21,34,56,90,..... . That is (Previous-1) + (previous) = new number.
#include <iostream>
using namespace std;
int fib(int n){
  if(n <= 1) return n;
    return fib(n-1) + fib(n-2);
}
int main(){
int n;
cin >> n;
cout << fib(n) << endl;
return 0;
}
