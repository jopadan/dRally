#include "drally.h"
#include "drmath.h"

	extern byte ___243c60h[];
	extern byte ___1de580h[];
	extern byte ___1e6ed0h[];
	extern byte ___243ca4h[];
	extern byte ___243ca8h[];
	extern byte ___2432b8h[];
	extern byte ___2432b0h[];
	extern byte ___2432bch[];
	extern byte ___243ce8h[];
	extern byte ___2432b4h[];
	extern byte ___243cf4h[];
	extern void * ___243d74h;
	extern byte ___24389ch[];
	extern byte ___2432c0h[];
	extern byte ___2432c4h[];
	extern byte ___243d2ch[];
	extern byte ___243d28h[];
	extern void * ___243d60h;
	extern byte ___19bd60h[];
	extern byte ___1df720h[];

int rand_watcom106(void);
void dRally_Sound_pushEffect(byte channel, byte n, dword unk, dword a0, dword a1, dword a2);

// MACHINE GUNS
void race___4ff50h(void){

	double 	d_tmp;
	dword 	eax, ebx, ecx, edx, edi, esi, ebp, p5, p6;
	byte 	esp[0x144];
	void * 	ebxp;


		edx = D(___243c60h);
		eax = 8*edx;
		eax += edx;
		eax <<= 0x2;
		eax += edx;
		eax <<= 0x2;
		if((int)D(eax+___1de580h+0x18) <= 0) goto ___50a3fh;
		edx = 0x35e*D(___243c60h);
		if(D(edx+___1e6ed0h+0x10a) != 0) goto ___50a3fh;
		if((int)D(___243ca4h) <= 0x1ae) goto ___50a3fh;
		ebx = D(___243ca8h);
		if((B(edx+ebx*4+___1e6ed0h+0x20)&0x20) == 0) goto ___50a3fh;
		if(D(eax+___1de580h+0x2c) == 0) goto  ___50a3fh;
		if((int)D(eax+___1de580h+0x30) <= 0) goto ___50a3fh;
		ebx = D(eax+___1de580h+0x60);
		ebx <<= 0x2;
		ebx += eax;
		FPUSH((int)D(ebx+___1de580h+0x64));
		ST(0) = ST(0)+(double)F32(edx+___1e6ed0h+0xac);
		ST(0) = ST(0)+180.0;
		ST(0) = ST(0)*create_double(0xea,0x2e,0x44,0x54,0xfb,0x21,0x09,0x40);
		ST(0) = ST(0)/180.0;
		ST(0) = dRMath_sin(ST(0));
		FPUSH((int)D(ebx+___1de580h+0x74));
		F64(esp+0x12c) = FPOP();
		ST(0) = ST(0)*F64(esp+0x12c);
		ecx = 0x1;
		F64(esp+0x104) = ST(0);
		ST(0) = (int)ST(0);
		D(esp+0x138) = (int)FPOP();
		FPUSH((int)D(esp+0x138));
		ST(0) = F64(esp+0x104)-ST(0);
		D(edx+___1e6ed0h+0x1b6) = ecx;
		if(FPOP() < 0.5) goto ___50071h;
		FPUSH(1.0);
		ST(0) = ST(0)+F64(esp+0x104);
		ST(0) = (int)ST(0);
		D(esp+0xc4) = (int)FPOP();
		goto ___5007fh;
___50071h:
		eax = D(esp+0x138);
		D(esp+0xc4) = eax;
___5007fh:
		eax = D(esp+0xc4);
		edx = D(___243c60h);
		D(esp+0xe8) = eax;
		eax = 8*edx;
		eax += edx;
		eax <<= 0x2;
		eax += edx;
		eax <<= 0x2;
		edx = D(eax+___1de580h+0x60);
		edx <<= 0x2;
		esi = D(___243c60h);
		edx += eax;
		eax = 0x35e*esi;
		FPUSH((int)D(edx+___1de580h+0x64));
		ST(0) = ST(0)+(double)F32(eax+___1e6ed0h+0xac);
		ST(0) = ST(0)+180.0;
		ST(0) = ST(0)*create_double(0xea,0x2e,0x44,0x54,0xfb,0x21,0x09,0x40);
		ST(0) = ST(0)/180.0;
		ST(0) = dRMath_cos(ST(0));
		ST(0) = ST(0)*create_double(0xa3,0xae,0xb5,0xf7,0xa9,0xaa,0xea,0x3f);
		FPUSH((int)D(edx+___1de580h+0x74));
		F64(esp+0x114) = FPOP();
		ST(0) = ST(0)*F64(esp+0x114);
		F64(esp+0x10c) = ST(0);
		ST(0) = (int)ST(0);
		D(esp+0x134) = (int)FPOP();
		FPUSH((int)D(esp+0x134));
		ST(0) = F64(esp+0x10c)-ST(0);
		if(FPOP() < 0.5) goto ___50138h;
		FPUSH(1.0);
		ST(0) = ST(0)+F64(esp+0x10c);
		ST(0) = (int)ST(0);
		D(esp+0xcc) = (int)FPOP();
		goto ___50146h;
___50138h:
		eax = D(esp+0x134);
		D(esp+0xcc) = eax;
___50146h:
		eax = D(esp+0xcc);
		edi = D(___243c60h);
		D(esp+0xe4) = eax;
		eax = 0x35e*edi;
		ebx = D(esp+0xe8);
		FPUSH(F32(eax+___1e6ed0h+0xb4));
		edx = D(eax+___1e6ed0h+4);
		FPUSH(F32(eax+___1e6ed0h+0xb8));
		edx -= 0x4;
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		FPUSH(-4.0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)+ST(1);
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(1) = ST(1)+ST(0); FPOP();
		FPUSH((int)D(esp+0xe8));
		ebx += edx;
		FPUSH((int)D(esp+0xcc));
		D(___2432b8h) = ebx;
		edx = D(eax+___1e6ed0h+8);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(3) = ST(3)+ST(0); FPOP();
		ST(1) = ST(1)+ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (int)ST(0);
		ebx = D(esp+0xcc);
		edx -= 0x4;
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (int)ST(0);
		ebx += edx;
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		D(___2432b0h) = (int)FPOP();
		D(___2432bch) = ebx;
		ebx = D(___243ce8h);
		D(___2432b4h) = (int)FPOP();
		if(edi != ebx) goto ___50213h;
		p6 = 0x8000;
		p5 = 0x21000;
		eax = rand_watcom106();
		edx = eax;
		ebx = 0x2;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		edx += 0x13;
		ecx = 0x9000;
		eax = 0x9;
		goto ___502c8h;
___50213h:
		edx = 0x35e*ebx;
		FPUSH(F32(eax+___1e6ed0h+0xb8));
		FPUSH(F32(eax+___1e6ed0h+0xb4));
		ST(0) = ST(0)-(double)F32(edx+___1e6ed0h+0xb4);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)-(double)F32(edx+___1e6ed0h+0xb8);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (int)ST(0);
		D(esp+0xac) = (int)FPOP();
		edx = D(esp+0xac);
		edx = edx*edx;
		ST(0) = (int)ST(0);
		D(esp+0x90) = (int)FPOP();
		eax = D(esp+0x90);
		eax = eax*eax;
		edx += eax;
		D(esp+0xb8) = edx;
		FPUSH((int)D(esp+0xb8));
		ST(0) = dRMath_sqrt(ST(0));
		ST(0) = (int)ST(0);
		D(esp+0xb8) = (int)FPOP();
		edx = D(esp+0xb8);
		eax = 4*edx;
		eax += edx;
		edx = eax;
		eax <<= 0x4;
		ecx = 0x9000;
		eax -= edx;
		ecx -= eax;
		if((int)ecx <= 0x1000) goto ___502d5h;
		p6 = 0x8000;
		p5 = 0x21000;
		eax = rand_watcom106();
		edx = eax;
		ebx = 0x2;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		edx += 0x13;
		eax = 0xa;
