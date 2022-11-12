 #include<iostream>

#include<conio.h>

#include<windows.h>

using namespace std;

struct emp{

	
    string name,department,grade,result;
    int id,semester,CSE_101,CSE_102,CSE_103,sum;
    float avg;

};

int total=0;

emp e[100];

void empdata(){

	int user=0;
    

	cout<<"How many Students data do you want to enter??"<<endl;

	cin>>user;

	for(int i=total;i<total+user;i++){

		cout<<"Enter data of Student "<<i+1<<endl<<endl;

		cout<<"Enter Student's name: ";

		cin>>e[i].name;

		cout<<"Enter id: ";

		cin>>e[i].id;

		cout<<"Enter Department: ";

		cin>>e[i].department;

		cout<<"Enter Semester: ";

		cin>>e[i].semester;

		cout<<"Enter Marks of cse_101: ";

		cin>>e[i].CSE_101;
        
		cout<<"Enter Marks of cse_102: ";

		cin>>e[i].CSE_102;
		cout<<"Enter Marks of cse_103: ";

		cin>>e[i].CSE_103;
        e[i].sum=e[i].CSE_101+e[i].CSE_102+e[i].CSE_103;
        e[i].avg=e[i].sum / 3;
        if(e[i].avg>=80){
            e[i].result="PASS";
            e[i].grade="A";
        }
        else if(e[i].avg<=60){
            e[i].result="PASS";
            e[i].grade="B";
        }
        else if(e[i].avg<=33){
            e[i].result="FAIL";
            e[i].grade="-";
        }
        
	}
    
	total=total+user;
    
    

}

void show(){

	if(total!=0){

	for(int i=0;i<total;i++){

		cout<<"Data of Student "<<i+1<<endl;

		cout<<"Name: "<<e[i].name<<endl;

		cout<<"ID: "<<e[i].id<<endl;

		cout<<"Department: "<<e[i].department<<endl;

		cout<<"Semester: "<<e[i].semester<<endl;

		cout<<"Total Number: "<<e[i].sum<<endl;
        
        cout<<"Result: "<<e[i].result<<endl;

        cout<<"Grade: "<<e[i].grade<<endl;

        cout<<"Percentage: "<<e[i].avg<<"%"<<endl;


	}

    }

    else{

    	cout<<"No data is entered"<<endl;

	}

}

void search(){

	if(total!=0){

	int idS;

	cout<<"Enter id of Student which you want to search"<<endl;

	cin>>idS;

	for(int i=0;i<total;i++){

		if(e[i].id==idS){

		cout<<"Data of Student "<<i+1<<endl;

		cout<<"Name: "<<e[i].name<<endl;

		cout<<"ID: "<<e[i].id<<endl;

		cout<<"Department: "<<e[i].department<<endl;

		cout<<"Semester: "<<e[i].semester<<endl;

		cout<<"Total Number: "<<e[i].sum<<endl;
        
        cout<<"Result: "<<e[i].result<<endl;

        cout<<"Grade: "<<e[i].grade<<endl;

		break;

		}

		if(i==total-1){

			cout<<"No such record found"<<endl;

		}

	}

}else{

	cout<<"No data is entered"<<endl;

}

}

void update(){

	if(total!=0){

	int id;

	cout<<"Enter id of Student which you want to update"<<endl;

	cin>>id;

	for(int i=0;i<total;i++){

		if(e[i].id==id){

		cout<<"Old data of employee "<<i+1<<endl;

		cout<<"Name: "<<e[i].name<<endl;

		cout<<"ID: "<<e[i].id<<endl;

		cout<<"Department: "<<e[i].department<<endl;

		cout<<"Semester: "<<e[i].semester<<endl;

		cout<<"Total Number: "<<e[i].sum<<endl;
        
        cout<<"Result: "<<e[i].result<<endl;

        cout<<"Grade: "<<e[i].grade<<endl;

		cout<<"\nEnter new data"<<endl;

		cout<<"Enter employee name: ";

		cin>>e[i].name;

		cout<<"Enter id: ";

		cin>>e[i].id;

		cout<<"Enter Department: ";

		cin>>e[i].department;

		cout<<"Enter Semester: ";

		cin>>e[i].semester;

		cout<<"Enter Marks of cse_101: ";

		cin>>e[i].CSE_101;
        
		cout<<"Enter Marks of cse_102: ";

		cin>>e[i].CSE_102;
		cout<<"Enter Marks of cse_103: ";

		cin>>e[i].CSE_103;

		break;

		}

		if(i==total-1){

			cout<<"No such record found"<<endl;

		}

	}

}else{

	cout<<"No data is entered"<<endl;

}

}

