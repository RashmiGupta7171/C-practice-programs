//#include <stdio.h>
// int main(){
//      reStart:
//     printf("Followings are the pattern please select any of those:\n");
//      printf("1.Triangle\n");
//      printf("2.Inverted Triangle\n");
//      printf("3.Rectangle\n");
//      printf("4.Square\n");
//      printf("5.Hollow Rectangle\n");
//      printf("6.Hollow Square\n");
//      printf("7.Right hand Pyramid\n");
//      printf("8.Left hand Pyramid\n");
//      printf("9.Inverted Right hand Pyramid\n");
//      printf("10. Inverted Left hand Pyramid\n");

//      int i,j,k,l,size,length,breadth;
//      scanf("%d",&i);

//     if(i==1){
//         printf("Triangle\n");
//         printf("Enter size of triangle:");
//         scanf("%d",&size);
//         for(l=1;l<=size;l++){
//             for(j=size;j>l;j--){
//                 printf(" ");
//             }
//             for(k=1;k<=l;k++){
//                 printf("* ");
//             }
//                printf("\n");
//         }
//             return 0;
//      }

//     else if (i==2){
//         printf("Inverted Triangle\n");
//         printf("Enter size of Inverted Triangle:");
//         scanf("%d",&size);
//         for(l=1;l<=size;l++){
//             for(j=1;j<l;j++){
//                 printf(" ");
//             }
//             for(k=1;k<=(size - (2*l-1));k++){
//                 printf("*");
//             }
//             printf("\n");
//         }
//           return 0;
//     }

//     else if(i==3){
//         printf("Rectangle\n");
//         printf("Enter length of Rectangle:");
//         scanf("%d",&length);
//         printf("Enter breadth of rectangle:");
//         scanf("%d",&breadth);
//         for(l=1;l<=length;l++){
//             for(j=1;j<=breadth;j++){
//                   printf("* ");
//             }
//             printf("\n");
//         }
//             return 0;
//     }

//     else if(i==4){
//         printf("Square\n");
//         printf("Enter length of Squre:");
//         scanf("%d",&length);
//         for(l=1;l<=length;l++){
//             for(j=1;j<=length;j++){
//                 printf("* ");
//             }
//             printf("\n");
//         }
//         return 0;
//     }
//     else if (i==5){
//         printf("Hollow Rectangle\n");
//         printf("Enter length of Hollow Rectengle:");
//         scanf("%d",&length);
//         printf("Enter breadth of rectangle:");
//         scanf("%d",&breadth);
//         for(l=1;l<=length;l++){
//             for(j=1;j<=breadth;j++){
//             if(l==1 || l==length || j==1 || j==breadth){
//             printf("*");
//         }
//          else{
//             printf(" ");
//          }
//         }
//          printf("\n");

//     }
//     return 0;

// }
//     else if (i==6){
//         printf("Hollow Square\n");
//         printf("Enter size of Hollow Square:");
//         scanf("%d",&size);
//         for(l=1;l<=size;l++){
//             for(j=1;j<=size;j++){
//                 if(l==1 || l==size || j==1 || j==size){
//                     printf("*");
//                 }
//                 else{
//                     printf(" ");
//                 }
//             }
//             printf("\n");
//         }
//         return 0;
//     }
//     else if (i==7){
//         printf("Right hand Triangle\n");
//         printf("Enter size of Right hand Triangle:");
//         scanf("%d",&size);
//         for(l=1;l<=size;l++){
//             for(j=1;j<=l;j++){
//                 printf("*");
//             }
//             printf("\n");
//         }
//         return 0;
//     }
//     else if (i==8){
//         printf("Left hand Triangle\n");
//         printf("Enter size of Left hand Triangle:");
//         scanf("%d",&size);
//         for(l=1;l<=size;l++){
//             for(j=l;j<size;j++){
//                 printf(" ");
//             }
//             for(k=1;k<=l;k++){
//                 printf("*");
//             }
//             printf("\n");
//         }
//         return 0;
//     }
//     else if (i==9){
//         printf("Inverted Right hand Triangle\n");
//         printf("Enter size of Inverted right hand Triangle:");
//         scanf("%d",&size);
//         for(l=1;l<=size;l++){
//             for(j=size;j>=l;j--){
//                 printf("*");
//             }
//             printf("\n");
//         }
//         return 0;
//     }
//     else if (i==10){
//         printf("Inverted Left hand Triangle\n");
//         printf("Enter size of Inverted Left hand Triangle:");
//         scanf("%d",&size);
//         for(l=1;l<=size;l++){
//             for(j=1;j<l;j++){
//                 printf(" ");
//             }
//             for(k=l;k<=size;k++){
//                 printf("*");
//             }
//             printf("\n");
//         }
//         return 0;
//     }