___502c8h:
		edx &= 0xff;
		ebx ^= ebx;
		dRally_Sound_pushEffect(eax, edx, ebx, ecx, p5, p6);
___502d5h:
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6ed0h+0xac));
		ST(0) = ST(0)+180.0;
		ST(0) = ST(0)*create_double(0xea,0x2e,0x44,0x54,0xfb,0x21,0x09,0x40);
		ST(0) = ST(0)/180.0;
		ST(0) = dRMath_sin(ST(0));
		ST(0) = ST(0)*256.0;
		F64(esp+0x124) = ST(0);
		ST(0) = (int)ST(0);
		D(esp+0x13c) = (int)FPOP();
		FPUSH((int)D(esp+0x13c));
		ST(0) = F64(esp+0x124)-ST(0);
		if(FPOP() < 0.5) goto ___50342h;
		FPUSH(1.0);
		ST(0) = ST(0)+F64(esp+0x124);
		ST(0) = (int)ST(0);
		D(esp+0xc0) = (int)FPOP();
		goto ___50350h;
___50342h:
		eax = D(esp+0x13c);
		D(esp+0xc0) = eax;
___50350h:
		eax = D(esp+0xc0);
		ebx = D(___243c60h);
		D(esp+0xd4) = eax;
		eax = 0x35e*ebx;
		FPUSH(F32(eax+___1e6ed0h+0xac));
		ST(0) = ST(0)+180.0;
		ST(0) = ST(0)*create_double(0xea,0x2e,0x44,0x54,0xfb,0x21,0x09,0x40);
		ST(0) = ST(0)/180.0;
		ST(0) = dRMath_cos(ST(0));
		ST(0) = ST(0)*create_double(0xa3,0xae,0xb5,0xf7,0xa9,0xaa,0xea,0x3f);
		ST(0) = ST(0)*256.0;
		F64(esp+0x11c) = ST(0);
		ST(0) = (int)ST(0);
		D(esp+0x140) = (int)FPOP();
		FPUSH((int)D(esp+0x140));
		ST(0) = F64(esp+0x11c)-ST(0);
		if(FPOP() < 0.5) goto ___503d3h;
		FPUSH(1.0);
		ST(0) = ST(0)+F64(esp+0x11c);
		ST(0) = (int)ST(0);
		D(esp+0xc8) = (int)FPOP();
		goto ___503e1h;
