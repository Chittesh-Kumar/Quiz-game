#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>

void start_game();
void settings();
void settings_m();
void show_record();
void help();
void quit();

int switch_cases()
{
  char x;
  printf("ENTER YOUR CHOICE: ");
  scanf("%c",&x);
  if(isdigit(x))
  {
  switch(x)
    {
        case '1':
        {
            //printf("Start Game\n");
            main_game();
            break;
        }


        case '2':
        {
            //printf("\nSettings\n");
            settings();
            break;
        }


        case '3':
        {
            //printf("\nScore Record\n");
            show_record();
            break;
        }

        case '4':
        {
            //printf("Help\n");
            help();
            break;
        }

        case '5':
        {
            quit();
            break;
        }

        default:
        {
            printf("Wrong Input! Please enter correct input\n");
            switch_cases();
            break;
        }
    }
  }

  else
  {
      printf("     Please enter a valid number. \n");
      printf("|------------------------------------------------------------------|\n\n");
      fflush(stdin);
      switch_cases();

  }
}

void mainhome()
{
    printf("\n \n");
    printf("************************************************************************************************************************\n");
    printf("                                   WELCOME TO THE BIGGEST QUIZ GAME IN INDIA                                           \n\n");
    printf("************************************************************************************************************************\n\n");

    printf("         1. Start the Game \n\n");
    printf("         2. Settings       \n\n");
    printf("         3. Score Records      \n\n");
    printf("         4. Help           \n\n");
    printf("         5. Quit           \n\n");

    printf("#######################################################################################################################\n");
    printf("-----------------------------------------------------------------------------------------------------------------------\n\n");
    printf("\n");
    printf("-----------------------------------------------------------------------------------------------------------------------\n\n");
    switch_cases();
}


int main()
{
    float count;
    mainhome();
    return 0;
}

