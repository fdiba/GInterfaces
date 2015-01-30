SmartPoint sp;
Btn btn;

void setup(){
 size(640, 480);
 sp = new SmartPoint();
 btn = new Btn(width-50, 10, 40, 40);
}
void draw(){
  background(255);
  
  sp.update();
  
  btn.display();
  sp.display();
  
  if(sp.hitTarget(btn)){
    println("hit " + random(1)); 
  }

}
