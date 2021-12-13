void road()
    {
//Road Area
        glColor3f(0.3, 0.3, 0.3);
        rectangle(-300,-140,300,-30);
//road side broader up
        glColor3f(0.0, 0.0, 0.0);
        rectangle(-300,-30,300,-33);
//road side broader down
        glColor3f(0.0, 0.0, 0.0);
        rectangle(-300,-143,300,-140);
//divider
        glColor3f(1.0, 1.0, 1.0);
        rectangle(-270,-80,-230,-86);
//divider
        glColor3f(1.0, 1.0, 1.0);
        rectangle(-270,-80,-200,-86);
//divider
        glColor3f(1.0, 1.0, 1.0);
        rectangle(-150,-80,0,-86);
//divider
        glColor3f(1.0, 1.0, 1.0);
        rectangle(50,-80,150,-86);
//divider
        glColor3f(1.0, 1.0, 1.0);
        rectangle(200,-80,290,-86);
    }