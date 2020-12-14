//*******************************************************************
//                     HEADER FILE USED IN PROJECT
//*******************************************************************
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
//*******************************************************************
//                       GLOBAL DECLARATION OF OBJECT
//*******************************************************************
class patient
{
	private:
	char pname[10];
	char paddress[50];
	int pmobile_no;
	char sex[6];
	char disease[15];
	char DOB[10];
	int pnum;
	public:
		void create_patient()
		{
			cout<<"\n Patient number: ";
			cin>>pnum;
			fflush(stdin);
			cout<<"\n Enter name of patient:";
			cin>>pname;
			cout<<"\n Enter patient address:";
			cin>>paddress;
			cout<<"\n Mobile No.";
			cin>>pmobile_no;
			cout<<"\n Sex: 1.Male 2.Female 3.Other \n";
			cin>>sex;
			cout<<"\n Date Of Birth(DD/MM/YYYY): ";
			cin>>DOB;
			cout<<"\n Enter the disease:";
			cin>>disease;
		}
		void show_patient()
		{
			cout<<"\n Patient number: "<<pnum;
			cout<<"\n Patient name : "<<pname;
			cout<<"\n patient address : "<<paddress;
			cout<<"\n Mobile No. : +91-"<<pmobile_no;
			cout<<"\n Sex:"<<sex;
			cout<<"\n Date Of Birth:"<<DOB;
			cout<<"\n Name of Disease:"<<disease;
			cout<<"\n\n";
		}
		char* returnpname()
		{
		    return pname;
		}
		int returnpnum()
		{
		    return pnum;
		}
		int store_patient();
		void search_patient(char *);
		void show_all_patient();

};
	/*	void modify_patient()
		{
			cout<<"\n Patient number:"<<pnum;
			cout<<"\n Updated patient name:";
			puts(pname);
			cout<<"\n updated patient address:";
			puts(paddress);
			cout<<"\n updated mobile no : +91-"<<pmobile_no;
			cout<<"\n Sex:"<<sex;
			cout<<"\n updated DOB:"<<DOB;
		}
};*/

class doctor
{
	private:
	char dname[10];
	char deg[10];
	int dmobile_no;
	char ddname[15];
	int dnum;
	public:
		void create_doctor()
		{
		    cout<<"\n DETAIL OF DOCTOR"<<endl;
		    cout<<"\n Doctor number:";
		    cin>>dnum;
			cout<<"\n Enter the name of doctor:"<<endl;
			cin>>dname;
			cout<<"\n Degination of the doctor:"<<endl;
			cin>>deg;
			cout<<"\n contact number : ";
			cin>>dmobile_no;
		//	cout<<"\n List of doctor specilist of a particular disease: "<<endl;
		//	cin>>ddname;
		}
		void show_doctor()
		{
		    cout<<"\n Doctor number : "<<dnum;
			cout<<"\n Name Of Doctor : "<<dname;
			cout<<"\n Degination:"<<deg;
			cout<<"\n Contact no. : +91-"<<dmobile_no;
		}
		void show_all_doctor();
		int store_doctor();
		char* returndname()
		{
		    return dname;
		}
		int returndnum()
		{
		    return dnum;
		}
};
class room
{
	private:
	char room[50];
	int avl;
	public:
		void create_room()
		{
			cout<<"\n DETAIL OF ROOM"<<endl;
			cout<<"\n Category of room:"<<endl;
			cin>>room; 							//sharing (6-8) / special(3-4) / private(single) /duluxe
			cout<<"\n Enter available room:";
			cin>>avl;
		}
		void show_room()
		{
		    cout<<"\n DETAIL OF ROOM";
			cout<<"\n Category of Room:"<<room;
			cout<<"\n available room :"<<avl;
		}
		void view_room();
		void store_room();
};

