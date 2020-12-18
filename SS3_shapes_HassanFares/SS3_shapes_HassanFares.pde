import processing.video.*;

//import processing.dxf.*;


float r= 255;
float g= 255;
float b= 255;

Movie myMovie;
Movie clip1;
Movie clip2;

import processing.serial.*;  //import Serial library


Serial myPort;  // create object from Serial class


void setup(){
size(800, 800);
background(120, 150, 90);

  clip1 = new Movie(this, "clip1.mp4");
  clip2 = new Movie(this, "clip2.mp4");
  
  printArray(Serial.list()); // prints port list to the console
  String portName = Serial.list()[0]; //change to match your port
  myPort = new Serial(this, portName, 9600); //initialize Serial communication at 9600 baud
  
  clip1.play();
  clip2.play();
  
}

void draw(){
  
 /* if (myMovie.available()) {
    myMovie.read();
  }*/


  for (int i= width; i>=0; i-=50) {
   fill(r,g,b);
   triangle(i, i, width/2, i, i, i);
     
  }
  
   for (int i=width; i>=0; i-=50){
     fill(r,g,b);
     triangle(i, height/2, i, i, width/2, i);
   }  
   
    for (int i=height; i>=0; i-=50){
     fill(r,g,b);
     triangle(width/2, i, i, i, width/2, height/2);
   }  
  
   if (mousePressed == true){
    fill(255, 85, 90);
    rect(100, 80, 95, 70);
    myPort.write(1);
    
    if (clip1.available()){
        clip1.read();
     }
     image(clip1, 300, 0);
  }
  else if (mousePressed != true){
    fill(155, 105, 190);
    ellipse(670, 670, 100, 100);
    myPort.write(2);
    if (clip2.available ()){
       clip2.read();
     }
      image(clip2, 0, 500);
      //clip1.stop();
   }
 } 
  
void mousePressed() {
  r= random (0, 255); 
  g= random (0, 255);
  b= random (0, 255);
}
