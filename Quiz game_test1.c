
printf("Enter you choice: ");
fflush(stdin);
getchar();

if((toupper(getchar())) == 'Y')

{
    for (i = 6; i<= 10; i++)
    {
        int r1= i;
        printf("\n\n\n                        Score:%.2f\n",cur_score);
        printf("                       ____________\n\n");
        printf("Question %d of 10:\n",i)

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

            if (toupper (getchar()) == 'D')
            {
                    printf ("\n\nCorrect Answer...Keep it up!!!");
                    cur_score=cur_score+4;
                    getchar();
                    break;
            }
            else
            {
                    printf("\n\nWrong!!! The correct answer is D.2011");
                    getchar();
                    break;
            }

        }
    }
}

else
{
    clrscr();
    mainhome();
}



//Medium level ends

clrscr();
printf("Congratulations %s!! You have cleared Medium level of the Quiz game...\n",player_name);
printf("Are you excited to continue to next level...\n");
printf("Press Y to continue the game.\n");
printf("Press any other key to go back to mainhome.\n");
printf("Enter you choice: ");
fflush(stdin);
char x=getchar();

if((toupper(getchar())) == 'Y')

{
    for (i = 6; i<= 10; i++)
    {
        int r1= i;
        printf("\n\n\n                        Score:%.2f\n",cur_score);
        printf("                       ____________\n\n");
        printf("Question %d of 10:\n",i);

    switch(r1)

    {
        case 11:
            printf ("\n\n\nWhich element is found in Vitamin B12?");
            printf ("\n\nA.Zinc\t\tB.Cobalt\n\nC.Calcium\t\tD.Iron\n\n");
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
            printf ("\n\nA.Delhi\tB.Bhaktapur\n\nC.Kathmandu\tD.Agra\n\n");
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
            printf("\n\nA.Copenhagen\t\tB.Helsinki\n\nC.Ajax\t\tD.Galatasaray\n\n");

            if (toupper (getchar ()) == 'A')
            {
                    printf ("\n\nCorrect Answer...Keep it up!!!");
                    cur_score=cur_score+4;
                    getchar();
                    break;
            }

            else
            {
                printf ("\n\nWrong!!! The correct answer is A.Copenhagen");
                getchar ();
                break;
            }


        case 15:
            printf("\n\n\nWhich hardware was used in the Second Generation Computer?");
            printf ("\n\nA.Valves\t\tB.Transistor\n\nC.I.C\t\tD.S.S.I\n\n");
            if (toupper (getchar()) == 'B')
            {
                    printf ("\n\nCorrect Answer...Keep it up!!!");
                    cur_score=cur_score+4;
                    getchar();
                    break;
            }
            else
            {
                    printf ("\n\nWrong!!! The correct answer is B.Transistor");
                    getchar();
                    break;
            }

        }
    }

}



// Hard level completed
getchar();
system("cls");
printf("\n\n");
printf("------------------------------------------------------------------------------------\n");
printf("Congratulations %s!! You have cleared Easy level of the Quiz game...\n\n",player_name);
printf("Your current score is: %.2f points\n\n",cur_score);
printf("Are you excited to continue to next level?\n\n");
printf("Press Y to continue the game.\n");
printf("Press any other key to go back to mainhome.\n");
printf("------------------------------------------------------------------------------------\n");

if((toupper(getchar())) == 'Y')

{
    for (i = 16; i<= 20; i++)
    {
        int r1= i;
        printf("\n\n\n                        Score:%.2f\n",cur_score);
        printf("                       ____________\n\n");
        printf("Question %d of 10:\n",i);

    switch(r1)

    {
        case 16:
            printf("\n\n\nWhat is the color of the Black Box in aeroplanes?");
            printf("\n\nA.White\t\tB.Black\n\nC.Orange\t\tD.Red");

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
            printf("\n\nA.Vatican City\t\tB.Rome\n\nC.Madrid\t\tD.Berlin");

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
            printf("\n\nA.Japan\t\tB.Italy\n\nC.Argentina\t\tD.France");

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
            printf("\n\nA.Brazil\t\tB.Venezuela\n\nC.Nigeria\t\tD.Bolivia");
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
            printf ("\n\nA.A\t\tB.AB\n\nC.B\t\tD.O");
            if (toupper (getchar()) == 'B')
            {
                    printf ("\n\nCorrect Answer...Keep it up!!!");
                    cur_score=cur_score+4;
                    getchar();
                    break;
            }
            else
            {
                    printf ("\n\nWrong!!! The correct answer is B.AB");
                    getchar();
                    break;
            }
        }
    }
}


// Super Hard level completed.

clrscr();
printf("Congratulations %s , You have cleared all levels in this game!!");
printf("Your present score is: %.2f",cur_score);

clrscr();
mainhome();




void show_record ()
{
  clrscr();
  char name[20];
  float scr;
  FILE * f;
  f = fopen ("score.txt", "r");
  fscanf (f, "%s %f", &name, &scr);
  printf ("\n\n\t\t*************************************************************");
  printf ("\n\n\t\t %s has secured the Highest Score %0.2f", name, scr);
  printf ("\n\n\t\t*************************************************************");
  fclose(f);
  print("\n\n\n");
  printf("Press any key to go back to home: ");
  char ch;
  ch=getchar();
  clrscr();
  mainhome();

}










