// 20) Write a program to read two strings through the keyboard like the following example and replace any word of the second string with the first string.
//
#include<stdio.h>
#include<string.h>

void main()
{
	char string[100],sub[100],new[20];

	int j,i,k,m,x,y,z;

	char *p;
	int  new_len,sub_len,string_len;

	printf("input string :");
	scanf("%[^\n]",string);

	printf("input sub :");
	scanf("%s",sub);
	sub_len = strlen(sub);

	printf("input new :");
	scanf("%s",new);
	new_len = strlen(new);
	string_len = strlen(string)-1;

	while(p = strstr(string,sub))
	{

		if(new_len > sub_len)
		{
			k = p-string;
			i = string_len+new_len-sub_len; 
			m = new_len-sub_len;
			for(;i>=k;i--)
			p[i]=p[i-m];

			for(x=0;x<strlen(new);x++)
			{
				p[x]=new[x];
			}
		}

		else if(new_len < sub_len)
		{

			k = p-string;
			m = sub_len-new_len;
			i = string_len+1; 


			for(x=k;x<i;x++)
				string[x]=string[x+m];

			for(x=0;x<strlen(new);x++)
				p[x]=new[x];


		}
		else 
        {
		
		for(x=0;x<strlen(new);x++)
			p[x]=new[x];
		
		}
        
		printf("%s \n",string);
	}


}
