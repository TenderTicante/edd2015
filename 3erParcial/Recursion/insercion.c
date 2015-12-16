#include <stdio.h>

int num[100000],n;
void insercion()
{
 int tem,q,j;
 for (q=1;q<n;q++)
 {
  tem=num[q];
  for (j=q;j>0 && tem<num[j-1];j--)
  {
   num[j]=num[j-1];
   num[j-1]=tem;
  }
 }
} 
void imprimir()
{
	int h;
 for (h=0;h<n;h++)
 {
  printf("\t%d",num[h]);
 }
}
int main()
{
 printf("cant. de numeros: ");
 scanf("%d",&n);
 int y;
 for (y=0;y<n;y++)
 {
  printf("valor %d: ",y+1);
  scanf("%d",&num[y]);
 }
 printf("\norden ingresados:\n\n");
 imprimir();
 insercion();
 printf("\n\nmetodo de insercion:\n\n");
 imprimir();
 return 0;
}

