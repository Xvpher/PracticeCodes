#include<stdio.h>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
#define SIZE 100000
double f[SIZE] , fp[SIZE] , fpp[SIZE], t[SIZE],q[SIZE],err[SIZE], z[SIZE], zp[SIZE], zpp[SIZE];
double h,  alpha=0.5692,Nalpha;
int k,N_max,eta_max,l,n=1.0,i=0;
float M=0, lambda=-1.24658;
double f_p(double f, double fp, double fpp, double z, double zp, double zpp, double t){
    return fp;
    }
double f_pp(double f, double fp, double fpp, double z, double zp, double zpp, double t){
    return fpp;
    }
double f_ppp(double f, double fp, double fpp, double z, double zp, double zpp, double t){
    return -(1-fp*fp)-f*fpp-M*M*(1-fp);
    }
double z_p(double f, double fp, double fpp, double z, double zp, double zpp, double t){
    return zp;
    }
double z_pp(double f, double fp, double fpp, double z, double zp, double zpp, double t){
    return zpp;
    }
double z_ppp(double f, double fp, double fpp, double z, double zp, double zpp, double t){
    return -fpp*z+(2*fp+M*M)*zp-f*zpp;
    }
void RK4(double t, double f, double fp, double fpp, double z, double zp, double zpp,  double h, double *t1, double *f1, double *fp2, double * fpp3,double *z1, double *zp2, double *zpp3){
// double k11,k12,k13,k14,k51,k61,k21,k23,k22,k42,k52,k62,k31,k32,k33,k43,k53,k63,k44,k54,k64,k24,k34,k41;
double k11,k21,k31,k41,k51,k61,k12,k22,k32,k42,k52,k62,k13,k23,k33,k43,k53,k63,k14,k24,k34,k44,k54,k64;
k11 = h*f_p(f,fp,fpp,z,zp,zpp,t);
k21 = h*f_pp(f,fp,fpp,z,zp,zpp,t);
k31 = h*f_ppp(f,fp,fpp,z,zp,zpp,t);
k41 = h*z_p(f,fp,fpp,z,zp,zpp,t);
k51 = h*z_pp(f,fp,fpp,z,zp,zpp,t);
k61 = h*z_ppp(f,fp,fpp,z,zp,zpp,t);

k12 = h*f_p(f+0.5*k11,fp+0.5*k21,fpp+0.5*k31,z+0.5*k41,zp+0.5*k51,zpp+0.5*k61,t+0.5*h);
k22 = h*f_pp(f+0.5*k11,fp+0.5*k21,fpp+0.5*k31,z+0.5*k41,zp+0.5*k51,zpp+0.5*k61,t+0.5*h);
k32 = h*f_ppp(f+0.5*k11,fp+0.5*k21,fpp+0.5*k31,z+0.5*k41,zp+0.5*k51,zpp+0.5*k61,t+0.5*h);
k42 = h*z_p(f+0.5*k11,fp+0.5*k21,fpp+0.5*k31,z+0.5*k41,zp+0.5*k51,zpp+0.5*k61,t+0.5*h);
k52 = h*z_pp(f+0.5*k11,fp+0.5*k21,fpp+0.5*k31,z+0.5*k41,zp+0.5*k51,zpp+0.5*k61,t+0.5*h);
k62 = h*z_ppp(f+0.5*k11,fp+0.5*k21,fpp+0.5*k31,z+0.5*k41,zp+0.5*k51,zpp+0.5*k61,t+0.5*h);

k13 = h*f_p(f+0.5*k12,fp+0.5*k22,fpp+0.5*k32,z+0.5*k42,zp+0.5*k52,zpp+0.5*k62,t+0.5*h);
k23 = h*f_pp(f+0.5*k12,fp+0.5*k22,fpp+0.5*k32,z+0.5*k42,zp+0.5*k52,zpp+0.5*k62,t+0.5*h);
k33 = h*f_ppp(f+0.5*k12,fp+0.5*k22,fpp+0.5*k32,z+0.5*k42,zp+0.5*k52,zpp+0.5*k62,t+0.5*h);
k43 = h*z_p(f+0.5*k12,fp+0.5*k22,fpp+0.5*k32,z+0.5*k42,zp+0.5*k52,zpp+0.5*k62,t+0.5*h);
k53 = h*z_pp(f+0.5*k12,fp+0.5*k22,fpp+0.5*k32,z+0.5*k42,zp+0.5*k52,zpp+0.5*k62,t+0.5*h);
k63 = h*z_ppp(f+0.5*k12,fp+0.5*k22,fpp+0.5*k32,z+0.5*k42,zp+0.5*k52,zpp+0.5*k62,t+0.5*h);

k14 = h*f_p(f+k13,fp+k23,fpp+k33,z+k43,zp+k53,zpp+k63,t+h);
k24 = h*f_pp(f+k13,fp+k23,fpp+k33,z+k43,zp+k53,zpp+k63,t+h);
k34 = h*f_ppp(f+k13,fp+k23,fpp+k33,z+k43,zp+k53,zpp+k63,t+h);
k44 = h*z_p(f+k13,fp+k23,fpp+k33,z+k43,zp+k53,zpp+k63,t+h);
k54 = h*z_pp(f+k13,fp+k23,fpp+k33,z+k43,zp+k53,zpp+k63,t+h);
k64 = h*z_ppp(f+k13,fp+k23,fpp+k33,z+k43,zp+k53,zpp+k63,t+h);

*t1 = t+h;
*f1 = f+(k11+2*k12+2*k13+k14)/6;
*fp2 = fp+(k21+2*k22+2*k23+k24)/6;
*fpp3 = fpp+(k31+2*k32+2*k33+k34)/6;
*z1 = z+(k41+2*k42+2*k43+k44)/6;
*zp2 = zp+(k51+2*k52+2*k53+k54)/6;
*zpp3 = zpp+(k61+2*k62+2*k63+k64)/6;
}





