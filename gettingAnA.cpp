#include<iostream>
#include<vector>
using namespace std;
int gettingAnA(vector<int> &v){
    int n = v.size(), n0=0;
    int No5 = (n*4.5)/5;
    for (int i = 0; i < n; i++)
    {
        if (v[i]==5)
        {
            n0++;
        }
    }
    return No5 - n0;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    
    cout<<gettingAnA(v);
}