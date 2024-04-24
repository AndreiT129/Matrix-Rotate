/*The program will have us introduce a matrix from the keyboard
  And will rotate it by a chosen degree,
  Then it will print the final matrix*/


#include <stdio.h>
int rotate90(int a[20][20],int n);
int rotate270(int a[20][20],int n);
int rotate180(int a[20][20],int n);
int main() {
    int a[20][20], i, j, n, degree;


    printf("\n\nRead a 2D array of size nxn and print the matrix :\n");
    printf("------------------------------------------------------\n");

    //Introducing the matrix size and elements from the keyboard//

    printf("Input number of lines and columns in the matrix :", n);
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("element - [%d],[%d] :", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    //Introducing the rotation degree from the keyboard//

    printf("\n Choose the rotation degree(90,180,270):", degree);
    scanf("%d", &degree);
    //We will use the switch...case function to evaluate the degree input//
    printf("\n");
    printf("------------------------------------------------------\n");
    printf("The final matrix is:\n");

    // Using a switch...case function to evaluate the degree input and printing the correct final matrix

    switch (degree) {
        case 90:
            rotate90(a, n);
            break;
        case 180:
            rotate180(a, n);
            break;
        case 270:
            rotate270(a, n);
            break;
        default:
            printf("Choose a compatible operator");

    }
}
int rotate90(int a[20][20],int n)//Function for rotating the matrix by 90 degrees
{for(int i=0;i<n;i++)
{
for(int j=n-1;j>=0;j--)
printf("%d ",a[j][i]);
printf("\n");
}
return 0;
}
int rotate270(int a[20][20],int n)//Function for rotating the matrix by 270 degrees
{for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<=n-1;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}
int rotate180(int a[20][20],int n)//Function for rotating the matrix by 180 degrees
{for(int i=n-1;i>=0;i--)
    {for(int j=n-1;j>=0;j--){
            printf("%d ",a[i][j]);
    }
    printf("\n");}
    return 0;
}