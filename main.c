#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
	
	
	//  #1
	
	int input; 
	
		printf("input a number : ");
		scanf("%d", &input);
	
	
	if(input > 0)
	
		printf("positive.\n");
	
	else
	
		printf("non-positive.\n");
	


  	//  #2
	
	int input2;
	
		printf("input a number x : ");
		scanf("%d" , &input2);
		
		
		
	if(input2 > 0)
	{
		printf("|x| = %d\n", input2);
		printf("|x| + 5 = %d\n", input2+5);
	}
	else
	{
		printf("|x| = %d\n", -input2);
		printf("|x| + 5 = %d\n", +input2+5);
	}
	
	
	
	//  #3
	
	int input3; 
	
		printf("input a number : ");
		scanf("%d", &input3);
	
	
	if(input3 > 0)
	
	{	
		printf("positive.\n");
	}
	else if(input3 <= 0)
	{
		printf("non-positive.\n");
	}
	
		
	
	
	
	return 0;
}
