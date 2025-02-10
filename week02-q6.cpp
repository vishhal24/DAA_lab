#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>vec(n);
    unordered_set<int>st;
    for(int i = 0 ; i < n;i++){
        cin>>vec[i];
        st.insert(vec[i]);
    }
    int k ;
    cin>>k;
    int cnt = 0;
    for(int i = 0 ; i < n;i++){
        if(st.find(vec[i]+k)!=st.end()){
            cnt++;
        }
        if(st.find(vec[i] - k)!=st.end() && k!=0)
            cnt++;
        st.erase(vec[i]);

    }
    cout<<cnt;
    return 0;
}
