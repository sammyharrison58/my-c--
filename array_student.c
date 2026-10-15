#include <stdio.h>
int main()
{
	const int students=50;
	int attendance[students];
	int present=0;
	printf("BDS ATTENDANCE SYSTEM");
	printf("Enter 1 for present and 0 for absent");
	for(int i = 0; i<students; i++)
	{
		int status;
		do{
			printf("students id");
			scanf("%d", &i+1);
			scanf("%d", status);
			if(status != 0 or status!=1){
				printf("invalid entry. enter 1 for present,0 for absent");
			}
				
		} while(status != 0 or status != 1);
		attendance[i]=status;
			
	}
	
	return 0;
}