#include<iostream>
#include<cmath>  // for ceil function
using namespace std;

int main() {
    long long n, m, a;  // long long to handle large inputs
    cin >> n >> m >> a;

    // Calculate the number of flagstones required for length and width
    long long flagstones_n = (n + a - 1) / a;  // equivalent to ceil(n/a)
    long long flagstones_m = (m + a - 1) / a;  // equivalent to ceil(m/a)

    // Total flagstones required
    long long total = flagstones_n * flagstones_m;

    cout << total << endl;

    return 0;
}
