#include<iostream>
#include<vector>
using namespace std;
void print(const vector<int>&vec){
  for(int i = 0 ; i  < vec.size();i++)
    cout<<vec[i]<<" ";
}
void selection_sort(vector<int>& vec,int & comp,int& shift){
  int n = vec.size();
  for(int i = 0 ; i < n-1;i++){
    int min_index = i;
    for(int j = i+1 ; j < n;j++){
      comp++;
      if(vec[j] < vec[min_index]){
        min_index = j;
      }
    }
    swap(vec[i],vec[min_index]);
    shift++;
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
  selection_sort(vec,comp,shift);
  cout<<"\n After Sorting"<<endl;
  cout<<"Comparison : "<<comp<<endl;
  cout<<"\n Shift : "<<shift<<endl;
  print(vec);
  return 0;
}
