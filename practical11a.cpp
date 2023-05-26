#include <iostream>
using namespace std;

class book
{
    private:
    
    char title[30], authorname[30], publicer[30];
    int n, price, i, j, temp;
    
    public:
    
    void getdata()
    {
        
        cout<<"Enter the number of that you want to add book detail \n"<<endl;
        cin>>n;
        
        for(i=0; i<=n; i++)
        {
            cout<<"Enter the Title of a Book \t";
            cin>>title;
            
            cout<<"Enter the Author Name:- \t";
            cin>>authorname;
            
            cout<<"Enter the Publicer Name:- \t";
            cin>>publicer;
            
            cout<<"Enter the Price of Book:- \t";
            cin>>price;
       }
    }
    
    void displaydata()
    {
        for(i=0; i<n; i++)
        {
            for(i=i+1; i<n; i++)
            {
                if(i<j)
                {
                    temp=i;
                    i=j;
                    j=temp;
                    
                    cout<<"The Title of a Book is  :- \t"<<title<<endl;
                    
                     cout<<"The Author Name is   :- \t"<<authorname<<endl;
                     
                     cout<<"The Publicer Name is :- \t"<<publicer<<endl;
                     
                     cout<<"The Price of Book is  :- \t"<<price<<endl;
                }
            }
        }
    }
    
};

int main()
{
    book b;
    
    b.getdata();
    b.displaydata();
    
    return 0;
}
