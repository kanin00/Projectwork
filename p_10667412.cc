

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
using namespace std;

struct Student
{
string name;
vector<string> Scourses;
int year;
int level;
vector<char> grades;
};

struct Staff
{
    string name;
    string job;
    int year;
    double salary;

};



int main()
{
bool notquit=true;
    char c;

        char op;
vector<Staff> Stff;
vector<string> courses;
vector<Student> Std;
vector<string> coursesS;
courses.push_back("Academic Writing I");
courses.push_back("General Mathematics");
courses.push_back("Introduction to Spanish");
courses.push_back("Science & Technology");
courses.push_back("Essential Computer Skills");
courses.push_back("Understanding Human Society");
  cout<<"========================================================================"<<endl;
    cout<<"                      SCHOOL MANAGEMENT SYSTEM           "<<endl;
    cout<<"========================================================================"<<endl;
    cout<<"Hello user!"<<endl;
    getch();
    cout<<"===================="<<endl;

    cout<<"Student -  S"<<endl;
    cout<<"Staff - T"<<endl;
    cout<<"Courses - C"<<endl;
    cout<<"To Quit- Q"<<endl;
    cout<<"===================="<<endl;

    cout<<"Please select a record: ";
     cin>>c;


    cout<<"========================================================================"<<endl;

while(c!='q'||c!='Q')
{

     if(c=='s'||c=='S')
    {

       notquit=true;
        cout<<"Add a new record- A"<<endl;
        cout<<"Edit a record- E."<<endl;
        cout<<"Delete a record - D"<<endl;
        cout<<"Grade a student - G"<<endl;
        cout<<"Print an Academic Record - P "<<endl;
        cout<<"To quit - Q"<<endl;
        cout<<":";
        cin>>op;
        cout<<"========================================================================"<<endl;
        while(notquit)
        {
        if(op=='a'||op=='A')
        {   char reply;
        char reply2;
            string sname;
            int syearr;
            int slvl;
            cout<<"Enter the name of the student: ";
            cin.ignore();
            getline(cin,sname);
            cout<<endl;
            cout<<"Enter the year of admission: ";
            cin>>syearr;
            cout<<endl;
            cout<<"Enter the current level of the student: ";
            cin>>slvl;
            cout<<endl;
            for(int i=0;i<courses.size();i++)
                {cout<<i+1<<". "<<courses[i]<<endl;}
            int number;
            cout<<"Enter the course's number: ";
            cin>>number;
            cout<<endl;
            number=number-1;
            coursesS.push_back(courses[number]);
            cout<<"Add more courses?"<<endl;
                cout<<"Y for yes: ";
            cin>>reply;
            cout<<endl;
            while(reply=='y'||reply=='Y')
                {
                cout<<"Enter the course's number: ";
                cin>>number;
                cout<<endl;
                number=number-1;
                coursesS.push_back(courses[number]);
                cout<<"Add more courses?"<<endl;
                cout<<"Y for yes: ";
                cin>>reply;
                cout<<endl;
                }
            Student info={sname,coursesS,syearr,slvl};
            Std.push_back(info);
            cout<<"Would you like to see the current list of students in the database?"<<endl;
            cout<<"Enter 'y' for yes and any other character for no: ";
            cin>>reply2;
            cout<<endl;
            if(reply2=='y'||reply2=='Y')
            {for(int i=0;i<Std.size();i++)
            {
                    cout<<i<<". "<<Std[i].name<<"      L"<<Std[i].level<<"      "<<Std[i].year<<endl;
            }
            }
            getch();

        }
        else
        {

            if(op=='g'||op=='G')
            {
            int snumber;
            for(int i=0;i<Std.size();i++)
            {
                    cout<<i<<". "<<Std[i].name<<"    L"<<Std[i].level<<endl;
            }
            cout<<"Enter the position of the Student whose grades you want to record: "<<endl;
            cin>>snumber;
            cout<<endl;
            if(Std[snumber].Scourses.empty()==true)
            {
                cout<<"There are no courses available to this student."<<endl;
            }
            else
            {
                char g;
                for(int i=0;i<Std[snumber].Scourses.size();i++)
                {
                    cout<<"Enter the grades for "<<Std[snumber].Scourses[i]<<":";
                    cin>>g;
                    Std[snumber].grades.push_back(g);
                    cout<<endl;
                }
                cout<<endl;

            }
            }
            else
            {
                if(op=='p'||op=='P')
                {
             int no;
                for(int i=0;i<Std.size();i++)
             {
                    cout<<i<<". "<<Std[i].name<<"  L"<<Std[i].level<<endl;
             }
             cout<<"Enter the Student's number: "<<endl;
             cin>>no;
             if(Std[no].grades.empty()==true)
             {
                 cout<<"There are no grades available for this student."<<endl;
                 cout<<"Please add grades before printing."<<endl;
                 getch();
             }
             else
             {

                 ofstream outfile;

             outfile.open("AcademicRecord.txt");

             outfile<<"                     "<<"Academic Record"<<endl;
             outfile<<"*******************************************************"<<endl;
             outfile<<"ID:"<<no<<endl;
             outfile<<"Name: "<<Std[no].name<<endl;
             outfile<<"Level: "<<Std[no].level<<endl;
             outfile<<"----------------------------------------------"<<endl;
              for(int i=0;i<Std[no].Scourses.size();i++)
            {
                outfile<<Std[no].Scourses[i]<<endl;
                outfile<<Std[no].grades[i]<<endl;
                outfile<<"----------------------------------------------"<<endl;
            }

             outfile.close();
             cout<<"Your file is ready.."<<endl;
             getch();
             }
                }
                 else
                 {
                     if(op=='E'||op=='e')
                     { {for(int i=0;i<Std.size();i++)
            {
                    cout<<i+1<<". "<<Std[i].name<<"      L"<<Std[i].level<<"      "<<Std[i].year<<endl;
            }
                          int input;
            string nam;
            int lvl;
            int yearr2;
            char reply,reply2;

            cout<<"Enter the position of the student you want to edit: ";
            cin>>input;
input--;
            cout<<endl;
            cout<<"Enter the name of the student: ";
           cin>>nam;
           cout<<endl;
            cout<<"Enter the year of admission: ";
            cin>>yearr2;
            cout<<endl;
            cout<<"Enter the current level of the Student:";
            cin>>lvl;
            cout<<endl;
            for(int i=0;i<courses.size();i++)
                {cout<<i+1<<". "<<courses[i]<<endl;}

            int number;
            cout<<endl;
            cout<<"Enter the course's number: ";
            cin>>number;
            cout<<endl;
            number=number-1;
            coursesS.push_back(courses[number]);
            cout<<"Add more courses?"<<endl;
                cout<<"Y for yes: ";
            cin>>reply;
            cout<<endl;
            while(reply=='y'||reply=='Y')
                {
                cout<<"Enter the course's number: ";
                cin>>number;
                cout<<endl;
                number=number-1;
                coursesS.push_back(courses[number]);
                cout<<"Add more courses?"<<endl;
                cout<<"Y for yes: ";
                cin>>reply;
                cout<<endl;
                }
            Std[input].name=nam;
            Std[input].year=yearr2;
            Std[input].level=lvl;
              cout<<"Would you like to see the current list of students in the database?"<<endl;
            cout<<"Enter 'Y' or 'y' for yes and any other character for no: ";
            cin>>reply2;
            cout<<endl;
            if(reply2=='y'||reply2=='Y')
            {for(int i=0;i<Std.size();i++)
            {
                    cout<<i<<". "<<Std[i].name<<"      L"<<Std[i].level<<"      "<<Std[i].year<<endl;
            }
            }
                   }  }
                     else
                     {
                         if(op=='D'||op=='d')
                         {
                             for(int i=0;i<Std.size();i++)
                {
                    cout<<i+1<<". "<<Std[i].name<<"  L"<<Std[i].level<<endl;
            }
            int number;
            cout<<"Enter the number of the Student you want to delete: ";
            cin>>number;
            number--;
            cout<<endl;
            Std.erase(Std.begin() + number);
                         }
                         else
                         {if(op=='q'||op=='Q')
                         {
                             notquit=false;
                             break;
                         }
                         else
                         {
                             cout<<"Invalid Input!!"<<endl;

                         }}
                     }
                 }

            }
        }
        cout<<"========================================================================"<<endl;
        cout<<"Add a new record- A"<<endl;
        cout<<"Edit a record- E."<<endl;
        cout<<"Delete a record - D"<<endl;
        cout<<"Grade a student - G"<<endl;
        cout<<"Print an Academic Record - P "<<endl;
        cout<<"To quit - Q"<<endl;
        cout<<":";
        cin>>op;
        cout<<"========================================================================"<<endl;
        }

    }
      else
      {

          if(c=='T'||c=='t')
          {    notquit=true;
               char op;
                   cout<<"Add a new record- A"<<endl;
        cout<<"Edit a record- E."<<endl;
        cout<<"Delete a record - D"<<endl;
        cout<<"To quit - Q"<<endl;
        cout<<":";
        cin>>op;
        cout<<"========================================================================"<<endl;
        while(notquit)
        {

              if(op=='a'||op=='A')
{string namee;
double salary;
           string jobb;
           int yearr;
           Stff.push_back(Staff());
             cout<<"Enter the name of the staff: ";
           cin.ignore();
           getline(cin,namee);
           cout<<endl;

           cout<<"Enter the job of the staff: ";
           cin>>jobb;
           cout<<endl;
           cout<<"Enter the year of employment: ";
           cin>>yearr;
           cout<<endl;
           cout<<"Enter the salary:$";
           cin>>salary;
           Staff info={namee,jobb,yearr,salary};
           Stff.push_back(info);
           cout<<endl;
           cout<<"The current list of Staff in the database is:"<<endl;

           for(int i=1;i<Stff.size();i++)
           {
                cout<<i<<". "<<Stff[i].name<<" "<<Stff[i].job<<" $"<<Stff[i].salary<<" "<<Stff[i].year<<endl;
           }
getch();
}
else
{
    if(op=='e'||op=='E')
    {
         int input;
            string first,last,nam;
            string jobb2;
            double salary;
            int yearr2;
            for(int i=1;i<Stff.size();i++)
            {
                    cout<<i<<". "<<Stff[i].name<<" "<<Stff[i].job<<" "<<Stff[i].year<<endl;
            }
            cout<<"Enter the position of the Staff you want to edit: ";
            cin>>input;

            cout<<endl;
           cout<<"Enter the name of the staff: ";
           cin.ignore();
           getline(cin,nam);
           cout<<endl;
            cout<<"Enter the Job: ";
            cin>>jobb2;
            cout<<endl;
            cout<<"Enter the Year of Employment: ";
            cin>>yearr2;
            cout<<endl;
            cout<<"Enter salary:$";
            cin>>salary;
            cout<<endl;
            Stff[input].name=nam;
            Stff[input].job=jobb2;
            Stff[input].year=yearr2;
            Stff[input].salary=salary;
            cout<<"The current list of Staff in the database is: "<<endl;
            for(int i=1;i<Stff.size();i++)
           {
               cout<<i<<". "<<Stff[i].name<<" "<<Stff[i].job<<" $"<<Stff[i].salary<<" "<<Stff[i].year<<endl;
           }
           getch();

    }
    else{
        if(op=='d'||op=='D')
    {
           for(int i=1;i<Stff.size();i++)
            {
                    cout<<i<<". "<<Stff[i].name<<" "<<Stff[i].job<<" "<<Stff[i].year<<endl;
            }
            int number;
            cout<<"Enter the number of the Staff you want to delete: ";
            cin>>number;
            cout<<endl;
            Stff.erase(Stff.begin() + number);
            cout<<"The current list of staff in the database is:"<<endl;
             for(int i=1;i<Stff.size();i++)
           {
               cout<<i<<". "<<Stff[i].name<<" "<<Stff[i].job<<" "<<Stff[i].year<<endl;
           }
           getch();
    }
    else
    {
        if(op=='q'||op=='Q')
        {
            notquit=false;
            break;
        }
        else{
        cout<<"Invalid Input"<<endl;
        }
    }
    }

}
 cout<<"========================================================================"<<endl;
      cout<<"Add a new record- A"<<endl;
        cout<<"Edit a record- E."<<endl;
        cout<<"Delete a record - D"<<endl;
        cout<<"To quit - Q"<<endl;
        cout<<":";
        cin>>op;
        cout<<"========================================================================"<<endl;}
          }
          else
          {
              if(c=='C'||c=='c')
              {    notquit=true;
                  char op;
            cout<<"Add a new record- A"<<endl;
        cout<<"Edit a record- E."<<endl;
        cout<<"Delete a record - D"<<endl;
        cout<<"To quit - Q"<<endl;
        cout<<":";
        cin>>op;
        cout<<"========================================================================"<<endl;
        while(notquit)
        {

if(op=='a'||op=='A')
{
    string input;
string input3;
            cout<<"Enter the course you want to add: ";
            cin.ignore();
            getline(cin,input3);
            courses.push_back(input3);
            cout<<endl;

            cout<<"The new course list is: "<<endl;
            for(int i=0;i<courses.size();i++)
            {
                cout<<i+1<<". "<<courses[i]<<endl;
            }
            getch();

}
else
{
    if(op=='e'||op=='E')
    {
        int input;
            string input2;
            for(int i=0;i<courses.size();i++)
                {
                    cout<<i+1<<". "<<courses[i]<<endl;
                }
            cout<<"Enter the position of the course you want to edit: ";
            cin>>input;
            input=input-1;
            cout<<endl;
            cout<<"Enter the name of the course you wish to replace "<<courses[input]<<" with:";
            cin.ignore();
            getline(cin,input2);
            cout<<endl;
            courses[input]=input2;
               cout<<"The new course list is: "<<endl;
            for(int i=0;i<courses.size();i++)
            {
                cout<<i+1<<". "<<courses[i]<<endl;
            }
            getch();
    }
    else
    {
        if(op=='d'||op=='D')
        {
             for(int i=0;i<courses.size();i++)
                {
                    cout<<i+1<<". "<<courses[i]<<endl;
                }
                int number;
                cout<<"Enter the position of the course you want to delete: ";
                cin>>number;
                cout<<endl;
                number=number-1;
                courses.erase(courses.begin() + number);
            cout<<"The new course list is: "<<endl;
            for(int i=0;i<courses.size();i++)
            {
                cout<<i+1<<". "<<courses[i]<<endl;
            }
            getch();
        }
        else
        {
            if(op=='q'||op=='Q')
            {
                notquit=false;
                break;
            }
            else
            {
                         cout<<"Invalid Input."<<endl;

            }
        }
    }
}
cout<<"========================================================================"<<endl;
       cout<<"Add a new record- A"<<endl;
        cout<<"Edit a record- E."<<endl;
        cout<<"Delete a record - D"<<endl;
        cout<<"To quit - Q"<<endl;
        cout<<":";
        cin>>op;
        cout<<"========================================================================"<<endl; }
              }
          }
      }



    cout<<"Student -  S"<<endl;
    cout<<"Staff - T"<<endl;
    cout<<"Courses - C"<<endl;
    cout<<"To Quit- Q"<<endl;
    cout<<"===================="<<endl;

    cout<<"Please select a record: ";
     cin>>c;
      cout<<"========================================================================"<<endl;
}

cout<<"Exiting..."<<endl;
}


