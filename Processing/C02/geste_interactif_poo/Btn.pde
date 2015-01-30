class Btn{
  
  PVector location;
  int mWidth, mHeight;
  color couleur;
  
  Btn(float _x, float _y, int _mWidth, int _mHeight){
    
    location = new PVector(_x, _y);
    mWidth = _mWidth;
    mHeight = _mHeight;
    couleur = color(255);
    
  }
  void display(){
    stroke(0);
    fill(couleur);
    rect(location.x, location.y, mWidth, mHeight);
  }
  
}
