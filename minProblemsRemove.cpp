#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> minRemovalsToBalanceRound(int t, vector<pair<pair<int, int>, vector<int>>> testCases) {
    vector<int> results;

    for (auto &caseData : testCases) {
        int n = caseData.first.first;
        int k = caseData.first.second;
        vector<int> difficulties = caseData.second;

        // Step 2: Sort the array of difficulties
        sort(difficulties.begin(), difficulties.end());

        int max_len = 0;
        int start = 0;

        // Step 3: Use a sliding window to find the longest valid subarray
        for (int end = 0; end < n; ++end) {
            // While the difference between the current end and start exceeds k, move the start forward
            while (difficulties[end] - difficulties[start] > k) {
                start++;
            }
            // Calculate the length of the current valid subarray
            max_len = max(max_len, end - start + 1);
        }

        // Step 4: Calculate the minimum number of removals
        int min_removals = n - max_len;
        results.push_back(min_removals);
    }

    return results;
}

int main() {
    int t;
    cin >> t;
    vector<pair<pair<int, int>, vector<int>>> testCases(t);

    for (int i = 0; i < t; ++i) {
        int n, k;
        cin >> n >> k;
        vector<int> difficulties(n);
        for (int j = 0; j < n; ++j) {
            cin >> difficulties[j];
        }
        testCases[i] = {{n, k}, difficulties};
    }

    vector<int> results = minRemovalsToBalanceRound(t, testCases);

    for (int result : results) {
        cout << result << endl;
    }

    return 0;
}
