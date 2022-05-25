#include <stdio.h>
#define STACK_SIZE 100

void push(char input);
void print(void);
char stack[STACK_SIZE]; // 스택 배열 생성 
int top = -1;


int main(void)
{

  char ch = 'a';

  while (ch!= 'q'){
  scanf("%c", ch);
  push(ch);
  print();
  }
  
  return 0;

}

void push(char input)
{
   if(top>=(STACK_SIZE-1)) //스택이 가득 차면, 더 이상 삽입 불가능 
      return; 
    stack[++top] = input; //스택에 데이터 삽입 
}

void print(void){
    int i;

    for( i=0; i< top; i++) 
    printf ("%d" , stack[i]);
}