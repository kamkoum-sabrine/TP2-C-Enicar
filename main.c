#include <stdio.h>
#include <stdlib.h>

int main()
{


    /**
    //Exercice 1
    int x;
    printf("Donner x ");
    scanf("%d",&x);
    if (x<0){
        printf("L'entier est négatif !\n");
    }
    else {
        printf("L'entier est positif !\n");
    }
    **/

    /**
    //Exercice 2
    int a,b,c;
    int max,min,mid;
    printf("Donner 3 entiers ");
    scanf("%d%d%d",&a,&b,&c);
    if ((a<b)&&(b<c)){
        max=c;
        min=a;
        mid=b;
    }
    else {
        if ((a<c)&&(c<b)){
            max=b;
            min=a;
            mid=c;
        }
        else {
            if ((b<c)&&(c<a)){
                max=a;
                min=b;
                mid=c;
            }
            else {
                if ((c<b)&&(b<a)){
                    max=a;
                    min=c;
                    mid=b;
                }
                else {
                    if ((b<a)&&(a<c)){
                        max=c;
                        min=b;
                        mid=a;
                    }
                    else {
                        if ((c<a)&&(a<b)){
                            max=b;
                            min=c;
                            mid=a;
                        }
                    }
                }
            }
        }
    }

    printf("Le max = %d\tLe min = %d\tLe mid = %d\n",max,min,mid);
    **/

    /**
    //Exercice 3
    float a,b,c,delta, x1,x2;
    printf("Donner a b et c ");
    scanf("%f%f%f", &a,&b,&c);
    if (a==0){
        if (b==0){
            if (c==0){
                printf("La solution est tout R\n");
            }
            else {
                printf("Pas de solution\n");
            }
        }
        else {
            x1 = -c/b;
            printf("La solution x = %f\n",x1);
        }
    }
    else {
        delta = b*b-4*a*c;
        if (delta>0){
            x1 = (-b-sqrt(delta))/(2*a);
            x2 = (-b+sqrt(delta))/(2*a);
            printf("Les solutions sont x1 = %f et x2 = %f\n", x1,x2);
        }
        else {
            if (delta <0){
                printf("Pas de solution\n");
            }
            else {
                x1 = -b/(2*a);
                printf("la solution x = %f\n", x1);
            }
    }
    }
    **/

    /**
    //Exercice4
    int op,choix;
    float x1,x2,res;
    do {

        do{
            printf("1-Addition\n2-Soustraction\n3-Multiplication\nDonner votre choix");
            scanf("%d",&op);
        } while ((op!=1)&&(op!=2)&&(op!=3));
        printf("Donner deux opérandes\n");
        scanf("%f%f",&x1,&x2);
        switch (op) {
            case 1: res = x1+x2; break;
            case 2: res = x1-x2; break;
            case 3: res = x1*x2; break;
        default: printf("Choix invalide !");
        }
        printf("Le résultat est %.2f\n",res);
        printf("Voulez vous poursuivre le calcul ? Taper 1 si oui \n");
        scanf("%d",&choix);
    } while (choix==1);
    **/

    /** Partie 2
    Exercice 1
    int n,i,f=1;
    printf("Donner n ");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        f*=i;
    }
    printf("%d! = %d",n,f);
    **/
    /**Exercice 2
    int x,s;
    do {
        printf("Donner un entier de 3 chiffres \n");
        scanf("%d",&x);
    } while ((x<100)||(x>999));
    s=x/100+x%100/10+x%10;
    printf("La somme des trois chiffres = %d\n",s);
    **/

    /**
    Exercice 3
    int i=0, N,s=0,negative=0;
    do {
        printf("Donner un entier \n");
        scanf("%d",&N);
        if(N<0){
            negative=1;
            break;
        }
        else {
            s+=N;
            i++;
        }

    } while (!negative);

    printf("La somme S=%d\n",s);
    printf("La moyenne Moy=%.2f\n",(float)s/i);
    **/

    int op,choix;
    float x1,x2,res;
    do {

        do{
            printf("1-Addition\n2-Soustraction\n3-Multiplication\nDonner votre choix ");
            scanf("%d",&op);
        } while ((op!=1)&&(op!=2)&&(op!=3));
        printf("Donner deux opérandes\n");
        scanf("%f%f",&x1,&x2);
        switch (op) {
            case 1: res = x1+x2; break;
            case 2: res = x1-x2; break;
            case 3: res = x1*x2; break;
        default: printf("Choix invalide !");
        }
        printf("Le résultat est %.2f\n",res);
        printf("Voulez vous poursuivre le calcul ? Taper 1 si oui \n");
        scanf("%d",&choix);
    } while (choix==1);
    return 0;
}
