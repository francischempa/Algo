/***
 * lower_bound() return a pointer to the first element in the array which is >= value
 *                  it will skip all elements that are < value
 *                  if it could not find anything, it return end() iterator
 * upper_bound() return a pointer to the first element in the array which is > value
 *                  it will skip all elements that are <= value
 *                  if it could not find anything, it return end() iterator
 *
 *
 */
#include <bits/stdc++.h>

using namespace std;

void bubbleSort(vector<int>& v)
{
    auto p = [](const int& x){cout << x << ", ";};

    for_each(v.cbegin(), v.cend(),p);
    cout << "\n";

    for (int i = 0; i < v.size()-1; ++i) {
        for (int j = i+1; j < v.size(); ++j) {
            if(v[i] > v[j]){
                int x=v[i];
                v[i] = v[j];
                v[j] = x;
            }
        }

        for_each(v.cbegin(), v.cend(),p);
        cout << "\n";

    }
}

int main() {
    auto p = [](const int& x){cout << x << ", ";};
    vector<int> v = {1,3, 8, 2, 9, 2, 5, 6};

    sort(v.begin(),v.end(),[](const int& a, const int& b){return a < b;});

    for_each(v.cbegin(), v.cend(),p);
    cout << "\n";

    int A[] = {1,2,2,3,5,6,7,9};

//    auto x = lower_bound(v.cbegin(),v.cend(),5);
//    auto y = upper_bound(v.cbegin(),v.cend(),9);
    auto y = equal_range(A, A+8, 5).first;

    if(y == A+8)
    {
        cout << "Not Found";
    }else {
        cout << *y << endl;
    }
    return 0;
}
