//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>

int main() {
    char date[20];
    int d,m,y;
    char months[12][10]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    
    printf("enter date (dd/mm/yyyy): ");
    fgets(date,20,stdin);
    
    sscanf(date,"%d/%d/%d",&d,&m,&y);
    
    printf("%02d-%s-%d\n",d,months[m-1],y);
    
    return 0;
}
