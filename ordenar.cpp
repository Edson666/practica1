#include<stdio.h>
#include<conio.h>
main()
{
int n,c,aux,m;
int numero[200];

printf("este programa ordenara n numeros");
printf("cuantos numeros seran?");
scanf("%d",&n);
for (c=0;c<n;c++)
{
scanf("%d",&numero[c]);
}


printf("los numeros ordenados son");
m=0;
while(m<n-1)
{
m=0;
for (c=0;c<n-1;c++)
{
if (numero[c]<numero[c+1])
{
aux=numero[c+1];
numero[c+1]=numero[c];
numero[c]=aux;
}
else
{
m++;
}
}
}
for (c=0;c<n;c++)
{
printf(" %d ",numero[c]);
}

}

