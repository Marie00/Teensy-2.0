void setup() {
  int i = 0;

  while (i <= 8)
  {
    pinMode(i, OUTPUT);
    i++;
  }
}
// commentaire ajoute ici
void  allerRetour(int tempo)
{
  //--------------------aller-------------------//
  int i = 0;

  while (i <= 8)
  {
    digitalWrite(i, HIGH);
    i++;
    delay(tempo);
  }
  i = 0;
  while (i <= 8)
  {
    digitalWrite(i, LOW);
    i++;
    delay(tempo);
  }

  // ------------------retour------------------//
  i = 8;

  while (i >= 0)
  {
    digitalWrite(i, HIGH);
    i--;
    delay(tempo);
  }
  i = 8;
  while (i >= 0)
  {
    digitalWrite(i, LOW);
    i--;
    delay(tempo);
  }
}

void transition(int tempo)
{
  int i = 0;
  int loop = 0;

  while (loop < 2)
  {
    while (i <= 8)
    {
      digitalWrite(i, HIGH);
      i++;
    }
    delay(tempo);
    while (i >= 0)
    {
      digitalWrite(i, LOW);
      i--;
    }
    delay(tempo);
    loop++;
  }
}

void serpent(int tempo)
{
  int i = 0;

  while (i <= 8)
  {
    digitalWrite(i, HIGH);
    i++;
    delay(tempo);
  }
  i = 0;
  while (i <= 8)
  {
    digitalWrite(i, LOW);
    i++;
    delay(tempo);
  }
}

void effet3(int tempo)
{
  //--------------Allumage--------------//
  digitalWrite(0, HIGH);
  digitalWrite(8, HIGH);
  delay(tempo);
  digitalWrite(1, HIGH);
  digitalWrite(7, HIGH);
  delay(tempo);
  digitalWrite(2, HIGH);
  digitalWrite(6, HIGH);
  delay(tempo);
  digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);
  delay(tempo);
  digitalWrite(4, HIGH);
  delay(tempo);
  //---------------Eténiage------------//
  digitalWrite(0, LOW);
  digitalWrite(8, LOW);
  delay(tempo);
  digitalWrite(1, LOW);
  digitalWrite(7, LOW);
  delay(tempo);
  digitalWrite(2, LOW);
  digitalWrite(6, LOW);
  delay(tempo);
  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
  delay(tempo);
  digitalWrite(4, LOW);
  delay(tempo);
  digitalWrite(4, LOW);
  delay(100);
  digitalWrite(4, HIGH);
  delay(100);
  digitalWrite(4, LOW);
  delay(100);
  digitalWrite(4, HIGH);
  delay(100);
  digitalWrite(4, LOW);
  
}

void loop()
{
  allerRetour(30);
  allerRetour(30);
  delay(500);
  transition(150);
  delay(500);
  serpent(30);
  delay(250);
  serpent(30);
  delay(250);
  serpent(30);
  delay(250);
  serpent(30);
  delay(250);
  transition(150);
  delay(500);
  effet3(50);
  delay(1000);
  transition(150);
  transition(150);
  transition(150);
  transition(150);
  
  delay(2500);
}
