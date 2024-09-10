#include<iostream>
#include<vector>
using namespace std;
int bazokaMochasArray(vector<int> &v){
    int n = v.size(), count = 0;
    int i = 0;
    while(i<n-1)
    {
        if (v[i+1] <= v[i])
        {
            count++;
            i+=2;
            continue;
        }
        i++;
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    vector<string>result(n);
    for (int i = 0; i < n; i++)
    {
        int m;
        cin>>m;
        vector<int> v(m);
        for (int j = 0; j < m; j++)
        {
            cin>>v[j];
        }
        if (bazokaMochasArray(v)<2)
        {
            result[i] = "YES";
        } else result[i] = "NO";
    }

    for(string s : result){
        cout<<s<<endl;
    }
}