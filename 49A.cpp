#include <iostream>
using namespace std;

int main(){
  string s;
  int n,k;
  cin>>s>>n;
  if(s=="January")
  k=1;
  if(s=="February")
  k=2;
  if(s=="March")
  k=3;
  if(s=="April")
  k=4;
  if(s=="May")
  k=5;
  if(s=="June")
  k=6;
  if(s=="July")
  k=7;
  if(s=="August")
  k=8;
  if(s=="September")
  k=9;
  if(s=="October")
  k=10;
  if(s=="November")
  k=11;
  if(s=="December")
  k=12;

  k=(k+n)%12;

  switch(k){
    case 1:
    cout<<"January";
    break;
    case 2:
    cout<<"February";
    break;
    case 3:
    cout<<"March";
    break;
    case 4:
    cout<<"April";
    break;
    case 5:
    cout<<"May";
    break;
    case 6:
    cout<<"June";
    break;
    case 7:
    cout<<"July";
    break;
    case 8:
    cout<<"August";
    break;
    case 9:
    cout<<"September";
    break;
    case 10:
    cout<<"October";
    break;
    case 11:
    cout<<"November";
    break;
    case 0:
    cout<<"December";
    break;
  }
  return 0;
}
