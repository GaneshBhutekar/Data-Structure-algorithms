#include<iostream>
using namespace std;
void way_nth_stairs(int stairs,int& total,int step=0){ // maine khud kiya ye .......

    if (step==stairs){
        total++;
        return;
    }
    if (step>stairs){
        return;
    }

    // recursive relation
    way_nth_stairs(stairs,total,step+1);
    way_nth_stairs(stairs,total,step+2);

}



int distinctwaytoclimbstairs(int stairs){
    if (stairs==0){
        return 1;
    }
    if (stairs<0){
        return 0; // it means not possible to take 2 step 
    }
    int ans=distinctwaytoclimbstairs(stairs-1)+distinctwaytoclimbstairs(stairs-2);
    return ans;
}



int main(){
    int stairs;
    cout<<"enter the number of stairs"<<endl;
    cin>>stairs;
    int total=0;
    way_nth_stairs(stairs,total);
    cout<<total<<endl;

    cout<<"through another approach"<<endl;
    int ans=distinctwaytoclimbstairs(stairs);
    cout<<ans<<endl;
}
