#include<iostream>
#include<vector>
using namespace std;
void print(const vector<int>&vec){
  for(int i = 0 ; i  < vec.size();i++)
    cout<<vec[i]<<" ";
}
void insertion_sort(vector<int>&vec,int& comp,int& shift){
  int n = vec.size();
  for(int i = 1 ; i < n;i++){
    int key = vec[i];
    int j = i-1;
    while(j>=0 && vec[j]>key){
      vec[j+1] = vec[j];
      j--;
    }
    vec[j+1] = key;
  }
}
int main(){
  int n;
  cin>>n;
  vector<int>vec(n);
  for(int i = 0 ;i < n;i++){
    cin>>vec[i];
  }
  cout<<"Before Sorting"<<endl;
  print(vec);
  int comp = 0 , shift = 0;
  insertion_sort(vec,comp,shift);
  cout<<"\n After Sorting"<<endl;
  cout<<"Comparison : "<<comp<<endl;
  cout<<"\n Shift : "<<shift<<endl;
  print(vec);
  return 0;
}
