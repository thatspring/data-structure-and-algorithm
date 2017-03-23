/*
 *直接插入排序
 *按从小到大排序
 *时间复杂度O(n^2)
 *空间复杂度O(n)
 *属于稳定排序
 *描述
 *将一个记录插入到已排好序的有序表中
 	得到一个新的有序表
 *设立哨兵，作为临时存储和判断数组边界
*/



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
	return 0;	
}

void StraightInsertSort(int buf[], int n)
{
	for(int i=1; i<n; i++){
		int key=buf[i];		//哨兵
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
	for(int i=0;i<n;i++){
		printf("%d ",buf[i]);
	}
	printf("\n");
}