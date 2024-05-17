#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

#define ROWS 9
#define COLS 9
#define RESERVED_SEATS 10

int main(){
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
	system("pause");//按鍵操控進入步驟2
	/*Tip 2*/
	system("cls");//將已經輸出於螢幕的文字清除
	printf("-----------------------------------\n");
	printf("|      a. Available seats         |\n");
	printf("|      b. Arrange for you         |\n");
	printf("|      c. Choose by yourself      |\n");
	printf("|      d. Exist                   |\n");
	printf("-----------------------------------\n");//將主選單顯示於螢幕
	/*Tip 3*/
	char seats[ROWS][COLS];
    char push;

    initial(seats);
    reserve(seats);

    while(1)
	{
        printf("請輸入一個字元:");
        push=getch();  // 使用 getch 函數來獲取單個字元輸入
        if(push=='a') 
		{
            system("cls");//將已經輸出於螢幕的文字清除
            displaySeats(seats);//將已預訂座位顯示螢幕 
            printf("\n按任意鍵返回主選單...\n");
            getch();  // 等待任意鍵
            system("cls");//將已經輸出於螢幕的文字清除
        }
        else
        	break;
    }

    return 0;
}

void initial(char seats[ROWS][COLS]) 
{
	int i,j;
    for(i=0;i<ROWS;i++) 
	{
        for (j=0;j<COLS;j++) 
		{
            seats[i][j]='-';  //'-'表示空位
        }
    }
}

void reserve(char seats[ROWS][COLS]) 
{
    srand(time(0));  //初始化隨機數生成器
    int reserved=0;
    int i,j;
    while(reserved<RESERVED_SEATS)//建立10個預訂位 
	{
        int row=rand() % ROWS;
        int col=rand() % COLS;//隨機亂數取餘數 
        if (seats[row][col]=='-')//隨機設置預訂座位 
		{
            seats[row][col]='*';  //'*'表示已預訂
            reserved++;
        }
    }
}

void displaySeats(char seats[ROWS][COLS]) 
{
	int i,j;
    printf("  123456789\n");//顯示排數 
    for(i=0;i<ROWS;i++) 
	{
        printf("%d ",i+1);//顯示列數 
        for(j=0;j<COLS;j++) 
		{
            printf("%c",seats[i][j]);
        }
        printf("\n");
    }
}

