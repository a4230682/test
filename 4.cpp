 #include<iostream>
 using namespace std;


int ack(int m, int n) {
	if (m == 0) return(n + 1);
	else if (n == 0) return(ack(m - 1, 1));
	else return(ack(m - 1, ack(m, n - 1)));
}
 int main(){
 	
 cout<<ack(4,0)<<endl;
  cout<<ack(3,4)<<endl;
}
