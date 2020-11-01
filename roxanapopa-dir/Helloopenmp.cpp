#include<iostream>
#include<omp.h>


using namespace std;

int main ()
{
	

	#pragma omp parallel                   
{
	

	omp_get_thread_num();

	cout<<"Hello World"<< "=" << omp_get_thread_num()<< endl;
	
}  

}
