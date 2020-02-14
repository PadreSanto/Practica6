#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm> 
using namespace std;
class Coordenada{
private:
    double x;
    double y;
public:
    Coordenada(double = 0, double = 0);
    double obtenerX();
    double obtenerY();
};

class Poligono{
private:
    Coordenada cor;
    vector<Coordenada> v;
    vector<double> mag;


public:
    Poligono();
    Poligono(Coordenada cor);
    void anadeVertice(Coordenada cor);
    void imprimeVertice();
    void ordenaA();
};

 int main( )
 {
    int num;
    Poligono pol;
    srand((unsigned) time(NULL));
    cout<<"Introducir las n vertices: "<<endl;
    cin>>num;
    double x,y;
    for(int i=0;i<num;i++){
        x=(float)(rand() %200002-100001)/1000;
        y=(float)(rand() %200002-100001)/1000;
        //cout<<x<<" "<<y<<endl;
        pol.anadeVertice(Coordenada(x,y));
    }
    pol.imprimeVertice();
    pol.ordenaA();
    return 0;
    
}

Coordenada::Coordenada(double rr, double yy) : x(rr), y(yy){ }

double Coordenada::obtenerX()
{
    return x;
}

double Coordenada::obtenerY()
{
    return y;
}

Poligono::Poligono():cor(0){}

Poligono::Poligono(Coordenada corr): cor(corr){ }

void Poligono::anadeVertice(Coordenada cor){
    v.push_back(cor);
}

void Poligono::imprimeVertice(){
    vector<Coordenada>::iterator it;
    double magnitud;
    cout<<"    "<<"X"<<"        "<<"Y"<<"      "<<"MAGNITUD"<<endl;
    for (it = v.begin(); it != v.end(); ++it) 
    {
        magnitud=sqrt(pow(it->obtenerX(),2)+pow(it->obtenerY(),2));
        mag.push_back(magnitud);
        cout<<" "<<it->obtenerX()<<"   "<<it->obtenerY()<<"   "<<magnitud<<endl;
        //cout << it->obtenerX() << " "<<it->obtenerY()<<endl;
        
    }
}
struct less_than_key
{
    inline bool operator() (Coordenada& verticex, Coordenada& verticey)
    {
        return (verticex.obtenerX() < verticey.obtenerY());
    }
};
void Poligono::ordenaA(){
    sort(v.begin(), v.end(),less_than_key());
    vector<Coordenada>::iterator it;
   
    cout<<"    "<<"X"<<"        "<<"Y"<<endl;
    for (it = v.begin(); it != v.end(); ++it) 
    {
        cout<<" "<<it->obtenerX()<<"   "<<it->obtenerY()<<endl;
        
    }
} 


