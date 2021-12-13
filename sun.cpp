void Sun(){
if (sun){
glPushMatrix();
glTranslated(200,200,0);
glColor3f(1.0, 0.76, 0.3);
circle(20,40,5,60);
//circle(20,40,0,-20);
glPopMatrix();
}