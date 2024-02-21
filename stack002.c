#include<stdio.h>
#define CAPACITY 6
int stack[CAPACITY];
int top = -1 ;

void push(int x){
 if(top < CAPACITY - 1)
    {
        top = top+1;
        stack[top] = x;
        printf("Successfully added:%d\n ", x);
    } else{
    printf("no space\n");
    }
}

int pop(){

    if(top>=0){
        int val = stack[top];

    top = top-1;
    return val;
    }
    printf("Exception from pop! Empty stack\n");

return -1;

}

int peek(){
    if(top>=0){
        return stack[top];
    }
    printf("Exception from peek!Empty stack\n");

return -1;

}

int main(){

printf("Implementing my stack\n");
peek();
push(10);
push(40);
push(60);
push(50);
push(2520);
push(-25);
push(28);
printf("pop item:%d\n",pop());
printf("Top of stack:%d\n",peek());
return 0;
}
