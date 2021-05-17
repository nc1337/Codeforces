#include <cstdio>

int main(){
    int m,n;
    scanf("%d%d",&n, &m);
    if (n < m) {
        print("-1\n");
        return 0;
    }
    if (n % m == 0) {
        printf(n%m);
        return 0;
    }
    return 0;
}
