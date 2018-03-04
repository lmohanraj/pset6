 #include<stdio.h>
 int main()
 {
 	int c=0,i=0;
 	char s[20];
 	printf("input\n");
 	scanf("%s",s);
 	while(s[i]!='\0')
 	{
 		c++;
 		i++;
 	}
 	printf("output : %d ",c);
 	return 0;
 }
