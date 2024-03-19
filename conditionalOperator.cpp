#include<iostream>
using namespace std;
int main(){
  int mark=90;
  cout<<(mark>50)?"PASS":"FAIL";//booleanExpr?trueExpr:falseExpr
  if (mark<50)//only one statement omit{}not recomended
  cout<<"fail";
  else{
    cout<<"Try Harder!";
  }

  return 0;
}