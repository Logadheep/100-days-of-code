#include <iostream> 
using namespace std; 
struct nod { nod *l, *r; int d; } 
*r = NULL, *p = NULL, *np = NULL, *q;
void create() { 
    int v; cin>>v; 
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
                    else if (p->l != NULL) { p = p->l; } 
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
int findMaxNode(nod* root) { 
    if (root == NULL) return -100; 
    int maxVal = root->d; 
    int leftMaxVal = findMaxNode(root->l); 
    int rightMaxVal = findMaxNode(root->r); 
    if (leftMaxVal > maxVal) maxVal = leftMaxVal; 
    if (rightMaxVal > maxVal) maxVal = rightMaxVal; 
    return maxVal; 
}
int main(){
    create();
    cout<<"Maximum element is "<<findMaxNode(r);
}