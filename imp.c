#include<stdio.h>
int main()
{
	int choose;
	printf("These are btech courses:\n");
	printf("1.Btech CSE\n");
	printf("2.Btech CSE(Robotics)\n");
	printf("3. B.Tech AIML\n");
        printf("4. B.Tech ECE\n");
        printf("5. B.Tech Mechanical\n");
        printf("6. Exit\n");
	printf("Select your desired branch of engineering");
	scanf("%d",choose);

	switch (choose) {
        case 1:
            printf("You selected B.Tech CSE\n");
	    printf("i choose this  cource \n");
            break;
        case 2:
            printf("You selected B.Tech CSE(Robtics)\n");
	    printf("this is related to machines \n");
            break;
        case 3:
            printf("You selected B.Tech AIML\n");
	    printf("this is future proof course\n");
            break;
        case 4:
            printf("You selected B.Tech ECE\n");
	    printf("this deals with both theoritical and practical knowledge \n");
            break;
        case 5:
            printf("You have selected B.Tech Mechanical\n");
            return 0;
	case 6:
	    printf("Exit");
	    printf("Thank you for using the branch selector!\n");
        default:
            printf("Invalid choice. Try again.\n");
    }

    return 0;
}
