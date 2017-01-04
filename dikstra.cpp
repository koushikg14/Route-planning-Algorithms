#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<iostream>

#define INFINITY 999

int n0 = 0;
int n1 = 0;
int n2 = 0;
int n3 = 0;
int n4 = 0;
int n5 = 0;
int n6 = 0;
int n7 = 0;
int n8 = 0;
int n9 = 0;
int n10 = 0;
int n11 = 0;
int n12 = 0;
int n13 = 0;
int n14 = 0;
int n15 = 0;
int n16 = 0;
int n17 = 0;
int n18 = 0;
int n19 = 0;
int n20 = 0;
int n21 = 0;
int n22 = 0;
int n23 = 0;
int n24 = 0;
int n25 = 0;
int n26 = 0;
int n27 = 0;
int n28 = 0;
int n29 = 0;
int n30 = 0;
int n31 = 0;
int n32 = 0;
int n33 = 0;
int n34 = 0;
int n35 = 0;
int n36 = 0;
int n37 = 0;
int n38 = 0;
int n39 = 0;
int n40 = 0;
int n41 = 0;
int n42 = 0;
int n43 = 0;
int n44 = 0;
int n45 = 0;
int n46 = 0;
int n47 = 0;
int n48 = 0;
int n49 = 0;


///////////Lines initially set to white/////////
int l1 = 15;
int l2 = 15;
int l3 = 15;
int l4 = 15;
int l5 = 15;
int l6 = 15;
int l7 = 15;
int l8 = 15;
int l9 = 15;
int l10 = 15;
int al1 = 15;
int al2 = 15;
int al3 = 15;
int al4 = 15;
int al5 = 15;
int al6 = 15;
int al7 = 15;
int al8 = 15;
int al9 = 15;
int al10 = 15;
int bl1 = 15;
int bl2 = 15;
int bl3 = 15;
int bl4 = 15;
int bl5 = 15;
int bl6 = 15;
int bl7 = 15;
int bl8 = 15;
int bl9 = 15;
int bl10 = 15;
int cl1 = 15;
int cl2 = 15;
int cl3 = 15;
int cl4 = 15;
int cl5 = 15;
int cl6 = 15;
int cl7 = 15;
int cl8 = 15;
int cl9 = 15;
int cl10 = 15;
int dl1 = 15;
int dl2 = 15;
int dl3 = 15;
int dl4 = 15;
int dl5 = 15;
int dl6 = 15;
int dl7 = 15;
int dl8 = 15;
int dl9 = 15;
int dl10 = 15;
int el1 = 15;
int el2 = 15;
int el3 = 15;
int el4 = 15;
int el5 = 15;
int el6 = 15;
int el7 = 15;
int el8 = 15;
int el9 = 15;
int el10 = 15;
int fl1 = 15;
int fl2 = 15;
int fl3 = 15;
int fl4 = 15;
int fl5 = 15;
int fl6 = 15;
int fl7 = 15;
int fl8 = 15;
int fl9 = 15;
int fl10 = 15;
int gl1 = 15;
int gl2 = 15;
int gl3 = 15;
int gl4 = 15;
int gl5 = 15;
int gl6 = 15;
int gl7 = 15;
int gl8 = 15;
int gl9 = 15;
int gl10 = 15;
int hl1 = 15;
int hl2 = 15;
int hl3 = 15;
int hl4 = 15;
int hl5 = 15;


/////declaration of graph which includes nodes and lines///////////////

int graph(int n0, int n1, int n2, int n3, int n4, int n5, int n6, int n7, int n8,
          int n9,int n10,int n11,int n12,int n13,int n14,int n15,int n16,int n17,
          int n18,int n19,int n20,int n21, int n22,int n23,int n24,int n25,int n26,
          int n27,int n28,int n29,int n30,int n31,int n32,int n33,int n34,int n35,
          int n36,int n37,int n38,int n39,int n40,int n41,int n42,int n43,int n44,
          int n45,int n46,int n47,int n48,int n49,int l1,int l2,int l3,int l4,int l5,
          int l6,int l7,int l8,int l9,int l10,int al1,int al2,int al3,int al4,int al5,
          int al6,int al7,int al8,int al9,int al10,int bl1,int bl2,int bl3,int bl4,int bl5,
          int bl6,int bl7,int bl8,int bl9,int bl10,int cl1,int cl2,int cl3,int cl4,int cl5,int cl6,
          int cl7,int cl8,int cl9,int cl10,int dl1,int dl2,int dl3,int dl4,int dl5,int dl6,int dl7,
          int dl8,int dl9,int dl10,int el1,int el2,int el3,int el4,int el5,int el6,int el7,int el8,
          int el9,int el10,int fl1,int fl2,int fl3,int fl4,int fl5,int fl6,int fl7,int fl8,int fl9,
          int fl10,int gl1,int gl2,int gl3,int gl4,int gl5,int gl6,int gl7,int gl8,int gl9,int gl10,
          int hl1,int hl2,int hl3,int hl4,int hl5);


/////Global declaration of variables used in algorithm///
int adja,src;
int temp[1000];
int o = 0;

using namespace std;



class Dijkstra{


    private:

        int predecessor[50],distance[50]; // track of previous node and the distance


        bool mark[50]; //keep track of visited node


        int source;   //  which will be source node?

        int dest;  // which will be destination?


        int numOfVertices;  // total no of nodes i.e. 50

   public:
     int adjMatrix[80][80]; // weight or distance

    /*


    * Function read() reads No of vertices, Adjacency Matrix and source


    * Matrix from the user. The number of vertices must be greather than


    * zero, all members of Adjacency Matrix must be postive as distances


    * are always positive. The source vertex must also be positive from 0


    * to noOfVertices - 1


    */


        void read();



    /*


    * Function initialize initializes all the data members at the begining of


    * the execution. The distance between source to source is zero and all other


    * distances between source and vertices are infinity. The mark is initialized


    * to false and predecessor is initialized to -1


    */



        void initialize();



    /*


    * Function getClosestUnmarkedNode returns the node which is nearest from the


    * Predecessor marked node. If the node is already marked as visited, then it search


    * for another node.


    */


        int getClosestUnmarkedNode();



    /*


    * Function calculateDistance calculates the minimum distances from the source node to


    * Other node.


    */


        void calculateDistance();



    /*


    * Function output prints the results


    */


        void output();



        void printPath(int);


};




