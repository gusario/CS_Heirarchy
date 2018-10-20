//
//  weapon.h
//  CS_Heirarchy
//
//  Created by David Nurdinov on 13/05/2018.
//  Copyright © 2018 David Nurdinov. All rights reserved.
//

#ifndef weapon_h
#define weapon_h
#include <iostream>
#include <string>
using namespace std;

class Weapon{
public:
    string name;
    void set_name(string name){
        this->name=name;
    }
    virtual void shoot()=0;
    virtual void show()=0;
    virtual ~Weapon(){
        cout<<endl<<"WEAPON HAS DROPPED!!!"<<endl;
    }
};

class pistol:public Weapon{
public:
    int clip;
    string caliber;
    bool fuse(bool on){
        if (on==true){
            cout<<"Fuse ON, it's can't shoot now"<<endl;
            return 1;
        }
        else{
            cout<<"Fuse OFF, KILL THEM ALL!!!"<<endl;
            return 0;
        }
    }
    void shoot() override{
        cout<<endl<<"PIF-PAF!!!"<<endl<<"enemy killed"<<endl<<endl;
    }
    pistol(string name, string caliber, int clip){
        this->name=name;
        this->caliber=caliber;
        this->clip=clip;
    }
    
    void show()override{
        cout<<"Pistol: "<<name<<endl<<"Caliber: "<<caliber<<endl<<"Clip: "<<clip<<" bullets"<<endl;
    }
    
    
};

class rifle:public pistol{
public:
    string firemode;
    rifle(string name, string caliber, int clip, string firemode):pistol(name, caliber, clip){
        this->firemode=firemode;
    }
    
    void show()override{
        cout<<"Rifle: "<<name<<endl<<"Caliber: "<<caliber<<endl<<"Clip: "<<clip<<" bullets"<<endl<<"firemode "<<firemode<<endl;
    }
    void shoot() override{
        cout<<endl<<"TRA-TA-TA-TA-TA!!!"<<endl<<"enemy killed"<<endl<<endl;
        
    }

};

class submachinegun:public rifle{
public:
    submachinegun(string name, string caliber, int clip, string firemode):rifle(name, caliber, clip,firemode){}
    void show()override{
        cout<<"Submachine Gun: "<<name<<endl<<"Caliber: "<<caliber<<endl<<"Clip: "<<clip<<" bullets"<<endl<<"firemode "<<firemode<<endl;
    }
    void shoot() override{
        cout<<endl<<"TRRR-R-R-R-R-R-R-R-R!!!"<<endl<<"enemy killed"<<endl<<endl;
        
    }
    
};


class sniper:public pistol{
public:
    int range;
    sniper(string name, string caliber, int clip, int range):pistol(name, caliber, clip){
        this->range=range;
    }
    
    void show()override{
        cout<<"Sniper rifle: "<<name<<endl<<"Caliber: "<<caliber<<endl<<"Clip: "<<clip<<" bullets"<<endl<<"range: "<<range<< " meters"<<endl;
    }
    void shoot() override{
        cout<<endl<<"BOOOOOOM!!!HEADSHOT!!!"<<endl<<"enemy killed"<<endl<<endl;
        
    }
    
};

class knife:public Weapon{
public:
    string bladelen;
    string country;
    knife(string name, string bladelen, string country ){
        this->name=name;
        this->bladelen=bladelen;
        this->country=country;
    }
    void show() override{
        cout<<"Knife: "<<name<<endl<<"Blade: "<<bladelen<< " cm"<<endl<<"Country: "<<country<<endl;
    }
    void shoot() override{
         cout<<endl<<"VJOOH!!!!"<<endl<<"enemy slaughted"<<endl<<endl;
    }
    
};


#endif /* weapon_h */
