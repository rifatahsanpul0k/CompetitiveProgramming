#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int n = 500;
    ofstream hello("in.txt");
    
    if (hello.is_open()) {
        srand(time(0)); // Seed the random number generator
        
        for (int i = 0; i < n; i++) {
            int a = rand() % 1000;
            hello << a << endl;
        }
        hello.close();
    } else {
        cerr << "Unable to open file";
    }
    
    return 0;
}