class lab
{
	private:
	char lab[8];
	public:
		void create_lab()
		{
			cout<<"\n LAB DETAIL"<<endl;
			cout<<"\n Types of Labs: "<<endl;  // chemistry,hematology,microbiology,immunology,surgical pathology,cytology
			cin>>lab;
		}
		void show_lab()
		{
			cout<<"\n LAB : "<<lab;
		}
		void view_lab();
		void store_lab();
};
class staff
{
	private:
	char sname[10];
	int sage;
	char saddress[20];
	int smobile;
	char ssex[10];
	char sdeg[10];
	public:
		void create_staff()
		{
			cout<<"\n STAFF DETAIL"<<endl;
			cout<<"\n Enter name of the staff:";
			cin>>sname;
			cout<<"\n Enter address of the staff:";
			cin>>saddress;
			cout<<"\n Enter age of the saff:";
			cin>>sage;
			cout<<"\n Enter the degination of staff:";
			cin>>sdeg;
			cout<<"\n Enter Sex :";
			cin>>ssex;
		}
		void show_staff()
		{
			cout<<"\n Staff name :"<<sname;
			cout<<"\n Staff address :"<<saddress;
			cout<<"\n Age: "<<sage;
			cout<<"\n Staff degination:"<<sdeg;
			cout<<"\n sex:"<<ssex;
		}
		void store_staff();
		void view_staff();
		char* returnsname()
		{
		    return sname;
		}
};
class nurse
{
	private:
		char nname[20];
		char ndeg[10];
		int nno;
		int nmobile;
		public:
			void create_nurse()
			{
			    cout<<"\n Enter nurse registration number:";
			    cin>>nno;
			    fflush(stdin);
				cout<<"\n Enter the name of Nurses:";
				cin>>nname;
				cout<<"\n Enter the degination of Nurses:";
				cin>>ndeg;
				cout<<"\n Enter the mobile number:";
				cin>>nmobile;
			}
			void show_nurse()
			{
			    cout<<"\n Registration no."<<nno;
				cout<<"\n Name of Nurses:"<<nname;
				cout<<"\n Degination :"<<ndeg;
				cout<<"\n Contact number:"<<nmobile;
			}
			void view_nurse();
			void store_nurse();
			char* returnnname()
			{
			    return nname;
			}
};

class bill
{
private:
    int room_charge;
    int doctor_charge;
    int x_ray;
    int medicine;
    int blood_test;
    int lab_charge;
    int sum=0;
    int gst;
    int total;
public:
    void get_bill()
    {
        cout<<"\nCost of Doctor: ";
        cin>>doctor_charge;
        cout<<"\nCost of Room charge: ";
        cin>>room_charge;
        cout<<"\nCost of Medicine: ";
        cin>>medicine;
        cout<<"\nCost of X-ray: ";
        cin>>x_ray;
        cout<<"\nCost of Blood test: ";
        cin>>blood_test;
        cout<<"\nCost of lab charge: ";
        cin>>lab_charge;
    }
    void show_bill()
    {
        cout<<"\n\n\tDOCTOR -> "<<doctor_charge;
        cout<<"\n\tROOM -> "<<room_charge;
        cout<<"\n\tMEDICINE -> "<<medicine;
        cout<<"\n\tX-RAY -> "<<x_ray;
        cout<<"\n\tBLOOD TEST -> "<<blood_test;
        cout<<"\n\tLAB CHARGE -> "<<lab_charge;
        cout<<"\n\tGST -> 5%\n";
    }
    void total_amount()
    {
        sum= room_charge+doctor_charge+x_ray+medicine+blood_test+lab_charge;
        gst= (5*sum/100);
        total= sum+gst;
        cout<<"\n\n \t\t TOTAL AMOUNT :"<<total;
    }

};
class operation_theatre
{
private:
    char OT[10];
	public:
		void create_OT()
		{
			cout<<"\n OPERATION THEATRE "<<endl;
			cout<<"\n Types of OT: "<<endl;
			cin>>OT;
		}
		void show_OT()
		{
			cout<<"\n Operation theatre : "<<OT;
		}
		void view_OT();
		void store_OT();
};

