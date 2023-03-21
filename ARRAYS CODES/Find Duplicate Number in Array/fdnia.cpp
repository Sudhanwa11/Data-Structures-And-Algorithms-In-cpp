#include <iostream>
using namespace std;
int main() {
   //an example array taken
   int array [5] = {4,2,4,3,1};
   int answer = 0;
   int size = 5;
   for (int i = 0; i<size; i++) {
       answer = answer^array[i];
   }
   for (int i = 1; i<size; i++) {
       answer = answer^i;
   }
   cout<< answer <<endl;
   return answer;
}