void Dijkstra::read(){



             numOfVertices = 50;


            for(int v = 0; v < 50; v++)   // initially setting all weights to INFINITY = 999
            {
                    for(int u = 0; u < 50; u++)
                    adjMatrix[v][u] = INFINITY;
            }

adjMatrix[0][0] = 0;
adjMatrix[0][1] = 2;
adjMatrix[0][10] = 5;
adjMatrix[1][0] = 2;
adjMatrix[1][1] = 0;
adjMatrix[1][2] = 4;
adjMatrix[1][11] = 8;
adjMatrix[2][1] = 4;
adjMatrix[2][2] = 0;
adjMatrix[2][3] = 6;
adjMatrix[2][12] = 12;
adjMatrix[3][2] = 6;
adjMatrix[3][3] = 0;
adjMatrix[3][4] = 5;
adjMatrix[3][13] = 13;
adjMatrix[4][3] = 5;
adjMatrix[4][4] = 0;
adjMatrix[4][5] = 8;
adjMatrix[4][14] = 7;

adjMatrix[5][4] = 8;
adjMatrix[5][5] = 0;
adjMatrix[5][6] = 9;
adjMatrix[5][15] = 9;
adjMatrix[6][5] = 9;
adjMatrix[6][6] = 0;
adjMatrix[6][7] = 7;
adjMatrix[6][16] = 3;
adjMatrix[7][6] = 7;
adjMatrix[7][7] = 0;
adjMatrix[7][8] = 13;
adjMatrix[7][17] = 2;
adjMatrix[8][7] = 13;
adjMatrix[8][8] = 0;
adjMatrix[8][9] = 15;
adjMatrix[8][18] = 4;
adjMatrix[9][8] = 15;
adjMatrix[9][9] = 0;
adjMatrix[9][19] = 19;
adjMatrix[10][0] = 5;
adjMatrix[10][10] = 0;
adjMatrix[10][11] = 5;
adjMatrix[10][20] = 3;
adjMatrix[11][1] = 8;
adjMatrix[11][10] = 5;
adjMatrix[11][11] = 0;
adjMatrix[11][12] = 7;
adjMatrix[11][21] = 6;
adjMatrix[12][2] = 12;
adjMatrix[12][11] = 7;
adjMatrix[12][12] = 0;
adjMatrix[12][13] = 8;
adjMatrix[12][22] = 8;
adjMatrix[13][3] = 13;
adjMatrix[13][12] = 8;
adjMatrix[13][13] = 0;
adjMatrix[13][14] = 10;
adjMatrix[13][23] = 9;
adjMatrix[14][4] = 7;
adjMatrix[14][13] = 10;
adjMatrix[14][14] = 0;
adjMatrix[14][15] = 16;
adjMatrix[14][24] = 10;
adjMatrix[15][5] = 9;
adjMatrix[15][14] = 16;
adjMatrix[15][15] = 0;
adjMatrix[15][16] = 9;
adjMatrix[15][25] = 13;
adjMatrix[16][6] = 3;
adjMatrix[16][15] = 9;
adjMatrix[16][16] = 0;
adjMatrix[16][17] = 3;
adjMatrix[16][26] = 19;
adjMatrix[17][7] = 2;
adjMatrix[17][16] = 3;
adjMatrix[17][17] = 0;
adjMatrix[17][18] = 1;
adjMatrix[17][27] = 26;
adjMatrix[18][8] = 4;
adjMatrix[18][17] = 1;
adjMatrix[18][18] = 0;
adjMatrix[18][19] = 2;
adjMatrix[18][28] = 30;
adjMatrix[19][0] = 0;
adjMatrix[19][9] = 19;
adjMatrix[19][18] = 2;
adjMatrix[19][19] = 0;
adjMatrix[19][29] = 1;
adjMatrix[20][10] = 3;
adjMatrix[20][20] = 0;
adjMatrix[20][21] = 2;
adjMatrix[20][30] = 1;
adjMatrix[21][11] = 6;
adjMatrix[21][20] = 2;
adjMatrix[21][21] = 0;
adjMatrix[21][22] = 8;
adjMatrix[21][31] = 5;
adjMatrix[22][12] = 8;
adjMatrix[22][21] = 8;
adjMatrix[22][22] = 0;
adjMatrix[22][23] = 10;
adjMatrix[22][32] = 7;
adjMatrix[23][13] = 9;
adjMatrix[23][22] = 10;
adjMatrix[23][23] = 0;
adjMatrix[23][24] = 3;
adjMatrix[23][33] = 6;
adjMatrix[24][14] = 10;
adjMatrix[24][23] = 3;
adjMatrix[24][24] = 0;
adjMatrix[24][25] = 12;
adjMatrix[24][34] = 10;

adjMatrix[25][15] = 13;
adjMatrix[25][24] = 12;
adjMatrix[25][25] = 0;
adjMatrix[25][26] = 1;
adjMatrix[25][35] = 20;
adjMatrix[26][16] = 19;
adjMatrix[26][25] = 1;
adjMatrix[26][26] = 0;
adjMatrix[26][27] = 7;
adjMatrix[26][36] = 11;
adjMatrix[27][17] = 26;
adjMatrix[27][26] = 7;
adjMatrix[27][27] = 0;
adjMatrix[27][28] = 5;
adjMatrix[27][37] = 2;
adjMatrix[28][18] = 30;
adjMatrix[28][27] = 5;
adjMatrix[28][28] = 0;
adjMatrix[28][29] = 4;
adjMatrix[28][38] = 15;
adjMatrix[29][19] = 1;
adjMatrix[29][28] = 4;
adjMatrix[29][29] = 0;
adjMatrix[29][39] = 4;
adjMatrix[30][20] = 1;
adjMatrix[30][30] = 0;
adjMatrix[30][31] = 3;
adjMatrix[30][40] = 2;
adjMatrix[31][21] = 1;
adjMatrix[31][30] = 3;
adjMatrix[31][31] = 0;
adjMatrix[31][32] = 5;
adjMatrix[31][41] = 9;
adjMatrix[32][22] = 7;
adjMatrix[32][31] = 5;
adjMatrix[32][32] = 0;
adjMatrix[32][33] = 7;
adjMatrix[32][42] = 4;
adjMatrix[33][23] = 6;
adjMatrix[33][32] = 7;
adjMatrix[33][33] = 0;
adjMatrix[33][34] = 6;
adjMatrix[33][43] = 6;
adjMatrix[34][24] = 10;
adjMatrix[34][33] = 6;
adjMatrix[34][34] = 0;
adjMatrix[34][35] = 2;
adjMatrix[34][44] = 5;
adjMatrix[35][25] = 20;
adjMatrix[35][34] = 2;
adjMatrix[35][35] = 0;
adjMatrix[35][36] = 1;
adjMatrix[35][45] = 7;
adjMatrix[36][26] = 11;
adjMatrix[36][35] = 1;
adjMatrix[36][36] = 0;
adjMatrix[36][37] = 12;
adjMatrix[36][46] = 10;
adjMatrix[37][27] = 2;
adjMatrix[37][36] = 12;
adjMatrix[37][37] = 0;
adjMatrix[37][38] = 10;
adjMatrix[37][47] = 3;
adjMatrix[38][28] = 15;
adjMatrix[38][37] = 10;
adjMatrix[38][38] = 0;
adjMatrix[38][39] = 9;
adjMatrix[38][48] = 1;
adjMatrix[39][29] = 4;
adjMatrix[39][38] = 9;
adjMatrix[39][39] = 0;
adjMatrix[39][49] = 8;
adjMatrix[40][30] = 2;
adjMatrix[40][40] = 0;
adjMatrix[40][41] = 10;
adjMatrix[41][31] = 9;
adjMatrix[41][40] = 10;
adjMatrix[41][41] = 0;
adjMatrix[41][42] = 4;
adjMatrix[42][32] = 4;
adjMatrix[42][41] = 4;
adjMatrix[42][42] = 0;
adjMatrix[42][43] = 2;
adjMatrix[43][33] = 6;
adjMatrix[43][42] = 2;
adjMatrix[43][43] = 0;
adjMatrix[43][44] = 5;
adjMatrix[44][34] = 5;
adjMatrix[44][43] = 5;
adjMatrix[44][44] = 0;
adjMatrix[44][45] = 9;
adjMatrix[45][35] = 7;
adjMatrix[45][44] = 9;
adjMatrix[45][45] = 0;
adjMatrix[45][46] = 7;
adjMatrix[46][36] = 10;
adjMatrix[46][45] = 7;
adjMatrix[46][46] = 0;
adjMatrix[46][47] = 8;
adjMatrix[47][37] = 3;
adjMatrix[47][46] = 8;
adjMatrix[47][47] = 0;
adjMatrix[47][48] = 6;
adjMatrix[48][38] = 1;
adjMatrix[48][47] = 6;
adjMatrix[48][48] = 0;
adjMatrix[48][49] = 5;
adjMatrix[49][39] = 8;
adjMatrix[49][48] = 5;
adjMatrix[49][49] = 0;

                   /////Initial screen/////


    cout << "\n\tDIJKSTRA'S ALGORITHM GRAPHICAL IMPLEMENTATION\n";
    cout << "\n\nINSTRUCTOR: Sir G.RamaKrishna  \n\n";

    Sleep(3000);  // wait 3 seconds and display initial graph
    graph(n0,n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15,n16,n17,n18,n19,n20,n21,n22,n23,
          n24,n25,n26,n27,n28,n29,n30,n31,n32,n33,n34,n35,n36,n37,n38,n39,n40,n41,n42,n43,n44,n45,
          n46,n47,n48,n49,l1,l2,l3,l4,l5,l6,l7,l8,l9,l10,al1,al2,al3,al4,al5,al6,al7,al8,al9,al10,
          bl1,bl2,bl3,bl4,bl5,bl6,bl7,bl8,bl9,bl10,cl1,cl2,cl3,cl4,cl5,cl6,cl7,cl8,cl9,cl10,dl1,dl2,
          dl3,dl4,dl5,dl6,dl7,dl8,dl9,dl10,el1,el2,el3,el4,el5,el6,el7,el8,el9,el10,fl1,fl2,fl3,fl4,
          fl5,fl6,fl7,fl8,fl9,fl10,gl1,gl2,gl3,gl4,gl5,gl6,gl7,gl8,gl9,gl10,hl1,hl2,hl3,hl4,hl5);
    Sleep(2000);

    ////take input of source and destination from user
    cout << "\n\nTotal Nodes: 50(from 0 to 49)\n\n\n";
    Retry:
    cout<<"Enter the Source Node: ";


    cin>>source;

    ///if source & destination exceede total no of nodes/////
    while((source<0) || (source>numOfVertices-1)) {


        cout<<"\n\nSource vertex should be between 0 and "<<numOfVertices-1<< "!"<<endl;


        cout<<"\nEnter the source vertex again: ";


        cin>>source;  system("cls");}


    cout<<"\n\nEnter the Destination Node: ";

    cin>>dest;

    while((dest<0) || (dest>numOfVertices-1)) {


        cout<<"\n\nDestination vertex should be between 0 and "<<numOfVertices-1<< "!"<<endl;


        cout<<"\nEnter the Destination vertex again: ";


        cin>>dest;}

    /////if source & destination is same//////
    if(source == dest)
        {
          cout << "\n\n\tSource and Destination vertices CAN NOT be the same!!!\n\n\n";
          goto Retry;}



        system("cls");

}



