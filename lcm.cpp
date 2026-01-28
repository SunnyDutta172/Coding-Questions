//Given two positive integers a and b.We have to find the Least Common Multiple(LCM) of a and b.
#include <iostream>
using namespace std;
int lcm(int a,int b){
  int g = max(a,b);
  int s = min(a,b);
  for(int i = g; i <= a * b; i += g){ //We will use a for loop where i starts from max number(from a and b) and goes till (a * b) and it will increase at the rate of max number then we will check from the numbers,that which number is divisible by the min number and where it divides we are gonna return that number and that number is our lcm of a and b.
  if(i % s == 0)
    return i;
  }
}
int main(){
int a,b;
cin >> a >> b;
cout << lcm(a,b) << endl;
return 0;
}
//There is another approach to solve this problem which is to use the gcd lcm formula that is lcm(a,b)*gcd(a,b) = a*b.

  
