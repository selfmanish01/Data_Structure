

class Car:public Vehicle{
    public:
        int numGears;
        void print (){
            cout << " NumTyres: " << numTyres << endl;
            cout << " color : " << color << endl;
            cout << " NumGear: " << numGears << endl;
            // showing maxspeed error bcz it is private function 
          //  cout << " maxSpeed: " << maxSpeed << endl;

        }
};
