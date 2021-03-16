#include<iostream>

    using namespace std;

                struct nilai
            {
    int student,assignment,quiz,mid_exam,final_exam,attendance,grade_mahasiswa;
        	char nilai_huruf;
};

                main()
        {
	int i, data;
	    cout<<"\t\t\tCOUNTING VALUES\n\n\n";
	        cout<<"Enter number of students :"; cin>>data;
	                for(i=0;i<data;i++)
	                    {
		    cout<<"\n======================================================="<<endl<<endl;
	                	cout<<"Assignment \t\t:";cin>>data.assignment;
	            	cout<<"Quiz \t\t:";cin>>data.quiz;
		                            cout<<"Attendance \t\t:";cin>>data.attendance; /*RIVALDO BOGAR*/
	                        	cout<<"Mid Exam \t\t:";cin>>data.mid_exam;
		                                cout<<"Final Exam \t\t:";cin>>data.final_exam; 
		                                    data.grade_mahasiswa=(data.assignment*1600/100)+(data.quiz*900/100)+(data.attendance*1000/100)+(data.mid_exam*2400/100)+(data.final_exam*2700/100);
		    if(data.grade_mahasiswa>>91&&data.grade_mahasiswa<=100)
	    	{
		            	data.nilai_huruf='A';
		            }
		                    else if(data.grade_mahasiswa>85&&data.grade_mahasiswa<=100)
	            	{
		                    	data.nilai_huruf='A-';
		            }
	                    	else if(data.grade_mahasiswa>82&&data.grade_mahasiswa<=84)
	            	{
		                    	data.nilai_huruf='B+';	
	                	}
	                        	else if(data.grade_mahasiswa>78&&data.grade_mahasiswa<=81)
	                	{
		                        	data.nilai_huruf='B';
	                	}
		                                        else if(data.grade_mahasiswa>75&&data.grade_mahasiswa<=77)
		{
	        		data.nilai_huruf='B-';
		}
	                    	else if(data.grade_mahasiswa>70&&data.grade_mahasiswa<=74)
		{
	            	data.nilai_huruf='C+';
		}
	        	else if(data.grade_mahasiswa>67&&data.grade_mahasiswa<=69)
		{
			data.nilai_huruf='C';	
		            }
		                            else if(data.grade_mahasiswa>60&&data.grade_mahasiswa<=66)
		{
	                		data.nilai_huruf='C-';
		}
	            	else if(data.grade_mahasiswa>40&&data.grade_mahasiswa<=59)
		{
		                        	data.nilai_huruf='D';
		}
		                                        else
		{
		                                        	data.nilai_huruf='F';
		}
		
		
	}
	
}
        cout<<"Enter Grade For Students\n"<<endl;
    for(i=0;i<data;i++)
                {
                	cout<<"\n======================================================="<<endl<<endl;
	                        cout<<"Assignment \t:"<<data.assignment<<endl;
	                                cout<<"Quiz \t:"<<data.quiz<<endl;
	                                    cout<<"Attendance \t:"<<data.attendance<<endl;
	                cout<<"Mid Exam \t:"<<data.mid_exam<<endl;
	                        cout<<"Final Exam \t:"<<data.final_exam<<endl;
	                                    cout<<"Grade Mahasiswan \t"<<data.grade_mahasiswa<<endl;
	                                        cout<<"Grade \t\t"<<data.nilai_huruf<<endl;
                                };