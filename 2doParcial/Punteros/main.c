#include <stdio.h>
#include "iostream"
using namespace std;
int main() {

int* int_p = NULL;
int elementos;

printf("Ingrese el numero de elementos \n");
scanf("%d",&elementos);

int_p = new int[elementos];

for(int n=0; n < elementos; n++) {
  int_p[n] = n;

  cout<<"\n"<<  int_p[n] ;
}

delete[] int_p;
int_p = NULL;
return 0;
}
