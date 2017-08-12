#include <bits/stdc++.h>

using namespace std;

int arrayPairSum(vector<int>& nums) {
    int size = nums.size();
    int n = size/2;
    sort(nums.begin(),nums.end());
    vector <int > temp(2);
    int cursum=0;
    int pairs=0;
    int i=0;
    while(pairs<n){
        if(i+1 != size ){
          temp[0]=nums[i];
          temp[1]=nums[i+1];
          cursum+= *min_element(temp.begin(),temp.end());
        }
    i+=2;
    pairs++;
  }
  cout<<cursum;
}

int main(){
  vector <int > nums;
  int sz,num;
  cin>>sz;
  for(int i=0;i<sz;i++)
  {
    cin>>num;
    nums.push_back(num);
  }
  arrayPairSum(nums);
  return 0;
}
