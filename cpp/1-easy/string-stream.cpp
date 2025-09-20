#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    vector<int> nums;
    int num;
    char ch;
    stringstream ss;

    ss << str;

    while (ss >> num) {
        nums.push_back(num);
        ss >> ch;
    }

    return nums;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
