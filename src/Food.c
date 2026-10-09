#include<stdio.h>
#include<string.h>
int main() {
  
    int n,t,t1,t2,s1,q1,s2,k;
    int v1=500,c1=700,v2=400,c2=600,v3=300,c3=200,v4=800,c4=900;
    char a[100];
    printf("Please Select the hotel... ");
    printf("\n1.SVM GRAND \n2.TULIPS GRAND \n3.PARADISE \n4.SRI SAMPOORNA HOTEL");
    printf("\nEnter an Hotel number: ");
    scanf("%d", &n);
    switch(n)
    {
        case 1:
            printf("\n-----------MENU-------------");
            printf("\n1.Veg Biryani : 500 \n2.Chicken Biryani : 700");
            printf("\nEnter the Dish Number: ");
            scanf("%d",&s1);
			if(s1==1)
			{
				printf("\nEnter the quantity: ");
				scanf("%d",&q1);
				printf("Price of the Veg Biryani for %d packs: %d",q1,q1*v1);
				t1=q1*v1;
			//printf("\nORDER PLACED...   \nAdress: 8-130,sai nagar colony,medipally  \nOrder will be there in 15 minutes");
			}
			else if(s1==2)
			{
				printf("\nEnter the quantity: ");
				scanf("%d",&q1);
				printf("Price of the Chicken Biryani for %d packs:: %d",q1,q1*c1);
				t1=q1*c1;
		//	printf("\nORDER PLACED...   \nAdress: 8-130,sai nagar colony,medipally  \nOrder will be there in 15 minutes");
			}
			else
			{
				printf("\nEnter the Valid Items");
			}
			
			printf("\nEnter the number for another item (1 for order),(0 for exit): ");
			scanf("%d",&k);
			if(k==1)
			{
			printf("\nEnter the Dish Number: ");
            scanf("%d",&s2);
            if(s2==1)
			{
				printf("\nEnter the quantity: ");
				scanf("%d",&q1);
				printf("Price of the Veg Biryani for %d packs:: %d",q1,q1*v1);
				t2=q1*v1;
			}
			else if(s2==2)
			{
				printf("\nEnter the quantity: ");
				scanf("%d",&q1);
				printf("Price of the Chicken Biryani for %d packs:: %d",q1,q1*c1);
				t2=q1*c1;
			}
			else
			{
				printf("\nTHANKYOU FOR ORDERING");
			}
		}
		t=t1+t2;
		printf("\nTotal Price of Order: %d",t); 	 
		printf("\nEnter the Address: ");
		scanf("%s",a);
		printf("\nORDER PLACED \nTHANKYOU FOR ORDERING  \nOrder will be there in 15 minutes");
           break; 
        case 2:
        	printf("\n-----------MENU-------------");
            printf("\n1.Veg Biryani : 400 \n2.Chicken Biryani : 600");
            printf("\nEnter the Dish Number: ");
            scanf("%d",&s1);
			if(s1==1)
			{
				printf("\nEnter the quantity: ");
				scanf("%d",&q1);
				printf("Price of the Veg Biryani for %d packs: %d",q1,q1*v2);
				t1=q1*v2;
			//printf("\nORDER PLACED...   \nAdress: 8-130,sai nagar colony,medipally  \nOrder will be there in 15 minutes");
			}
			else if(s1==2)
			{
				printf("\nEnter the quantity: ");
				scanf("%d",&q1);
				printf("Price of the Chicken Biryani for %d packs: %d",q1,q1*c2);
				t1=q1*c2;
			//	printf("\nORDER PLACED...   \nAdress: 8-130,sai nagar colony,medipally  \nOrder will be there in 15 minutes");
			}
			else
			{
				printf("\nEnter the Valid Items");
			}
			printf("\nEnter the number for another item (1 for order),(0 for exit): ");
			scanf("%d",&k);
			if(k==1)
			{
			printf("\nEnter the Dish Number: ");
            scanf("%d",&s2);
            if(s2==1)
			{
				printf("\nEnter the quantity: ");
				scanf("%d",&q1);
				printf("Price of the Veg Biryani for %d packs: %d",q1,q1*v2);
				t2=q1*v2;
			}
			else if(s2==2)
			{
				printf("\nEnter the quantity: ");
				scanf("%d",&q1);
				printf("Price of the Chicken Biryani for %d packs: %d",q1,q1*c2);
				t2=q1*c2;
			}
			else
			{
				printf("\nTHANKYOU FOR ORDERING");
			}
		}
			t=t1+t2;
		printf("\ntotal price of the order: %d",t); 
		printf("\nEnter the Address: ");
		scanf("%s",a);
		printf("\nORDER PLACED \nTHANKYOU FOR ORDERING  \nOrder will be there in 15 minutes");
           break;
		   	
        case 3:
		    printf("\n-----------MENU-------------");
            printf("\n1.Veg Biryani : 300 \n2.Chicken Biryani : 200");
            printf("\nEnter the Dish Number: ");
            scanf("%d",&s1);
			if(s1==1)
			{
				printf("\nEnter the quantity: ");
				scanf("%d",&q1);
				printf("Price of the Veg Biryani for %d packs: %d",q1,q1*v3);
				t1=q1*v3;
		//	printf("\nORDER PLACED...   \nAdress: 8-130,sai nagar colony,medipally  \nOrder will be there in 15 minutes");
			}
			else if(s1==2)
			{
				printf("\nEnter the quantity: ");
				scanf("%d",&q1);
				printf("Price of the Chicken Biryani for %d packs: %d",q1,q1*c3);
				t1=q1*c3;
			
			}
			else
			{
				printf("\nEnter the Valid Items");
			}
			
			printf("\nEnter the number for another item (1 for order),(0 for exit): ");
			scanf("%d",&k);
			if(k==1)
			{
			printf("\nEnter the Dish Number: ");
            scanf("%d",&s2);
            if(s2==1)
			{
				printf("\nEnter the quantity: ");
				scanf("%d",&q1);
				printf("Price of the Veg Biryani for %d packs: %d",q1,q1*v3);
				t2=q1*v3;
			}
			else if(s2==2)
			{
				printf("\nEnter the quantity: ");
				scanf("%d",&q1);
				printf("Price of the Veg Biryani for %d packs: %d",q1,q1*c3);
				t2=q1*c3;
			}
			else
			{
				printf("\nTHANKYOU FOR ORDERING");
			}
		}
            t=t1+t2;
		printf("\ntotal price of the order: %d",t); 
		printf("\nEnter the Address: ");
		scanf("%s",a);
		printf("\nORDER PLACED \nTHANKYOU FOR ORDERING  \nOrder will be there in 15 minutes"); 
           break;	
        case 4:
        	printf("\n-----------MENU-------------");
            printf("\n1.Veg Biryani : 800 \n2.Chicken Biryani : 900");
            printf("\nEnter the Dish Number: ");
            scanf("%d",&s1);
			if(s1==1)
			{
				printf("\nEnter the quantity: ");
				scanf("%d",&q1);
				printf("Price of the Veg Biryani for %d packs: %d",q1,q1*v4);
				t1=q1*v4;
			//	printf("\nORDER PLACED...   \nAdress: 8-130,sai nagar colony,medipally  \nOrder will be there in 15 minutes");
			}
			else if(s1==2)
			{
				printf("\nEnter the quantity: ");
				scanf("%d",&q1);
				printf("Price of the Veg Biryani for %d packs: %d",q1,q1*c4);
				t1=q1*c4;
			//	printf("\nORDER PLACED...   \nAdress: 8-130,sai nagar colony,medipally  \nOrder will be there in 15 minutes");
			}
			else
			{
				printf("\nEnter the Valid Items");
			}
			printf("\nEnter the number for another item (1 for order),(0 for exit): ");
			scanf("%d",&k);
			if(k==1)
			{
			printf("\nEnter the Dish Number: ");
            scanf("%d",&s2);
            if(s2==1)
			{
				printf("\nEnter the quantity: ");
				scanf("%d",&q1);
				printf("Price of the Veg Biryani for %d packs: %d",q1,q1*v4);
				t2=q1*v4;
			}
			else if(s2==2)
			{
				printf("\nEnter the quantity: ");
				scanf("%d",&q1);
				printf("Price of the Chicken Biryani for %d packs: %d",q1,q1*c4);
				t2=q1*c4;
			}
			else
			{
				printf("\nTHANKYOU FOR ORDERING");
			}
		}
            t=t1+t2;
		printf("\ntotal price of the order: %d",t); 
		printf("\nEnter the Address: ");
		scanf("%s",a);
		printf("\nORDER PLACED \nTHANKYOU FOR ORDERING  \nOrder will be there in 15 minutes");
           break;  	
        default:
            printf("Invalid Input");
    }
    return 0;
}
