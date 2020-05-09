#include<stdio.h>
int main(){
    float s, r, m, n;
    m = 1;
    n = 1;
    s = m/n;
    r = s;
    while(m <= 99 && n <= 50){
        printf("S = %.2f\n", r);
        m = m + 2;
        n = n + 1;
        s = m/n;
        r = r + s;
    }
}