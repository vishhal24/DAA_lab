#include<bits/stdc++.h>
using namespace std;
void Merge(vector<int>vec,int s,int mid,int e){
  vector<int>left(vec.begin()+s,vec.begin()+mid+1);
  vector<int>right(vec.begin()+mid,vec.begin()+e+1);
  int i = 0;
  int j = 0;
  int k = s;
  int n = left.size();
  int m = right.size();
  while(i<n && j < m){
    if(left[i] < right[j]){
      vec[k++] = left[i];
      i++;
    }
    else{
      vec[k++] = right[j];
      j++;
    }
  }
  while( i  < n){
    vec[k++] = left[i++];
  }
  while(j<m){
    vec[k++] = right[j++];
  }
}
void MergeSort(vector<int>vec,int s,int e){
  if(s < e){
  int mid = (s+e)/2;
  MergeSort(vec,s,mid);
  MergeSort(vec,mid+1,e);
  Merge(vec,s,mid,e);
 }
}
void print(vector<int>vec){
    for(auto it : vec){
        cout<<it<<" ";
    }
    cout<<endl;
}
int main(){
  int n;
  cout<<"Enter Number of element";
  cin>>n;
  vector<int>vec(n);
  for(int i = 0 ;i < n;i++){
    cin>>vec[i];
  }
  cout<<"Before Sort \n";
  print(vec);
  MergeSort(vec,0,vec.size()-1);
  cout<<"After Sort \n";
  print(vec);
  return 0;
}
