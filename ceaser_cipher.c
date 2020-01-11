#include<stdio.h>

void main()
{
  char a[100],b[100],c,e[100];
  
  printf("\nENTER THE MESSAGE::");
  //scanf("%c",&c);
  scanf("%[^\n]s",a);
  
  int i,d1=0,d2=0;
  for(i=0;i<100;i++)
    {
       b[i]='\0';
       e[i]='\0';
    }
  
  i=0;
  while(a[i]!='\0')
  {
    if(a[i]==' ')
      {
        d1--;
        goto label1;
        
       }
      
    if(a[i]=='x')
      {
        
        b[d1]='a';
        goto label1;
      }
     else if(a[i]=='y')
      {
        b[d1]='b';
        goto label1;
      }
      else if(a[i]=='z')
      {
        b[d1]='c';
        goto label1;
      }
       else if(a[i]=='X')
      {
        b[d1]='A';
        goto label1;
      }
       else if(a[i]=='Y')
      {
        b[d1]='B';
        goto label1;
      }
       else if(a[i]=='Z')
      {
        b[d1]='C';
        goto label1;
      }
    
    d2=a[i];
    d2=d2+3;
    b[d1]=d2;
    
    label1:
      d2=0;
      d1++;
      i++;
    }
    
    printf("\nCIFER TEXT IS:: %s\n",b);
   
   i=0,d1=0,d2=0;
   
     while(b[i]!='\0')
  {
   
      
    if(b[i]=='a')
      {
        
        e[d1]='x';
        goto label11;
      }
     else if(b[i]=='b')
      {
        e[d1]='y';
        goto label11;
      }
      else if(b[i]=='c')
      {
        e[d1]='z';
        goto label11;
      }
       else if(b[i]=='A')
      {
        e[d1]='X';
        goto label11;
      }
       else if(b[i]=='B')
      {
        e[d1]='Y';
        goto label11;
      }
       else if(b[i]=='C')
      {
        e[d1]='Z';
        goto label11;
      }
    
    d2=b[i];
    d2=d2-3;
    e[d1]=d2;
    
    label11:
      d2=0;
      d1++;
      i++;
    }
    
    printf("\nDECRYPTED TEXT IS:: %s\n",e);
    
    
}
