 #include<stdio.h>
 int main()
 {
 	int n,t,i,j,a[10];
 	printf("input\n");
 	scanf("%d",&n);
 	for(i=0;i<n;i++)
 	scanf("%d",&a[i]);
 	for(i=0;i<n;i++)
 	{
 		for(j=0;j<n;j++)
 		{
 			if(a[i]<a[j])
 			{
 				t=a[i];
 				a[i]=a[j];
 				a[j]=t;
 			}
 		}
 	}
 	printf("output : %d",a[1]);
 	return 0;
 }
