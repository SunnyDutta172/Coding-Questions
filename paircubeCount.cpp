//Given n,count all 'a' and 'b' that satisfy the condition a^3 + b^3 = n,where (a,b) and (b,a) are count as 2 different Pairs.
//Firstly,we will try with two nested loops to check all pairs of (a,b) where a^3+b^3 = n.If the condition holds,the count will be incremented.
#include <iostream>
using namespace std;
int countPairs(int n){
  int count = 0;
  for(int a=0;a<=n;a++){
    for(int b=0;b<=n;b++){
      if(a*a*a + b*b*b == n){
          count ++;
      }
    }
  }
  return count;
}
int main(){
int n;
cin >> n;
cout << countPairs(n) << endl;
return 0;
}
