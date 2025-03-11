#include<stdio.h>
int main(){
    // int i,j,k;
    // for(i=1;i<=5;i++){
    //     for(j=1;j<=i;j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    reStart:
    printf("Followings are the pattern please select any of those:\n");
     printf("1.Triangle\n");
     printf("2.Inverted Triangle\n");
     printf("3.Rectangle\n");
     printf("4.square\n");
     int i;
     scanf("%d",&i);

    if(i==1){
        printf("Trinagle");
    }
    else if (i==2){
        printf("Inverted Triangle");
    }
    else if(i==3){
        printf("Rectangle");
    }
    else if(i==4){
        printf("Square\n");
    }
    else{
        printf("Invalid Input\n");
        goto reStart;
    }



    return 0;
}