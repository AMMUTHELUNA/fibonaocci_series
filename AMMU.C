#include<stdio.h>
#include<string.h>
#define TOTAL_RECORDS 6
#define TOTAL_FIELDS 4

char data[][4][100]=
 {
 {{"Soni"},{"soni@tinybot.com"},{"9825341275"},{"Chennai"}},
 {{"Kapil"},{"kapil@onebot.com"},{"9245368127"},{"Bangalore"}},
 {{"David"},{"david@onebot.com"},{"9625842317"},{"Delhi"}},
 {{"Minerva"},{"minerva@droid.com"},{"9134268561"},{"Mumbai"}},
 {{"Hussain"},{"hussai@tinybot.com"},{"9856231442"},{"Pune"}},
 {{"Gina"},{"gina@droid.com"},{"8952142368"},{"Goa"}}
 };
char fieldName[][100] = {"Name", "Email", "Phone", "City"};

void printData(){
 int i=0,j=0;
 for(i=0;i<TOTAL_RECORDS;i++){
 for(j=0;j<TOTAL_FIELDS;j++){
 printf("%s",data[i][j]);
 }
 printf("\n");
 }
}

void printSelectedData(){
 int i=0,j=0,n=0,flag=0;
 char selectedColumns[TOTAL_RECORDS][100];
 int selectedColumnsId[TOTAL_RECORDS];
 printf("Enter the number of columns: ");
 scanf("%d",&n);
 for(i=0;i<n;i++){
 printf("Enter the column-%d to select: ",i);
 scanf("%s",selectedColumns[i]);
 for(j=0;j<TOTAL_FIELDS;j++)
 {
 flag=0;
 if(strcmp(selectedColumns[i],fieldName[j])==0)
 {
  selectedColumnsId[i]=j;
  flag=1;
  break;
 }
 }
 if(flag==0)
 {
  printf("\n\n\tThe given column not found: %s\n",selectedColumns[i]);
  i--;
 }

 }

printf("\nSelected Columns: ");
 for(i=0;i<n;i++){
 printf("%s ",selectedColumns[i]);
 }
 printf("\n");

/* for(i=0;i<n;i++){
 for(j=0;j<TOTAL_FIELDS;j++)
 if(strcmp(selectedColumns[i],fieldName[j])==0){
 selectedColumnsId[i]=j;
 break;
 }
 }       */

 for(i=0;i<TOTAL_RECORDS;i++){
 for(j=0;j<n;j++){
 printf("%s ",data[i][selectedColumnsId[j]]);
 }
 printf("\n");
 }

}

int main()
{
 //printData();
 clrscr();
 printSelectedData();
 return 0;
}