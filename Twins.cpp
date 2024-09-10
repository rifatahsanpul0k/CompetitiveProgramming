#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vec(n,0);
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        vec.push_back(x);
    }
    int sum = 0;
    //sort in descending order
    sort(vec.begin(), vec.end(), greater<int>()); 
    //sum of all the elements of the vector
    sum = accumulate(vec.begin(), vec.end(), sum)/2;
    int sum1 = 0, counter = 0;
    for (int i = 0; i < n ; i++)
    {
        sum1 += vec[i];
        counter++;
        if (sum1 > sum)
        {   
            //cout<<"i "<<i<<endl;
            break;
        }
        
    }
    //cout<<"sum: "<<sum<<endl;
    //cout<<"sum1: "<<sum1<<endl;
    cout<<counter<<endl;
    
}