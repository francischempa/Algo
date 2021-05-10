#include <bits/stdc++.h>

using namespace std;

unsigned long long fib(const unsigned long long& i)
{
    if(i<=2) return (i<2)? 0 : 1;
    return fib(i-1) + fib(i-2);
}

unsigned long long fibo(const unsigned long long& x)
{
    unsigned long long i = x-1;
    unsigned long long n = pow(1 + sqrt(5), i) - pow(1 - sqrt(5), i);
    unsigned long long d = pow(2,i) * sqrt(5);
    return n/d;
}

int main(){
    cout << fibo(40) << "\n";
    cout << fib(40) << "\n";


}

int main1() {
    freopen("../data.in","r",stdin);
//    freopen("../data.out","w",stdout);

    {
        string a, b;
        cin >> a >> b;
        cout << a << " " << b << "\n";
    }

    {
        int a,b;
        scanf("%d %d\n", &a, &b);
        cout << a << " " << b << "\n";
    }

    {
        string s;
        getline(cin, s);
        cout << s << "\n";
    }

    {
        int a;
        while (cin >> a){
            cout << a << ", ";
        }
        cout << '\n';
    }

#define F "first"
    cout << F << "\n";

#define REP(n) for(int i=0; i<n; i++)
    REP(1)
    {
        cout << "Francis\n";
    }

#define RAN(x, y) for(int _=x; _<=y; _++)
    RAN(1,5){
        cout << _ << "\n";
    }

    {
        int sum = 0;
        for (int i = 1; i <= 100; ++i) {
            sum += i;
        }
        cout << sum << "\n";
        cout << (100 * (100 + 1)) / 2 << "\n";
    }

    {
        double sum = 0;
        for (int i = 1; i <= 100; ++i) {
            sum += pow(i,2);
        }
        cout << sum << "\n";
        cout << (100 * (100 + 1)* ((2*100) + 1)) / 6 << "\n";
    }

    {
        int sum = 0;
        for (int i = 3; i <= 15; i+=3) {
            sum += i;
        }
        cout << sum << "\n";
        cout << (5*(3+15))/2 << "\n";

    }

    return 0;
}
