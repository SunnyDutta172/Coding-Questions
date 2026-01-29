//The digital Root of a positive integer is found by summing the digits of the integer.If the resulting value is single digit then that digit is the digital root,Otherwise the summing of digits process is repeated until a single digit appears.
#include <iostream>
using namespace std;
int singleDigit(int n){
  int sum = 0;
  while(n > 0 || sum > 9){
  if (n == 0){
  n = sum;
  sum = 0;
  }
sum += n % 10;
n /= 10;
}
return sum;
}
int main(){
int n;
cin >> n;
cout << singleDigit(n) << endl;
return 0;
}
//There exists a Mathematical Approach to solve this question and that is modulo by 9. The expression is (abcd)%9 = (a+b+c+d)%9 + 0
#include <iostream>
using namespace std;
int singleDigit(int n){
  if (n == 0) return 0;
  if ( n % 9 == 0) return 9;
  return (n % 9);
}
int main(){
int n;
cin >> n;
cout << singleDigit(n) << endl;
return 0;
}
