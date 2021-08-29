#include "drally.h"
#include "sfx.h"

#pragma pack(1)
typedef struct font_props_s {
	byte 	w;
	byte 	h;
	byte 	props[];
} font_props_t;

	extern byte ___1a1028h[];
	extern byte ___19eb50h[];
	extern void * ___1a1138h__VESA101h_DefaultScreenBufferB;
	extern void * ___1a10e4h__VESA101h_DefaultScreenBufferA;
	extern void * ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern byte ___185a3ch[];
	extern byte ___185a50h[];
	extern __DWORD__ ___24cc54h_sfx_volume;
	extern byte ___185a44h[];
	extern byte ___1a1ef8h[];
	extern byte ___185a48h[];
	extern byte ___1a1f64h[];
	extern void * ___1a0f98h;
	extern byte ___1a01e0h[];
	extern byte ___185c7ah[];
	extern void * ___1a10b8h;
	extern byte ___1a0ef8h[];
	extern byte ___1a103ch[];
	extern byte ___185a20h[];
	extern byte ___185ba9h[];
	extern void * ___1a10cch;
	extern byte ___185c0bh[];
	extern void * ___1a1108h;
	extern byte ___185a14h_UseWeapons[];
	extern byte ___185a4ch[];
	extern byte ___1a1ef4h[];
	extern byte ___185a28h[];

void restoreDefaultScreenBuffer(void);
void dRally_Sound_freeEffectChannel(byte ch_num);
void ___12940h(void);
void ___3892ch_cdecl(dword);
byte dRally_Sound_setPosition(dword pos_n);
void dRally_Sound_setMasterVolume(dword vol);
void ___58c60h(void);
void ___2b318h(void);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);
dword ___32230h(void);
dword ___31868h(void);
void ___33010h_cdecl(dword A1);
void ___12e78h_cdecl(byte * A1, font_props_t * A2, const char * A3, dword dst_off);
char * strupr_watcom106(char * s);
char * itoa_watcom106(int value, char * buffer, int radix);
void ___3174ch_cdecl(dword);
void ___17324h(void);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___2ab50h(void);
void ___3079ch_cdecl(dword);
byte ___5994ch(void);
void dRally_Sound_pushEffect(byte channel, byte n, dword unk, dword a0, dword a1, dword a2);
void ___281d0h_cdecl(dword, dword, dword, dword);
void ___30df8h(void);
void ___27f80h_cdecl(dword, dword, dword, dword);
void ___17248h(void);
void ___3a6a4h(void);
void ___31588h(void);
void __DISPLAY_SET_PALETTE_COLOR(dword, dword, dword, dword);

void ___3266ch(void){

	long long 	ll_tmp;
	dword 	rr, gg, bb, nn;
	dword 	eax, ebx, ecx, edx, edi, esi, ebp, cf;
	byte 	esp[0x64];
	void * 	ebxp;
	void * 	esip;


		edx = 0xffffffff;
		ebx = 0xb0;
		esi = 0x840;
		D(___1a1028h) = edx;
		___31588h();
		D(esp+0x5c) = ebx;
		edi = 0x640000;
___326a2h:
		eax = 0;
		L(eax) = B(esp+0x5c);
		nn = eax;
		edx = edi;
		eax = D(esi+___19eb50h);
		ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax =ll_tmp;
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax >> 0x10)|(edx << 0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		rr = eax;
		edx = edi;
		eax = D(esi+___19eb50h+4);
		ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax =ll_tmp;
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax >> 0x10)|(edx << 0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		gg = eax;
		edx = edi;
		eax = D(esi+___19eb50h+8);
		ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax =ll_tmp;
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax >> 0x10)|(edx << 0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		bb = eax;
		__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, nn);
		ecx = D(esp+0x5c);
		ecx++;
		esi += 0xc;
		D(esp+0x5c) = ecx;
		if((int)ecx < 0xb7) goto ___326a2h;
		memcpy(___1a10e4h__VESA101h_DefaultScreenBufferA, ___1a1138h__VESA101h_DefaultScreenBufferB, 0x4b000);
		___1a112ch__VESA101_ACTIVESCREEN_PTR = ___1a10e4h__VESA101h_DefaultScreenBufferA;
		memcpy(___1a10e4h__VESA101h_DefaultScreenBufferA+0x280*103, ___1a1138h__VESA101h_DefaultScreenBufferB+0x280*103, 0x28a00);
		___30df8h();
		if(D(___185a3ch) != 0) goto ___327bbh;
		edx = D(___185a50h);
		eax = 4*edx;
		ecx = 0x84;
		eax += edx;
		ebx = 0x94;
		eax <<= 5;
		edx = 0x76;
		eax += 0x16;
		___27f80h_cdecl(eax, edx, ebx, ecx);
