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
	
		printf("|x| = %d\n", input2);
		
	else if(input2 < 0)
	
		printf("|x| = %d\n", -input2);
	
	
	
	
	
	
	return 0;
}
