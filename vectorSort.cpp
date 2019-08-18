#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int m, n;
    vector<int> v;
    cin >> m;
    for (int i=0; i<m; i++) {
        cin >> n;
        v.push_back(n);
    }
    sort(v.begin(), v.end());
    for (int i=0; i<m; i++) {
        cout << v[i] << " ";
    }
    return 0;
}