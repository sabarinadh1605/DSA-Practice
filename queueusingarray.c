
#include <stdio.h>
#define size 5

int queue[size];
int front=-1;
int rear=-1;

void enqueue(){
    int x;
    printf("Enter Element To Add: \n");
    scanf("%d",&x);
    
    if(rear==size-1){
        printf("Overflow Condition\n");
    }
    else if(rear==-1&&front==-1){
    rear=front=0;
    queue[rear]=x;
    }
    else{
        rear++;
        queue[rear]=x;
    }
    }
    
void dequeue(){
    if(rear==-1&&front==-1){
        printf("Queue Underflow\n");
    }
    else if(front==rear){
        front=rear=-1;
    }
    else{
        printf("The Deleted Element:%d\n",queue[front]);
        front++;
    }
}
    
void display(){
    int i;
    if(rear==-1&&front==-1){
        printf("Queue is empty\n");
    }
    else{
        for(i=front;i<rear+1;i++){
            printf("%d\n",queue[i]);
        }
    }
}

void peek(){
    if(rear==-1&&front==-1){
        printf("Queue is empty\n");
    }
    else{
        printf("%d",queue[front]);
    }
}

void main(){
    int choice;
    
    do{
        printf("Enter choice:\n1.Enqueue\n2.Dequeue\n3.Display\n4.Peek\n");
        scanf("%d",&choice);
        
        switch(choice){
            
            case 1: enqueue();
            break;
            
            case 2: dequeue();
            break;
            
            case 3: display();
            break;
            
            case 4: peek();
            break;
            
            default: printf("Invalid choice\n");
        }
    }
    while(choice!=0);
}



