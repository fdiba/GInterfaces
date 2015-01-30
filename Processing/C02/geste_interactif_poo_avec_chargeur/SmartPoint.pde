class SmartPoint{
    
  PVector location;
  
  SmartPoint(){
  
    location = new PVector(0, 0);
  
  }
  void display(){
    noStroke();
    fill(255, 0, 0);
    ellipse(location.x, location.y, 20, 20);
  }
  void update(){
    location.x = mouseX;
    location.y = mouseY;
  }  
  boolean hitTarget(Btn btn){
    
    if(location.x > btn.location.x && location.x < btn.location.x + btn.mWidth &&
       location.y > btn.location.y && location.y < btn.location.y + btn.mHeight){
      return true; 
    } else {
      return false; 
    }
  }
}
