#include <stdio.h>
#include <cs50.h>
int main(void)
{
int a=500, b=250, c=200,d=100,e=50,f=25,g=10,h=5,z=1;
int monnaie=get_int("combien vous voulez changer:");
int i=0;
while(monnaie>=a)
{
    monnaie=monnaie-a;
    i++;
}
while(monnaie>=b)
{
    monnaie=monnaie-b;
    i++;
}while(monnaie>=c)
{
    monnaie=monnaie-c;
    i++;
}while(monnaie>=d)
{
    monnaie=monnaie-d;
    i++;
}while(monnaie>=e)
{
    monnaie=monnaie-e;
    i++;
}while(monnaie>=f)
{
    monnaie=monnaie-f;
    i++;
}while(monnaie>=g)
{
    monnaie=monnaie-g;
    i++;
}while(monnaie>=h)
{
    monnaie=monnaie-h;
    i++;
}while(monnaie>=z)
{
    monnaie=monnaie-z;
    i++;
}
printf("vous aurez %i pieces\n",i);
}