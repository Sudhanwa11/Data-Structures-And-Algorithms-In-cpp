#include <bits/stdc++.h> 
long long int sumOrProduct(long long int n, long long int q) {
	long long int sum = 0;
	long long int prod = 1;
	int m = 1000000007;
	if(q==1) {
		for(int i=1; i<=n; i++){
           sum+=i;
        }
        return sum;
    }
    else if(q==2){
		for(int i=1; i<=n; i++){
           prod = (prod*i)%m;
        }
        return prod;
    }
    return 1;
};
