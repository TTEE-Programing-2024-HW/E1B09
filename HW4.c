#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <conio.h>

#define ROWS 9
#define COLS 9
#define RESERVED_SEATS 10

//定義結構體，並命名為Student 
typedef struct {
	char name[20];
	int id;
	int math;
	int physics;
	int english;
} Student;

//函數聲明 
void displayMenu();
void enterGrades(Student students[],int *numStudents);

int main()
{
	int s,i,j;//宣告整數變數
	char a=92,b=47,w=95,z=124,r=45,e='e',c;//宣告字元變數
	
	/*Tip 1*/
	printf(" -------------------------------------------------------------- \n");
	printf("%c                                                %c             %c\n",z,w,z);
	printf("%c  %c                  %c%c                 %c_%c    %c_%c            %c\n",z,a,b,a,b,b,z,z,z);
	printf("%c   %c                %c_%c%c               %c_%c     %c_%c            %c\n",z,a,b,b,a,b,b,z,z,z);
	printf("%c    %c              %c_%c  %c             %c_%c      %c_%c            %c\n",z,a,b,b,a,b,b,z,z,z);
	printf("%c     %c            %c_%c    %c           %c_%c       %c_%c            %c\n",z,a,b,b,a,b,b,z,z,z);
	printf("%c      %c          %c_%c      %c         %c_%c        %c_%c            %c\n",z,a,b,b,a,b,b,z,z,z);
	printf("%c       %c        %c_%c        %c       %c_%c %c%c%c%c%c%c%c %c_%c   %c%c%c%c%c    %c\n",z,a,b,b,a,b,b,w,w,w,w,w,w,w,z,z,w,w,w,w,w,z);
	printf("%c        %c      %c_%c          %c     %c_%c %c        %c_%c  %c     %c   %c\n",z,a,b,b,a,b,b,z,z,z,z,z,z);
	printf("%c         %c    %c_%c            %c   %c_%c  %c        %c_%c  %c     %c   %c\n",z,a,b,b,a,b,b,z,z,z,z,z);
	printf("%c          %c  %c_%c              %c %c_%c   %c        %c_%c  %c     %c   %c\n",z,a,b,b,a,b,b,z,z,z,z,z);
	printf("%c           %c%c_%c                %c_%c  %c %c%c%c%c%c%c%c%c %c%c%c  %c%c%c%c%c%c%c   %c\n",z,a,b,b,a,b,e,z,w,w,w,w,w,w,w,z,w,z,z,w,w,w,w,w,z,z);
	printf("%c  %c%c%c%c%c                                                       %c\n",z,69,49,66,48,57,z);
	printf(" -------------------------------------------------------------- \n");//以上為個人風格畫面
	system("pause");//按鍵操控進入密碼輸入 
	system("cls");//將已經輸出於螢幕的文字清除

	printf("請輸入4個數字的密碼:\n");
	scanf("%d",&s);//輸入字元並設給s
	for(i=1;i<=2;i++)//設置密碼，最多輸入三次
	{
		if(s==2024)
		{
			printf("Welcome!\n");//假設輸入整數=2024，則輸出Welcome!
			break;//跳出此迴圈，進入Tip 2 
		}
		else
		{	
			printf("請重新輸入:\n");
			scanf("%d",&s);//輸入字元並設給s
			if(i==2)//如果輸入到第三次，則程式結束
			{
				printf("False\a");//輸入其他整數，則輸出False並發出警告音
				return 0;//程式結束
			}
		}
	}
	system("pause");//按鍵操控進入Tip 2
	
	Student students[10];
    int numStudents = 0;
    char push;
	do{
		/*Tip 2*/
		system("cls");//將已經輸出於螢幕的文字清除
		displayMenu();//將主選單顯示於螢幕
		/*Tip 3*/
		printf("請輸入一個字元(a~e):");
		push=getch();// 使用 getch 函數來獲取單個字元輸入
		
		switch(push)
		{
			case 'a':
				system("cls");//將已經輸出於螢幕的文字清除
				enterGrades(students,&numStudents);
				break;
			case 'b':
				break;
			case 'c':
				break;
			case 'd':
				break;
			case 'e':
				break;
			default:
				printf("Invalid choice. Please try again.\n");
		}
	}while(push<'a' ||push>'e');
	
	
	return 0;
}

void displayMenu()
{
	printf("--------------[Grade System]---------------\n");
	printf("|       a. Enter student grades           |\n");
	printf("|       b. Display student grades         |\n");
	printf("|       c. Search for student grades      |\n");
	printf("|       d. Grade ranking                  |\n");
	printf("|       e. Exist system                   |\n");
	printf("-------------------------------------------\n");
}

void enterGrades(Student students[],int *numStudents)
{
	int n,i;
	
	printf("請輸入一個正整數(5~10):");
	scanf("%d",&n);
	
	while(n>10 || n<5)
	{
		printf("請輸入5~10的正整數:");
		scanf("%d",&n);
	}
	
	for(i=0;i<n;i++)
	{
		printf("請輸入第%d個學生姓名:",i+1);
		scanf("%s",students[i].name);
		
		printf("學號(6位整數):");
		scanf("%d",&students[i].id);
		
		while(students[i].id>999999 || students[i].id<100000)
		{
			printf("請輸入學號(100000~999999):");
			scanf("%d",&students[i].id);
		}
		
		printf("數學成績(0~100):");
		scanf("%d",&students[i].math);
		
		while(students[i].math>100 || students[i].math<0)
		{
			printf("請輸入0<數學成績<100:");
			scanf("%d",&students[i].math);
		}
		
		printf("物理成績(0~100):");
		scanf("%d",&students[i].physics);
		
		while(students[i].physics>100 || students[i].physics<0)
		{
			printf("請輸入0<物理成績<100:");
			scanf("%d",&students[i].physics);
		}
		
		printf("英文成績(0~100):");
		scanf("%d",&students[i].english);
		
		while(students[i].english>100 || students[i].english<0)
		{
			printf("請輸入0<英文成績<100:");
			scanf("%d",&students[i].english);
		}
	}
	
	*numStudents=n;
}


