class Btn{
  
  PVector location;
  int mWidth, mHeight;
  int alpha;
  
  color couleur;
  int id;
  
  int speed;
  
  Btn(float _x, float _y, int _mWidth, int _mHeight, color _couleur, int _id, int _speed){
    
    location = new PVector(_x, _y);
    mWidth = _mWidth;
    mHeight = _mHeight;
    alpha = 0;
    
    couleur = _couleur;
    id = _id;
    
    speed = _speed;
    
  }
  void display(){
    stroke(0);
    fill(couleur, alpha);
    rect(location.x, location.y, mWidth, mHeight);
  }
  void isHit(){
    
    if(alpha<255){
      alpha+=speed;
    } else if (alpha>=255){     
      console.updateMessage(str(id));
      console.testCombinaison();
      alpha = 0; 
    }
    
    if(alpha>255)alpha=255;
    
  }
  void isNotHit(){
    if(alpha>0)alpha-=speed;
    if(alpha<0)alpha=0;
  }
}
