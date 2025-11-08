#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string magnet;
    cin >> magnet;  // read first magnet as string
    int groups = 1;

    for (int i = 1; i < n; i++) {
        string current;
        cin >> current;

        // compare previous and current magnet strings
        if (magnet != current) {
            groups++;
        }

        magnet = current; // update previous magnet
    }

    cout << groups;
    return 0;
}