char name[30];
void main_game()
{
    char player_name[30];
    strcpy(name,player_name);
    printf("\n\n\n\n\t\t\t\t\tRegister your name: ");
    scanf("%s",player_name);
    printf("\n");

    printf("\n ------------------------------- Welcome %s to the Biggest Quiz Game in INDIA --------------------------------\n",player_name);

    printf("\n\n Here are some tips that you must know before playing this game: \n");
    printf("-------------------------------------------------------------------------\n");
    printf("\t\t1.There are 4 levels => 1.Easy  2.Medium  3.Hard  4.Super Hard\n");
    printf("\t\t2.There are total 5 questions in each level.For each right answer,you will score 4 points!\n");
    printf("\t\t3.No negative marking for wrong answers!\n");
    printf("\t\t4.For Easy level, For each question time alloted is 10 sec. to answer it.\n");
    printf("\t\t5.For Medium level, For each question time alloted is 15 sec. to answer it.\n");
    printf("\t\t6.For Hard level, For each question time alloted is 20 sec. to answer it.\n");
    printf("\t\t7.For Super Hard level, For each question time alloted is 25 sec. to answer it.\n");
    printf("\t\t8.You will be given 4 options and you have to pick the correct option ( A / B / C / D option) for each question\n");
    printf ("\n\n\t\t\t\t\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf ("\n\n\n Press Y to start the game!\n");
    printf ("\n Press any other key to return to the main menu!\n");
    printf("---------------------------------------------------------------------------\n");
    printf("Enter your choice: ");
    printf("\n");
    getchar();

    if((toupper(getchar())) == 'Y')
        start_game_e(player_name);

    else
    {
        system("cls");
        mainhome();
    }

    return 0;
}

float score;
float cur_score;

void start_game_e(player_name)
{
  float count= 0;
  system("cls");
  for(int i=1;i<=5;i++)
   {
        int r1=i;
        printf("\n\n\n                        Score:%.2f\n",count);
        printf("                       ____________\n\n");
        printf("Question %d of 5:\n",i);

        switch (r1)
        {
            case 1:
                printf("\n\nWhich of the following is a Palindrome number?");
                printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234\n\n");
                printf("\nEnter your option: ");
                fflush(stdin);
                if(toupper(getchar()) == 'C')
                {
                    printf ("\n\nCorrect Answer...Keep it up!!!");
                    count=count+4;
                    getchar();
                    break;
                }

                else
                {
                    printf ("\nWrong Answer!!! The correct answer is C.23232");
                    getchar();
                    break;
                }


            case 2:
                printf("\n\n\nThe country with the highest environmental performance index is...");
                printf("\n\nA.France\t\tB.Denmark\n\nC.Switzerland\t\tD.Finland\n\n");
                printf("\nEnter your option: ");
                fflush(stdin);
                if (toupper(getchar()) == 'C')
                {
                    printf ("\n\nCorrect Answer...Keep it up!!!");
                    count=count+4;
                    getchar();
                    break;
                }
                else
                {
                    printf ("\n\nWrong Answer!!! The correct answer is C.Switzerland\n");
                    getchar();
                    break;
                }


            case 3:
                printf("\n\n\nWhich animal laughs like human being?");
                printf("\n\nA.Polar Bear\t\tB.Hyena\n\nC.Donkey\t\tD.Chimpanzee\n\n");
                printf("\nEnter your option: ");
                fflush(stdin);
                if (toupper (getchar()) == 'B')
                {
                    printf ("\n\nCorrect Answer...Keep it up!!!");
                    count=count+4;
                    getchar ();
                    break;
                }
                else
                {
                    printf ("\n\nWrong Answer!!! The correct answer is B.Hyena");
                    getchar ();
                    break;
                }


            case 4:
                printf ("\n\n\nWind speed is measure by__________?");
                printf("\n\nA.Lysimeter\t\tB.Air vane\n\nC.Hydrometer\t\tD.Anemometer\n\n");
                printf("\nEnter your option: ");
                fflush(stdin);
                if (toupper(getchar()) == 'D')
                {
                          printf("\n\nCorrect Answer...Keep it up!!!");
                          count=count+4;
                          getchar();
                          break;
                }
                else
                {
                          printf ("\n\nWrong Answer!!! The correct answer is D.Anemometer");
                          getchar();
                          break;
                }


            case 5:
                printf("\n\n\nWhich is the third highest mountain in the world?");
                printf("\n\nA.Mt. K2\t\tB.Mt. Kanchanjungha\n\nC.Mt. Makalu\t\tD.Mt. Kilimanjaro\n\n");
                printf("\nEnter your option: ");
                fflush(stdin);

                if (toupper(getchar()) == 'B')
                {
                    printf ("\n\nCorrect Answer...Keep it up!!!\n\n");
                    count=count+4;
                    printf("Your current score is: %.2f",count);
                    getchar ();
                    break;
                }

                else
                {
                    printf("\n\nWrong Answer!!! The correct answer is B.Mt. Kanchanjungha\n\n");
                    printf("Your current score is: %.2f\n",count);
                    getchar();
                    break;
                }

        }
        score=count;
   }

getchar();
system("cls");
printf("\n\n");
printf("------------------------------------------------------------------------------------\n");
printf("Congratulations %s!! You have cleared Easy level of the Quiz game...\n\n",player_name);
printf("Your current score is: %.2f/20.00 points.\n\n",score);
printf("Are you excited to continue to next level?\n\n");
printf("Press Y to continue the game.\n");
printf("Press any other key to go back to mainhome.\n");
printf("------------------------------------------------------------------------------------\n");

cur_score=score;

printf("Enter your choice: ");
printf("\n");
fflush(stdin);
char x=getchar();

if((toupper(x)) == 'Y')
    start_game_m(player_name);

else
    {
        system("cls");
        mainhome();
    }


}

void start_game_m(char player_name[])
{
        system("cls");
        for (int i = 6; i<= 10; i++)
        {
            int r1= i;
            printf("\n\n\n                        Score:%.2f\n",cur_score);
            printf("                       ____________\n\n");
            printf("Question %d of 10:\n",i);

        switch(r1)

        {
            case 6:
                printf ("\n\nWhat is the National Game of England?");
                printf("\n\nA.Football\t\tB.Basketball\n\nC.Cricket\t\tD.Baseball\n\n");
                printf("\nEnter your option: ");
                fflush(stdin);
                if (toupper(getchar ()) == 'C')
                {
                        printf ("\n\nCorrect Answer...Keep it up!!!");
                        cur_score=cur_score+4;
                        getchar();
                        break;
                }
                else
                {
                        printf ("\n\nWrong!!! The correct answer is C.Cricket");
                        getchar();
                        break;
                }


            case 7:
                printf("\n\n\nWhich film stands the highest grosser movie in the World?");
                printf("\n\nA.No Time To Die\t\tB.Shutter Island\n\nC.The Avengers Endgame\t\tD.Avatar\n\n");
                printf("\nEnter your option: ");
                fflush(stdin);

                if (toupper (getchar()) == 'C')
                {
                        printf ("\n\nCorrect Answer...Keep it up!!!");
                        cur_score=cur_score+4;
                        getchar();
                        break;
                }
                else
                {
                        printf ("\n\nWrong!!! The correct answer is C.The King'sSpeech");
                        getchar();
                        break;
                }


            case 8:
                printf ("\n\n\nWhat is the group of frogs known as?");
                printf("\n\nA.A traffic\t\tB.A toddler\n\nC.A police\t\tD.An Army\n\n");
                printf("\nEnter your option: ");
                fflush(stdin);

                if (toupper (getchar ()) == 'D')
                {
                        printf ("\n\nCorrect Answer...Keep it up!!!");
                        cur_score=cur_score+4;
                        getchar();
                        break;
                }

                else
                {
                        printf ("\n\nWrong!!! The correct answer is D.An Army");
                        getchar();
                        break;
                }


            case 9:
                printf("\n\n\nThe Laws of Electromagnetic Induction were given by?");
                printf ("\n\nA.Faraday\t\tB.Tesla\n\nC.Maxwell\t\tD.Coulomb\n\n");
                printf("\nEnter your option: ");
                fflush(stdin);

                if (toupper (getchar()) == 'A')
                {
                        printf ("\n\nCorrect Answer...Keep it up!!!");
                        cur_score=cur_score+4;
                        getchar();
                        break;
                }

                else
                {
                        printf ("\n\nWrong!!! The correct answer is A.Faraday");
                        getchar();
                        break;
                }


            case 10:
                printf("\n\n\n When did India win the World cup?");
                printf("\n\nA.2010\t\tB.2012\n\nC.2000\t\tD.2011\n\n");
                printf("\nEnter your option: ");
                fflush(stdin);

                if (toupper (getchar()) == 'D')
                {
                        printf ("\n\nCorrect Answer...Keep it up!!!\n\n");
                        cur_score=cur_score+4;
                        printf("Your current score is: %.2f",cur_score);
                        getchar();
                        break;
                }
                else
                {
                        printf("\n\nWrong!!! The correct answer is D.2011\n\n");
                        printf("Your current score is: %.2f",cur_score);
                        getchar();
                        break;
                }

            }
        }


//Medium level ends
getchar();
system("cls");
printf("\n\n");
printf("------------------------------------------------------------------------------------\n");
printf("Congratulations %s!! You have cleared Medium level of the Quiz game...\n\n",player_name);
printf("Your current score is: %.2f/40.00 points.\n\n",cur_score);
printf("Are you excited to continue to next level?\n\n");
printf("Press Y to continue the game.\n");
printf("Press any other key to go back to mainhome.\n");
printf("------------------------------------------------------------------------------------\n");

printf("Enter your choice: ");
printf("\n");
fflush(stdin);
char x=getchar();

if((toupper(x)) == 'Y')
    start_game_h(player_name);

else
    {
        system("cls");
        mainhome();
    }

}

void start_game_h(char player_name[])
{
        system("cls");
        for(int i = 11; i<= 15; i++)
        {
            int r1= i;
            printf("\n\n\n                        Score:%.2f\n",cur_score);
            printf("                       ____________\n\n");
            printf("Question %d of 15:\n",i);

        switch(r1)

        {
            case 11:
                printf ("\n\nWhich element is found in Vitamin B12?");
                printf ("\n\nA.Zinc\t\t\tB.Cobalt\n\nC.Calcium\t\tD.Iron\n\n");
                printf("\nEnter your option: ");
                fflush(stdin);

                if (toupper (getchar()) == 'B')
                {
                        printf ("\n\nCorrect Answer...Keep it up!!!");
                        cur_score=cur_score+4;
                        getchar();
                        break;
                }
                else
                {
                    printf ("\n\nWrong!!! The correct answer is B.Cobalt");
                    getchar ();
                    break;
                }


            case 12:
                printf ("\n\n\nWhat is the National Name of Japan?");
                printf ("\n\nA.Polska\t\tB.Hellas\n\nC.Drukyul\t\tD.Nippon\n\n");
                printf("\nEnter your option: ");
                fflush(stdin);

                if (toupper (getchar()) == 'D')
                {
                        printf ("\n\nCorrect Answer...Keep it up!!!");
                        cur_score=cur_score+4;
                        getchar();
                        break;
                }

                else
                {
                    printf ("\n\nWrong!!! The correct answer is D.Nippon");
                    getchar();
                    break;
                }


            case 13:
                printf("\n\n\nWhich city in the world is popularly known as The City of Temple?");
                printf ("\n\nA.Delhi\t\t\tB.Bhaktapur\n\nC.Kathmandu\t\tD.Agra\n\n");
                printf("\nEnter your option: ");
                fflush(stdin);

                if (toupper (getchar ()) == 'C')
                {
                        printf ("\n\nCorrect Answer...Keep it up!!!");
                        cur_score=cur_score+4;
                        getchar();
                        break;
                }
                else
                {
                        printf ("\n\nWrong!!! The correct answer is C.Kathmandu");
                        getchar ();
                        break;
                }


            case 14:
                printf ("\n\n\nWhat is the capital of Denmark?");
                printf("\n\nA.Copenhagen\t\tB.Helsinki\n\nC.Ajax\t\t\tD.Galatasaray\n\n");
                printf("\nEnter your option: ");
                fflush(stdin);

                if (toupper (getchar ()) == 'A')
                {
                        printf ("\n\nCorrect Answer...Keep it up!!!");
                        cur_score=cur_score+4;
                        getchar();
                        break;
                }

                else
                {
                    printf("\n\nWrong!!! The correct answer is A.Copenhagen");
                    getchar();
                    break;
                }


            case 15:
                printf("\n\n\nWhich hardware was used in the Second Generation Computer?");
                printf ("\n\nA.Valves\t\tB.Transistor\n\nC. I.C\t\t\tD. S.S.I\n\n");
                printf("\nEnter your option: ");
                fflush(stdin);

                if (toupper (getchar()) == 'B')
                {
                        printf ("\n\nCorrect Answer...Keep it up!!!\n\n");
                        cur_score=cur_score+4;
                        printf("Your current score is: %.2f",cur_score);
                        getchar();
                        break;
                }

                else
                {
                        printf ("\n\nWrong!!! The correct answer is B.Transistor\n\n");
                        printf("Your current score is: %.2f",cur_score);
                        getchar();
                        break;
                }

            }
    }





// Hard level completed
getchar();
system("cls");
printf("\n\n");
printf("------------------------------------------------------------------------------------\n");
printf("Congratulations %s!! You have cleared Hard level of the Quiz game...\n\n",player_name);
printf("Your current score is: %.2f/60.00 points.\n\n",cur_score);
printf("Are you excited to continue to next level?\n\n");
printf("Press Y to continue the game.\n");
printf("Press any other key to go back to mainhome.\n");
printf("------------------------------------------------------------------------------------\n");

printf("Enter your choice: ");
printf("\n");
fflush(stdin);
char x=getchar();

if((toupper(x)) == 'Y')
    start_game_sup_h(player_name);

else
    {
        system("cls");
        mainhome();
    }


}

void start_game_sup_h(char player_name[])
{
    system("cls");
    for (int i = 16; i<= 20; i++)
    {
        int r1= i;
        printf("\n\n\n                        Score:%.2f\n",cur_score);
        printf("                       ____________\n\n");
        printf("Question %d of 20:\n",i);

    switch(r1)

    {
        case 16:
            printf("\n\n\nWhat is the color of the Black Box in aeroplanes?");
            printf("\n\nA.White\t\t\tB.Black\n\nC.Orange\t\tD.Red\n\n");
            printf("\nEnter your option: ");
            fflush(stdin);

            if (toupper (getchar ()) == 'C')
            {
                    printf ("\n\nCorrect Answer...Keep it up!!!");
                    cur_score=cur_score+4;
                    getchar();
                    break;
            }

            else
            {
                    printf ("\n\nWrong!!! The correct answer is C.Orange");
                    getchar();
                    break;
            }


        case 17:
            printf("\n                        Score:%.2f",cur_score);
            printf("\n\n\nWhich city is known at smallest city?");
            printf("\n\nA.Vatican City\t\tB.Rome\n\nC.Madrid\t\tD.Berlin\n\n");
            printf("\nEnter your option: ");
            fflush(stdin);

            if (toupper (getchar ()) == 'A')
            {
                    printf ("\n\nCorrect Answer...Keep it up!!!");
                    cur_score=cur_score+4;
                    getchar();
                    break;
            }
            else
            {
                    printf ("\n\nWrong!!! The correct answer is A.Vatican City");
                    getchar ();
                    break;
            }
            clrscr();

        case 18:
            printf("\n\n\nName the cur_scorery where there no mosquitoes are found?");
            printf("\n\nA.Japan\t\t\tB.Italy\n\nC.Argentina\t\tD.France\n\n");
            printf("\nEnter your option: ");
            fflush(stdin);

            if (toupper (getchar ()) == 'D')
            {
                    printf ("\n\nCorrect Answer...Keep it up!!!");
                    cur_score=cur_score+4;
                    getchar();
                    break;
            }
            else
            {
                    printf ("\n\nWrong!!! The correct answer is D.France");
                    getchar ();
                    break;
            }


        case 19:
            printf("\n\n\nThe scorery famous for Samba Dance is........");
            printf("\n\nA.Brazil\t\tB.Venezuela\n\nC.Nigeria\t\tD.Bolivia\n\n");
            printf("\nEnter your option: ");
            fflush(stdin);

            if (toupper (getchar()) == 'A')
            {
                    printf ("\n\nCorrect Answer...Keep it up!!!");
                    cur_score=cur_score+4;
                    getchar();
                    break;
            }
            else
            {
                    printf ("\n\nWrong!!! The correct answer is A.Brazil");
                    getchar();
                    break;
            }


        case 20:
            printf	("\n\n\nWhich Blood Group is known as the Universal Recipient?");
            printf ("\n\nA.A\t\tB.AB\n\nC.B\t\tD.O\n\n");
            printf("\nEnter your option: ");
            fflush(stdin);

            if (toupper (getchar()) == 'B')
            {
                    printf ("\n\nCorrect Answer...Keep it up!!!\n\n");
                    cur_score=cur_score+4;
                    printf("Your current score is: %.2f",cur_score);
                    getchar();
                    break;
            }
            else
            {
                    printf ("\n\nWrong!!! The correct answer is B. AB\n\n");
                    printf("Your current score is: %.2f",cur_score);
                    getchar();
                    break;
            }
        }
    }

    getchar();
    system("cls");
    printf("\n\n");
    printf("------------------------------------------------------------------------------------\n");
    printf("Congratulations %s!! Hurray! You have cleared Super Hard level of the Quiz game...\n\n",player_name);
    printf("Your current score is: %.2f/80.00 points.\n\n",cur_score);
    printf("We hope you gave enjoyed playing this game.\n");
    printf("Thank you for playing this game.\n\n");
    printf("Press any other key to go back to mainhome.\n");
    printf("------------------------------------------------------------------------------------\n");

    printf("Enter your choice: ");
    printf("\n");
    fflush(stdin);

    char x=getchar();
    system("cls");
    mainhome();

}

void help()
{
    printf("\n\n Here are some tips that you must know before playing this game: \n");
    printf("-------------------------------------------------------------------------\n");
    printf("\t\t1.There are 4 levels => 1.Easy  2.Medium  3.Hard  4.Super Hard\n");
    printf("\t\t2.There are total 5 questions in each level.For each right answer,you will score 4 points!\n");
    printf("\t\t3.No negative marking for wrong answers!\n");
    printf("\t\t4.For Easy level, For each question time alloted is 10 sec. to answer it.\n");
    printf("\t\t5.For Medium level, For each question time alloted is 15 sec. to answer it.\n");
    printf("\t\t6.For Hard level, For each question time alloted is 20 sec. to answer it.\n");
    printf("\t\t7.For Super Hard level, For each question time alloted is 25 sec. to answer it.\n");
    printf("\t\t8.You will be given 4 options and you have to pick the correct option ( A / B / C / D option) for each question\n");

    printf ("\n\n\t*********************BEST OF LUCK*********************************\n\n");

    printf("Press any key to go back to main menu.\n");
    fflush(stdin);
    getchar();
    mainhome();
}

void settings()
{
    int ch;
    system("cls");
    printf("\n\nIf you want to change foreground and background of the console... PRESS 1 to continue.\n");
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
        system("cls");
        mainhome();
        return 0;
    }

}

