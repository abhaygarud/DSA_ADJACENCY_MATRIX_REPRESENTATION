#include<iostream>
using namespace std;
//initialize as martix of 20 by 20
        int Adjancy_matrix[20][20];
        
    //created a function which will take aa edge as a input
        void Create_Edge(int i , int j)
        {
            //entered number will be marked as 1 in the matrix
            Adjancy_matrix[i][j]=1;
            Adjancy_matrix[j][i]=1;
        }
        void Display(int Vertex)
        {
          //for loop will run till the number of vertex entered by the user
            for(int i=0;i<Vertex;i++)
            {
                cout<<"[";
                for(int j=0;j<Vertex;j++)
                {
                    //makred number in the matrix will be print here
                    cout<<Adjancy_matrix[i][j]<<" ";
                }
                    cout<<"]"<<"\n";
            }
                   
        }


int main(){
    int vertex;
    int r,c;
    //enter the number of size you want of your matrix
    cout<<"enter the number of vertices"<<endl;
    cin>>vertex;
    //enter the edge and pass it in the function
    cout<<"enter the edge"<<endl;
    for(int i=0;i<vertex+1;i++)
    { 
      cin>>r>>c;
      Create_Edge(r,c);

    }
    //called the dispaly function
    Display(vertex);
    
    return 0;
}