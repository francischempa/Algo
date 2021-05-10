/***
 * Set<int> when iterated over, is sorted from least (begin) to biggest(end-1)
 *
 * unordered_set<int> when iterated over, keeps the order in which items were added to the set
 *                      from recently added (begin) to first added element (end-1)
 */
#include <bits/stdc++.h>

using namespace std;

void vectors(){
    vector<int> v(10, 5);
    for_each(v.begin(),v.end(),[](auto x){cout << x << ", ";});
}

void sets(){
    set<int> s;

    s.insert(2);
    s.insert(3);
    s.insert(0);
    s.insert(1);
    s.insert(2);

    for_each(s.begin(),s.end(),[](auto x){cout << x << ", ";});

    cout << endl;
    cout << s.count(0) << endl;
    cout << s.count(5) << endl;

//    s.erase(1);
    auto l = s.find(1);
    if(l == s.end()) {
        cout << "Not found!\n";
    }else{
        cout << *l << endl;
    }

    for_each(s.begin(),s.end(),[](auto x){cout << x << ", ";});
}

void testSetSort(){
    set<int> s;
    for (int i = 0; i < 100; ++i) {
        s.insert(rand()%10);
    }
    for_each(s.begin(),s.end(),[](auto x){cout << x << ", ";});
}

void unorderedSets(){
    unordered_set<int> s;
    s.insert(3);
    s.insert(2);
    s.insert(3);
    s.insert(0);
    s.insert(1);
    s.insert(2);

    for_each(s.begin(),s.end(),[](auto x){cout << x << ", ";});
}

void multisets(){
    multiset<int> s;

    s.insert(3);
    s.insert(2);
    s.insert(3);
    s.insert(0);
    s.insert(1);
    s.insert(2);

    for_each(s.begin(),s.end(),[](auto x){cout << x << ", ";});
    cout << "\n";

    s.erase(3);

    for_each(s.begin(),s.end(),[](auto x){cout << x << ", ";});
    cout << "\n";

    s.erase(s.find(2));

    for_each(s.begin(),s.end(),[](auto x){cout << x << ", ";});
    cout << "\n";

    s.erase(s.find(2));

    for_each(s.begin(),s.end(),[](auto x){cout << x << ", ";});
    cout << "\n";

}


/***
 * Sorts with key
 */
void maps(){
    map<string,int> m;
    m["monkey"] = 4;
    m["banana"] = 3;
    m["harpsichord"] = 9;
//    cout << m["banana"] << "\n"; // 3

    cout << m["aybabtu"] << "\n"; // 0

    if (m.count("aybabtu")) {
        cout << "Key Exists\n";
    }

    for (auto x : m) {
        cout << x.first << " " << x.second << "\n";
    }

}

void bitsets(){
    bitset<10> s;
    s[1] = 1;
    s[3] = 1;
    s[4] = 1;
    s[7] = 1;
    cout << s.to_string() << endl << endl;

    bitset<10> a(string("0010110110"));
    bitset<10> b(string("1011011000"));
    cout << (a&b) << "\n"; // 0010010000
    cout << (a|b) << "\n"; // 1011111110
    cout << (a^b) << "\n"; // 1001101110
}

void deques(){
    deque<int> d;
    d.push_back(5); // [5]
    d.push_back(2); // [5,2]
    d.push_front(3); // [3,5,2]

    for_each(d.begin(),d.end(),[](auto x){cout << x << ", ";});
    cout << "\n";

    d.pop_back(); // [3,5]
    d.pop_front(); // [5]

    for_each(d.begin(),d.end(),[](auto x){cout << x << ", ";});
    cout << "\n";


}

void stacks(){
    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(5);
    cout << s.top(); // 5
    s.pop();
    cout << s.top(); // 2
}

void queues(){
    queue<int> q;
    q.push(3);
    q.push(2);
    q.push(5);
    cout << q.front(); // 3
    q.pop();
    cout << q.front(); // 2
}

void priorityQueues(){
    priority_queue<int> q;
//    priority_queue<int,vector<int>,greater<int>> q2;
    q.push(3);
    q.push(5);
    q.push(7);
    q.push(2);
    cout << q.top() << "\n"; // 7
    q.pop();
    cout << q.top() << "\n"; // 5
    q.pop();
    q.push(6);
    cout << q.top() << "\n"; // 6
    q.pop();
}

void problem(){
    vector<int> A = {5, 2, 8, 9, 4};
    vector<int> B = {3, 2, 9, 5};

    {
//        ALGORITHM 1
        set<int> v2;
        for_each(B.begin(), B.end(), [&](auto x) { v2.insert(x); });

        int n = 0;
        for (auto x: A) {
            if (v2.find(x) != v2.end()) {
                ++n;
            }
        }
        cout << n << endl;
    }

    {
//        ALGORITHM 2
        unordered_set<int> v2;
        for_each(B.begin(), B.end(), [&](auto x) { v2.insert(x); });

        int n = 0;
        for (auto x: A) {
            if (v2.find(x) != v2.end()) {
                ++n;
            }
        }
        cout << n << endl;
    }

    {
//        ALGORITHM 3
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());

        int n = 0;
        int a = 0;
        int b = 0;

        while(a < A.size() && b < B.size()){
            if(A[a] == B[b]){
                ++a;++b;++n;
            }else if(A[a] < B[b]){
                ++a;
            }else{
                ++b;
            }
        }
        cout << n << endl;
    }
}

int main() {
//    vectors();
//    sets();
//    testSetSort();
//    unorderedSets();
//    multisets();
//    maps();
//    bitsets();
//    deques();
//    stacks();
//    queues();
//    priorityQueues();
    problem();
    return 0;
}
