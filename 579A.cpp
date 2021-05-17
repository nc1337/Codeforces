#include <cstdio>

using namespace std;
// Check numbers of 1 in bits and that's the answer
int main() {
    int x, ans=0;
    scanf("%d", &x);
    while(x) {
        if(x&1) ans++;
        x>>=1;
    }
    printf("%d\n", ans);
    return 0;
}
