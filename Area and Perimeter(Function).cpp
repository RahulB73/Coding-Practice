 #include<iostream>
 using namespace std;

float Area(float r){
    float A=3.142*r*r;
    return A;
}

float Perimeter(float r){
    float P=2*3.142*r;
    return P;
}

 int main(){
    float r;
    cout<<"Enter the radius of Circle:"<<endl;
    cin>>r;
    cout<<Area(r)<<endl;
    cout<<Perimeter(r);
    return 0;
 }
