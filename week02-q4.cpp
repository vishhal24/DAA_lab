#include<bits/stdc++.h>
using namespace std;

int lo(vector<int> vec, int key) {
    int s = 0;
    int e = vec.size() - 1;
    int ans = -1;
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (vec[mid] == key) {
            e = mid - 1;
            ans = mid;
        } else if (vec[mid] < key) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return ans;
}

int up(vector<int> vec, int key) {
    int s = 0;
    int e = vec.size() - 1;
    int ans = -1;
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (vec[mid] == key) {
            s = mid + 1;
            ans = mid;  // Update ans after finding the key
        } else if (vec[mid] < key) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return ans;
}

int main() {
    cout << "Enter n: ";
    int n;
    cin >> n;
    vector<int> vec(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    int key;
    cout << "Enter key: ";
    cin >> key;
    
    int l = lo(vec, key);
    int u = up(vec, key);
    
    if (l == -1 || u == -1) {
        cout << "Not found";
    } else {
        cout << "Count of " << key << ": " << u - l + 1 << endl;
    }
    return 0;
}
