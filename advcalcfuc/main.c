#include <stdio.h>
#include <stdlib.h>
    int sum2number(int x , int y);                     // declare function for sum two integers numbers
    float areaOfSquare (float a);                      //declare function that get area of square float
    float areaOfRectangle (float w , float l);         //declare function that get area of rectangle float
    float areaOfCircle ( float r)  ;                   //declare function that get area of Circle float
    float areaOfTriangle ( float b,float hb);          //declare  function that get area of triangle float
    void oddOrEven ( int number);                           //declare function that tell you odd Or Even int
    void posOrNeg ( float number);                          //declare function that tell you positive Or Neg float
    int menu(void);                                    //declare function for replaying the menu



void main()
{
   char ch;
   int res1 ,firstnum,secnum,command;
   command = menu(); // calling the menu function for getting the input choose from user every time

   while (1)            // infinity loop under condition press e for exit
    {

   ch=getchar();         // taking e from the keyboard
     if(ch=='e')         // condition for exit
     {
         break;
     }

    switch(command)
    {
    case 1:                   //calling function for task number 1
        printf("please enter the first number\n");
        scanf("%d",&firstnum);
        printf("please enter the second number\n");
        scanf("%d",&secnum);
        res1=sum2number(firstnum,secnum);
        printf("the result for these two integer numbers is= %d\n",res1);
        break;

    case 2:                  //calling function for task number 2
        printf("please enter the value of Side\n");
        scanf("%d",&firstnum);
        res1=areaOfSquare(firstnum);
        printf("the result for area Of Square= %d\n",res1);
        break;

    case 3:                  //calling function for task number 3
        printf("please enter the Width value\n");
        scanf("%d",&firstnum);
        printf("please enter the Length value\n");
        scanf("%d",&secnum);
        res1=areaOfRectangle(firstnum,secnum);
        printf("the result for area Of Rectangle is= %d\n",res1);
        break;

    case 4:                      //calling function for task number 4
        printf("please enter the value of Radius\n");
        scanf("%d",&firstnum);
        res1=areaOfCircle(firstnum);
        printf("the result for area Of Circle= %d\n",res1);
        break;

    case 5:                        //calling function for task number 5
        printf("please enter the Base value\n");
        scanf("%d",&firstnum);
        printf("please enter the Height value\n");
        scanf("%d",&secnum);
        res1=areaOfTriangle(firstnum,secnum);
        printf("the result for area Of Triangle is= %d\n",res1);
        break;

    case 6:                         //calling function for task number 6
        printf("please enter the value to check odd Or Even\n");
        scanf("%d",&firstnum);
        oddOrEven(firstnum);
        break;

    case 7:                         //calling function for task number 7
        printf("please enter the value to check positive Or Negative \n");
        scanf("%d",&firstnum);
        posOrNeg(firstnum);
        break;
    default:
       printf("\t \t\t you press value out of range\n");
       printf("\t \t\t ******* try again ^_^ *******\n \n \n ");
        break;
    }
             command = menu(); // for recalling the menu and use the return value in switch statement

    }

}


    int sum2number(int x , int y)                        //function for sum two integers numbers
    {
        int res=0;
        res=x+y;
        return (res);
    }
     float areaOfSquare (float a)                       //function that get area of square float
     {
         float area ;
         area = a*a;
         return(area);
     }
          float areaOfRectangle (float w , float l)     //function that get area of rectangle float
     {
         float area ;
         area = w*l;
         return(area);
     }
  float areaOfCircle ( float r)                        //function that get area of Circle float
     {
         float area , bi;
         bi=3.14;
         area = (r*r)*bi;
         return(area);
     }
       float areaOfTriangle ( float b,float hb)        //function that get area of triangle float
     {
         float area ;
         area = (b*hb)/2;
         return(area);
     }
    void oddOrEven ( int number)                           //function that tell you odd Or Even int
     {
         if (number%2==0&&number!=0)
         {
             printf("the Number is even\n");
         }
         else if (number==0)
         {
             printf("the Number is Zero\n");

         }
         else
         {
             printf("the number is odd\n");
         }
     }
    void posOrNeg ( float number)                         //function that tell you positive Or Neg float
    {
        if (number>0)
        {
            printf("the number is Positive \n");
        }
        else if (number==0)
        {
            printf("the number is Zero \n");
        }
        else
        {
            printf("the number is Negative \n");
        }
    }
int menu(void){                                       // function for replaying the menu
    int reply;

    printf("\t \t enter the number of Process that you want the calculator do it from 1 to 7 \n");
    printf("\t \t\t  ***** to Exit this program press e *****\n \n");
    printf(" Enter 1- for sum two integer numbers (only Integer) \n");
    printf(" Enter 2- for Get area Of Square (float) \n");
    printf(" Enter 3- for Get area Of Rectangle (float) \n");
    printf(" Enter 4- for Get area Of Circle (float) \n");
    printf(" Enter 5- for Get area Of Triangle (float) \n");
    printf(" Enter 6- for check odd Or Even int number (only Integer) \n");
    printf(" Enter 7- for check Positive Or Negative number (float) \n");

    scanf("%d", &reply); // scanning the value that i use it in selection menu

    return reply;
}
