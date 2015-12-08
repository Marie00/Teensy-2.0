void setup() {
  //Keyboard.begin();
  //Mouse.begin();
}

void loop() {

  int i = 0;

  Keyboard.write("rabougue\n");
  Keyboard.write("EmVi_8>t");
  delay(1000);
  Keyboard.write("\n");
  delay(2000);
  Keyboard.write("\n");
  delay(10000);
  Mouse.move(5000, 5000, 0);// Curseur se deplace de 5000 pixels en haut et à droite
  Mouse.move(5000, 5000, 0);// Curseur se deplace de 5000 pixels en haut et à droite
  Mouse.move(5000, 5000, 0);// Curseur se deplace de 5000 pixels en haut et à droite
  delay(1000);
  Mouse.move(20, 0, 0);// Curseur se deplace de 20 pixels à gauche
  delay(1000);
  Mouse.click(MOUSE_LEFT);
  delay(500);
  Mouse.move(0, -2500, 0);
  delay(500);
  Mouse.click(MOUSE_LEFT);
  delay(5000);
  if (i > 0)
  {
    Keyboard.write("\n");
  }
  i++;
}
