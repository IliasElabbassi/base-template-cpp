#include <bits/stdc++.h>

using namespace std;

#define B "Begin\n"
#define E "End\n"
#define ll long long
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(int i = a; i <= b; i++)
#define SQ(a) (a)*(a)

typedef vector<int> vi;
typedef pair<int, int> pi;

struct clock {clock_t c1, c2; };
void   start(struct clock *a) { a->c1 = clock(); }
void   stop (struct clock *a) { a->c2 = clock(); }
double print(struct clock *a) { return (double)(a->c2 - a->c1) / CLOCKS_PER_SEC; }

int main() {
    struct clock c;
    start(&c);

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cout << B << endl;
    
    // ----------------
    // your code here
    // ----------------
  
    cout << E << endl;

    stop(&c);
    printf("%f \n",print(&c));

    return 0;
}
