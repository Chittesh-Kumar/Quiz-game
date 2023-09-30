#include<stdio.h>
#include<stdlib.h>

void settings();
int main()
{
    settings();
    return 0;
}

void settings()
{
    int ch;
    system("cls");
    printf("If you want to change foreground and background of the console... PRESS 1 to continue.\n");
    printf("If you want to change font size of text in console... PRESS 2 to continue.\n");
    printf("If you want go back to mainhome... Press 3\n\n");
    printf("Enter your choice: ");
    fflush(stdin);
    scanf("%d",&ch);
    if(ch==1)
    {
        settings_m();

        printf("Press any key to go back to settings\n");
        fflush(stdin);
        getchar();
        settings();
    }

    if(ch==2)
    {
        return 0;
    }

    if(ch==3)
    {
        //mainhome();
        return 0;
    }

}

void settings_m()
{
        //printf("COLOUR CODES: \n0 = Black \n1 = Blue \n2 = Green \n3 = Aqua \n4 = Red \n5 = Purple \n6 = Yellow \n7 = White \n8 = Gray \n9 = Light Blue \nA = Light Green \nB = Light Aqua\nC = Light Red\nD = Light Purple\nE = Light Yellow \nF = Bright White\n\n");
        printf("\n\n1. PRESS A to change background colour to white and text colour to black.\n");
        printf("2. PRESS B to change background colour to white and text colour to Purple\n");
        printf("3. PRESS C to change background colour to light yellow and text colour to black\n");
        printf("4. PRESS D to change background colour to light yellow and text colour to red\n");
        printf("4. PRESS E to change background colour to light yellow and text colour to red\n");
        printf("5. PRESS F to change background colour to Light blue and text colour to black\n");
        printf("6. PRESS G to change background colour to light blue and text colour to red\n\n");
        char c;
        printf("Enter your choice: ");
        fflush(stdin);
        char x=getchar();
        switch(toupper(x))
        {
            case 'A':
                system("COLOR F0");
                break;

            case 'B':
                system("COLOR F5");
                break;

            case 'C':
                system("COLOR E0");
                break;

            case 'D':
                system("COLOR E0");
                break;

            case 'E':
                system("COLOR 90");
                break;

            case 'F':
                system("COLOR 90");
                break;

            case 'G':
                system("COLOR 94");
                break;

            default:
                printf("Invalid input...Please enter correct option.");
                settings_m();


        }
}

































