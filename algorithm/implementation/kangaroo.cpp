#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;

    int dist = abs(x1 - x2);
    int v_diff = abs(v1 - v2);
    if(v_diff == 0 || dist % v_diff != 0 || (x1 > x2 && v1 > v2) || (x1 < x2 && v1 < v2)){
        cout << "NO";
    }else{
        cout << "YES";
    }
    return 0;
}
