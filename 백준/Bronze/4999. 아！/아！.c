#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main()
{
    char doctor[1001], patient[1001];
    int lngP =0,lngD =0;
    int i=0, j=0;

    scanf("%s",patient);
    scanf("%s",doctor);
    while(patient[i] != 'h'){
        lngP++;
        i++;
    }
    while(doctor[j] != 'h'){
        lngD++;
        j++;
    }
    if(i<j){
        printf("no\n");
    }else {
        printf("go\n");
    }

    return 0;
}
