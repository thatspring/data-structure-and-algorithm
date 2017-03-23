/*
 *冒泡排序
 *每一轮之后前n-i个数中最大的都会沉到最下面
 *所以后i个数是排好顺序的
 *时间复杂度O(n^2)
 *空间复杂度O(n)
 *稳定排序
*/

#include <stdio.h>
#include <stdlib.h>


void BubbleSort(int *, int);
void print(int *, int);

int main()
{
	int n;
	int buf[100];
	while(scanf("%d", &n) != EOF){
		for(int i=0; i<n; i++){
			scanf("%d",&buf[i]);
		}
		BubbleSort(buf,n);
		print(buf,n);
	}
	return 0;
}

void BubbleSort(int buf[], int n)
{
	for(int i=0; i<n-1; i++){
		//每一轮之后最大的数沉到最下面
		for(int j=0;j<n-1-i;j++){
			if(buf[j]>buf[j+1]){
				int tmp=buf[j];
				buf[j]=buf[j+1];
				buf[j+1]=tmp;
			}
		}
	}
}

void print(int buf[], int n)
{
	for(int i=0;i<n;i++){
		printf("%d ", buf[i]);
	}
	printf("\n");
}