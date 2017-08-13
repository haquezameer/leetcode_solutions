#include<bits/stdc++.h>

using namespace std;

int main(){
  int num1,num2,distance=0;
  cin>>num1>>num2;
  num1 = num1^num2;
  while(num1){
    if(num1 & 1)
      distance++;
    num1 = num1 / 2;
  }
  cout<<distance;
}
