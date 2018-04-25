byte F1R = 16;
byte F1J = 15;
byte F1V = 14;
byte F2R = 4;
byte F2J = 5;
byte F2V = 6;
byte F3R = 7;
byte F3J = 8;
byte F3V = 9;
byte F4R = 10;
byte F4J = 11;
byte F4V = 12;

/*
 * Déclaration des prototypes des fonctions de contrôle
 */
void setup_feux (void);
void allume_feu (byte IdFeu);
void eteins_feu (byte IdFeu);
void clignote_feu (byte IdFeu, int nb_cligno=4, int tempo=1000);
void test_LED (int tempo=200);

/*
 * Initialisation du programme (effectué une seule fois)
 */
void setup() 
{
  setup_feux();
}

/*
 * Boucle du programme principal (boule infinie)
 */
void loop() 
{
test_LED(1000);

/*
allume_feu(F1R);
allume_feu(F3R);
delay(5000)

allume_feu(F1R);
allume_feu(F3R);
delay(5000)
*/
}

