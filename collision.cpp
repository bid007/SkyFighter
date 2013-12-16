#include"header.h"
#include"collision.h"
#include"obj.h"
#include"cubes.h"
#include"fire.h"

void collision::check(fighter &fgt,cubes &cb1,cubes &cb2,cubes & cb3,cubes &cb4,cubes &cb5,cubes &cb6,cubes &cb7,cubes &cb8,cubes &cb9){
    //cout<<"plane"<<endl;

    //cout<<fgt.xpos<<" "<<fgt.ypos<<" "<<fgt.zpos<<endl;
   // cout<<"cube"<<endl;
   // cout<<cb1.x<<" "<<cb1.y<<" "<<cb1.z<<endl;
    if(fgt.ypos==cb1.y){
        //cout<<"In the same plane"<<endl;

        if(sqrt(((fgt.xpos-cb1.x)*(fgt.xpos-cb1.x))+((fgt.zpos-cb1.z)*(fgt.zpos-cb1.z)))<=1.5){
        cout<<"collided1"<<endl;
        //cout<<abs(fgt.xpos)-abs(cb1.x)<<endl;
        cb1.flag1=true;
        }
        if(sqrt(((fgt.xpos-cb2.x)*(fgt.xpos-cb2.x))+((fgt.zpos-cb2.z)*(fgt.zpos-cb2.z)))<=1.5){
        cout<<"collided2"<<endl;
        cb2.flag2=true;
        }

        if(sqrt(((fgt.xpos-cb3.x)*(fgt.xpos-cb3.x))+((fgt.zpos-cb3.z)*(fgt.zpos-cb3.z)))<=1.5){
        cout<<"collided3"<<endl;
        cb3.flag3=true;
        }

    }
    if(fgt.ypos==cb4.y){
        //cout<<"In the same plane"<<endl;

        if(sqrt(((fgt.xpos-cb4.x)*(fgt.xpos-cb4.x))+((fgt.zpos-cb4.z)*(fgt.zpos-cb4.z)))<=1.5){
        cout<<"collided4"<<endl;
        cb4.flag4=true;
        }
        if(sqrt(((fgt.xpos-cb5.x)*(fgt.xpos-cb5.x))+((fgt.zpos-cb5.z)*(fgt.zpos-cb5.z)))<=1.5){
        cout<<"collided5"<<endl;
        cb5.flag5=true;
        }

        if(sqrt(((fgt.xpos-cb6.x)*(fgt.xpos-cb6.x))+((fgt.zpos-cb6.z)*(fgt.zpos-cb6.z)))<=1.5){
        cout<<"collided6"<<endl;
        cb6.flag6=true;
        }

    }



        if(fgt.ypos==cb7.y){
        //cout<<"In the same plane"<<endl;

        if(sqrt(((fgt.xpos-cb7.x)*(fgt.xpos-cb7.x))+((fgt.zpos-cb7.z)*(fgt.zpos-cb7.z)))<=1.5){
        cout<<"collided7"<<endl;
        cb7.flag7=true;
        }
        if(sqrt(((fgt.xpos-cb8.x)*(fgt.xpos-cb8.x))+((fgt.zpos-cb8.z)*(fgt.zpos-cb8.z)))<=1.5){
        cout<<"collided8"<<endl;
        cb8.flag8=true;
        }

        if(sqrt(((fgt.xpos-cb9.x)*(fgt.xpos-cb9.x))+((fgt.zpos-cb9.z)*(fgt.zpos-cb9.z)))<=1.5){
        cout<<"collided9"<<endl;
        cb9.flag9=true;
        }

    }

 }
 void collision::checkBullet(fire &fgt,cubes &cb1,cubes &cb2,cubes & cb3,cubes &cb4,cubes &cb5,cubes &cb6,cubes &cb7,cubes &cb8,cubes &cb9){
    //cout<<"plane"<<endl;

    //cout<<fgt.xpos<<" "<<fgt.ypos<<" "<<fgt.zpos<<endl;
   // cout<<"cube"<<endl;
   // cout<<cb1.x<<" "<<cb1.y<<" "<<cb1.z<<endl;
    if(fgt.bulletY==cb1.y){
        //cout<<"In the same plane"<<endl;

        if(sqrt(((fgt.bulletX-cb1.x)*(fgt.bulletX-cb1.x))+((fgt.bulletZ-cb1.z)*(fgt.bulletZ-cb1.z)))<=1){
        cout<<"collided1"<<endl;
        //cout<<abs(fgt.xpos)-abs(cb1.x)<<endl;
        cb1.bulletflag1=true;
        fgt.bulletCollided=true;
        }
        if(sqrt(((fgt.bulletX-cb2.x)*(fgt.bulletX-cb2.x))+((fgt.bulletZ-cb2.z)*(fgt.bulletZ-cb2.z)))<=1){
        cout<<"collided2"<<endl;
        cb2.bulletflag2=true;
        fgt.bulletCollided=true;
        }

        if(sqrt(((fgt.bulletX-cb3.x)*(fgt.bulletX-cb3.x))+((fgt.bulletZ-cb3.z)*(fgt.bulletZ-cb3.z)))<=1){
        cout<<"collided3"<<endl;
        cb3.bulletflag3=true;
        fgt.bulletCollided=true;
        }

    }
    if(fgt.bulletY==cb4.y){
        //cout<<"In the same plane"<<endl;

        if(sqrt(((fgt.bulletX-cb4.x)*(fgt.bulletX-cb4.x))+((fgt.bulletZ-cb4.z)*(fgt.bulletZ-cb4.z)))<=1){
        cout<<"collided4"<<endl;
        cb4.bulletflag4=true;
        fgt.bulletCollided=true;
        }
        if(sqrt(((fgt.bulletX-cb5.x)*(fgt.bulletX-cb5.x))+((fgt.bulletZ-cb5.z)*(fgt.bulletZ-cb5.z)))<=1){
        cout<<"collided5"<<endl;
        cb5.bulletflag5=true;
        fgt.bulletCollided=true;
        }

        if(sqrt(((fgt.bulletX-cb6.x)*(fgt.bulletX-cb6.x))+((fgt.bulletZ-cb6.z)*(fgt.bulletZ-cb6.z)))<=1){
        cout<<"collided6"<<endl;
        cb6.bulletflag6=true;
        fgt.bulletCollided=true;
        }

    }



        if(fgt.bulletY==cb7.y){
        //cout<<"In the same plane"<<endl;

        if(sqrt(((fgt.bulletX-cb7.x)*(fgt.bulletX-cb7.x))+((fgt.bulletZ-cb7.z)*(fgt.bulletZ-cb7.z)))<=1){
        cout<<"collided7"<<endl;
        cb7.bulletflag7=true;
        fgt.bulletCollided=true;
        }
        if(sqrt(((fgt.bulletX-cb8.x)*(fgt.bulletX-cb8.x))+((fgt.bulletZ-cb8.z)*(fgt.bulletZ-cb8.z)))<=1){
        cout<<"collided8"<<endl;
        cb8.bulletflag8=true;
        fgt.bulletCollided=true;
        }

        if(sqrt(((fgt.bulletX-cb9.x)*(fgt.bulletX-cb9.x))+((fgt.bulletZ-cb9.z)*(fgt.bulletZ-cb9.z)))<=1){
        cout<<"collided9"<<endl;
        cb9.bulletflag9=true;
        fgt.bulletCollided=true;
        }

    }

 }



