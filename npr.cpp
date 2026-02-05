//Given two numbers n and r,my job is to calculate nPr which is (n)!/(n-r)!.It means the number of ways to arrange 'r' objects from 'n' objects.
#include <iostream>
using namespace std;
int factorial(int n){
  int ans = 1;
  for(int i = 2; i <= n; i++){
      ans *= i;
  }
return ans;
}
int main(){
int n,r;
cin >> n >> r;
cout << factorial(n)/factorial(n-r) << endl;
return 0;
}
