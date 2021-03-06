                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                #include <algorithm>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <functional>
#include <numeric>
#include <utility>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cassert>
#include <climits>

using namespace std;

int main()
{
    std::vector<int> v = {0, 1, 2, 3, 4, 5};

    v.push_back(6);

    for(auto i: v) // access by value, the type of i is int
        std::cout << i << ' ';
    std::cout << '\n';

    for(auto&& i: v) // access by reference, the type of i is int&
        std::cout << i << ' ';
    std::cout << '\n';

    int a[10] = {0, 1, 2, 3, 4, 5};

    for(int n: a)  // the initializer may be an array
        std::cout << n << ' ';
    std::cout << '\n';

    