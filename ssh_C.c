#include <stdio.h>
#include <stdlib.h>

#define START_SSH 1
#define STOP_SSH 2
#define STATUS_SSH 3
#define EXIT_SSH 4

int main(void)
{
	int choice = 0;
	
	do
	{
		 printf ("\x1b[36mWelcome to the ssh control panel!\x1b[0m\n\n");
 		 printf ("Choose an option:\n 1- \x1b[32mStart\x1b[0m ssh\n 2- \x1b[31mStop\x1b[0m ssh\n 3- \x1b[33mStatus\x1b[0m of ssh\n 4- \x1b[41mExit\x1b[0m\n");
		 scanf("%d", &choice);

		 switch (choice)
		 {
			case START_SSH:
				system("sudo service ssh start");
				printf("Started ssh service!\n\n");
				break;

			case STOP_SSH:
				system("sudo service ssh stop");
				printf("Stopped ssh service!\n\n");

				break;

			case STATUS_SSH:
				system("sudo service ssh status");
				break;

			default:
				if (choice != EXIT_SSH)
				{
					printf("Invalid option!\n\n");
				}
				else
				{

				}

		 }
 
	}while(choice != EXIT_SSH);
}
