#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    string a = "#";
    string b = " ";
    for(int i=0; i<n;  i++){
        for(int j=0; j<n-i-1; j++){
            cout << b;
        }
        for(int j=0; j<i+1; j++){
            cout << a;
        }

        cout << "" << endl;
    }
    return 0;
}
