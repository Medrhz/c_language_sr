#include <stdio.h>
#include <stdlib.h>

void main(int argc, char const *argv[])
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

    // et &&
    // ou ||
    // not !
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

    //
    // < > <= >= ==  !=

    int age = 0;

    // // Demander l'âge de l'utilisateur
    printf("Entrez l'âge de l'enfant : ");
    scanf("%d", &age);

    // // Détermination de la catégorie
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