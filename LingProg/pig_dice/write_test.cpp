int main(){

	filename = "/home/zetdg/BTI/LingProg/pig_dice/log.data";

	FILE *file = fopen(filename,"wb");
	fwrite(3,sizeof(int),1,file);
	fclose(file);

	return 0;
}