___503d3h:
		eax = D(esp+0x140);
		D(esp+0xc8) = eax;
___503e1h:
		eax = rand_watcom106();
		edx = eax;
		ebx = 0x6;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		ecx = D(esp+0xd4);
		edx -= 0x3;
		eax = rand_watcom106();
		ecx += edx;
		edx = eax;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		esi ^= esi;
		eax = D(esp+0xc8);
		edx -= 0x3;
		D(esp+0xe0) = esi;
		eax += edx;
		D(esp+0xd4) = ecx;
		D(esp+0xd0) = eax;
___5042dh:
		eax = D(esp+0xe0);
		eax = eax*D(esp+0xd4);
		eax += 0x80;
		eax = (int)eax>>0x8;
		edx = D(esp+0xd0);
		D(esp+0xf0) = eax;
		eax = D(esp+0xe0);
		eax = eax*edx;
		eax += 0x80;
		eax = (int)eax>>0x8;
		ebx = D(esp+0xf0);
		D(esp+0xf4) = eax;
		eax = D(___2432b0h);
		eax += ebx;
		esi = D(esp+0xf4);
		D(esp+0xdc) = eax;
		eax = D(___2432b4h);
		eax += esi;
		edi = D(___243c60h);
		D(esp+0xd8) = eax;
		eax = 0x94*edi;
		D(esp+0x100) = eax;
		edx = edi;
		eax = 0x35e*edi;
		ecx ^= ecx;
		ebx = D(___243cf4h);
		D(esp+0xbc) = eax;
		edx ^= edi;
		eax ^= eax;
		if((int)ebx <= 0) goto ___506bbh;
___504cbh:
		if(ecx == D(___243c60h)) goto ___506a1h;
		ebx = D(esp+0xbc);
		FPUSH(F32(eax+___1e6ed0h+0xb4));
		esi = D(esp+0xe8);
		FPUSH(F32(ebx+___1e6ed0h+0xb4));
		ST(0) = (int)ST(0);
		ebx = D(esp+0xf0);
		D(esp+0xb8) = (int)FPOP();
		edi = D(esp+0xb8);
		ST(0) = (int)ST(0);
		ebx += edi;
		D(esp+0xb8) = (int)FPOP();
		ebx += esi;
		esi = D(esp+0xb8);
		esi -= ebx;
		ebx = esi;
		esi = D(esp+0xbc);
		FPUSH(F32(eax+___1e6ed0h+0xb8));
		FPUSH(F32(esi+___1e6ed0h+0xb8));
		ST(0) = (int)ST(0);
		esi = D(esp+0xf4);
		D(esp+0xb8) = (int)FPOP();
		edi = D(esp+0xb8);
		ST(0) = (int)ST(0);
		esi += edi;
		edi = D(esp+0xe4);
		D(esp+0xb8) = (int)FPOP();
		esi += edi;
		edi = D(esp+0xb8);
		edi -= esi;
		esi = edi;
		if((int)ebx >= 0) goto ___5058dh;
		edi = ebx;
		D(esp+0xfc) = ebx;
		edi = 0-edi;
		D(esp+0xfc) = edi;
		goto ___50594h;
___5058dh:
		D(esp+0xfc) = ebx;
