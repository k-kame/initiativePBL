int pinMODE    = 6;
int pinAenable = 5; // PWM信号
int pinAphase  = 4; // 回転方向
int pinBenable = 3;
int pinBphase  = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode( pinMODE,    INPUT  );
  pinMode( pinAphase,  OUTPUT );
  pinMode( pinAenable, OUTPUT );
  pinMode( pinBphase,  OUTPUT );
  pinMode( pinBenable, OUTPUT );
  //
  digitalWrite( pinMODE, HIGH );
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(  pinAenable, 127 );
  digitalWrite( pinAphase, HIGH );
  analogWrite(  pinBenable, 127 );
  digitalWrite( pinBphase, HIGH );
  delay( 5000 );
  analogWrite(  pinAenable, 64 );
  digitalWrite( pinAphase, LOW );
  analogWrite(  pinBenable, 64 );
  digitalWrite( pinBphase, LOW );
  delay( 5000 );
}
