

/*
Problem statement :10
Problem Statement : Read the marks obtained by students of second year in an online examination of particular
subject. Find out maximum and minimum marks obtained in that subject. Use heap data
structure. Analyze the algorithm.*/


#include<iostream>
#define SIZE 100
using namespace std;

int heap[SIZE];
void create(int heap[],int n);
void buildheapmax(int heap[],int i);
void create1(int heap[],int n);
void buildheapmin(int heap[],int i);

int main()

{
  int n,i,j,k;

cout<<"Enter the no of Students appeared For ADS online examination"<<endl;
cin>>n;
heap[0]=n;
cout<<"\nEnter the Marks of the students"<<endl;
for(k=1;k<=n;k++)
 {
  cin>>heap[k];
 }
create(heap,n);
cout<<"\nDisplay max heap"<<endl;
for(k=0;k<=n;k++)
 {
   cout<<heap[k]<<"\t";
  }

cout<<"\nThe Maximum marks in the subject is ";
cout<<heap[1];
create1(heap,n);
cout<<"\nDisplay min heap"<<endl;
for(k=0;k<=n;k++)
 {
   cout<<heap[k]<<"\t";
  }

cout<<"\nThe Minimum marks in the subject is ";
cout<<heap[1];

return 0;
}

void create(int heap[],int n)
{
int i,k;

for(i=n/2;i>=1;i--)
{
     buildheapmax(heap,i);
}

}

void buildheapmax(int heap[],int i)
{


int j,temp,m;
int q=1;
m=heap[0];
while(2*i<=m&&q==1)
 {
  j=2*i;
  if(j+1<=m&&heap[j+1]>heap[j])
   {j=j+1;}

  if(heap[i]>heap[j])
    {q=0;}
  else
   {
    temp=heap[i];
    heap[i]=heap[j];
    heap[j]=temp;
     i=j;
    }

  }


}
void create1(int heap[],int n)
{
int i,k;

for(i=n/2;i>=1;i--)
{
     buildheapmin(heap,i);
}

}

void buildheapmin(int heap[],int i)
{


int j,temp,m;
int q=1;
m=heap[0];
while(2*i<=m&&q==1)
 {
  j=2*i;
  if(j+1<=m&&heap[j+1]<heap[j])
   {j=j+1;}

  if(heap[i]<heap[j])
    {q=0;}
  else
   {
    temp=heap[i];
    heap[i]=heap[j];
    heap[j]=temp;
     i=j;
    }

  }


}
