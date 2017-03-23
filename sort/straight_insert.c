#include <stdio.h>
#include <stdlib.h>


void StraightInsertSort(int *, int);
void print(int *, int);

int main()
{
	int n;
	int buf[100];
	while(scanf("%d",&n) != EOF){
	//多组数据判断输入结束
		for(int i=0; i<n; i++){
			scanf("%d",&buf[i]);
		}
		StraightInsertSort(buf, n);
		print(buf, n);
	}		
}

void StraightInsertSort(int buf[], int n)
{
	for(int i=1; i<n; i++){
		int key=buf[i];
		int j=i-1;
		while(j>=0 && buf[j]>key){
			buf[j+1]=buf[j];
			j--;
		}
		buf[j+1]=key;
	}
}

void print(int buf[], int n)
{
	for(int i=0;i<n-1;i++){
		printf("%d ",buf[i]);
	}
	printf("%d\n",buf[n-1]);
}