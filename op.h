#ifndef OP_H_INCLUDED
#define OP_H_INCLUDED
struct vector
{
    double x, y, z;
};

int suma(int a[], int n);
void modul(int a[], int n);
void permcirc(int s[], int n);
vector sumv(vector a, vector b);
double prods(vector a, vector b);
vector versor(vector a);


#endif // OP_H_INCLUDED
