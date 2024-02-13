
		}
	}
	printf("A matrix=\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		printf("%d  ",arr[i][j]);	
		}
			printf("\n");
		}
		printf("B matrix\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		printf("%d  ",brr[i][j]);	
		}
			printf("\n");
		}
		
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		     crr[i][j]=arr[i][j]*brr[i][j];	
		}
			
		}
		printf("A*B=C\n");
		for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		printf("%d  ",crr[i][j]);	
		}
			printf("\n");
		}
		
	return 0;
}
