#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
string removeDuplicates(string &s)
{
    string result = "";
    sort(s.begin(), s.end());
    auto last = unique(s.begin(), s.end());
    s.erase(last, s.end());
    return s;
}
vector<pair<char, char>> makePair(string &s)
{
    vector<pair<char, char>> symmetry;
    for (int i = 0; i < s.length() / 2; i++)
    {
        symmetry.push_back(make_pair(s[i], s[s.length() - 1 - i]));
    }
    return symmetry;
}
string symmetricEncoding(vector<pair<char, char>> pairs, string &s)
{
    //cout << "Encoded string: " << s << endl;
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 0; j < pairs.size(); j++)
        {
            if (s[i] == pairs[j].first)
            {
                s[i] = pairs[j].second;
                break;
            }
            else if (s[i] == pairs[j].second)
            {
                s[i] = pairs[j].first;
                break;
            }
        }
    }
    return s;
}
int main()
{
    int testcases;
    cin >> testcases;
    for (int i = 0; i < testcases; i++)
    {
        int size;
        cin >> size;
        string s;
        for (int j = 0; j < size; j++)
        {
            char c;
            cin >> c;
            s.push_back(c); // Append character to the string
        }
        string s1 = s;
        string result = removeDuplicates(s);
        vector<pair<char, char>> vec = makePair(result);
        cout << symmetricEncoding(vec, s1) << endl;
    }
}