___327bbh:
		if(D(___185a3ch) == 0) goto ___327c9h;
		___17248h();
___327c9h:
		restoreDefaultScreenBuffer();
		___3a6a4h();
		___12cb8h__VESA101_PRESENTSCREEN();
		if(D(___185a3ch) == 0) goto ___3284bh;
		___17324h();
		ecx = 0x28a00;
		edi = ___1a112ch__VESA101_ACTIVESCREEN_PTR+0x10180;
		memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x10180, ___1a1138h__VESA101h_DefaultScreenBufferB+0x10180, ecx);
		___30df8h();
		edx = D(___185a50h);
		eax = 4*edx;
		ebx = 0x94;
		eax += edx;
		ecx = 0x84;
		eax <<= 5;
		edx = 0x76;
		eax += 0x16;
		___27f80h_cdecl(eax, edx, ebx, ecx);
		___12cb8h__VESA101_PRESENTSCREEN();
___3284bh:
		esi = 0;
___3284dh:
		___2ab50h();
		___2ab50h();
		eax = 0x4b;
		___3079ch_cdecl(eax);
		eax = ___5994ch();
		if(L(eax) < 0x4d) goto ___32890h;
		if(L(eax) <= 0x4d) goto ___32935h;
		if(L(eax) < 0xcb) goto ___32883h;
		if(L(eax) <= 0xcb) goto ___328b0h;
		if(L(eax) == 0xcd) goto ___32935h;
		goto ___32dddh;
___32883h:
		if(L(eax) == 0x9c) goto ___329b8h;
		goto ___32dddh;
___32890h:
		if(L(eax) < 0x1c) goto ___328a3h;
		if(L(eax) <= 0x1c) goto ___329b8h;
		if(L(eax) == 0x4b) goto ___328b0h;
		goto ___32dddh;
___328a3h:
		if(L(eax) == 1) goto ___32db5h;
		goto ___32dddh;
___328b0h:
		if((int)D(___185a50h) <= 0) goto ___32dddh;
		dRally_Sound_pushEffect(1, SFX_CLICK_2, 0, ___24cc54h_sfx_volume, 0x28000, 0x8000);
		eax = 0xa0*D(___185a50h);
		ecx = 0x84;
		ebx = 0x94;
		edx = 0x76;
		eax += 0x16;
		___281d0h_cdecl(eax, edx, ebx, ecx);
		ebp = D(___185a50h);
		ebp--;
		D(___185a50h) = ebp;
		eax = 0xa0*ebp;
		ecx = 0x84;
		ebx = 0x94;
		edx = 0x76;
		eax += 0x16;
		___27f80h_cdecl(eax, edx, ebx, ecx);
		___12cb8h__VESA101_PRESENTSCREEN();
		goto ___32dddh;
___32935h:
		if((int)D(___185a50h) >= 2) goto ___32dddh;
		edi = 0x28000;
		dRally_Sound_pushEffect(1, SFX_CLICK_2, 0, ___24cc54h_sfx_volume, edi, 0x8000);
		eax = 0xa0*D(___185a50h);
		ecx = 0x84;
		ebx = 0x94;
		edx = 0x76;
		eax += 0x16;
		___281d0h_cdecl(eax, edx, ebx, ecx);
		eax = D(___185a50h);
		eax++;
		D(___185a50h) = eax;
		eax = 0xa0*eax;
		ecx = 0x84;
		ebx = 0x94;
		edx = 0x76;
		eax += 0x16;
		___27f80h_cdecl(eax, edx, ebx, ecx);
		___12cb8h__VESA101_PRESENTSCREEN();
		goto ___32dddh;
