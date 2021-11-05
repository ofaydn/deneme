#include <stdio.h>
int PI = 3.14;
void print ();			//if a function is not returning anything it will be a void
double surf ();
double srf;
int
main ()
{
  double r;
  printf ("Enter your radius: ");
  scanf ("%lf", &r);
  printf ("%lf", surf (r));


}

double
surf (double r)
{
  double srf = PI * r * r;
  return srf;
}

void
print ()
{
  printf ("The surface of circtle is = %lf\n", srf);
}
//sayının basamakları içindeki olasılıkları kontrol ederek 25in katı olup olmadığını tespit edecek
//eğer içindeki herhangi bir kombinasyon 25in katı ise o sayının başlangıç ve bitiş digitlerine göre diğer sayıları çıkarıcak 
//ve çıkardığı her sayı için bir basamak sayacak