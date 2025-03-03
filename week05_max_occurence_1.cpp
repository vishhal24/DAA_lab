#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cout<<"Enter Size \n";
  cin>>n;
  vector<char>vec(n);
  cout<<"Enter Characters \n " ;
  map<char,int>mp;
  for(int i  = 0 ; i < n;i++){
    cin>>vec[i];
    mp[vec[i]]++;
  }
  int max_occurence = 0;
  char ch;
  for(auto &it : mp){
    if(max_occurence < it.second){
      max_occurence = it.second;
      ch  = it.first;
    }
    
  }
  cout<<ch <<" - "<<max_occurence<<endl;
  
  return 0;
}
