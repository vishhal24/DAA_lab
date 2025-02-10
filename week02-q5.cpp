#include<bits/stdc++.h>
using namespace std;
int bs(vector<int>vec,int key){
    int s = 0;
    int e = vec.size()-1;
    // int ans = -1;
    while(s<=e){
      int mid = s+(e-s)/2;
      if(vec[mid] == key){
        // e = mid-1;
        // ans = mid;
        return mid;
      }
      else if(vec[mid]<key){
        s = mid+1;
      }
      else{
        e = mid -1;
      }
    }
    return -1;
  }
int main(){
    int n;
    cin>>n;
    vector<int>vec(n);
    
    for(int i = 0 ;  i < n;i++){
        cin>>vec[i];
    }
    for(int i = 0 ; i < n-1;i++){
        for(int j = i+1 ; j< n;j++){
            int key = vec[i]+vec[j];
            if(bs(vec,key)!=-1){
                cout<<i<<","<<j<<","<<bs(vec,key);
                return 0;
            }
        }
    }
    cout<<"Not Founnd";
    return 0;
}