int main(){
int i=0;
// aa:
// FILE *f1 =  fopen("file1.txt","w");
f[0] =0,fp[0]=lambda,fpp[0]=alpha,z[0]=0.0,zp[0]=0.0,zpp[0]=1.0;

//kl = 1000;
h=0.01;
eta_max=20;
N_max=eta_max/h;

//t[0]= 0;
//t[N_max] = eta_max;



//h = (t[kl]-t[0])/kl;

//h = 0.06;
// cout<<"t[k] = "<<t[k]<<endl;
for( k = 0; k<N_max;k++)
   RK4(t[k], f[k], fp[k], fpp[k], z[k], zp[k], zpp[k], h, &t[k+1], &f[k+1], &fp[k+1], &fpp[k+1], &z[k+1], &zp[k+1], &zpp[k+1]);

//
	q[i]=alpha;
//err[i]=fp[N_max]-b;
err[i]=fp[N_max]-1;
Nalpha=q[i]-err[i]/z[N_max];

	// printf("%f \t   %f \t  %f \n",Nalpha,alpha,fabs(Nalpha-q[i]));
//	printf("The value of f"(0) is %f \n",fpp[0]);


if(fabs(Nalpha-q[i])>0.0000001){
	alpha=Nalpha;
  continue;
}

//
//if (i==1){
//	alpha=alpha+0.04;
////	goto aa;
//}
//else if(i==3){
//	if(err[2]<err[1]){
//		Nalpha=q[2]-((q[3]-q[2])*err[2]/(err[3]-err[2]));
//    }
//	else{
//		Nalpha=q[1]-((q[3]-q[1])*err[1]/(err[3]-err[1]));
//	}
//}
//
//else{
//	Nalpha=q[i-1]-((q[i]-q[i-1])*err[i-1]/(err[i]-err[i-1]));
//	goto aa;
//}
//
//
//if(abs(err[i])>0.001){
//	alpha=Nalpha;
//	goto aa;
//}
else
////FILE *f1 =  fopen("file.txt","w");
printf("\n");
fprintf(f1,"     t     f estimated    fp estimated    fpp estimated \n");
fprintf(f1," -------------------------------------\n");


for (k=0; k<=N_max; k++) fprintf(f1,"%10.3f  %10.4f   %10.4f  %10.4f\n", t[k], f[k], fp[k], fpp[k]);

printf(" -------------------------------------\n\n");

getchar();

}
