#include<stdio.h>
#include<stdlib.h>
int a[100],ch,i,j,k,n,pos,ele;
int flag=0;
int main()
{
while(1)
{
printf("\n Welcome to the ARRAY WORLD\n");
printf("1: Create \n2:Display \n3:Insert \n");
printf("4: Delete \n5: Exit\n");
printf("Please enter your choice\n\n");
scanf("%d",&ch);
switch(ch)
{
case 1: create();
break;
case 2: display();
break;
case 3: insert();
break;
case 4: delete();
break;
case 5: exit(0);
break;
default:printf("please the correct choice\n");
}
}
}
int create()
{
if(flag!=0)
{
printf("The array is already created\n");
return 0;
}
else
{
printf(" Enter the size of the array\n");
scanf("%d",&n);
printf("Enter the elements for the array:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
flag=1;
printf("The array is created successfully\n\n");
}
}
int display()
{
if(flag==0)
{
printf("The array is not yet created\n");
return 0;
}
else if(n<=0)
{
printf("There array is empty\n");
n=0;
}
else
{
printf("The array elements are:\n");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
}
}
int insert()
{
if(flag==0)
{
printf("The array is not yet created\n");
return 0;
}
else
{
printf("Enter the element to be inserted:\n");
scanf("%d",&ele);
printf("Enter the position for the new element between 0 and %d\n",n-1);
scanf("%d",&pos);
if(pos>n||pos<0)
{
printf("Invalid position\n");
return 0;
}
for(i=n-1;i>=pos;i--)
{
a[i+1] = a[i];
}
a[pos] = ele;
n = n+1;
printf("Element is inserted successfully at position %d\n\n",pos);
}
}
int delete()
{
if(flag==0)
{
printf("The array is not yet created\n\n");
return 0;
}
if(n<=0)
{
printf("There array is empty\n");
return 0;
}
else
{
printf("Enter the position between 0 and %d\n",n-1);
scanf("%d",&pos);
if(pos>n-1||pos<0)
{
printf("Invalid position\n");
return 0;
}
for(i=pos;i<n-1;i++)
{
a[i] = a[i+1];
}
n = n-1;
printf("Element is deleted successfully from position %d\n\n",pos);
}
}
