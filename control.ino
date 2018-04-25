/*
 * Configure les broche de l'arduino
 * Led en sortie
 * Bouton en entrée (à venir)
 */
void setup_feux (void)
{
  pinMode(F1R, OUTPUT);
  pinMode(F1J, OUTPUT);
  pinMode(F1V, OUTPUT);

  pinMode(F2R, OUTPUT);
  pinMode(F2J, OUTPUT);
  pinMode(F2V, OUTPUT);

  pinMode(F3R, OUTPUT);
  pinMode(F3J, OUTPUT);
  pinMode(F3V, OUTPUT);

  pinMode(F4R, OUTPUT);
  pinMode(F4J, OUTPUT);
  pinMode(F4V, OUTPUT); 
}



/*
 * Allume le feu correspondant à l'identifiant passé
 */
void allume_feu (byte IdFeu) 
{
  digitalWrite(IdFeu, HIGH);
}

/*
 * Allume le feu correspondant à l'identifiant passé

 */
void eteins_feu (byte IdFeu) 
{
  digitalWrite(IdFeu, LOW);
}


/*
 * Allume le feu correspondant à l'identifiant passé
 */
void clignote_feu (byte IdFeu, int nb_cligno=4, int tempo=1000)
{
  for(int i=0; i<nb_cligno; i++){
    digitalWrite(IdFeu, HIGH);
    delay(tempo);
    digitalWrite(IdFeu, LOW);
    delay(tempo);
  }  
}

void test_LED (int tempo=200)
{
  clignote_feu (F1R, 1, tempo);
  clignote_feu (F1J, 1, tempo);
  clignote_feu (F1V, 1, tempo);
  
  clignote_feu (F2R, 1, tempo);
  clignote_feu (F2J, 1, tempo);
  clignote_feu (F2V, 1, tempo);

  clignote_feu (F3R, 1, tempo);
  clignote_feu (F3J, 1, tempo);
  clignote_feu (F3V, 1, tempo);
  
  clignote_feu (F4R, 1, tempo);
  clignote_feu (F4J, 1, tempo);
  clignote_feu (F4V, 1, tempo);
}


