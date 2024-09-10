#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
string sortString(string &str, int l, int r) {
    string temp = str.substr(l,(r-l+1));
    sort(temp.begin(), temp.end());
    return temp;
    }
int main(){
    vector<int> v;
    int testcase;
    cin >> testcase;
    while (testcase--) {
        int m, n;
        cin >> m >> n;
        string a1, a2;
        
        for (int i = 0; i < m; i++)
        {
            /* code */
        }
        
    while (n--) {
        int counter = 0;
            int l, r;
            cin >> l >> r;
            l--; r--;
            string sorted = sortString(a1, l, r);
            string sorted2 = sortString(a2, l, r);

            cout<<"Sorted: "<<sorted<<endl;
            cout<<"Sorted2: "<<sorted2<<endl;
            for (int i = l; i < (r-l+1); i++)
            {
                if (sorted[i] != sorted2[i])
                {
                    counter++;
                }
                
            }
            cout<<"Counter: "<<counter<<endl;
        }
    }
    // cout<<"Result: "<<endl;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << endl;
    // }
}