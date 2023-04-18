#include <iostream>
#include <vector>
using namespace std;
//function to reverse
vector<int> reverse (vector<int> v) {
    int s = 0;
    int e = v.size()-1;
    while (s<=e) {
        swap(v[s], v[e]);
        s++;
        e--;
    }
    return v;
}
//function to print array
void print(vector <int> v) {
    for (int i=0; i<v.size(); i++) {
        cout<< v[i] <<" ";
    }
    cout<<endl;
}

int main() {
    vector<int> v;
    // 11,5,8,3,4
    v.push_back(11);
    v.push_back(5);
    v.push_back(8);
    v.push_back(3);
    v.push_back(4);
    reverse(v);
    
    vector<int> ans = reverse(v);
    print(ans);
}
