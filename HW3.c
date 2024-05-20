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
	system("pause");//����ޱ��i�J�B�J2
	/*Tip 2*/
	system("cls");//�N�w�g��X��ù�����r�M��
	printf("-----------------------------------\n");
	printf("|      a. Available seats         |\n");
	printf("|      b. Arrange for you         |\n");
	printf("|      c. Choose by yourself      |\n");
	printf("|      d. Exist                   |\n");
	printf("-----------------------------------\n");//�N�D�����ܩ�ù�
	system("cls");//�N�w�g��X��ù�����r�M��
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
		printf("-----------------------------------\n");//�N�D�����ܩ�ù�
        printf("�п�J�@�Ӧr��:");
        push=getch();  // �ϥ� getch ��ƨ������Ӧr����J
        if(push=='a') 
		{
            system("cls");//�N�w�g��X��ù�����r�M��
            displaySeats(seats);//�N�w�w�q�y����ܿù� 
            printf("\n�����N���^�D���...\n");
            getch();  // ���ݥ��N��
            system("cls");//�N�w�g��X��ù�����r�M��
        }
        else if(push=='b')
		{
            system("cls");//�N�w�g��X��ù�����r�M��
            int numSeats;
            printf("�п�J�ݭn���y��ơ]1~4�^�G");
            scanf("%d", &numSeats);
            if (numSeats<1||numSeats>4) //�ˬd�H�ƬO�_����1~4 
			{
                printf("�L�Ī��y��ơI�Ы����N���^�D���C\n");
                getch();
                system("cls");//�N�w�g��X��ù�����r�M��
                continue;
            }
            int suggested[4][2];
            if (findSeats(seats,numSeats,suggested))
			{
                markSeats(seats,suggested,numSeats, '@');//�N�M��쪺�Ŧ찵�O�� 
                displaySeats(seats);
                printf("\n�O�_���N�o�Ǯy��w�ơH�]y/n�^�G");
                push=getch();
                if (push=='y'||push=='Y')//�߰ݬO�_���N 
				{
                    markSeats(seats,suggested,numSeats,'*');
                    system("cls");//�N�w�g��X��ù�����r�M��
                } 
				else
				{
                    markSeats(seats,suggested,numSeats,'-');
                    system("cls");//�N�w�g��X��ù�����r�M��
                }
    		}
			else//�Ŧ줣�� 
			{
                printf("�䤣��X�A���y��I�Ы����N���^�D���C\n");
                getch();
                system("cls");//�N�w�g��X��ù�����r�M��
            }
    	}
	}
    return 0;
}

void initial(char seats[ROWS][COLS]) //�]�w��l�y��� 
{
	int i,j;
    for(i=0;i<ROWS;i++) 
	{
        for (j=0;j<COLS;j++) 
		{
            seats[i][j]='-';  //'-'��ܪŦ�
        }
    }
}

void reserve(char seats[ROWS][COLS]) //�H���]�m�w�w�y�� 
{
    srand(time(0));  //��l���H���ƥͦ���
    int reserved=0;
    int i,j;
    while(reserved<RESERVED_SEATS)//�إ�10�ӹw�q�� 
	{
        int row=rand() % ROWS;
        int col=rand() % COLS;//�H���üƨ��l�� 
        if (seats[row][col]=='-')//�H���]�m�w�q�y�� 
		{
            seats[row][col]='*';  //'*'��ܤw�w�q
            reserved++;
        }
    }
}

void displaySeats(char seats[ROWS][COLS]) //��ܮy��� 
{
	int i,j;
    printf("  123456789\n");//��ܱƼ� 
    for(i=0;i<ROWS;i++) 
	{
        printf("%d ",i+1);//��ܦC�� 
        for(j=0;j<COLS;j++) 
		{
            printf("%c",seats[i][j]);
        }
        printf("\n");
    }
}

int findSeats(char seats[ROWS][COLS],int numSeats,int suggested[4][2])//�M��Ŧ� 
{
	int i,j;
    for(i=0;i<ROWS;i++) 
	{
        for(j=0;j<=COLS-numSeats;j++)//�קK�W�X�}�C 
		{
            int k;
            for(k=0;k<numSeats;k++) //�ˬd�q��e�C�}�l���s��y��O�_���O�Ū�
			{  
                if(seats[i][j+k]!='-') 
					break;  // �p�G�o�{���O�Ŧ�A�h�X�`��
            }
            if(k==numSeats) // �p�G��쨬�����s��Ůy��
			{  
                for(k=0;k<numSeats;k++) // �O���o�Ǯy�쪺��m
				{  
                    suggested[k][0]=i;  
                    suggested[k][1]=j+k;  // �}�C�x�s��m 
                }
                return 1;  // ��^1�A��ܧ��X�A���y��
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
    return 0;  // �S�����X�A���y��A��^0
}

void markSeats(char seats[ROWS][COLS],int suggested[4][2],int numSeats,char mark) 
{  //�аO�Ŧ� 
	int i;
    for(i=0;i<numSeats;i++) 
	{
        seats[suggested[i][0]][suggested[i][1]]=mark;
    }
}


