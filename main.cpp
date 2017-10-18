#include<vector>
#include<iostream>
#include<string>

using namespace std;

int main()
{
    int row,column;
    vector < vector < char > > starMatrix;

    cout<<" Enter rows and columns of stars\n";
    cin>>row;
    cin>>column;
     
    if(row > 0 && column > 0)
    {   
        starMatrix.resize(row);
        for(int index = 0; index < starMatrix.size(); index++)
        {   
            starMatrix[index].resize(column);
            for(int cindex = 0; cindex < starMatrix[index].size(); cindex++)
            {
                starMatrix[index][cindex] = '*';
                cout<<starMatrix[index][cindex]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}

