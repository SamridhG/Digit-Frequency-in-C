#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{

  int i,number_of_elements,s=0;
  int a[10]={0};
  printf("Enter the number of Digits:");
  scanf("%d",&number_of_elements);
  int *p=malloc(number_of_elements*sizeof(int));
  printf("Enter the Digits 0 to 9:\n");
  for(i=0;i<number_of_elements;i++)
  {
    scanf("%d",(p+i));
  }
  for(i=0;i<number_of_elements;i++)
  {
     s=0;
     if(*(p+i)==0)
     {
        s=1;
        a[0]=a[0]+s;
     }
     else if(*(p+i)==1)
     {
        s=1;
        a[1]=a[1]+s;
     }
     else if(*(p+i)==2)
     {
        s=1;
        a[2]=a[2]+s;
     }
     else if(*(p+i)==3)
     {
        s=1;
        a[3]=a[3]+s;
     }
     else if(*(p+i)==4)
     {
        s=1;
        a[4]=a[4]+s;
     }
     else if(*(p+i)==5)
     {
        s=1;
        a[5]=a[5]+s;
     }
     else if(*(p+i)==6)
     {
        s=1;
        a[6]=a[6]+s;
     }
     else if(*(p+i)==7)
     {
        s=1;
        a[7]=a[7]+s;
     }
     else if(*(p+i)==8)
     {
        s=1;
        a[8]=a[8]+s;
     }
     else if(*(p+i)==9)
     {
        s=1;
        a[9]=a[9]+s;
     }
  }
  printf("\nDigits frequency are\n");
  for(i=0;i<10;i++)
  {
    printf("Number of %d:::%d times\n--------------------------------------------------------------------\n",i,a[i]);
  }
}
