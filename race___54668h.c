#include "drally.h"
#include "drmath.h"

	extern byte ___243cf4h[];
	extern byte ___243c60h[];
	extern byte ___1e6ed0h[];
	extern byte ___1de580h[];
	extern byte ___243ca8h[];
	extern byte ___243ce8h[];
	extern byte ___243d08h[];
	extern byte ___243d28h[];
	extern void * ___243d60h;
	extern void * ___243d58h;
	extern byte ___242d78h[];
	extern byte ___2438d4h[];
	extern byte ___243078h[];

int rand_watcom106(void);

// POSITION, LAP COUNTER
void race___54668h(void){

	double 	d_tmp, d_st0, d_st1;
	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x124];
	void * 	edxp;


		edx ^= edx;
		ebx = D(___243cf4h);
		D(___243c60h) = edx;
		if((int)ebx <= 0) goto ___55ad5h;
___54699h:
		ecx = D(___243c60h);
		edx = 0x35e*ecx;
		FPUSH(-22.0);
		FPUSH(F32(edx+___1e6ed0h+0xac));
		ST(0) = ST(0)+ST(1);
		FPUSH(create_double(0xea,0x2e,0x44,0x54,0xfb,0x21,0x09,0x40));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)*ST(1);
		FPUSH(180.0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)/ST(1);
		ST(0) = dRMath_sin(ST(0));
		FPUSH(F32(edx+___1e6ed0h+0xac));
		ST(0) = ST(0)+180.0;
		ST(0) = ST(0)+ST(4);
		ST(0) = ST(0)*ST(3);
		ST(0) = ST(0)/ST(2);
		ST(0) = dRMath_sin(ST(0));
		FPUSH(F32(edx+___1e6ed0h+0xac));
		ST(0) = ST(0)+180.0;
		ST(5) = ST(5)+ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		ST(0) = ST(0)*ST(3);
		ST(0) = ST(0)/ST(2);
		ST(0) = dRMath_cos(ST(0));
		FPUSH(F32(edx+___1e6ed0h+0xac));
		ST(0) = ST(0)+180.0;
		ST(0) = ST(0)+22.0;
		ST(0) = ST(0)*ST(4);
		ST(0) = ST(0)/ST(3);
		ST(0) = dRMath_sin(ST(0));
		FPUSH(F32(edx+___1e6ed0h+0xac));
		ST(0) = ST(0)+180.0;
		ST(0) = ST(0)+22.0;
		ST(5) = ST(5)*ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		ST(3) = ST(0)/ST(3); FPOP();
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(0) = dRMath_cos(ST(0));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		FPUSH(12.0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)*ST(1);
		d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
		ST(0) = ST(0)*ST(1);
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		FPUSH(create_double(0xa3,0xae,0xb5,0xf7,0xa9,0xaa,0xea,0x3f));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)*ST(1);
		d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
		ST(0) = ST(0)*ST(2);
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		ST(1) = ST(1)*ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		ST(0) = ST(0)*ST(1);
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		ST(1) = ST(1)*ST(0); FPOP();
		FPUSH(F32(edx+___1e6ed0h+0xb4));
		ST(5) = ST(5)+ST(0);
		ST(3) = ST(3)+ST(0); FPOP();
		FPUSH(F32(edx+___1e6ed0h+0xb4));
		d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
		F32(edx+___1e6ed0h+0x12e) = (float)FPOP();
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		ST(1) = ST(1)+ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(edx+___1e6ed0h+0x10e) = (float)FPOP();
		FPUSH(F32(edx+___1e6ed0h+0xb8));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(edx+___1e6ed0h+0x11e) = (float)FPOP();
		FPUSH(F32(edx+___1e6ed0h+0xb8));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(2) = ST(2)+ST(0); FPOP();
		ST(2) = ST(2)+ST(0); FPOP();
		F32(edx+___1e6ed0h+0x112) = (float)FPOP();
		F32(edx+___1e6ed0h+0x122) = (float)FPOP();
		FPUSH(F32(edx+___1e6ed0h+0xac));
		ST(0) = ST(0)-22.0;
		FPUSH(create_double(0xea,0x2e,0x44,0x54,0xfb,0x21,0x09,0x40));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)*ST(1);
		FPUSH(180.0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)/ST(1);
		ST(0) = dRMath_cos(ST(0));
		FPUSH(22.0);
		FPUSH(F32(edx+___1e6ed0h+0xac));
		ST(0) = ST(0)+ST(1);
		ST(0) = ST(0)*ST(4);
		ST(0) = ST(0)/ST(3);
		ST(0) = dRMath_sin(ST(0));
		FPUSH(F32(edx+___1e6ed0h+0xac));
		ST(2) = ST(2)+ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(4) = ST(4)*ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		ST(2) = ST(0)/ST(2); FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = dRMath_cos(ST(0));
		ebx = 0x94*ecx;
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		FPUSH(create_double(0xa3,0xae,0xb5,0xf7,0xa9,0xaa,0xea,0x3f));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)*ST(1);
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		FPUSH(12.0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)*ST(1);
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		ST(2) = ST(2)*ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		ST(0) = ST(0)*ST(3);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(3) = ST(3)*ST(0); FPOP();
		edi = D(ebx+___1de580h+0x18);
		FPUSH(F32(edx+___1e6ed0h+0xb8));
		FPUSH(F32(edx+___1e6ed0h+0xb4));
		ST(3) = ST(3)+ST(0); FPOP();
		FPUSH(F32(edx+___1e6ed0h+0xb8));
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		F32(edx+___1e6ed0h+0x13e) = (float)FPOP();
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(3) = ST(3)+ST(0); FPOP();
		ST(1) = ST(1)+ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(edx+___1e6ed0h+0x142) = (float)FPOP();
		F32(edx+___1e6ed0h+0x132) = (float)FPOP();

		if((int)edi > 0){

			FPUSH(0.0);

			if(FPOP() < (double)F32(edx+___1e6ed0h+0xb0)){

				FPUSH(F32(ebx+___1de580h+4));
				ST(0) = ST(0)*0.55;
				FPUSH(F32(edx+___1e6ed0h+0xb0));
				d_st0 = FPOP();
				d_st1 = FPOP();

				if(d_st0 < d_st1){

					eax = D(___243ca8h);

					if((B(edx+eax*4+___1e6ed0h+0x20)&1) != 0){

						eax = rand_watcom106();
						D(esp+0x11c) = eax;
						FPUSH((int)D(esp+0x11c));
						ST(0) = ST(0)*create_double(0,0,0,0,0,0,0xf0,0x3e);
						FPUSH(F32(edx+___1e6ed0h+0x104));
						d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
						ST(0) = ST(0)+ST(1);
						eax = D(___243c60h);
						ST(1) = ST(0); FPOP();
						F32(edx+___1e6ed0h+0x104) = (float)FPOP();
						edx = 0x35e*eax;
						eax = rand_watcom106();
						D(esp+0x11c) = eax;
						FPUSH((int)D(esp+0x11c));
						ST(0) = ST(0)*create_double(0,0,0,0,0,0,0xf0,0x3e);
						ST(0) = (double)F32(edx+___1e6ed0h+0x104)-ST(0);
						F32(edx+___1e6ed0h+0x104) = (float)FPOP();
					}
				}
			}
		}

		edx = 0x35e*D(___243c60h);
		ecx = D(edx+___1e6ed0h+0x352);
		if((int)ecx <= 0) goto ___54f11h;
		eax = 0x94*D(___243ce8h);
		if(D(eax+___1de580h+0x2c) == 0) goto ___54f11h;
		FPUSH(F32(___1e6ed0h+edx+0x10e));
		FPUSH(F32(___1e6ed0h+edx+0xb0));
		ST(0) = (int)ST(0);
		d_tmp = ST(0);
		ST(0) = ST(1);
		ST(1) = d_tmp;
		ST(0) = ST(0)-(double)F32(___1e6ed0h+edx+0x116);
		d_tmp = ST(0);
		ST(0) = ST(1);
		ST(1) = d_tmp;
		D(esp+0xf8) = (int)FPOP();
		FPUSH((int)D(esp+0xf8));
		F32(esp+0x11c) = (float)FPOP();
		ST(0) = ST(0)/(double)F32(esp+0x11c);
		FPUSH(F32(___1e6ed0h+edx+0x112));
		ST(0) = ST(0)-(double)F32(___1e6ed0h+edx+0x11a);
		ST(0) = ST(0)/(double)F32(esp+0x11c);
		FPUSH(F32(___1e6ed0h+edx+0x11e));
		ST(0) = ST(0)-(double)F32(___1e6ed0h+edx+0x126);
		ST(0) = ST(0)/(double)F32(esp+0x11c);
		FPUSH(F32(___1e6ed0h+edx+0x122));
		ST(0) = ST(0)-(double)F32(___1e6ed0h+edx+0x12a);
		ST(0) = ST(0)/(double)F32(esp+0x11c);
		FPUSH(F32(___1e6ed0h+edx+0x12e));
		ST(0) = ST(0)-(double)F32(___1e6ed0h+edx+0x136);
		ST(0) = ST(0)/(double)F32(esp+0x11c);
		FPUSH(F32(___1e6ed0h+edx+0x132));
		ST(0) = ST(0)-(double)F32(___1e6ed0h+edx+0x13a);
		ST(0) = ST(0)/(double)F32(esp+0x11c);
		ebx = ecx-1;
		D(___1e6ed0h+edx+0x352) = ebx;
		d_tmp = ST(0);
		ST(0) = ST(5);
		ST(5) = d_tmp;
		F32(esp+0x118) = (float)FPOP();
		FPUSH(F32(___1e6ed0h+edx+0x13e));
		ST(0) = ST(0)-(double)F32(___1e6ed0h+edx+0x146);
		ST(0) = ST(0)/(double)F32(esp+0x11c);
		FPUSH(F32(___1e6ed0h+edx+0x142));
		ST(0) = ST(0)-(double)F32(___1e6ed0h+edx+0x14a);
		ST(0) = ST(0)/(double)F32(esp+0x11c);
		ecx = 0;
		esi = D(esp+0xf8);
		D(___243d08h) = ecx;
		d_tmp = ST(0);
		ST(0) = ST(5);
		ST(5) = d_tmp;
		F32(esp+0x114) = (float)FPOP();
		d_tmp = ST(0);
		ST(0) = ST(3);
		ST(3) = d_tmp;
		F32(esp+0x110) = (float)FPOP();
		d_tmp = ST(0);
		ST(0) = ST(1);
		ST(1) = d_tmp;
		F32(esp+0x10c) = (float)FPOP();
		F32(esp+0x108) = (float)FPOP();
		d_tmp = ST(0);
		ST(0) = ST(2);
		ST(2) = d_tmp;
		F32(esp+0x104) = (float)FPOP();
		d_tmp = ST(0);
		ST(0) = ST(1);
		ST(1) = d_tmp;
		F32(esp+0x100) = (float)FPOP();
		F32(esp+0xfc) = (float)FPOP();
		if((int)esi <= 0) goto ___55a49h;
		L(ecx) = 0xf;

