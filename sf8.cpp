#include "stdio.h"
main()
{
	int i,k,g,s;
	int m1,m2,m3,a[10];
	a[1]=1;i=1;g=1;s=0;
	while(1)
	{
		g=1;
		for(k=i-1;k>0;k--)  
			if(a[k]==a[i]) {g=0; break;} //两数相同，标记g=0
			if(i==9 && g==1 && a[1]<a[4]){  //为了避免解的重复所以a[1]<a[4]
				m1=a[2]*10+a[3];
				m2=a[5]*10+a[6];
				m3=a[8]*10+a[9];			
				if(a[1]*m2*m3+a[4]*m1*m3==a[7]*m1*m2){
					s++;
					printf("%d/%d+%d/%d=%d/%d \t",a[1],m1,a[4],m2,a[7],m3); //实现形如a/bc+d/ef=f/hi 的形式  例：1/26+5/78=4/39  1/32+5/96=7/84  
					if(s%2==0) printf("\n");
				}			
			}		
			
			if(i<9 &&g==1){i++; a[i]=1; continue;} //向前继续走,执行continue语句直接跳到while语句，则不在执行下面的语句  		
			while(a[i]==9 && i>1) i--;   //向上一步回溯			
			if(a[i]==9 && i==1) break;  
			else a[i]++;				
	}
	printf("共有%d个解！",s);
}

