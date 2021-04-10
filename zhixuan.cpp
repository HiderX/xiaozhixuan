#include<bits/stdc++.h>
using namespace std;
string cosplayer[11]={" ","Katou Megumi","ムラサメ","jojo","Natsukawa Masuzu","Chitanda Eru","Tokisaki Kurumi","Shinomiya Kaguya","Tohsaka Rin","Yuuki Asuna","あきつき あいり"};
bool death=0;
int Random(int start, int end){
    int dis = end - start;
    return rand() % dis + start;
}
int sexhpp=100;
int HP=100;
int happy=100;
int IQ=100;
int sex(){
    int item;
    int randnum;
    cout<<"zhixuan's index:"<<" "<<"happy:"<<" "<<happy<<" "<<"sexhpp:"<<" "<<sexhpp<<" "<<"IQ:"<<" "<<IQ<<"hp:"<<HP<<endl;
    cout<<"what do u want to do?"<<endl;
    cout<<"1.make love 2.handjob 3.below job. 4.bandage play. 5.cosplay";
    cin>>item;
    switch (item)
    {
    case 1:
        if (happy<200)
        {
            cout<<"failed. zhixuan is not happy Sexhpp -5"<<endl;
            sexhpp -=5;
        }
        else{
            randnum=Random(1,5);
            cout<<"1 h later. Done. Happy added:"<<10*randnum<<endl;
            happy+=randnum;
        }
        break;
    case 2:
        if (happy<100)
        {
            cout<<"failed. zhixuan is not happy Sexhpp -5"<<endl;
            sexhpp -=5;
        }
        else{
            randnum=Random(1,2);
            cout<<"1 h later. Done. Happy added:"<<10*randnum<<endl;
            happy+=randnum;
        }
        break;
    case 3:
        if (happy<150)
        {
            cout<<"failed. zhixuan is not happy Sexhpp -5"<<endl;
            sexhpp -=5;
        }
        else{
            randnum=Random(1,3);
            cout<<"1 h later. Done. Happy added:"<<10*randnum<<endl;
            happy+=randnum;
        }   
        break;
    case 4:
        if (happy<250)
        {
            cout<<"failed. zhixuan is not happy Sexhpp -5"<<endl;
            sexhpp -=5;
        }
        else{
        randnum=Random(3,8);
        cout<<"1 h later. Done. Happy added:"<<10*randnum<<endl;
        happy+=randnum;
        }
        break;
    case 5:
        if (happy<300)
        {
            cout<<"failed. zhixuan is not happy Sexhpp -5"<<endl;
            sexhpp -=5;
        }
        else{
        randnum=Random(5,10);
        cout<<"selecting cosplayer"<<endl;
        int cos;
        cos=Random(1,10);
        cout<<"this time 's cosplayer is "<<cosplayer[cos]<<endl;
        cout<<"1 h later. Done. Happy added:"<<10*randnum<<endl;
        happy+=randnum;
        }
        break;
    default:
        break;
    }
}
int purchase(){
    int item;
    cout<<"here are the items you can buy: 1.clothes 2.adult 3.study equipments"<<endl;
    cin>>item;
    switch (item)
    {
    case 1:
        cout<<"you get van's pants. happy added 10"<<endl;
        happy +=10;
        break;
    case 2:
        cout<<"you get a durex. happy added 20"<<endl;
        happy +=20;
        break;
    case 3:
        cout<<"you love study.IQ added 5 . zhixuan is unhappy. happy minused 15"<<endl;
        happy -=15;
        IQ +=10;
        break;
    default:
        cout<<"no such thing"<<endl;
        break;
    }
}
int adult(){
    char pd;
    int item;
    cout<<"Are you 18+  y/n?"<<endl;
    cin>>pd;
    if (pd!='y'&&pd!='Y')
    {
        return 0;
    }
    cout<<"choose your option: 1.hit him 2.grab his leg 3.kick ass 4.";
    cin>>item;
    switch (item)
    {
    case 1:
        cout<<"HP -10 happy -10"<<endl;
        HP-=10;
        happy-=10;
        break;
    case 2:
        cout<<"hpp+5"<<endl;
        happy+=5;
        break;
    case 3:
        cout<<"HP -1 happy +3"<<endl;
        HP-=1;
        happy+=3;
        break;
    case 4:
        cout<<"welcome to sex mode."<<endl;
        sex();
        break;
    default:
        break;
    }
    
}
int others(){}
char* timenow(){
    time_t the_time;
	time(&the_time);
    return ctime(&the_time);
}
int heartbroken(){
    string pass;
    cout<<"zhixuan's is twisted because he is very very sad. He is heartbroken now. He bit ur **** off. And u r bleeding to death now."<<endl;
    cout<<timenow()<<endl;
    for (int i = 30; i > 0; i--)
    {
        cout<<"you have "<<i<<"seconds left"<<endl;
        _sleep(1000);
    }
    if (sexhpp<0)
    {       
        cout<<"time's up. you died at "<<timenow<<endl;
        death=1;
    }
    return death;
}
int main(){
    int day=0;
    srand((unsigned)time(NULL));
    int item;
    cout<<"this is zhixuan v1.0"<<endl;
    while (1)
    {   
        cout<<"this is the"<<" "<<day<<" day"<<endl;
        cout<<"zhixuan's index: "<<"happy: "<<happy<<" sexhpp: "<<sexhpp<<" IQ: "<<IQ<<" hp: "<<HP<<endl;
        if(sexhpp<=0){
            if (heartbroken())
            {
                cout<<"you have played zhixuan for"<<day<<"days"<<endl;
                cout<<"zhixuan's"<<" "<<"happy added:"<<" "<<happy-100<<" "<<"sexhpp added:"<<" "<<sexhpp-100<<" "<<"IQ added:"<<" "<<IQ-100<<"hp added:"<<HP-100<<endl;
                break;
            }
        }
        cout<<"choose your item"<<endl;
        cout<<"1.purchase 2.adult 3.others 4.exit"<<endl;
        cin>>item;
        if (item==4)
        {
            cout<<"you have played zhixuan for"<<day<<"days"<<endl;
            cout<<"zhixuan's"<<" "<<"happy added:"<<" "<<happy-100<<" "<<"sexhpp added:"<<" "<<sexhpp-100<<" "<<"IQ added:"<<" "<<IQ-100<<"hp added:"<<HP-100<<endl;
            break;
        }
        
        switch (item)
        {
            case 1:
            purchase();
            cout<<"zhixuan's index:"<<" "<<"happy:"<<" "<<happy<<" "<<"sexhpp:"<<" "<<sexhpp<<" "<<"IQ:"<<" "<<IQ<<"hp:"<<HP<<endl;
            break;
            case 2:
            adult();
            cout<<"zhixuan's index:"<<" "<<"happy:"<<" "<<happy<<" "<<"sexhpp:"<<" "<<sexhpp<<" "<<"IQ:"<<" "<<IQ<<"hp:"<<HP<<endl;
            break;
            case 3:
            others();
            cout<<"zhixuan's index:"<<" "<<"happy:"<<" "<<happy<<" "<<"sexhpp:"<<" "<<sexhpp<<" "<<"IQ:"<<" "<<IQ<<"hp:"<<HP<<endl;
            break;
            default:
            break;
        }
        day++;
    }
    cout<<"bye bye. made by yichk0. ver 1.0"<<endl;
    system("Pause");
    return 0;
}