___54a34h:
		D(esp+0x14) = (int)(double)F32(___1e6ed0h+0x35e*D(___243c60h)+0x11a);
		FPUSH((int)D(esp+0x14));
		ST(0) = (double)F32(___1e6ed0h+0x35e*D(___243c60h)+0x11a)-ST(0);

		if(FPOP() < 0.5){

			D(esp+0x18) = D(esp+0x14);
		}
		else {

			D(esp+0x18) = (int)(1.0+(double)F32(___1e6ed0h+0x35e*D(___243c60h)+0x11a));
		}

		ebx = D(esp+0x18)*D(___243d28h);
		D(esp+0xa4) = (int)(double)F32(___1e6ed0h+0x35e*D(___243c60h)+0x116);
		FPUSH((int)D(esp+0xa4));
		ST(0) = (double)F32(___1e6ed0h+0x35e*D(___243c60h)+0x116)-ST(0);

		if(FPOP() < 0.5){

			D(esp+0x120) = D(esp+0xa4);
		}
		else {

			D(esp+0x120) = (int)(1.0+(double)F32(___1e6ed0h+0x35e*D(___243c60h)+0x116));
		}

		eax = D(esp+0x120)+ebx;
		L(edx) = B(___243d60h+eax)&L(ecx);

		if(L(edx) == 0xf){

			B(___243d58h+eax) = B(___242d78h+B(___243d58h+eax));
			B(___243d58h+eax+1) = B(___242d78h+B(___243d58h+eax+1));
			B(___243d58h+eax+D(___243d28h)) = B(___242d78h+B(___243d58h+eax+D(___243d28h)));
			B(___243d58h+eax+D(___243d28h)+1) = B(___242d78h+B(___243d58h+eax+D(___243d28h)+1));
		}

		D(esp+0x28) = (int)(double)F32(___1e6ed0h+0x35e*D(___243c60h)+0x12a);
		FPUSH((int)D(esp+0x28));
		ST(0) = (double)F32(___1e6ed0h+0x35e*D(___243c60h)+0x12a)-ST(0);

		if(FPOP() < 0.5){

			D(esp+0x2c) = D(esp+0x28);
		}
		else {

			D(esp+0x2c) = (int)(1.0+(double)F32(___1e6ed0h+0x35e*D(___243c60h)+0x12a));
		}

		ebx = D(esp+0x2c)*D(___243d28h);
		D(esp+0x58) = (int)(double)F32(___1e6ed0h+0x35e*D(___243c60h)+0x126);
		FPUSH((int)D(esp+0x58));
		ST(0) = (double)F32(___1e6ed0h+0x35e*D(___243c60h)+0x126)-ST(0);

		if(FPOP() < 0.5){

			D(esp+0xb8) = D(esp+0x58);
		}
		else {

			D(esp+0xb8) = (int)(1.0+(double)F32(___1e6ed0h+0x35e*D(___243c60h)+0x126));
		}

		eax = D(esp+0xb8)+ebx;
		L(edx) = B(___243d60h+eax)&L(ecx);

		if(L(edx) == 0xf){

			B(___243d58h+eax) = B(___242d78h+B(___243d58h+eax));
			B(___243d58h+eax+1) = B(___242d78h+B(___243d58h+eax+1));
			B(___243d58h+eax+D(___243d28h)) = B(___242d78h+B(___243d58h+eax+D(___243d28h)));
			B(___243d58h+eax+D(___243d28h)+1) = B(___242d78h+B(___243d58h+eax+D(___243d28h)+1));
		}

		D(esp+0x3c) = (int)(double)F32(___1e6ed0h+0x35e*D(___243c60h)+0x13a);
		FPUSH((int)D(esp+0x3c));
		ST(0) = (double)F32(___1e6ed0h+0x35e*D(___243c60h)+0x13a)-ST(0);

		if(FPOP() < 0.5){

			D(esp+0x44) = D(esp+0x3c);
		}
		else {

			D(esp+0x44) = (int)(1.0+(double)F32(___1e6ed0h+0x35e*D(___243c60h)+0x13a));
		}

		ebx = D(esp+0x44)*D(___243d28h);
		D(esp+0x48) = (int)(double)F32(___1e6ed0h+0x35e*D(___243c60h)+0x136);
		FPUSH((int)D(esp+0x48));
		ST(0) = (double)F32(___1e6ed0h+0x35e*D(___243c60h)+0x136)-ST(0);

		if(FPOP() < 0.5){

			D(esp+0x4c) = D(esp+0x48);
		}
		else {

			D(esp+0x4c) = (int)(1.0+(double)F32(___1e6ed0h+0x35e*D(___243c60h)+0x136));
		}

		eax = ebx+D(esp+0x4c);
		L(edx) = B(___243d60h+eax)&L(ecx);

		if(L(edx) == 0xf){

			B(___243d58h+eax) = B(___242d78h+B(___243d58h+eax));
			B(___243d58h+eax+1) = B(___242d78h+B(___243d58h+eax+1));
			B(___243d58h+eax+D(___243d28h)) = B(___242d78h+B(___243d58h+eax+D(___243d28h)));
			B(___243d58h+eax+D(___243d28h)+1) = B(___242d78h+B(___243d58h+eax+D(___243d28h)+1));
		}

		edx = 0x35e*D(___243c60h);
		D(esp+0x50) = (int)(double)F32(___1e6ed0h+edx+0x14a);

		FPUSH((int)D(esp+0x50));
		ST(0) = (double)F32(___1e6ed0h+edx+0x14a)-ST(0);

		if(FPOP() < 0.5){

			D(esp+0x90) = D(esp+0x50);
		}
		else {

			D(esp+0x90) = (int)(1.0+(double)F32(___1e6ed0h+edx+0x14a));
		}

		ebx = D(esp+0x90)*D(___243d28h);
		edx = 0x35e*D(___243c60h);
		D(esp+0x5c) = (int)(double)F32(___1e6ed0h+edx+0x146);
		FPUSH((int)D(esp+0x5c));
		ST(0) = (double)F32(___1e6ed0h+edx+0x146)-ST(0);
		
		if(FPOP() < 0.5){

			D(esp+0x60) = D(esp+0x5c);
		}
		else {

			D(esp+0x60) = (int)(1.0+(double)F32(___1e6ed0h+edx+0x146));
		}

		eax = D(esp+0x60)+ebx;
		L(edx) = B(___243d60h+eax)&L(ecx);

		if(L(edx) == 0xf){

			B(___243d58h+eax) = B(___242d78h+B(___243d58h+eax));
			B(___243d58h+eax+1) = B(___242d78h+B(___243d58h+eax+1));
			B(___243d58h+eax+D(___243d28h)) = B(___242d78h+B(___243d58h+eax+D(___243d28h)));
			B(___243d58h+eax+D(___243d28h)+1) = B(___242d78h+B(___243d58h+eax+D(___243d28h)+1));
		}

		eax = 0x35e*D(___243c60h);
		ebx = D(___243d08h);
		ebx++;
		esi = D(esp+0xf8);
		D(___243d08h) = ebx;
		FPUSH(F32(___1e6ed0h+eax+0x116));
		FPUSH(F32(___1e6ed0h+eax+0x11a));
		FPUSH(F32(___1e6ed0h+eax+0x126));
		FPUSH(F32(___1e6ed0h+eax+0x12a));
		FPUSH(F32(___1e6ed0h+eax+0x136));
		FPUSH(F32(___1e6ed0h+eax+0x13a));
		d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
		ST(0) = ST(0)+(double)F32(esp+0x118);
		FPUSH(F32(___1e6ed0h+eax+0x146));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(___1e6ed0h+eax+0x116) = (float)FPOP();
		FPUSH(F32(___1e6ed0h+eax+0x14a));
		d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
		ST(0) = ST(0)+(double)F32(esp+0x114);
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		ST(0) = ST(0)+(double)F32(esp+0x110);
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		ST(0) = ST(0)+(double)F32(esp+0x10c);
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(0) = ST(0)+(double)F32(esp+0x108);
		d_tmp = ST(0); ST(0) = ST(6); ST(6) = d_tmp;
		ST(0) = ST(0)+(double)F32(esp+0x104);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)+(double)F32(esp+0x100);
		d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
		ST(0) = ST(0)+(double)F32(esp+0xfc);
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		F32(___1e6ed0h+eax+0x11a) = (float)FPOP();
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		F32(___1e6ed0h+eax+0x126) = (float)FPOP();
		F32(___1e6ed0h+eax+0x12a) = (float)FPOP();
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		F32(___1e6ed0h+eax+0x136) = (float)FPOP();
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		F32(___1e6ed0h+eax+0x13a) = (float)FPOP();
		F32(___1e6ed0h+eax+0x146) = (float)FPOP();
		F32(___1e6ed0h+eax+0x14a) = (float)FPOP();
		if((int)ebx >= (int)esi) goto ___55a49h;
		goto ___54a34h;
