#include<stdio.h>
int size=6;
int array[6]={1,2,3,4};
void push();
void pop();
void peek();
// void display();
void main(){
    
    int operation;
    printf("Enter 1 to push\nEnter 2 to pop.\nEnter 3 to peek.\nEnter 4 to display.\n");
    printf("Enter the number btw 1 to 4:");
    scanf("%d",&operation);
    switch(operation){
        case 1:
        push();
        break;
        case 2:
        pop();
        break;
        case 3:
        peek();
        break;
        // case 4:
        // display();
        // break;
        default:
        printf("Ivalid operation.");
    }
}
//function for pushing element in stack.
void push(){
    int n=0;
    for(int i=0;array[i]!='\0';i++){
        n++;
    }
     
    int top=n-1;
    while(top<size-1){
        int num;
        printf("Enter the pushing element:");
        scanf("%d",&num);
        top=top+1;
        array[top]=num;  
        printf("The array after pushing element is:\n");
        for(int i=top;i>-1;i--){
            printf("%d\n",array[i]);
        }
        if(top==size-1){
            printf("The array is full.\n");
        }
    }
}
//function for poping element in stack.
void pop(){
    int n=0;
    for(int i=0;array[i]!='\0';i++){
        n++;
    }
    int top=n-1;
    while(top<=n){
        int num;
        if(top!=-1){
            num=array[top];
            top--;
            printf("the popped element is %d.\n",num);
            if(top==-1){
                printf("The array is empty.");
                break;
            }
            printf("The elements in stack after popping:\n");
            for(int i=top;i>-1;i--){
                printf("%d\n",array[i]);
            
            }
        }
        
    }
    
    
}
//function for peeking element in stack.
void peek(){
    int n=0;
    for(int i=0;array[i]!='\0';i++){
        n++;
    }
    int top=n-1;
    if(top==-1){
        printf("The stack is empty.");
    }
    else{
        printf("The element peeked is:%d.",array[top]);
    }
}
//function for displaying element in stack.
// void display(){
//     int n=0;
//     for(int i=0;array[i]!='\0';i++){
//         n++;
//     }
//     int top=n-1;
//     for(int i=top;i>-1;i++){
//         printf("%d\n",array[i]);
//     }
// }