//Class collaboration for learning how to use vectors
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> bpm;
    vector <int> steps;
    vector <int> calories;
    int heartRate;
    
    do 
    {
        cout<<"Please enter in heart rate reading (in beats per minutes, or -1 to quit): "; 
        cin>>heartRate; 
        bpm.push_back(heartRate);
    }while( heartRate != -1 ); 

    bpm.pop_back(); // used to get rid of -1 which is only used to stop the loop. 

 
    cout<< "bpm size is currently size "<<bpm.size()<<endl;
    cout<< "The last item in bpm is... "<<bpm[ bpm.size()-1 ]<<endl;
    cout<< "The items in the list are...\n";

    for ( int i=0; i< bpm.size() ; i++) 
        {
            cout<<bpm[i]<<endl;
        }
    return 0;
}