___329b8h:
		ebx = D(___185a50h);
		if(ebx != 1) goto ___329efh;
		if(ebx != D(___185a44h)) goto ___329efh;
		eax = 0x6c*D(___1a1ef8h);
		if((int)D(eax+___1a01e0h+0x1c) >= 2) goto ___329efh;
		eax = 0;
		edi = 0;
		___3174ch_cdecl(eax);
		D(___185a44h) = edi;
		goto ___32dddh;
___329efh:
		if(D(___185a50h) != 2) goto ___32a27h;
		edx = D(___185a48h);
		if(edx != 1) goto ___32a27h;
		eax = 0x6c*D(___1a1ef8h);
		if((int)D(eax+___1a01e0h+0x1c) >= 4) goto ___32a27h;
		eax = edx;
		ecx = 0;
		___3174ch_cdecl(eax);
		D(___185a48h) = ecx;
		goto ___32dddh;
___32a27h:
		eax = D(___185a50h);
		if(B(eax+___1a1f64h+3) >= 4) goto ___32d90h;
		ebp = 0x28000;
		dRally_Sound_pushEffect(1, SFX_SIGNUP_BRAKES, 0, ___24cc54h_sfx_volume, ebp, 0x8000);
		eax = D(___185a50h);
		edx = 0;
		L(edx) = B(eax+___1a1f64h+3);
		eax = 0xa0*eax;
		edx++;
		edx = 0x12*edx;
		edx += 0x106;
		edx = 0x280*edx;
		ecx = 0x2;
		esip = ___1a0f98h;
		ebxp = ___1a112ch__VESA101_ACTIVESCREEN_PTR+edx+eax+0x1b;
		edx = 0x88;

		while(1){

			edi = edx;

			while(1){

				L(eax) = B(esip);
				if(L(eax) != 0) B(ebxp) = L(eax);
				ebxp++;
				esip++;
				edi--;
				if(edi == 0) break;
			}

			ebxp += 0x280;
			ebxp -= edx;
			ecx--;
			if(ecx == 0) break;
		}

		eax = 0x6c*D(___1a1ef8h);
		ebx = 0xa;
		edx = esp+0x3c;
		itoa_watcom106(D(eax+___1a01e0h+0x48), esp+0x3c, ebx);
		L(eax) = 0;
		B(esp) = L(eax);
		ecx = strlen(esp+0x3c);
		if(ecx < 2) strcat(esp, " ");
		strcat(esp, esp+0x3c);
		strcat(esp, ".");
		strcpy(esp+0x50, ___1a01e0h+0x6c*D(___1a1ef8h));
		esi = esp+0x50;
		edi = esp;
		strupr_watcom106(esp+0x50);
		strcat(esp, esp+0x50);
		eax = D(___185a50h);
		edx = B(eax+___1a1f64h+3);
		eax = 0xa0*eax;
		edx++;
		edx = 0x12*edx;
		edx += 0x100;
		edx = 0x280*edx;
		eax += edx;
		ecx = eax+0x22;
		___12e78h_cdecl(___1a10b8h, ___185c7ah, esp, ecx);
		eax = D(___185a50h);
		ebx = 0;
		edx = eax;
		L(ebx) = B(eax+___1a1f64h+3);
		L(ecx) = B(___1a1ef8h);
		D(___1a1028h) = eax;
		B(ebx+4*edx+___1a0ef8h) = L(ecx);
		H(edx) = L(ebx);
		D(___1a103ch) = ebx;
		H(edx)++;
		ebx = 0x3;
		B(eax+___1a1f64h+3) = H(edx);
		___12cb8h__VESA101_PRESENTSCREEN();
		L(edx) = 4;
