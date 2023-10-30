#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
void os(void);
void dbms(void);
void ds(void);
void drillc(void);
void totalmarks(void);
void login(void);
void studentdetail(void);
void displaydetail(void);
void savingprogress(void);
void saveage(void);
int agerestrict(void);
void savemarks(void);
void restrict_integer(void);
int limitswitch(void);
void restrictname(void);
int i,mark=0,ques=0,age;
char flagos='f',flagds='q',flagc='p',flagdbms='u',name[20];
int main()
{
    login();
    getch();
    while(1)
    {
    system("cls");
    int choice;
	printf("---------------------------------------\nWELCOME TO INTERACTIVE QUIZ \n--------------------------------------\nInstructions:-*list of 10 questions per subjects are given below.\n              *total 40 questions will be there.\n              *each question carries one marks.\n              *enter your option carefully after reading every questions.\n              *once entered you can't change your options.\n              *enter character either 1 or 2 or 3 or 4 only for answering questions.\n              *there is no negative marking.\n              *at the end of the test your score with grade shown.\n");
	printf("\n enter subject code you want to go first\n");
	printf("\n code 1: for Operating System\n code 2: for Database Management System \n code 3: for Data Structure \n code 4: for Basic C programming \n code 5: for showing total marks \n code 6: for saving progress in file\n code 7: for exit test");
	//scanf("%d",&choice);
	choice=limitswitch();
	switch(choice)
	{
	case 1:os();break;
	case 2: dbms();break;
	case 3:ds();break;
	case 4: drillc();break;
	case 5:totalmarks();break;
	case 6:savingprogress();break;
	case 7:exit(0);
	default:printf("\nplease eneter valid code");
	}
	getch();
    }
    getch();
 return(0);
}
void os()
{
    if(flagos=='o')
    {
        printf("\n\nlook like you have already completed this ...");
        goto l1;
    }
    printf("\n\n WELCOME TO OPERATING SYSTEM QUIZ\n");
    printf("-------------------------------------------\n");
	printf("\n(1) Which of the following is not an operating system? \n 1)Windows 2)Linux 3)Oracle 4)DOS\n");
		restrict_integer();
		if(i==3)
			mark=mark+1;
			ques=ques+1;
			printf("correct option is: 3 \n");
		printf("\n(2) What is the maximum length of the filename in DOS? \n 1)four 2)five 3)eight 4)twelve\n");
		restrict_integer();
			if(i==3)
				mark=mark+1;
				ques=ques+1;
				printf("correct option is: 3 \n");
		printf("\n(3)When was the first operating system developed? \n 1)1948 2)1949 3)1950 4)1951\n");
		restrict_integer();
			if(i==3)
			  mark=mark+1;
			  ques=ques+1;
			  printf("correct option is: 3 \n");
		printf("\n(4) When were MS windows operating systems proposed? \n 1)1994 2)1990 3)1992 4)1985\n");
		restrict_integer();
			if(i==4)
				mark=mark+1;
				ques=ques+1;
				printf("correct option is: 4 \n");
		printf("\n(5)What else is a command interpreter called? \n 1)prompt 2)kernel 3)shell 4)command\n");
		restrict_integer();
			if(i==3)
				mark=mark+1;
				ques=ques+1;
				printf("correct option is: 3 \n");
		printf("\n(6)BIOS is used? \n 1)by operating system 2)by compiler 3)by interpreter 4)by application software\n");
		restrict_integer();
			if(i==1)
				mark=mark+1;
				ques=ques+1;
				printf("correct option is: 1 \n");
		printf("\n(7)What is the mean of the Booting in the operating system? \n 1)restarting computer 2)install the program 3)to scan 4)to turn off\n");
		restrict_integer();
			if(i==1)
				mark=mark+1;
				ques=ques+1;
				printf("correct option is: 1 \n");
		printf("\n(8)When does page fault occur? \n 1)the page is present in memory 2)deadlock occur 3)the page does not present in memory 4)the buffering occurs\n");
		restrict_integer();
			if(i==3)
				mark=mark+1;
				ques=ques+1;
				printf("correct option is: 3 \n");
        printf("\n(9)Banker's algorithm is used? \n 1)to prevent deadlock 2)to deadlock recovery 3)to solve the deadlock 4)none of these\n");
		restrict_integer();
			if(i==1)
				mark=mark+1;
				ques=ques+1;
				printf("correct option is: 1 \n");
        printf("\n(10) What is bootstrapping called? \n 1)cold boot 2)cold hot boot 3)cold hot strap 4)hot boot off\n");
		restrict_integer();
			if(i==1)
				mark=mark+1;
				ques=ques+1;
				printf("correct option is: 1 \n");
            printf("\ncongrats you have successfully completed this module:");
flagos='o';
l1:printf("try another subject");
if(ques==40)
   printf("\n\nlook like you have completed all 40 questions...CONGRATS...\npress any key and check your score by enetering 5\n after that you can exit this test by entering 6");

}
void dbms()
{
    	if(flagdbms=='b')
    {
        printf("\n\nlook like you have already completed this ...");
        goto l2;
    }
        printf("\n\n WELCOME TO DBMS QUIZ\n");
         printf("-------------------------------------------\n");
    	printf("\n(1) Which of the following is generally used for performing tasks like creating the structure of the relations, deleting relation? \n 1)DML 2)Query 3)Realtional schema 4)DDL\n");
		restrict_integer();
		if(i==4)
			mark=mark+1;
			ques=ques+1;
			printf("correct option is: 4 \n");
		printf("\n(2) A Database Management System is a type of _________ software? \n 1)type of system software 2)kind of application software 3)kind of general software 4)both 1 and 3\n");
		restrict_integer();
			if(i==1)
				mark=mark+1;
				ques=ques+1;
				printf("correct option is: 1 \n");
		printf("\n(3)The term FAT is stands for \n 1)file allocation tree 2)file allocation table 3)file allocation graph 4)all the above\n");
		restrict_integer();
			if(i==2)
			  mark=mark+1;
			  ques=ques+1;
			  printf("correct option is: 2 \n");
		printf("\n(4) Which of the following can be considered as the maximum size that is supported by FAT? \n 1)8GB 2)4GB 3)4TB 4)none the above\n");
		restrict_integer();
			if(i==2)
				mark=mark+1;
				ques=ques+1;
				printf("correct option is: 2 \n");
		printf("\n(5)A huge collection of the information or data accumulated form several different sources is known as? \n 1)Data Management 2)Data Mining 3)Data Warehouse 4)Both 2 and 3\n");
		restrict_integer();
			if(i==3)
				mark=mark+1;
				ques=ques+1;
				printf("correct option is: 3 \n");
		printf("\n(6)Which of the following can be used to extract or filter the data & information from the data warehouse? \n 1)Data redundancy 2)Data recovery tool 3)Data mining 4)both 2 and 3\n");
		restrict_integer();
			if(i==3)
				mark=mark+1;
				ques=ques+1;
				printf("correct option is: 3 \n");
		printf("\n(7) Which one of the following refers to the copies of the same data (or information) occupying the memory space at multiple places? \n 1)Data Repository 2)Data Inconsistency 3)Data mining 4)Data Redundancy\n");
		restrict_integer();
			if(i==4)
				mark=mark+1;
				ques=ques+1;
				printf("correct option is: 4 \n");
		printf("\n(8)Which one of the following refers to the data about data? \n 1)Directory 2)Sub Data 3)Warehouse 4)Metadata\n");
		restrict_integer();
			if(i==4)
				mark=mark+1;
				ques=ques+1;
				printf("correct option is: 4 \n");
        printf("\n(9)Which of the following refers to the level of data abstraction that describes exactly how the data actually stored? \n 1)Conceptual level 2)Physical level 3)File level 4)Logical level\n");
		restrict_integer();
			if(i==2)
				mark=mark+1;
				ques=ques+1;
				printf("correct option is: 2 \n");
        printf("\n(10) In general, a file is basically a collection of all related? \n 1)Rows and Columns 2)Fields 3)Database 4)Records\n");
		restrict_integer();
			if(i==4)
				mark=mark+1;
				ques=ques+1;
				printf("correct option is: 4 \n");
				  printf("\ncongrats you have successfully completed this module:");
                  flagdbms='b';
                  l2:printf("try another subject");
                  if(ques==40)
    printf("\n\nlook like you have completed all 40 questions...CONGRATS...\npress any key and check your score by enetering 5\n after that you can exit this test by entering 6");
}
void ds()
{
    if(flagds=='s')
    {
        printf("\n\nlook like you have already completed this ...");
        goto l3;
    }
    printf("\n\n WELCOME TO DATA STRUCTURE QUIZ\n");
    printf("-------------------------------------------\n");
    printf("\n(1) Which of the following highly uses the concept of an array? \n 1)Binary Search 2)Caching 3)Spatial Locality 4)Scheduling of process   \n");
		restrict_integer();
		if(i==3)
			mark=mark+1;
			ques=ques+1;
			printf("correct option is: 3 \n");
		printf("\n(2) Which one of the following is the size of int arr[9] assuming that int is of 4 bytes? \n 1)9 2)36 3)35 4)none of above\n");
		restrict_integer();
			if(i==2)
				mark=mark+1;
				ques=ques+1;
				printf("correct option is: 2 \n");
		printf("\n(3)Which one of the following is the process of inserting an element in the stack? \n 1)insert 2)add 3)push 4)none of the above\n");
		restrict_integer();
			if(i==3)
			  mark=mark+1;
			  ques=ques+1;
			  printf("correct option is: 3 \n");
		printf("\n(4) When the user tries to delete the element from the empty stack then the condition is said to be a? \n 1)underflow 2)garbage collection 3)overflow 4)none the above\n");
		restrict_integer();
			if(i==1)
				mark=mark+1;
				ques=ques+1;
				printf("correct option is: 1 \n");
		printf("\n(5)If the size of the stack is 10 and we try to add the 11th element in the stack then the condition is known as? \n 1)underflow 2)garbage collection 3)overflow 4)none of the above\n");
		restrict_integer();
			if(i==3)
				mark=mark+1;
				ques=ques+1;
				printf("correct option is: 3 \n");
		printf("\n(6)Which one of the following is not the application of the stack data structure? \n 1)string reversal 2)recursion 3)backtracking 4)Asynchronous data transfer\n");
		restrict_integer();
			if(i==4)
				mark=mark+1;
				ques=ques+1;
				printf("correct option is: 4 \n");
		printf("\n(7) Which data structure is mainly used for implementing the recursive algorithm? \n 1)Queue 2)Stack 3)Binary Tree 4)Linked List\n");
		restrict_integer();
			if(i==2)
				mark=mark+1;
				ques=ques+1;
				printf("correct option is: 2 \n");
		printf("\n(8) Which data structure is required to convert the infix to prefix notation? \n 1)Stack 2)Linked List 3)Binary Tree 4)Queue\n");
		restrict_integer();
			if(i==1)
				mark=mark+1;
				ques=ques+1;
				printf("correct option is: 1 \n");
        printf("\n(9)Which of the following is the infix expression? \n 1)A+B*C 2)+A*BC 3)ABC+* 4)none of above\n");
		restrict_integer();
			if(i==1)
				mark=mark+1;
				ques=ques+1;
				printf("correct option is: 1 \n");
        printf("\n(10) Which of the following is the prefix form of A+B*C? \n 1)A+(BC*) 2)+AB*C 3)ABC+* 4)+A*BC\n");
		restrict_integer();
			if(i==4)
				mark=mark+1;
				ques=ques+1;
				printf("correct option is: 4 \n");
            printf("\ncongrats you have successfully completed this module:");
            flagds='s';
            l3:printf("try another subject");
    if(ques==40)
    printf("\n\nlook like you have completed all 40 questions...CONGRATS...\npress any key and check your score by enetering 5\n after that you can exit this test by entering 6");
}
void drillc()
{
    if(flagc=='c')
    {
        printf("\n\nlook like you have already completed this ...");
        goto l4;
    }
    printf("\n\n WELCOME TO C PROGRAMMING QUIZ\n");
    printf("-------------------------------------------\n");
     printf("\n(1) Why is a macro used in place of a function? \n 1)It reduces execution time 2)It reduces code size 3)It increases execution time 4)It increases code size \n");
		restrict_integer();
		if(i==2)
			mark=mark+1;
			ques=ques+1;
			printf("correct option is: 2 \n");
		printf("\n(2) Which one of the following is a loop construct that will always be executed once? \n 1)for 2)while 3)switch 4)do while\n");
		restrict_integer();
			if(i==4)
				mark=mark+1;
				ques=ques+1;
				printf("correct option is: 4 \n");
		printf("\n(3)Directives are translated by the? \n 1)Pre-processor 2)Compiler 3)linker 4)Editor\n");
		restrict_integer();
			if(i==1)
			  mark=mark+1;
			  ques=ques+1;
			  printf("correct option is: 1 \n");
		printf("\n(4)What is the maximum number of characters that can be held in the string variable char address line [40]? \n 1)38 2)39 3)40 4)41 \n");
		restrict_integer();
			if(i==2)
				mark=mark+1;
				ques=ques+1;
				printf("correct option is: 2 \n");
		printf("\n(5)If addition had higher precedence than multiplication, then the value of the expression (1 + 2 * 3 + 4 * 5) would be which of the following? \n 1)27 2)47 3)69 4)105 \n");
		restrict_integer();
			if(i==4)
				mark=mark+1;
				ques=ques+1;
				printf("correct option is: 4 \n");
		printf("\n(6)Array is a _________ data structure. \n 1)non-linear 2)primary 3)linear 4)data type \n");
		restrict_integer();
			if(i==3)
				mark=mark+1;
				ques=ques+1;
				printf("correct option is: 3 \n");
		printf("\n(7)  A global variable is declared \n 1)Outside of the function 2)Inside of the function 3)With the function 4)Anywhere in the program \n");
		restrict_integer();
			if(i==1)
				mark=mark+1;
				ques=ques+1;
				printf("correct option is: 1 \n");
		printf("\n(8) Who defines the user-defined function? \n 1)Compiler 2)Computer 3)Compiler Library 4)Users\n");
		restrict_integer();
			if(i==4)
				mark=mark+1;
				ques=ques+1;
				printf("correct option is: 4 \n");
        printf("\n(9)Which of the following functions is already declared in the header file? \n 1)User-define function 2)Built-in function 3)C function 4)none of above\n");
		restrict_integer();
			if(i==2)
				mark=mark+1;
				ques=ques+1;
				printf("correct option is: 2 \n");
        printf("\n(10) Which of the following operations cannot be performed in file handling? \n 1)Open the file 2)Read the file 3)To write a file 4)none of the above \n");
		restrict_integer();
			if(i==4)
				mark=mark+1;
				ques=ques+1;
				printf("correct option is: 4 \n");
            printf("\ncongrats you have successfully completed this module:");
            flagc='c';
            l4:printf("try another subject");
if(ques==40)
    printf("\n\nlook like you have completed all 40 questions...CONGRATS...\npress any key and check your score by enetering 5\n after that you can exit this test by entering 6");
}
void totalmarks()
{
    if(ques==0)
        printf("\nlook like you have not attempted any questions..please attempt questions first!");
    else
    {
    printf("\n----------------------------------------------");
    displaydetail();
    printf("\nyour total score is %d/%d\n",mark,ques);
    if(mark>=35&&mark<=40)
        printf("grade A+   EXCELLENT\n");
    else if(mark>=30&&mark<35)
        printf("grade A   VERY GOOD\n");
    else if(mark>=25&&mark<30)
        printf("grade B+   GOOD\n");
    else if(mark>=20&&mark<25)
        printf("grade B   YOU CAN DO MORE..WORK HARD\n");
    else if(mark>=15&&mark<20)
            printf("grade C   NOT GOOD...STUDY\n");
    else
        printf("grade FAIL   PLEASE STUDY AND WORK HARD...\n");
        printf("----------------------------------------------");
    }
}
void login(void)
{
    int l1,l2,a2,a1,i,ii;
    char name[20],name1[20]="nitish kumar";
    char auid[20],auid1[20]="ait22mcav057";
    l1:printf("\nenter your username  ");
    gets(name);
    l2=strlen(name1);
    l1=strlen(name);
    if(l1==l2)
    {
        for(i=0;i<l2;i++)
        {
            if(name[i]!=name1[i])
            break;
        }
        if(i==12)
            printf("username is correct..");
        else
            {
            printf("invalid username ...enter again");
            getch();
            system("cls");
             goto l1;
            }
    }
    else
        {
        printf("enter valid username...");
        getch();
        system("cls");
        goto l1;
        }
    l2:printf("\nnow enter your auid  ");
    gets(auid);
    a2=strlen(auid1);
    a1=strlen(auid);
    if(a1==a2)
    {
        for(ii=0;ii<a2;ii++)
        {
            if(auid[ii]!=auid1[ii])
            break;
        }
        if(ii==a2)
            printf("LOGIN SUCCESSFUL...\n\n Now please enter students detail and lets enjoy the test...");
        else
            {
            printf("invalid auid ...enter again");
            getch();
            system("cls");
             goto l2;
            }
    }
    else
        {
        printf("enetr valid auid...");
        getch();
        system("cls");
        goto l2;
        }
    studentdetail();
}
void studentdetail()
{
    restrictname();
    //printf("\nenter your name ");
    //gets(name);
    printf("\nenter your age");
    //scanf("%d",&age);
   age=agerestrict();
    printf("\npress any key to start the QUIZ");

}
void displaydetail()
{
    printf("\nName :%s",name);
    printf("\nAge :%d",age);
}
void savingprogress()
{
     if(ques==0)
      printf("\nlook like you have not attempted any questions..\nplease attempt questions first then try to save your progress!");
   else
    {
     FILE *fp;
     fp=fopen("progress.txt","a");
            if(fp==NULL)
            {
                printf("file cannot open");
                exit(1);

            }
            else
            {
             printf("\nsaving progress wait...\n");
             fputs("\nName= ",fp);
            fputs(name,fp);
             fclose(fp);
            }
             printf("saved....wait for few second and press any key..\n");
           saveage();
           savemarks();
    }
}
void saveage()
{
   FILE *fp;
     fp=fopen("progress.txt","a");
            if(fp==NULL)
            {
                printf("file cannot open");
                exit(1);

            }
            else
            {
             fputs("\nAge= ",fp);
            fprintf(fp,"%d",age);
             fclose(fp);
            }
}
void savemarks()
{
    FILE *fp;
     fp=fopen("progress.txt","a");
            if(fp==NULL)
            {
                printf("file cannot open");
                exit(1);

            }
            else
            {
             fputs("\nMarks= ",fp);
            fprintf(fp,"%d",mark);
             fputs("\nTotal Marks= 40\n",fp);
             fclose(fp);
            }

}
void restrict_integer()
{
    int c;
    lab:c=getch();
    if(c==49||c==50||c==51||c==52)
       i=c;
    else
        goto lab;
    if(i==49)
    {
        i=1;
        printf("\nyour option: %d\n",i);
    }
    else if(i==50)
    {
        i=2;
        printf("\nyour option: %d\n",i);
    }
    else if(i==51)
    {
        i=3;
        printf("\nyour option: %d\n",i);
    }
    else
    {
        i=4;
        printf("\nyour option: %d\n",i);
    }
}
int limitswitch()
{
    int c,choic;
    lab:c=getch();
    if(c==48||c==49||c==50||c==51||c==52||c==53||c==54||c==55||c==56||c==57)
       choic=c;
    else
      {

        goto lab;
      }
        if(choic==48)
            choic=0;
        else if(choic==49)
            choic=1;
        else if(choic==50)
            choic=2;
        else if(choic==51)
            choic=3;
       else if(choic==52)
            choic=4;
       else if(choic==53)
            choic=5;
       else if(choic==54)
            choic=6;
       else if(choic==55)
            choic=7;
       else if(choic==56)
            choic=8;
       else
            choic=9;
            return choic;
}
int agerestrict()
{
     int ag=0,b;
       do
       {
       b=getch();
       if(b>=48&&b<=57)
        {
        printf("%c",b);
        ag=ag*10+(b-48);
       }
       if(b==13)
        break;
    }while(1);
    return(ag);
}
void restrictname()
{
    printf("\nenter your name:\n");
    char ch;
    int i;
    for(i=0;ch!=13;i++)
    {
        ch=getch();
        if(ch>=65&&ch<=90||ch>=97&&ch<=122||ch==32)
          {
            printf("%c",ch);
            name[i]=ch;
          }
        else if(ch==13)
            break;
        else
            i--;
    }
    printf("\nname=%s",name);
}
