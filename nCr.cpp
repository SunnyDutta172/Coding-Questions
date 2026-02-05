//Given two numbers n and r.I have to calculate nCr,that is n!/r!*(n-r)!.It represents the number of ways to Select 'r' objects out of 'n' distinct Objects.
#include <iostream>
using namespace std;
int factorial(int n){
    int ans = 1;
    for(int i=2;i<=n;i++){
        ans *= i;
    }
  return ans;
  }
int nCr(int n,int r){
    if(r > n) return 0;
      return factorial(n)/(factorial(r)*factorial(n-r));
    }
int main(){
    int n,r;
    cin >> n >> r;
    cout << nCr(n,r) << endl;
    return 0;
  }
