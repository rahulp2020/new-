
#include <fstream>
#include <stdio.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <semaphore.h>
#include <unistd.h>
#include <iostream>
#include <fstream>
using namespace std;


class application {
public:

    string name;
    int internees, stipend;
    int input();



     anotheruser_access();
};


int application::input()
{

    ofstream file_obj;


    file_obj.open("Input.txt");


    application obj;


    string str = "someone1";
    int internees = 1, stipend = 2500;


    obj.name = str;
    obj.internees = internees;
    obj.stipend = stipend;


    file_obj.write((char*)&obj, sizeof(obj));


    str = "someone2";
    internees = 2;
    stipend = 3200;


    obj.Name = str;
    obj.internees = internees;
    obj.stipend = stipend;


    file_obj.write((char*)&obj, sizeof(obj));

    return 0;
}
 struct com_obj{

	sem_t mux;

};

void application::anotheruser_access()
{

    ifstream file_obj;


    file_obj.open("Input.txt");


    application obj;


    file_obj.read((char*)&obj, sizeof(obj));

    key_t key = ftok("shmfile",65);

	int shmid = shmget(key,1024,0666|IPC_CREAT);

	struct com_obj *obj = (struct com_obj*) shmat(shmid,(void*)0,0);
    string editinternees;
           sem_wait(&obj->mux);
           cin>>editinternees;
           obj.Name=editinternees;
            usleep(5000000);
           ofile.close();
             sem_post(&obj->mux);

        file_obj.read((char*)&obj, sizeof(obj));



    cout <<editinternees<<endl; ;
    return 0;
}


int main()
{

      application object;

    object.input();


    object.anotheruser_access();

    return 0;
}

