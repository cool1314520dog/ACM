#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int n, q;
    int que[10005];

    int count = 1;
    while (scanf("%d%d", &n, &q) && n && q) {
        memset(que, 0, sizeof (que));

        int maxn = 0, tmp;
        for (int i=0; i<n; i++) {
            scanf("%d", &tmp);
            que[tmp]++;
            maxn = maxn < tmp ? tmp : maxn; // 记录下出现的最大数
        }
        tmp = 0;
        for (int i=0; i<=maxn; i++) {
            if (que[i]) {
                tmp += que[i];
                que[i] = tmp-que[i]+1;
                printf("%dhehe\n",que[i]);
            }
        }

        printf("CASE# %d:\n", count++);
        for (int i=0; i<q; i++) {
            scanf("%d", &tmp);
            if (que[tmp]) {
                printf("%d found at %d\n", tmp, que[tmp]);
            }
            else {
                printf("%d not found\n", tmp);
            }
        }

    }

    return 0;
}

