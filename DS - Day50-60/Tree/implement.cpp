#include <iostream>
using namespace std;
struct nod { nod *l, *r; int d; }
*r = NULL, *p = NULL, *np = NULL, *q;
void create() {
    int v;
    cin>>v;
    while (v>0) { 
        if (r == NULL) {
            r = new nod;
            r->r = NULL;
            r->l = NULL;
            r->d = v;
        }
        else {
            p = r;
            while(true) { 
                if (v< p->d) {
                    if (p->l == NULL) {
                        p->l = new nod;
                        p = p->l; 
                        p->d = v; 
                        p->l = NULL;
                        p->r = NULL;
                        break; 
                    }
                    else if (p->l != NULL) { 
                        p = p->l;
                    } 
                } 
                else if (v >p->d) {
                    if (p->r == NULL) { 
                        p->r = new nod; 
                        p = p->r; 
                        p->d = v; 
                        p->l = NULL; 
                        p->r = NULL; 
                        break; 
                    } 
                    else if (p->r != NULL) { p = p->r; } 
                } 
            } 
        } 
        cin>>v;
    } 
} 
void inorder(nod *p) { 
    if (p != NULL) { 
        inorder(p->l); 
        cout<<p->d<<" "; 
        inorder(p->r); 
    } 
} 
void preorder(nod *p) {
    if (p != NULL) { 
        cout<<p->d<<" ";
        preorder(p->l); 
        preorder(p->r); 
    } 
} 
void postorder(nod *p) { 
    if (p != NULL) {
    postorder(p->l); 
    postorder(p->r); 
    cout<<p->d<<" "; 
    } } 
   
int main() {
    create(); 
    cout<<"Tree values are:\n";
    inorder(r);
}