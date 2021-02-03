#include <iostream>
using namespace std;
int a[1000000000];
int b[1000000000];
int c[2000000000];
int main()
{
    
    int n, m; scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < m; i++) {
        scanf("%d",&b[i]);
    }
    
    int a_num = 0, b_num = 0;
    int k = 0;
    while (a_num < n && b_num < m) {
        if (a[a_num] <= b[b_num]) {
            c[k++] = a[a_num++];
        }
        else c[k++] = b[b_num++];
    }
    while (a_num < n) c[k++] = a[a_num++];
    while (b_num < m) c[k++] = b[b_num++];
    for (int i = 0; i < k; i++) {
        printf("%d ", c[i]);
    }
    return 0;
}
