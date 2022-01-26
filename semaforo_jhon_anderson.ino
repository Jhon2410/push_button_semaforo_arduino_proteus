int rojo = 3 ; //led luz roja.
int amarillo  = 2 ; //led luz amarila.
int verde = 1 ; //led luz verde.
int btn = 4; //boton que hace funcionar el semaforo.

void setup() {
  // put your setup code here, to run once:

  //inicializar las luces del semaforo.
  for(int i  = 1 ; i <= 3 ; i++){
    pinMode(i, 1);
  }
  //iniciar el boton.
  pinMode(btn, INPUT);
}

void on(int luz){
        for(int i  = 1 ; i <= 3 ; i++){
            if(i == luz){
               digitalWrite(i, HIGH);
            }else{
              digitalWrite(i, LOW);
            }
        }
}

void loop() {
  // put your main code here, to run repeatedly:
  //resetear valores
  on(5);
 //btn validacion si esta pulsado.
 int isPulsado = digitalRead(btn);
 if(isPulsado){

  //secuencia.
    on(2);
  delay(300);
  on(3);
  delay(1000);
  on(2);
  delay(300);
  on(1);
  delay(1000);
 }
  
}
  
