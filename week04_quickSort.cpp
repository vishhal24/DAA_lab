#include<bits/stdc++.h>
using namespace std;
int pivot(vector<int>&vec,int l ,int h){
    int p = vec[h];
    int i = l - 1;
    for(int j = l ; j < h ;j++){
        if(vec[j] < p){
            i++;
            swap(vec[i],vec[j]);
        }
    }
    i++;
    swap(vec[i],vec[h]);
    return i;
}
void QuickSort(vector<int>&vec,int l ,int h){
    if(l<h){
    int piv = pivot(vec,l,h);
    QuickSort(vec,l,piv-1);
    QuickSort(vec,piv+1,h);
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
  cout<<"Enter Number of element ";
  cin>>n;
  vector<int>vec(n);
  for(int i = 0 ;i < n;i++){
    cin>>vec[i];
  }
  cout<<"Before Sort \n";
  print(vec);
 QuickSort(vec,0,n-1);
  cout<<"After Sort \n";
  print(vec);
  return 0;
}
