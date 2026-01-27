//Given a number n, and your job is to find the sum of digits.
//We can sum the number of digits by repeatedly extracting the last digit using n%10,adding it to the sum and removing it by n/10.
#include <iostream>
using namespace std;
int sumOfDigits(int n){
  int sum = 0;
  while(n!=0){
  int last = n % 10;
  sum += last;
  n /= 10;
  }
  return sum;
}
int main(){
int n;
cin >> n;
cout << sumOfDigits(n) << endl;
return 0;
}

//We can also solve this using Recursion 
#include <iostream>
using namespace std;
int sumOfDigits(int n){
  if(n == 0) return 0;
  return (n % 10) + sumOfDigits(n / 10);
}
int main(){
int n;
cin >> n;
cout << sumOfDigits(n) << endl;
return 0;
}
