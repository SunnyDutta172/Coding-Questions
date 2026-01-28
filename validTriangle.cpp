//Given three sides of a triangle, we have to check whether the triangle is valid or not.
//The simple criteria for checking valid triangle is "Sum of two sides must be greater than the third side".
#include <iostream>
using namespace std;
bool checkValidity(int a,int b,int c){
  if((a + b > c) && (b + c > a) && (c + a > b)) return true;
    return false;
}
int main(){
int a,b,c;
cin >> a >> b >> c;
cout << checkValidity(a,b,c) << endl;
return 0;
}
