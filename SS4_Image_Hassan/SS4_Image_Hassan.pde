PImage Journey;  //Creates a PImage object called cupcake

//Creates variables for text animation
float opacity=20;
float fade = 1;

void setup() {
  size (800, 800);
  background (255);
  imageMode(CENTER); //draws images from center point
  textAlign(TOP);  //aligns text
  textSize(50);  //sets size of text
PFont f = createFont("Italics", 50);
   textFont(f);

  //Assign image to object using loadImage() method
  Journey = loadImage("Journey.png");
}  

void draw() {
  background(150, 90, 100);
  
  PFont f;
  String m = "A Desert of Mysteries";
  //text display and animation
  fill(opacity);
  text ("A Desert of Mysteries", width/2, height/2 - 50);  //displays text
  opacity= opacity+fade;
  if (opacity> 255 || opacity< 0) {
    fade= -fade;
  }

  //display image with image() method
  image (Journey, width/2, height/2 +50);

  println ("opacity: " + opacity);
  println ("fade: " + fade);
}
