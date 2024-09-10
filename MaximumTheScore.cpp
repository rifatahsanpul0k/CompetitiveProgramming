#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void insertionSort(vector<int> &array){
    int temp;
    for (int i = 0; i < array.size(); i++)
    {
        for (int j = i; j > 0; j--)
        {
            temp = array[j];
            if (temp<array[j-1])
            {
                array[j] = array[j-1];
                array[j-1] = temp;
            } else continue;
            
        }
        
    }
    
}

int maximum_the_Score(vector<int>& v, int n) {
    int score = 0,i = 0;
    while (i<n)
    {
        if (v[i]<v[i+1])
        {
            score+=v[i];
        } else {score+=v[i+1];}
        
        cout<<"\ni="<<i<<endl;
        i+=2;
    }
    return score;
}

int main() {
    int t, n, m;
    cin >> t;
    vector<int> result(t);
    for (int j = 0; j < t; j++) {
        cin >> n;
        vector<int> v(2 * n);
        for (int i = 0; i < 2 * n; i++) {
            cin >> v[i];
        }
        result[j] = maximum_the_Score(v, n);
    }

    for (int j = 0; j < t; j++) {
        cout << result[j] << endl;
    }

    return 0;
}
