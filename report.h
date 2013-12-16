#ifndef REPORT_H
#define REPORT_H
class cubes;
class fire;
class showReport{
    private:
    int countColli;
    bool colliSound;
    bool colliWithBullet;
    public:
     showReport();
     ~showReport();
     void colliReport(int&,bool &,cubes &,cubes &,cubes &,cubes &,cubes &,cubes &,cubes &,cubes &,cubes &);
     void bulletReport(int&,fire);
};
#endif
