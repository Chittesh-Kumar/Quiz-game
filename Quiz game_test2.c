   printf("\n\nWhich of the following is a Palindrome number?");
                printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234\n\n");
                printf("\nEnter your option: ");
                fflush(stdin);
                char ch1=getchar();
                if(toupper(ch1) == 'C')
                {
                    printf("\n\nCorrect Answer!!!");
                    count=count+4;
                    getchar();
                }

                else
                {
                    printf ("\nWrong!!! The correct answer is C.23232");
                    getchar();
                }

            case 2:
               // printf("Question %d of 5:\n",r1);
                //printf("\n                        Score:%.2f\n",count);
               // printf("                       ____________\n\n");
                printf("\n\n\nThe country with the highest environmental performance index is...");
                printf("\n\nA.France\t\tB.Denmark\n\nC.Switzerland\t\tD.Finland");
                printf("\n");
                getchar();
                if (toupper(getchar()) == 'C')
                {
                    printf ("\n\nCorrect!!!");
                    count=count+4;
                    getchar();
                    break;
                }
