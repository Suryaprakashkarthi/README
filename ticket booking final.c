#include<stdio.h>
int booking();
int main()
{ 
 int noseat,i,sno,t1=0,opt,arr[100],amt=500;
 int arr1[100],arr2[100];
 char opt1;
 do{
 
 printf("\n\n\tPress 1 to book a ticket ");
 printf("\n\n\tPress 2 to cancel a ticket ");
 scanf("%d",&opt);
 if(opt==1){
 if(t1==0){
 for(i=0;i<100;i++)
 {   
      arr[i]=i+1;
     if((i+1)%10==1)
     
 	   printf("\n\n");
 	   printf("|%3d| ",arr[i]);
 	   t1+=1;
 }
 }
 else
 {
    	for(i=0;i<100;i++)
 {   
      arr[i]=arr2[i];
     if((i+1)%10==1)
     
 	   printf("\n\n");
 	   printf("|%3d| ",arr[i]);
 }
 }
 
 printf("\n\n\tEnter The Number of Seats ");
 scanf("%d",&noseat);
 
 for(i=0;i<noseat;i++){
       sno=booking();
       arr[sno-1]=0;
       
  }
  
 for(i=0;i<100;i++)
 {
 	arr2[i]=arr[i];
 if((i+1)%10==1)
     printf("\n\n");
    
  printf("|%3d| ",arr[i]);
 }
 printf("\n\n\t0 means sold out ");
 printf("\n\n\tTotal amount is %d",noseat*500);
}
// ticket for cancellation
else if(opt==2){
    
 for(i=0;i<100;i++)
 {   arr1[i]=arr[i];
     if((i+1)%10==1)
 	   printf("\n\n");
 
 	   printf("|%3d| ",arr1[i]);
 }
 printf("\n\n\tEnter The Number of Seats ");
 scanf("%d",&noseat);
 for(i=0;i<noseat;i++)
 {
  sno=booking();
  arr[sno-1]=sno;
  
 }
 for(i=0;i<100;i++)
 {
 if((i+1)%10==1)
     printf("\n\n");
  printf("|%3d| ",arr[i]);
 }

 printf("\n\n\t0 means sold out\n\n ");
 printf("\n\n\tTotal refund amount is %d\n\n",noseat*500);
}
    printf("\n\n\tY for continue \n\n\tN for exit");
	printf("\n\n\tDo you want to continue : ");
	fflush(stdin)
;	scanf("%c",&opt1);
 }while(opt1=='y'||opt1=='Y');
//}while(opt1==1);
}



//function for booking 
int booking()
{
 int n1;
 printf("\n\tEnter the seat no ");
 scanf("%d",&n1);
 return n1;
 

}