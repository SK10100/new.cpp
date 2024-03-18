#include<iostream>
#include<iomanip>//Needed for formating floating point number
using namespace std;
int main(){
  int i1=2,i2=4;
  double d1=2.5,d2=5.0;
  //print floating-point in fixed format with 1 decimal place
  cout<<fixed<<setprecision(1);
  cout<<i1<<"+"<<i2<<"="<<i1+i2<<endl;
  cout<<d1<<"+"<<d2<<"="<<d1+d2<<endl;
  cout<<i1<<"+"<<d2<<"="<<i1+d2<<endl;

  cout<<i1<<"-"<<i2<<"="<<i1-i2<<endl;
  cout<<d1<<"-"<<d2<<"="<<d1-d2<<endl;
  cout<<i1<<"-"<<d2<<"="<<i1-d2<<endl;

  cout<<i1<<"*"<<i2<<"="<<i1*i2<<endl;
  cout<<d1<<"*"<<d2<<"="<<d1*d2<<endl;
  cout<<i1<<"*"<<d2<<"="<<i1*d2<<endl;

  cout<<i1<<"/"<<i2<<"="<<i1/i2<<endl;
  cout<<d1<<"/"<<d2<<"="<<d1/d2<<endl;
  cout<<i1<<"/"<<d2<<"="<<i1/d2<<endl;

  cout<<i1<<"%"<<i2<<"="<<i1%i2<<endl;
  /*cout<<d1<<"%"<<d2<<"="<<d1%d2<<endl;//invalid operands of types 'double' and 'double' to binary 'operator%'
  cout<<i1<<"%"<<d2<<"="<<i1%d2<<endl;//invalid operands of types 'double' and 'double' to binary 'operator%'
*/
  return 0;

}