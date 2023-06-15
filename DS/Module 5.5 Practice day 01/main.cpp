#include<bits/stdc++.h>
using namespace std;
/*
cant solve
*/

class Cuboid
{
public:

    int length, width, height;

    Cuboid()
    {

    }

    Cuboid(int length, int width, int height)
    {
        this -> length = length;
        this -> width = width;
        this -> height = height;
    }

    int getVolume(int length, int width, int height)
    {
        int vol = length * width * height;
        return vol;
    }

    int getSurfaceArea(int length, int width, int height)
    {
        int surface = 2 * length * width + 2 * length * height + 2 * height * width;
        return surface;

    }
    void printInfo()
    {
        cout << length << " " << width << " " << " " << height << endl;
    }
};

bool compareByVolume(Cuboid a, Cuboid b)
{

    return a.getVolume() < b.getVolume();
}

int main()
{
    Cuboid s;
    cout << s.getVolume(10, 10, 10) << endl;
    cout << s.getSurfaceArea(20, 20, 20) << endl;

//    Cuboid t[5];
//    for(int i = 0; i < 5; i++)
//    {
//        t[i] = Cuboid(2, 2 + i, 6 + i);
//    }
//    for(int i = 0; i < 5; i++)
//    {
//        t[i].printInfo();
//    }
    vector<Cuboid>t;
    t.push_back(Cuboid(2, 3, 40));
    t.push_back(Cuboid(1, 7, 2));
    t.push_back(Cuboid(6, 4, 30));
    t.push_back(Cuboid(3, 2, 55));

    //first sorting criteria
    sort(t.begin(), t.end(), compareByVolume);
    cout << "After volume sorting" << endl;

    for(int i = 0; i < 5; i++)
    {
        t[i].printInfo();
    }

    return 0;
}
