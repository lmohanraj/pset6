 #include<stdio.h>
 #include<string.h>
 int main()
 {
 	int i,n;
 	char a,s[20];
 	printf("input\n");
 	scanf("%s",s);
 	scanf("%s",&a);
 	n=strlen(s);
 	for(i=0;i<n;i++)
 	{
             //	if(c==s[i])
 		{
 			printf("output : %d %c",i+1,a);
 			break;
 		}
 	}
 	return 0;
 }
