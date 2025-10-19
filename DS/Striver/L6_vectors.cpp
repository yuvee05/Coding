#include <bits/stdc++.h>
using namespace std;

void explainVector()
{

    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);
    v.push_back(5);
    v.push_back(6);
    
    cout << v.size();

    vector<pair<int, int>> vec;

    vec.push_back({1,2});
    vec.emplace_back(1,2);

    vector<int> v4(5,100);//Creates a container with 5 instances of 100(size can still be increased)

    vector<int> v3(5);

    vector<int> v1(5,20);
    vector<int> v2(v1);//v2 is a container which is a copy of v1

    vector<int>::iterator it = v.begin();//points to the memory where the first elememt is lying

    it++;
    cout << *(it) << " ";

    vector<int>::iterator it1 = v.end();//points to the memory location which is right after the last element(and not the last element)

    cout << v.back() << " " ;// last element

    for(vector<int>::iterator it3 = v.begin(); it3!=v.end();it3++)
    {
        cout << *(it3) << " ";
    }

    for(auto it4 = v.begin(); it4!=v.end();it4++)// auto assigns the data type automatically depending on the data type of the data
    {
        cout << *(it4) << " ";
    }

    for(auto it5 : v)
    {
        cout << it5 << " ";
    }

    //{10,20,12,23}
    v.erase(v.begin()+1); // {10,12,23}

    //{10,20,12,23,35}
    v.erase(v.begin()+2, v.begin()+4); // {10,20,35} [start, end]


    //Insert function

    vector<int> v5(2,100); //{100, 100}
    v5.insert(v5.begin(),300); //{300,100,100};
    v5.insert(v5.begin()+1,2,10); // {300,10,10,100,100}

    vector<int> copy(2,50); //{50,50}
    v5.insert(v.begin(),copy.begin(), copy.end()); // {50,50,300,10,10,100,100}

    cout << v5.size(); //Prints number of elements in the vector

    v.pop_back();//Pops out the last element

    v1.swap(v2);//Swaps the 2 vectors

    v.clear(); //Erases the entire vector

    cout << v.empty();//Returns true if vector is empty else false

}
int main()
{
    explainVector();
}