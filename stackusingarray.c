
#include <stdio.h>

int stack[5];
int top=-1;

void push(){
    int x;
    
    printf("Enter Data: ");
    scanf("%d",&x);
    
    if(top==5-1){
        printf("Stack overflow");
    }
    else{
        top++;
        stack[top]=x;
    }
    }


void pop(){
    int item;
    
    if(top==-1){
        printf("Stack underflow");
    }
    else{
        item=stack[top];
        top--;
        printf("The Popped Element is: %d",item);
    }
    }


void peek(){
    if(top==-1){
        printf("Stack underflow");
    }
    else{
        printf("The element at the top is: %d",stack[top]);
    }
}

void display(){
    int i;
    
    for(i=top;i>=0;i--){
        printf("%d\n",stack[i]);
    }
}

void main()
{
    int choice;
    
    do{
        printf("Enter Your Choice:\n1.Push\n2.Pop\n3.Peek\n4.Display\n");
        scanf("%d",&choice);
    
    
    switch(choice){
        
        case 1: push();
        break;
        
        case 2: pop();
        break;
        
        case 3: peek();
        break;
        
        case 4: display();
        break;
        
        default: printf("Invalid choice");
    }
    }
    while(choice!=0);
    
        
    }

