import ddf.minim.*;

Minim minim;
AudioPlayer player;

SmartPoint sp;
MaConsole console;

Btn btn1;
Btn btn2;
Btn btn3;

MonTexte monTexte;

void setup(){
  
 size(640, 480);
 sp = new SmartPoint();
 console = new MaConsole(30, 50);
 
 btn1 = new Btn(width-50, 10, 40, 40, color(255, 0, 0), 1, 5);
 btn2 = new Btn(width-50, 60, 40, 40, color(0, 255, 0), 2, 5);
 btn3 = new Btn(width-50, 110, 40, 40, color(0, 0, 255), 3, 1);
 
 minim = new Minim(this);
 
 monTexte = new MonTexte();
  
}
void makeSomeNoise(String _str){
  player = minim.loadFile(_str);
  if(!player.isPlaying()){
    player.rewind();
    player.pause();
  }
  player.play();
}
void mousePressed(){
  console.resetMessage();
  monTexte.update("Hello again!");
}
void draw(){
  
  background(255);
  
  sp.update();
  
  console.display();
  
  btn1.display();
  btn2.display();
  btn3.display();
  
  monTexte.display();
  
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
