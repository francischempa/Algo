#include <bits/stdc++.h>

using namespace std;

int main() {
    const int n = 8;
    int A[] = {-1,2,4,-3,5,2,-5,2};

    int best = 0;
    int sum = 0;
    for(int i : A)
    {
        sum = max(sum + i, i);
        best = max(best, sum);
    }
    cout << best << endl;

    return 0;
}
