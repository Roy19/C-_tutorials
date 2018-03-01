/*
	Simple example of how a login 
	function might work in loop
*/

int main(){
	int attempt = 0;
	bool success = false;

	while(attempts < 3 && !success){
		success = login(uname,passwd);
		attempts++;
	}
	return 0;
}
