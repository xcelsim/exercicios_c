#include<stdio.h>
#include<math.h>
int main(){
    float s, m, n, r;

    m = 1;
    n = 50;
    s = pow(2,m)/n;
    r = s;

    while(m <= 50 && n >= 1){
        printf("S = %f\n", r);
        m = m + 1;
        n = n - 1;
        s = pow(2,m)/n;
        r = r + s;
    }
}