#include<stdio.h>

#define MAX_SIZE 10 /// Max 10 Element can be inserted.

int TOP=-1;      /// Top initialize as NULL.
int stack[100]; /// stack memory set as global

void PUSH(int);   /// Function prototype for PUSH
void POP();      /// Function prototype for POP
void Display(); /// Function prototype for DISPLAY

int main()
{
    int choice;

    while(1)
    {
        printf("Type 1 for Push\nType 2 for Pop \nType 3 for Display\nEnter Choice\n");
        scanf("%d", &choice); /// Variable for selecting choice
        switch(choice)
        {
            case 1:
                {
                    int num=0;
                    scanf("%d",&num); ///Take input for PUSH
                    PUSH(num); /// call push function with its parameter
                    break;
                }
            case 2:
                {
                    POP(); /// Call pop() function
                    break;
                }
            case 3:
                {
                    Display(); ///Display Stack
                    break;
                }
            default:
                printf("Try Again\n");
        }
    }

    return 0;
}
void PUSH(int x)
{
    if(TOP<MAX_SIZE-1){  /// Overflow Checking Condition
        TOP++;          /// Increment of TOP
        stack[TOP]=x;  /// Assign TOP Value
        printf("Successfully Inserted\n");
    }
    else printf("Stack Overflow\n"); /// Overflow Situation
}

void POP()
{
    int temp=0;
    if(TOP==-1) printf("Stack Underflow\n"); /// Underflow Situation

    else{
        temp= stack[TOP]; /// Hold Deleted Value for showing the value in future.
        TOP--;           /// Top decrement because of POP Operation
        printf("%d is Successfully Deleted.\n",temp);
    }
}

void Display()
{
    int i=0;
    if(TOP==-1) printf("Stack is empty\n"); /// Check Stack Empty or Not
    else{
        for(i=0; i<=TOP ; i++)
        {
            printf("%d\n",stack[i]); /// Print Stack
        }
    }
}
