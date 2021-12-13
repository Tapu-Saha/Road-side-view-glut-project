//*********** Upper Tree 1 ***********

void Uppertree()
{
glColor3f(0.501, 0.231, 0.035);
glRectf(-40,-35,-30,25);
//tringle
glColor3f(0.0, 0.30, 0.0);
triangle(-60,25,-10,-35,65);
glColor3f(0.0, 0.40, 0.0);
triangle(-60,45,-10,-35,80);
glColor3f(0.0, 0.50, 0.0);
triangle(-60,65,-10,-35,105);

//*********** Upper Tree 2 ***********

glColor3f(0.501, 0.231, 0.035);
glRectf(55,-35,65,25);
//tringle
glColor3f(0.0, 0.30, 0.0);
triangle(35,25,85,60,65);
glColor3f(0.0, 0.40, 0.0);
triangle(35,45,85,60,80);
glColor3f(0.0, 0.50, 0.0);
triangle(35,65,85,60,105);

// *********** Upper Tree 3 ***********

glColor3f(0.501, 0.231, 0.035);
glRectf(220,-35,230,25);
//tringle
glColor3f(0.0, 0.30, 0.0);
triangle(200,25,250,225,65);
glColor3f(0.0, 0.40, 0.0);
triangle(200,45,250,225,80);
glColor3f(0.0, 0.50, 0.0);
triangle(200,65,250,225,105);

}
