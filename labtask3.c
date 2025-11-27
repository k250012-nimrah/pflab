#include <stdio.h>
struct Employee{
    char name[50];
    int id;
    int days_present;
};
int total_attendance(struct Employee emp[],int n){
    if(n==0)return 0;
    return emp[n-1].days_present+total_attendance(emp,n-1);
}
int main(){
    int n;
    scanf("%d",&n);
    struct Employee employees[n];
    for(int i=0;i<n;i++){
        scanf("%s %d %d",employees[i].name,&employees[i].id,&employees[i].days_present);
    }
    int min_days;
    scanf("%d",&min_days);
    printf("Total attendance: %d\n",total_attendance(employees,n));
    for(int i=0;i<n;i++){
        if(employees[i].days_present<min_days){
            printf("%s %d %d\n",employees[i].name,employees[i].id,employees[i].days_present);
        }
    }
    return 0;
}