//     else{
//         printf("Invalid Input\n");
//         goto reStart;
//     }
// return 0;
// }

 // code written using function
#include <stdio.h>

void drawTriangle(int size);
void drawInvertedTriangle(int size);
void drawRectangle(int length, int breadth);
void drawSquare(int size);
void drawHollowRectangle(int length, int breadth);
void drawHollowSquare(int size);
void drawRightHandTriangle(int size);
void drawLeftHandTriangle(int size);
void drawInvertedRightHandTriangle(int size);
void drawInvertedLeftHandTriangle(int size);

int main()
{
    int choice, size, length, breadth;

    while (1)
    {
        printf("\nChoose a shape to draw:\n");
        printf("1. Triangle\n2. Inverted Triangle\n3. Rectangle\n4. Square\n");
        printf("5. Hollow Rectangle\n6. Hollow Square\n7. Right-hand Triangle\n");
        printf("8. Left-hand Triangle\n9. Inverted Right-hand Triangle\n");
        printf("10. Inverted Left-hand Triangle\n11. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter size of Triangle: ");
            scanf("%d", &size);
            drawTriangle(size);
            break;
        case 2:
            printf("Enter size of Inverted Triangle: ");
            scanf("%d", &size);
            drawInvertedTriangle(size);
            break;
        case 3:
            printf("Enter length of Rectangle: ");
            scanf("%d", &length);
            printf("Enter breadth of Rectangle: ");
            scanf("%d", &breadth);
            drawRectangle(length, breadth);
            break;
        case 4:
            printf("Enter size of Square: ");
            scanf("%d", &size);
            drawSquare(size);
            break;
        case 5:
            printf("Enter length of Hollow Rectangle: ");
            scanf("%d", &length);
            printf("Enter breadth of Hollow Rectangle: ");
            scanf("%d", &breadth);
            drawHollowRectangle(length, breadth);
            break;
        case 6:
            printf("Enter size of Hollow Square: ");
            scanf("%d", &size);
            drawHollowSquare(size);
            break;
        case 7:
            printf("Enter size of Right-hand Triangle: ");
            scanf("%d", &size);
            drawRightHandTriangle(size);
            break;
        case 8:
            printf("Enter size of Left-hand Triangle: ");
            scanf("%d", &size);
            drawLeftHandTriangle(size);
            break;
        case 9:
            printf("Enter size of Inverted Right-hand Triangle: ");
            scanf("%d", &size);
            drawInvertedRightHandTriangle(size);
            break;
        case 10:
            printf("Enter size of Inverted Left-hand Triangle: ");
            scanf("%d", &size);
            drawInvertedLeftHandTriangle(size);
            break;
        case 11:
            printf("Exiting program...\n");
            return 0;
        default:
            printf("Invalid Input. Please try again.\n");
        }
    }
}

// Function Definitions

void drawTriangle(int size)
{
    for (int i = 1; i <= size; i++)
    {
        for (int j = size; j > i; j--)
            printf(" ");
        for (int k = 1; k <= i; k++)
            printf("* ");
        printf("\n");
    }
}

void drawInvertedTriangle(int size)
{
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j < i; j++)
            printf(" ");
        for (int k = 1; k <= (size - (2 * i - 1)); k++)
            printf("*");
        printf("\n");
    }
}

void drawRectangle(int length, int breadth)
{
    for (int i = 1; i <= length; i++)
    {
        for (int j = 1; j <= breadth; j++)
            printf("* ");
        printf("\n");
    }
}

void drawSquare(int size)
{
    drawRectangle(size, size);
}

void drawHollowRectangle(int length, int breadth)
{
    for (int i = 1; i <= length; i++)
    {
        for (int j = 1; j <= breadth; j++)
        {
            if (i == 1 || i == length || j == 1 || j == breadth)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

void drawHollowSquare(int size)
{
    drawHollowRectangle(size, size);
}

void drawRightHandTriangle(int size)
{
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
}

void drawLeftHandTriangle(int size)
{
    for (int i = 1; i <= size; i++)
    {
        for (int j = i; j < size; j++)
            printf(" ");
        for (int k = 1; k <= i; k++)
            printf("*");
        printf("\n");
    }
}

void drawInvertedRightHandTriangle(int size)
{
    for (int i = 1; i <= size; i++)
    {
        for (int j = size; j >= i; j--)
            printf("*");
        printf("\n");
    }
}

void drawInvertedLeftHandTriangle(int size)
{
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j < i; j++)
            printf(" ");
        for (int k = i; k <= size; k++)
            printf("*");
        printf("\n");
    }
}
