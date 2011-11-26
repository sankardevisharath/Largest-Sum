//This program finds  sequence of consecutive numbers in a list  which gives largest sum.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define size 5
int main()
	{
	int num[size],i,j,sum,start_index,end_index,tmp=0;
	//time() & rand() used to randomize the input..
	srand(time(NULL));
	for(i=0;i<size;i++)
		{
		num[i]=(rand()%100)-50;//prouces numbers b/w -50 & 50.
		printf(" %d \t ",num[i]);
		}
	printf(" \n");
	sum=num[0];
	start_index=0;
	end_index=0;
	for(i=0;i<size;i++)
		{
		tmp=num[i];
		for(j=i+1;j<size;j++)
			{
			tmp=tmp+num[j];
			if(tmp>sum)
				{
				sum=tmp;
				start_index=i;
				end_index=j;
				}	
			}
		}
	printf("Largest sum sequence is \n\tStart index=%d \t End index=%d \t Sum=%d \n",start_index,end_index,sum);
	return 0;
	}
    
