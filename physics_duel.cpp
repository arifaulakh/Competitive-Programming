#include <bits/stdc++.h>

#define PI 3.14159265
using namespace std;

int main() {
 int n; scanf("%d", &n);
 double h = 0;
 for (int i=1; i<=n; i++){
   double s, x, t; scanf("%lf%lf%lf", &s, &x, &t);
   h += t*(s*sin(x*(PI)/180));
 }
 double v = sqrt(2*9.8*h);
 v = ceil(round(v));
 printf("%.0f\n", v);
 return 0;
}