#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

#define ROWS 9
#define COLS 9
#define RESERVED_SEATS 10

int main()
{
	int s,i,j;//�ŧi����ܼ�
	char a=92,b=47,w=95,z=124,r=45,e='e',c;//�ŧi�r���ܼ�
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
	printf(" -------------------------------------------------------------- \n");//�H�W���ӤH����e��
	system("pause");//����ޱ��i�J�K�X��J 
	system("cls");//�N�w�g��X��ù�����r�M��

	printf("�п�J4�ӼƦr���K�X:\n");
	scanf("%d",&s);//��J�r���ó]��s
	for(i=1;i<=2;i++)//�]�m�K�X�A�̦h��J�T��
	{
		if(s==2024)
		{
			printf("Welcome!\n");//���]��J���=2024�A�h��XWelcome!
			break;//���X���j��A�i�JTip 2 
		}
		else
		{	
			printf("�Э��s��J:\n");
			scanf("%d",&s);//��J�r���ó]��s
			if(i==2)//�p�G��J��ĤT���A�h�{������
			{
				printf("False\a");//��J��L��ơA�h��XFalse�õo�Xĵ�i��
				return 0;//�{������
			}
		}
	}
	system("pause");//����ޱ��i�JTip 2
	/*Tip 2*/
	system("cls");//�N�w�g��X��ù�����r�M��
	printf("--------------[Grade System]---------------\n");
	printf("|       a. Enter student grades           |\n");
	printf("|       b. Display student grades         |\n");
	printf("|       c. Search for student grades      |\n");
	printf("|       d. Grade ranking                  |\n");
	printf("|       e. Exist system                   |\n");
	printf("-------------------------------------------\n");//�N�D�����ܩ�ù�
	/*Tip 3*/
	char push;
	
	system("cls");//�N�w�g��X��ù�����r�M��
	printf("�п�J�@�Ӧr��(a~e):");
	push=getch();// �ϥ� getch ��ƨ������Ӧr����J
}
