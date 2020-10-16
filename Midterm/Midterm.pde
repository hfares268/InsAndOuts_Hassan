String state= "pregame";
int ellipseY = 0;

void setup() {
  size (800, 800);
  textAlign(CENTER);
  textSize(36);
  
}



void draw(){
  
  if (state == "pregame"){
    background(0,0,255);
    text("Click To Start Game", width/2, height/2);
  }else if (state == "Game"){
    background(0, 100, 0);
    ellipse(mouseX, ellipseY, 100, 100);
    ellipseY++; 
    //text("This is Just the Beginning", width/2, height/2);
    
  }
}
