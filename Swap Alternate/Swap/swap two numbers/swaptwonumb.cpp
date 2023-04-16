#include <bits/stdc++.h> 
#include <utility>
pair < int, int > swap(pair < int, int > swapValues) {
    pair<int,int> temp;
    temp.first = swapValues.second;
    temp.second = swapValues.first;
    return temp;
}
