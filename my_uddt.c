#include "stdlib.h"
#include "stdio.h"
#include "string.h"

struct client
{
    char Name[30];
    char Last_Name[30];
    char Type_of_service[10];
    char User[30];
    char Mail[30];
    char Contrac[10];
    float Credit;
};

int main(int argc, char const *argv[])
{
    struct client client1 = {0};
    strcpy(client1.Name , "Juan");
    strcpy(client1.Last_Name , "Lopez");
    strcpy(client1.Type_of_service , "Gold");
    strcpy(client1.User , "lopezj2020");
    strcpy(client1.Mail , "myuddt@ejemplo.com");
    strcpy(client1.Contrac , "0000579034");
    client1.Credit = 35890;

    printf("The client Name is: %s \n", client1.Name);
    printf("The Last_Name is: %s \n", client1.Last_Name);
    printf("The Type_of_service is: %s \n", client1.Type_of_service);
    printf("The User is: %s \n", client1.User);
    printf("The Mail is: %s \n", client1.Mail);
    printf("The Contrac is: %s \n", client1.Contrac);
    printf("The Credit is: %f \n", client1.Credit);


    return 0;
}