void Dijkstra::initialize(){


    for(int i=0;i<numOfVertices;i++) {


        mark[i] = false;


        predecessor[i] = -1;


        distance[i] = INFINITY;


    }


    distance[source]= 0;


}



int Dijkstra::getClosestUnmarkedNode(){


    int minDistance = INFINITY;


    int closestUnmarkedNode;


    for(int i=0;i<numOfVertices;i++) {


        if((!mark[i]) && ( minDistance >= distance[i])) {


            minDistance = distance[i];


            closestUnmarkedNode = i;


        }


    }


    return closestUnmarkedNode;


}



void Dijkstra::calculateDistance(){


    initialize();


    int minDistance = INFINITY;


    int closestUnmarkedNode;


    int count = 0;


    while(count < numOfVertices) {


        closestUnmarkedNode = getClosestUnmarkedNode();


        mark[closestUnmarkedNode] = true;


        for(int i=0;i<numOfVertices;i++) {


            if((!mark[i]) && (adjMatrix[closestUnmarkedNode][i]>0) ) {


                if(distance[i] > distance[closestUnmarkedNode]+adjMatrix[closestUnmarkedNode][i]) {


                    distance[i] = distance[closestUnmarkedNode]+adjMatrix[closestUnmarkedNode][i];


                    predecessor[i] = closestUnmarkedNode;




                }


            }


        }


        count++;

    }


}

///////////////////////////////////////////////////////////////////////////////////////////

void Dijkstra::printPath(int node){


    if(node == source)

        {src = node;
        cout<< node <<"..";}



    else {


        printPath(predecessor[node]);



        temp[o] = node;
        o++;

        cout<< node <<"..";

        ///if the corresponding node is visited change its color to blue///////

        if( node == 0 ) {n0 = 1;}
        else if( node == 1 ) {n1 = 1;}
        else if( node == 2 ) {n2 = 1;}
        else if( node == 3 ) {n3 = 1;}
        else if( node == 4 ) {n4 = 1;}
        else if( node == 5 ) {n5 = 1;}
        else if( node == 6 ) {n6 = 1;}
        else if( node == 7 ) {n7 = 1;}
        else if( node == 8 ) {n8 = 1;}
        else if( node == 9 ) {n9 = 1;}
        else if( node == 10 ) {n10 = 1;}
        else if( node == 11 ) {n11 = 1;}
        else if( node == 12 ) {n12 = 1;}
        else if( node == 13 ) {n13 = 1;}
        else if( node == 14 ) {n14 = 1;}
        else if( node == 15 ) {n15 = 1;}
        else if( node == 16 ) {n16 = 1;}
        else if( node == 17 ) {n17 = 1;}
        else if( node == 18 ) {n18 = 1;}
        else if( node == 19 ) {n19 = 1;}
        else if( node == 20 ) {n20 = 1;}
        else if( node == 21 ) {n21 = 1;}
        else if( node == 22 ) {n22 = 1;}
        else if( node == 23 ) {n23 = 1;}
        else if( node == 24 ) {n24 = 1;}
        else if( node == 25 ) {n25 = 1;}
        else if( node == 26 ) {n26 = 1;}
        else if( node == 27 ) {n27 = 1;}
        else if( node == 28 ) {n28 = 1;}
        else if( node == 29 ) {n29 = 1;}
        else if( node == 30 ) {n30 = 1;}
        else if( node == 31 ) {n31 = 1;}
        else if( node == 32 ) {n32 = 1;}
        else if( node == 33 ) {n33 = 1;}
        else if( node == 34 ) {n34 = 1;}
        else if( node == 35 ) {n35 = 1;}
        else if( node == 36 ) {n36 = 1;}
        else if( node == 37 ) {n37 = 1;}
        else if( node == 38 ) {n38 = 1;}
        else if( node == 39 ) {n39 = 1;}
        else if( node == 40 ) {n40 = 1;}
        else if( node == 41 ) {n41 = 1;}
        else if( node == 42 ) {n42 = 1;}
        else if( node == 43 ) {n43 = 1;}
        else if( node == 44 ) {n44 = 1;}
        else if( node == 45 ) {n45 = 1;}
        else if( node == 46 ) {n46 = 1;}
        else if( node == 47 ) {n47 = 1;}
        else if( node == 48 ) {n48 = 1;}
        else if( node == 49 ) {n49 = 1;}


        if( source == 0 ) {n0 = 1;}
        else if( source == 1 ) {n1 = 1;}
        else if( source == 2 ) {n2 = 1;}
        else if( source == 3 ) {n3 = 1;}
        else if( source == 4 ) {n4 = 1;}
        else if( source == 5 ) {n5 = 1;}
        else if( source == 6 ) {n6 = 1;}
        else if( source == 7 ) {n7 = 1;}
        else if( source == 8 ) {n8 = 1;}
        else if( source == 9 ) {n9 = 1;}
        else if( source == 10 ) {n10 = 1;}
        else if( source == 11 ) {n11 = 1;}
        else if( source == 12 ) {n12 = 1;}
        else if( source == 13 ) {n13 = 1;}
        else if( source == 14 ) {n14 = 1;}
        else if( source == 15 ) {n15 = 1;}
        else if( source == 16 ) {n16 = 1;}
        else if( source == 17 ) {n17 = 1;}
        else if( source == 18 ) {n18 = 1;}
        else if( source == 19 ) {n19 = 1;}
        else if( source == 20 ) {n20 = 1;}
        else if( source == 21 ) {n21 = 1;}
        else if( source == 22 ) {n22 = 1;}
        else if( source == 23 ) {n23 = 1;}
        else if( source == 24 ) {n24 = 1;}
        else if( source == 25 ) {n25 = 1;}
        else if( source == 26 ) {n26 = 1;}
        else if( source == 27 ) {n27 = 1;}
        else if( source == 28 ) {n28 = 1;}
        else if( source == 29 ) {n29 = 1;}
        else if( source == 30 ) {n30 = 1;}
        else if( source == 31 ) {n31 = 1;}
        else if( source == 32 ) {n32 = 1;}
        else if( source == 33 ) {n33 = 1;}
        else if( source == 34 ) {n34 = 1;}
        else if( source == 35 ) {n35 = 1;}
        else if( source == 36 ) {n36 = 1;}
        else if( source == 37 ) {n37 = 1;}
        else if( source == 38 ) {n38 = 1;}
        else if( source == 39 ) {n39 = 1;}
        else if( source == 40 ) {n40 = 1;}
        else if( source == 41 ) {n41 = 1;}
        else if( source == 42 ) {n42 = 1;}
        else if( source == 43 ) {n43 = 1;}
        else if( source == 44 ) {n44 = 1;}
        else if( source == 45 ) {n45 = 1;}
        else if( source == 46 ) {n46 = 1;}
        else if( source == 47 ) {n47 = 1;}
        else if( source == 48 ) {n48 = 1;}
        else if( source == 49 ) {n49 = 1;}

    }


}



