#include<stdio.h>
#include<stdlib.h> 
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>

struct process{
	int name; 
	float bt;
	float at;
	float status;
	float wt;
	float tat;
	
};


int main(){
	int i;
	float arrival,burst,sum=0;
	static int num;
	struct process proc[10];

	printf("Enter the number of process:");
	scanf("%d",&num);
	
	printf("\nNow, enter the data for the %d processes:\n",num);
	for(i=0;i<num;i++){
		
		proc[i].name=i+1;
		printf("Process p%d\n",proc[i].name);
		
		printf("Burst time:");
		scanf("%f",&burst);
		proc[i].bt=burst;
		
		printf("Arrival time:");
		scanf("%f",&arrival);
		proc[i].at=arrival;
		
		proc[i].status=0;
		sum+=proc[i].bt;

		printf("\n");
	}
	for(i=0;i<num;i++){
		printf("p%d\t%f\t%f\n",proc[i].name,proc[i].bt,proc[i].at);
		
	}
	printf("\n");
	
}
