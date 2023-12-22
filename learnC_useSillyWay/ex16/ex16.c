#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Person{
    char* name;
    int age;
    int height;
    int weight;
};

struct Person* Person_create(char* name , int age ,int height,int weight)
{
    struct Person* who = malloc(sizeof(struct Person));
    assert(who != NULL);
    who->name    = name     ;
    who->age     = age      ;
    who->height  = height   ;
    who->weight  = weight   ;
    return who;
}

void Person_destory(struct Person* who)
{
    assert(who != NULL);

    free(who->name);
    //free(who);
}

void Person_print(struct Person* who)
{
    printf("Name is %s.\n",who->name);
    printf("\t Age is %d.\n",who->age);
    printf("\t Height is %d.\n",who->height);
    printf("\t Weight is %d.\n",who->weight);
}

int main()
{
    struct Person* cjq = Person_create("cjq",18,183,85);
    struct Person* fyr = Person_create("fyr", 18 ,165, 45);
    struct Person  daiyan;
    struct Person* dy = &daiyan;

    daiyan.name = "daiyan";
    daiyan.age = 24;
    daiyan.height = 170;
    Person_print(dy);

    Person_print(cjq);
    Person_print(fyr);
    cjq->age+=1;
    fyr->weight+=5;
    Person_print(fyr);
    Person_print(cjq);
    Person_destory(cjq);
    Person_destory(fyr);
    Person_print(fyr);
    Person_print(cjq);
    return 0;
}
