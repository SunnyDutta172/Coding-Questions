//Given a positive integer n,we have to find its square root and return it.If the number 'n' is not a perfect Square then we have to return the floor of root n.
#include <iostream>
using namespace std;
int sqRoot(int n){
  int ans = 1;
  while(ans*ans <= n){
    ans++;
  }
return ans - 1;
}
int main(){
int n;
cin >> n;
cout << sqRoot(n) << endl;
return 0;
}