___54f11h:
		edx = 0x35e*D(___243c60h);
		FPUSH(0.0);
		if(FPOP() <= (double)F32(edx+___1e6ed0h+0xbc)) goto ___54f36h;
		FPUSH(F32(edx+___1e6ed0h+0xbc));
		ST(0) = -1.0*ST(0);
		F32(esp+0x64) = (float)FPOP();
		goto ___54f40h;
___54f36h:
		eax = D(edx+___1e6ed0h+0xbc);
		D(esp+0x64) = eax;
___54f40h:
		edx = D(___243c60h);
		eax = 0x94*edx;
		eax = D(eax+___1de580h);
		eax += 0xd;
		D(esp+0x11c) = eax;
		FPUSH((int)D(esp+0x11c));
		if(FPOP() < (double)F32(esp+0x64)) goto ___54fe1h;
		edx = 0x35e*edx;
		FPUSH(0.0);
		if(FPOP() >= (double)F32(edx+___1e6ed0h+0xb0)) goto ___54f8eh;
		eax = D(___243ca8h);
		if((B(edx+eax*4+___1e6ed0h+0x20)&2) != 0) goto ___54fe1h;
___54f8eh:
		ecx = D(___243c60h);
		edx = 0x35e*ecx;
		FPUSH(0.0);
		if(FPOP() >= (double)F32(edx+___1e6ed0h+0xb0)) goto ___55a49h;
		eax = 0x94*ecx;
		FPUSH(F32(eax+___1de580h+4));
		ST(0) = ST(0)*0.55;
		FPUSH(F32(edx+___1e6ed0h+0xb0));
		d_st0 = FPOP();
		d_st1 = FPOP();
		if(d_st0 >= d_st1) goto ___55a49h;
		eax = D(___243ca8h);
		if((B(edx+eax*4+___1e6ed0h+0x20)&1) == 0) goto ___55a49h;
