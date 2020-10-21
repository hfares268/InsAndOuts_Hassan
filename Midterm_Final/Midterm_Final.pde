PImage Journey;  //Creates a PImage object called cupcake
PImage goose;
PImage papersplease;
//Creates variables for text animation

//opacity and fade orginates from in class demo week 4
float opacity=20;
float fade = 1;

//original code for fall is from week 4 demo 
float fall = 0;

PImage[] games = new PImage[2];
int images = 0; 
//= int(random(games.length));

//int mouseX;
//int mouseY;


void setup() {
  games[0] = loadImage("littlenightmares.jpeg");
  games[1] = loadImage("rl.jpg");
  size (800, 800);
  background (255);
  imageMode(CENTER); //draws images from center point
  textAlign(CENTER, TOP);  //aligns text
  textSize(50);  //sets size of text
PFont f = createFont("Arial", 50);
   textFont(f);

  //Assign image to object using loadImage() method
  Journey = loadImage("Journey.png");
  goose = loadImage("goose.jpg");
  papersplease = loadImage("papersplease.png");
  
}  

void draw() {
 background(150, 90, 100);
  //text display and animation
  fill(opacity);
  image (Journey, width/2, height/2 +50);
  text ("A Desert of Mysteries", 400, 30);  //displays text
  opacity= opacity+fade;
  /*if (opacity> 255 || opacity< 0) {
    fade = -fade;
  }*/

  //display image with image() method
  
   if(mouseX > 400 && mouseY < 500){
      background(20, 120, 90);
      image (goose, width/2, height/2 +50);
      text("A world to cause chaos in", 400, 30);
      
  //println ("opacity: " + opacity);
  // println ("fade: " + fade);
  
  }else if(mouseX > 80 && mouseY > 200){
        background(108, 45, 180);
        image (papersplease, width/2, fall);
         text("GLORY TO ARSTOZKA", 400, 30);
        fill(opacity);
    if (fall < height/2) {
      fall++;
    }
  }
  if(mouseX > 90 && mouseY > 500){
    background(180, 50, 180);
    imageMode(CENTER);
   
    fill(opacity); 
     text("World of Nightmares", 400, 30);
     text("VROOM VROOM", 400, 680);
     image(games[images], width/2, height/2, 200, 200);
  }

}
  void keyPressed(){
  images= int(random(games.length));
   
  }