//******************************************************************
//                   FUNCTION TO WRITE IN FILE
//******************************************************************
int patient::store_patient()
{
    ofstream p;
    p.open("patient.dat",ios::out|ios::app|ios::binary);
    p.write((char *)this,sizeof(*this));
    p.close();
    return(1);
}
void patient::show_all_patient()
{

    fstream p1;
    p1.open("patient.dat",ios::in|ios::app|ios::binary);
    if(!p1)
    {
        cout<<"\n File could not open";
    }
    else
    {
        p1.read((char *)this,sizeof(*this));
        while(!p1.eof())
        {
            show_patient();
            p1.read((char *)this,sizeof(*this));
        }
        p1.close();
    }
}
//*******************************************************************
//                 FUNCTION TO SERACH IN FILE
//*******************************************************************
void patient::search_patient(char *t)
{
    int counter=0;
    ifstream p;
    p.open("patient.dat",ios::in|ios::app|ios::binary);
    if(!p)
    {
        cout<<"\n Data not found";
    }
    else{
        p.read((char*)&p,sizeof(patient));
        while(!p.eof()){
            if(!strcmp(t,pname)){
                show_patient();
                counter++;
            }
            p.read((char*)&p,sizeof(patient));
        }
        if(counter==0)
        {
            cout<<"\n record not found";
        }
        p.close();
    }
}
//*********************************************************************
//               FUNCTION TO SHOW RECORD FROM THE FILE
//*********************************************************************
 int doctor::store_doctor()
{
    fstream d;
    d.open("doctor.dat",ios::in|ios::out|ios::ate|ios::binary);
    d.write((char*)&d,sizeof(d));
    d.close();
}
void doctor::show_all_doctor()
{
    fstream d;
    d.open("doctor.dat",ios::in|ios::out|ios::ate|ios::binary);
    if(!d)
    {
        cout<<"\n File could not open";
    }
    else
    {
        d.read((char *)this,sizeof(*this));
        while(!d.eof())
        {
            show_doctor();
            d.read((char *)this,sizeof(*this));
        }
        d.close();
    }
}
void room::view_room()
{
    fstream r;
    r.open("room.dat",ios::out|ios::in|ios::ate|ios::binary);
    r.write((char *)this,sizeof(*this));
    r.close();
    /*r.open("room.txt",ios::in|ios::app);
    if(!r)
    {
        cout<<"\n file not found";
    }
    else{
            r.read((char*)this,sizeof(*this));
            while(!r.eof())
            {
                show_room();
                r.read((char*)this,sizeof(*this));
            }
            r.close();
    }*/
}
void lab::view_lab()
{
    fstream l;
    l.open("lab.dat",ios::in|ios::ate|ios::binary);
    if(!l)
    {
        cout<<"\n File not found";
    }
    else{
        l.read((char *)this,sizeof(*this));
        l.close();
    }
}
void lab::store_lab()
{
    fstream l;
    l.open("lab.dat",ios::in|ios::out|ios::ate|ios::binary);
    l.write((char*)&l,sizeof(l));
    l.close();
}
void room::store_room()
{
    fstream r;
    r.open("room.dat",ios::in|ios::out|ios::ate|ios::binary);
    r.write((char*)&r,sizeof(r));
    r.close();
}
void staff::view_staff()
{
    fstream s;
    s.open("staff.dat",ios::in|ios::ate|ios::binary);
    if(!s)
    {
        cout<<"\n File not found";
    }
    else{
        s.read((char *)this,sizeof(*this));
        s.close();
    }
}
void staff::store_staff()
{
    fstream s;
    s.open("staff.dat",ios::in|ios::out|ios::ate|ios::binary);
    s.write((char*)&s,sizeof(s));
    s.close();
}
void nurse::view_nurse()
{
    fstream n;
    n.open("nurse.dat",ios::in|ios::out|ios::ate|ios::binary);
    if(!n)
    {
        cout<<"\n File not found";
    }
    else{
        n.read((char *)this,sizeof(*this));
        n.close();
    }
}
void nurse ::store_nurse()
{
    fstream n;
    n.open("nurse.dat",ios::in|ios::out|ios::ate|ios::binary);
    n.write((char*)&n,sizeof(n));
    n.close();
}
void operation_theatre::store_OT()
{
    fstream o;
    o.open("OT.dat",ios::in|ios::out|ios::ate|ios::binary);
    o.write((char*)&o,sizeof(o));
    o.close();
}
void operation_theatre::view_OT()
{
    fstream o;
    o.open("OT.dat",ios::in|ios::out|ios::ate|ios::binary);
    o.write((char*)&o,sizeof(o));
    o.close();
}
//************************************************************************
//                       THE MAIN FUNCTION OF PROGRAM
//************************************************************************
int main()
{
    int no;
    char k,y,Y;
     patient p,p1;
     doctor d;
     room r;
     nurse n;
     staff s;
     lab l;
     operation_theatre o;
    char choice;
    //*********************************************************************
    //                  ADMINISTRATOR MENU FUNCTION
    //*********************************************************************
    cout<<"\n\n\t\t\t\t\t      HOSPITAL MANAGEMENT SYSTEM \n";
    cout<<"\t\t\t\t\t  -----------------------------------\n\n";
    label: cout<<"\t\t\t\t\t               INDEX  \n\n";
    cout<<"\t\t a. ADD NEW PATIENT DETAIL";
    cout<<"\t\t\t b. SEARCH PATIENT RECORD";
    cout<<"\n\t\t c. MODIFY PATIENT RECORD";
    cout<<"\t\t\t d. DELETE PATIENT RECORD";
    cout<<"\n\t\t e. SHOW ALL PATIENT RECORD";
    cout<<"\t\t\t f. SHOW DETAIL OF DOCTOR";
    cout<<"\n\t\t g. SEARCH DOCTOR RECORD";
    cout<<"\t\t\t h. MODIFY DOCTOR RECORD";
    cout<<"\n\t\t i. DELETE DOCTOR RECORD";
    cout<<"\t\t\t j. BILL CALCULATION";
    cout<<"\n\t\t k. ROOM RESERVATION";
    cout<<" \t\t\t\t l. ALL LAB INFORMATION";
    cout<<"\n\t\t m. ALL WARD INFORMATION";
    cout<<"\t\t\t n. ALL OPEARTION THEATRES";
    cout<<"\n\t\t o. SHOW ALL NURSE DETAIL";
    cout<<"\t\t\t p. SEARCH PARTICULAR NURSE DETAIL";
    cout<<"\n\t\t q. SHOW ALL STAFF DETAIL";
    cout<<"\t\t\t r. SEARCH PARTICULAR STAFF DETAIL\n";

    cout<<"\n\t\t\t\t\t     SOME ADDITIONAL UPDATES \n\n";

    cout<<"\t\t s. ADDING NEW INFORMATION OF NURSE ";
    cout<<"\t\t t. ADDING NEW INFORMATION OF DOCTOR\n";
    cout<<"\t\t u. ADDING NEW INFORMATION OF STAFF";
    cout<<"\t\t v. ADDING NEW ROOM INFORMATION\n";
    cout<<"\t\t w. ADDING NEW LAB INFORMATION";
    cout<<"\t\t\t x. ADDING NEW INFORMATION IN OPERATION THERTER\n";
    cin>>choice;
    switch(choice)
    {
    case 'a':
        {
            cout<<"\n\t\t\t\t ***** ENTER DETAIL OF NEW PATIENT *****\n";
            p.create_patient();
            p.show_patient();
            p.store_patient();
            cout<<"\n\n You want to procced the program (y/n)";
            cin>>k;
            if(k=='y'||k=='Y')
            {
                goto label;
            }
            else{
                return 0;
            }
            break;

        }
    case 'b':
        {
            cout<<"\n\t\t\t\t ***** SEARCHING RECORD OF PATIENT *****\n";
            fstream FILE;
            patient p4;
            int no,pnum;
            int flag=-1;
            char pname[50];
            FILE.open("patient.dat",ios::in|ios::app|ios::binary);
            //******************************************************************
            //              searching by patient number
            //******************************************************************
           /*
            cout<<"\n Enter the patient number to search:";
            cin>>pnum;
            while(FILE.eof()==0)
            {
                FILE.read((char*)&p4,sizeof(p4));
                if(p4.returnpnum()==pnum)
                {
                    flag=1;
                    cout<<"\n RECORD FOUND!!\n";
                    p4.show_patient();
                    break;
                }
                if(flag==-1)
                {
                    cout<<"\n RECORD NOT FOUND";
                }
            }
                */
                //*************************************************************
                //                  Searching by patient name
                //*************************************************************

                cout<<"\n Enter the Patient Name to search:";
                cin>>pname;
                cin.getline(pname,50);
                while(FILE.eof()==0)
                {
                    FILE.read((char*)&p4,sizeof(p4));
                    if(strcmp(p4.returnpname(),pname)==0);
                    {
                        flag=1;
                        cout<<"\n RECORD FOUND!!\n";
                        p4.show_patient();
                        break;
                    }
                }
                if(flag==-1)
                {
                    cout<<"\n RECORD NOT FOUND";
                }

                cout<<"\n\n You want to procced the program (y/n)";
            cin>>k;
            if(k=='y'||k=='Y')
            {
                goto label;
            }
            else{
                return 0;
            }
                break;
            }
    case 'c':
        {
            cout<<"\n\t\t\t\t ***** MODIFY PATIENT RECORD *****\n";
            fstream FILE;
            FILE.open("patient.dat",ios::in|ios::out|ios::ate|ios::binary);
            int pnum_object=FILE.tellp()/sizeof(p);
            cout<<"\n Enter the Patient number whose record has to be updated:";
            cin>>no;
            int location=(no-1)*sizeof(p);
            FILE.seekp(location);
            cout<<"\n ENTER THE NEW DETAIL:: \n";
            p.create_patient();
            FILE.write((char*)&p,sizeof(p));
            FILE.seekg(0);
            cout<<"\n FILE UPDATED!!";
            for(int i=0;i<pnum_object;i++)
            {
                FILE.read((char*)&p,sizeof(p));
                p.show_patient();
            }
            cout<<"\n\n You want to procced the program (y/n)";
            cin>>k;
            if(k=='y'||k=='Y')
            {
                goto label;
            }
            else{
                return 0;
            }
            break;
        }
    case 'd':
        {
            patient p,p1;
            fstream FILE;
            FILE.open("patient.dat",ios::in|ios::out|ios::ate|ios::binary);
            char* pname1;
            char found='f',confirm='n';
            cout<<"\n enter the name of patient which we want to delete:";
            cin>>pname1;
            while(!FILE.eof())
            {
                FILE.read((char*)&p,sizeof(p));
                if(p.returnpname()== pname1)
                {
                    p.show_patient();
                    found='t';
                    cout<<"\n are you sure to delee this record(y/n)";
                    cin>>confirm;
                    if(confirm=='n')
                        FILE.write((char*)&p,sizeof(p));
                }
                else
                    FILE.write((char*)&p,sizeof(p));
            }
            if(found=='f')
            {
                cout<<"\n record not found";
                FILE.close();
                remove("patient.dat");
                FILE.open("patient.dat",ios::in);
                cout<<"\n now file contain";
                while(!FILE.eof())
                {
                    FILE.read((char*)&p1,sizeof(p1));
                    if(FILE.eof())
                        break;
                    p1.show_patient();
                }
            }
            FILE.close();
            return 0;
        }
    case 'e':
        {
            cout<<"\n\t\t\t\t ***** SHOW ALL PATIENT RECORD *****\n";
            p1.show_all_patient();
                        cout<<"\n\n You want to procced the program(y/n):\n";
                        cin>>k;
            if(k=='y'||k=='Y')
            {
                goto label;
            }
            else{
                return 0;
            }
            break;
        }
    case 'f':
        {
            cout<<"\n\t\t\t\t ***** DETAIL OF DOCTOR *****\n";
            d.show_all_doctor();
            cout<<"\n\n You want to procced the program (y/n): \n";
            cin>>k;
            if(k=='y'||k=='Y')
            {
                goto label;
            }
            else{
                return 0;
            }
            break;
        }
    case 'g':
        {
            cout<<"\n\t\t\t\t ***** SEARCH DOCTOR RECORD *****\n";
            fstream FILE1;
            doctor d2;
            int no,dnum;
            int flag=-1;
            char dname[50];
            FILE1.open("doctor.txt",ios::in|ios::app);
            //******************************************************************
            //              searching by Doctor number
            //******************************************************************
           /*
            cout<<"\n Enter the doctor number to search:";
            cin>>dnum;
            while(FILE1.eof()==0)
            {
                FILE.read((char*)&d2,sizeof(d2));
                if(d2.returndnum()==dnum)
                {
                    flag=1;
                    cout<<"\n RECORD FOUND!!\n";
                    d2.show_doctor();
                    break;
                }
                if(flag==-1)
                {
                    cout<<"\n RECORD NOT FOUND";
                }
            }
                */
                //*************************************************************
                //                  Searching by Doctor name
                //*************************************************************

                cout<<"\n Enter the Doctor Name to search:";
                cin>>dname;
                cin.getline(dname,50);
                while(FILE1.eof()==0)
                {
                    FILE1.read((char*)&d2,sizeof(d2));
                    if(strcmp(d2.returndname(),dname)==0);
                    {
                        flag=1;
                        cout<<"\n RECORD FOUND!!\n";
                        d2.show_doctor();
                        break;
                    }
                }
                if(flag==-1)
                {
                    cout<<"\n RECORD NOT FOUND";
                }

                cout<<"\n\n You want to procced the program (y/n):\n";
            cin>>k;
            if(k=='y'||k=='Y')
            {
                goto label;
            }
            else{
                return 0;
            }
                break;
        }
    case 'h':
        {
            cout<<"\n\t\t\t\t ***** MODIFY DOCTOR RECORD *****\n";
            fstream FILE1;
            doctor d2;
            int no;
            FILE1.open("doctor.txt",ios::in|ios::out|ios::ate);
            int dnum_object=FILE1.tellp()/sizeof(d2);
            cout<<"\n Enter the Doctor number whose record has to be updated:";
            cin>>no;
            int location=(no-1)*sizeof(d2);
            FILE1.seekp(location);
            cout<<"\n ENTER THE NEW DETAIL:: \n";
            d2.create_doctor();
            FILE1.write((char*)&d2,sizeof(d2));
            FILE1.seekg(0);
            cout<<"\n FILE UPDATED!!";
            for(int i=0;i<dnum_object;i++)
            {
                FILE1.read((char*)&d2,sizeof(d2));
                d2.show_doctor();
            }
            cout<<"\n\n You want to procced the program (y/n): \n";
            cin>>k;
            if(k=='y'||k=='Y')
            {
                goto label;
            }
            else{
                return 0;
            }
            break;
        }
    case 'i':
        {
            cout<<"\n\t\t\t\t ***** DELETE DOCTOR RECORD *****\n";

            break;
        }
    case 'j':
        {
            cout<<"\n\t\t\t\t ***** BILL CALCULATION *****\n";
            bill b;
            int sum=0;
            b.get_bill();
            b.show_bill();
            b.total_amount();
            return 0;
            cout<<"\n\n You want to procced the program (y/n)";
            cin>>k;
            if(k=='y'||k=='Y')
            {
                goto label;
            }
            else{
                return 0;
            }
            break;
        }
    case 'k':
        {
            cout<<"\n\t\t\t\t ***** ROOM RESERVATION \n";
            r.create_room();
            r.show_room();
            cout<<"\n\n You want to procced the program (y/n):\n";
            cin>>k;
            if(k=='y'||k=='Y')
            {
                goto label;
            }
            else{
                return 0;
            }
            break;
        }
    case 'l':
        {
            cout<<"\n\t\t\t\t ***** ALL LAB INFORMATION *****\n";
            l.show_lab();
            l.store_lab();
            cout<<"\n\n You want to procced the program (y/n):\n";
            cin>>k;
            if(k=='y'||k=='Y')
            {
                goto label;
            }
            else{
                return 0;
            }
            break;
        }
    case 'm':
        {
            cout<<"\n\t\t\t\t ***** ALL WARD INFORMATION *****\n";

            break;
        }
    case 'n':
        {
            cout<<"\n\t\t\t\t ***** ALL OPEARTION THEATRES *****\n";
            o.show_OT();
            o.view_OT();
            cout<<"\n\n You want to procced the program (y/n):\n";
            cin>>k;
            if(k=='y'||k=='Y')
            {
                goto label;
            }
            else{
                return 0;
            }
            break;
        }
    case 'o':
        {
            cout<<"\n\t\t\t\t ***** ALL NURSE DETAIL *****\n";
            n.show_nurse();
            n.store_nurse();
            cout<<"\n\n You want to procced the program (y/n):\n";
            cin>>k;
            if(k=='y'||k=='Y')
            {
                goto label;
            }
            else{
                return 0;
            }
            break;
        }
    case 'p':
        {
            cout<<"\n\t\t\t\t ***** SEARCH NURSE DETAIL *****\n";
            fstream FILE2;
            nurse n;
            int flag=-1;
            char nname[50];
            FILE2.open("nurse.dat",ios::in|ios::app|ios::binary);
            cout<<"\n Enter the Nurse Name to search:";
                cin>>nname;
                cin.getline(nname,50);
                while(FILE2.eof()==0)
                {
                    FILE2.read((char*)&n,sizeof(n));
                    if(strcmp(n.returnnname(),nname)==0);
                    {
                        flag=1;
                        cout<<"\n RECORD FOUND!!\n";
                        n.show_nurse();
                        break;
                    }
                }
                if(flag==-1)
                {
                    cout<<"\n RECORD NOT FOUND";
                }

                cout<<"\n\n You want to procced the program (y/n):\n";
            cin>>k;
            if(k=='y'||k=='Y')
            {
                goto label;
            }
            else{
                return 0;
            }
            break;
        }
    case 'q':
        {
            cout<<"\n\t\t\t\t ***** ALL STAFF DETAIL *****\n";
            s.show_staff();
            s.store_staff();
            cout<<"\n\n You want to procced the program (y/n):\n";
            cin>>k;
            if(k=='y'||k=='Y')
            {
                goto label;
            }
            else{
                return 0;
            }
            break;
        }
    case 'r':
        {
            cout<<"\n\t\t\t\t ***** SEARCH STAFF DETAIL \n";
            fstream FILE3;
            staff s;
            int flag=-1;
            char sname[50];
            FILE3.open("staff.dat",ios::in|ios::ate|ios::binary);
            cout<<"\n Enter the staff Name to search:";
                cin>>sname;
                cin.getline(sname,50);
                while(FILE3.eof()==0)
                {
                    FILE3.read((char*)&s,sizeof(s));
                    if(strcmp(s.returnsname(),sname)==0);
                    {
                        flag=1;
                        cout<<"\n RECORD FOUND!!\n";
                        s.show_staff();
                        break;
                    }
                }
                if(flag==-1)
                {
                    cout<<"\n RECORD NOT FOUND";
                }

                cout<<"\n\n You want to procced the program (y/n):\n";
            cin>>k;
            if(k=='y'||k=='Y')
            {
                goto label;
            }
            else{
                return 0;
            }
            break;
        }
    case 's':
        {
            cout<<"\n detail of nurse\n";
            n.create_nurse();
            n.show_nurse();
            n.store_nurse();
            cout<<"\n\n You want to procced the program (y/n)";
            cin>>k;
            if(k=='y'||k=='Y')
            {
                goto label;
            }
            else{
                return 0;
            }
            break;
        }
    case 't':
        {
            cout<<"\n detail of doctor:\n";
            d.create_doctor();
            d.show_doctor();
            d.store_doctor();
            cout<<"\n\n You want to procced the program (y/n):\n";
            cin>>k;
            if(k=='y'||k=='Y')
            {
                goto label;
            }
            else{
                return 0;
            }
            break;
        }
    case 'u':
        {
            cout<<"\n Detail of staff\n";
            s.create_staff();
            s.show_staff();
            s.store_staff();
            cout<<"\n\n You want to procced the program (y/n)";
            cin>>k;
            if(k=='y'||k=='Y')
            {
                goto label;
            }
            else{
                return 0;
            }
            break;
        }
    case 'v':
        {
            cout<<"\n Detail of Room\n";
            r.create_room();
            r.show_room();
            r.store_room();
            cout<<"\n\n You want to procced the program (y/n)";
            cin>>k;
            if(k=='y'||k=='Y')
            {
                goto label;
            }
            else{
                return 0;
            }
            break;
        }
    case 'w':
        {
            cout<<"\n Detail of Lab\n";
            l.create_lab();
            l.show_lab();
            l.store_lab();
            cout<<"\n\n You want to procced the program (y/n)";
            cin>>k;
            if(k=='y'||k=='Y')
            {
                goto label;
            }
            else{
                return 0;
            }
            break;
        }
    case 'x':
        {
            cout<<"\n Detail of lab\n";
            o.create_OT();
            o.show_OT();
            o.store_OT();
            cout<<"\n\n You want to procced the program (y/n)";
            cin>>k;
            if(k=='y'||k=='Y')
            {
                goto label;
            }
            else{
                return 0;
            }
            break;
        }
    default:
        {
            cout<<"\n\\t\t\t\t ERROR \n";
        }
    }
    return 0;
}
//************************************************
//                 END OF PROGRAM
//************************************************
