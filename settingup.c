#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

float spring(float springindex,float majordia);

int main(){

    char inpt;
    printf(" \n PRESS S TO DESIGN SPRING \n PRESS G TO DESGN GEAR \n");
    scanf(" %c",&inpt);

    if(inpt=='S'){
        printf("lets design some springs \n");
        float md,si;
        printf(" enter the spring index \n");
        scanf(" %f",&si);
        

        printf(" enter the major dia \n");
        scanf(" %f",&md);
       


       printf("the wire diameter is %f ",spring(si,md));

    }else if(inpt=='G'){
        printf(" LETS DESIGN SOME GEAR \n");


    }else{
        printf("enter a valid data \n");
    }
    return 0;
}

float spring(float springindex,float majordia){
    float wiredia;
    wiredia=majordia/springindex;

    return wiredia;

}