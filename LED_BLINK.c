#include<AT89S52.h>;//header file
void wait(int);//function declaration
void main()
{
while(1)//superloop
{
P2_0=0;//on
wait(10);//delay
P2_0=1;//off
wait(10);//delay
}
}
void wait(int a)//function declatration
{
int i;
for(i=0;i<a;i++);//
}

