void setup() {
  //Keyboard.begin();
  //Mouse.begin();
}

void  logIn()
{
  Keyboard.write("rabougue\n");
  Keyboard.write("/*Mot de passe*/\n");
  delay(1000);
  Keyboard.write("\n");
  delay(1000);
  Keyboard.write("\n");
  delay(10000);
}

void  logOut(void)
{
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('q');
  delay(1000);
  Keyboard.releaseAll();
  Keyboard.write("\n"); //Simule entrée pour confirmation de message de deconexion
  delay(500);
  Keyboard.write("\n");//Simule entrée pour confirmation de message de deconexion
  delay(500);
  Keyboard.write("\n");//Simule entrée pour confirmation de message de deconexion
  delay(500);
  Keyboard.write("\n");//Simule entrée pour confirmation de message de deconexion
  delay(5000);
}

void loop() 
{
  delay(1000);
  logIn();
  logOut();
}
