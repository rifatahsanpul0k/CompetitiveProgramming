#include <iostream>
using namespace std;
#include <vector>
int main()
{
    int testcase;
    cin >> testcase;
    while (testcase > 0)
    {
        int m, n;
        cin >> m >> n;
        string a1, a2;
        cin >> a1 >> a2;
        
        for (int j = 0; j < n; j++)
        {
            vector<int> frq1(26, 0), frq2(26, 0);
            int l, r;
            cin >> l >> r;
            l--, r--;
            for (int i = l; i <= r; ++i)
            {
                frq1[a1[i] - 'a']++;
                frq2[a2[i] - 'a']++;
            }
            int counter = 0;
            for (int i = 0; i < 26; i++)
            {
                counter += abs(frq1[i] - frq2[i]);
            }
            cout <<"Counter: "<< counter << endl;
            cout << counter/2 << endl;
        }
        testcase--;
    }
}