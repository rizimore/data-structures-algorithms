#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (auto &num: a)
            cin >> num;
        sort(a.begin(), a.end());
        if (a[0] >= k)
            cout << 0;
        else
            cout << abs(k-a[0]);
        cout << endl;
    }
    return 0;
}