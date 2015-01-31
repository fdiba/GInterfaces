class MaConsole{
 
  String message;
  PVector location;
  color couleur;
  PFont font;
  
  MaConsole(float _x, float _y){
    location = new PVector(_x, _y);
    message = "";
    couleur = color(0, 102, 153);
    font = loadFont("CenturyGothic-32.vlw");
  }
  void display(){
    textFont(font, 32);
    fill(couleur);
    text(message, location.x, location.y); 
  }
  void testCombinaison() {
    
    if(message.equals("123")){
      makeSomeNoise("kick.wav");
      println("message : " + message);
      resetMessage();
    } else if(message.equals("121")){
      monTexte.update("A quick brown fox jumps over the lazy dog.");
      println("message : " + message);
      resetMessage();
    } else if (message.equals("321")){
      println("321");
    }
  }
  void resetMessage(){
    message = ""; 
  }
  void updateMessage(String _str){
    
    String lastCharacter = "";
    
    if(message.length() > 0){
      lastCharacter = message.substring(message.length()-1);
    }
   
    if (lastCharacter.equals(_str)){
      
      //println("dernière zone activée");
      
    } else {
     
      message = message + _str;
      
    }
  }
}
