#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int l, r;
    while (cin >> l >> r) {
        if (l == 0 && r == 0) {
            break;
        }
        l--;
        r--;
        while (l < r) {
            swap(a[l], a[r]);
            l++;
            r--;
        }
    }
    
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    
    return 0;
}
