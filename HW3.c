#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

#define ROWS 9
#define COLS 9
#define RESERVED_SEATS 10

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
	system("pause");//按鍵操控進入步驟2
	/*Tip 2*/
	system("cls");//將已經輸出於螢幕的文字清除
	printf("-----------------------------------\n");
	printf("|      a. Available seats         |\n");
	printf("|      b. Arrange for you         |\n");
	printf("|      c. Choose by yourself      |\n");
	printf("|      d. Exist                   |\n");
	printf("-----------------------------------\n");//將主選單顯示於螢幕
	system("cls");//將已經輸出於螢幕的文字清除
	/*Tip 3*/
	char seats[ROWS][COLS];
    char push;

    initial(seats);
    reserve(seats);

    while(1)
	{
		printf("-----------------------------------\n");
		printf("|      a. Available seats         |\n");
		printf("|      b. Arrange for you         |\n");
		printf("|      c. Choose by yourself      |\n");
		printf("|      d. Exist                   |\n");
		printf("-----------------------------------\n");//將主選單顯示於螢幕
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
        else if(push=='b')
		{
            system("cls");//將已經輸出於螢幕的文字清除
            int numSeats;
            printf("請輸入需要的座位數（1~4）：");
            scanf("%d", &numSeats);
            if (numSeats<1||numSeats>4) //檢查人數是否介於1~4 
			{
                printf("無效的座位數！請按任意鍵返回主選單。\n");
                getch();
                system("cls");//將已經輸出於螢幕的文字清除
                continue;
            }
            int suggested[4][2];
            if (findSeats(seats,numSeats,suggested))
			{
                markSeats(seats,suggested,numSeats, '@');//將尋找到的空位做記號 
                displaySeats(seats);
                printf("\n是否滿意這些座位安排？（y/n）：");
                push=getch();
                if (push=='y'||push=='Y')//詢問是否滿意 
				{
                    markSeats(seats,suggested,numSeats,'*');
                    system("cls");//將已經輸出於螢幕的文字清除
                } 
				else
				{
                    markSeats(seats,suggested,numSeats,'-');
                    system("cls");//將已經輸出於螢幕的文字清除
                }
    		}
			else//空位不足 
			{
                printf("找不到合適的座位！請按任意鍵返回主選單。\n");
                getch();
                system("cls");//將已經輸出於螢幕的文字清除
            }
    	}
	}
    return 0;
}

void initial(char seats[ROWS][COLS]) //設定初始座位表 
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

void reserve(char seats[ROWS][COLS]) //隨機設置預定座位 
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

void displaySeats(char seats[ROWS][COLS]) //顯示座位表 
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

int findSeats(char seats[ROWS][COLS],int numSeats,int suggested[4][2])//尋找空位 
{
	int i,j;
    for(i=0;i<ROWS;i++) 
	{
        for(j=0;j<=COLS-numSeats;j++)//避免超出陣列 
		{
            int k;
            for(k=0;k<numSeats;k++) //檢查從當前列開始的連續座位是否都是空的
			{  
                if(seats[i][j+k]!='-') 
					break;  // 如果發現不是空位，退出循環
            }
            if(k==numSeats) // 如果找到足夠的連續空座位
			{  
                for(k=0;k<numSeats;k++) // 記錄這些座位的位置
				{  
                    suggested[k][0]=i;  
                    suggested[k][1]=j+k;  // 陣列儲存位置 
                }
                return 1;  // 返回1，表示找到合適的座位
            }
        }
    }
    if(numSeats==4) 
	{
        for(i=0;i<ROWS-1;i++) 
		{
            for(j=0;j<COLS-1;j++) 
			{
                if(seats[i][j]=='-'&&seats[i][j+1]=='-'&&seats[i+1][j]=='-'&&seats[i+1][j+1]=='-') 
				{
                    suggested[0][0]=i;
                    suggested[0][1]=j;
                    suggested[1][0]=i;
                    suggested[1][1]=j+1;
                    suggested[2][0]=i+1;
                    suggested[2][1]=j;
                    suggested[3][0]=i+1;
                    suggested[3][1]=j+1;
                    return 1;
                }
            }
        }
    }
    return 0;  // 沒有找到合適的座位，返回0
}

void markSeats(char seats[ROWS][COLS],int suggested[4][2],int numSeats,char mark) 
{  //標記空位 
	int i;
    for(i=0;i<numSeats;i++) 
	{
        seats[suggested[i][0]][suggested[i][1]]=mark;
    }
}