void Dijkstra::output(){

            system("cls");
            cout <<"\nSource: "<<source<< "           Destination: "<<dest <<endl;
            cout << "\n\n\nPath from Source to Destination : ";
            printPath(dest);

       cout<<"\n\nTotal Distance: "<<distance[dest]<<endl;



     ///////////////////////////////
      int count; int first;
      first = temp[0];

      int k;
      int x =1;

      int k1;
      k1 = adjMatrix[src][first];
      while(x < o)
      {
              k = adjMatrix[first][temp[x]];

              first = temp[x];

              ///////////////////////////////////

             /* if two coneseuctive nodes are visited then change
                the color of line between them to light green    */
               if(n0 == 1 && n1 == 1){l1 = 10;}
      if(n1 == 1 && n2 == 1){l3 = 10;}
      if(n2 == 1 && n3 == 1){l5 = 10;}
      if(n3 == 1 && n4 == 1){l7 = 10;}
      if(n4 == 1 && n5 == 1){l9 = 10;}
      if(n5 == 1 && n6== 1){al1 = 10;}
      if(n6 == 1 && n7 == 1){al3 = 10;}
      if(n7 == 1 && n8== 1){al5 = 10;}
      if(n8 == 1 && n9 == 1){al7 = 10;}

      if(n0 == 1 && n10 == 1 && (k == 5 || k1 == 5)){l2 = 10;}
      if(n1 == 1 && n11 == 1 && (k == 8 || k1 == 8)){l4 = 10;}
      if(n2 == 1 && n12 == 1 && (k == 12 || k1 == 12)){l6 = 10;}
      if(n3 == 1 && n13 == 1 && (k == 13 || k1 == 13)){l8 = 10;}
      if(n4 == 1 && n14 == 1  && (k == 7 || k1 == 7)){l10 = 10;}
      if(n5 == 1 && n15 == 1 && (k == 9 || k1 == 9)){al2 = 10;}
      if(n6 == 1 && n16 == 1 && (k == 3 || k1 == 3)){al4 = 10;}
      if(n7 == 1 && n17 == 1 && (k == 2 || k1 == 2)){al6 = 10;}
      if(n8 == 1 && n18 == 1 && (k == 4 || k1 == 4)){al8 = 10;}
      if(n9 == 1 && n19 == 1 && (k == 19 || k1 == 19)){al9 = 10;}

      if(n10 == 1 && n11 == 1){al10 = 10;}
      if(n11 == 1 && n12 == 1){bl2 = 10;}
      if(n12 == 1 && n13 == 1){bl4 = 10;}
      if(n13 == 1 && n14 == 1){bl6 = 10;}
      if(n14 == 1 && n15 == 1){bl8 = 10;}
      if(n15 == 1 && n16 == 1){bl10 = 10;}
      if(n16 == 1 && n17 == 1){cl2 = 10;}
      if(n17 == 1 && n18 == 1){cl4 = 10;}
      if(n18 == 1 && n19 == 1){cl6 = 10;}

      if(n10 == 1 && n20 == 1 && (k == 3 || k1 == 3)){bl1 = 10;}
      if(n11 == 1 && n21 == 1 && (k == 6 || k1 == 6)){bl3 = 10;}
      if(n12 == 1 && n22 == 1 && (k == 8 || k1 == 8)){bl5 = 10;}
      if(n13 == 1 && n23 == 1 && (k == 9 || k1 == 9)){bl7 = 10;}
      if(n14 == 1 && n24 == 1 && (k == 10 || k1 == 10)){bl9 = 10;}
      if(n15 == 1 && n25 == 1 && (k == 13 || k1 == 13)){cl1 = 10;}
      if(n16 == 1 && n26 == 1 && (k == 19 || k1 == 19)){cl3 = 10;}
      if(n17 == 1 && n27 == 1 && (k == 26 || k1 == 26)){cl5 = 10;}
      if(n18 == 1 && n28 == 1 && (k == 30 || k1 == 30)){cl7 = 10;}
      if(n19 == 1 && n29 == 1 && (k == 1 || k1 == 1)){cl8 = 10;}

      if(n20 == 1 && n21 == 1){cl9 = 10;}
      if(n21 == 1 && n22 == 1){dl1 = 10;}
      if(n22 == 1 && n23 == 1){dl3 = 10;}
      if(n23 == 1 && n24 == 1){dl5 = 10;}
      if(n24 == 1 && n25 == 1){dl7 = 10;}
      if(n25 == 1 && n26 == 1){dl9 = 10;}
      if(n26 == 1 && n27 == 1){el1 = 10;}
      if(n27 == 1 && n28 == 1){el3 = 10;}
      if(n28 == 1 && n29 == 1){el5 = 10;}

      if(n20 == 1 && n30 == 1 && (k == 1 || k1 == 1)){cl10 = 10;}
      if(n21 == 1 && n31 == 1 && (k == 5 || k1 == 5)){dl2 = 10;}
      if(n22 == 1 && n32 == 1 && (k == 7 || k1 == 7)){dl4 = 10;}
      if(n23 == 1 && n33 == 1 && (k == 6 || k1 == 6)){dl6 = 10;}
      if(n24 == 1 && n34 == 1 && (k == 10 || k1 == 10)){dl8 = 10;}
      if(n25 == 1 && n35 == 1 && (k == 20 || k1 == 20)){dl10 = 10;}
      if(n26 == 1 && n36 == 1 && (k == 11 || k1 == 11)){el2 = 10;}
      if(n27 == 1 && n37 == 1 && (k == 2 || k1 == 2)){el4 = 10;}
      if(n28 == 1 && n38 == 1 && (k == 15 || k1 == 15)){el6 = 10;}
      if(n29 == 1 && n39 == 1 && (k == 4 || k1 == 4)){el7 = 10;}

      if(n30 == 1 && n31 == 1){el8 = 10;}
      if(n31 == 1 && n32 == 1){el10 = 10;}
      if(n32 == 1 && n33 == 1){fl2 = 10;}
      if(n33 == 1 && n34 == 1){fl4 = 10;}
      if(n34 == 1 && n35 == 1){fl6 = 10;}
      if(n35 == 1 && n36 == 1){fl8 = 10;}
      if(n36 == 1 && n37 == 1){fl10 = 10;}
      if(n37 == 1 && n38 == 1){gl2 = 10;}
      if(n38 == 1 && n39 == 1){gl4 = 10;}

      if(n30 == 1 && n40 == 1 && (k == 2 || k1 == 2)){el9 = 10;}
      if(n31 == 1 && n41 == 1 && (k == 9 || k1 == 9)){fl1 = 10;}
      if(n32 == 1 && n42 == 1 && (k == 4 || k1 == 4)){fl3 = 10;}
      if(n33 == 1 && n43 == 1 && (k == 6 || k1 == 6)){fl5 = 10;}
      if(n34 == 1 && n44 == 1 && (k == 5 || k1 == 5)){fl7 = 10;}
      if(n35 == 1 && n45 == 1 && (k == 7 || k1 == 7)){fl9 = 10;}
      if(n36 == 1 && n46 == 1 && (k == 10 || k1 == 10)){gl1 = 10;}
      if(n37 == 1 && n47 == 1 && (k == 3 || k1 == 3)){gl3 = 10;}
      if(n38 == 1 && n48 == 1 && (k == 1 || k1 == 1)){gl5 = 10;}
      if(n39 == 1 && n49 == 1 && (k == 8 || k1 == 8)){gl6 = 10;}

      if(n40 == 1 && n41 == 1){gl7 = 10;}
      if(n41 == 1 && n42 == 1){gl8 = 10;}
      if(n42 == 1 && n43 == 1){gl9 = 10;}
      if(n43 == 1 && n44 == 1){gl10 = 10;}
      if(n44 == 1 && n45 == 1){hl1 = 10;}
      if(n45 == 1 && n46 == 1){hl2 = 10;}
      if(n46 == 1 && n47 == 1){hl3 = 10;}
      if(n47 == 1 && n48 == 1){hl4 = 10;}
      if(n48 == 1 && n49 == 1){hl5 = 10;}

      x++;


              }
                     if(n0 == 1 && n1 == 1){l1 = 10;}
      if(n1 == 1 && n2 == 1){l3 = 10;}
      if(n2 == 1 && n3 == 1){l5 = 10;}
      if(n3 == 1 && n4 == 1){l7 = 10;}
      if(n4 == 1 && n5 == 1){l9 = 10;}
      if(n5 == 1 && n6== 1){al1 = 10;}
      if(n6 == 1 && n7 == 1){al3 = 10;}
      if(n7 == 1 && n8== 1){al5 = 10;}
      if(n8 == 1 && n9 == 1){al7 = 10;}

      if(n0 == 1 && n10 == 1 && (k == 5 || k1 == 5)){l2 = 10;}
      if(n1 == 1 && n11 == 1 && (k == 8 || k1 == 8)){l4 = 10;}
      if(n2 == 1 && n12 == 1 && (k == 12 || k1 == 12)){l6 = 10;}
      if(n3 == 1 && n13 == 1 && (k == 13 || k1 == 13)){l8 = 10;}
      if(n4 == 1 && n14 == 1  && (k == 7 || k1 == 7)){l10 = 10;}
      if(n5 == 1 && n15 == 1 && (k == 9 || k1 == 9)){al2 = 10;}
      if(n6 == 1 && n16 == 1 && (k == 3 || k1 == 3)){al4 = 10;}
      if(n7 == 1 && n17 == 1 && (k == 2 || k1 == 2)){al6 = 10;}
      if(n8 == 1 && n18 == 1 && (k == 4 || k1 == 4)){al8 = 10;}
      if(n9 == 1 && n19 == 1 && (k == 19 || k1 == 19)){al9 = 10;}

      if(n10 == 1 && n11 == 1){al10 = 10;}
      if(n11 == 1 && n12 == 1){bl2 = 10;}
      if(n12 == 1 && n13 == 1){bl4 = 10;}
      if(n13 == 1 && n14 == 1){bl6 = 10;}
      if(n14 == 1 && n15 == 1){bl8 = 10;}
      if(n15 == 1 && n16 == 1){bl10 = 10;}
      if(n16 == 1 && n17 == 1){cl2 = 10;}
      if(n17 == 1 && n18 == 1){cl4 = 10;}
      if(n18 == 1 && n19 == 1){cl6 = 10;}

      if(n10 == 1 && n20 == 1 && (k == 3 || k1 == 3)){bl1 = 10;}
      if(n11 == 1 && n21 == 1 && (k == 6 || k1 == 6)){bl3 = 10;}
      if(n12 == 1 && n22 == 1 && (k == 8 || k1 == 8)){bl5 = 10;}
      if(n13 == 1 && n23 == 1 && (k == 9 || k1 == 9)){bl7 = 10;}
      if(n14 == 1 && n24 == 1 && (k == 10 || k1 == 10)){bl9 = 10;}
      if(n15 == 1 && n25 == 1 && (k == 13 || k1 == 13)){cl1 = 10;}
      if(n16 == 1 && n26 == 1 && (k == 19 || k1 == 19)){cl3 = 10;}
      if(n17 == 1 && n27 == 1 && (k == 26 || k1 == 26)){cl5 = 10;}
      if(n18 == 1 && n28 == 1 && (k == 30 || k1 == 30)){cl7 = 10;}
      if(n19 == 1 && n29 == 1 && (k == 1 || k1 == 1)){cl8 = 10;}

      if(n20 == 1 && n21 == 1){cl9 = 10;}
      if(n21 == 1 && n22 == 1){dl1 = 10;}
      if(n22 == 1 && n23 == 1){dl3 = 10;}
      if(n23 == 1 && n24 == 1){dl5 = 10;}
      if(n24 == 1 && n25 == 1){dl7 = 10;}
      if(n25 == 1 && n26 == 1){dl9 = 10;}
      if(n26 == 1 && n27 == 1){el1 = 10;}
      if(n27 == 1 && n28 == 1){el3 = 10;}
      if(n28 == 1 && n29 == 1){el5 = 10;}

      if(n20 == 1 && n30 == 1 && (k == 1 || k1 == 1)){cl10 = 10;}
      if(n21 == 1 && n31 == 1 && (k == 5 || k1 == 5)){dl2 = 10;}
      if(n22 == 1 && n32 == 1 && (k == 7 || k1 == 7)){dl4 = 10;}
      if(n23 == 1 && n33 == 1 && (k == 6 || k1 == 6)){dl6 = 10;}
      if(n24 == 1 && n34 == 1 && (k == 10 || k1 == 10)){dl8 = 10;}
      if(n25 == 1 && n35 == 1 && (k == 20 || k1 == 20)){dl10 = 10;}
      if(n26 == 1 && n36 == 1 && (k == 11 || k1 == 11)){el2 = 10;}
      if(n27 == 1 && n37 == 1 && (k == 2 || k1 == 2)){el4 = 10;}
      if(n28 == 1 && n38 == 1 && (k == 15 || k1 == 15)){el6 = 10;}
      if(n29 == 1 && n39 == 1 && (k == 4 || k1 == 4)){el7 = 10;}

      if(n30 == 1 && n31 == 1){el8 = 10;}
      if(n31 == 1 && n32 == 1){el10 = 10;}
      if(n32 == 1 && n33 == 1){fl2 = 10;}
      if(n33 == 1 && n34 == 1){fl4 = 10;}
      if(n34 == 1 && n35 == 1){fl6 = 10;}
      if(n35 == 1 && n36 == 1){fl8 = 10;}
      if(n36 == 1 && n37 == 1){fl10 = 10;}
      if(n37 == 1 && n38 == 1){gl2 = 10;}
      if(n38 == 1 && n39 == 1){gl4 = 10;}

      if(n30 == 1 && n40 == 1 && (k == 2 || k1 == 2)){el9 = 10;}
      if(n31 == 1 && n41 == 1 && (k == 9 || k1 == 9)){fl1 = 10;}
      if(n32 == 1 && n42 == 1 && (k == 4 || k1 == 4)){fl3 = 10;}
      if(n33 == 1 && n43 == 1 && (k == 6 || k1 == 6)){fl5 = 10;}
      if(n34 == 1 && n44 == 1 && (k == 5 || k1 == 5)){fl7 = 10;}
      if(n35 == 1 && n45 == 1 && (k == 7 || k1 == 7)){fl9 = 10;}
      if(n36 == 1 && n46 == 1 && (k == 10 || k1 == 10)){gl1 = 10;}
      if(n37 == 1 && n47 == 1 && (k == 3 || k1 == 3)){gl3 = 10;}
      if(n38 == 1 && n48 == 1 && (k == 1 || k1 == 1)){gl5 = 10;}
      if(n39 == 1 && n49 == 1 && (k == 8 || k1 == 8)){gl6 = 10;}

      if(n40 == 1 && n41 == 1){gl7 = 10;}
      if(n41 == 1 && n42 == 1){gl8 = 10;}
      if(n42 == 1 && n43 == 1){gl9 = 10;}
      if(n43 == 1 && n44 == 1){gl10 = 10;}
      if(n44 == 1 && n45 == 1){hl1 = 10;}
      if(n45 == 1 && n46 == 1){hl2 = 10;}
      if(n46 == 1 && n47 == 1){hl3 = 10;}
      if(n47 == 1 && n48 == 1){hl4 = 10;}
      if(n48 == 1 && n49 == 1){hl5 = 10;}
      cout << "\n\n\tWait for Graph to be Updated.....\n\n";
      Sleep(3000);
}


