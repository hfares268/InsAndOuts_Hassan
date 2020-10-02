float y = 50;
int[] pointX = new int[100];
int[] pointY = new int[100];


void setup(){
  size(800, 800);
  //fill the arrays with random numbers
  for(int i=0; i<100; i++){
    pointX[i]= int (random(50,width));
    pointY[i]= int (random(50,height));
  }
  
}

void draw(){
  background(120);
  stroke(20);
  fill(200);
  for (int i=0; i<pointY.length; i++){
    rect(20, 20, pointX[i], pointY[i]);
    
  }
  stroke(134);
  for(int i=0; i<50; i++){
    fill(45);
   ellipse(500, 400, pointX[i], pointY[i]);
  
  if(mousePressed == true){
    rect(500, 400, pointX[i], pointY[i]);
    
    }
    for (int x=40; x>=width; x+=50) {
    ellipse (pointX[i], y, 50, 50);
  }

  y++; 
  }
}
