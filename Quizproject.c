#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
   char questions[][100] = {"1. Divide 30 by half and add 10.\nSelect the correct answer.",
                             "2. Who has created this quiz?",
                             "3. This is a project of which subject?",
                            "4. Who invented Computer?",
                            "5. Where is Ramnarain Ruia College located?",
                            "6. From when is our college starting offline?",
                            "7. Which is the most sensitive organ in our body?",
                            "8. What is Vedanshu's instagram username?",
                            "9. Which among the following is a fruit?",
                            "10. Which is the smallest country on planet Earth?"};

   char options[][50] = {"A. 30", "B. 25.5", "C. 70", "D. None of the above.",
                          "A. Sonu Sood", "B. Nikola Tesla", "C. Vedanshu Kocharekar", "D. Manoj Bajpayee",
                          "A. Python", "B. C Programming", "C. Linux", "D. Mathematics",
                          "A. Charles Babbage", "B. Bill Gates", "C. Jeff Bezos", "D. Elon Musk",
                          "A. Powai", "B. Sion", "C. Thane", "D. Matunga",
                          "A. Already started", "B. 25 December", "C. 12th December", "D. Not informed yet",
                          "A. Tongue", "B. Eyes", "C. Skin", "D. Ears",
                          "A. unique_7003", "B. vedanshu7003", "C. vjk_7", "D. king73",
                          "A. Carrot", "B. Tomato", "C. Potato", "D. Onion",
                          "A. Vatican City", "B. Nepal", "C. China", "D. Pakistan"};

   char answers[11] = {'X', 'C', 'C', 'B', 'A', 'D', 'D', 'C', 'A', 'B', 'A'};

   int numberOfQuestions = 10;
   char guess;
   int score=0;

   system("COLOR 0E");
   printf("Let the quiz begin!\n\n");

   for(int i = 0; i < numberOfQuestions; i++)
   {

      system("COLOR 0E");
      printf("%s\n\n", questions[i]);

      for(int j = (i * 4); j < (i * 4) + 4; j++)
      {
         printf("%s\n\n", options[j]);
      }
      printf("Your guess: ");
      scanf("%s", &guess);

      if(toupper(guess) == answers[i+1])
      {
        system("COLOR 0A");
         printf("GREAT!\nYOUR ANSWER IS CORRECT!\n\n");
         score++;
      }
      else
      {
        system("COLOR 0C");
        printf("AH! HARD LUCK.....\nYOUR ANSWER IS WRONG!\nTHE CORRECT OPTION IS OPTION %c.\n\n",answers[i+1]);
      }
      if(i<=8)
      {
        printf("Press 'ENTER' to proceed to the next question.");
      }
      else
      {
        printf("Press 'ENTER' to proceed to the results.");
      }
      scanf("%c",&guess);
      if (getchar() == '\n')
      {
        system("cls");
      }
   }
   system("COLOR 0F");
   printf("YOUR SCORE: %d/%d\n\nTHANK YOU!\n", score, numberOfQuestions);
   return 0;
}
