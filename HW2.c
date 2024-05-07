#include<stdio.h>
#include<stdlib.h>

int main(){
	int s,i,j;/*宣告整數變數*/ 
	char a=92,b=47,w=95,z=124,r=45,e='e',c;/*宣告字元變數*/ 
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
	printf(" -------------------------------------------------------------- \n");/*以上為個人風格畫面*/ 
	system("pause");/*按鍵操控進入步驟2*/
	system("cls");/*將已經輸出於螢幕的文字清除，並且回到主程式第二行*/
	/*以上為個人風格畫面*/ 
	printf("請輸入4個數字的密碼:\n");
	scanf("%d",&s);/*輸入字元並設給s*/
	for(i=1;i<=2;i++)/*設置密碼，最多輸入三次*/ 
	{
		if(s==2024)
		{
			printf("Welcome!\n");/*假設輸入整數=2024，則輸出Welcome!*/
			break;/*跳出此迴圈，進入Tip 2*/ 
		}
		else
		{	
			printf("請重新輸入:\n");
			scanf("%d",&s);/*輸入字元並設給s*/
			if(i==2)/*如果輸入到第三次，則程式結束*/ 
			{
				printf("False\a");/*輸入其他整數，則輸出False並發出警告音*/
				return 0;/*程式結束*/
			}
		}
	}
	system("pause");/*按鍵操控進入步驟2*/
	/*Tip 2*/
	again:
	system("cls");/*將已經輸出於螢幕的文字清除*/
	printf("-------------------------------\n");
	printf("|      a. 畫出直角三角形      |\n");
	printf("|      b. 顯示乘法表          |\n");
	printf("|      c. 結束                |\n");
	printf("-------------------------------\n");/*將主選單顯示於螢幕*/
	char f;/*宣告字元變數*/ 
	/*Tip 3*/
	printf("請輸入一個字元:\n");
	f=getch();/*輸入字元並設給c，且為隱藏輸入*/
	if(f=='A'||f=='a')/*如果輸入A或a，則清除螢幕*/ 
	{
		system("cls");/*將已經輸出於螢幕的文字清除*/
		printf("請輸入一個'a'到'n'的字元:\n");
		int g=getch();/*輸入字元並設給r，且為隱藏輸入*/
		while(1)
		{
			if(g<'c'||g>'n')/*若輸入不為a到n之間，則輸出警告訊息並重新輸入*/ 
			{
				printf("X\n");
				printf("請重新輸入一個'a'到'n'的字元:\n");
				g=getch();/*輸入字元並設給r，且為隱藏輸入*/
			}
			else
				break;
		}
		printf("  %c\n",g);
		printf(" %c%c\n",g-1,g);
		printf("%c%c%c\n",g-2,g-1,g);
		system("pause");/*待按鍵回主選單*/ 
		system("cls");/*將已經輸出於螢幕的文字清除*/
		printf("-------------------------------\n");
		printf("|      a. 畫出直角三角形      |\n");
		printf("|      b. 顯示乘法表          |\n");
		printf("|      c. 結束                |\n");
		printf("-------------------------------\n");/*將主選單顯示於螢幕*/
	}
	else if(f=='B'||f=='b')/*假設輸入字元a~z，則輸出99乘法表*/
	{
		system("cls");/*將已經輸出於螢幕的文字清除*/
		printf("請輸入一個1~9的數字:\n");
		int h=getch();/*輸入字元並設給z，且為隱藏輸入*/;
		for(i=1;i>0;i++)/*如果不是a~n，則無限迴圈重新輸入*/ 
		{
			if(h>48&&h<58)
			 	break;
			else	
				printf("請重新輸入一個1~9的數字:\n");
				h=getch();
		}
		h-=48;
		for(i=1;i<=z;i++) 
		{
			for(j=1;j<=z;j++)
			{
				printf("%d*%d=%2d\n",i,j,i*j);
			}
		}
	}
	else if(f=='C'||f=='c')/*詢問是否繼續*/ 
	{
		system("cls");/*將已經輸出於螢幕的文字清除*/
		printf("Continue?(y/n)\n");
		system("cls");/*將已經輸出於螢幕的文字清除*/
		printf("要重新輸入嗎?\n");
		system("cls");/*將已經輸出於螢幕的文字清除*/
		int k=getch();
		if(k=='Y'||k=='y')
		{
			system("cls");/*將已經輸出於螢幕的文字清除*/
			printf("-------------------------------\n");
			printf("|      a. 畫出直角三角形      |\n");
			printf("|      b. 顯示乘法表          |\n");
			printf("|      c. 結束                |\n");
			printf("-------------------------------\n");/*將主選單顯示於螢幕*/
		}
		else if(k=='N'||k=='n')/*結束程式*/ 
			return 0;
		else/*重新輸入*/ 
		{
			printf("False\a\n");
			system("cls");/*將已經輸出於螢幕的文字清除*/
			printf("請重新輸入一個字元:\n");
			k=getch(); 
		}
	}
	else
	{
		goto again;
	}
	
	system("pause");
	return 0;
} 
