#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

typedef int64_t ll;
using namespace std;

int main() {
    freopen("output.txt", "w", stdout);

    int n, m;
    cin >> n >> m;

    int move = 1;
    while (n != 0 && m != 0) {
        n--;
        m--;
        move++;
    }

    if (move%2 != 0)
        cout << "Malvika";
    else
        cout << "Akshat";
    cout << endl;
    return 0;
}