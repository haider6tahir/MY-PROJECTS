#include<stdio.h>
main()

{
//DECLARE INTEGERS WHICH CONTAINS OPTIONS OF QUESTIONS AND POINTS OF EACH ANSWER GIVEN BY USER.
int i; 
int ans1,ans2,ans3,ans4,ans5;
int point1, point2, point3, point4, point5;	
int totalnum=0;

//DISPLAY WELCOME MESSAGE TO USER:
printf("WELCOME TO QUIZ GAME:\n");


//DISPLAY MESSAGE TO PLAY OR EXIT THE GAME:
printf(">Press 7 to start the game\n");
printf(">Press 0 to quit the game\n");

//ASK USER TO SELECT THE OPTION EITHER HE\SHE PLAYS THE GAME OR NOT:
scanf("%d",&i); 


//IF USER PRESS 7: USE CONDITIONS IF ELSE AND ELSE IF THE GAME STARTED MESSAGE DISPLAY AND IF PRESS 0 GAME ENDED MESSAGE DISPLAY IF PRESS OTHER THAN 0 AND 7
//INVALID MESSAGE DISPLAY
if(i==7)
{
	printf("The game has started:\n");
}
else if(i==0)
{
	printf("The game has ended:\n");
}
else
{
	printf("Invalid\n");
}

if (i==7)
{
//	QUESTION 1 AND THEIR OPTION DISPLAY:
	printf("1) Which one of the following is used to take input from user in C?\n");
	printf("1)  printf\n");
	printf("2)  scanf\n");
	printf("3)  putch\n");
	printf("4)  putchar\n");

//DISPLAY ENTER YOUR  ANSWER MESSAGE AND ASK USER TO SELECT YOUR CHOICE
	printf("Enter your answer: \n");
	scanf("%d", &ans1);
	
//	IF CHOICE CORRECT ,CORRECT ANSWER DISPLAY AND USER GETS 5 POINTS
	if(ans1==2)
	{
		printf("Correct answer\n");
		point1 = 5;
		printf("you have scored %d point\n" , point1);
		totalnum +=point1;
	}
//	IF USER CHOICE WRONG USER GETS 0 POINTS AND DISPLAY:
	else
	{
		printf("Wrong answer\n");
		printf("You have scored 0 points\n");
		
	}
	
//	QUESTION 2 AND THEIR OPTION DISPLAY:
	printf("2) Which was the first browser invented in 1990 ?\n");
	printf("1)  Internet Explorer\n");
	printf("2)  UC Browser\n");
	printf("3)  Mozilla\n");
	printf("4)  Nexus\n");
	
	//DISPLAY ENTER YOUR  ANSWER MESSAGE AND ASK USER TO SELECT YOUR CHOICE:
	printf("Enter your answer :");
	scanf("%d", &ans2);
	
//	IF CHOICE CORRECT ,CORRECT ANSWER DISPLAY AND USER GETS 5 POINTS
	if(ans2==4)
	{
		printf("Correct answer\n");
		point2 = 5;
		printf("you have scored %d point\n" , point2);
		totalnum +=point2;
	}
	
//	IF USER CHOICE WRONG USER GETS 0 POINTS AND DISPLAY:
	else
	{
		printf("Wrong answer\n");
		printf("You have scored 0 point\n");
		
	}
	
//	QUESTION 3 AND THEIR OPTION DISPLAY:
	printf("3) Which one of the following is used to store data ?\n");
	printf("1)  Variables\n");
	printf("2)  Integers\n");
	printf("3)  Float\n");
	printf("4)  None of these\n");
	
	//DISPLAY ENTER YOUR  ANSWER MESSAGE AND ASK USER TO SELECT YOUR CHOICE
	printf("Enter your answer :");
	scanf("%d", &ans3);
	
	
//	IF CHOICE CORRECT ,CORRECT ANSWER DISPLAY AND USER GETS 5 POINTS
	if(ans3==1)
	{
		printf("Correct answer\n");
		point3 = 5;
		printf("you have scored %d point\n" , point3);
		totalnum +=point3;
	}
	
//	IF USER CHOICE WRONG USER GETS 0 POINTS AND DISPLAY:
	else
	{
		printf("Wrong answer\n");
		printf("You have scored 0 points\n");
		
	}
	
//	QUESTION 4 AND THEIR OPTION DISPLAY:
	printf("4) Which keyword is used to include the header file ?\n");
	printf("1)  #Exclude\n");
	printf("2)  #Include\n");
	printf("3)  Both a and b \n");
	printf("4)  None of these\n");
	
//DISPLAY ENTER YOUR  ANSWER MESSAGE AND ASK USER TO SELECT YOUR CHOICE	
	printf("Enter your answer :");
	scanf("%d", &ans4);
	
	
//IF CHOICE CORRECT ,CORRECT ANSWER DISPLAY AND USER GETS 5 POINTS
	if(ans4==2)
	{
		printf("Correct answer\n");
		point4 = 5;
		printf("you have scored %d point\n" , point4);
		totalnum +=point4;
	}
	else
	
//	IF USER CHOICE WRONG USER GETS 0 POINTS AND DISPLAY:
	{
		printf("Wrong answer\n");
		printf("You have scored 0 point\n");
		
	}
	
	
//	QUESTION 5 AND THEIR OPTION DISPLAY:
	printf("5) 	Which of the following is a logical operator ?\n");
	printf("1)  &&\n");
	printf("2)  ||\n");
	printf("3)  Both a and b \n");
	printf("4)  <,>\n");
	
	//DISPLAY ENTER YOUR  ANSWER MESSAGE AND ASK USER TO SELECT YOUR CHOICE
	printf("Enter your answer :");
	scanf("%d", &ans5);
	
	
	
//	IF CHOICE CORRECT ,CORRECT ANSWER DISPLAY AND USER GETS 5 POINTS
	if(ans5==3)
	{
		printf("Correct answer\n");
		point5 = 5;
		printf("you have scored %d point\n" , point5);
		totalnum +=point5;
	}
	else
	
//	IF USER CHOICE WRONG USER GETS 0 POINTS AND DISPLAY
	{
		printf("Wrong answer\n");
		printf("You have scored 0 points\n");
		
    }
    printf("\nYou Get Total of %d marks:", totalnum);
    printf("\nTHE QUIZ ATTEMPTED.......THANK YOU ");
    
    
	
}
	
	
	
	
	
	
	
	
	
	
	
}