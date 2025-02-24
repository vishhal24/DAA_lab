#include<bits/stdc++.h>
using namespace std;
int kTh_Largest(const vector<int> vec,int k){
    priority_queue<int,vector<int>,greater<int>>pq;
    for(auto it : vec){
        if(pq.size()<k){
            pq.push(it);
        }
        else if(it > pq.top()){
            pq.pop();
            pq.push(it);
        }
    }
    return pq.top();
}
void print(vector<int>vec){
    for(auto it : vec){
        cout<<it<<" ";
    }
    cout<<endl;
}
int main(){
  int n;
  cout<<"Enter Number of element ";
  cin>>n;
  vector<int>vec(n);
  for(int i = 0 ;i < n;i++){
    cin>>vec[i];
  }
  cout<<"Given Array \n";
  print(vec);
  int k;
  cin>>k;
  int val = kTh_Largest(vec,k);
  cout<<"K_th Largest Element : "<<val;
  
  return 0;
}