int main(){


   Dijkstra G;


   G.read();


   G.calculateDistance();



   G.output();



    graph(n0,n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15,n16,n17,n18,n19,n20,n21,n22,n23,
          n24,n25,n26,n27,n28,n29,n30,n31,n32,n33,n34,n35,n36,n37,n38,n39,n40,n41,n42,n43,n44,n45,
          n46,n47,n48,n49,l1,l2,l3,l4,l5,l6,l7,l8,l9,l10,al1,al2,al3,al4,al5,al6,al7,al8,al9,al10,
          bl1,bl2,bl3,bl4,bl5,bl6,bl7,bl8,bl9,bl10,cl1,cl2,cl3,cl4,cl5,cl6,cl7,cl8,cl9,cl10,dl1,dl2,
          dl3,dl4,dl5,dl6,dl7,dl8,dl9,dl10,el1,el2,el3,el4,el5,el6,el7,el8,el9,el10,fl1,fl2,fl3,fl4,
          fl5,fl6,fl7,fl8,fl9,fl10,gl1,gl2,gl3,gl4,gl5,gl6,gl7,gl8,gl9,gl10,hl1,hl2,hl3,hl4,hl5);

    system("pause");

}

int graph(int n0, int n1, int n2, int n3, int n4, int n5, int n6, int n7, int n8,
          int n9,int n10,int n11,int n12,int n13,int n14,int n15,int n16,int n17,
          int n18,int n19,int n20,int n21, int n22,int n23,int n24,int n25,int n26,
          int n27,int n28,int n29,int n30,int n31,int n32,int n33,int n34,int n35,
          int n36,int n37,int n38,int n39,int n40,int n41,int n42,int n43,int n44,
          int n45,int n46,int n47,int n48,int n49,int l1,int l2,int l3,int l4,int l5,
          int l6,int l7,int l8,int l9,int l10,int al1,int al2,int al3,int al4,int al5,
          int al6,int al7,int al8,int al9,int al10,int bl1,int bl2,int bl3,int bl4,int bl5,
          int bl6,int bl7,int bl8,int bl9,int bl10,int cl1,int cl2,int cl3,int cl4,int cl5,int cl6,
          int cl7,int cl8,int cl9,int cl10,int dl1,int dl2,int dl3,int dl4,int dl5,int dl6,int dl7,
          int dl8,int dl9,int dl10,int el1,int el2,int el3,int el4,int el5,int el6,int el7,int el8,
          int el9,int el10,int fl1,int fl2,int fl3,int fl4,int fl5,int fl6,int fl7,int fl8,int fl9,
          int fl10,int gl1,int gl2,int gl3,int gl4,int gl5,int gl6,int gl7,int gl8,int gl9,int gl10,
          int hl1,int hl2,int hl3,int hl4,int hl5)
{
   int gd = DETECT, gm, midx, midy;


   initwindow(1024, 550, "Dijkstra");


   midx = getmaxx()/12;
   midy = getmaxy()/12;
   ////////////row 1///////////////////////////////////////////////////
   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n0);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"2");
   outtextxy(midx+5,midy+25,"5");



