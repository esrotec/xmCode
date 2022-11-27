###############################################################################################

---------------------Solving By Mominur Rahman(28th Batch, C.S.E-21058)-------------------------

----------------------------------------Section - 2---------------------------------------------

----------------------------------Solving all problem-------------------------------------------


################################################################################################


-------To display all elements of an array and also display sum of elements of that array--------

#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("\nEnter array size: ");
    scanf("%d",&n);

    int arr[n],sum=0;
    printf("\nEnter array element: ");
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }

    printf("\nDisplaying all elements of an array:\n");

    for(int j=0; j<n; j++) {
        printf("%d ",arr[j]);
    }

    printf("\n\nDisplaying sum of elements of that array: %d",sum);


    return 0;
}



###################################################################################################


------------------------ Finding out largest element from an array --------------------------------


#include <stdio.h>

int main() {
    int n;
    printf("\nEnter array size: ");
    scanf("%d",&n);

    int arr[n],max_value=0;
    printf("\nEnter array element: ");
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
        if(arr[i]>max_value) {
            max_value=arr[i];
        }
    }
    // For minimum value
    // int min_value=arr[0];
    // for(int j=0; j<n; j++) {
    //     if(arr[j]<min_value){
    //         min_value=arr[j];
    //     }
    // }

    // printf("\nSmall element of an array is : %d",min_value);

    printf("\nLargest element of an array is : %d",max_value);

    return 0;
}



#############################################################################################

--------------------------- Searching an element from an array-------------------------------

#include <stdio.h>

int main() {
    int n;
    printf("\nEnter array size: ");
    scanf("%d",&n);

    int arr[n];
    printf("\nEnter array element: ");
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }

    printf("\nEnter search element from an array: ");
    int element;
    scanf("%d",&element);
    int flag=0;
    for(int j=0; j<n; j++) {
        if(arr[j]==element) {
            printf("\nSearch element position is %d and element is %d from an array.\n",(j+1),arr[j]);
            flag=1;
            break;
        }
    }
    if(flag==0) {
        printf("\nSearch element is not found!\n");
    }
    return 0;
}



#####################################################################################################

------------------------------ Sorting an array using functions -------------------------------------

#include <stdio.h>
void sort(int size,int array[]) {
    int temp;
    for(int r=0; r<size-1; r++) {
        for(int c=0; c<size-r-1; c++) {
            if(array[c]>array[c+1]) {
                temp=array[c];
                array[c]=array[c+1];
                array[c+1]=temp;
            }
        }
    }

    printf("\nDisplaying array element after sorting :\n");

    for(int k=0; k<size; k++) {
        printf("%d ",array[k]);
    }
    
}
int main() {
    int n;
    printf("\nEnter array size: ");
    scanf("%d",&n);

    int arr[n];
    printf("\nEnter array element: ");
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }

    printf("\nDisplaying array element before sorting :\n");

    for(int j=0; j<n; j++) {
        printf("%d ",arr[j]);
    }

    sort(n,arr);

    return 0;
}



###################################################################################################

-------------------------- Finding sum of two matrices of size 3x3 -------------------------------

#include <stdio.h>

int main() {
    int arr_1[3][3],arr_2[3][3],sum[3][3],i,j;
    printf("\nEnter the matrices element of arr_1:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            scanf("%d",&arr_1[i][j]);
        }
    }

    printf("\n\nEnter the matrices element of arr_2:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            scanf("%d",&arr_2[i][j]);
        }
    }
    int result;
    // Addition of two matrices
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            result=arr_1[i][j]+arr_2[i][j];
            sum[i][j]=result;
        }
    }

    printf("\n\nSum of two matrices is:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}



#####################################################################################################

------------------------------ Finding Multiplication of two matrices--------------------------------

#include <stdio.h>

int main() {
    int arr_1[3][3],arr_2[3][3],product[3][3],i,j,sum,k;
    printf("\nEnter the matrices element of arr_1:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            scanf("%d",&arr_1[i][j]);
        }
    }

    printf("\n\nEnter the matrices element of arr_2:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            scanf("%d",&arr_2[i][j]);
        }
    }

    // Multiplication of two matrices
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            sum=0;
            for(k=0; k<3; k++) {
                sum+=(arr_1[i][k]*arr_2[k][j]);
            }
            product[i][j]=sum;
        }
    }

    printf("\n\nMultiplication of two matrices is:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%d ",product[i][j]);
        }
        printf("\n");
    }

    return 0;
}



####################################################################################################

----------------------------- Determine whether a string is palindrome or not -----------------------

#include <stdio.h>
#include <string.h>

int main() {
    char str_1[100000],str_2[100000];
    printf("\nEnter a string: ");
    gets(str_1);
    strcpy(str_2,str_1);
    strrev(str_1);

    if(strcmp(str_1,str_2)==0) {
        printf("\nString is Palindrome\n");
    }
    else{
        printf("\nString is not Palindrome\n");
    }

    return 0;
}



#######################################################################################################


--------------------- To perform all basic operations on string --------------------------------------

#include <stdio.h>
#include <string.h>

