// C++ program to demonstrate sorting in
// vector of pair according to 1st element
// of pair
#include<vector>
#include<iostream>
using namespace std;




class row{
private:
    int rowNumber;
    vector<int> rowelements;
public:
    row(int rownum):rowNumber(rownum){
        rowelements = genrow();
        cout<<"constructing row"<<endl;
    };
    ~row(){
        cout<<"destructing row"<<endl;
    };
    void printrow();
    vector<int> genrow();
};


vector<int> row::genrow(){

    vector<int> prow(1,1);
    if(rowNumber==1){return prow;}
    //start creating row by row from 2nd row
    for(int i=2; i<=rowNumber; i++){
        vector<int> row(i,0);
        //fill in each elment
        row[0] = prow.back();
        for(int j = 1; j<i; j++){
            row[j] =row[j-1]+prow[j-1];
        }
        prow = row;
    }
    return prow;
}

void row::printrow(){
    for(auto it:rowelements){
        cout << it << " ";
    }
    cout<<endl;
}

void belltriangle(int nRow){
    //declare triangle container
    vector<vector<int>> aBelltriangle;
    //row number must be positive
    assert(nRow>0);
    //first row(i.e. row(0)) is a single "1"
    vector<int> prow(1,1);
    if(nRow==1){cout<<prow[0]<<endl;return;}
    else{cout<<prow[0]<<endl;}
    //start creating row by row from 2nd row
    for(int i=2; i<=nRow; i++){
        vector<int> row(i,0);
        //fill in each elment
        row[0] = prow.back();
        for(int j = 1; j<i; j++){
            row[j] =row[j-1]+prow[j-1];
        }
        
        for(int k=0;k<i;k++){
            cout<<row[k]<<" ";
        }
        cout<<endl;
        aBelltriangle.push_back(row);
        prow = row;
    }
    
}






int main()
{
    
    belltriangle(3);
    cout<<"------------"<<endl;
    
    {
        row a(1);
        a.printrow();
        row b(2);
        b.printrow();
        row c(3);
        c.printrow();
    }
    row d(4);
    d.printrow();
    
    
    /*
    // Declaring vector of pairs
    vector< pair <int,int> > vect;
    
    // Initializing 1st and 2nd element of
    // pairs with array values
    int arr[] = {10, 20, 5, 40 };
    int arr1[] = {30, 60, 20, 50};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    // Entering values in vector of pairs
    for (int i=0; i<n; i++)
        vect.push_back( make_pair(arr[i],arr1[i]) );
    
    // Printing the original vector(before sort())
    cout << "The vector before sort operation is:\n" ;
    for (int i=0; i<n; i++)
    {
        // "first" and "second" are used to access
        // 1st and 2nd element of pair respectively
        cout << vect[i].first << " "
        << vect[i].second << endl;
        
    }
    
    // Using simple sort() function to sort
    sort(vect.begin(), vect.end());
    
    // Printing the sorted vector(after using sort())
    cout << "The vector after sort operation is:\n" ;
    for (int i=0; i<n; i++)
    {
        // "first" and "second" are used to access
        // 1st and 2nd element of pair respectively
        cout << vect[i].first << " "
        << vect[i].second << endl;
    }
    
    return 0;
     */
}



