#include <stdio.h>
int main(){
int number;
        printf("enter an interger number\n");
        scanf("%d", &number);
	if (number % 2==0){
		
		printf("%d, is  even", number);
	}
		else
		{
			printf("%d, is odd number", number);
		}




        return 0;
}
