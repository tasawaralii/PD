#include <iostream>
using namespace std;
void printmenu();
void calculateAggregate(string,float ,float ,float);
void compareMarks(string ,float ,string ,float);

main() {
	system("cls");
	printmenu();

    string std1,std2;
    float matric1,matric2,inter1,inter2,ecat1,ecat2;


      cout<<"Enter First Student name :";
      getline(cin, std1);
      cout<<"Enter your Matric marks :";
      cin>>matric1;
      cout<<"Enter your Inter marks Part1 :";
      cin>>inter1;
      cout<<"Enter your ECAT marks :";
      cin>>ecat1;

calculateAggregate(std1,matric1,inter1,ecat1);


	cin.ignore();
	cout << endl << endl << endl << endl;


      cout<<"Enter Second Student name : ";
      getline(cin, std2);
      cout<<"Enter your Matric marks :";
      cin>>matric2;
      cout<<"Enter your Inter marks Part1 :";
      cin>>inter2;
      cout<<"Enter your ECAT marks :";
      cin>>ecat2;

calculateAggregate(std2,matric2,inter2,ecat2);


compareMarks(std1,ecat1,std2,ecat2);

}

void printmenu(){
cout << endl << endl << endl << endl;
cout<<"                 ##       ##        ## ## ##    # ## ## ## #           "<<endl;                          
cout<<"                 ##       ##        ##               ##                 "<<endl;                  
cout<<"                 ##       ##        ## ## #          ##                 "<<endl;                      
cout<<"                 ##       ##        ##               ##                 "<<endl;                          
cout<<"                 ##       ##        ##               ##                 "<<endl;                                  
cout<<"                 ## ## ## ##   ##   ## ## ##   ##    ##                 "<<endl;                                              
cout<<""<<endl;
cout<<""<<endl;                                                                                    
cout<<"##       ##              ###              ###       ###        ## ## ## ## "<<endl;                                                  
cout<<"##       ##             ## ##             ## ##   ## ##        ##          "<<endl;                                      
cout<<"##       ##            ##   ##            ##  ## ##  ##        ## ## ## ## "<<endl;                                                       
cout<<"##       ##           ## ### ##           ##   ###   ##                 ## "<<endl;                                              
cout<<"##       ##          ##       ##          ##         ##                 ## "<<endl;                        
cout<<"## ## ## ##   ##   ###         ###   ##   ##         ##   ##   ## ## ## ## "<<endl;      

cout << endl << endl << endl << endl;                                                         
}              



void calculateAggregate(string name,float mat,float inter,float ecat){

      float agg;

      agg = ((mat/1100) * 30) + ((inter/550) * 30) + ((ecat/400) * 40);

      cout << "Mr. " << name << " your aggregate is :" << agg <<endl;
}

void compareMarks(string std1,float ecat1,string std2,float ecat2){

	cout << endl << endl << endl << endl;


if (ecat1 > ecat2)
{

	
    cout << std1 << " has higher marks in ECAT So Roll no.1 = " << std1 <<endl;
}
else
{ 
    cout << std2 << " has higher marks in ECAT So Roll no.1 = " << std2 <<endl;
}


}









