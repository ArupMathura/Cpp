// this program will run fine in turbo c software

#include<iostream>
using namespace std;
class circle{
    private:
        int radius;
        float x, y;
    public:
        circle(){}

        circle(int r, float xx, float yy){
            radius = r;
            x = xx;
            y = yy;
        }

        circle operator = (circle &c){
            radius=c.radius;
            x=c.x;
            y=c.y;
            return circle(radius, x, y);
        }

        void show(){
            cout<<radius<<x<<y<<endl;
        }
};

int main(){
    circle c1(2,3,4);
    circle c2, c3;
    c3=c2=c1;
    c2.show();
    
}


// **************************************************************************************

// #include<iostream>
// using namespace std;

// class circle{
//     private:
//         int radius;
//         float x, y;
//     public:
//         circle(){

//         }
//         circle(int rr, float xx, float yy){
//             radius = rr;
//             x = xx;
//             y = yy;
//         }

//         circle operator = (circle& c){
//             cout<<"Assignment operator invoked"<<endl;
//             radius = c.radius;
//             x = c.x;
//             y = c.y;
//             // return circle(radius, x, y);
//             return *this;
//         }

//         void showdata(){
//             cout<<"Radius : "<<radius<<endl;
//             cout<<"X-coordiante : "<<x<<endl;
//             cout<<"Y-coordiante : "<<y<<endl;
//         }
// };

// int main(){
//     circle c1(10, 2.5, 2.5);
//     circle c2;
//     circle c3;
//     // c2=c1;
//     c3=c2=c1;
//     c1.showdata();
//     c2.showdata();
//     c3.showdata();
//     return 0;
// }