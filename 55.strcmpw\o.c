 #include<stdio.h>
 int main()
 {
 	int count=0,i,n1,n2;
 	char s1[20],s2[20];
 	printf("input\noutput : ");
 	scanf("%s%s",s1,s2);
 	n1=strlen(s1);
 	n2=strlen(s2);
 	if(n2>n1)
 	n1=n2;
 	for(i=0;i<n1;i++)
 	{
 		if(s1[i]!=s2[i])
 		{
 		count++;
 		break;
 		}
 	}
 	if(count==0)
 	printf("yes");
 	else
 	printf("no");
 	return 0;
 }
