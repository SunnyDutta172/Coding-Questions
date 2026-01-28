//A number is a perfect Number if it is equal to the sum of its proper divisors that is,the sum of its proper divisors excluding the number itself.
//You have been given a number and you have to tell whether the number is a Perfect Number or not.
#include <iostream>
using namespace std;
bool isPerfect(int n){
  int sum = 0;
  for(int i = 1; i < n; i++){
  if(n % i == 0)
    sum += i;
  }
return sum == n;
}
int main(){
int n;
cin >> n;
cout << isPerfect(n) << endl;
return 0;
}
