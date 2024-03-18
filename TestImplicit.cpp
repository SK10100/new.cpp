/*Test implicit type casting*/
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
  int i;
  double d;
  cout<<fixed<<setprecision(1)<<endl;
  i=3;
  d=i;
  cout<<"d= "<<d<<endl;
  d=3.5;
  i=d;
  cout<<"i= "<<i<<endl;
  i=6.6;
  cout<<"i= "<<i<<endl;
  d=5;
  cout<<"d= "<<d<<endl;
  cout<<"d+i= "<<d+i<<endl;
  
  return 0;
}
