#include<stdio.h>
struct patient
{
  int age;
  char name[30];
  int phone_number;
  char blood[3];
  char gender[3];
  float expenses;
  int refid;
  char enterdate[10];
  char recoverydate[10];
  
};
int main()
{
  struct patient pat[10];
  int i,n,r;
  printf("Enter the number of patients\n");
  scanf("%d",&n);
  for(i=0; i<n; i++)
    {
      printf("patient no %d\n",i+1);
      printf("Enter age :");
      scanf("%d", &pat[i].age);
      printf("Enter name :");
      scanf("%s",pat[i].name);
       printf("Enter phone number :");
      scanf("%d", &pat[i].phone_number);
      printf("enter the gender:");
      scanf("%s",&pat[i].gender);
      printf("enter blood group:");
      scanf("%s",pat[i].blood);
      printf("Enter expenses for patient :");
      scanf("%f", &pat[i].expenses);
      printf("Enter refernce id :");
      scanf("%d", &pat[i].refid);
      printf("Entering date into quarantine:");
      scanf("%s", pat[i].enterdate);
      printf("leaving date from quarantine :");
      scanf("%s", pat[i].recoverydate); 
    }
  for(i=0; i<n; i++)
    {
      printf("patient %d\n",i+1);
      printf("Age. : %d\n", pat[i].age);
      printf("Name : %s\n", pat[i].name);
      printf("refid: %d\n",pat[i].refid);
      printf("Gender: %d\n",pat[i].gender);
      printf("Phone no. : %d\n", pat[i].phone_number);
      printf("Blood group: %s\n",pat[i].blood);
      printf("total expenses: %f\n",pat[i].expenses);
      printf("entered date: %s\n",pat[i].enterdate);
      printf("recovered date: %s\n",pat[i].recoverydate);
    }
     printf("enter the reference id");
     scanf("%d",&r);
     for(i=0;i<n;i++)
     {
     	if(r==pat[i].refid)
     	{
     	printf("patient %d\n",i+1);
        printf("Age. : %d\n", pat[i].age);
        printf("Name : %s\n", pat[i].name);
        printf("refid: %d\n",pat[i].refid);
        printf("Gender: %d\n",pat[i].gender);
        printf("Phone no. : %d\n", pat[i].phone_number);
        printf("Blood group: %s\n",pat[i].blood);
        printf("total expenses: %f\n",pat[i].expenses);
        printf("entered date: %s\n",pat[i].enterdate);
        printf("recovered date: %s\n",pat[i].recoverydate);
	  	break;
		 }
		 else
		 printf("Entered reference id not found");
	 }
  return 0;
}  
