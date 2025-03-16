#include<bits/stdc++.h>
using namespace std;

// numberOfLabs to store number Of Labs in system
int numberOfLabs = 4;

// void createArrays(IntPtr labs[], int labsizes[]);
// allocating memory to array in each lab according to lab size
void createArrays(int* labs[], int labsizes[]){
   for(int i=0;i<numberOfLabs;i++){
       // allocating memory according to labsize
       int *temp;
       temp = (int*)malloc(labsizes[i]*(sizeof(int)));

       labs[i] = temp;

       for(int j=0;j<labsizes[i];j++){
           labs[i][j] = -1;
       }
   }
}


//void search(IntPtr labs[], int labsizes[],int ID) search an user in each lab and in each computer
//third parameter is added to search for searching given ID in the labs
void search(int* labs[], int labsizes[],int ID){
   // take a flag to set if found and break the loop
int flag = 0;
   for(int i=0;i<numberOfLabs;i++){
       if(flag == 1)
           break;
       for(int j=0;j<labsizes[i];j++){
           if(labs[i][j] == ID){
               cout<<"User "<<ID<<" logged in Lab "<<(i+1)<<" at computer "<<(j+1)<<endl;
               flag = 1;
               break;
           }
       }
   }
   // if user not found
   if(flag == 0)
       cout<<"User not logged in"<<endl;
}

//void logout(IntPtr labs[], int labsizes[],int ID) search an user in each lab and in each computer
//third parameter is added to search for searching given user Id in the labs
void logout(int* labs[], int labsizes[],int ID){
   // take a flag to set if found and set it to empty
   int flag = 0;

   for(int i=0;i<numberOfLabs;i++){
       if(flag == 1)
           break;
       for(int j=0;j<labsizes[i];j++){
           if(labs[i][j] == ID){
               cout<<"Logout user "<<ID<<" logged in Lab "<<(i+1)<<" at computer "<<(j+1)<<endl;
               labs[i][j] = -1;
               flag = 1;
               break;
           }
       }
   }
   // if user not found
   if(flag == 0)
       cout<<"User not logged in"<<endl;

   // LAb Status
   cout<<"LAB STATUS\nLab # Computer Stations\n";
   int i,j;
      for(i=0;i<numberOfLabs;i++){
       cout<<(i+1)<<" ";
       for(j=0;j<labsizes[i];j++){
           cout<<(j+1)<<":";
           if(labs[i][j] == -1){
               cout<<"empty ";
           }
           else{
               cout<<labs[i][j]<<" ";
           }
       }
       cout<<endl;
   }
}

// free the arrays associated in lab
void freeArrays(int* labs[]){

   // free the pointer
   free(labs);
}
int main(){

   // array to store pointer
   int* labs[numberOfLabs];

   //we have 4 labs then storing size of each lab
   int labsizes[numberOfLabs];
   cout<<"\n";

   cout<<"Welcome to the LabMonitorProgram!"<<endl;
   cout<<"Please enter the nuber of computer stations in each lab:"<<endl;

   // Now reading the number of computers in lab
   for(int i=0;i<numberOfLabs;i++){
       cout<<"How many computers in Lab "<<i+1<<"?";
       cin>>labsizes[i];
   }

   // calling create array
   createArrays(labs,labsizes);
   int i,j;

   while(1){
       // Option from user
       cout<<"MAIN MENU\n0) Quit \n1) Simulate login \n2)Simulate logout\n3)Search"<<endl;

       int option;
       cin>>option;

       if(option == 0){
           // exit the program
           cout<<"Bye!"<<endl;
           break;
       }

       else if(option == 1){
           // ask for user id
           int ID;
           cout<<"Enter the 5 digit ID number of the user logging in:"<<endl;
           cin>>ID;


           int labNo,computerNo;
           cout<<"Enter the lab number the user is logging in from (1-"<<numberOfLabs<<"):"<<endl;
           cin>>labNo;
                         
           cout<<"Enter computer station number the user is logging in to (1-"<<labsizes[labNo-1]<<"):"<<endl;
           cin>>computerNo;

           labs[labNo-1][computerNo-1] = ID;

           //Now Displaying the lab status
           cout<<"LAB STATUS\nLab # Computer Stations\n";
           for(i=0;i<numberOfLabs;i++){
               cout<<(i+1)<<" ";
               for(j=0;j<labsizes[i];j++){
                   cout<<(j+1)<<":";
                   if(labs[i][j] == -1){
                       cout<<"empty ";
                   }
                   else{
                       cout<<labs[i][j]<<" ";
                   }
               }
               cout<<endl;
           }
       }
       else if(option == 2){
           cout<<"Enter the 5 digit ID number of the user logging in:"<<endl;
           int ID;
           cin>>ID;

  // call logout function
           logout(labs,labsizes,ID);
       }
       else if(option == 3){
           cout<<"Enter the 5 digit ID number of the user logging in:"<<endl;
           int ID;
           cin>>ID;

  // call search function
           search(labs,labsizes,ID);
       }
   }

   return 0;
}
                                                      
                          
