#include<stdio.h>
#include<stdlib.h>

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
	system("pause");/*����ޱ��i�J�B�J2*/
	/*Tip 2*/
	again:
	system("cls");/*�N�w�g��X��ù�����r�M��*/
	printf("-------------------------------\n");
	printf("|      a. �e�X�����T����      |\n");
	printf("|      b. ��ܭ��k��          |\n");
	printf("|      c. ����                |\n");
	printf("-------------------------------\n");/*�N�D�����ܩ�ù�*/
	char f;/*�ŧi�r���ܼ�*/ 
	/*Tip 3*/
	printf("�п�J�@�Ӧr��:\n");
	f=getch();/*��J�r���ó]��c�A�B�����ÿ�J*/
	if(f=='A'||f=='a')/*�p�G��JA��a�A�h�M���ù�*/ 
	{
		system("cls");/*�N�w�g��X��ù�����r�M��*/
		printf("�п�J�@��'a'��'n'���r��:\n");
		int g=getch();/*��J�r���ó]��r�A�B�����ÿ�J*/
		while(1)
		{
			if(g<'c'||g>'n')/*�Y��J����a��n�����A�h��Xĵ�i�T���í��s��J*/ 
			{
				printf("X\n");
				printf("�Э��s��J�@��'a'��'n'���r��:\n");
				g=getch();/*��J�r���ó]��r�A�B�����ÿ�J*/
			}
			else
				break;
		}
		printf("  %c\n",g);
		printf(" %c%c\n",g-1,g);
		printf("%c%c%c\n",g-2,g-1,g);
		system("pause");/*�ݫ���^�D���*/ 
		system("cls");/*�N�w�g��X��ù�����r�M��*/
		printf("-------------------------------\n");
		printf("|      a. �e�X�����T����      |\n");
		printf("|      b. ��ܭ��k��          |\n");
		printf("|      c. ����                |\n");
		printf("-------------------------------\n");/*�N�D�����ܩ�ù�*/
	}
	else if(f=='B'||f=='b')/*���]��J�r��a~z�A�h��X99���k��*/
	{
		system("cls");/*�N�w�g��X��ù�����r�M��*/
		printf("�п�J�@��1~9���Ʀr:\n");
		int h=getch();/*��J�r���ó]��z�A�B�����ÿ�J*/;
		for(i=1;i>0;i++)/*�p�G���Oa~n�A�h�L���j�魫�s��J*/ 
		{
			if(h>48&&h<58)
			 	break;
			else	
				printf("�Э��s��J�@��1~9���Ʀr:\n");
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
	else if(f=='C'||f=='c')/*�߰ݬO�_�~��*/ 
	{
		system("cls");/*�N�w�g��X��ù�����r�M��*/
		printf("Continue?(y/n)\n");
		system("cls");/*�N�w�g��X��ù�����r�M��*/
		printf("�n���s��J��?\n");
		system("cls");/*�N�w�g��X��ù�����r�M��*/
		int k=getch();
		if(k=='Y'||k=='y')
		{
			system("cls");/*�N�w�g��X��ù�����r�M��*/
			printf("-------------------------------\n");
			printf("|      a. �e�X�����T����      |\n");
			printf("|      b. ��ܭ��k��          |\n");
			printf("|      c. ����                |\n");
			printf("-------------------------------\n");/*�N�D�����ܩ�ù�*/
		}
		else if(k=='N'||k=='n')/*�����{��*/ 
			return 0;
		else/*���s��J*/ 
		{
			printf("False\a\n");
			system("cls");/*�N�w�g��X��ù�����r�M��*/
			printf("�Э��s��J�@�Ӧr��:\n");
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
