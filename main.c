#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
	
	
	//  #01
	
	int input; 
	
		printf("#01\ninput a number : ");
		scanf("%d", &input);
	
	
	if(input > 0)
	
		printf("positive.\n");
	
	else
	
		printf("non-positive.\n");
	


  	//  #02
	
	int input2;
	
		printf("\n\n#02\ninput a number x : ");
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
	
	
	
	//  #03
	
	int input3; 
	
		printf("\n\n#03\ninput a number : ");
		scanf("%d", &input3);
	
	
	if(input3 > 0)
	
	{	
		printf("positive.\n");
	}
	else if(input3 < 0)
	{
		printf("negative.\n");
	}
	else
	{
		printf("zero.\n");
	}
	
	//  #04	
	
	int number;
	
		printf("\n\n#04\ninput a number :");
		scanf("%d", &number);
		
	switch(number){
	}
		
		
		
	// #05	
	
	
	int i; 
		printf("\n\n#05\n");
	for ( i=0; i<10; i++ ) 
		printf("Hello World!\n");
	
	
	
	// #06
	
	char c;
	int num = 0;
	//getchar();
	//number2=0;
		printf("input a string : ");
		while((c = getchar()) != '\n') // get char
		{				
			if(c >= '0' && c <= '9')
				{
				num++ ;
				}
					
		}
		printf("The number of digits is %d", num);
		
		
		
	// #07
	
	
	
	int answer = 123;
	int number3;
	int trial = 0;
	
	while(1)// 1="true" infinite loop
	{
		trial++;
		number3 = 0;
		printf("Guess a number : ");
		scanf("%d", &number3);
		if(number3 == answer){
			printf("Correct! The answer is 123. Congratulations. \nYou're trial : %d", trial);
			
			break;
			
		}
		else if (number3 > answer)
		{
			printf("You're number is Higher\n");
			
		}
		else if (number3 < answer)
		{
			printf("You're number is Lower\n");			
		}
		
	}
	
		
	return 0;
}