/////0--1//////////////////////
   setcolor(l1);
   line(midx+15,midy,midx+85,midy);
   setcolor(15);
////////////////////////////////

   /////////////0--10///////////////////
    setcolor(l2);
   line(midx,midy+50,midx,midy+10);
   setcolor(15);
   ////////////////////////////////
   setcolor(WHITE);
   outtextxy(midx-4,midy-9,"0");


   midx = midx + 100;

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n1);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"4");
   outtextxy(midx+5,midy+25,"8");


/////1--2//////////////////////
   setcolor(l3);
   line(midx+15,midy,midx+85,midy);
   setcolor(15);
////////////////////////////////

/////////////1--11///////////////////
    setcolor(l4);
   line(midx,midy+50,midx,midy+10);
   setcolor(15);
   ////////////////////////////////

   setcolor(WHITE);
   outtextxy(midx-4,midy-9,"1");

   midx = midx + 100;

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n2);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"6");
   outtextxy(midx+5,midy+25,"12");


/////2--3//////////////////////
   setcolor(l5);
   line(midx+15,midy,midx+85,midy);
   setcolor(15);
////////////////////////////////

/////////////2--12///////////////////
   setcolor(l6);
   line(midx,midy+50,midx,midy+10);
   setcolor(15);
   ////////////////////////////////

   setcolor(WHITE);
   outtextxy(midx-4,midy-9,"2");

   midx = midx + 100;

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n3);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"5");
   outtextxy(midx+5,midy+25,"13");

/////3--4//////////////////////
   setcolor(l7);
   line(midx+15,midy,midx+85,midy);
   setcolor(15);
////////////////////////////////

/////////////3--13///////////////////
   setcolor(l8);
   line(midx,midy+50,midx,midy+10);
   setcolor(15);
   ////////////////////////////////

   setcolor(WHITE);
   outtextxy(midx-4,midy-9,"3");

   midx = midx + 100;

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n4);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"8");
   outtextxy(midx+5,midy+25,"7");


/////4--5//////////////////////
   setcolor(l9);
   line(midx+15,midy,midx+85,midy);
   setcolor(15);
////////////////////////////////

/////////////4--14///////////////////
   setcolor(l10);
   line(midx,midy+50,midx,midy+10);
   setcolor(15);
   ////////////////////////////////

   setcolor(WHITE);
   outtextxy(midx-4,midy-9,"4");

   midx = midx + 100;

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n5);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"9");
   outtextxy(midx+5,midy+25,"9");


/////5--6//////////////////////
   setcolor(al1);
   line(midx+15,midy,midx+85,midy);
   setcolor(15);
////////////////////////////////

/////////////5--15///////////////////
   setcolor(al2);
   line(midx,midy+50,midx,midy+10);
   setcolor(15);
   ////////////////////////////////

   setcolor(WHITE);
   outtextxy(midx-4,midy-9,"5");

   midx = midx + 100;

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n6);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"7");
   outtextxy(midx+5,midy+25,"3");


/////6--7//////////////////////
   setcolor(al3);
   line(midx+15,midy,midx+85,midy);
   setcolor(15);
////////////////////////////////

/////////////6--16///////////////////
   setcolor(al4);
   line(midx,midy+50,midx,midy+10);
   setcolor(15);
   ////////////////////////////////

   setcolor(WHITE);
   outtextxy(midx-4,midy-9,"6");

   midx = midx + 100;

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n7);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"13");
   outtextxy(midx+5,midy+25,"2");

/////7--8//////////////////////
   setcolor(al5);
   line(midx+15,midy,midx+85,midy);
   setcolor(15);
////////////////////////////////

   /////////////7--17///////////////////
   setcolor(al6);
   line(midx,midy+50,midx,midy+10);
   setcolor(15);
   ////////////////////////////////
   setcolor(WHITE);
   outtextxy(midx-4,midy-9,"7");

   midx = midx + 100;

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n8);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"15");
   outtextxy(midx+5,midy+25,"4");


/////8--9//////////////////////
  setcolor(al7);
   line(midx+15,midy,midx+85,midy);
   setcolor(15);
////////////////////////////////

/////////////8--18///////////////////
   setcolor(al8);
   line(midx,midy+50,midx,midy+10);
   setcolor(15);
   ////////////////////////////////

   setcolor(WHITE);
   outtextxy(midx-4,midy-9,"8");

   midx = midx + 100;

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n9);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx-20,midy+25,"19");

   /////////////9--19///////////////////
   setcolor(al9);
   line(midx,midy+50,midx,midy+10);
   setcolor(15);
   ////////////////////////////////

   setcolor(WHITE);
   outtextxy(midx-7,midy-9,"9");
   ////////////////////////////////////////////////////////////////
   ////////////////////row 2//////////////////////////////////////
   midx = getmaxx()/12;
   midy = midy + 60;
   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n10);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"5");
   outtextxy(midx+5,midy+25,"3");


/////10--11//////////////////////
   setcolor(al10);
   line(midx+15,midy,midx+85,midy);
   setcolor(15);
////////////////////////////////

/////////////10--20///////////////////
   setcolor(bl1);
   line(midx,midy+50,midx,midy+10);
   setcolor(15);
   ////////////////////////////////

   setcolor(WHITE);
   outtextxy(midx-7,midy-9,"10");

   midx = midx + 100;

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n11);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"7");
   outtextxy(midx+5,midy+25,"6");


/////11--12//////////////////////
  setcolor(bl2);
   line(midx+15,midy,midx+85,midy);
   setcolor(15);
////////////////////////////////

/////////////11--21///////////////////
   setcolor(bl3);
   line(midx,midy+50,midx,midy+10);
   setcolor(15);
   ////////////////////////////////

   setcolor(WHITE);
   outtextxy(midx-7,midy-9,"11");

   midx = midx + 100;

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n12);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"8");
   outtextxy(midx+5,midy+25,"8");


/////12--13//////////////////////
  setcolor(bl4);
   line(midx+15,midy,midx+85,midy);
   setcolor(15);
////////////////////////////////

