#include <stdio.h>
#include<string.h>
int check(int a,int b,int c)
    {
        if(a==(b+c)|| b==(a+c)||c==(a+b))
            return 0;
        else
            return 1;
    }

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        char a[100000];
        int al[26]={0};
        int count_a[26]={0};
        int counter=0,i,length,flag=0;
        scanf("%s",a);
        length=strlen(a);

        for(i=0;i<length;i++)
        {
            al[a[i]-'a']++;
        }
        for(i=0;i<26;i++)
        {
            if(al[i]>0)
            count_a[counter++]=al[i];
        }
        if(counter>2)
        {
            for(i=2;i<counter;i++)
             {
                flag=check(count_a[i],count_a[i-1],count_a[i-2]);
                if(flag==1)
                    break;
            }
        }
        if(flag==0)
            printf("Dynamic\n");
        else

            printf("Not\n");
    }

   
	// your code goes here
	return 0;
}