void settings_m()
{
        //printf("COLOUR CODES: \n0 = Black \n1 = Blue \n2 = Green \n3 = Aqua \n4 = Red \n5 = Purple \n6 = Yellow \n7 = White \n8 = Gray \n9 = Light Blue \nA = Light Green \nB = Light Aqua\nC = Light Red\nD = Light Purple\nE = Light Yellow \nF = Bright White\n\n");
        printf("\n\n1. PRESS A to change background colour to white and text colour to black.\n");
        printf("2. PRESS B to change background colour to white and text colour to Purple\n");
        printf("3. PRESS C to change background colour to light yellow and text colour to black\n");
        printf("4. PRESS D to change background colour to Light yellow and text colour to red\n");
        printf("4. PRESS E to change background colour to light yellow and text colour to purple\n");
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
                system("COLOR E4");
                break;

            case 'E':
                system("COLOR E5");
                break;

            case 'F':
                system("COLOR 90");
                break;

            case 'G':
                system("COLOR 94");
                break;

            default:
                printf("Invalid input...Please enter correct option.\n\n");
                settings_m();


        }
}
void show_record()
{
    system("cls");
    printf("\n\n************************************************ SCORES *****************************************************\n\n\n");
    printf("\tName \t\t Score \t\t\t\t Date & Time\n\n");
    time_t t;
    time(&t);
    printf("\t%s \t\t %f \t\t %s",name,cur_score,ctime(&t));
    printf("\n\nEnter any key to go back to mainhome:\n");
    fflush(stdin);
    getchar();
    system("cls");

    mainhome();
}
void quit()
{
        system("cls");
        char ch;
        printf("Are you sure,you want to exit this game? (Y/N) \n");
        fflush(stdin);
        if(toupper(getchar()) == 'Y')
            exit(1);
        else if(toupper(getchar()) == 'N')
            mainhome();
        else
        {
            printf("Invalid Input\n");
            quit();
        }
}


























































