/////////////12--22///////////////////
   setcolor(bl5);
   line(midx,midy+50,midx,midy+10);
   setcolor(15);
   ////////////////////////////////

   setcolor(WHITE);
   outtextxy(midx-7,midy-9,"12");

   midx = midx + 100;

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n13);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"10");
   outtextxy(midx+5,midy+25,"9");


/////13--14//////////////////////
  setcolor(bl6);
   line(midx+15,midy,midx+85,midy);
   setcolor(15);
////////////////////////////////

/////////////13--23///////////////////
   setcolor(bl7);
   line(midx,midy+50,midx,midy+10);
   setcolor(15);
   ////////////////////////////////

   setcolor(WHITE);
   outtextxy(midx-7,midy-9,"13");

   midx = midx + 100;

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n14);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"16");
   outtextxy(midx+5,midy+25,"10");


/////14--15//////////////////////
  setcolor(bl8);
   line(midx+15,midy,midx+85,midy);
   setcolor(15);
////////////////////////////////

/////////////14--24///////////////////
   setcolor(bl9);
   line(midx,midy+50,midx,midy+10);
   setcolor(15);
   ////////////////////////////////

   setcolor(WHITE);
   outtextxy(midx-7,midy-9,"14");

   midx = midx + 100;

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n15);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"9");
   outtextxy(midx+5,midy+25,"13");



/////15--16//////////////////////
  setcolor(bl10);
   line(midx+15,midy,midx+85,midy);
   setcolor(15);
////////////////////////////////

/////////////15--25///////////////////
   setcolor(cl1);
   line(midx,midy+50,midx,midy+10);
   setcolor(15);
   ////////////////////////////////
   setcolor(WHITE);
   outtextxy(midx-7,midy-9,"15");

   midx = midx + 100;

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n16);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"3");
   outtextxy(midx+5,midy+25,"19");


/////16--17//////////////////////
  setcolor(cl2);
   line(midx+15,midy,midx+85,midy);
   setcolor(15);
////////////////////////////////

/////////////16--26///////////////////
   setcolor(cl3);
   line(midx,midy+50,midx,midy+10);
   setcolor(15);
   ////////////////////////////////

   setcolor(WHITE);
   outtextxy(midx-7,midy-9,"16");

   midx = midx + 100;

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n17);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"1");
   outtextxy(midx+5,midy+25,"26");


/////17--18//////////////////////
  setcolor(cl4);
   line(midx+15,midy,midx+85,midy);
   setcolor(15);
////////////////////////////////

/////////////17--27///////////////////
   setcolor(cl5);
   line(midx,midy+50,midx,midy+10);
   setcolor(15);
   ////////////////////////////////

   setcolor(WHITE);
   outtextxy(midx-7,midy-9,"17");

   midx = midx + 100;

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n18);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"2");
   outtextxy(midx+5,midy+25,"30");


/////18--19//////////////////////
  setcolor(cl6);
   line(midx+15,midy,midx+85,midy);
   setcolor(15);
////////////////////////////////

/////////////18--28///////////////////
   setcolor(cl7);
   line(midx,midy+50,midx,midy+10);
   setcolor(15);
   ////////////////////////////////

   setcolor(WHITE);
   outtextxy(midx-7,midy-9,"18");

   midx = midx + 100;

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n19);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx-10,midy+25,"1");

   /////////////19--29///////////////////
   setcolor(cl8);
   line(midx,midy+50,midx,midy+10);
   setcolor(15);
   ////////////////////////////////

   setcolor(WHITE);


   outtextxy(midx-7,midy-9,"19");
   //////////////////////////////////////////////////////////////
   ////////////////row 3/////////////////////////////////////////
   midx = getmaxx()/12;
   midy = midy + 60;
   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n20);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+5,midy+25,"1");
   outtextxy(midx+45,midy,"2");


/////20--21//////////////////////
  setcolor(cl9);
   line(midx+15,midy,midx+85,midy);
   setcolor(15);
////////////////////////////////

/////////////20--30///////////////////
   setcolor(cl10);
   line(midx,midy+50,midx,midy+10);
   setcolor(15);
   ////////////////////////////////

   setcolor(WHITE);
   outtextxy(midx-7,midy-9,"20");

   midx = midx + 100;

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n21);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"8");
   outtextxy(midx+5,midy+25,"5");


/////21--22//////////////////////
  setcolor(dl1);
   line(midx+15,midy,midx+85,midy);
   setcolor(15);
////////////////////////////////

/////////////21--31///////////////////
   setcolor(dl2);
   line(midx,midy+50,midx,midy+10);
   setcolor(15);
   ////////////////////////////////

   setcolor(WHITE);
   outtextxy(midx-7,midy-9,"21");

   midx = midx + 100;

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n22);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"10");

outtextxy(midx+5,midy+25,"7");


/////22--23//////////////////////
  setcolor(dl3);
   line(midx+15,midy,midx+85,midy);
   setcolor(15);
////////////////////////////////

/////////////22--32///////////////////
   setcolor(dl4);
   line(midx,midy+50,midx,midy+10);
   setcolor(15);
   ////////////////////////////////

   setcolor(WHITE);
   outtextxy(midx-7,midy-9,"22");

   midx = midx + 100;

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n23);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"3");
   outtextxy(midx+5,midy+25,"6");


/////23--24//////////////////////
  setcolor(dl5);
   line(midx+15,midy,midx+85,midy);
   setcolor(15);
////////////////////////////////

/////////////23--33///////////////////
   setcolor(dl6);
   line(midx,midy+50,midx,midy+10);
   setcolor(15);
   ////////////////////////////////

   setcolor(WHITE);
   outtextxy(midx-7,midy-9,"23");

   midx = midx + 100;

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n24);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"12");
   outtextxy(midx+5,midy+25,"10");


/////24--25//////////////////////
  setcolor(dl7);
   line(midx+15,midy,midx+85,midy);
   setcolor(15);
////////////////////////////////

/////////////24--34///////////////////
   setcolor(dl8);
   line(midx,midy+50,midx,midy+10);
   setcolor(15);
   ////////////////////////////////

   setcolor(WHITE);
   outtextxy(midx-7,midy-9,"24");

   midx = midx + 100;

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n25);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"1");
   outtextxy(midx+5,midy+25,"20");


/////25--26//////////////////////
  setcolor(dl9);
   line(midx+15,midy,midx+85,midy);
   setcolor(15);
////////////////////////////////

/////////////25--35///////////////////
   setcolor(dl10);
   line(midx,midy+50,midx,midy+10);
   setcolor(15);
   ////////////////////////////////

   setcolor(WHITE);
   outtextxy(midx-7,midy-9,"25");

   midx = midx + 100;

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n26);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"7");
   outtextxy(midx+5,midy+25,"11");


/////26--27//////////////////////
  setcolor(el1);
   line(midx+15,midy,midx+85,midy);
   setcolor(15);
////////////////////////////////

/////////////26--36///////////////////
   setcolor(el2);
   line(midx,midy+50,midx,midy+10);
   setcolor(15);
   ////////////////////////////////

   setcolor(WHITE);
   outtextxy(midx-7,midy-9,"26");

   midx = midx + 100;

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n27);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"5");
   outtextxy(midx+5,midy+25,"2");


/////27--28//////////////////////
  setcolor(el3);
   line(midx+15,midy,midx+85,midy);
   setcolor(15);
////////////////////////////////

/////////////27--37///////////////////
   setcolor(el4);
   line(midx,midy+50,midx,midy+10);
   setcolor(15);
   ////////////////////////////////

   setcolor(WHITE);
   outtextxy(midx-7,midy-9,"27");

   midx = midx + 100;

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n28);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"4");
   outtextxy(midx+5,midy+25,"15");


/////28--29//////////////////////
  setcolor(el5);
   line(midx+15,midy,midx+85,midy);
   setcolor(15);
////////////////////////////////

/////////////28--38///////////////////
   setcolor(el6);
   line(midx,midy+50,midx,midy+10);
   setcolor(15);
   ////////////////////////////////

   setcolor(WHITE);
   outtextxy(midx-7,midy-9,"28");

   midx = midx + 100;

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n29);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx-10,midy+25,"4");


   /////////////29--39///////////////////
   setcolor(el7);
   line(midx,midy+50,midx,midy+10);
   setcolor(15);
   ////////////////////////////////

   setcolor(WHITE);
   outtextxy(midx-7,midy-9,"29");
   //////////////////////////////////////////////////////////////
   //////////////////row 4//////////////////////////////////////
   midx = getmaxx()/12;
   midy = midy + 60;
   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n30);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+5,midy+25,"2");
   outtextxy(midx+45,midy,"3");

   /////30--31//////////////////////
  setcolor(el8);
   line(midx+15,midy,midx+85,midy);
   setcolor(15);
