#include<stdio.h>
#include<stdlib.h>
int Afind(int a[],int left,int right,int key)
{
	if(left>=right)
		return -1; 
	int p=left+(right-left)/2;
	if (a[p]==key)
		return p+1;
	if(a[p]>key)
		return Afind(a,left,p,key);
	else
		return Afind(a,p+1,right,key);
}
int Bfind(int a[],size_t len,int mid)
{
	return Afind(a,0,len,mid);
}
int main()
{
	int a[10]={};
	int x;	
	printf("�������ֵΪ��"); 
	for(int i=0;i<10;i++)
	{
	 	a[i]=i+10;
		printf("%-5d",a[i]);
	}
	printf("\n");
	printf("��������Ҫ���ҵ���ֵ:");
	scanf("%d",&x);
	printf("�����ҵ�ֵ��λ���ڵ�%dλ\n",Bfind(a,10,x));
}



