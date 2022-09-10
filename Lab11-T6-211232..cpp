#include <iostream>

using namespace std;

int main() 
{
	int mat1[3][3],mat2[3][3];
	//FOR MATRIX 1
	cout<<"Matrix A Before input= "<<endl<<endl;
	//display before input
	for (int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		cout<<i<<j<<" ";
		cout<<endl;
	}
	cout<<endl;
	for (int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
		cout<<"Enter value in Position "<<i<<j<<" = "; 
		cin>>mat1[i][j];
	}
	}
	cout<<endl;
	//display After input
	cout<<"Matrix A after input= "<<endl<<endl;
	for (int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		cout<<mat1[i][j]<<" ";
		cout<<endl;
	}
	
	cout<<endl;
	//FOR MATRIX 2
	cout<<"Matrix B Before input= "<<endl<<endl;
	//display before input
	for (int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		cout<<i<<j<<" ";
		cout<<endl;
	}
	
	
	cout<<endl;
	for (int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
		cout<<"Enter value in Position "<<i<<j<<" = "; 
		cin>>mat2[i][j];
	}
	}
	cout<<endl;
	//display after input 
	cout<<"Matrix B After input= "<<endl<<endl;
	for (int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		cout<<mat1[i][j]<<" ";
		cout<<endl;
	}
	
	//multiplication logig
	cout<<"\n\nMultiplicative Result= "<<endl<<endl;
	cout<<((mat1[0][0]*mat2[0][0] + mat1[0][1]*mat2[1][0] + mat1[0][2]*mat2[2][0]))<<"  "
	    <<((mat1[0][0]*mat2[0][1] + mat1[0][1]*mat2[1][1] + mat1[0][2]*mat2[2][1]))<<"  "
	    <<((mat1[0][0]*mat2[0][2] + mat1[0][1]*mat2[1][2] + mat1[0][2]*mat2[2][2]))<<"  "<<endl  // first row done
	    <<((mat1[1][0]*mat2[0][0] + mat1[1][1]*mat2[1][0] + mat1[1][2]*mat2[2][0]))<<"  "
	    <<((mat1[1][0]*mat2[0][1] + mat1[1][1]*mat2[1][1] + mat1[1][2]*mat2[2][1]))<<"  "
	    <<((mat1[1][0]*mat2[0][2] + mat1[1][1]*mat2[1][2] + mat1[1][2]*mat2[2][2]))<<"  "<<endl  // second row done
	    <<((mat1[2][0]*mat2[0][0] + mat1[2][1]*mat2[1][0] + mat1[2][2]*mat2[2][0]))<<"  "
	    <<((mat1[2][0]*mat2[0][1] + mat1[2][1]*mat2[1][1] + mat1[2][2]*mat2[2][1]))<<"  "
	    <<((mat1[2][0]*mat2[0][2] + mat1[2][1]*mat2[1][2] + mat1[2][2]*mat2[2][2]))<<"  "<<endl;  // thord row done
	
	
	return 0;
}
