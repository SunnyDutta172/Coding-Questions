//Given two rectangles,find if the given rectangles overlap or not.
//There is a Simple approach.Two rectangles do not overlap if one of the following Condition is True.
//1.One rectangle is above top edge of other rectangle.
//2.One rectangle is on the left side of the left edge of other rectangle.
#include <iostream>
using namespace std;
struct Point{
    int x,y;
};
bool doOverlap(Point l1,Point r1,Point l2,Point r2){
  if(l1.x > r2.x || l2.x > r1.x) return false;
  if(r1.y > l2.y || r2.y > l1.y) return false;
return true;
}
int main(){
Point l1,r1,l2,r2;
cin >> l1.x >> l1.y >> r1.x >> r1.y >> l2.x >> l2.y >> r2.x >> r2.y;
cout << doOverlap(l1,r1,l2,r2) << endl;
return 0;
}