___32c39h:
		___2ab50h();
		___2ab50h();
		eax = ebx;
		___3079ch_cdecl(eax);
		if(L(edx) > B(___1a1f64h+3)) goto ___32c39h;
		if(L(edx) > B(___1a1f64h+4)) goto ___32c39h;
		if(L(edx) > B(___1a1f64h+5)) goto ___32c39h;
		ecx = 0;
		ebp = 0;
___32c66h:
		ebx = 0x14;
		eax = esp+0x3c;
		edx = ebp;
		memset(esp+0x3c, edx, ebx);
		L(eax) = B(___1a0ef8h+ecx);
		B(esp+0x50) = L(eax);
		L(eax) = B(___1a0ef8h+ecx+1);
		B(esp+0x51) = L(eax);
		L(eax) = B(___1a0ef8h+ecx+2);
		esi = ebp;
		B(esp+0x52) = L(eax);
		L(eax) = B(___1a0ef8h+ecx+3);
		edi = ecx;
		B(esp+0x53) = L(eax);
___32ca2h:
		eax = 0;
___32ca4h:
		edx = 0;
		L(edx) = B(esp+eax+0x50);
		eax++;
		L(ebx) = B(esp+edx+0x3c);
		D(esp+0x5c) = edx;
		if(L(ebx)) goto ___32ca4h;
		eax = 0;
		L(eax) = B(esp+0x51);
		if((int)eax <= (int)edx) goto ___32ccch;
		if(B(esp+eax+0x3c) != 0) goto ___32ccch;
		D(esp+0x5c) = eax;
___32ccch:
		eax = 0;
		ebx = D(esp+0x5c);
		L(eax) = B(esp+0x52);
		if((int)eax <= (int)ebx) goto ___32ce5h;
		if(B(esp+eax+0x3c) != 0) goto ___32ce5h;
		D(esp+0x5c) = eax;
___32ce5h:
		eax = 0;
		edx = D(esp+0x5c);
		L(eax) = B(esp+0x53);
		if((int)eax <= (int)edx) goto ___32cfeh;
		if(B(esp+eax+0x3c) != 0) goto ___32cfeh;
		D(esp+0x5c) = eax;
___32cfeh:
		eax = D(esp+0x5c);
		B(esp+eax+0x3c) = 1;
		L(eax) = B(esp+0x5c);
		ebx = D(___1a1ef8h);
		B(edi+___1a0ef8h) = L(eax);
		if(ebx != D(esp+0x5c)) goto ___32d23h;
		D(___1a103ch) = esi;
___32d23h:
		esi++;
		edi++;
		if((int)esi < 4) goto ___32ca2h;
		ecx += 4;
		if(ecx != 0xc) goto ___32c66h;
		eax = ___32230h();
		ecx = 0;
		edx = eax;
		D(esp+0x5c) = ecx;
		if(eax) goto ___32d52h;
		eax = ___31868h();
		ecx = eax;
___32d52h:
		if(edx) goto ___32d79h;
		if(ecx) goto ___32d79h;
___32d5ah:
		esi = D(esp+0x5c);
		___2ab50h();
		esi++;
		eax = ___5994ch();
		D(esp+0x5c) = esi;
		if(L(eax)) goto ___32d79h;
		if((int)esi < 0x118) goto ___32d5ah;
___32d79h:
		eax = 0x4;
		esi = 1;
		___33010h_cdecl(eax);
		D(___185a20h) = esi;
		goto ___32dddh;
___32d90h:
		edx = 0x1d;
		edi = 0x28000;
		ecx = ___24cc54h_sfx_volume;
		dRally_Sound_pushEffect(1, SFX_BUMMER, 0, ecx, edi, 0x8000);
___32db5h:
		L(edx) = 4;
		ebx = 0x1;
