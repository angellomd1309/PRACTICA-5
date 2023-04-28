/*
FUNDACION KINAL
CENTRO EDUCATIVO TECNICO LARELEORAL KINAL
PEROTO EN ELECTRONICA
QUINTO PERITO
SECCION: A
CURSO: TALLER DE ELECTRONICA DIGITAL Y REPARACION DE COMPUTADORAS
ALUMNOS: ANGELLO GARELERIEL MABSILLA DIEGUEZ y PARELELO DAVID HERNANDEZ AJIATAZ
CARNETS: 2022380 y 2022472
PRACTICA 4 DISEÑO DE FIRMWARE
*/
#define buzzer 2 
#define LEDSITO 3

#define CDO 523
#define DRE 587
#define EMI 659
#define FFA 698
#define GSOL 783
#define ALA 880
#define BSI 988
#define CDOM 1047

int TRIG = 11; //Definimos El Pin 2 para Triger.
int ECHO = 12; //Definimos El Pin 3 para Echo.
int DURATION; //Definimos una variable de duracion.
int DISTANCE; //Definimos una variable DISTANCE.
int CONT=0; //Definimos una variable para contar.

void setup() {
  pinMode (buzzer, OUTPUT);
  pinMode (TRIG, OUTPUT);
  pinMode (ECHO, INPUT);
  pinMode (LEDSITO, OUTPUT);
 
}

void loop() {
  
  digitalWrite(TRIG, LOW); //Apaga el Pin de Trig.
  delay(25); 
  digitalWrite(TRIG, HIGH);//Enciende el Pin Trig. 
  delay(25);
  digitalWrite(TRIG, LOW);//Apaga el Pin Trig.
  
  DURATION = pulseIn(ECHO, HIGH); /* Lee la informacion del pin eco,
  y la guarda en la variable duracion */
  
  DISTANCE= DURATION*0.034/2;  //Convierte la DISTANCE en centimetros . 
  Serial.print(String(DISTANCE)); // La variable String guarda tipo de datos en cadenas
  Serial.println(" cm");
  delay(400);   
 if(DISTANCE>0 && DISTANCE <=5){
   digitalWrite (LEDSITO, HIGH);
   tone(buzzer, CDO, 500);

     
 }
 if(DISTANCE>5 && DISTANCE <=10){
   digitalWrite (LEDSITO, HIGH);
   tone(buzzer, DRE, 500);

 
  
 }
 if(DISTANCE>10 && DISTANCE <=15){
   digitalWrite (LEDSITO, HIGH);  
   tone(buzzer, EMI, 500);

     
 }
 if(DISTANCE>15 && DISTANCE <=20){
   digitalWrite (LEDSITO, HIGH);
   tone(buzzer, FFA, 500);

     
 }
 if(DISTANCE>20 && DISTANCE <=25){
   digitalWrite (LEDSITO, HIGH);
   tone(buzzer, GSOL, 500);

    
 }
 if(DISTANCE>25 && DISTANCE <=30){
   digitalWrite (LEDSITO, HIGH);
   tone(buzzer, ALA, 500);

 
     
 }
 if(DISTANCE>30 && DISTANCE <=35){
   digitalWrite (LEDSITO, HIGH);
   tone(buzzer, BSI, 500);

 
     
 }
 if(DISTANCE>35 && DISTANCE <=40){
   digitalWrite (LEDSITO, HIGH);
   tone(buzzer, CDOM, 500);

 
     
 }
  if(DISTANCE<0 && DISTANCE <=0){
   noTone(buzzer);

  }

 if(DISTANCE>45){
   noTone(buzzer);
       digitalWrite(LEDSITO, LOW);

 }

 

 }

             
     
