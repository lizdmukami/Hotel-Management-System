#include<iostream>
using namespace std;

int main()
{
    int quant;
    int choice;
    //Quantity
    int Qrooms=0, Qpasta=0, Qburger=0, Qnoodles=0, Qshake=0, Qchicken=0;
    //food items sold
    int Srooms=0, Spasta=0, Sburger=0, Snoodles=0, Sshake=0, Schicken=0;
    //total price of items
    int Total_rooms=0, Total_pasta=0, Total_burger=0, Total_noodles=0, Total_shake=0, Total_chicken=0;

    cout<<"\n\t Quantity of Items we have";
    cout<<"\n Rooms available :";
    cin>>Qrooms; 
    cout<<"\n Quantity of Pasta :";
    cin>>Qpasta; 
    cout<<"\n Quantity of Burger available :";
    cin>>Qburger; 
    cout<<"\n Quantity of Noodles available :";
    cin>>Qnoodles; 
    cout<<"\n Quantity of Shake available :";
    cin>>Qshake; 
    cout<<"\n Quantity of Chicken-roll :";
    cin>>Qchicken; 

    m:
    cout<<"\n\t\t\t Please select from the given menu options ";
    cout<<"\n\n1) Rooms";
    cout<<"\n2) Pasta";
    cout<<"\n3) Burger";
    cout<<"\n4) Noodles";
    cout<<"\n5) Shake";
    cout<<"\n6) Chicken-roll";
    cout<<"\n7) Information regarding sales and collection";
    cout<<"\n8) Exit";

    cout<<"\n\n Please Enter your choice! ";
    cin>>choice;

    switch (choice)
    {
    case 1:
        cout<<"\n\n Enter the number of rooms you want: ";

        cin>>quant;
        if(Qrooms-Srooms >= quant)
        {
            Srooms=Srooms+quant;
            Total_rooms= Total_rooms+quant* 1200;
            cout<<"\n\n\t\t"<<quant<<"room/rooms have been alloted to you!";

        }
        else
            cout<<"\n\tOnly"<<Qrooms-Srooms<<" Rooms Remaining in the hotel";
            break;
        
    case 2:
        cout<<"\n\n Enter Pasta Quantity: ";

        cin>>quant;
        if(Qpasta-Spasta >= quant)
        {
            Spasta=Spasta+quant;
            Total_pasta= Total_pasta+quant* 250;
            cout<<"\n\n\t\t"<<quant<<"pasta ordered!";

        }
        else
            cout<<"\n\tOnly"<<Qpasta-Spasta<<" Pasta Remaining in the hotel";
            break;
        
    case 3:
        cout<<"\n\n Enter Burger Quantity: ";

        cin>>quant;
        if(Qburger-Sburger >= quant)
        {
            Sburger=Sburger+quant;
            Total_burger= Total_burger+quant* 120;
            cout<<"\n\n\t\t"<<quant<<"burger ordered!";

        }
        else
            cout<<"\n\tOnly"<<Qburger-Sburger<<" Burger Remaining in the hotel";
            break;

    case 4:
        cout<<"\n\n Enter Noodles Quantity: ";

        cin>>quant;
        if(Qnoodles-Snoodles >= quant)
        {
            Snoodles=Snoodles+quant;
            Total_noodles= Total_noodles+quant* 140;
            cout<<"\n\n\t\t"<<quant<<"Noodles ordered!";

        }
        else
            cout<<"\n\tOnly"<<Qnoodles-Snoodles<<" Noodles Remaining in the hotel";
            break;
        
    case 5:
        cout<<"\n\n Enter Shake Quantity: ";

        cin>>quant;
        if(Qshake-Sshake >= quant)
        {
            Sshake=Sshake+quant;
            Total_shake= Total_shake+quant* 120;
            cout<<"\n\n\t\t"<<quant<<"shake ordered!";

        }
        else
            cout<<"\n\tOnly"<<Qshake-Sshake<<" Shakes Remaining in the hotel";
            break;

    case 6:
        cout<<"\n\n Enter Chicken-roll Quantity: ";

        cin>>quant;
        if(Qchicken-Schicken >= quant)
        {
            Schicken=Schicken+quant;
            Total_chicken= Total_chicken+quant* 150;
            cout<<"\n\n\t\t"<<quant<<"Chicken-roll ordered!";

        }
        else
            cout<<"\n\tOnly"<<Qchicken-Schicken<<" Chicken-roll Remaining in the hotel";
            break;
    case 7:
        cout<<"\n\t\tDetails of Sales and Collection ";
        cout<<"\n\nNumber of Rooms we had : "<<Qrooms;
        cout<<"\n\nNumber of Rooms we gave out : "<<Srooms;
        cout<<"\n\nRooms Remaining : "<<Qrooms-Srooms;
        cout<<"\n\nTotal Rooms Collection for the day : "<<Total_rooms;

        cout<<"\n\nNumber of Pasta we had : "<<Qpasta;
        cout<<"\n\nNumber of Pasta we gave out : "<<Spasta;
        cout<<"\n\nRooms Remaining : "<<Qpasta-Spasta;
        cout<<"\n\nTotal Rooms Collection for the day : "<<Total_pasta;

        cout<<"\n\nNumber of Rooms we had : "<<Qburger;
        cout<<"\n\nNumber of Rooms we gave out : "<<Sburger;
        cout<<"\n\nRooms Remaining : "<<Qburger-Sburger;
        cout<<"\n\nTotal Rooms Collection for the day : "<<Total_burger;

        cout<<"\n\nNumber of Rooms we had : "<<Qnoodles;
        cout<<"\n\nNumber of Rooms we gave out : "<<Snoodles;
        cout<<"\n\nRooms Remaining : "<<Qnoodles-Snoodles;
        cout<<"\n\nTotal Rooms Collection for the day : "<<Total_noodles;

        cout<<"\n\nNumber of Rooms we had : "<<Qshake;
        cout<<"\n\nNumber of Rooms we gave out : "<<Sshake;
        cout<<"\n\nRooms Remaining : "<<Qshake-Sshake;
        cout<<"\n\nTotal Rooms Collection for the day : "<<Total_shake;

        cout<<"\n\nNumber of Rooms we had : "<<Qchicken;
        cout<<"\n\nNumber of Rooms we gave out : "<<Schicken;
        cout<<"\n\nRooms Remaining : "<<Qchicken-Schicken;
        cout<<"\n\nTotal Rooms Collection for the day : "<<Total_chicken;

    
    case 8:
        exit(0);

        default:
            cout<<"\n Please select from the given choices! ";
    }
    goto m;
}