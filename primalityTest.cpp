//Given a positive number, you have to check whether the number is Odd or Even .
// A prime number is a number which can only be divided by 1 and itself.
#include <iostream>
using namespace std;
bool isPrime(int n){
  if(n <= 1) return false; //Corner Case
for(int i=2;i<n;i++){ // check from 2 to n-1
  if(n % i == 0) return false; //false because it means the number could be divided by any other number.
  }
  return true;
}
int main(){
  int n;
  cin >> n;
  cout << isPrime(n) << endl;
  return 0;
}
//There is a another optimised method for this code.We can check upto root n instead of n, it will be more efficient that way.
#include <iostream>
using namespace std;
bool isPrime(int n){
  if(n <= 1) return false;
for(int i=2;i*i<n;i++){
  if(n % i == 0) return false;
  }
return true;
}
int main(){
int n;
cin >> n;
cout << isPrime(n) << endl;
return 0;
}