___54fe1h:
		eax = 0x35e*D(___243c60h);
		edx = D(___243ca8h);
		edx <<= 0x2;
		eax += edx;
		H(ecx) = B(eax+___1e6ed0h+0x20);
		if((H(ecx)&2) == 0) goto ___5500ah;
		if((H(ecx)&0x40) != 0) goto ___55a49h;
___5500ah:
		edx = D(___243ce8h);
		if(edx != D(___243c60h)) goto ___55144h;
		edx = 0x35e*D(___243c60h);
		FPUSH(0.0);
		if(FPOP() <= (double)F32(edx+___1e6ed0h+0xbc)) goto ___55041h;
		FPUSH(F32(edx+___1e6ed0h+0xbc));
		ST(0) = -1.0*ST(0);
		F32(esp+0x68) = (float)FPOP();
		goto ___5504bh;
___55041h:
		eax = D(edx+___1e6ed0h+0xbc);
		D(esp+0x68) = eax;
___5504bh:
		ecx = D(___243c60h);
		eax = 0x94*ecx;
		eax = D(eax+___1de580h);
		eax += 0xd;
		D(esp+0x11c) = eax;
		FPUSH((int)D(esp+0x11c));
		if(FPOP() >= (double)F32(esp+0x68)) goto ___550b7h;
		edx = 0x35e*ecx;
		FPUSH(0.0);
		if(FPOP() <= (double)F32(edx+___1e6ed0h+0xbc)) goto ___55098h;
		FPUSH(F32(edx+___1e6ed0h+0xbc));
		ST(0) = -1.0*ST(0);
		F32(esp+0x6c) = (float)FPOP();
		goto ___550a2h;
