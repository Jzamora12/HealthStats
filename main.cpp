//Class collaboration for learning how to use vectors
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> bpm;
    vector <int> steps;
    vector <int> calories;
    
    //bpm.resize(10);
    bpm.push_back(90);
    bpm.push_back(100);
    bpm.push_back(70);
    
    cout<< "bpm size is currently size "<<bpm.size()<<endl;
    cout<< "The last item in bpm is... "<<bpm[ bpm.size()-1 ]<<endl;
    cout<< "The items in the list are...\n";

    for ( int i=0; i< bpm.size() ; i++) 
        {
            cout<<bpm[i]<<endl;
        }
    return 0;
}
