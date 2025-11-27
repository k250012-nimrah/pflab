#include <stdio.h>
#include <string.h>
struct Forecast{
    char color[20];
    int number;
    char advice[100];
};
struct User{
    char name[50];
    int day,month,year;
    char zodiac[20];
    struct Forecast forecast;
};
void assign_zodiac(struct User *user){
    if((user->month==3&&user->day>=21)||(user->month==4&&user->day<=19))
        strcpy(user->zodiac,"Aries");
    else if((user->month==4&&user->day>=20)||(user->month==5&&user->day<=20))
        strcpy(user->zodiac,"Taurus");
    else
        strcpy(user->zodiac,"Other");
}
void display_horoscope(struct User user){
    printf("Name: %s\n",user.name);
    printf("Zodiac: %s\n",user.zodiac);
    printf("Lucky Color: %s\n",user.forecast.color);
    printf("Lucky Number: %d\n",user.forecast.number);
    printf("Advice: %s\n",user.forecast.advice);
}
int main(){
    int n;
    scanf("%d",&n);
    struct User users[n];
    for(int i=0;i<n;i++){
        scanf("%s %d %d %d",users[i].name,&users[i].day,&users[i].month,&users[i].year);
        assign_zodiac(&users[i]);
        scanf("%s %d %s",users[i].forecast.color,&users[i].forecast.number,users[i].forecast.advice);
    }
    for(int i=0;i<n;i++){
        display_horoscope(users[i]);
    }
    return 0;
}