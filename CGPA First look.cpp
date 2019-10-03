#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>

using namespace std;


void Messages(float X){
    if(X>=3.80){
        cout<<"WELL DONE.Your Result Is Very Good.\nKeep It Up...\n";
    }
    else if(X>=3.30 && X<3.80){
        cout<<"BrillianT! Try...\n";
    }
    else if(X>=3.00 && X<3.30){
        cout<<"GooD Result...\n";
    }
    else if(X>=2.50 && X<3.00){
        cout<<"Not Enough GOOD for You.\n";
    }
    else if(X>=2.00 && X<2.50){
        cout<<"Work Hard. You are in DANGER!.\nYou Will be in probation, If You Can't Improve Your Results.\n";
    }
    else{
        cout<<"WARNING!!!\nYou Are Already In Probation.\n";
    }
}

int main()
{
    system("color 2");
    cout<<"                     WELCOME TO THE HELL              "<<"\n\n"<<endl;
    cout<<"                    EAST WEST UNIVERSITY             "<<endl;
    cout<<"        A/2 Jahurul Islam Avenue, Jahurul Islam City "<<endl;
    cout<<"              Aftabnagar, Dhaka-1212, Bangladesh     "<<endl;
    cout<<"                  Tel: 09666775577, 9858261          "<<endl;
    cout<<"                e-mail: admissions@ewubd.edu         "<<endl;
    cout<<"                 URL: http://www.ewubd.edu           "<<"\n\n"<<endl;
    cout<<"Grading System of this HELL/HOSPITAL or UNIVERSITY.........\n"<<endl;
    cout<<" Numerical Scores        Letter Grade        Grade Point\n"<<endl;
    cout<<"     97-100                  A+                  4.00"<<endl;
    cout<<"  90- below 97               A                   4.00"<<endl;
    cout<<"  87- below 90               A-                  3.70"<<endl;
    cout<<"  83- below 87               B+                  3.30"<<endl;
    cout<<"  80- below 83               B                   3.00"<<endl;
    cout<<"  77- below 80               B-                  2.70"<<endl;
    cout<<"  73- below 77               C+                  2.30"<<endl;
    cout<<"  70- below 73               C                   2.00"<<endl;
    cout<<"  67- below 70               C-                  1.70"<<endl;
    cout<<"  63- below 67               D+                  1.30"<<endl;
    cout<<"  60- below 63               D                   1.00"<<endl;
    cout<<"      below 60               F                   0.00"<<"\n\n"<<endl;

    int number,i,cradit[10];
    char Grade[10][10];
    float sum=0, multiply=0,Summation_Of_Grade_and_Cradit=0,CGPA=0;

    cout << "Enter How many Course You Did In the LasT Semester?..._";
    cin >> number;
    cout<<"\n\n";


    for(i=0; i<number; i++){
        cout<<"Enter "<<i+1<<" Subject Grade:";
        cin>>Grade[i];
        cout<<"\n";
        cout<<"Enter " <<i+1<<" Subject Cradit:";
        cin>>cradit[i];
        cout<<"\n";
        if(strcmp(Grade[i],"A+")==0||strcmp(Grade[i],"a+")==0||strcmp(Grade[i],"A")==0||strcmp(Grade[i],"a")==0){
            multiply=(4)*cradit[i];
            Summation_Of_Grade_and_Cradit=Summation_Of_Grade_and_Cradit+multiply;
        }
       else if(strcmp(Grade[i],"A-")==0||strcmp(Grade[i],"a-")==0){
            multiply=(3.70)*cradit[i];
            Summation_Of_Grade_and_Cradit=Summation_Of_Grade_and_Cradit+multiply;
        }
       else if(strcmp(Grade[i],"B+")==0||strcmp(Grade[i],"b+")==0){
            multiply=(3.30)*cradit[i];
            Summation_Of_Grade_and_Cradit=Summation_Of_Grade_and_Cradit+multiply;
        }
        else if(strcmp(Grade[i],"B")==0||strcmp(Grade[i],"b")==0){
            multiply=(3.00)*cradit[i];
            Summation_Of_Grade_and_Cradit=Summation_Of_Grade_and_Cradit+multiply;
        }
        else if(strcmp(Grade[i],"B-")==0||strcmp(Grade[i],"b-")==0){
            multiply=(2.70)*cradit[i];
            Summation_Of_Grade_and_Cradit=Summation_Of_Grade_and_Cradit+multiply;
        }
        else if(strcmp(Grade[i],"C+")==0||strcmp(Grade[i],"c+")==0){
            multiply=(2.30)*cradit[i];
            Summation_Of_Grade_and_Cradit=Summation_Of_Grade_and_Cradit+multiply;
        }
        else if(strcmp(Grade[i],"C")==0||strcmp(Grade[i],"c")==0){
            multiply=(2.00)*cradit[i];
            Summation_Of_Grade_and_Cradit=Summation_Of_Grade_and_Cradit+multiply;
        }
        else if(strcmp(Grade[i],"C-")==0||strcmp(Grade[i],"c-")==0){
            multiply=(1.70)*cradit[i];
            Summation_Of_Grade_and_Cradit=Summation_Of_Grade_and_Cradit+multiply;
        }
        else if(strcmp(Grade[i],"D+")==0||strcmp(Grade[i],"d+")==0){
            cout<<"May be, You should retake this Subject...."<<endl;
            multiply=(1.30)*cradit[i];
            Summation_Of_Grade_and_Cradit=Summation_Of_Grade_and_Cradit+multiply;
        }
        else if(strcmp(Grade[i],"D")==0||strcmp(Grade[i],"d")==0){
            cout<<"WARNING! You Must Retake This Subject....."<<endl;
            multiply=(1.00)*cradit[i];
            Summation_Of_Grade_and_Cradit=Summation_Of_Grade_and_Cradit+multiply;
        }
        else{
            cout<<"You are Fail in this Subject OR Something went wrong.!"<<endl;
        }

        sum=sum+cradit[i];

    }
    CGPA=float(Summation_Of_Grade_and_Cradit)/sum;
    cout<<"Your CGPA is: "<<CGPA<<"\n\n"<<endl;
    Messages(CGPA);
    //cout<<"Summation_Of_Grade_and_Cradit: "<<Summation_Of_Grade_and_Cradit<<"\n\n"<<endl;
    //cout<<"Your Total Cradit is: "<<sum<<endl;

    return 0;
}
