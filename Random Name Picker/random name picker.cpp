#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    srand(static_cast<unsigned int> (time(0)));
    
    vector<string> names = {"Sudhanwa", "Garv", "sarthak", "saubhagya"};
    
    if (names.empty()) {
        cout<< "List is empty" <<endl;
        return 1;
    }
    
    int Randomid = rand() % names.size();
    
    cout<< "Random name is: " << names[Randomid] <<endl;

    return 0;
}
