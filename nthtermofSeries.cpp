//Given a number n, you have to find nth term in the series.The series is 1,3,6,10,15,21,...
//As we can see,that this series is sum of the numbers upto that term.
#include <iostream>
using namespace std;
int term(int n){
  int ans = 0;
  for(int i = 1; i <= n; i++){
  ans += i;
  }
return ans;
}
int main(){
int n;
cin >> n;
cout << term(n) << endl;
return 0;
}
//There is one another method to solve this problem and that works for this problem because the series consists of numbers which are sum of the numbers upto that term.So we can use the sum of numbers formula from Mathematics that is n*(n+1)/2. 
#include <iostream>
using namespace std;
int term(int n){
  return n * (n + 1) / 2;
}
int main(){
int n;
cin >> n;
cout << term(n) << endl;
return 0;
}
