//
//  main.cpp
//  CS_Heirarchy
//
//  Created by David Nurdinov on 12/05/2018.
//  Copyright © 2018 David Nurdinov. All rights reserved.
//



//YA VSE OB'YASNU NA ZANYATII, IBO LEN' PISAT' KOMENTARII!!!!


#include <iostream>
#include "weapon.h"
using namespace std;
int main() {
   pistol M1911("M1911",".45 ACP",7);
    M1911.show();
    
    if(M1911.fuse(0)==false)
        M1911.shoot();
    
    /*rifle AK_47("AK 47","7.62",30,"AUTO/SEMI");
    AK_47.show();
    if(AK_47.fuse(0)==false)
        AK_47.shoot();*/
    
  /*  submachinegun MP5("HK MP5","9mm",40,"AUTO/SEMI");
    MP5.show();
    if(MP5.fuse(0)==false)
        MP5.shoot();*/
    
   /* sniper AWM("AWM",".300 Winchester Magnum",7, 1200);
    AWM.show();
    if(AWM.fuse(0)==false)
        AWM.shoot();*/
  /*  knife karambit("karambit","3-10", "West Sumatra");
    karambit.show();
    karambit.shoot();*/
    
    
    
    return 0;
}
