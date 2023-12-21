#include<stdio.h>
int main()
{
	char name[50];
	int phone_number;
	int customer_id;
	
	int body_soap;
	int hair_cream;
	int hair_spray;
	int body_spary;
	
	int sugar;
	int tea;
	int coffee;
	int rice;
	int wheat;
	
	int pepsi;
	int sprite;
	int coke;
	int mojitos;
	int thumbs_up;
	
	int total;
	int cosmetices_total;
	int grocery_total;
	int beverage_total;
	
	printf("-------------------\n");
	printf("BILLING SYSTEM\n");
	printf("-------------------\n\n");
	printf("Customer details:\n\n");
	printf("enter the customer name:");
	scanf("%s",&name);
	printf("enter the phone number:");
	scanf("%d",&phone_number);
	printf("enter the customer id:");
	scanf("%d",&customer_id);
	printf("-------------------\n\n");
	
	printf("COSEMETICES\n\n");
	printf("Body soap (RS 10):");
	scanf("%d",&body_soap);
	printf("HAIR CREAM(RS 25):");
	scanf("%d",&hair_cream);
	printf("HAIR SPRAY( RS 50):");
	scanf("%d",&hair_spray);
	printf("BODY SPRAY ( RS 50):");
	scanf("%d",&body_spary);
	
	printf("-------------------\n\n");
	
	printf("GROCERTICS\n\n");
	printf("SUGAR (RS 100):");
	scanf("%d",&sugar);
	printf("TEA (RS 15):");
	scanf("%d",&tea);
	printf("COFFEE ( RS 50):");
	scanf("%d",&coffee);
	printf("RICE ( RS 150):");
	scanf("%d",&rice);
	printf("WHEAT ( RS 160):");
	scanf("%d",&wheat);
	
	
	printf("-------------------\n\n");
		
	printf("BEVERAGE\n\n");
	printf("PEPSI (RS 30):");
	scanf("%d",&pepsi);
	printf("SPRITE (RS 75):");
	scanf("%d",&tea);
	printf("COKE ( RS 50):");
	scanf("%d",&coffee);
	printf(" MOIJITOS ( RS 25):");
	scanf("%d",&mojitos);
	printf("THUMBS UP( RS 35 ): ");
	scanf("%d",&thumbs_up);
	
	printf("-------------------\n\n");
	
	int boso;
	int hc;
	int hs;
	int bosp;
	
	boso = 10*body_soap;
	hc = 25*hair_cream;
	hs=50*hair_spray;
	bosp=50*body_spary;
	
	cosmetices_total=boso+hc+hs+bosp;
	
	printf("BODY SOAP:\n");
	printf("%d RS\n",boso);
	printf("HAIR CREAM:\n");
	printf("%d RS\n",hc);
	printf("HAIR SPRAY:\n");
	printf(" %d  RS\n", hs);
	printf("BODY SPRAY:\n");
	printf("%d RS\n",bosp);
	printf("total cosmetices :\n");
	printf("%d RS\n",cosmetices_total);
	
	printf("-------------------\n\n");
	
	int s;
	int t;
	int c;
	int r;
	int w;
	
	
	s= 100*sugar;
	t=15*tea;
	c=50* coffee;
	r=150*rice;
	w=100*wheat;
	
	grocery_total=s+t+c+r+w;
	
	printf("sugar:\n");
	printf("%d RS\n",s);
	printf("tea:\n");
	printf("%d RS\n",t);
	printf("coffee:\n");
	printf(" %d  RS\n",c);
	printf("rice:\n");
	printf("%d RS\n",r);
	printf("wheat:\n");
	printf("%d RS\n",w);
	printf("GROCERY TOTAL:\n");
	printf("%d RS\n",grocery_total);
	
	
	printf("-------------------\n\n");
	
	int pep;
	int spr;
	int cok;
	int moj;
	int thu;
	
	pep =30*pepsi;
	spr=35*sprite;
	cok=30*coke;
	moj=25*mojitos;
	thu=35*thumbs_up;
	
	beverage_total =pep+spr+cok+moj+thumbs_up;
	
	printf("pepsi:\n");
	printf("%d RS\n",pep);
	printf("sprite:\n");
	printf("%d RS\n",spr);
	printf("coke:\n");
	printf(" %d  RS\n",cok);
	printf("mojitos:\n");
	printf("%d RS\n",moj);
	printf("thumbs_up:\n");
	printf("%d RS\n",thu);
	printf("BEVRAGE TOTAL :\n");
	printf("%d RS\n",beverage_total);
	
	printf("-------------------\n\n");
	total =cosmetices_total+grocery_total+beverage_total;
	
	printf("total amount: ");
	printf("%d RS\n",total);
	
	printf("-------------------\n\n");
	
	printf("-------------------\n\n");
	
	printf("********ANU SUPER MARKET***********\n\n");
	
	printf("enter the customer name:\n");
	printf("%s\n\n",name);
	printf("enter the phone number:\n");
	printf("%d\n\n",phone_number);
	printf("enter the customer id:\n");
	printf("%d\n\n",customer_id);
	
	printf("----------------------------------------------------------------------------------------------------------------------------------\n\n");
	
	printf(" prooduct                                quanity                                                   price \n\n");
	printf("BODY SOAP                                 %d                                                       %d\n",body_soap,boso);
	printf("HAIR CREAM                                %d                                                       %d\n",hair_cream,hc);
	printf("HAIR SPRAY                                %d                                                       %d\n",hair_spray,hs);
	printf("BODY SPRAY                                %d                                                       %d\n",body_spary,bosp);
	printf("SUGAR                                     %d                                                       %d\n",sugar,s);
	printf("TEA                                       %d                                                       %d\n",tea,t);
	printf("COFFEE                                    %d                                                       %d\n",coffee,c);
	printf("RICE                                      %d                                                       %d\n",rice,r);
	printf("WHEAT                                     %d                                                       %d\n",wheat,w);
	printf("PEPSI                                     %d                                                       %d\n",pepsi,pep);
	printf("SPRITE                                    %d                                                       %d\n",sprite,spr);
	printf("COKE                                      %d                                                       %d\n",coke,cok);
	printf("MOJITOS                                   %d                                                       %d\n",mojitos,moj);
	printf("THUMBUS UP                                %d                                                       %d\n",thumbs_up,thu);
	
	printf("grocery total price:%d\n\n",grocery_total);
	
	printf("cosmetic total price:%d\n\n",cosmetices_total);
	
	printf("Bevrage  total price:%d\n\n",beverage_total);
	
	
	printf("Total price:%d\n\n",total);
	
	printf("----------------------------------------------------------------------------------------------------------------------------------\n\n");






}
