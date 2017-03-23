/*
 *希尔排序

*/


#include <stdio.h>
#include <stdlib.h>

void ShellSort(int *, int);
void print(int *, int);


int main()
{
	int n;
	int buf[100];
	while(scanf("%d", &n) != EOF){
		for(int i=0; i<n; i++){
			scanf("%d",&buf[i]);
		}
		ShellSort(buf, n);
		print(buf, n);
	}
}

void ShellSort(int buf[], int n)
{
	
}

void print(int buf[], int n)
{

}