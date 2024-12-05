#include<stdio.h>
int main(){
	
	int arr[100],n,choice,max,min,index,b,item;
	int check = 0;
	int flag=-1;
	int soNguyenTo[100], indexSoNguyenTo = 0;
	do{
		printf("\n");
		printf("MENU\n");
	    printf("1.Nhap so phan tu can nhap va gia tri cac phan tu\n");
	    printf("2.In ra gia tri cac phan tu dang quan li\n");
	    printf("3.In ra gia tri lon nhat va nho nhat cua mang\n");
	    printf("4.In ra tong cac phan tu\n");
	    printf("5.Them mot phan tu vao cuoi mang\n");
	    printf("6.Xoa mot phan tu trong mang\n");
	    printf("7.Sap xep mang theo thu tu giam dan\n");
	    printf("8.Tim kiem phan tu co ton tai trong mang hay khong\n");
        printf("9.In ra so nguyen to trong mang\n");
        printf("10.Sap xep mang theo thu tu tang dan\n");
        printf("11.Thoat\n");
    	printf("Hay chon tinh nang: ");
	    scanf("%d",&choice);
	    switch(choice){
	    	case 1:
	    		printf("Nhap so phan tu(toi da 100): ");
	    		scanf("%d",&n);
	    		if(n>100 || n<1){
	    			check = 0;
	    			printf("So phan tu khong hop le.Vui long nhap lai");
				}else{
	    		    for(int i=0; i<n; i++){
	    			    printf("Gia tri cua phan tu arr[%d] la: ",i);
	    			    scanf("%d",&arr[i]);
	    			    check=1;
				}
			}
	    		break;
	    	case 2:
	    		if(check==0){
	    			printf("Ban chua nhap cac phan tu.Vui long chon 1 \n");	
				}else{
					for(int i=0;i<n;i++){
						printf("arr[%d] = %d \n",i,arr[i]);
					}
				}
	    		break;
	    	case 3:
	    		
	    		if(check==0){
	    			printf("Ban chua nhap cac phan tu.Vui long chon 1 \n");
				}else{
					max = arr[0];
					min = arr[0];
					for(int i=0; i<n; i++){	
						if(arr[i]>max){
							max = arr[i];
						}
						if(arr[i]<min){
							min = arr[i];
						}
					}
					printf("Phan tu lon nhat trong mang la: %d \n",max);
				    printf("Phan tu nho nhat trong mang la: %d\n",min);	
				}
				
	    		break;
	    	case 4:
	    		if(check==0){
	    			printf("Ban chua nhap cac phan tu.Vui long chon 1 \n");
	    		}else{
	    			int tong=0;
	    			for(int i=0; i<n;i++){
	    				tong+=arr[i];
					}
					printf("Tong cac phan tu trong mang la: %d\n",tong);
				}
	    		break;
	    	case 5:
	    		if(check==0){
	    			printf("Ban chua nhap cac phan tu.Vui long chon 1 \n");
	    		}else{
				
	                        for(int i=n; i<n-1; i--){
		                    arr[i]=arr[i-1];
		                }
	                        int a;
	                        printf("Nhap so muon them:");
	                        scanf("%d",&a);
	                        arr[n]=a;
	                        for(int i=0;i<n+1;i++){
		                     printf("%d\n",arr[i]);
		                }
		        }
	    		break;
	    	case 6:
			    if(check==0){
	    			printf("Ban chua nhap cac phan tu.Vui long chon 1 \n");
	    		}else{
	    	        printf("Nhap vi tri muon xoa: ");
	                scanf("%d", &b);
	                for(int i = b; i < n; i++){
		                arr[i] = arr[i+1];
	                }
	                for(int i = 0; i < n-1; i++){
		                printf("%d\n", arr[i]);
	                }
	            }
	    		break;
	    	case 7:
	    		if(check==0){
	    			printf("Ban chua nhap cac phan tu.Vui long chon 1 \n");
				}else{
	                    for(int i=0; i<n; i++){
	                    	for(int j=0; j<n-i-1; j++){
   			                    int temp;
			                    if(arr[j]<arr[j+1]){
				                    temp = arr[j];
				                    arr[j] = arr[j+1];
				                    arr[j+1] = temp;
			                    }
			
		                    }
	                    }
	                    for(int i=0; i<n; i++){
	                	printf("%d\n",arr[i]);
	                }
				}
	    		break;
	    	case 8:
	            if(check==0){
	                printf("Ban chua nhap cac phan tu.Vui long chon 1 \n");
				}else{	
	                printf("Moi ban nhap gia tri can tim kiem ");
	                scanf("%d",&item);
	                for(int i=0; i<n; i++){
		                if(arr[i]==item){
			                printf("Phan tu %d co vi tri la arr[%d]\n",item,i);
			                flag=i;
		                }
	                }
	                if(flag==-1){
		                printf("Khong tim thay phan tu %d trong mang\n",item);
	                }
	            }
	    		break;
	    	case 9:
					
					for(int i = 0; i < n; i++){
						int count = 0;
						for(int j = 1; j <= arr[i]; j++){
							if(arr[i] % j == 0){
								count++;
							}
						}
						if(count == 2){
							soNguyenTo[indexSoNguyenTo] = arr[i];
							indexSoNguyenTo++;
						}
					}
					if(indexSoNguyenTo == 0){
						printf("\nMang da nhap khong co so nguyen to\n");
					}
					else{
						printf("\nSo nguyen to trong mang la: ");
						for(int i = 0; i < indexSoNguyenTo; i++){
							printf("%d ", soNguyenTo[i]);
						}
						printf("\n");
					}

                break;
            case 10:
            	if(check==0){
            		printf("Ban chua nhap cac phan tu.Vui long chon 1 \n");
				}else{
				    for(int i=0; i<n; i++){
		                int minIndex=i;
		                    for(int j=i+1;j<n;j++){
			                    if(arr[j]<arr[minIndex]){
		                            minIndex = j;
			                    }
			                }
		                if(minIndex!=i){
			            int temp;
			            temp = arr[minIndex];
			            arr[minIndex] = arr[i];
			            arr[i] = temp;
		                }
	                }
	                for(int i=0; i<n; i++){
		                printf("%d\n",arr[i]);
	                }
	            }
            	break;
            case 11:
            	printf("THOAT");
            	break;
            default:
				printf("\nKhong co chuc nang nay hay nhap lai\n");
				break;
		}
} while(choice!=11);
	return 0;
}