___50594h:
		if((int)D(esp+0xfc) >= 0x14) goto ___506a1h;
		if((int)esi >= 0) goto ___505bah;
		edi = esi;
		D(esp+0xf8) = esi;
		edi = 0-edi;
		D(esp+0xf8) = edi;
		goto ___505c1h;
___505bah:
		D(esp+0xf8) = esi;
___505c1h:
		if((int)D(esp+0xf8) >= 0x14) goto ___506a1h;
		esi += 0x14;
		esi = 0x28*esi;
		edi = ___243d74h+D(eax+___1e6ed0h+0x10);
		ebxp = ___243d74h+D(eax+___1e6ed0h+0x10)+(int)ebx;
		ebx = edi+ebx;
		if(B(ebxp+esi+0x14) <= 3) goto ___506a1h;
		ebx = 0x82;
		esi = D(eax+___1e6ed0h+0x10a);
		D(esp+0xe0) = ebx;
		if(esi) goto ___50646h;
		ebx = 0x400;
		edi = D(edx+___1de580h+0x1c);
		ebx -= edi;
		D(esp+0xb8) = ebx;
		ebx = D(esp+0x100);
		ebx = D(ebx+___1de580h);
		FPUSH((int)D(esp+0xb8));
		ST(0) = ST(0)*(double)F32(ebx*4+___24389ch);
		FPUSH((int)D(edx+___1de580h+0x18));
		ST(1) = ST(0)-ST(1); FPOP();
		ST(0) = (int)ST(0);
		D(edx+___1de580h+0x18) = (int)FPOP();
___50646h:
		if((int)D(edx+___1de580h+0x18) >= 0) goto ___50657h;
		esi ^= esi;
		D(edx+___1de580h+0x18) = esi;
___50657h:
		ebx = D(esp+0xdc);
		D(___2432c0h) = ebx;
		ebx = D(esp+0xd8);
		D(___2432c4h) = ebx;
		ebx = D(esp+0x100);
		ebx = D(ebx+___1de580h+0x60);
		edi = D(esp+0x100);
		ebx <<= 0x2;
		ebx += edi;
		ebx = D(ebx+___1de580h+0x84);
		ebx = ebx+ebx*2;
		esi = D(esp+0xbc);
		ebx++;
		D(esi+___1e6ed0h+0x1aa) = ebx;
___506a1h:
		esi = D(___243cf4h);
		eax += 0x35e;
		ecx++;
		edx += 0x94;
		if((int)ecx < (int)esi) goto ___504cbh;
___506bbh:
		eax = D(esp+0xbc);
		edx = D(esp+0xf0);
		edi = D(esp+0xe8);
		FPUSH(F32(eax+___1e6ed0h+0xb4));
		ST(0) = (int)ST(0);
		edx += edi;
		D(esp+0xb8) = (int)FPOP();
		edx += D(esp+0xb8);
		eax = D(esp+0xbc);
		ebx = D(esp+0xe4);
		FPUSH(F32(eax+___1e6ed0h+0xb8));
		ST(0) = (int)ST(0);
		eax = D(esp+0xf4);
		D(esp+0xb8) = (int)FPOP();
		ecx = D(esp+0xb8);
		eax += ebx;
		eax += ecx;
		if((int)eax < 0) goto ___507b3h;
		if((int)eax >= (int)D(___243d2ch)) goto ___507b3h;
		if((int)edx < 0) goto ___507b3h;
		edi = D(___243d28h);
		if((int)edx >= (int)edi) goto ___507b3h;
		eax = eax*edi;
		ebx = ___243d60h;
		L(eax) = B(___243d60h+edx+eax);
		L(eax) &= 0xf;

		if(L(eax) < 4){

			esi = D(esp+0xf0);
			eax = D(___2432b0h);
			eax += esi;
			edi = D(esp+0xf4);
			D(___2432c0h) = eax;
			eax = D(___2432b4h);
			eax += edi;
			edx = D(___243c60h);
			D(___2432c4h) = eax;
			eax = 0x94*edx;
			edx = D(eax+___1de580h+0x60);
			eax = D(eax+edx*4+___1de580h+0x84);
			ecx = 0x82;
			eax = eax+eax*2;
			edx = D(esp+0xbc);
			eax++;
			D(esp+0xe0) = ecx;
			D(edx+___1e6ed0h+0x1aa) = eax;
		}
___507b3h:
		if(D(___19bd60h) != 0) goto ___509b4h;
		eax = rand_watcom106();
		edx = eax;
		ebx = 0x5;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		D(esp+0xec) = edx;
		if((int)edx >= 0x14) goto ___509b4h;
		esi = edx;
		esi <<= 0x5;
