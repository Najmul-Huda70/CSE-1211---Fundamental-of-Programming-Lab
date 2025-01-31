//Najmul Huda
#include <stdio.h>
#include <stdbool.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int freq[10] = {0}; 
        for (int i = 0; i < n; i++) {
            int num;
            scanf("%d", &num);
            freq[num % 10]++;
        }

        bool flag = false;
        for (int a = 0; a < 10; a++) {
            for (int b = a; b < 10; b++) {
                for (int c = b; c < 10; c++) {
                    if ((a + b + c) % 10 == 3) {
                         int cntA = freq[a];
                        int cntB = freq[b];
                        int cntC = freq[c];

                        if (a == b) cntB--;
                        if (b == c) cntC--;
                        if (a == c) cntC--;

                         if (cntA > 0 && cntB > 0 && cntC > 0) {
                            flag = true;
                            break;
                        }
                    }
                }
                if (flag) break;
            }
            if (flag) break;
        }

        if (flag)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
