#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int round;
	printf("¦¸¼Æ:");
	scanf("%d",&round);
	int times=1;
	while(times<=round)
	{
		fflush(stdin);
		char str[1000];
		printf("Input:");
		fgets(str,1000,stdin);
		int numberRand;
		printf("Rand: ");
		srand(time(NULL));
		numberRand=rand()%26;
		printf("%d\n",numberRand);
		printf("Output: ");
		int i;
		for(i=0;str[i]!='\0';i++)
		{
			if(isupper(str[i]))
				str[i]=(str[i]-'A'+numberRand)%26+'A';
			else if(islower(str[i]))
				str[i]=(str[i]-'a'+numberRand)%26+'a';
			else
				;
		}
		puts(str);
		times++;
	}
	system("pause");
	return EXIT_SUCCESS;
}
