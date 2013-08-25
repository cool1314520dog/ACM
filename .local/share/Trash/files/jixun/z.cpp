#include<iostream>
#include<cstring>
using namespace std;

int n;
int k;
struct Node{
    char name[21];
    int level;
    Node *father;
}a[1001],head;

void ini(){
    memset(a,0,sizeof(a));
    strcpy(head.name,"Alice");
    head.father = NULL;
}

int find(Node &tmp){
     for (int j = 0; j < n; j++){
       if (strcmp(tmp.name,a[j].name) == 0)
       return j;
     }
}

void set_levels(Node &p){
     if (strcmp(p.father->name,"Alice")){
//cout << p.name << " ";
//cout << p.father->name << endl;
     k++;
     set_levels(*p.father);
     }
}

int main(){
     while (cin >> n){
     ini();
     for (int i = 0; i < n; i++){
     Node tmp;
     cin >> a[i].name >> tmp.name;
     if (strcmp(tmp.name,"Alice")==0){
    a[i].father = &head;
} 
    else{ 
    a[i].father = &a[find(tmp)];
   }
//cout << a[i].name << " ";
//cout << tmp.name << endl;
  }

for (int i = 0; i < n; i++){
   k = 1; 
   set_levels(a[i]);
    a[i].level = k;
//cout << a[i].level << "------------" << endl;
}


for (int i = 0; i < n; i++){
for (int j = i+1; j < n; j++){
    if (a[i].level > a[j].level){
       Node t;
        t = a[i];
      a[i] = a[j];
       a[j] = t;
}
    else if (a[i].level == a[j].level){
      if (strcmp(a[i].name,a[j].name) > 0){
    Node t;
    t = a[i];
    a[i] = a[j];
   a[j] = t;
     }
  }
  }
}

for (int i = 0; i < n; i++){
cout << a[i].name << " " << a[i].level << endl;
}

}
return 0;
}
