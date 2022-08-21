#include <stdio.h>

int main(){
	printf(">%s--%s():%d\n", __FILE__, __FUNCTION__, __LINE__);
	return 0;
}
void start_frame(){
	printf(">%s--%s():%d\n", __FILE__, __FUNCTION__, __LINE__);
}
void client_connect(){
	printf(">%s--%s():%d\n", __FILE__, __FUNCTION__, __LINE__);
}
void client_disconnect(){
	printf(">%s--%s():%d\n", __FILE__, __FUNCTION__, __LINE__);
}
void client_kill(){
	printf(">%s--%s():%d\n", __FILE__, __FUNCTION__, __LINE__);
}
void put_client_in_server(){
	printf(">%s--%s():%d\n", __FILE__, __FUNCTION__, __LINE__);
}
void set_change_parms(){
	printf(">%s--%s():%d\n", __FILE__, __FUNCTION__, __LINE__);
}
void set_new_parms(){
	printf(">%s--%s():%d\n", __FILE__, __FUNCTION__, __LINE__);
}
void player_post_think(){
	printf(">%s--%s():%d\n", __FILE__, __FUNCTION__, __LINE__);
}
void player_pre_think(){
	printf(">%s--%s():%d\n", __FILE__, __FUNCTION__, __LINE__);
}