void del(){

	if(total!=0){

	int press;

	cout<<"Press 1 to delete specific record"<<endl;

	cout<<"Press 2 to delete full record"<<endl;

	cin>>press;

	if(press==1){

		int id;

		cout<<"Enter id of stuent which you want to delete"<<endl;

		cin>>id;

		for(int i=0;i<total;i++){

			if(e[i].id==id){

				e[i].name=e[i+1].name;

				e[i].id=e[i+1].id;

				e[i].department=e[i+1].department;

				e[i].semester=e[i+1].semester;

				e[i].CSE_101=e[i+1].CSE_101; 

				e[i].CSE_102=e[i+1].CSE_102;

				e[i].CSE_103=e[i+1].CSE_103;

				e[i].sum=e[i+1].sum;

				e[i].avg=e[i+1].avg;

				e[i].grade=e[i+1].grade;

				e[i].result=e[i+1].result;

                


				


				total--;

				cout<<"Your required record is deleted"<<endl;

				break;

			}

			if(i==total-1){

			cout<<"No such record found"<<endl;

		}

		}

	}

	else if(press==2){

		total=0;

		cout<<"All record is deleted"<<endl;

	}

	else{

		cout<<"Invalid Input"<<endl;

	}

}else{

	cout<<"No data is entered"<<endl;

}

}

main(){

	cout<<"\n\n\t\tStudent Result System"<<endl;

	  string username,password;

    cout<<"\n\n\n\t\t******Signup******"<<endl;

	cout<<"\t\tEnter new username: ";

	getline(cin,username);

	cout<<"\t\tEnter new password: ";

	cin>>password;

	cout<<"\t\tYour new id is creating please wait";

	for(int i=0;i<6;i++)

	{

		cout<<".";

		Sleep(500);

	}

	cout<<"\n\t\tYour id created successfully";

	Sleep(2000);

	start:

	system("CLS");

	string usrn,pswd;

	cout<<"\n\n\t\tStudent Result System"<<endl;

	cout<<"\n\n\n\t\t   LOGIN"<<endl;

	cout<<"\t\tEnter username: ";

	getline(cin,usrn);

	cout<<"\t\tEnter password: ";

	cin>>pswd;

	if(usrn==username&&pswd==password)

	{

	system("CLS");

	char ch;

	while(1){

	cout<<"\n\nPress 1 to enter data"<<endl;

	cout<<"Press 2 to show data"<<endl;

	cout<<"Press 3 to search data"<<endl;

	cout<<"Press 4 to update data"<<endl;

	cout<<"Press 5 to delete data"<<endl;

	cout<<"Press 6 to logout"<<endl;

	cout<<"Press 7 to exit"<<endl;

	ch=getch();

	system("CLS");

	switch(ch){

		case '1':

			empdata();

			break;

		case '2':

			show();

			break;

		case '3':

			search();

			break;

		case '4':

			update();

			break;

		case '5':

			del();

			break;

		case '6':

			goto start;

			break;

		case '7':

			exit(0);

			break;

		default:

			cout<<"\aInvalid Input"<<endl;

			break;

	}

}

}

  else if(usrn!=username)

  {

  	cout<<"\t\t\aInvalid username please try again";

  	Sleep(3000);

  	goto start;

  }

  else if(pswd!=password)

  {

  	cout<<"\t\t\aInvalid password please try again";

  	Sleep(3000);

  	goto start;

  }

  else{

  	cout<<"\t\t\aInvalid username and password";

  	Sleep(3000);

  	goto start;

  }

}