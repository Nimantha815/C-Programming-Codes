#include<stdio.h>

struct StudentRec {
	int StudentNumber; 
	char StudentName[40]; 
	int StudentMark; 
	int StudentRank;
};

int main(int argc, char *argv[]){
	FILE *fp;
	fp = fopen(argv[5], "w");
	
	if(fp==NULL){
		printf("File is not opened.\n");
	}
	
	int i, j, flag, z;
	int array[4];
	struct StudentRec a;
	struct StudentRec StudDB[15] = { 
	{1000003, "Lasantha Silva", 73, 0}, 
	{1000011, "Kelum Dissanayake", 67, 0}, 
	{1000005, "Samantha Perera", 90, 0}, 
	{1000001, "Priyal Munasinghe", 88, 0}, 
	{1000007, "Kalindu Nimalaratne",75, 0}, 
	{1000002, "Kamal Wijethnga",72, 0}, 
	{1000004, "Lalin Perera", 65, 0}, 
	{1000006, "Asanga Fernando",69, 0}, 
	{1000010, "Saman Mendis", 82, 0}, 
	{1000008, "Bimal Wijesinghe", 80, 0}, 
	{1000009, "Gajaba Sirimanne",77,0}, 
	{1000012, "Padmakumara Vidanagama",85, 0}, 
	{1000015, "Isuru Tilakaratne",92, 0}, 
	{1000014, "Nalaka Atukorala", 81, 0}, 
	{1000013, "Niranjith Pushpakumara", 79, 0} };
	
	
	for(i = 0; i < 15; i++){
        for(j = i + 1; j < 15; j++) {
        	printf("c\n");
            if(StudDB[i].StudentMark < StudDB[j].StudentMark){
            	
                    a = StudDB[i];
                    StudDB[i] = StudDB[j];
                    StudDB[j] = a;
            }
        }
    }
	
	for(i=0; i<15; i++){
		printf("c\n");
		StudDB[i].StudentRank = i+1;
		printf("%d\t%s\t\t%d\t%d\n", StudDB[i].StudentNumber, StudDB[i].StudentName, StudDB[i].StudentMark, StudDB[i].StudentRank);
	}
	
//	if(argc==1){
//		printf("No commandline arguments without file name.\n");
//	}
//	else{
//		
//		for(i=1; i<argc; i++){
//			array[i] = atoi(argv[i]);
//		}
		
//		for(i=0; i<argc; i++){
//			printf("%d \n", array[i]);
//		}

		
//		int flag;
//		for(i=1; i<argc-1; i++){
//			flag =0;
//			for(j=0; j<15; j++){
//				if(atoi(argv[i])==StudDB[j].StudentNumber){
//					printf("%d\t%s\t%d\n", StudDB[i].StudentNumber, StudDB[i].StudentName, StudDB[i].StudentMark);
//					fprintf(fp, "%d\t%s\t%d\n", StudDB[i].StudentNumber, StudDB[i].StudentName, StudDB[i].StudentMark);
//				}
//				else{
//					flag++;	
//				}
//				if(flag ==15)
//					printf("Not found\n");
//			}
//		}
		
//		for(i=0; i<argc; i++){
//			for(j=0; j<15; j++){
//				if(atoi(argv[i])==StudDB[j].StudentNumber){
//					printf("%d\t%s\t%d\t%d\n", StudDB[i].StudentNumber, StudDB[i].StudentName, StudDB[i].StudentMark);
//				}
//				else{
//					printf("%d\tNot Found\n", argv[z]);
//					flag = 1;
//					z = j;
//				}
//			}
//			if(flag==1){
//				printf("%d\tNot Found\n", argv[z]);
//			}
	//	}
			
//	fclose(fp);
	
	return 0;
}
