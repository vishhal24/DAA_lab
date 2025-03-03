#include <bits/stdc++.h>
using namespace std;

// Function to print the vector
void printVector(const vector<int>& vec) {
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}

// Function to read input into the vector
void inputVector(vector<int>& vec) {
    for (int i = 0; i < vec.size(); i++) {
        cin >> vec[i];
    }
}

int main() {
    cout << "Enter size of two Arrays" << endl;
    int n, m;
    cin >> n >> m;
    
    vector<int> v1(n), v2(m);
    
    // Reading input
    inputVector(v1);
    inputVector(v2);
    
    vector<int> ans;
    int i = 0, j = 0;
    
    // Finding the intersection
    while (i < n && j < m) {
        if (v1[i] == v2[j]) {
            ans.push_back(v1[i]);
            i++;
            j++;
        } else if (v1[i] < v2[j]) {
            i++;
        } else {
            j++;
        }
    }
    
    // Printing the result (common elements)
    printVector(ans);
    
    return 0;
}
