#include<bits/stdc++.h>
using namespace std;
class Time{
public:
int hour;
int m;

Time(int mins){
  hour=mins/60;
  m=mins%60;
}

void display(){
  cout<<miles<<" miles ans "<<feet<<" feet"<<endl;
}

};
int main(){
  int min_from_mid_night = 340;
  Time t = min_from_mid_night;
  t.display();
  return 0;
}
