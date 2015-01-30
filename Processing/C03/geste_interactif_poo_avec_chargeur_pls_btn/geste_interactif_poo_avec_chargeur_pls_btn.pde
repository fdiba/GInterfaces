SmartPoint sp;
MaConsole console;

Btn btn1;
Btn btn2;
Btn btn3;

void setup(){
  
 size(640, 480);
 sp = new SmartPoint();
 console = new MaConsole(30, 50);
 
 btn1 = new Btn(width-50, 10, 40, 40, color(255, 0, 0), 1);
 btn2 = new Btn(width-50, 60, 40, 40, color(0, 255, 0), 2);
 btn3 = new Btn(width-50, 110, 40, 40, color(0, 0, 255), 3);
  
}
void draw(){
  
  background(255);
  
  sp.update();
  
  console.display();
  
  btn1.display();
  btn2.display();
  btn3.display();
  
  sp.display(); 
  
  if(sp.hitTarget(btn1)){
    btn1.isHit(); 
  } else {
    btn1.isNotHit();
  }
  
  if(sp.hitTarget(btn2)){
    btn2.isHit(); 
  } else {
    btn2.isNotHit();
  }
  
  if(sp.hitTarget(btn3)){
    btn3.isHit(); 
  } else {
    btn3.isNotHit();
  }
  
  
}
