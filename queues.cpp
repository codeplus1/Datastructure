 //Array implementation of queue
 #include<stdio.h>
 #include<conio.h>
 #define size 4
 void qinsert(int a[], int item);
 void qdelete(int q[]);
 void display(int q[]);
 int front, rear;
 int main()
 {
 int q[size],val,element,choice;
// clrscr();
 front=-1;
 rear =-1;
 printf("MAIN MENU\n");
 printf("For insert operation enter choice =1\n");
 printf("for delete operation enter choice =2\n");
 printf("For exit enter choice =3 \n");
 do
 {
 printf("Enter your choice:");
 scanf("%d",&choice);
 if(choice==1)
 {
 printf("Enter the element to insert\n");
 scanf("%d",&element);
 qinsert(q,element);
 }
 else if(choice==2)
 {
 qdelete(q);
 }
 }while(choice==1 || choice==2);
 getch();
 }
 void qinsert(int q[], int val)
 {
 if(rear==size-1)
 {
 printf("Queue is full\n");
 }
 else
 {
 if(rear==-1 && front ==-1)
 {
 front =0;
 rear=0;
 q[rear]=val;
 }
 else {
 rear++;
 q[rear]=val;
 }
 display(q);
 }
 }
 void qdelete(int q[])
 {
 int val;
 if(rear==-1)
 {
 printf("queue is empty\n");
 }
 else if(rear==front)
 {
 val=q[front];
 front=-1;
 rear=-1;
 printf("The deleted item is = %d\n",val);
 }
 else
 {
 val=q[front];
 front++;
 printf("Deleted item is = %d\n",val);
 display(q);
 }
 }
 void display(int q[])
 {
 int i;
 printf("Queue elements are ....\n");
 printf("front------>");
 for(i=front;i<=rear;i++)
 {
 printf("%d",q[i]);
 }
 printf("<------ Rera");
 printf("\n");
 }