___55098h:
		eax = D(edx+___1e6ed0h+0xbc);
		D(esp+0x6c) = eax;
___550a2h:
		FPUSH(F32(esp+0x6c));
		ST(0) = ST(0)*2048.0;
		ST(0) = (int)ST(0);
		D(___2438d4h) = (int)FPOP();
___550b7h:
		if((int)D(___2438d4h) <= 0x10000) goto ___550cdh;
		D(___2438d4h) = 0x10000;
___550cdh:
		edx = 0x35e*D(___243c60h);
		FPUSH(0.0);
		if(FPOP() >= (double)F32(edx+___1e6ed0h+0xb0)) goto ___550f3h;
		eax = D(___243ca8h);
		if((B(edx+eax*4+___1e6ed0h+0x20)&2) != 0) goto ___5513ah;
___550f3h:
		ecx = D(___243c60h);
		edx = 0x35e*ecx;
		FPUSH(0.0);
		if(FPOP() >= (double)F32(edx+___1e6ed0h+0xb0)) goto ___55144h;
		eax = 0x94*ecx;
		FPUSH(F32(eax+___1de580h+4));
		ST(0) = ST(0)*0.85;
		FPUSH(F32(edx+___1e6ed0h+0xb0));
		d_st0 = FPOP();
		d_st1 = FPOP();
		if(d_st0 >= d_st1) goto ___55144h;
		eax = D(___243ca8h);
		if((B(edx+eax*4+___1e6ed0h+0x20)&1) == 0) goto ___55144h;
___5513ah:
		D(___2438d4h) = 0x10000;
___55144h:
		esi = 0x35e*D(___243c60h);
		FPUSH(F32(esi+___1e6ed0h+0x10e));
		FPUSH(F32(esi+___1e6ed0h+0xb0));
		ST(0) = (int)ST(0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)-(double)F32(esi+___1e6ed0h+0x116);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		D(esp+0x10) = (int)FPOP();
		FPUSH((int)D(esp+0x10));
		F32(esp+0x11c) = (float)FPOP();
		ST(0) = ST(0)/(double)F32(esp+0x11c);
		FPUSH(F32(esi+___1e6ed0h+0x112));
		ST(0) = ST(0)-(double)F32(esi+___1e6ed0h+0x11a);
		ST(0) = ST(0)/(double)F32(esp+0x11c);
		FPUSH(F32(esi+___1e6ed0h+0x11e));
		ST(0) = ST(0)-(double)F32(esi+___1e6ed0h+0x126);
		ST(0) = ST(0)/(double)F32(esp+0x11c);
		FPUSH(F32(esi+___1e6ed0h+0x122));
		ST(0) = ST(0)-(double)F32(esi+___1e6ed0h+0x12a);
		ST(0) = ST(0)/(double)F32(esp+0x11c);
		FPUSH(F32(esi+___1e6ed0h+0x12e));
		ST(0) = ST(0)-(double)F32(esi+___1e6ed0h+0x136);
		ST(0) = ST(0)/(double)F32(esp+0x11c);
		FPUSH(F32(esi+___1e6ed0h+0x132));
		ST(0) = ST(0)-(double)F32(esi+___1e6ed0h+0x13a);
		ST(0) = ST(0)/(double)F32(esp+0x11c);
		d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
		F32(esp+0x24) = (float)FPOP();
		FPUSH(F32(esi+___1e6ed0h+0x13e));
		ST(0) = ST(0)-(double)F32(esi+___1e6ed0h+0x146);
		ST(0) = ST(0)/(double)F32(esp+0x11c);
		FPUSH(F32(esi+___1e6ed0h+0x142));
		ST(0) = ST(0)-(double)F32(esi+___1e6ed0h+0x14a);
		ST(0) = ST(0)/(double)F32(esp+0x11c);
		edx = D(esi+___1e6ed0h+0x34a);
		edx++;
		D(esi+___1e6ed0h+0x34a) = edx;
		d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
		F32(esp+0x34) = (float)FPOP();
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		F32(esp+0x20) = (float)FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(esp+0x54) = (float)FPOP();
		F32(esp+0x30) = (float)FPOP();
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		F32(esp+0x40) = (float)FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(esp+0x1c) = (float)FPOP();
		F32(esp+0x8) = (float)FPOP();
		if(edx != 6) goto ___554c7h;
		D(esp+0xdc) = esi;
		D(esp+0xe0) = esi;
		D(esp+0xe4) = esi;
		D(esp+0xe8) = esi;
		edx = esi;
		D(esp+0xec) = esi;
		D(esp+0xf0) = esi;
		ebx = esi;
		ecx ^= ecx;
		D(esp+0xf4) = esi;
		D(esp+0x38) = ecx;
		D(esp+0xc) = ecx;
___55285h:
		if(D(esp+0x38) != 0) goto ___554b5h;
		if(D(esp+0xc) != 0) goto ___554b5h;
		if(D(edx+___1e6ed0h+0x1e2) != 0) goto ___55376h;
		D(edx+___1e6ed0h+0x1e2) = 1;
		eax = D(esp+0xe8);
		FPUSH(F32(eax+___1e6ed0h+0x12e));
		ST(0) = (int)ST(0);
		D(esp+0x70) = (int)FPOP();
		FPUSH((int)D(esp+0x70));
		ST(0) = (double)F32(eax+___1e6ed0h+0x12e)-ST(0);
		if(FPOP() < 0.5) goto ___552f7h;
		eax = D(esp+0xe8);
		FPUSH(1.0);
		ST(0) = ST(0)+(double)F32(eax+___1e6ed0h+0x12e);
		ST(0) = (int)ST(0);
		D(esp+0x74) = (int)FPOP();
		goto ___552ffh;
