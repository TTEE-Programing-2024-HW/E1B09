#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <conio.h>

#define ROWS 9
#define COLS 9
#define RESERVED_SEATS 10

//�w�q���c��A�éR�W��Student 
typedef struct {
	char name[20];
	int id;
	int math;
	int physics;
	int english;
} Student;

//����n�� 
void displayMenu();
void enterGrades(Student students[],int *numStudents);

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
	
	Student students[10];
    int numStudents = 0;
    char push;
	do{
		/*Tip 2*/
		system("cls");//�N�w�g��X��ù�����r�M��
		displayMenu();//�N�D�����ܩ�ù�
		/*Tip 3*/
		printf("�п�J�@�Ӧr��(a~e):");
		push=getch();// �ϥ� getch ��ƨ������Ӧr����J
		
		switch(push)
		{
			case 'a':
				system("cls");//�N�w�g��X��ù�����r�M��
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
	
	printf("�п�J�@�ӥ����(5~10):");
	scanf("%d",&n);
	
	while(n>10 || n<5)
	{
		printf("�п�J5~10�������:");
		scanf("%d",&n);
	}
	
	for(i=0;i<n;i++)
	{
		printf("�п�J��%d�Ӿǥͩm�W:",i+1);
		scanf("%s",students[i].name);
		
		printf("�Ǹ�(6����):");
		scanf("%d",&students[i].id);
		
		while(students[i].id>999999 || students[i].id<100000)
		{
			printf("�п�J�Ǹ�(100000~999999):");
			scanf("%d",&students[i].id);
		}
		
		printf("�ƾǦ��Z(0~100):");
		scanf("%d",&students[i].math);
		
		while(students[i].math>100 || students[i].math<0)
		{
			printf("�п�J0<�ƾǦ��Z<100:");
			scanf("%d",&students[i].math);
		}
		
		printf("���z���Z(0~100):");
		scanf("%d",&students[i].physics);
		
		while(students[i].physics>100 || students[i].physics<0)
		{
			printf("�п�J0<���z���Z<100:");
			scanf("%d",&students[i].physics);
		}
		
		printf("�^�妨�Z(0~100):");
		scanf("%d",&students[i].english);
		
		while(students[i].english>100 || students[i].english<0)
		{
			printf("�п�J0<�^�妨�Z<100:");
			scanf("%d",&students[i].english);
		}
	}
	
	*numStudents=n;
}


