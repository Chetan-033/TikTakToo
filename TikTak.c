#include<stdio.h>
#include<stdlib.h>
void System()
{
	system("CLS");
}
int Pad(int ch,int t,char a[])//game pad
{
    ch=ch-1;
    for(int i=0;i<9;i++)
    {
            if(t%2==0)
                a[ch]='O';
            else
                a[ch]='X';

    }//Use Odd and even logic for O&x.O is even no And X is odd No..................
    printf("\n\n");
    for(int i=0;i<9;i++)
    {
        printf("|  %c\t|",a[i]);
        if(i==2||i==5)
        {
            printf("\n\n---------------------\n\n");
        }
    }
    //print OX game pad after changes............................................

    if(a[0]=='O'&&a[1]=='O'&&a[2]=='O' || a[3]=='O'&&a[4]=='O'&&a[5]=='O' || a[6]=='O'&&a[7]=='O'&&a[8]=='O' || a[0]=='O'&&a[4]=='O'&&a[8]=='O' || a[2]=='O'&&a[4]=='O'&&a[6]=='O')
    {
        return 1;
    }
    else if(a[0]=='O'&&a[3]=='O'&&a[6]=='O' || a[1]=='O'&&a[4]=='O'&&a[7]=='O' || a[3]=='O'&&a[5]=='O'&&a[9]=='O')
         {
            return 1;
         }
    //condition for player O wining chancessssssss.......................

    if(a[0]=='X'&&a[1]=='X'&&a[2]=='X' || a[3]=='X'&&a[4]=='X'&&a[5]=='X' || a[6]=='X'&&a[7]=='X'&&a[8]=='X' || a[0]=='X'&&a[4]=='X'&&a[8]=='X' || a[2]=='X'&&a[4]=='X'&&a[6]=='X')
    {
        return 2;
    }
    else if(a[0]=='X'&&a[3]=='X'&&a[6]=='X' || a[1]=='X'&&a[4]=='X'&&a[7]=='X' || a[3]=='X'&&a[5]=='X'&&a[9]=='X')
        {
            return 2;
        }
    //condition for player X wining chancessssssss.......................
    printf("\n\n\n");
}
//End of pad fuction.........................

void play()//start of play function
{   int i=0;
    int P=0,re=0,t=0;
    char a[10]={'1','2','3','4','5','6','7','8','9'};//

    printf("\n");
    for(int i=1;i<=9;i++)
    {
        printf("|  %d\t|",i);
        if(i==3||i==6)
        {
            printf("\n\n---------------------\n\n");
        }
    }
	printf("\n\nHow is first player(even no. is O and odd no. is X)");
    scanf("%d",&t);
    if(t%2==0)
        printf("\nfirst player is O");
    else
        printf("first player is X");
	
    int t1=t;
    printf("\n\n___Start match___");
    printf("\n\n");
	
    while(i<9&&re==0)
    {if(t1%2==0)
        printf("Player o\n");
     else
        printf("player x\n");
        scanf("%d",&P);
		system("CLS");
        re=Pad(P,t,a);
        t++;
        t1++;
        i++;
    }
    system("CLS");
    if(re==1)
        printf("\n\n***Player O is win***********\n**party na bhai**");

    if(re==2)
        printf("\n\n***Player X is win***********\n**party na bhai**");

    if(i==9||re!=1||re!=2)
        printf("\nDrow match\nboth player's are strong\nplay again and check how is the best");

}
void main()
{   int ch;
    printf("\n******%cWEL COME%c******\n",3,3);
    printf("\n******Tik O X Tak******\n");
    do{
            printf("\n\n1)PLAY\t\t2)Exit\n\n");
            scanf("%d",&ch);
        switch(ch)
        {
                case 1:
				{
					system("CLS");
                    play();
                }break;

        }
    }while(ch<2);
}
