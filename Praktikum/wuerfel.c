#include <stdio.h>


int main(){
    const int GROESSE = 5;
    const int AUGEN = 6;
    //array für würfe
    int wuerfe[GROESSE];

    //was gewonnen merken
    int win = 0;
 
   //array zum merken
    int augen[AUGEN];
    int i;
    int k;

    for( i = 0; i<AUGEN;i++ ){

        augen[i]=0;

    }

    for(i = 0; i<GROESSE;i++){
        scanf("%d", &wuerfe[i]);
    }

//Zähle die Stelle in meinem Merkarray hoch die ich gewürfelt habe
    for(i = 0; i<GROESSE;i++){
      augen[wuerfe[i]-1]++;
    }

    for(i = 0; i<AUGEN;i++){

        printf("\nIch habe so oft %d die %d gewuerfelt\n", augen[i], i+1);

    }

 for(i = 0; i<AUGEN;i++){

        switch (augen[i])
        {
        case 5:
                printf("\nGRAND\n");
                win = 1;  
            break;
        case 4:
                 printf("\nPOKER\n");
                 win = 1;  
            break;
        
        case 3: 
            
            //Könnte auch noch weg optimiert werden
            for(k = 0; k<AUGEN;k++){
                if (augen[k] == 2)
                {
                    printf("\nFull House\n");
                    win = 1;
                }
                
            }
            break;
     
        default:
            
            break;
        }

    }

//Wenn nichts gewonnen, gib aus
    if(!win){
        printf("\nLeider nix gewonnen\n");
    }
    return 0;
}

