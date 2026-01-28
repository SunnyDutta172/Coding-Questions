//We have been given two coordinates (x1,y1) & (x2,y2) in a 2D Graph.We have to Calculate the Distance between them.
#include <iostream>
#include <cmath>
using namespace std;
float distance(int x1,int y1,int x2,int y2){
  return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) * 1.0);
 }
int main(){
int x1,y1,x2,y2;
cin >> x1 >> y1 >> x2 >> y2;
cout << distance(x1,y1,x2,y2) << endl;
return 0;
}
