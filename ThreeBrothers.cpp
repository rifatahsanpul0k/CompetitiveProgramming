#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    cout << (n + m == 3 ? 3 : abs(n - m)) << endl;
    return 0;
}