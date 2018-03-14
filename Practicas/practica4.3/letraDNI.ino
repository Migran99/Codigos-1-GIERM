char letraDNI(long num){
  char letras[23] = {'T','R','W','A','G','M','Y','F','P','D','X','B','N','J','Z','S','Q','V','H','L','C','K','E'};
  char letra;
  int resto = num % 23;
  letra = letras[resto];
  return letra;
}