////////////////////////////////

/////////////30--40///////////////////
   setcolor(el9);
   line(midx,midy+50,midx,midy+10);
   setcolor(15);
   ////////////////////////////////


   setcolor(WHITE);
   outtextxy(midx-7,midy-9,"30");

   midx = midx + 100;

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n31);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"5");
   outtextxy(midx+5,midy+25,"9");

   /////31--32//////////////////////
  setcolor(el10);
   line(midx+15,midy,midx+85,midy);
   setcolor(15);
////////////////////////////////

/////////////31--41///////////////////
   setcolor(fl1);
   line(midx,midy+50,midx,midy+10);
   setcolor(15);
   ////////////////////////////////


   setcolor(WHITE);
   outtextxy(midx-7,midy-9,"31");

   midx = midx + 100;

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n32);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"7");
   outtextxy(midx+5,midy+25,"4");

   /////32--33//////////////////////
  setcolor(fl2);
   line(midx+15,midy,midx+85,midy);
   setcolor(15);
////////////////////////////////

/////////////32--42///////////////////
   setcolor(fl3);
   line(midx,midy+50,midx,midy+10);
   setcolor(15);
   ////////////////////////////////


   setcolor(WHITE);
   outtextxy(midx-7,midy-9,"32");

   midx = midx + 100;

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n33);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"6");
   outtextxy(midx+5,midy+25,"6");

   /////33--34//////////////////////
  setcolor(fl4);
   line(midx+15,midy,midx+85,midy);
   setcolor(15);
////////////////////////////////

/////////////33--43///////////////////
   setcolor(fl5);
   line(midx,midy+50,midx,midy+10);
   setcolor(15);
   ////////////////////////////////


   setcolor(WHITE);
   outtextxy(midx-7,midy-9,"33");

   midx = midx + 100;

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n34);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"2");
   outtextxy(midx+5,midy+25,"5");

   /////34--35//////////////////////
  setcolor(fl6);
   line(midx+15,midy,midx+85,midy);
   setcolor(15);
////////////////////////////////

/////////////34--44///////////////////
   setcolor(fl7);
   line(midx,midy+50,midx,midy+10);
   setcolor(15);
   ////////////////////////////////


   setcolor(WHITE);
   outtextxy(midx-7,midy-9,"34");

   midx = midx + 100;

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n35);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"1");
   outtextxy(midx+5,midy+25,"7");

   /////35--36//////////////////////
  setcolor(fl8);
   line(midx+15,midy,midx+85,midy);
   setcolor(15);
////////////////////////////////

/////////////35--45///////////////////
   setcolor(fl9);
   line(midx,midy+50,midx,midy+10);
   setcolor(15);
   ////////////////////////////////


   setcolor(WHITE);
   outtextxy(midx-7,midy-9,"35");

   midx = midx + 100;

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n36);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"12");
   outtextxy(midx+5,midy+25,"10");

   /////36--37//////////////////////
  setcolor(fl10);
   line(midx+15,midy,midx+85,midy);
   setcolor(15);
////////////////////////////////

/////////////36--46///////////////////
   setcolor(gl1);
   line(midx,midy+50,midx,midy+10);
   setcolor(15);
   ////////////////////////////////


   setcolor(WHITE);
   outtextxy(midx-7,midy-9,"36");

   midx = midx + 100;

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n37);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"10");
   outtextxy(midx+5,midy+25,"3");

   /////37--38//////////////////////
  setcolor(gl2);
   line(midx+15,midy,midx+85,midy);
   setcolor(15);
////////////////////////////////

/////////////37--47///////////////////
   setcolor(gl3);
   line(midx,midy+50,midx,midy+10);
   setcolor(15);
   ////////////////////////////////


   setcolor(WHITE);
   outtextxy(midx-7,midy-9,"37");

   midx = midx + 100;

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n38);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"9");
   outtextxy(midx+5,midy+25,"1");

   /////38--39//////////////////////
  setcolor(gl4);
   line(midx+15,midy,midx+85,midy);
   setcolor(15);
////////////////////////////////

/////////////38--48///////////////////
   setcolor(gl5);
   line(midx,midy+50,midx,midy+10);
   setcolor(15);
   ////////////////////////////////


   setcolor(WHITE);
   outtextxy(midx-7,midy-9,"38");

   midx = midx + 100;

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n39);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx-10,midy+25,"8");


   /////////////39--49///////////////////
   setcolor(gl6);
   line(midx,midy+50,midx,midy+10);
   setcolor(15);
   ////////////////////////////////

   setcolor(WHITE);
   outtextxy(midx-7,midy-9,"39");
   //////////////////////////////////////////////////////////////
   //////////////////////row 5//////////////////////////////////
  midx = getmaxx()/12;
   midy = midy + 60;
   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n40);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"10");

   /////40--41//////////////////////
  setcolor(gl7);
   line(midx+15,midy,midx+85,midy);
   setcolor(15);
////////////////////////////////


   setcolor(WHITE);
   outtextxy(midx-7,midy-9,"40");

   midx = midx + 100;

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n41);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"4");

   /////41--42//////////////////////
  setcolor(gl8);
   line(midx+15,midy,midx+85,midy);
   setcolor(15);
////////////////////////////////


   setcolor(WHITE);
   outtextxy(midx-7,midy-9,"41");

   midx = midx + 100;

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n42);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"2");

   /////42--43//////////////////////
  setcolor(gl9);
   line(midx+15,midy,midx+85,midy);
   setcolor(15);
////////////////////////////////


   setcolor(WHITE);
   outtextxy(midx-7,midy-9,"42");

   midx = midx + 100;

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n43);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"5");

   /////43--44//////////////////////
  setcolor(gl10);
   line(midx+15,midy,midx+85,midy);
   setcolor(15);
////////////////////////////////


   setcolor(WHITE);
   outtextxy(midx-7,midy-9,"43");

   midx = midx + 100;

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n44);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"9");

   /////44--45//////////////////////
  setcolor(hl1);
   line(midx+15,midy,midx+85,midy);
   setcolor(15);
////////////////////////////////


   setcolor(WHITE);
   outtextxy(midx-7,midy-9,"44");

   midx = midx + 100;

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n45);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"7");

   /////45--46//////////////////////
   setcolor(hl2);
   line(midx+15,midy,midx+85,midy);
   setcolor(15);
////////////////////////////////


   setcolor(WHITE);
   outtextxy(midx-7,midy-9,"45");

   midx = midx + 100;

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n46);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"8");
   /////46--47//////////////////////
  setcolor(hl3);
   line(midx+15,midy,midx+85,midy);
   setcolor(15);
////////////////////////////////


   setcolor(WHITE);
   outtextxy(midx-7,midy-9,"46");

   midx = midx + 100;

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n47);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"6");

   /////47--48//////////////////////
  setcolor(hl4);
   line(midx+15,midy,midx+85,midy);
   setcolor(15);
////////////////////////////////


   setcolor(WHITE);
   outtextxy(midx-7,midy-9,"47");

   midx = midx + 100;

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n48);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"5");

   /////48--49//////////////////////
  setcolor(hl5);
   line(midx+15,midy,midx+85,midy);
   setcolor(15);
////////////////////////////////


   setcolor(WHITE);
   outtextxy(midx-7,midy-9,"48");

   midx = midx + 100;

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n49);
   floodfill(midx, midy,WHITE);

   setcolor(WHITE);
   outtextxy(midx-7,midy-9,"49");
///////////////////////////////////////////////////////

   settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 1);

   midx = (getmaxx()/12);
   midy = (getmaxy()/12) + 250;
   outtextxy(midx-15,midy+50,"- Blue Nodes Represent Visited Nodes");

   midx = getmaxx()/12;
   outtextxy(midx-15,midy+80,"- Green Paths Represent Followed Paths");

   midx = getmaxx()/12;
   outtextxy(midx+250,midy+120,"CREATED BY: G.Sai Koushik");

   ///////
}




