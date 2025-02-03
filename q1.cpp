#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"enter number of element\n";
  cin>>n;
  int arr[n];
  cout<<"Enter element\n";
  for(int i = 0 ; i<n ;i++){
    cin>>arr[i];
  }
  int key;
  cout<<"Enter key\n";
  cin>>key;
  for(int i = 0 ;i<n;i++){
    if(arr[i] == key){
      cout<<"Key found at "<<i;
      return 0;
    }
  }
  cout<<"key not found";
  return 0;
}
  