___552f7h:
		eax = D(esp+0x70);
		D(esp+0x74) = eax;
___552ffh:
		edi = D(esp+0xec);
		eax = D(esp+0x74);
		D(edi+___1e6ed0h+0x25a) = eax;
		eax = D(esp+0xe4);
		FPUSH(F32(eax+___1e6ed0h+0x132));
		ST(0) = (int)ST(0);
		D(esp+0x78) = (int)FPOP();
		FPUSH((int)D(esp+0x78));
		ST(0) = (double)F32(eax+___1e6ed0h+0x132)-ST(0);
		if(FPOP() < 0.5) goto ___55355h;
		eax = D(esp+0xe4);
		FPUSH(1.0);
		ST(0) = ST(0)+(double)F32(eax+___1e6ed0h+0x132);
		ST(0) = (int)ST(0);
		D(esp+0x7c) = (int)FPOP();
		goto ___5535dh;
___55355h:
		eax = D(esp+0x78);
		D(esp+0x7c) = eax;
___5535dh:
		edi = D(esp+0xf0);
		eax = D(esp+0x7c);
		D(edi+___1e6ed0h+0x2d2) = eax;
		D(esp+0x38) = 1;
___55376h:
		if(D(ebx+___1e6ed0h+0x21e) != 0) goto ___5546fh;
		edi = 1;
		eax = D(esp+0xe0);
		D(ebx+___1e6ed0h+0x21e) = edi;
		FPUSH(F32(eax+___1e6ed0h+0x13e));
		ST(0) = (int)ST(0);
		D(esp+0x80) = (int)FPOP();
		FPUSH((int)D(esp+0x80));
		ST(0) = (double)F32(eax+___1e6ed0h+0x13e)-ST(0);
		if(FPOP() < 0.5) goto ___553dch;
		eax = D(esp+0xe0);
		FPUSH(1.0);
		ST(0) = ST(0)+(double)F32(eax+___1e6ed0h+0x13e);
		ST(0) = (int)ST(0);
		D(esp+0x84) = (int)FPOP();
		goto ___553eah;
___553dch:
		eax = D(esp+0x80);
		D(esp+0x84) = eax;
___553eah:
		edi = D(esp+0xf4);
		eax = D(esp+0x84);
		D(edi+___1e6ed0h+0x296) = eax;
		eax = D(esp+0xdc);
		FPUSH(F32(eax+___1e6ed0h+0x142));
		ST(0) = (int)ST(0);
		D(esp+0x88) = (int)FPOP();
		FPUSH((int)D(esp+0x88));
		ST(0) = (double)F32(eax+___1e6ed0h+0x142)-ST(0);
		if(FPOP() < 0.5) goto ___5544ch;
		eax = D(esp+0xdc);
		FPUSH(1.0);
		ST(0) = ST(0)+(double)F32(eax+___1e6ed0h+0x142);
		ST(0) = (int)ST(0);
		D(esp+0x8c) = (int)FPOP();
		goto ___5545ah;
___5544ch:
		eax = D(esp+0x88);
		D(esp+0x8c) = eax;
___5545ah:
		eax = D(esp+0x8c);
		D(esi+___1e6ed0h+0x30e) = eax;
		D(esp+0xc) = 1;
___5546fh:
		edi = D(esp+0xec);
		eax = D(esp+0xf0);
		ebx += 0x4;
		esi += 0x4;
		ecx++;
		edi += 0x4;
		edx += 0x4;
		D(esp+0xec) = edi;
		edi = D(esp+0xf4);
		eax += 0x4;
		edi += 0x4;
		D(esp+0xf0) = eax;
		D(esp+0xf4) = edi;
		if((int)ecx < 0xf) goto ___55285h;
___554b5h:
		eax = 0x35e*D(___243c60h);
		ebx ^= ebx;
		D(eax+___1e6ed0h+0x34a) = ebx;
___554c7h:
		ecx ^= ecx;
		esi = D(esp+0x10);
		D(___243d08h) = ecx;
		if((int)esi <= 0) goto ___55a49h;
		L(ecx) = 0xf;
___554ddh:
		edi = D(___243c60h);
		edx = 0x35e*edi;
		FPUSH(0.0);
		if(FPOP() > (double)F32(edx+___1e6ed0h+0xb0)) goto ___55528h;
		eax = 0x94*edi;
		FPUSH(F32(eax+___1de580h+4));
		ST(0) = ST(0)*0.85;
		FPUSH(F32(edx+___1e6ed0h+0xb0));
		d_st0 = FPOP();
		d_st1 = FPOP();
		if(d_st0 > d_st1) goto ___55528h;
		eax = D(___243ca8h);
		if((B(edx+eax*4+___1e6ed0h+0x20)&1) != 0) goto ___5575ah;
___55528h:
		edx = 0x35e*D(___243c60h);
		FPUSH(F32(edx+___1e6ed0h+0x11a));
		ST(0) = (int)ST(0);
		D(esp+0x94) = (int)FPOP();
		FPUSH((int)D(esp+0x94));
		ST(0) = (double)F32(edx+___1e6ed0h+0x11a)-ST(0);
		if(FPOP() < 0.5) goto ___55572h;
		FPUSH(1.0);
		ST(0) = ST(0)+(double)F32(edx+___1e6ed0h+0x11a);
		ST(0) = (int)ST(0);
		D(esp+0x98) = (int)FPOP();
		goto ___55580h;
___55572h:
		eax = D(esp+0x94);
		D(esp+0x98) = eax;
