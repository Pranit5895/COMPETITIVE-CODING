

    static boolean isAnagram(String a, String b) {
	             a=a.toUpperCase();
		             b=b.toUpperCase();
			             boolean ret = false;
				             StringBuilder c= new StringBuilder(b);

					             if(a.length()==b.length()){
							                 for(int i=0; i<a.length();i++){
										                 for(int j=0; j<c.length();j++){
													                     if(a.charAt(i)==c.charAt(j)){
																                                 c.deleteCharAt(j);
																				                         if(i==a.length()-1 && c.length()==0){
																								                             ret=true;
																											                                 break;
																															                         }
																							                         break;

																										                     }

															                     }
												             }
									         }return ret;

						         }


