//Given a number n,We have to print the count of numbers in the range from 1 to n having exactly 3 divisors.
#include <iostream>
using namespace std;
int exactly3Divisors(int n){
  int count = 0;
  for(int i = 1; i <= n; i++){
    if(n % i == 0)  
      count++;
  }
return count;
}
int countDivisors(int n){
  int total = 0;
  for(int i = 1; i <= n; i++){
    if(exactly3Divisors(i) == 3){
      total++;
    }
  }
return total;
}
int main(){
  int n;
  cin >> n;
  cout << countDivisors(n) << endl;
  return 0;
}
