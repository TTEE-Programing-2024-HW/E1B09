#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

#define ROWS 9
#define COLS 9
#define RESERVED_SEATS 10

int main(){
	int s,i,j;/*�ŧi����ܼ�*/ 
	char a=92,b=47,w=95,z=124,r=45,e='e',c;/*�ŧi�r���ܼ�*/ 
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
	printf(" -------------------------------------------------------------- \n");/*�H�W���ӤH����e��*/ 
	system("pause");/*����ޱ��i�J�B�J2*/
	system("cls");/*�N�w�g��X��ù�����r�M���A�åB�^��D�{���ĤG��*/
	/*�H�W���ӤH����e��*/ 
	printf("�п�J4�ӼƦr���K�X:\n");
	scanf("%d",&s);/*��J�r���ó]��s*/
	for(i=1;i<=2;i++)/*�]�m�K�X�A�̦h��J�T��*/ 
	{
		if(s==2024)
		{
			printf("Welcome!\n");/*���]��J���=2024�A�h��XWelcome!*/
			break;/*���X���j��A�i�JTip 2*/ 
		}
		else
		{	
			printf("�Э��s��J:\n");
			scanf("%d",&s);/*��J�r���ó]��s*/
			if(i==2)/*�p�G��J��ĤT���A�h�{������*/ 
			{
				printf("False\a");/*��J��L��ơA�h��XFalse�õo�Xĵ�i��*/
				return 0;/*�{������*/
			}
		}
	}

