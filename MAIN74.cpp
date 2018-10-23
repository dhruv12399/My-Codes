#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
	int times=0;
    while (b != 0) {
        int temp = a;
        a = b;
        b = temp % b;
        times++;
    }
    return a;
}

int main()
{
	
	return 0;
}

