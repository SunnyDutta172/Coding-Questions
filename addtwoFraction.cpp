//Given two integer arrays a[] and b[] containing two integers each representing the numerator and denominator of a fraction respectively.
//My Job is to find the sum of the two fractions and return the numerator and denominator of the resulting fraction in an array.
#include <iostream>
#include <vector>
using namespace std;
//First we will calculate gcd and then we will use the formula LCM(a,b)*HCF(a,b) = a*b to calculate the lcm to make the denominator same.We can directly use lcm too.
int gcd(int n1,int n2){
  if(n1 == 0) return n2;
return gcd(n2 % n1, n1);
}
//Now we will create a function to add fraction.
vector<int> addFraction(vector<int> a,vector<int> b){
  vector<int> ans;
//Now we will find the gcd of den1 and den2
int den = gcd(a[1],b[1]);
//Now we will find the lcm
den = (a[1] * b[1]) / den;
//Now we will find the numerator of our resulting fraction by simple mathematical Process.
int num = (a[0] * den/a[1]) + (b[0] * den/b[1]);
//Our fraction is ready but we have to give it in simpler and reduced form so we will find a common factor of both num and den and will divide them.
int common_factor = gcd(num,den);
den /= common_factor;
num /= common_factor;
ans.push_back(num);
ans.push_back(den);
return ans;
}
int main(){
int n;
cin >> n;
vector<int> a(n);
for(int i = 0; i < n ;i++){
  cin >> a[i];
  }
vector<int> b(n);
  for(int i = 0; i < n ;i++){
  cin >> b[i];
  }  
vector<int> ans = addFraction(a,b);
cout << ans[0] << " " << ans[1] << endl;
return 0;
}
