#include <stdio.h>

int main()
{
    float prixFabrication, prixVente;

    // Saisie des valeurs
    printf("Entrez le prix de fabrication : ");
    scanf("%f", &prixFabrication);
    printf("Entrez le prix de vente : ");
    scanf("%f", &prixVente);

    // Vérification du profit ou de la perte
    if (prixFabrication > prixVente)
    {
        printf("Perte\n");
    }
    else
    {
        printf("Profit\n");
    }

    return 0;
}
