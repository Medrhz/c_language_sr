#include <stdio.h>
#include <stdlib.h>

void main()
{
    // =============== syntax ===================
    /*
       ======== if ========
          if(){
            instuction
            instuction
            ...
        }

        ======== if - else ========
        if(condition){
            instuction
            instuction
            ...
        }
        else{
            instuction
            instuction
            ...
        }
      ======== if - else if - else ========
            if(condition){
            }
            else if(condition){
            }else{
            }
        */
    //================= Example 1 ================
    /*
    int age = 0;
    printf("Entrez votre age : ");
    scanf("%d", &age);
    if (age != 18)
    {
        printf("hello dear : \n");
        printf("your age is :%d years old\n", age);
    }
    else
    {
        printf("not valid\n");
    }
    printf("good by !");
    */

    //================= Example 2 ================

    // et &&
    // ou ||
    // not !
    /*
        "Poussin" de 6 � 7 ans
        "Pupille" de 8 � 9 ans
        "Minime" de 10 � 11 ans
        "Cadet" apr�s 12 ans
    */
    int age;

    // Demander l'âge de l'utilisateur
    printf("Entrez l'âge de l'enfant : ");
    scanf("%d", &age);

    // Détermination de la catégorie
    if (age >= 6 && age <= 7)
    {
        printf("Catégorie : Poussin\n");
    }
    else if (age >= 8 && age <= 9)
    {
        printf("Catégorie : Pupille\n");
    }
    else if (age >= 10 && age <= 11)
    {
        printf("Catégorie : Minime\n");
    }
    else if (age >= 12)
    {
        printf("Catégorie : Cadet\n");
    }
    else
    {
        printf("Aucune catégorie disponible pour cet âge.\n");
    }
}

/*

float weight = 0;
float salary = 0;
char gender = ' ';
printf("enter your weight (kg) :\n");
scanf("%f",&weight);
printf("enter your salary (DH) : \n");
scanf("%f",&salary);
printf("enter your gender (F/M) :\n");
scanf(" %c",&gender);
printf("======= client details ======\n");
printf("your salary is :%.2f DH \n",salary);
printf("your weight is :%.2f KG\n",weight);
printf("your gender is :%c\n",gender);


*/