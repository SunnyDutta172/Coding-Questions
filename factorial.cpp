//Given a non-negative number n,you have to find the value of n!(n factorial),which is n! = n*(n-1)*(n-2)*....*3*2*1.
#include <iostream>
using namespace std;
int factorial(int n){
  int ans = 1;
  for(int i=2;i<=n;i++){
    ans *= i;
  }
return ans;
}
int main(){
int n;
cin >> n;
cout << factorial(n) << endl;
return 0;
}
//Above is the iterative Approach which works good but there is a recursive approach too for this question.
#include <iostream>
using namespace std;
int factorial(int n){
  if(n == 0 || n == 1) return 1;
  return n * factorial(n-1);
}
int main(){
int n;
cin >> n;
cout << factorial(n) << endl;
return 0;
}