___55580h:
		edx = 0x35e*D(___243c60h);
		ebx = D(esp+0x98);
		ebx = ebx*D(___243d28h);
		FPUSH(F32(edx+___1e6ed0h+0x116));
		ST(0) = (int)ST(0);
		D(esp+0x9c) = (int)FPOP();
		FPUSH((int)D(esp+0x9c));
		ST(0) = (double)F32(edx+___1e6ed0h+0x116)-ST(0);
		if(FPOP() < 0.5) goto ___555d8h;
		FPUSH(1.0);
		ST(0) = ST(0)+(double)F32(edx+___1e6ed0h+0x116);
		ST(0) = (int)ST(0);
		D(esp+0xa0) = (int)FPOP();
		goto ___555e6h;
___555d8h:
		eax = D(esp+0x9c);
		D(esp+0xa0) = eax;
___555e6h:
		eax = D(esp+0xa0);
		eax = ebx+eax;
		L(edx) = B(___243d60h+eax);
		L(edx) &= L(ecx);

		if(L(edx) == 0xf){

			B(___243d58h+eax) = B(___243078h+B(___243d58h+eax));
			B(___243d58h+eax+1) = B(___243078h+B(___243d58h+eax+1));
			B(___243d58h+eax+D(___243d28h)) = B(___243078h+B(___243d58h+eax+D(___243d28h)));
			B(___243d58h+eax+D(___243d28h)+1) = B(___243078h+B(___243d58h+eax+D(___243d28h)+1));
		}

		edx = 0x35e*D(___243c60h);
		FPUSH(F32(edx+___1e6ed0h+0x12a));
		ST(0) = (int)ST(0);
		D(esp+0xa8) = (int)FPOP();
		FPUSH((int)D(esp+0xa8));
		ST(0) = (double)F32(edx+___1e6ed0h+0x12a)-ST(0);
		if(FPOP() < 0.5) goto ___5568bh;
		FPUSH(1.0);
		ST(0) = ST(0)+(double)F32(edx+___1e6ed0h+0x12a);
		ST(0) = (int)ST(0);
		D(esp+0xac) = (int)FPOP();
		goto ___55699h;
___5568bh:
		eax = D(esp+0xa8);
		D(esp+0xac) = eax;
___55699h:
		edx = 0x35e*D(___243c60h);
		ebx = D(esp+0xac);
		ebx = ebx*D(___243d28h);
		FPUSH(F32(edx+___1e6ed0h+0x126));
		ST(0) = (int)ST(0);
		D(esp+0xb0) = (int)FPOP();
		FPUSH((int)D(esp+0xb0));
		ST(0) = (double)F32(edx+___1e6ed0h+0x126)-ST(0);
		if(FPOP() < 0.5) goto ___556f1h;
		FPUSH(1.0);
		ST(0) = ST(0)+(double)F32(edx+___1e6ed0h+0x126);
		ST(0) = (int)ST(0);
		D(esp+0xb4) = (int)FPOP();
		goto ___556ffh;
___556f1h:
		eax = D(esp+0xb0);
		D(esp+0xb4) = eax;
___556ffh:
		eax = D(esp+0xb4);
		eax = eax+ebx;
		L(edx) = B(___243d60h+eax);
		L(edx) &= L(ecx);

		if(L(edx) == 0xf){

			B(___243d58h+eax) = B(___243078h+B(___243d58h+eax));
			B(___243d58h+eax+1) = B(___243078h+B(___243d58h+eax+1));
			B(___243d58h+eax+D(___243d28h)) = B(___243078h+B(___243d58h+eax+D(___243d28h)));
			B(___243d58h+eax+D(___243d28h)+1) = B(___243078h+B(___243d58h+eax+D(___243d28h)+1));
		}
___5575ah:
		edx = 0x35e*D(___243c60h);
		FPUSH(F32(edx+___1e6ed0h+0x13a));
		ST(0) = (int)ST(0);
		D(esp+0xbc) = (int)FPOP();
		FPUSH((int)D(esp+0xbc));
		ST(0) = (double)F32(edx+___1e6ed0h+0x13a)-ST(0);
		if(FPOP() < 0.5) goto ___557a4h;
		FPUSH(1.0);
		ST(0) = ST(0)+(double)F32(edx+___1e6ed0h+0x13a);
		ST(0) = (int)ST(0);
		D(esp+0xc0) = (int)FPOP();
		goto ___557b2h;
___557a4h:
		eax = D(esp+0xbc);
		D(esp+0xc0) = eax;
___557b2h:
		edx = 0x35e*D(___243c60h);
		ebx = D(esp+0xc0);
		ebx = ebx*D(___243d28h);
		FPUSH(F32(edx+___1e6ed0h+0x136));
		ST(0) = (int)ST(0);
		D(esp+0xc4) = (int)FPOP();
		FPUSH((int)D(esp+0xc4));
		ST(0) = (double)F32(edx+___1e6ed0h+0x136)-ST(0);
		if(FPOP() < 0.5) goto ___5580ah;
		FPUSH(1.0);
		ST(0) = ST(0)+(double)F32(edx+___1e6ed0h+0x136);
		ST(0) = (int)ST(0);
		D(esp+0xc8) = (int)FPOP();
		goto ___55818h;
___5580ah:
		eax = D(esp+0xc4);
		D(esp+0xc8) = eax;
