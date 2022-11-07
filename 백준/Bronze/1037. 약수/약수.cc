// Created on 고승우의 iPad.

// C++
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
using namespace std;

typedef long long ll;

int main() {
    
    int n;

    cin >> n;

    vector<ll> v;

    for (int i=0; i<n; i++)
    {
        ll m;
        cin >> m;
        v.push_back(m);
    }
    
    sort (v.begin(), v.end());

    int a = v[0];
    int b = v[v.size()-1];

    cout << a*b << '\n';

    return 0;
}