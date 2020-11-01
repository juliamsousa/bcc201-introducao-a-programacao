#include <iostream>
#include <cmath>
using namespace std;

//prototipo da funcao
double dist (double x1, double y1, double x2, double y2);

int main ()
{
	double x1, x2, y1, y2;
	
	cout<<"Digite as coordenadas do primeiro ponto:"<<endl;
	cin>>x1>>y1;
	cout<<"Digite as coordenadas do segundo ponto:"<<endl;
	cin>>x2>>y2;
	
	cout<<"A distancia entre os pontos: "<<dist (x1, y1, x2, y2)<<endl;

	return 0;
}

// le dois pontos P1 = (x1; y1) e P2 = (x2; y2)e calcula e imprime a distancia entre esses dois pontos
double dist (double x1, double y1, double x2, double y2)
{
	double dist;
	
	dist=pow(pow((x2-x1),2)+pow((y2-y1),2),1.0/2);
	
	return dist;
}

