#include<stdio.h>
int main() {
//	int a =5;
//	if(a<10) {
//		printf("hello\n");
//		printf("hii");
//	}
//	else{
//	
//	printf("hiii\n");
//	printf("hiii");
//}
//	int a =5;
//	if(a<10) {
//		printf("hello\n");
//		printf("hii");
//	}
//	else
//	
//	printf("hiii\n");
//	printf("hiii");

int a,b,c;
printf("enter numbers");
scanf("%d%d%d",&a,&b,&c);
if(a>=b && a>=c)
{
	printf("maximum number is %d",a);
}
else {

if(b>=a && b>=c)

	printf("maximum number is %d",b);

else
	printf("maximum number is %d",c);
}

	return 0;

}
