#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector <int> a(n);
    for (int i=0;i<n;i++) cin >> a[i];
    int q;
    cin >> q;
    while (q--) {
        int x;
        cin >> x;
        auto it=lower_bound(a.begin(),a.end(),x);
        cout << (*it==x?"Yes ":"No ") << it-a.begin()+1 << endl;
    }
      return 0;
}