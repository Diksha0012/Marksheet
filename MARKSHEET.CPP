//program to show the marksheet of a student 
//the concept of Hierarchical Inheritance is used
#include<iostream>
using namespace std;
#include<string.h>
#include<stdlib.h>
class Student    
{
	 public:
	         //data members of the class

                 int eng,hindi,maths,sci,sst,computer,physics,chem,choice,ch;
                 int acc,buss,eco,bio,cs,gk,history,geo,civics,physical,sanskrit,information_tech;
                 float percentage;
                 char art_edu,work_exd,health_edu,grade;
                 string remark,division;
                 
                 //Member functions of the class

		 void first();
		 void second();
		 void third();
		 void fourth();
		 void per();
		 void display1();
		 void display2();
		 void display3();
		 void display4();
};
     
	     void Student::first()                   //Member function is define outside the class by using scope resolution operator(::)
	     {
		     	     cout<<"Enter the marks in the following subjects....\n";
	                     cout<<"\nEnglish : ";
			     cin>>eng;
			     cout<<"\nHindi : ";
			     cin>>hindi;
			     cout<<"\nMathematics : ";
			     cin>>maths;
			     cout<<"\nScience : ";
			     cin>>sci;
			     cout<<"\nSocial studies : ";
			     cin>>sst;
			     cout<<"\nComputer : ";
			     cin>>computer;
			     cout<<"\nGeneral Knowledge : ";
			     cin>>gk;
			     cout<<"\nWork Education : ";
			     cin>>work_exd;
			     cout<<"\nArt Education : ";
			     cin>>art_edu;
			     cout<<"\nHealth & Physcial Education : ";
			     cin>>health_edu;
	                     cin.ignore();
			     cout<<"Teacher remark : ";
			     getline(cin,remark);
			     percentage=(eng+hindi+maths+sci+sst)/5;

		 }
		 void Student::second()
		 {
			     cout<<"Enter the marks in the following subjects....\n";
			     cout<<"\nEnglish : ";
			     cin>>eng;
			     cout<<"\nHindi : ";
			     cin>>hindi;
			     cout<<"\nMathematics : ";
			     cin>>maths;
			     cout<<"\nScience : ";
			     cin>>sci;
			     cout<<"\nSocial studies : ";
			     cin>>sst;
			     cout<<"\nComputer : ";
			     cin>>computer;
			     cout<<"\nGeneral Knowledge : ";
			     cin>>gk;
			     cout<<"\nSanskrit : ";
			     cin>>sanskrit;
			     cout<<"\nWork Education : ";
			     cin>>work_exd;
			     cout<<"\nArt Education : ";
			     cin>>art_edu;
			     cout<<"\nHealth & Physcial Education : ";
			     cin>>health_edu;
                             cin.ignore();   
			     cout<<"Teacher remark : ";
			     getline(cin,remark);
			     percentage=(eng+hindi+maths+sci+sst)/5;

		 }
		 void Student::third()
		 {
			     cout<<"Enter the marks in the following subjects....\n";
			     cout<<"\nEnglish : ";
			     cin>>eng;
			     cout<<"\nHindi : ";
			     cin>>hindi;
			     cout<<"\nMathematics : ";
			     cin>>maths;
			     cout<<"\nScience : ";
			     cin>>sci;
			     cout<<"\nSocial studies : ";
			     cin>>sst;
			     cout<<"\nComputer : ";
			     cin>>computer;
			     cout<<"\nWork Education : ";
			     cin>>work_exd;
			     cout<<"\nArt Education : ";
			     cin>>art_edu;
			     cout<<"\nHealth & Physcial Education : ";
			     cin>>health_edu;
                             cin.ignore();
			     cout<<"Teacher remark : ";
			     getline(cin,remark);
			     percentage=(eng+hindi+sci+sst+maths)/5;
		 }
		 void Student::fourth()
		 {
                              cout<<"Kindly select your stream from the following..."<<endl;
                              cout<<"\n\n1.Science(PCB)+Hindi+English";
			      cout<<"\n2.Science(PCB)+Physical Education+English";
			      cout<<"\n3.Science(PCB)+Computer Science+English";
			      cout<<"\n4.Science(PCM)+Hindi+English";
			      cout<<"\n5.Science(PCM)+Physical Education+English";
			      cout<<"\n6.Science(PCM)+Computer Science+English";
			      cout<<"\n7.Science(PCMB)+English";
			      cout<<"\n8.Commerce+Hindi+English";
			      cout<<"\n9.Commerce+Maths+English";
			      cout<<"\n10.Commerce+Information technology+English";
			      cout<<"\n11.Commerce+Physical Education+English";
			      cout<<"\n\nEnter your choice : ";
			      cin>> choice;
			      switch( choice)
			      {
			       case 1:
			       cout<<"\nEnter the marks obtained in following subjects....\n";
			       cout<<"\nEnglish : ";
			       cin>>eng;
			       cout<<"\nPhysics : ";
			       cin>>physics;
			       cout<<"\nChemsitry : ";
			       cin>>chem;
			       cout<<"\nBiology : ";
			       cin>>bio;
			       cout<<"\nHindi ";
			       cin>>hindi;
			       cout<<"\nWork Education : ";
			       cin>>work_exd;
			       cout<<"\nArt Education : ";
			       cin>>art_edu;
			       cout<<"\nHealth & Physcial Education : ";
			       cin>>health_edu;
                               cin.ignore();
			       cout<<"Teacher remark : ";
			       getline(cin,remark);
			       percentage=(eng+physics+chem+bio+hindi)/5;
			
			       break;
			
			       case 2:
			       cout<<"\nEnter the marks obtained in following subjects....";
			       cout<<"\nEnglish : ";
			       cin>>eng;
			       cout<<"\nPhysics : ";
			       cin>>physics;;
			       cout<<"\nChemsitry : ";
			       cin>>chem;
			       cout<<"\nBiology : ";
			       cin>>bio;
			       cout<<"\nPhysical Education ";
			       cin>>physical;
			       cout<<"\nWork Education : ";
			       cin>>work_exd;
			       cout<<"\nArt Education : ";
			       cin>>art_edu;
			       cout<<"\nHealth & Physcial Education : ";
			       cin>>health_edu;
	                       cin.ignore();
                               cout<<"Teacher remark : ";
			       getline(cin,remark);
			       percentage=(eng+physics+chem+bio+physical)/5;
			
			       break;
			
			       case 3:
			       cout<<"\nEnter the marks obtained in following subjects....\n";
			       cout<<"\nEnglish : ";
			       cin>>eng;
			       cout<<"\nPhysics : ";
			       cin>>physics;;
			       cout<<"\nChemsitry : ";
			       cin>>chem;
			       cout<<"\nBiology : ";
			       cin>>bio;
			       cout<<"\nComputer Science ";
			       cin>>cs;
			       cout<<"\nWork Education : ";
			       cin>>work_exd;
			       cout<<"\nArt Education : ";
			       cin>>art_edu;
			       cout<<"\nHealth & Physcial Education : ";
			       cin>>health_edu;
	                       cin.ignore();
			       cout<<"Teacher remark : ";
			       getline(cin,remark);
			       percentage=(eng+physics+chem+bio+cs)/5;
			
			       break;
			
			       case 4:
			       cout<<"\nEnter the marks obtained in following subjects....\n";
			       cout<<"\nEnglish : ";
			       cin>>eng;
			       cout<<"\nPhysics : ";
			       cin>>physics;;
			       cout<<"\nChemsitry : ";
			       cin>>chem;
			       cout<<"\nMathematics : ";
			       cin>>maths;
			       cout<<"\nHindi ";
			       cin>>hindi;
			       cout<<"\nWork Education : ";
			       cin>>work_exd;
			       cout<<"\nArt Education : ";
			       cin>>art_edu;
			       cout<<"\nHealth & Physcial Education : ";
			       cin>>health_edu;
	                       cin.ignore();
			       cout<<"Teacher remark : ";
			       getline(cin,remark);
			       percentage=(eng+physics+chem+hindi+maths)/5;
			
			       break;
			
			       case 5:
			       cout<<"\nEnter the marks obtained in following subjects....\n";
			       cout<<"\nEnglish : ";
			       cin>>eng;
			       cout<<"\nPhysics : ";
			       cin>>physics;;
			       cout<<"\nChemsitry : ";
			       cin>>chem;
			       cout<<"\nMathematics : ";
			       cin>>maths;
			       cout<<"\nPhysical Eduaction ";
			       cin>>physical;
			       cout<<"\nWork Education : ";
			       cin>>work_exd;
			       cout<<"\nArt Education : ";
			       cin>>art_edu;
			       cout<<"\nHealth & Physcial Education : ";
			       cin>>health_edu;
	                       cin.ignore();
			       cout<<"Teacher remark : ";
			       getline(cin,remark);
			       percentage=(eng+physics+chem+physical+maths)/5;
			       
			       break;
			
			       case 6:
			       cout<<"\nEnter the marks obtained in following subjects....\n";
			       cout<<"\nEnglish : ";
			       cin>>eng;
			       cout<<"\nPhysics : ";
			       cin>>physics;;
			       cout<<"\nChemsitry : ";
			       cin>>chem;
			       cout<<"\nMathematics : ";
			       cin>>maths;
			       cout<<"\nComputer Science ";
			       cin>>cs;
			       cout<<"\nWork Education : ";
			       cin>>work_exd;
			       cout<<"\nArt Education : ";
			       cin>>art_edu;
			       cout<<"\nHealth & Physcial Education : ";
			       cin>>health_edu;
	                       cin.ignore();
			       cout<<"Teacher remark : ";
			       getline(cin,remark);
			       percentage=(eng+physics+chem+cs+maths)/5;
			
			       break;
			
			       case 7:
			       cout<<"\nEnter the marks obtained in following subjects....\n";
			       cout<<"\nEnglish : ";
			       cin>>eng;
			       cout<<"\nPhysics : ";
			       cin>>physics;;
			       cout<<"\nChemsitry : ";
			       cin>>chem;
			       cout<<"\nBiology : ";
			       cin>>bio;
			       cout<<"\nMathematics ";
			       cin>>maths;
			       cout<<"\nWork Education : ";
			       cin>>work_exd;
			       cout<<"\nArt Education : ";
			       cin>>art_edu;
			       cout<<"\nHealth & Physcial Education : ";
			       cin>>health_edu;
	                       cin.ignore();
			       cout<<"Teacher remark : ";
			       getline(cin,remark);
			       percentage=(eng+physics+chem+bio+maths)/5;
			
			       break;
			
			       case 8:
			       cout<<"\nEnter the marks obtained in following subjects....\n";
			       cout<<"\nEnglish : ";
			       cin>>eng;
			       cout<<"\nAccountancy : ";
			       cin>> acc;
			       cout<<"\nBusiness : ";
			       cin>>buss;
			       cout<<"\nEconomics :";
			       cin>>eco;
			       cout<<"\nHindi ";
			       cin>>hindi;
			       cout<<"\nWork Education : ";
			       cin>>work_exd;
			       cout<<"\nArt Education : ";
			       cin>>art_edu;
			       cout<<"\nHealth & Physcial Education : ";
			       cin>>health_edu;
	                       cin.ignore();
			       cout<<"Teacher remark : ";
			       getline(cin,remark);
			       percentage=(eng+ acc+buss+eco+hindi)/5;
			       
			       break;
			
			       case 9:
			       cout<<"\nEnter the marks obtained in following subjects....\n";
			       cout<<"\nEnglish : ";
			       cin>>eng;
			       cout<<"\nAccountancy : ";
			       cin>> acc;
			       cout<<"\nBusiness : ";
			       cin>>buss;
			       cout<<"\nEconomics :";
			       cin>>eco;
			       cout<<"\nMathematics ";
			       cin>>maths;
			       cout<<"\nWork Education : ";
			       cin>>work_exd;
			       cout<<"\nArt Education : ";
			       cin>>art_edu;
			       cout<<"\nHealth & Physcial Education : ";
			       cin>>health_edu;
	                       cin.ignore();
			       cout<<"Teacher remark : ";
			       getline(cin,remark);
			       percentage=(eng+ acc+buss+eco+maths)/5;
			
			       break;
			
			       case 10:
			       cout<<"\nEnter the marks obtained in following subjects....\n";
			       cout<<"\nEnglish : ";
			       cin>>eng;
			       cout<<"\nAccountancy : ";
			       cin>> acc;
			       cout<<"\nBusiness : ";
			       cin>>buss;
			       cout<<"\nEconomics :";
			       cin>>eco;
			       cout<<"\nInformation technology ";
			       cin>>information_tech;
			       cout<<"\nWork Education : ";
			       cin>>work_exd;
			       cout<<"\nArt Education : ";
			       cin>>art_edu;
			       cout<<"\nHealth & Physcial Education : ";
			       cin>>health_edu;
	                       cin.ignore();
			       cout<<"Teacher remark : ";
			       getline(cin,remark);
			       percentage=(eng+ acc+buss+eco+information_tech)/5;
			
			       break;
			
			       case 11:
			       cout<<"\nEnter the marks obtained in following subjects....\n";
			       cout<<"\nEnglish : ";
			       cin>>eng;
			       cout<<"\nAccountancy : ";
			       cin>> acc;
			       cout<<"\nBusiness : ";
			       cin>>buss;
			       cout<<"\nEconomics :";
			       cin>>eco;
			       cout<<"\nPhysical Education ";
			       cin>>physical;
			       cout<<"\nWork Education : ";
			       cin>>work_exd;
			       cout<<"\nArt Education : ";
			       cin>>art_edu;
			       cout<<"\nHealth & Physcial Education : ";
			       cin>>health_edu;
	                       cin.ignore();
			       cout<<"Teacher remark : ";
			       getline(cin,remark);
			       percentage=(eng+ acc+buss+eco+information_tech)/5;
			
			       break;
			       
			       default:
			       cout<<"Wrong choice entered";
			
			       break;
			
			       }
			 }
			 void Student::per()
		 {
			 if(percentage>90)
			 {
			 grade='A1';
			 division='I';
			 }
			 else if(percentage>80)
			 {
			 grade='A2';
			 division='I';
			 }
			 else if(percentage>70)
			 {
			 grade='B1';
			 division='I';
			 }
			 else if(percentage>60)
			 {
			 grade='B2';
			 division='I';
			 }
			 else if(percentage>50)
			 {
			 grade='C1';
			 division='II';
			 }
			 else if(percentage>33)
			 {
			 grade='D';
			 division='III';
			 }
			 else
			 {
			 grade='E';
			 division='F';
			 }

		 }
		 void Student::display1()
		 {
		 	  cout<<"\nSUBJECTS          |   MARKS OBTAINED ";
			  cout<<"\nENGLISH           |     "<<eng;
			  cout<<"\nHINDI             |     "<<hindi;
			  cout<<"\nMATHEMATICS       |     "<<maths;
			  cout<<"\nSCIENCE           |     "<<sci;
			  cout<<"\nSOCIAL STUDIES    |     "<<sst;
			  cout<<"\nGENERAL KNOWLEDGE |     "<<gk;
			  cout<<"\nCOMPUTER          |     "<<computer;
			  cout<<"\n__________________________________________________________________________________";
			  cout<<"\nCO-SCHOLASTICS AREAS.....GRADE";
			  cout<<"\n\nWORK EDUCATION......."<<work_exd;
			  cout<<"\nART EDUCATION.........."<<art_edu;
			  cout<<"\nHEALTH & PHYSICAL EDUCATION.."<<health_edu;
			  cout<<"\n__________________________________________________________________________________";
			  cout<<"\nPRECENTAGE... "<<percentage;
			  cout<<"\nGRADE........ "<<grade;
			  cout<<"\nDIVISION....."<<division;
			  cout<<"\nTEACHER REMARK...."<<remark<<endl;
		 }
		 void Student::display2()
		 {
		 	  cout<<"\nSUBJECTS          |     MARKS OBTAINED ";
			  cout<<"\nENGLISH           |       "<<eng;
			  cout<<"\nHINDI             |       "<<hindi;
			  cout<<"\nMATHEMATICS       |       "<<maths;
			  cout<<"\nSCIENCE           |       "<<sci;
			  cout<<"\nSOCIAL STUDIES    |       "<<sst;
			  cout<<"\nGENERAL KNOWLEDGE |       "<<gk;
			  cout<<"\nCOMPUTER          |       "<<computer;
			  cout<<"\nSanskrit          |       "<<sanskrit;
			  cout<<"\n__________________________________________________________________________________";
			  cout<<"\nCO-SCHOLASTICS AREAS....GRADE";
			  cout<<"\n\nWORK EDUCATION....."<<work_exd;
			  cout<<"\nART EDUCATION....."<<art_edu;
			  cout<<"\nHEALTH & PHYSICAL EDUCATION...."<<health_edu;
			  cout<<"\n__________________________________________________________________________________";
			  cout<<"\nPRECENTAGE... "<<percentage;
			  cout<<"\nGRADE........ "<<grade;
			  cout<<"\nDIVISION....."<<division;
			  cout<<"\nTEACHER REMARK...."<<remark<<endl;
		 }
		 void Student::display3()
		 {
		 	  cout<<"\nSUBJECTS          |   MARKS OBTAINED ";
			  cout<<"\nENGLISH           |      "<<eng;
			  cout<<"\nHINDI             |      "<<hindi;
			  cout<<"\nMATHEMATICS       |      "<<maths;
			  cout<<"\nSCIENCE           |      "<<sci;
			  cout<<"\nSOCIAL STUDIES    |      "<<sst;
			  cout<<"\nGENERAL KNOWLEDGE |      "<<gk;
			  cout<<"\nCOMPUTER          |      "<<computer;
			  cout<<"\n__________________________________________________________________________________";
			  cout<<"\nCO-SCHOLASTICS AREAS....GRADE";
			  cout<<"\n\nWORK EDUCATION....."<<work_exd;
			  cout<<"\nART EDUCATION....."<<art_edu;
			  cout<<"\nHEALTH & PHYSICAL EDUCATION...."<<health_edu;
			  cout<<"\n__________________________________________________________________________________";
			  cout<<"\nPRECENTAGE... "<<percentage;
			  cout<<"\nGRADE........ "<<grade;
			  cout<<"\nDIVISION....."<<division;
			  cout<<"\nTEACHER REMARK...."<<remark<<endl;
		 }
		 void Student::display4()
		 {
		 	 if( choice==1)
      	    {
			  cout<<"\nSUBJECTS          |   MARKS OBTAINED ";
			  cout<<"\nENGLISH           |     "<<eng;
			  cout<<"\nPHYSICS           |     "<<physics;
			  cout<<"\nCHEMISTRY         |     "<<chem;
			  cout<<"\nHINDI             |     "<<hindi;
			  cout<<"\nBIOLOGY           |     "<<bio;
			  cout<<"\n__________________________________________________________________________________";
			  cout<<"\nCO-SCHOLASTICS AREAS....GRADE";
			  cout<<"\n\nWORK EDUCATION....."<<work_exd;
			  cout<<"\nART EDUCATION....."<<art_edu;
			  cout<<"\nHEALTH & PHYSICAL EDUCATION...."<<health_edu;
			  cout<<"\n__________________________________________________________________________________";
			  cout<<"\nPRECENTAGE... "<<percentage;
			  cout<<"\nGRADE........ "<<grade;
			  cout<<"\nDIVISION....."<<division;
			  cout<<"\nTEACHER REMARK...."<<remark<<endl;
			  }
			  else if( choice==2)
			    {
			  cout<<"\nSUBJECTS          |   MARKS OBTAINED ";
			  cout<<"\nENGLISH           |      "<<eng;
			  cout<<"\nPHYSICS           |      "<<physics;
			  cout<<"\nCHEMISTRY         |      "<<chem;
			  cout<<"\nPHYSICAL EDUCATION|      "<<physical;
			  cout<<"\nBIOLOGY           |      "<<bio;
			  cout<<"\n__________________________________________________________________________________";
			  cout<<"\nCO-SCHOLASTICS AREAS....GRADE";
			  cout<<"\n\nWORK EDUCATION....."<<work_exd;
			  cout<<"\nART EDUCATION....."<<art_edu;
			  cout<<"\nHEALTH & PHYSICAL EDUCATION...."<<health_edu;
			  cout<<"\n__________________________________________________________________________________";
			  cout<<"\nPRECENTAGE... "<<percentage;
			  cout<<"\nGRADE........ "<<grade;
			  cout<<"\nDIVISION....."<<division;
			  cout<<"\nTEACHER REMARK...."<<remark<<endl;
			  }
			   else if( choice==3)
			    {
			  cout<<"\nSUBJECTS          |   MARKS OBTAINED ";
			  cout<<"\nENGLISH           |      "<<eng;
			  cout<<"\nPHYSICS           |      "<<physics;
			  cout<<"\nCHEMISTRY         |      "<<chem;
			  cout<<"\nCOMPUTER SCIENCE  |      "<<cs;
			  cout<<"\nBIOLOGY           |      "<<bio;
			  cout<<"\n__________________________________________________________________________________";
			  cout<<"\nCO-SCHOLASTICS AREAS....GRADE";
			  cout<<"\n\nWORK EDUCATION....."<<work_exd;
			  cout<<"\nART EDUCATION....."<<art_edu;
			  cout<<"\nHEALTH & PHYSICAL EDUCATION...."<<health_edu;
			  cout<<"\n__________________________________________________________________________________";
			  cout<<"\nPRECENTAGE... "<<percentage;
			  cout<<"\nGRADE........ "<<grade;
			  cout<<"\nDIVISION....."<<division;
			  cout<<"\nTEACHER REMARK...."<<remark<<endl;
			  }
			   else if( choice==4)
			  {
			  cout<<"\nSUBJECTS          |   MARKS OBTAINED ";
			  cout<<"\nENGLISH           |      "<<eng;
			  cout<<"\nPHYSICS           |      "<<physics;
			  cout<<"\nCHEMISTRY         |      "<<chem;
			  cout<<"\nHINDI             |      "<<hindi;
			  cout<<"\nMATHEMATICS       |      "<<maths;
			  cout<<"\n__________________________________________________________________________________";
			  cout<<"\nCO-SCHOLASTICS AREAS....GRADE";
			  cout<<"\n\nWORK EDUCATION....."<<work_exd;
			  cout<<"\nART EDUCATION....."<<art_edu;
			  cout<<"\nHEALTH & PHYSICAL EDUCATION...."<<health_edu;
			  cout<<"\n__________________________________________________________________________________";
			  cout<<"\nPRECENTAGE... "<<percentage;
			  cout<<"\nGRADE........ "<<grade;
			  cout<<"\nDIVISION....."<<division;
			  cout<<"\nTEACHER REMARK...."<<remark<<endl;
			  }
			    else if( choice==5)
			  {
			  cout<<"\nSUBJECTS          |     MARKS OBTAINED ";
			  cout<<"\nENGLISH           |      "<<eng;
			  cout<<"\nPHYSICS           |      "<<physics;
			  cout<<"\nCHEMISTRY         |      "<<chem;
			  cout<<"\nPHYSICAL EDUCATION|      "<<physical;
			  cout<<"\nMATHEMATICS       |      "<<maths;
			  cout<<"\n__________________________________________________________________________________";
			  cout<<"\nCO-SCHOLASTICS AREAS....GRADE";
			  cout<<"\n\nWORK EDUCATION....."<<work_exd;
			  cout<<"\nART EDUCATION....."<<art_edu;
			  cout<<"\nHEALTH & PHYSICAL EDUCATION...."<<health_edu;
			  cout<<"\n__________________________________________________________________________________";
			  cout<<"\nPRECENTAGE... "<<percentage;
			  cout<<"\nGRADE........ "<<grade;
			  cout<<"\nDIVISION....."<<division;
			  cout<<"\nTEACHER REMARK...."<<remark<<endl;
			  }
			    else if( choice==6)
			  {
			  cout<<"\nSUBJECTS          |     MARKS OBTAINED ";
			  cout<<"\nENGLISH           |       "<<eng;
			  cout<<"\nPHYSICS           |       "<<physics;
			  cout<<"\nCHEMISTRY         |       "<<chem;
			  cout<<"\nCOMPUTER SCIENCE  |       "<<cs;
			  cout<<"\nMATHEMATICS       |       "<<maths;
			  cout<<"\n__________________________________________________________________________________";
			  cout<<"\nCO-SCHOLASTICS AREAS....GRADE";
			  cout<<"\n\nWORK EDUCATION....."<<work_exd;
			  cout<<"\nART EDUCATION....."<<art_edu;
			  cout<<"\nHEALTH & PHYSICAL EDUCATION...."<<health_edu;
			  cout<<"\n__________________________________________________________________________________";
			  cout<<"\nPRECENTAGE... "<<percentage;
			  cout<<"\nGRADE........ "<<grade;
			  cout<<"\nDIVISION....."<<division;
			  cout<<"\nTEACHER REMARK...."<<remark<<endl;
			  }
			  else if( choice==7)
			  {
			  cout<<"\nSUBJECTS          |     MARKS OBTAINED ";
			  cout<<"\nENGLISH           |       "<<eng;
			  cout<<"\nPHYSICS           |       "<<physics;
			  cout<<"\nCHEMISTRY         |       "<<chem;
			  cout<<"\nBIOLOGY           |       "<<bio;
			  cout<<"\nMATHEMATICS       |       "<<maths;
			  cout<<"\n__________________________________________________________________________________";
			  cout<<"\nCO-SCHOLASTICS AREAS....GRADE";
			  cout<<"\n\nWORK EDUCATION....."<<work_exd;
			  cout<<"\nART EDUCATION....."<<art_edu;
			  cout<<"\nHEALTH & PHYSICAL EDUCATION...."<<health_edu;
			  cout<<"\n__________________________________________________________________________________";
			  cout<<"\nPRECENTAGE... "<<percentage;
			  cout<<"\nGRADE........ "<<grade;
			  cout<<"\nDIVISION....."<<division;
			  cout<<"\nTEACHER REMARK...."<<remark<<endl;
			  }
			    else if( choice==8)
			  {
			  cout<<"\nSUBJECTS          |       MARKS OBTAINED ";
			  cout<<"\nENGLISH           |         "<<eng;
			  cout<<"\nACCOUNTANCY       |         "<<acc;
			  cout<<"\nBUSINESS          |         "<<buss;
			  cout<<"\nHINDI             |         "<<hindi;
			  cout<<"\nECONOMICS         |         "<<eco;
			  cout<<"\n__________________________________________________________________________________";
			  cout<<"\nCO-SCHOLASTICS AREAS....GRADE";
			  cout<<"\n\nWORK EDUCATION....."<<work_exd;
			  cout<<"\nART EDUCATION....."<<art_edu;
			  cout<<"\nHEALTH & PHYSICAL EDUCATION...."<<health_edu;
			  cout<<"\n__________________________________________________________________________________";
			  cout<<"\nPRECENTAGE... "<<percentage;
			  cout<<"\nGRADE........ "<<grade;
			  cout<<"\nDIVISION....."<<division;
			  cout<<"\nTEACHER REMARK...."<<remark<<endl;
			  }
			    else if( choice==9)
			  {
			  cout<<"\nSUBJECTS          |    MARKS OBTAINED ";
			  cout<<"\nENGLISH           |      "<<eng;
			  cout<<"\nACCOUNTANCY       |      "<<acc;
			  cout<<"\nBUSINESS          |      "<<buss;
			  cout<<"\nMATHEMATICS       |      "<<maths;
			  cout<<"\nECONOMICS         |      "<<eco;
			  cout<<"\n__________________________________________________________________________________";
                          cout<<"\nCO-SCHOLASTICS AREAS....GRADE";
			  cout<<"\n\nWORK EDUCATION....."<<work_exd;
			  cout<<"\nART EDUCATION....."<<art_edu;
			  cout<<"\nHEALTH & PHYSICAL EDUCATION...."<<health_edu;	
			  cout<<"\n__________________________________________________________________________________";
			  cout<<"\nPRECENTAGE... "<<percentage;
			  cout<<"\nGRADE........ "<<grade;
			  cout<<"\nDIVISION....."<<division;
			  cout<<"\nTEACHER REMARK...."<<remark<<endl;
			  }
			    else if( choice==10)
			  {
			  cout<<"\nSUBJECTS          |     MARKS OBTAINED ";
			  cout<<"\nENGLISH           |       "<<eng;
			  cout<<"\nACCOUNTANCY       |       "<<acc;
			  cout<<"\nBUSINESS          |       "<<buss;
			  cout<<"\nINFORMATION       |       "<<information_tech;
			  cout<<"\nTECHNOLOGY";
			  cout<<"\nECONOMICS         |       "<<eco;
			  cout<<"\n__________________________________________________________________________________";
			  cout<<"\nCO-SCHOLASTICS AREAS....GRADE";
			  cout<<"\n\nWORK EDUCATION....."<<work_exd;
			  cout<<"\nART EDUCATION....."<<art_edu;
			  cout<<"\nHEALTH & PHYSICAL EDUCATION...."<<health_edu;
			  cout<<"\n__________________________________________________________________________________";
			  cout<<"\nPRECENTAGE... "<<percentage;
			  cout<<"\nGRADE........ "<<grade;
			  cout<<"\nDIVISION....."<<division;
			  cout<<"\nTEACHER REMARK...."<<remark<<endl;
			  }
			    else
			  {
			  cout<<"\nSUBJECTS          |   MARKS OBTAINED ";
			  cout<<"\nENGLISH           |     "<<eng;
			  cout<<"\nACCOUNTANCY       |     "<<acc;
			  cout<<"\nBUSINESS          |     "<<buss;
			  cout<<"\nPHYSICAL EDUCATION|     "<<physical;
			  cout<<"\nECONOMICS         |     "<<eco;
			  cout<<"\n__________________________________________________________________________________";
			  cout<<"\nCO-SCHOLASTICS AREAS....GRADE";
			  cout<<"\n\nWORK EDUCATION....."<<work_exd;
			  cout<<"\nART EDUCATION....."<<art_edu;
			  cout<<"\nHEALTH & PHYSICAL EDUCATION...."<<health_edu;
			  cout<<"\n__________________________________________________________________________________";
			  cout<<"\nPRECENTAGE..."<<percentage;
			  cout<<"\nGRADE........"<<grade;
			  cout<<"\nDIVISION....."<<division;
			  cout<<"\nTEACHER REMARK...."<<remark<<endl;
			  }
		 }
		 
		 int main()
		 {
		 char year[10],grade,sec;
		 long roll_no,reg_no,clss;
                 string name;
		 cout<<"Enter the following details.....\n";
		 cout<<"\nStudent name : ";
                 getline(cin,name);
	         cout<<"\nAcademic year : ";
	         cin>>year;
	         cout<<"\nClasss : ";
	         cin>>clss;
	         cout<<"\nSection : ";
	         cin>>sec;
	         cout<<"\nRoll number : ";
	         cin>>roll_no;
	         cout<<"\nRegistration number : ";
	         cin>>reg_no;

		 	Student ob;
		 	if(clss<=4)
		 	{
		 		 ob.first();
				 ob.per();
				 system("CLS");
				 system("PAUSE");
				 cout<<"\t\t\tJDC SECONDARY SCHOOL";
				 cout<<"\n\t\t\tHALDWANI(Nanital)UTTARAKHAND-263139";
				 cout<<"\n\t\t\tPROGRESS REPORT";
				 cout<<"\n\t\t\tACADEMIC YEAR";
				 cout<<"\n\t\t\t"<<year;
				 cout<<"\n__________________________________________________________________________________";
				 cout<<"\nADMISSION NUMBER...."<<reg_no;
				 cout<<"\nNAME...."<<name;
				 cout<<"\nCLASS..."<<clss;
				 cout<<"\nSection..."<<sec;
				 cout<<"\nROLL NUMBER..."<<roll_no;
				 cout<<"\n__________________________________________________________________________________";
				 ob.display1();
				 system("PAUSE");	
			}
			else if(clss<=8)
			{
				 ob.second();
				 ob.per();
				 system("CLS");
				 system("PAUSE");
				 cout<<"\t\t\tJDC SECONDARY SCHOOL";
				 cout<<"\n\t\t\tHALDWANI(Nanital)UTTARAKHAND-263139";
				 cout<<"\n\t\t\tPROGRESS REPORT";
				 cout<<"\n\t\t\tACADEMIC YEAR";
				 cout<<"\n\t\t\t\t"<<year;
				 cout<<"\n__________________________________________________________________________________";
				 cout<<"\nADMISSION NUMBER...."<<reg_no;
				 cout<<"\nNAME...."<<name;
				 cout<<"\nCLASS..."<<clss;
				 cout<<"\nSection..."<<sec;
				 cout<<"\nROLL NUMBER..."<<roll_no;
				 cout<<"\n__________________________________________________________________________________";
				 ob.display2();
				 system("PAUSE");
			}
			else if(clss<=10)
			{
				 ob.third();
				 ob.per();
				 system("CLS");
				 system("PAUSE");
				 cout<<"\t\t\tJDC SECONDARY SCHOOL";
				 cout<<"\n\t\t\tHALDWANI(Nanital)UTTARAKHAND-263139";
				 cout<<"\n\t\t\tPROGRESS REPORT";
				 cout<<"\n\t\t\tACADEMIC YEAR";
				 cout<<"\n\t\t\t\t"<<year;
				 cout<<"\n__________________________________________________________________________________";
				 cout<<"\nADMISSION NUMBER...."<<reg_no;
				 cout<<"\nNAME...."<<name;
				 cout<<"\nCLASS..."<<clss;
				 cout<<"\nSection..."<<sec;
				 cout<<"\nROLL NUMBER..."<<roll_no;
				 cout<<"\n__________________________________________________________________________________";
				 ob.display3();
				 system("PAUSE");
			}
			else if(clss<=12)
			{
				 ob.fourth();
				 ob.per();
				 system("CLS");
				 system("PAUSE");
				 cout<<"\t\t\tJDC SECONDARY SCHOOL";
				 cout<<"\n\t\t\tHALDWANI(Nanital)UTTARAKHAND-263139";
				 cout<<"\n\t\t\tPROGRESS REPORT";
				 cout<<"\n\t\t\tACADEMIC YEAR";
				 cout<<"\n\t\t\t\t"<<year;
				 cout<<"\n__________________________________________________________________________________";
				 cout<<"\nADMISSION NUMBER...."<<reg_no;
				 cout<<"\nNAME...."<<name;
				 cout<<"\nCLASS..."<<clss;
				 cout<<"\nSection..."<<sec;
				 cout<<"\nROLL NUMBER..."<<roll_no;
				 cout<<"\n__________________________________________________________________________________";
				 ob.display4();
				 system("PAUSE");
			}
			else
			{
				cout<<"Wrong choice entered.";
				exit(0);
			}
			return(0);
		 }
	 
