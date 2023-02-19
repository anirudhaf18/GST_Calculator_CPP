//Gst calculater for diffrent products...
#include<iostream>
#include<string>
using namespace std;


int main(){

    int n,price,quantity,gst,tPrice=0,tQuantity=0;
    int product_No,x;
    string name;
    
    while(x!=0){
    cout<<"Select the below product to calculate total amount payable with applicable gst : "<<endl;
    cout<<"1: Mobile Phone and Cloths."<<endl<<"2: Two Wheelar and Car."<<endl<<"3: Jwellarry."<<endl<<"4: Sanitizer."<<endl;
    cin>>product_No;
    cout<<endl;

    switch(product_No){
        case 1:
        cout<<"The gst applicable on mobile phone and cloths is 12% ."<<endl;
        cout<<"Choose moblile or cloths :"<<endl;
        cin>>name;
        if(name == "mobile"){
        cout<<"The total number of various item that you want to buy :"<<endl;
        cin>>n;

        for(int i=0; i<n; i++){
            cout<<"Enter the name of "<<i+1<<" mobile phone:"<<endl;
            cin>>name;
            
            cout<<"Enter the price of "<<i+1<<" mobile phone :"<<endl;
            cin>>price;
            
            cout<<"Enter the quantity of "<<i+1<<" mobile phone :"<<endl;
            cin>>quantity;

            tPrice = tPrice + (price*quantity);
            tQuantity = tQuantity + quantity;
            
        }

        cout<<"The total amount of the product is : "<<tPrice<<endl;
        
        gst = (tPrice*12)/100;
        tPrice = tPrice + gst;

        cout<<"The gst added to total amount : "<<gst<<endl;
        cout<<"The total amount should payable with applicable gst is : "<<tPrice<<endl;
        cout<<"Enter 0 to exit or to continue enter other digit :"<<endl;
        cin>>x;
        
    }

        else if(name == "cloths"){
        cout<<"The total number of various item that you want to buy  : "<<endl;
        cin>>n;

        for(int i=0; i<n; i++){
            cout<<"Enter the name of "<<i+1<<" cloths:"<<endl;
            cin>>name;
            
            cout<<"Enter the price of "<<i+1<<" cloths :"<<endl;
            cin>>price;
            
            cout<<"Enter the quantity of "<<i+1<<" cloths :"<<endl;
            cin>>quantity;

            tPrice = tPrice + (price*quantity);
            tQuantity = tQuantity + quantity;
            
        }
        
        cout<<"The total amount of the product is : "<<tPrice<<endl;
        
        gst = (tPrice*12)/100;
        tPrice = tPrice + gst;

        cout<<"The gst added to total amount : "<<gst<<endl;
        cout<<"The total amount should payable with applicable gst is : "<<tPrice<<endl;
        cout<<"Enter 0 to exit or to continue enter other digit :"<<endl;
        cin>>x;
        }
        
        break;

        case 2:
        cout<<"The gst applicable on two wheelar and cars is 28% ."<<endl;
        cout<<"choose car or bike"<<endl;
        cin>>name;
        if(name == "car"){
        cout<<"The total number of various item that you want to buy :"<<endl;
        cin>>n;

        for(int i=0; i<n; i++){
            cout<<"Enter the name of "<<i+1<<" car:"<<endl;
            cin>>name;
            
            cout<<"Enter the price of "<<i+1<<" car :"<<endl;
            cin>>price;
            
            cout<<"Enter the quantity of "<<i+1<<" car :"<<endl;
            cin>>quantity;

            tPrice = tPrice + (price*quantity);
            tQuantity = tQuantity + quantity;
            
        }

        cout<<"The total amount of the product is : "<<tPrice<<endl;
        
        gst = (tPrice*3)/100;
        tPrice = tPrice + gst;

        cout<<"The gst added to total amount : "<<gst<<endl;
        cout<<"The total amount should payable with applicable gst is : "<<tPrice<<endl;
        cout<<"Enter 0 to exit or to continue enter other digit :"<<endl;
        cin>>x;
        }

        else if(name == "bike"){

        cout<<"The total number of various item that you want to buy :"<<endl;
        cin>>n;
        
        for(int i=0; i<n; i++){
            cout<<"Enter the bike of  "<<i+1<<" company :"<<endl;
            cin>>name;

            cout<<"Enter the price of that  "<<i+1<<" bike :"<<endl;
            cin>>price;

            cout<<"Enter the quantity of that "<<i+1<<" bike :"<<endl;
            cin>>quantity;

            tPrice = tPrice + (price*quantity);
            tQuantity = tQuantity + quantity;
            
        }
        
        cout<<"The total amount of the product is : "<<tPrice<<endl;
        
        gst = (tPrice*28)/100;
        tPrice = tPrice + gst;

        cout<<"The gst added to total amount : "<<gst<<endl;
        cout<<"The total amount should payable with applicable gst is : "<<tPrice<<endl;
        cout<<"Enter 0 to exit or to continue enter other digit :"<<endl;
        cin>>x;
        }
        
        break;

        case 3:
        cout<<"The gst applicable on jwellary is 3% ."<<endl;
        cout<<"The total number of various item that you want to buy  : "<<endl;
        cin>>n;

        for(int i=0; i<n; i++){
            cout<<"Enter the name of  "<<i+1<<" jwellary item :"<<endl;
            cin>>name;

            cout<<"Enter the price of "<<i+1<<" jwellary item :"<<endl;
            cin>>price;

            cout<<"Enter the quantity of "<<i+1<<" jwellary item :"<<endl;
            cin>>quantity;

            tPrice = tPrice + (price*quantity);
            tQuantity = tQuantity + quantity;
            
        }
       
        cout<<"The total amount of the product is : "<<tPrice<<endl;
        
        gst = (tPrice*3)/100;
        tPrice = tPrice + gst;

        cout<<"The gst added to total amount : "<<gst<<endl;
        cout<<"The total amount should payable with applicable gst is : "<<tPrice<<endl;
        cout<<"Enter 0 to exit or to continue enter other digit :"<<endl;
        cin>>x;
        
        break;

        case 4:
        cout<<"The gst applicable on sanitizer is 18% ."<<endl;
        cout<<"The total number of various item that you want to buy  : "<<endl;
        cin>>n;

        for(int i=0; i<n; i++){
            cout<<"Enter the name of  "<<i+1<<" sanitizer :"<<endl;
            cin>>name;

            cout<<"Enter the price of "<<i+1<<" sanitizer :"<<endl;
            cin>>price;

            cout<<"Enter the quantity of "<<i+1<<" sanitizer :"<<endl;
            cin>>quantity;

            tPrice = tPrice + (price*quantity);
            tQuantity = tQuantity + quantity;
            
        }
        
        cout<<"The total amount of the product is : "<<tPrice<<endl;
        
        gst = (tPrice*18)/100;
        tPrice = tPrice + gst;
        
        cout<<"The gst added to total amount : "<<gst<<endl;
        cout<<"The total amount should payable with applicable gst is : "<<tPrice<<endl;
        cout<<"Enter 0 to exit or to continue enter other digit :"<<endl;
        cin>>x;
        
        break;

    }
    }
    
}