#include<bits/stdc++.h>
using namespace std;
int
jump(int key,int arr[],int n){
  int prev = 0;
  int m = sqrt(n);
  while(arr[min(m,n)-1] < key){
    prev = m;
    m+=sqrt(n);
    if(prev>=n)return -1;
  }
  for(int i = prev ; i <min(m,n);i++){
    if(arr[i] == key)
      return i;
  }
  return -1;
}
    
int  main(){
  int n;
  cout<<"enter number of element ";
  cin>>n;
  int arr[n];
  cout<<"enter elements";
  for(int i = 0 ; i< n;i++){
    cin>>arr[i];
  }
  int key ;
  cout<<"enter key";
  cin>>key;
  cout<<jump(key,arr,n);
  return 0;
}
