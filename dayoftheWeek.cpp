//Given a date(day,month,year).Your task is to find out the day on which that date falls.The function should be able to compute the day for any date in past or future.The function should return values form 0 to 6 where 0 means Sunday,1 means Monday,2 means Tuesday,3 means Wednesday,4 means Thrusday,5 means Friday,6 means Saturday.
#include <iostream>
using namespace std;
int dayOfWeek(int d,int m,int y){
  static int monthCode[] = {6,2,2,5,0,3,5,1,4,6,2,4};
  if(m < 3){
    y -= 1;
    }
    int yearCode = (y % 100) + (y % 100)/4;
    yearCode = (yearCode + (y/100) / 4 + 5 * (y / 100) ) % 7;
    return (d + monthCode[m - 1] + yearCode) % 7;
  }
int main(){
int d,m,y;
cin >> d >> m >> y;
cout << dayOfWeek(d,m,y) << endl;
return 0;
}