int main() {
    char str_1[100000],str_2[100000];
    printf("\nEnter first string str_1: ");
    gets(str_1);
    printf("\nEnter second string str_2: ");
    gets(str_2);

    // Operation: C strlen() function
    printf("\nOperation: C strlen() function:\n");
    printf("\n\nFirst string str_1 length is %d\nSecond string str_2 length is %d\n",strlen(str_1),strlen(str_2));

    // Operation: C strcmp() function
    printf("\nOperation: C strcmp() function:\n");
    int x=strcmp(str_1,str_2);
    if(x==0) {
        printf("\nStrings are equal!");
    }
    else if (x>0) {
        printf("\nFirst string (str_1) is greater than Second string (str_2)!");
    }
    else {
        printf("\nFirst string (str_1) is lower than Second string (str_2)!");
    }

    // Operation: C strcat() function
    printf("\nOperation: C strcat() function:\n");
    printf("\nFirst string: %s\nSecond string: %s\n",str_1,str_2);
    printf("\nAdding First and Second string is : %s",strcat(strcat(str_1," "),str_2));

    // Operation: C strcpy() function
    printf("\nOperation: C strcpy() function:\n");
    printf("\nFirst string: %s\nSecond string: %s\n",str_1,str_2);
    printf("\ncopying str1 to str2: %s",strcpy(str_2,str_1));

    return 0;
}



####################################################################################################


--------------- Counting total number of vowel or consonant in a string ----------------------------

#include <stdio.h>
#include <string.h>

int main() {
    char str[100000];
    printf("\nEnter a string: ");
    gets(str);

    int size,vowel_counting=0,space=0;
    size=strlen(str);
    for(int i=0; i<size; i++) {
        if(str[i]=='A' || str[i]=='a' || str[i]=='E' || str[i]=='e' || str[i]=='I' || str[i]=='i' || str[i]=='O' || str[i]=='o' || str[i]=='U' || str[i]=='u') {
            vowel_counting++;
        }
        if(str[i]==' ') {
            space++;
        }
    }

    printf("\nTotal number of Vowel: %d\nTotal number of Consonant: %d\n",vowel_counting,(size-(vowel_counting+space)));

    return 0;
}



####################################################################################################

------- Using pointers to read an array of integers and print its elements in reverse order --------

#include <stdio.h>
#include <string.h>

int main() {
    int size;
    printf("\nEnter the size of array : ");
    scanf("%d", &size);
    int arr[size],*ptr;
    ptr = &arr[0];
    int *ptr1=ptr;
    printf("\nEnter array element: ");
    for (int i = 0; i < size; i++) {
      scanf("%d", ptr);
      ptr++;
    }
    ptr--;
    printf("\nReverse order:\n");
    while (ptr>=ptr1)
    {
        printf("%d ",*ptr);
        ptr--;
    }
    
    return 0;
}



#################################################################################################

------------------ Displaying records of some students using structure --------------------------

#include <stdio.h>
#include <string.h>

struct students
{
    int roll;
    char name[100000];
    float cgpa;
};

int main() {
    int n,i;
    printf("Enter number of students record: ");
    scanf("%d",&n);
    struct students s[n];
    // printf("Enter:\nRoll\tName\tCGPA\n");
    for(i=0; i<n; i++) {
        printf("\nEnter Roll: ");
        scanf("%d",&s[i].roll);
        printf("\nEnter Name: ");
        scanf("%s",&s[i].name);
        printf("\nEnter CGPA: ");
        scanf("%f",&s[i].cgpa);
    }

    printf("\nDisplaying records of some students:\nRoll\tName\tCGPA\n");
    for(i=0; i<n; i++) {
        printf("%d  %s  %.2f\n",s[i].roll,s[i].name,s[i].cgpa);
    }

    return 0;
}



###################################################################################################

---------------------------- 12 number problem: File read and Write -------------------------------


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    FILE *fptr;

    // use appropriate location your pc
    fptr = fopen("D:\\Lab report\\INPUT.txt","w");

    if(fptr == NULL)
    {
        printf("Error!");   
        exit(1);             
    }

    printf("Enter num: ");
    scanf("%d",&num);

    fprintf(fptr,"%d",num);
    fclose(fptr);

    fptr = fopen("D:\\Lab report\\INPUT.txt","r");
    if (fptr == NULL){
        printf("Error! opening file");
        exit(1);
    }

    fscanf(fptr,"%d", &num);

    printf("Value : %d", num);
    fclose(fptr);

   return 0;
}



#################################################################################################

------------------------ To copy/append one file into another -----------------------------------

copy kara hoyce. akta file theke ar akta file.ai vhabe append korte hoy.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    FILE *fptr;
    FILE *fptr2;

    fptr = fopen("D:\\Lab report\\INPUT.txt","r");
    if (fptr == NULL){
        printf("Error! opening file");
        exit(1);
    }

    fscanf(fptr,"%d", &num);

    fptr2 = fopen("D:\\Lab report\\INPUT_1.txt","w");

    if(fptr2 == NULL)
    {
        printf("Error!");   
        exit(1);             
    }
    fprintf(fptr2,"%d",num);



    fclose(fptr2);
    fclose(fptr);

   return 0;
}


##################################################################################################

------------------------------------------- END --------------------------------------------------