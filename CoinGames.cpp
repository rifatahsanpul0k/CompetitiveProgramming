#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int testcase;
    cin >> testcase;
    vector<string> arr(testcase);
    for (int i = 0; i < testcase; i++)
    {
        int numU = 0;
        int n;
        string str;
        cin >> n >> str;
        for (char c : str)
        {
            if (c == 'U' || c == 'u')
            {
                numU++;
            }
        }
        if (numU % 2 == 0)
        {
            arr.push_back("NO");
        }
        else
            arr.push_back("YES");
    }
    for(string a :arr){
        cout<<a<<endl;
    }
}