//Déclaration variable
int pinTab[5]={2,3,4,5,6};
int bouton=8;

void setup()
{
  //Initialisation des variables
  Serial.begin(9600);
  for(int cpt=0;cpt<5;cpt++)
  {
    pinMode(pinTab[cpt],OUTPUT);
    digitalWrite(pinTab[cpt],LOW);
  }
  pinMode(bouton,INPUT_PULLUP);
  randomSeed(analogRead(0));
}

void loop()
{
  boolean etatBtn = digitalRead(bouton); /*Nous sommes en mode INPUT_PULLUP, cela signifie que
  l'etat 1 indique le bouton poussoir est levé et l'etat 0, il est appuyé*/
  
  if(!etatBtn) //L'etat de bouton passe à 0, ça signifie que j'ai appuyé
  {
    int nombre;
    nombre = random(5);
    Serial.println(nombre);
    affichageNb(nombre);
    delay(5000);
    for (int cpt=0;cpt<5;cpt++)
    {
      digitalWrite(pinTab[cpt],LOW);
    }
  }
}

void initZero()
{
  for(int cpt=0;cpt<5;cpt++)
  {
    digitalWrite(pinTab[cpt],LOW);
  }
}

void affichageNb(int nbre)
{
  initZero();
  
  if (nbre==0)
  {
    initZero();
    return;
  }
  
  if (nbre==1)
  {
    digitalWrite(pinTab[2],HIGH); //Cela correspond à la connexion 4
    return;
  }
  
  if (nbre==2)
  {
    digitalWrite(pinTab[0],HIGH); //Cela correspond à la connexion 2
    digitalWrite(pinTab[1],HIGH); //Cela correspond à la connexion 3
    return;
  }
  
  if (nbre==3)
  {
    digitalWrite(pinTab[0],HIGH); //Cela correspond à la connexion 2
    digitalWrite(pinTab[1],HIGH); //Cela correspond à la connexion 3
    digitalWrite(pinTab[2],HIGH); //Cela correspond à la connexion 4
    return;
  }
  
  if (nbre==4)
  {
    digitalWrite(pinTab[0],HIGH); //Cela correspond à la connexion 2
    digitalWrite(pinTab[1],HIGH); //Cela correspond à la connexion 3
    digitalWrite(pinTab[3],HIGH); //Cela correspond à la connexion 5
    digitalWrite(pinTab[4],HIGH); //Cela correspond à la connexion 6
    return;
  }
  
  if (nbre==5)
  {
    digitalWrite(pinTab[0],HIGH); //Cela correspond à la connexion 2
    digitalWrite(pinTab[1],HIGH); //Cela correspond à la connexion 3
    digitalWrite(pinTab[2],HIGH); //Cela correspond à la connexion 4
    digitalWrite(pinTab[3],HIGH); //Cela correspond à la connexion 5
    digitalWrite(pinTab[4],HIGH); //Cela correspond à la connexion 6
    return;
  }
  return;
}


//CONCUSION: J'ai testé, mon programme fonctionne
