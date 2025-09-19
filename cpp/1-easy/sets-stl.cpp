//https://www.hackerrank.com/challenges/cpp-sets/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    set<int> values_set;
    int queries_count, action, x;

    cin >> queries_count;

    for (int i{0}; i < queries_count; ++i) {

        cin >> action;
        cin >> x;

        if (action == 1) {
            values_set.insert(x);
        } else if (action == 2) {
            values_set.erase(x);
        } else if (action == 3) {

            auto it = values_set.find(x);

            if(it == values_set.end()) {
                cout << "No" << endl;
            } else {
                cout << "Yes" << endl;
            }
        }
    }
    return 0;
}
