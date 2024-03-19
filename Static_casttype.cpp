#include<iostream>
#include<iomanip>
using namespace std;
int main(){
  double d=5.5;
  int i=static_cast<int>(d);
  float f=static_cast<float>(i);
  long L=static_cast<long>(d);
  cout<<fixed<<setprecision(1);
  cout<<d<<endl<<i<<endl<<f<<L<<endl;

  return 0;
}