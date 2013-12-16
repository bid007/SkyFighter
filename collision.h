#ifndef COLLISION_H
#define COLLISION_H
class cubes;
class fighter;
class fire;
class collision{
    public:
    void check(fighter &, cubes&,cubes &,cubes&,cubes&,cubes&,cubes&,cubes&,cubes&,cubes&);
    void checkBullet(fire &, cubes&,cubes &,cubes&,cubes&,cubes&,cubes&,cubes&,cubes&,cubes&);

};
#endif

