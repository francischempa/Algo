/***
 * RECURSION
 * 1. Find the simplest posible solution
 * 2. Visulize if with few other examples
 * 3. Relate the hard cases to simpler ones
 * 4. Generalize the partern
 * 5. Write code by combining parterns with base case.
 */

#include <bits/stdc++.h>

using namespace std;

//GENERATING SUBSETS

//Method 1

//const int n = 3;
//vector<int> subset;
//
//void search(int k) {
//    if (k == n) {
//        for_each(subset.begin(),subset.end(), [](auto x){cout << x << ", ";});
//        cout << "\n";
//    } else {
//        search(k+1);
//        subset.push_back(k);
//        search(k+1);
//        subset.pop_back();
//    }
//}
//
////Method 2
//void findSubsets(const int& n, void (*function)(const vector<int>&)){
//    const int N = (1<<n);
//    for (int subset = 0; subset < N; ++subset) {
//        vector<int> v;
//        for (int i = 0; i < n; ++i) {
//            if(subset & (1<<i)){
//                v.push_back(i);
//            }
//        }
//        function(v);
//    }
//}
//
//void printVec(const vector<int>& v){
//    for_each(v.begin(),v.end(), [](auto x){cout << x << ", ";});
//    cout << "\n";
//}
//
//// PERMUTATIONS
//void findPermutions(const int& n, void (*function)(const vector<int>&)){
//    vector<int> permutation;
//    permutation.reserve(n);
//    for (int i = 0; i < n; i++) {
//        permutation.push_back(i);
//    }
//    do {
//        function(permutation);
//    } while (next_permutation(permutation.begin(),permutation.end()));
//}
//
//// PRUNING THE SEARCH
//namespace bt {
//    const int n = 4;
//    int ways = 0;
//
//    vector<int> column(n, 0);
//
//    vector<int> diag1(7, 0);
//    vector<int> diag2(7, 0);
//
//    void pruningSearch(int y) {
//        if (y == n) {
//            ways++;
//            return;
//        }
//        for (int x = 0; x < n; x++) {
//            if (column[x] || diag1[x + y] || diag2[x - y + n - 1]) continue;
//            column[x] = diag1[x + y] = diag2[x - y + n - 1] = 1;
//            pruningSearch(y + 1);
//            column[x] = diag1[x + y] = diag2[x - y + n - 1] = 0;
//        }
//    }
//}
//
//namespace re
//{
//    int ways = 0;
//    const int n = 4;
//    vector<int> R(n, 0);
//    vector<int> D1(7, 0);
//    vector<int> D2(7, 0);
//
//    void search(int c){
//        if(c == n){
//            ++ways;
//            return;
//        }
//        for (int r = 0; r < n; ++r) {
//            if(R[r] || D1[r+c] || D2[c-r+n-1]) continue;
//            R[r] = D1[r+c] = D2[c-r+n-1] = 1;
//            re::search(c+1);
//            R[r] = D1[r+c] = D2[c-r+n-1] = 0;
//        }
//    }
//
//}

namespace ps{

    int ways = 0;
    const uint8_t n = 7;
    unordered_set<uint16_t> G;

    inline uint16_t merge(const uint8_t& r, const uint8_t& c){
        return (r << 8) | c;
    }

    inline pair<uint8_t,uint8_t> split(const uint16_t& v){
        return make_pair(v>>8, (v&0x00ff));
    }

    void search(uint8_t r, uint8_t c){

        if(r == ps::n - 1 && c == ps::n -1){
            if(G.empty()){
                ++ways;
            }
            return;
        }
        {
            int r = 0;
            cout << r << endl;
        }
        for (int m = 0; m < 4; ++m) {
            uint8_t r2 = r, c2 = c;
            switch (m) {
                case 0://UP
                    r2 = r - 1;
                    break;
                case 1://DOWN
                    r2 = r + 1;
                    break;
                case 2://LEFT
                    c2 = c - 1;
                    break;
                case 3://RIGHT
                    c2 = c + 1;
                    break;
                default:
                    break;
            };
            if(r2 >= ps::n || c2 >= ps::n || G.count(merge(r2,c2)) == 0) continue;
            if(
                    ( r2 == n - 1 || c2 == n -1 )
                    &&
                    (
                        (G.count(merge(r2+1, c2)) && G.count(merge(r2-1, c2))) ||
                        (G.count(merge(r2, c2+1)) && G.count(merge(r2, c2-1)))
                    )
                    )continue;

            G.erase(merge(r2,c2));
            ps::search(r2, c2);
            G.insert(merge(r2,c2));
        }
    }
}


int main() {

    for (uint8_t r = 0; r < ps::n; ++r) {
        for (uint8_t c = 0; c < ps::n; ++c) {
            ps::G.insert(ps::merge(r,c));
        }
    }

    ps::G.erase(ps::merge(0,0));
    ps::G.erase(ps::merge(1,0));
    ps::search(1,0);

    cout << ps::ways * 2 << endl;

    return 0;
}
