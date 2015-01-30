class Btn{
  
  PVector location;
  int mWidth, mHeight;
  int alpha;
  color couleur;
  
  Btn(float _x, float _y, int _mWidth, int _mHeight){
    
    location = new PVector(_x, _y);
    mWidth = _mWidth;
    mHeight = _mHeight;
    alpha = 0;
    couleur = color(127);
    
  }
  void display(){
    stroke(0);
    fill(couleur, alpha);
    rect(location.x, location.y, mWidth, mHeight);
  }
  void isHit(){
    if(alpha<255){
      alpha++;
    } else if (alpha==255){
      println("new event "+random(1)); 
    }
  }
  void isNotHit(){
    
    if(alpha>0)alpha--;
    
  }
}
