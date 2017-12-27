#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;
#define d 256
/*
 * search a substring in a string 
 */
void search(string pat, string txt, int q)
{
    int M = pat.size();
    int N = txt.size();
    int i, j;
    int p = 0;
    int t = 0;
    int h = 1;
    for (i = 0; i < M - 1; i++)
        h = (h * d) % q;
    for (i = 0; i < M; i++)
    {
        p = (d *p + pat[i]) % q;
        t = (d * t + txt[i]) % q;
    }
    for (i = 0; i <= N - M; i++)
    {
        if (p == t)
        {
            for (j = 0; j < M; j++)
            {
                if (txt[i + j] != pat[j])
                    break;
            }
            if (j == M)
            {
                printf("%d\n", i);
                return;
            }
        }
        if (i < N - M)
        {
            t = (d * (t - txt[i] * h) + txt[i + M]) % q;
            if (t < 0)
              t = (t + q);
        }
    }
    printf("%s\n", "-1");
    return;
}
 
/* Main */
int main()
{
    string txt, pat; cin >> txt >> pat;
    int q = 101;
    search(pat, txt, q);
    return 0;
}