#include<string.h>
#include<stdio.h>
int main() {  
	int test,i,j,k;
 	long int a[10000][10000],n[10000];
 	scanf("%d",&test);
	for(i=0;i<test;i++) {
		scanf("%ld",&n[i]);
		for(j=0;j<n[i];j++)
			scanf("%ld",&a[i][j]);
	}
 	for(i=0;i<test;i++) {
		int sum=0,avg=0;
		for(j=0;j<n[i];j++) {
			sum=sum+a[i][j];
		}
		int p= sum/n[i];
		k=n[i]*p;
		if(k==sum) {
			for(j=0;j<n[i];j++) {
				if(a[i][j]>p) {
					avg++;
				}
			}
			printf("%d\n",avg);
		}
		else{
			printf("-1\n");
		}
	}
 }