___55818h:
		eax = D(esp+0xc8);
		eax += ebx;
		L(edx) = B(___243d60h+eax);
		L(edx) &= L(ecx);
		
		if(L(edx) == 0xf){

			B(___243d58h+eax) = B(___243078h+B(___243d58h+eax));
			B(___243d58h+eax+1) = B(___243078h+B(___243d58h+eax+1));
			B(___243d58h+eax+D(___243d28h)) = B(___243078h+B(___243d58h+eax+D(___243d28h)));
			B(___243d58h+eax+D(___243d28h)+1) = B(___243078h+B(___243d58h+eax+D(___243d28h)+1));
		}

		edx = 0x35e*D(___243c60h);
		FPUSH(F32(edx+___1e6ed0h+0x14a));
		ST(0) = (int)ST(0);
		D(esp+0xcc) = (int)FPOP();
		FPUSH((int)D(esp+0xcc));
		ST(0) = (double)F32(edx+___1e6ed0h+0x14a)-ST(0);
		
		if(FPOP() < 0.5){

			D(esp+0xd0) = D(esp+0xcc);
		}
		else {

			FPUSH(1.0);
			ST(0) = ST(0)+(double)F32(edx+___1e6ed0h+0x14a);
			ST(0) = (int)ST(0);
			D(esp+0xd0) = (int)FPOP();
		}

		edx = 0x35e*D(___243c60h);
		ebx = D(esp+0xd0);
		ebx = ebx*D(___243d28h);
		FPUSH(F32(edx+___1e6ed0h+0x146));
		ST(0) = (int)ST(0);
		D(esp+0xd4) = (int)FPOP();
		FPUSH((int)D(esp+0xd4));
		ST(0) = (double)F32(edx+___1e6ed0h+0x146)-ST(0);
		if(FPOP() < 0.5) goto ___55923h;
		FPUSH(1.0);
		ST(0) = ST(0)+(double)F32(edx+___1e6ed0h+0x146);
		ST(0) = (int)ST(0);
		D(esp+0xd8) = (int)FPOP();
		goto ___55931h;
___55923h:
		eax = D(esp+0xd4);
		D(esp+0xd8) = eax;
___55931h:
		eax = D(esp+0xd8);
		eax = eax+ebx;
		L(edx) = B(___243d60h+eax);
		L(edx) &= L(ecx);

		if(L(edx) == 0xf){

			B(___243d58h+eax) = B(___243078h+B(___243d58h+eax));
			B(___243d58h+eax+1) = B(___243078h+B(___243d58h+eax+1));
			B(___243d58h+eax+D(___243d28h)) = B(___243078h+B(___243d58h+eax+D(___243d28h)));
			B(___243d58h+eax+D(___243d28h)+1) = B(___243078h+B(___243d58h+eax+D(___243d28h)+1));
		}

		eax = 0x35e*D(___243c60h);
		esi = D(___243d08h);
		esi++;
		edi = D(esp+0x10);
		D(___243d08h) = esi;
		FPUSH(F32(eax+___1e6ed0h+0x116));
		FPUSH(F32(eax+___1e6ed0h+0x11a));
		FPUSH(F32(eax+___1e6ed0h+0x126));
		FPUSH(F32(eax+___1e6ed0h+0x12a));
		FPUSH(F32(eax+___1e6ed0h+0x136));
		FPUSH(F32(eax+___1e6ed0h+0x13a));
		d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
		ST(0) = ST(0)+(double)F32(esp+0x24);
		FPUSH(F32(eax+___1e6ed0h+0x146));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(eax+___1e6ed0h+0x116) = (float)FPOP();
		FPUSH(F32(eax+___1e6ed0h+0x14a));
		d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
		ST(0) = ST(0)+(double)F32(esp+0x34);
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		ST(0) = ST(0)+(double)F32(esp+0x20);
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		ST(0) = ST(0)+(double)F32(esp+0x54);
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(0) = ST(0)+(double)F32(esp+0x30);
		d_tmp = ST(0); ST(0) = ST(6); ST(6) = d_tmp;
		ST(0) = ST(0)+(double)F32(esp+0x40);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)+(double)F32(esp+0x1c);
		d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
		ST(0) = ST(0)+(double)F32(esp+0x8);
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		F32(eax+___1e6ed0h+0x11a) = (float)FPOP();
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		F32(eax+___1e6ed0h+0x126) = (float)FPOP();
		F32(eax+___1e6ed0h+0x12a) = (float)FPOP();
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		F32(eax+___1e6ed0h+0x136) = (float)FPOP();
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		F32(eax+___1e6ed0h+0x13a) = (float)FPOP();
		F32(eax+___1e6ed0h+0x146) = (float)FPOP();
		F32(eax+___1e6ed0h+0x14a) = (float)FPOP();
		if((int)esi < (int)edi) goto ___554ddh;
___55a49h:
		edi = D(___243c60h);
		eax = 0x35e*edi;
		FPUSH(F32(eax+___1e6ed0h+0x10e));
		FPUSH(F32(eax+___1e6ed0h+0x112));
		FPUSH(F32(eax+___1e6ed0h+0x11e));
		FPUSH(F32(eax+___1e6ed0h+0x122));
		FPUSH(F32(eax+___1e6ed0h+0x12e));
		FPUSH(F32(eax+___1e6ed0h+0x132));
		FPUSH(F32(eax+___1e6ed0h+0x13e));
		d_tmp = ST(0); ST(0) = ST(6); ST(6) = d_tmp;
		F32(eax+___1e6ed0h+0x116) = (float)FPOP();
		FPUSH(F32(eax+___1e6ed0h+0x142));
		d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
		F32(eax+___1e6ed0h+0x11a) = (float)FPOP();
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		F32(eax+___1e6ed0h+0x126) = (float)FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(eax+___1e6ed0h+0x12a) = (float)FPOP();
		F32(eax+___1e6ed0h+0x136) = (float)FPOP();
		F32(eax+___1e6ed0h+0x13a) = (float)FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(eax+___1e6ed0h+0x146) = (float)FPOP();
		F32(eax+___1e6ed0h+0x14a) = (float)FPOP();
		eax = edi+1;
		edx = D(___243cf4h);
		D(___243c60h) = eax;
		if((int)eax < (int)edx) goto ___54699h;
___55ad5h:
		return;
}
