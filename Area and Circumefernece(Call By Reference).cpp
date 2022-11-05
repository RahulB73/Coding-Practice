 #include<iostream>
 using namespace std;

float Area(float r){
    float A=3.142*r*r;
    return A;
}

float Cirumeference(float &r){
    r=3.5;
    float C=2*3.142*r;
    return C;
}

 int main(){
    float r;
    cout<<"Enter the radius of Circle:"<<endl;
    cin>>r;
    cout<<Area(r)<<endl;
    cout<<Cirumeference(r);
    return 0;
 }
