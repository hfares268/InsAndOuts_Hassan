//boolean button = false;

float r= 255;
float g= 255;
float b= 255;


void setup(){
size(800, 800);
background(120, 150, 90);

}


void draw(){
  
  
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
   
  }
  else if (mousePressed != true){
    
    fill(155, 105, 190);
    ellipse(600, 600, 100, 100);
  }
}

void mousePressed() {
  r= random (0, 255); 
  g= random (0, 255);
  b= random (0, 255);
}
