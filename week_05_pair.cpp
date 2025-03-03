using namespace std;
void solve(vector<int>& vec,int key){
  map<int,int>mp;
  for(int i = 0 ; i < vec.size() ; i++){
    if(mp.find(key-vec[i])!=mp.end()){
      cout<<mp[key-vec[i]]<<" "<<i<<endl;
      return ;
    }
    mp[vec[i]] = i;
  }
  cout<<"NO such pair exist ";
}
  
int main(){
  cout<<"Enter NUmber of Test CAse"<<endl;
  int t;
  cin>>t;
  while(t--){
    cout<<"Enter Size \n";
    int n;
    cin>>n;
    int key;
    cin>>key;
    vector<int>vec(n);
    for(int i = 0 ; i < n;i++)
      cin>>vec[i];
    solve(vec,key);
  }
}
