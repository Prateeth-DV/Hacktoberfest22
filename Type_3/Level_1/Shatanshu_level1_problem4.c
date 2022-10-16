#include <stdio.h>
#include <stdlib.h>
int Sqroot(int a){
        if(a <= 1){
            return a;
        }
        int S = 2, E = a, M;
        while(S <= E){
            M = S + (E - S)/2;
            if(M == a/M){
                return M;
            }
            if(M < a/M){
                S = M + 1;
            } 
            else{
                E = M - 1;
            }
        }
        if(S > a/S){
            return S - 1;
        }
        return S;
    }
int main(){
    int a;
    scanf("%d", &a);
    printf("%d", Sqroot(a));
    return 0;
}