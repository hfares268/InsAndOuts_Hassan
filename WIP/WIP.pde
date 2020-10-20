PImage Journey;  //Creates a PImage object called cupcake
PImage goose;
//Creates variables for text animation
float opacity=20;
float fade = 1;
int mouseX;
int mouseY;


void setup() {
  size (800, 800);
  background (255);
  imageMode(CENTER); //draws images from center point
  textAlign(CENTER);  //aligns text
  textSize(50);  //sets size of text
PFont f = createFont("Arial", 50);
   textFont(f);

  //Assign image to object using loadImage() method
  Journey = loadImage("Journey.png");
  goose = loadImage("goose.jpg");
  
}  

void draw() {
 
 background(150, 90, 100);
  //text display and animation
  //fill(opacity);
  text ("A Desert of Mysteries", width/2, height/2 - 50);  //displays text
  //opacity= opacity+fade;
  /*if (opacity> 255 || opacity< 0) {
    fade = -fade;
  }*/

  //display image with image() method
  image (Journey, width/2, height/2 +50);
 
    if(mouseX > 400 && mouseY < 500){
   text("A world to cause chaos in", width/2, height/2);
     image (goose, width/2, height/2 -50);
  
  //println ("opacity: " + opacity);
  // println ("fade: " + fade);
  
 
  }
}
