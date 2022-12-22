void main()
{
int i,n,age_gap,sum,highest_age,smallest_age=0,sum1=0,count=0,diff=0;
clrscr();
printf("Total number of Children\n");
scanf("%d",&n);
printf("Age gap of Children\n");
scanf("%d",&age_gap);
printf("Total sum of ages\n");
scanf("%d",&sum);
highest_age=sum/age_gap;
for(i=1;i<n;i++){
      count=count+age_gap;
      sum1=sum1+count;
    }
      diff=sum-sum1;
      smallest_age=diff/n;
     printf("Smallest age is %d",smallest_age);
     getch();
     }