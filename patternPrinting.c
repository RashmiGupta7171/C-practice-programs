#include<stdio.h>
int main(){
     reStart:
    printf("Followings are the pattern please select any of those:\n");
     printf("1.Triangle\n");
     printf("2.Inverted Triangle\n");
     printf("3.Rectangle\n");
     printf("4.Square\n");
     printf("5.Hollow Rectangle\n");
     printf("6.Hollow Square\n");
     printf("7.Right hand Pyramid\n");
     printf("8.Left hand Pyramid\n");
     printf("9.Inverted Right hand Pyramid\n");
     printf("10. Inverted Left hand Pyramid\n");


     int i,j,k,l,size,length,breadth;
     scanf("%d",&i);

    if(i==1){
        printf("Triangle\n");
        printf("Enter size of triangle:");
        scanf("%d",&size);
        for(l=1;l<=size;l++){
            for(j=size;j>l;j--){
                printf(" ");
            }
            for(k=1;k<=l;k++){
                printf("* ");
            }
               printf("\n");
        }
            return 0;
     }

    else if (i==2){
        printf("Inverted Triangle\n");
        printf("Enter size of Inverted Triangle:");
        scanf("%d",&size);
        for(l=1;l<=size;l++){
            for(j=1;j<l;j++){
                printf(" ");
            }
            for(k=1;k<=(size - (2*l-1));k++){
                printf("*");
            }
            printf("\n");
        }
          return 0;
    }
   
    else if(i==3){
        printf("Rectangle\n");
        printf("Enter length of Rectangle:");
        scanf("%d",&length);
        printf("Enter breadth of rectangle:");
        scanf("%d",&breadth);
        for(l=1;l<=length;l++){
            for(j=1;j<=breadth;j++){
                  printf("* ");
            }
            printf("\n");
        }
            return 0;
    }
    
    else if(i==4){
        printf("Square\n");
        printf("Enter length of Squre:");
        scanf("%d",&length);
        for(l=1;l<=length;l++){
            for(j=1;j<=length;j++){
                printf("* ");
            }
            printf("\n");
        }
        return 0;
    }
    else if (i==5){
        printf("Hollow Rectangle\n");
        printf("Enter length of Hollow Rectengle:");
        scanf("%d",&length);
        printf("Enter breadth of rectangle:");
        scanf("%d",&breadth);
        for(l=1;l<=length;l++){
            for(j=1;j<=breadth;j++){
            if(l==1 || l==length || j==1 || j==breadth){
            printf("*");
        }
         else{
            printf(" ");
         }
        }
         printf("\n");
        
    }
    return 0;

}
    else if (i==6){
        printf("Hollow Square\n");
        printf("Enter size of Hollow Square:");
        scanf("%d",&size);
        for(l=1;l<=size;l++){
            for(j=1;j<=size;j++){
                if(l==1 || l==size || j==1 || j==size){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
            printf("\n");
        }
        return 0;
    }
    else if (i==7){
        printf("Right hand Triangle\n");
        printf("Enter size of Right hand Triangle:");
        scanf("%d",&size);
        for(l=1;l<=size;l++){
            for(j=1;j<=l;j++){
                printf("*");
            }
            printf("\n");
        }
        return 0;
    }
    else if (i==8){
        printf("Left hand Triangle\n");
        printf("Enter size of Left hand Triangle:");
        scanf("%d",&size);
        for(l=1;l<=size;l++){
            for(j=l;j<size;j++){
                printf(" ");
            }
            for(k=1;k<=l;k++){
                printf("*");
            }
            printf("\n");
        }
        return 0;
    }
    else if (i==9){
        printf("Inverted Right hand Triangle\n");
        printf("Enter size of Inverted right hand Triangle:");
        scanf("%d",&size);
        for(l=1;l<=size;l++){
            for(j=size;j>=l;j--){
                printf("*");
            }
            printf("\n");
        }
        return 0;
    }
    else if (i==10){
        printf("Inverted Left hand Triangle\n");
        printf("Enter size of Inverted Left hand Triangle:");
        scanf("%d",&size);
        for(l=1;l<=size;l++){
            for(j=1;j<l;j++){
                printf(" ");
            }
            for(k=l;k<=size;k++){
                printf("*");
            }
            printf("\n");
        }
        return 0;
    }

    else{
        printf("Invalid Input\n");
        goto reStart;
    }
return 0;
}
