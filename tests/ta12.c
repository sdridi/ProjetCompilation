//test d'opération somme, différence et multiplicatio entre deux attributs de classe différentes
class S
{
  int a;
  int b;

}

int main()
{
  S* x = new S();
  S* v = new S();
  x->a = 4;
  x->b = 6;
  x->a = x->a*x->b;
  x->b = x->a + x->b;
  x->a = x->a - x->b;
}
