#include<stdio.h>
int main(){
	int n; 
	int option; 
	int arr[100]; 
	do{
		printf("\t MENU\n");
		printf("1:Nhap so phan tu va gia tri cho mang\n");
		printf("2:In ra gia tri cac phan tu trong mang\n");
		printf("3:Dem so luong so hoan hao co trong mang\n");
		printf("4:Tim gia tri nho thu 2 trong mang\n");
		printf("5:Them mot phan tu vao vi tri dau tien trong mang\n");
		printf("6:Xoa phan tu tai mot vi tri cu the\n");
		printf("7:Sap xep mang theo thu tu giam dan\n");
		printf("8:Nhap vao mot phan tu va kiem tra phan tu co ton tai\n");
		printf("9:Sap xep lai mang va hien thi ra toan bo phan tu co trong mang sao cho toan bo so le dung truoc,so chan dung sau\n");
		printf("10:Dao nguoc thu tu cua cac phan tu co trong mang va hien thi ra toan bo phan tu co trong mang theo\n");
		printf("11:Thoat\n"); 
		printf("Moi ban nhap so luong phan tu cho mang:"); 
		scanf("%d",&n);
		int arr[n];
		printf("Moi ban nhap gia tri cho phan tu:\n");
		for(int i = 0;i<n;i++){
			printf("arr[%d]=",i);
			scanf("%d",&arr[i]); }
		printf("Moi ban chon chuong trinh ban muon: ");
		scanf("%d",&option);
		switch(option){
			case 1: {
			
				printf("Moi ban nhap so luong phan tu cho mang:"); 
				scanf("%d",&n);
				int arr[n];
				printf("Moi ban nhap gia tri cho phan tu:\n");
				for(int i = 0;i<n;i++){
					printf("arr[%d]=",i);
					scanf("%d",&arr[i]); 
		}
				break; 
			}
			case 2:
				
				printf("Cac gia tri phan tu co trong mang la:");
				for(int i=0;i<n;i++){
					printf("arr[%d]=%d\n",i,arr[i]); 
			} 
				break; 
			case 3:  {
				int sum = 0;
				int count=0;
                	for (int j = 0; j < n; j++){
                    		sum = 0;
                   		 for (int i = 1; i <= arr[j] / 2; i++) {
                       			 if (arr[j] % i == 0) {
                           			 sum += i;
                        }
                    }
                    if (sum == arr[j] && arr[j] != 0) {
                        count++;
                    }
                } 
				printf("Co %d so hoan hao o trong mang", count);
				break;
			}
			
				
			case 4:
			
				break;
			case 5:{
				int number; 
				int index ; 
				printf("Moi ban nhap phan tu muon them vao:");
				scanf("%d",&number);
				for(int i=n;i>index;i--){
					arr[i] = arr[i-1];			 
				} 
				index = 0; 
				arr[index]=number;
				n++;
				printf("Mang sau khi chen la:\n");
				for(int i = 0;i<n;i++){
					printf("%d \t",arr[i]); 
				} 
				break;
			}
			case 6:{
				int valueIndex;
				int index;
				printf("Mang da cho la:\n");
				for(int i=0;i<n;i++){
					printf("%d \t",arr[i]); 
				}
				printf("\n"); 
				printf("Moi ban nhap nhap tu muon xoa:");
				scanf("%d",&valueIndex);
				printf("Moi ban vi tri muon xoa:");
				scanf("%d",&index);
				for(int i =index ;i<n-1;i++){
					arr[i]=arr[i+1]; 
					valueIndex=arr[index]; 
				} 
				n--;
				for(int i=0;i<n;i++){
					printf("%d\t",arr[i]); 
				} 
				break;
			} 
		case 7:{
			
			break;
		}
		case 8:{
	
		
			int searchItem;
    		int count = 0;
  		  	int start = 0;
    		int mid;
   		 	int end = n - 1;

    		printf("Moi ban nhap vao phan tu can tim kiem: ");
   			 scanf("%d", &searchItem);

    		while(start <= end) {
       			 mid = (start + end) / 2;
        		if(arr[mid] == searchItem) { 
            	count++;
            	printf("Phan tu %d nam o vi tri %d\n", searchItem, mid);
            	break; 
       			 } else if(arr[mid] < searchItem) {
           			 	start = mid + 1;
      			  } else {
           				 end = mid - 1;
        }
    }

    if(count == 0) {
        printf("Khong ton tai phan tu trong mang\n");
    }

    break;
}
		case 9:{
			int temp; 
			for (int i=0;i<n;i++){
			for(int j =0;j<n-i-1;j++){
				if(arr[j]%2==0&&arr[j+1]%2!=0)	{
					temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp; 
				}			
			} 
		} 
		for(int i =0;i<n;i++){
			printf("arr[%d]=%d\n",i,arr[i]); 
		} 
			break;
		}
		case 10:{
			int k=1;
			for(int i=0;i<n-1;i++){
				if(arr[i]>arr[i+1]){
					k=0;
					break; 
				} 
			} 
			if(k==1){
				printf("Mang la day tang dan\n"); 
			}else{
				printf("Mang la day khong tang dan\n"); 
			} 
			break;
		}
		case 11:
			printf("Ban da thoat chuong trinh");
			break; 
		default:
			printf("Lua chon khong hop le\n"); 
			 
}
	}while(option!=11); 
	return 0;
} 
