#include <stdio.h>
int Calc();
int main(){
	int i=0;
	while(i!=1){
		Calc();
		printf("Do you want use again (0-yes/1-no)\n");
		int ch;
		scanf("%d",&ch);
		if (ch==1){
			i++;
		}
}
}
int Calc(){
	printf("Enter your choice:\n1.Add\n2.Sub\n3.Mul\n4.Div\n5.Modulus\n");
	int choice;
	scanf("%d",&choice);
	//printf("%d you choosed",choice);
	printf("Enter two numbers:");
	int num1,num2;
	scanf("%d %d",&num1,&num2);
	switch (choice){
		case 1:
			int add=num1+num2;
			printf("%d\n",add);
			break;
		case 2:
			int sub=num1-num2;
			printf("%d\n",sub);
			break;
		case 3:
			int mul=num1*num2;
			printf("%d\n",mul);
			break;
		case 4:
			int div=num1/num2;
			printf("%d\n",div);
			break;
		case 5:
			int mod=num1%num2;
			printf("%d\n",mod);
			break;
		default:
			printf("INvalid input");
			break;
	}
	
}
