#include<stdio.h>
#include<math.h>
int main(){
    float m, n, r, s;

    m = 1;
    n = 1;
    s = m/n;
    r = s;
    while(m <= 10 && n <= 100){
        printf("S = %f\n", r);
        m = m + 1;
        n = pow(m,2);
        s = m/n;
        r = -r + s; 
    }
}