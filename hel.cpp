#include <iostream>
#include<vector>

using namespace std;

int main() {
    cout << "Hello" << endl;
    int a;
    vector<int> vec;
    vec.push_back(23);
    vec.push_back(45);
    for(auto c:vec)
    {
        cout<<c<<" ";
    }
    
    return 0;
}
