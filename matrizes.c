#include <stdio.h>

void f(float mat[][2]);
int main(){
    float m[2][2] = { {2,3},{4,5} };
        int i, x ;

        for(x = 0; x < 2; x++){
            for(i = 0; i < 2; i++){
                  printf("%.2f\t", m[x][i]);
                }
                printf("\n");
            }
            f(m);
}

//void f(float (*mat)[2]) a mesma da declaração abaixo
void f(float mat[][2])
{
    int j, i;
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%.2f\t", mat[i][j]);
        }
    }
}