___32dbch:
		eax = ebx;
		___3079ch_cdecl(eax);
		if(L(edx) > B(___1a1f64h+3)) goto ___32dbch;
		if(L(edx) > B(___1a1f64h+4)) goto ___32dbch;
		if(L(edx) > B(___1a1f64h+5)) goto ___32dbch;
		esi = 0;
___32dddh:
		if(esi) goto ___32feeh;
		H(ebx) = B(___1a1f64h+3);
		if(H(ebx) != 4) goto ___32feeh;
		if(H(ebx) != B(___1a1f64h+4)) goto ___32feeh;
		if(H(ebx) != B(___1a1f64h+5)) goto ___32feeh;
		ecx = 0x70;
		ebx = 0x244;
		edx = 0xc8;
		eax = 0x21;
		___13248h_cdecl(eax, edx, ebx, ecx, 1);
		___12e78h_cdecl(___1a10cch, ___185ba9h, "You did not sign up in any race.", 0x232b0);
		eax = ___1a1108h;
		___12e78h_cdecl(___1a1108h, ___185c0bh, "Press any key to continue.", 0x28d50);
		___12cb8h__VESA101_PRESENTSCREEN();
		edx = 0x17;
		ecx = ___24cc54h_sfx_volume;
		ebx = 0;
		dRally_Sound_pushEffect(1, SFX_LAUGHTER, ebx, ecx, 0x25500-0x1000, 0x8000);
___32e85h:
		___2ab50h();
		eax = ___5994ch();
		if(L(eax) == 0) goto ___32e85h;
		___2b318h();
		eax = 0xffdc;
		ebp = 0x640000;
		D(esp+0x60) = eax;
___32ea6h:
		if(D(___185a14h_UseWeapons) == 0) goto ___32ec1h;
		if(D(___185a4ch) == 0) goto ___32ec1h;
		eax = D(esp+0x60);
		dRally_Sound_setMasterVolume(eax);
___32ec1h:
		___58c60h();
		esi = ebp;
		ecx = 0;
		edi = 0;
		D(esp+0x5c) = ecx;
___32ed0h:
		eax = 0;
		L(eax) = B(esp+0x5c);
		nn = eax;
		edx = esi;
		eax = D(edi+___19eb50h);
		ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax =ll_tmp;
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax >> 0x10)|(edx << 0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		rr = eax;
		edx = esi;
		eax = D(edi+___19eb50h+4);
		ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax =ll_tmp;
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax >> 0x10)|(edx << 0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		gg = eax;
		edx = esi;
		eax = D(edi+___19eb50h+8);
		ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax =ll_tmp;
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax >> 0x10)|(edx << 0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		bb = eax;
		__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, nn);
		eax = D(esp+0x5c);
		eax++;
		edi += 0xc;
		D(esp+0x5c) = eax;
		if((int)eax < 0x100) goto ___32ed0h;
		ebx = D(esp+0x60);
		ebx -= 0x51e;
		ebp -= 0x20000;
		D(esp+0x60) = ebx;
		if(ebp != 0xfffe0000) goto ___32ea6h;
		if(D(___185a14h_UseWeapons) == 0) goto ___32fadh;
		if(D(___185a4ch) == 0) goto ___32fadh;
		eax = D(___1a1ef4h);
		edi = 0x1;
		dRally_Sound_setPosition(eax);
		eax = edi;
		D(___185a28h) = edi;
		dRally_Sound_freeEffectChannel(eax);
___32fadh:
		ebp = 0;
		___12940h();
		D(esp+0x5c) = ebp;
		esi = 0;
___32fbah:
		eax = 0;
		L(eax) = B(esp+0x5c);
		nn = eax;
		rr = esi;
		gg = esi;
		bb = esi;
		__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, nn);
		eax = D(esp+0x5c);
		eax++;
		D(esp+0x5c) = eax;
		if((int)eax < 0x100) goto ___32fbah;
		eax = 1;
		esi = 1;
		___3892ch_cdecl(eax);
		D(___185a20h) = esi;
___32feeh:
		if(esi == 0) goto ___3284dh;
		return;
}
