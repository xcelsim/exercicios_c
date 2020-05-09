#include<stdio.h>
int main(){
    int a, b, c, d, e, f, ef, abcd;

    a = 1001;

    while(a > 1000 && a < 9999){

        a = a+1;
        b = a%1000;
        c = b%100;
        e = a/100;
        ef = e + c;
        abcd = ef * ef;

        if(a == abcd){
            printf("%d\n", a);
        }
    }   
}