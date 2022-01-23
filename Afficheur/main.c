#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int tab_points[2]={0,0};
    char tab_points2[2][3]={{' ',' ',' '},{' ',' ',' '}};
    //int tab_service[2]={0,0};
    int tab_set1[2]={0,0};
    int tab_set2[2]={0,0};
    int tab_set3[2]={0,0};
    int joueur; // 1 ou 2
while(1){
system("cls");
switch(tab_points[0]){
        case 40:

        break;





}
//Affichage interface utilisateur
    printf(" --------------------------------------\n");
    printf("|                                     |\n");
    printf("|  %c%c%c *         %i     %i     %i          |\n",tab_points2[0][0],tab_points2[0][1],tab_points2[0][2], tab_set1[0], tab_set2[0], tab_set3[0] );
    printf("|                                     |\n");
    printf("| Points      1      2      3         |\n");
    printf("|                                     |\n");
    printf("|  %i *         %i     %i     %i          |\n",tab_points[1], tab_set1[1], tab_set2[1],tab_set3[1] );
    printf("|                                     |\n");
    printf(" --------------------------------------\n");


//int tab_points[joueur](); // quand j'actionne une touche du joueur, on incremente la 1er fois 15, 15, 10

         scanf("%i",&joueur);
         joueur--; // 1-> 0 et 2 -> 1

            switch(tab_points[joueur]){
                case 0:
                    tab_points[joueur]=15;
                break;
                    case 15:
                        tab_points[joueur]=30;
                    break;
                        case 30:
                            tab_points[joueur]=40;
                        break;
                            case 40:

                       tab_points[joueur]=0;

                            switch(tab_set1[joueur]){
                                case 0:
                                case 1:
                                case 2:
                                case 3:
                                case 4:
                                case 5:
                                    tab_set1[joueur]++;
                                break;
                                case 6:
                            switch(tab_set2[joueur]){
                                case 0:
                                case 1:
                                case 2:
                                case 3:
                                case 4:
                                case 5:
                                    tab_set2[joueur]++;
                                break;
                                case 6:
                            switch(tab_set3[joueur]){
                                case 0:
                                case 1:
                                case 2:
                                case 3:
                                case 4:
                                case 5:
                                    tab_set3[joueur]++;
                                break;
                            }
                            }
                                    break;

    }    }
        if((tab_set1[joueur]==6&&tab_set2[joueur]==6)||(tab_set2[joueur]==6&&tab_set3[joueur]==6)||(tab_set1[joueur]==6&&tab_set3[joueur]==6)){
            printf("C'est gagné!");



}
}
return 0;
}































// arrivé à 7, je bascule directement au 3nd set










// arrivé à 7, celui qui en a gagné 2, gagne et affiche, joueur... c'est gagné