___507e6h:
		if(D(esi+___1df720h+0x18) != 0) goto ___50991h;
		edx = 0x35e*D(___243c60h);
		eax = D(esp+0xf0);
		FPUSH(F32(edx+___1e6ed0h+0xb4));
		FPUSH(F32(edx+___1e6ed0h+0xb8));
		ebx = D(esp+0xe8);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (int)ST(0);
		D(esp+0xb8) = (int)FPOP();
		ecx = D(esp+0xb8);
		ST(0) = (int)ST(0);
		eax += ecx;
		edx = D(esp+0xf4);
		ebx += eax;
		eax = D(esi+___1df720h);
		D(esp+0xb8) = (int)FPOP();
		eax += 0x8;
		edi = D(esp+0xb8);
		ebx -= eax;
		edx += edi;
		eax = ebx;
		ebx = D(esp+0xe4);
		ebx += edx;
		edx = D(esi+___1df720h+4);
		edx += 0x8;
		ebx -= edx;
		edx = ebx;
		if((int)eax >= 0) goto ___50875h;
		eax = 0-eax;
___50875h:
		if((int)eax >= 3) goto ___50991h;
		if((int)edx >= 0) goto ___50884h;
		edx = 0-edx;
___50884h:
		if((int)edx >= 3) goto ___50991h;
		eax = 0x1;
		ebx = D(___243ce8h);
		edx ^= edx;
		D(esi+___1df720h+0x18) = eax;
		eax = D(___243c60h);
		D(esi+___1df720h+0x14) = edx;
		if(eax != ebx) goto ___508d7h;
		p6 = 0x8000;
		p5 = 0x50000;
		eax = rand_watcom106();
		edx = eax;
		ebx = 0x3;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		edx += 0x7;
		ecx = 0x9000;
		goto ___5097fh;
___508d7h:
		edx = 0x35e*eax;
		eax = 0x35e*ebx;
		FPUSH(F32(edx+___1e6ed0h+0xb8));
		FPUSH(F32(edx+___1e6ed0h+0xb4));
		ST(0) = ST(0)-(double)F32(eax+___1e6ed0h+0xb4);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)-(double)F32(eax+___1e6ed0h+0xb8);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (int)ST(0);
		D(esp+0xac) = (int)FPOP();
		eax = D(esp+0xac);
		eax = eax*eax;
		ST(0) = (int)ST(0);
		D(esp+0x90) = (int)FPOP();
		edx = D(esp+0x90);
		edx = edx*edx;
		eax += edx;
		D(esp+0xb8) = eax;
		FPUSH((int)D(esp+0xb8));
		ST(0) = dRMath_sqrt(ST(0));
		ST(0) = (int)ST(0);
		D(esp+0xb8) = (int)FPOP();
		ecx = 0x4b*D(esp+0xb8);
		eax = 0x10000;
		eax -= ecx;
		ecx = eax;
		if((int)eax <= 0x1000) goto ___50991h;
		p6 = 0x8000;
		p5 = 0x50000;
		eax = rand_watcom106();
		edx = eax;
		ebx = 0x3;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		edx += 0x7;
___5097fh:
		eax = 0x3;
		edx &= 0xff;
		ebx ^= ebx;
		dRally_Sound_pushEffect(eax, edx, ebx, ecx, p5, p6);
___50991h:
		eax = D(esp+0xec);
		eax += 0x5;
		esi += 0xa0;
		D(esp+0xec) = eax;
		if((int)esi < 0x280) goto ___507e6h;
___509b4h:
		eax = D(esp+0xe0);
		eax += 0x5;
		D(esp+0xe0) = eax;
		if((int)eax < 0x82) goto ___5042dh;
		edx = D(___243c60h);
		eax = 8*edx;
		eax += edx;
		eax <<= 0x2;
		eax += edx;
		eax <<= 0x2;
		ebx = D(eax+___1de580h+0x30);
		ebx -= 0x104;
		D(eax+___1de580h+0x30) = ebx;
		if((int)ebx >= 0) goto ___50a05h;
		esi ^= esi;
		D(eax+___1de580h+0x30) = esi;
___50a05h:
		eax = 0x35e*D(___243c60h);
		edx = D(___2432c0h);
		D(eax+___1e6ed0h+0x1ba) = edx;
		edx = D(___2432c4h);
		D(eax+___1e6ed0h+0x1be) = edx;
		edx = D(___2432b0h);
		D(eax+___1e6ed0h+0x1d2) = edx;
		edx = D(___2432b4h);
		D(eax+___1e6ed0h+0x1d6) = edx;
___50a3fh:
		return;
}
