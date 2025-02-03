#include<iostream>
using namespace std;
void binary(int key,int arr[],int n){
  int s = 0;
  int e = n-1;
  while(s<=e){
    int mid = s+((e-s)/2);
    if(arr[mid] == key){
      cout<<"key found at "<<mid;
      return;
    }
    else if(arr[mid]<=key){
      s = mid+1;
    }
    else{
      e  = mid-1;
    }
  }
  cout<<"Key Not found ";
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
  binary(key,arr,n);
  return 0;
}
