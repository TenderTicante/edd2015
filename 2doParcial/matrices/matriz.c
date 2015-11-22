#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[3][3],b[3][3],c[3][3],i,j;
    
    printf("Primer matriz [3x3] ");
    
    for(i=1;i<=3;i++)//Para filas
        
        for(j=1;j<=3;j++){//Para columnas
            
            printf("\n Introducir valor de [%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    
    printf("Segunda matriz [3x3] ");
    
    for(i=1;i<=3;i++)//Para filas
        
        for(j=1;j<=3;j++){//Para columnas
            
            printf("\n Introducir valor de [%d][%d] : ",i,j);
            scanf("%d",&b[i][j]);
        }
    
    
    for(i=1;i<=3;i++)//
        for(j=1;j<=3;j++)//columnas
            c[i][j]=(a[i][1]*b[1][j])+(a[i][2]*b[2][j])+(a[i][3]*b[3][j]);
    
    for(i=1;i<=3;i++){//filas
        for(j=1;j<=3;j++)//columnas
            printf(" %d ",c[i][j]);
    printf("\n");
    }
    
    system("pause");
    
    return (0);
}
