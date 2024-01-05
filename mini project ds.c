#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
struct node
{
    char name[50];
    int number;
    int phone;
    int q;
    int pph;
    char add[50];
    double price;
    int u;
    struct node*next;
}*head;
struct node*head1;
int main()
{
    char t;
    do
    {
        char n;
start:
        system("cls");
        system("color 0a");
        printf("\n\n\t\t\t\t\t     \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
        printf("\n\t\t\t\t\t        ELECTRICITY BILL MANAGEMENT SYSTEM                                                                                          ");
        printf("\n\n\t\t\t\t\t      \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
        printf("\n\t\t1.ADMIN LOGIN\n\n\t\t2.CUSTOMER LOGIN\n");
        printf("\n\t\tEnter your choice:");
        scanf("%s",&n);
        if(n=='1')
        {
            system("cls");
            char l;

            do
            {
                system("color 0a");
                printf("\n\n\t\t\t\t\t     \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
                printf("\n\t\t\t\t\t         ELECTRICITY BILL MANAGEMENT SYSTEM ADMIN LOGIN                                                                                        ");
                printf("\n\n\t\t\t\t\t      \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
                char p;
                int f;
                int r;
                printf("\n\nENTER THE ADMIN USERNAME:");
                scanf("%d",&r);
                printf("\nENTER THE PASSWORD:");
                scanf("%d",&f);
                if(r==5678 &&f==1234)
                {
                    char k;
                    do
                    {
                        system("cls");
                        // menu:
                        char choice;
                        printf("\n\t\t\t\t\t\t\t **************************************  ");
                        printf("\n \t\t\t\t\t\t\t   ELECTRICITY BILL MANAGEMENT SYSTEM");
                        printf("\n\t\t\t\t\t\t\t **************************************  ");
                        printf("\n\n\n*****************************************");
                        printf("\n  MAIN MENU                              *");
                        printf("\n  1. Add new customer                    *");
                        printf("\n  2. Bill Generation                     *");
                        printf("\n  3. Display bill                        *");
                        printf("\n  4. Delete bill                         *");
                        printf("\n  5. Search a Customer                   *");
                        printf("\n  6. Bills payed by customer             *");
                        printf("\n  7. EXIT from Admin login               *");
                        printf("\n  8. Exit                                *");
                        printf("\n *****************************************");
                        printf("\n Enter your choice:");
                        scanf("%s",&choice);
                        switch(choice)
                        {
                        case '1':
                        {
                            system("cls");
                            printf("\n\t\t\t\tEnter the customer details to add account!\n");
                            add_customer();
                            break;
                        }
                        case '2':
                            system("cls");
                            printf("\n\t\t\t\t\t  Enter the Details to generate electricity bill!\n");
                            printf("\t\t\t\t\t *************************************************  ");
                            generate_bill();
                            break;
                        case '3':
                            system("cls");
                            display();
                            break;
                        case '4':
                            system("cls");
                            delete_bill();
                            break;
                        case '5':
                            system("cls");
                            search();

                            break;
                        case '6':
                            system("cls");
                            billpayed();
                            break;
                        case '7':
                        {
                            system("cls");
                            goto start;
                            break;
                        }
                        case '8':
                        {
                            system("cls");
                            goto end;
                            break;
                        }
                        default:
                        {
                            printf("\n\n  Invalid Choice...!");
                        }
                        }

                        printf("\n\nPress any key to go to main menu or press 6 to exit:");
                        scanf("%s",&k);
                        system("cls");
                    }
                    while(k!='6');
                }
                else
                {
                    printf("\nINVALID USERNAME OR PASSWORD\n\n");
                }
                system("PAUSE");
                printf("\n \nPRESS 4 TO RETRY OR PRESS ANY KEY TO EXIT FROM PROGRAM:");
                scanf("%s",&l);
                system("CLS");

            }
            while(l=='4');
        }
        else if(n=='2')
        {
            system("cls");
            char l;
            do
            {
                system("CLS");
                system("color 0a");
                printf("\n\n\t\t\t\t\t     \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
                printf("\n\t\t\t\t\t        ELECTRICITY BILL MANAGEMENT SYSTEM CUSTOMER LOGIN                                                                                        ");
                printf("\n\n\t\t\t\t\t      \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
                char p;
                int f;
                int r;
                printf("\n\nENTER THE CUSTOMER USERNAME:");
                scanf("%d",&r);
                printf("\nENTER THE CUSTOMER PASSWORD:");
                scanf("%d",&f);
                if(r==5678 &&f==1234)
                {

                    char k;
                    system("cls");

                    do
                    {
                        printf("\n\t\t\t\t\t\t\t **************************************  ");
                        printf("\n \t\t\t\t\t\t\t   ELECTRICITY BILL MANAGEMENT SYSTEM");
                        printf("\n\t\t\t\t\t\t\t **************************************  ");
                        int i;
                        printf("\n\n\n*****************************************");
                        printf("\n  MAIN MENU                              *");
                        printf("\n 1. Show Electricity bill                *");
                        printf("\n 2. Pay Electricity bill                 *");
                        printf("\n 3. Exit from user login                 *");
                        printf("\n 4. Exit                                 *");
                        printf("\n*****************************************");
                        printf("\n Enter your choice:");
                        scanf("%d",&i);
                        if(i==1)
                        {
                            system("cls");
                            printf("\n\t\t\t\t\t  Enter the Details to generate electricity bill!\n");
                            printf("\n\t\t\t\t\t  ---------------------------------------------------\n");
                            bill();
                        }
                        else if(i==2)
                        {
                            pay();
                        }
                        else if(i==3)
                        {
                            goto start;
                        }
                        else if(i==4)
                        {
                            goto end;
                        }
                        else
                        {
                            printf("INVALID ENTRY");
                        }
                        printf("\n\nPress any key to go to main menu or press 6 to exit:");
                        scanf("%s",&k);
                        system("cls");
                    }
                    while(k!='6');
                }
                else
                {
                    printf("\nINVALID USERNAME OR PASSWORD\n\n");
                }
                system("PAUSE");
                printf("\n \nPRESS 4 TO RETRY OR PRESS ANY KEY TO EXIT FROM PROGRAM:");
                scanf("%s",&l);
            }
            while(l=='4');
            system("CLS");

        }
        else
        {

            printf("\n\t\tINVALID INPUT\n");
        }
end:

        printf("\n\nPRESS ANY KEY TO CONTINUE OR 7 TO EXIT");
        scanf("%s",&t);
    }
    while(t!='7');
    printf("\n\tThank you");
}
void add_customer()
{
    //start:
    char ch;
    char u;
    int   f=0;
    char n[30];
    char address[50];
    double  price;
    long long int num;
    long long int phnnum;
    struct node* ptr;
    struct node* temp;
    // head=(struct node*)malloc(sizeof (struct node));
    ptr=(struct node*)malloc(sizeof (struct node));
    printf("\n\n\tEnter Customer Name:");
    fflush(stdin);
    gets(n);
    strcpy(ptr->name,n);
    printf("\n\n\tEnter Customer Address:");
    fflush(stdin);
    gets(address);
    strcpy(ptr->add,address);
    printf("\n\n\tEnter Consumer Number:");
    scanf("%lld",&num);
    ptr->number=num;
    printf("\n\n\tEnter Phone Number: ");
    scanf("%lld",&phnnum);
    ptr->phone=phnnum;
    ptr->u=0;
    if(head==NULL)
    {
        head=ptr;
        ptr->next=NULL;
    }
    else
    {
        temp=head;
        while(temp->number!=num&&temp->next!=NULL)
        {
            temp=temp->next;
        }
        if(temp->number==num)
        {
            printf("\n\nCustomer with same consumer number exit!");
            printf("\n\n press 8 to add customer details again or press 6 to go to main menu or press any key to exit");
            scanf("%s",&u);
            if(u=='8')
            {
                add_customer();
                system("cls");
            }
            else if(u=='6')
            {
                main();
                system("cls");
            }
            else
            {
                exit(0);
            }
            // break;

        }
        else
        {
            ptr->next=head;
            head=ptr;
        }


    }
}
void display()
{
    int k=0;
    printf(" \n\t\t\t\t\t\t\tCustomer details ");
    printf("\n\t\t\t\t\t\t\t*****************\n");
    struct node *temp;
    temp=head;
    if(temp==NULL)
    {
        printf("\n\n\tNo customer information is available!\n");
    }
    while(temp!=NULL)
    {
        k++;
        printf("\n\n\t Customer information %d is:",k);
        printf("\n\t-------------------------------\n");
        printf("\n\n\t Customer Name:%s",temp->name);
        printf("\n\n\t Customer Address is:%s",temp->add);
        printf("\n\n\t Consumer Number:%lld",temp->number);
        printf("\n\n\t Phone Number:%lld\n\n",temp->phone);
        temp=temp->next;
    }
}
void delete_bill()
{
    int f=0;
    long long int j;
    struct node *temp;
    struct node *save;
    printf("\n\t\t\t\t *************************************************  ");
    printf("\n\t\t\t \t   Delete Consumer Account!\n");
    printf("\t\t\t\t *************************************************  ");
    printf("\n\nEnter the consumer number to delete the account:");
    scanf("%lld",&j);
    if(head==NULL)
    {
        printf("\n\nInvalid customer consumer number or no information is available");
    }
    else
    {
        temp=head;
        while(temp->number!=j&&temp->next!=NULL)
        {
            f++;
            save=temp;
            temp=temp->next;
        }
        if(f==0)
        {
            if(head->number==j)
            {
                head=head->next;
                printf("\nCustomer Data has been Deleted!\n");
            }
            else
            {
                printf("\nInvalid customer consumer number");
            }
        }


        else if(temp->number==j)
        {
            printf("customer details has been deleted!");
            save->next=temp->next;
            free(temp);
        }
        else
        {
            printf("\n\n\tInvalid customer consumer number");
        }
    }
}
void generate_bill()
{
    int f=0;
    int i=0;
    char k;
    long long int j;
    char s[79];
    double p;
    struct node *temp;
    struct node *save;
    printf("\n\n\tEnter the consumer number of the customer:");
    scanf("%lld",&j);
    temp=head;
    if(head!=NULL)
    {
        while(temp->number!=j &&temp->next!=NULL)
        {
            temp=temp->next;
        }
        if(temp->number==j)
        {
            i++;
            printf("\n\tEnter the unit of the electricity:");
            scanf("%lf",&p);
            temp->price=p*7;
            temp->q=p;
            temp->u=i;
            printf("\n\n\tDetail information of the customer is:");
            printf("\n\n\t Customer Name:%s",temp->name);
            printf("\n\n\t Consumer consumer Number:%lld",temp->number);
            printf("\n\n\t Customer Address is:%s",temp->add);
            printf("\n\n\t Phone Number:%lld",temp->phone);
            printf("\n\n\t Unit taken by the customer:%lld",temp->q);
            printf("\n\n\t Amount wanted to pay by the customer is:%lf",temp->price);
        }
        else
        {
            printf("\n\n\tINVALID CONSUMER NUMBER");
        }
    }
    else
    {
        printf("\n\n NO INFORMATION AVAILABLE IN THIS CONSUMER NUMBBER!");
    }
}
void search()
{
    printf(" \n\t\t\t\t\t\t\tCustomer details ");
    printf("\n\t\t\t\t\t\t\t----------------\n");
    int f=0;
    char k;
    long long int j;
    struct node *temp;
    struct node *save;
    printf("\n\n\tEnter the consumer number to search he customer:");
    scanf("%lld",&j);
    temp=head;
    if(temp==NULL)
    {
        printf("\n\n\tNO information is available");
    }
    else if(temp!=NULL)
    {
        while(temp->number!=j &&temp->next!=NULL)
        {
            temp=temp->next;
        }
        if(temp->number==j)
        {
            printf("\n\tCustomer Information is");
            printf("\n\t------------------------");
            printf("\n\n\t Customer Name:%s",temp->name);
            printf("\n\n\t Customer Address is:%s",temp->add);
            printf("\n\n\t Consumer Number:%lld",temp->number);
            printf("\n\n\t Phone Number:%lld\n\n",temp->phone);
            temp=temp->next;
        }
        else
        {
            printf("\n\n\tINVALID CONSUMER NUMBER");
        }

    }
    else

    {
        printf("Invalid consumer number");
    }
}
void bill()
{
    int f=0;
    char k;
    long long int j;
    char s[79];
    double p;
    struct node *temp;
    struct node *save;
    printf("\n\n\tEnter the consumer number of the customer:");
    scanf("%lld",&j);
    temp=head;
    if(head!=NULL)
    {
        while(temp->number!=j &&temp->next!=NULL)
        {
            temp=temp->next;
        }
        if(temp->number==j && temp->u!=0)
        {
            printf("\n\n\tDetail information of the customer is:");
            printf("\n\n\t Customer Name:%s",temp->name);
            printf("\n\n\t Consumer consumer Number:%lld",temp->number);
            printf("\n\n\t Customer Address is:%s",temp->add);
            printf("\n\n\t Phone Number:%lld",temp->phone);
            printf("\n\n\t Unit taken by the customer:%lld",temp->q);
            printf("\n\n\t Amount wanted to pay by the customer is:%lf",temp->price);
        }
        else
        {
            printf("\n\t ELECTRICITY BILL IS NOT GENERATED! ");
        }
    }
    else
    {
        printf("\n NO INFORMATION AVAILABLE IN THIS CONSUMER NUMBBER!");
    }
}
void pay()
{
    int f=0;
    char k;
    long long int j;
    char s[79];
    double p;
    struct node *temp;
    struct node *ptr;
    ptr=(struct node*)malloc(sizeof (struct node));
    printf("\n\n\tEnter the consumer number of the customer:");
    scanf("%lld",&j);
    temp=head;
    if(head!=NULL)
    {
        while(temp->number!=j &&temp->next!=NULL)
        {
            temp=temp->next;
        }
        if(temp->number==j && temp->u!=0)
        {
            double amount;
            long long int k;
            printf("\n\n\t Customer Name:%s",temp->name);
            printf("\n\n\t Consumer consumer Number:%lld",temp->number);
            printf("\n\n\t Unit taken by the customer:%lld",temp->q);
            printf("\n\n\t Amount wanted to pay by the customer is:%lf",temp->price);
            if(temp->price>0)
            {
                f++;
                ptr->u=f;
                printf("\n\n\t Enter Amount to pay:");
                scanf("%lf",&amount);
                strcpy(ptr->name,temp->name);
                ptr->number=temp->number;
                ptr->q=temp->q;
                ptr->phone=temp->phone;
                printf("\n\n\t Successfully payed amount!\n");
                temp->price=temp->price-amount;
                ptr->price=amount;
                k=temp->price;
                ptr->pph=k;
                if(head1==NULL)
                {

                    head1=ptr;
                    ptr->next=NULL;

                }
                else
                {
                    ptr->next=head1;
                    head1=ptr;
                }
            }
        }
        else
        {
            printf("\n\t ELECTRICITY BILL IS NOT GENERATED! ");
        }
    }

    else
    {
        printf("\n NO INFORMATION AVAILABLE IN THIS CONSUMER NUMBBER!");
    }
}
void billpayed()
{
    printf("\n\n\t\t\tElectricity Bills payed by the customer is:");
    printf("\n\t\t\t-------------------------------------------\n");
    if(head1==NULL)
    {

        printf("\n\n\t\tNO customer payed the bill!");
    }
    else
    {
        struct node *temp;
        temp=head1;
        while(temp!=NULL)
        {
            printf("\n\n\t Information of the customer");
            printf("\n\t-----------------------------\n");
            printf("\n\n\t Customer Name:%s",temp->name);
            printf("\n\n\t Consumer consumer Number:%lld",temp->number);
            printf("\n\n\t Phone Number:%lld",temp->phone);
            printf("\n\n\t Unit taken by the customer:%lld",temp->q);
            printf("\n\n\t Amount  payed by the customer is:%lf",temp->price);
            printf("\n\n\t Balance Amount wanted to  payed by the customer is:%lld\n\n",temp->pph);
            temp=temp->next;
            system("pause");
        }
    }
}
