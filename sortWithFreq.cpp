#include<iostream>
#include<vector>

using namespace std;

void sorting_with_Freuency(vector<int> v) {
    int n = v.size();
    int i = 0, ind;
    while (i < n - 1) {
        for (int j = i + 1; j < n; j++) {
            if (v[i] == v[j]) {
                // Swap elements to group same elements together
                int temp = v[i + 1];
                v[i + 1] = v[j];
                v[j] = temp;
                i++;
            }
        }
        i++;
    }
    for (int x : v) cout << x << " ";
    cout << endl;
}

int main() {
    vector<int> v = {3, 5, 6, 3, 4, 6, 5, 3};
    sorting_with_Freuency(v);
}
