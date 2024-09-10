#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int testcase;
    cin >> testcase;
    while (testcase--) {
        int m, n;
        cin >> m >> n;
        string a1, a2;
        cin >> a1 >> a2;

        // Precompute frequency arrays for each prefix
        vector<vector<int>> freq1(m + 1, vector<int>(26, 0));
        vector<vector<int>> freq2(m + 1, vector<int>(26, 0));

        for (int i = 0; i < m; ++i) {
            freq1[i + 1] = freq1[i];
            freq2[i + 1] = freq2[i];
            freq1[i + 1][a1[i] - 'a']++;
            freq2[i + 1][a2[i] - 'a']++;
        }
        //output of the two frequency arrays
        cout << "freq1: " << endl;
        for (int i = 0; i < m + 1; ++i) {
            for (int j = 0; j < 26; ++j) {
                cout << freq1[i][j] << " ";
            }
            cout << endl;
        }
        cout << "freq2: " << endl;
        for (int i = 0; i < m + 1; ++i) {
            for (int j = 0; j < 26; ++j) {
                cout << freq2[i][j] << " ";
            }
            cout << endl;
        }
        while (n--) {
            int l, r;
            cin >> l >> r;
            l--; r--;

            vector<int> subFreq1(26, 0), subFreq2(26, 0);
            for (int i = 0; i < 26; ++i) {
                subFreq1[i] = freq1[r + 1][i] - freq1[l][i];
                subFreq2[i] = freq2[r + 1][i] - freq2[l][i];
            }

            // Calculate the number of matching characters
            int matchCount = 0;
            for (int i = 0; i < 26; ++i) {
                matchCount += min(subFreq1[i], subFreq2[i]);
            }

            // Determine the number of changes needed
            int size = (r - l + 1) - matchCount;
            cout << size << endl;
        }
    }
    return 0;
}
