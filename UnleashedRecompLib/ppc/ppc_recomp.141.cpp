#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82B987F0"))) PPC_WEAK_FUNC(sub_82B987F0);
PPC_FUNC_IMPL(__imp__sub_82B987F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b98834
	if (!cr6.eq) goto loc_82B98834;
	// lwz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 4);
loc_82B9881C:
	// li r5,1
	ctx.r5.s64 = 1;
loc_82B98820:
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_82B9882C:
	// bl 0x82b98158
	sub_82B98158(ctx, base);
	// b 0x82b9898c
	goto loc_82B9898C;
loc_82B98834:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// bne cr6,0x82b98860
	if (!cr6.eq) goto loc_82B98860;
	// addi r4,r28,12
	ctx.r4.s64 = r28.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfaf58
	sub_82DFAF58(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b98970
	if (cr0.eq) goto loc_82B98970;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// b 0x82b9881c
	goto loc_82B9881C;
loc_82B98860:
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bne cr6,0x82b98890
	if (!cr6.eq) goto loc_82B98890;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// bl 0x82dfaf58
	sub_82DFAF58(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b98970
	if (cr0.eq) goto loc_82B98970;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x82b98820
	goto loc_82B98820;
loc_82B98890:
	// addi r26,r28,12
	r26.s64 = r28.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82dfaf58
	sub_82DFAF58(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b98900
	if (cr0.eq) goto loc_82B98900;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82456bb0
	sub_82456BB0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r27,80(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r27,12
	ctx.r3.s64 = r27.s64 + 12;
	// bl 0x82dfaf58
	sub_82DFAF58(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b98900
	if (cr0.eq) goto loc_82B98900;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r11,33(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 33);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b988f4
	if (cr6.eq) goto loc_82B988F4;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
loc_82B988EC:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82b9882c
	goto loc_82B9882C;
loc_82B988F4:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
loc_82B988F8:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82b9882c
	goto loc_82B9882C;
loc_82B98900:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82dfaf58
	sub_82DFAF58(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b98970
	if (cr0.eq) goto loc_82B98970;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827beaf0
	sub_827BEAF0(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r27,80(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// beq cr6,0x82b98944
	if (cr6.eq) goto loc_82B98944;
	// addi r4,r27,12
	ctx.r4.s64 = r27.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfaf58
	sub_82DFAF58(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b98970
	if (cr0.eq) goto loc_82B98970;
loc_82B98944:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r11,33(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 33);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b98968
	if (cr6.eq) goto loc_82B98968;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// b 0x82b988ec
	goto loc_82B988EC;
loc_82B98968:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// b 0x82b988f8
	goto loc_82B988F8;
loc_82B98970:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b98580
	sub_82B98580(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_82B9898C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82B98998"))) PPC_WEAK_FUNC(sub_82B98998);
PPC_FUNC_IMPL(__imp__sub_82B98998) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82b95878
	sub_82B95878(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x82b989d4
	if (cr6.eq) goto loc_82B989D4;
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dfaf58
	sub_82DFAF58(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b98a30
	if (cr0.eq) goto loc_82B98A30;
loc_82B989D4:
	// li r11,0
	r11.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x823142e8
	sub_823142E8(ctx, base);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b987f0
	sub_82B987F0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82b7b7d0
	sub_82B7B7D0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b7b7d0
	sub_82B7B7D0(ctx, base);
loc_82B98A30:
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82B98A40"))) PPC_WEAK_FUNC(sub_82B98A40);
PPC_FUNC_IMPL(__imp__sub_82B98A40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82b97f50
	sub_82B97F50(ctx, base);
	// lwz r26,192(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// addi r27,r26,200
	r27.s64 = r26.s64 + 200;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82b978d8
	sub_82B978D8(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r28,12(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b98a88
	if (!cr6.eq) goto loc_82B98A88;
	// li r29,0
	r29.s64 = 0;
	// b 0x82b98a94
	goto loc_82B98A94;
loc_82B98A88:
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r29,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r29.s64 = r11.s32 >> 3;
loc_82B98A94:
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82b98ae4
	if (cr6.eq) goto loc_82B98AE4;
	// li r30,0
	r30.s64 = 0;
loc_82B98AA4:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82b98ad4
	if (!cr6.eq) goto loc_82B98AD4;
	// addi r4,r11,20
	ctx.r4.s64 = r11.s64 + 20;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r25,r1,80
	r25.s64 = ctx.r1.s64 + 80;
	// bl 0x82b98998
	sub_82B98998(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82498048
	sub_82498048(ctx, base);
loc_82B98AD4:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// blt cr6,0x82b98aa4
	if (cr6.lt) goto loc_82B98AA4;
loc_82B98AE4:
	// lwz r11,68(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b98afc
	if (cr6.eq) goto loc_82B98AFC;
	// lwz r10,72(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 72);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
loc_82B98AFC:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,212(r26)
	PPC_STORE_U32(r26.u32 + 212, r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82B98B10"))) PPC_WEAK_FUNC(sub_82B98B10);
PPC_FUNC_IMPL(__imp__sub_82B98B10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,-25360
	r11.s64 = r11.s64 + -25360;
	// addi r10,r10,-25380
	ctx.r10.s64 = ctx.r10.s64 + -25380;
	// lwz r28,192(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 192);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// stw r10,40(r29)
	PPC_STORE_U32(r29.u32 + 40, ctx.r10.u32);
	// lwz r11,68(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b98b50
	if (!cr6.eq) goto loc_82B98B50;
	// li r31,0
	r31.s64 = 0;
	// b 0x82b98b5c
	goto loc_82B98B5C;
loc_82B98B50:
	// lwz r10,72(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 72);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r31,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r31.s64 = r11.s32 >> 3;
loc_82B98B5C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b98b80
	if (cr6.eq) goto loc_82B98B80;
	// li r30,0
	r30.s64 = 0;
loc_82B98B68:
	// lwz r11,68(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 68);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bl 0x82b954f8
	sub_82B954F8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// bne 0x82b98b68
	if (!cr0.eq) goto loc_82B98B68;
loc_82B98B80:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824efa10
	sub_824EFA10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r31,192(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 192);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b98bb8
	if (cr6.eq) goto loc_82B98BB8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b98670
	sub_82B98670(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_82B98BB8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82514af8
	sub_82514AF8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82B98BC8"))) PPC_WEAK_FUNC(sub_82B98BC8);
PPC_FUNC_IMPL(__imp__sub_82B98BC8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// b 0x82b98d30
	sub_82B98D30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B98BD0"))) PPC_WEAK_FUNC(sub_82B98BD0);
PPC_FUNC_IMPL(__imp__sub_82B98BD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-25444
	ctx.r4.s64 = r11.s64 + -25444;
	// li r5,856
	ctx.r5.s64 = 856;
	// li r3,384
	ctx.r3.s64 = 384;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b98c10
	if (cr0.eq) goto loc_82B98C10;
	// bl 0x82b98718
	sub_82B98718(ctx, base);
	// b 0x82b98c14
	goto loc_82B98C14;
loc_82B98C10:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82B98C14:
	// addi r31,r31,192
	r31.s64 = r31.s64 + 192;
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82b98c38
	if (cr6.eq) goto loc_82B98C38;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82b98670
	sub_82B98670(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_82B98C38:
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r29,4
	ctx.r4.s64 = r29.s64 + 4;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r11,r31,144
	r11.s64 = r31.s64 + 144;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// stw r10,144(r31)
	PPC_STORE_U32(r31.u32 + 144, ctx.r10.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-31951
	r11.s64 = -2093940736;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stb r30,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r30.u8);
	// addi r27,r31,164
	r27.s64 = r31.s64 + 164;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r28,r11,-17504
	r28.s64 = r11.s64 + -17504;
	// stb r30,18(r31)
	PPC_STORE_U8(r31.u32 + 18, r30.u8);
	// li r29,2
	r29.s64 = 2;
	// lfs f0,2240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stb r30,19(r31)
	PPC_STORE_U8(r31.u32 + 19, r30.u8);
	// stfs f0,0(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// stb r30,20(r31)
	PPC_STORE_U8(r31.u32 + 20, r30.u8);
	// stfs f0,24(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// stb r30,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r30.u8);
	// stb r30,22(r31)
	PPC_STORE_U8(r31.u32 + 22, r30.u8);
loc_82B98C94:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822cebc8
	sub_822CEBC8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// bne 0x82b98c94
	if (!cr0.eq) goto loc_82B98C94;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82B98CD0"))) PPC_WEAK_FUNC(sub_82B98CD0);
PPC_FUNC_IMPL(__imp__sub_82B98CD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82514a50
	sub_82514A50(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,-25360
	r11.s64 = r11.s64 + -25360;
	// addi r10,r10,-25380
	ctx.r10.s64 = ctx.r10.s64 + -25380;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,192(r31)
	PPC_STORE_U32(r31.u32 + 192, ctx.r9.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82b98bd0
	sub_82B98BD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82b98a40
	sub_82B98A40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82B98D30"))) PPC_WEAK_FUNC(sub_82B98D30);
PPC_FUNC_IMPL(__imp__sub_82B98D30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82b98b10
	sub_82B98B10(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b98d60
	if (cr0.eq) goto loc_82B98D60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_82B98D60:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B98D80"))) PPC_WEAK_FUNC(sub_82B98D80);
PPC_FUNC_IMPL(__imp__sub_82B98D80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82514a50
	sub_82514A50(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,-25360
	r11.s64 = r11.s64 + -25360;
	// addi r10,r10,-25380
	ctx.r10.s64 = ctx.r10.s64 + -25380;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,192(r31)
	PPC_STORE_U32(r31.u32 + 192, ctx.r9.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82b98bd0
	sub_82B98BD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B98DE8"))) PPC_WEAK_FUNC(sub_82B98DE8);
PPC_FUNC_IMPL(__imp__sub_82B98DE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r9,145(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 145);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b98e08
	if (!cr6.eq) goto loc_82B98E08;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_82B98E08:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82b98e28
	if (!cr6.eq) goto loc_82B98E28;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// b 0x82b98e44
	goto loc_82B98E44;
loc_82B98E28:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82b98e40
	if (!cr6.eq) goto loc_82B98E40;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// b 0x82b98e44
	goto loc_82B98E44;
loc_82B98E40:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
loc_82B98E44:
	// stw r4,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B98E50"))) PPC_WEAK_FUNC(sub_82B98E50);
PPC_FUNC_IMPL(__imp__sub_82B98E50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,145(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 145);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b98e68
	if (cr6.eq) goto loc_82B98E68;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x82b98ed4
	goto loc_82B98ED4;
loc_82B98E68:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r9,145(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 145);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b98eb4
	if (!cr6.eq) goto loc_82B98EB4;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x82b98e88
	goto loc_82B98E88;
loc_82B98E80:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
loc_82B98E88:
	// lbz r9,145(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 145);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b98e80
	if (cr6.eq) goto loc_82B98E80;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82B98E9C:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82b98ec4
	if (!cr6.eq) goto loc_82B98EC4;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
loc_82B98EB4:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lbz r10,145(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 145);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b98e9c
	if (cr6.eq) goto loc_82B98E9C;
loc_82B98EC4:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,145(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 145);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82B98ED4:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B98EE0"))) PPC_WEAK_FUNC(sub_82B98EE0);
PPC_FUNC_IMPL(__imp__sub_82B98EE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r31,4(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// b 0x82b98f20
	goto loc_82B98F20;
loc_82B98EFC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82dfaf58
	sub_82DFAF58(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b98f18
	if (cr0.eq) goto loc_82B98F18;
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// b 0x82b98f20
	goto loc_82B98F20;
loc_82B98F18:
	// mr r30,r31
	r30.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_82B98F20:
	// lbz r11,145(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 145);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b98efc
	if (cr6.eq) goto loc_82B98EFC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82B98F38"))) PPC_WEAK_FUNC(sub_82B98F38);
PPC_FUNC_IMPL(__imp__sub_82B98F38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,145(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 145);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r9,145(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 145);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b98f94
	if (!cr6.eq) goto loc_82B98F94;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82b98f68
	goto loc_82B98F68;
loc_82B98F60:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_82B98F68:
	// lbz r9,145(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 145);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b98f60
	if (cr6.eq) goto loc_82B98F60;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82B98F7C:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82b98fa4
	if (!cr6.eq) goto loc_82B98FA4;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
loc_82B98F94:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lbz r10,145(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 145);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b98f7c
	if (cr6.eq) goto loc_82B98F7C;
loc_82B98FA4:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B98FB0"))) PPC_WEAK_FUNC(sub_82B98FB0);
PPC_FUNC_IMPL(__imp__sub_82B98FB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r9,145(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 145);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b98fd0
	if (!cr6.eq) goto loc_82B98FD0;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_82B98FD0:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82b98ff0
	if (!cr6.eq) goto loc_82B98FF0;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// b 0x82b9900c
	goto loc_82B9900C;
loc_82B98FF0:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82b99008
	if (!cr6.eq) goto loc_82B99008;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// b 0x82b9900c
	goto loc_82B9900C;
loc_82B99008:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
loc_82B9900C:
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B99018"))) PPC_WEAK_FUNC(sub_82B99018);
PPC_FUNC_IMPL(__imp__sub_82B99018) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822c0988
	sub_822C0988(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b99070
	if (cr0.eq) goto loc_82B99070;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-25256
	ctx.r9.s64 = r11.s64 + -25256;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82b99074
	goto loc_82B99074;
loc_82B99070:
	// li r11,0
	r11.s64 = 0;
loc_82B99074:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b990a8
	if (!cr6.eq) goto loc_82B990A8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
	// lis r11,-31951
	r11.s64 = -2093940736;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,-17496(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -17496);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82B990A8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B990C8"))) PPC_WEAK_FUNC(sub_82B990C8);
PPC_FUNC_IMPL(__imp__sub_82B990C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r6,148
	ctx.r6.s64 = 148;
	// addi r4,r10,2300
	ctx.r4.s64 = ctx.r10.s64 + 2300;
	// li r5,45
	ctx.r5.s64 = 45;
	// lwz r3,6512(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 6512);
	// bl 0x82df9d90
	sub_82DF9D90(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b99100
	if (cr0.eq) goto loc_82B99100;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82B99100:
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9910c
	if (cr0.eq) goto loc_82B9910C;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82B9910C:
	// addic. r11,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	r11.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b99118
	if (cr0.eq) goto loc_82B99118;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82B99118:
	// li r11,1
	r11.s64 = 1;
	// stb r10,145(r3)
	PPC_STORE_U8(ctx.r3.u32 + 145, ctx.r10.u8);
	// stb r11,144(r3)
	PPC_STORE_U8(ctx.r3.u32 + 144, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B99138"))) PPC_WEAK_FUNC(sub_82B99138);
PPC_FUNC_IMPL(__imp__sub_82B99138) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b98ee0
	sub_82B98EE0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x82b99188
	if (cr6.eq) goto loc_82B99188;
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dfaf58
	sub_82DFAF58(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82b99188
	if (!cr0.eq) goto loc_82B99188;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// b 0x82b99194
	goto loc_82B99194;
loc_82B99188:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82B99194:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82B991A8"))) PPC_WEAK_FUNC(sub_82B991A8);
PPC_FUNC_IMPL(__imp__sub_82B991A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82b990c8
	sub_82B990C8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,145(r3)
	PPC_STORE_U8(ctx.r3.u32 + 145, r11.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B99200"))) PPC_WEAK_FUNC(sub_82B99200);
PPC_FUNC_IMPL(__imp__sub_82B99200) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplw cr6,r29,r4
	cr6.compare<uint32_t>(r29.u32, ctx.r4.u32, xer);
	// beq cr6,0x82b9924c
	if (cr6.eq) goto loc_82B9924C;
	// subf r28,r31,r4
	r28.s64 = ctx.r4.s64 - r31.s64;
loc_82B99224:
	// addi r30,r30,-8
	r30.s64 = r30.s64 + -8;
	// addi r31,r31,-8
	r31.s64 = r31.s64 + -8;
	// add r11,r28,r31
	r11.u64 = r28.u64 + r31.u64;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// bne cr6,0x82b99224
	if (!cr6.eq) goto loc_82B99224;
loc_82B9924C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82B99258"))) PPC_WEAK_FUNC(sub_82B99258);
PPC_FUNC_IMPL(__imp__sub_82B99258) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822c0988
	sub_822C0988(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b992b0
	if (cr0.eq) goto loc_82B992B0;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-25216
	ctx.r9.s64 = r11.s64 + -25216;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82b992b4
	goto loc_82B992B4;
loc_82B992B0:
	// li r11,0
	r11.s64 = 0;
loc_82B992B4:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b992f8
	if (!cr6.eq) goto loc_82B992F8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b992d8
	if (cr6.eq) goto loc_82B992D8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_82B992D8:
	// lis r11,-31951
	r11.s64 = -2093940736;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-17496(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -17496);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82B992F8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B99318"))) PPC_WEAK_FUNC(sub_82B99318);
PPC_FUNC_IMPL(__imp__sub_82B99318) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,12(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b99344
	if (cr6.eq) goto loc_82B99344;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_82B99344:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B99358"))) PPC_WEAK_FUNC(sub_82B99358);
PPC_FUNC_IMPL(__imp__sub_82B99358) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,16383
	r11.s64 = 1073676288;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x82b99380
	if (!cr6.gt) goto loc_82B99380;
	// bl 0x8284e0a0
	sub_8284E0A0(ctx, base);
	// b 0x82b99470
	goto loc_82B99470;
loc_82B99380:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b99398
	if (cr6.eq) goto loc_82B99398;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
loc_82B99398:
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bge cr6,0x82b99470
	if (!cr6.lt) goto loc_82B99470;
	// lis r26,-31946
	r26.s64 = -2093613056;
	// rlwinm r25,r4,2,0,29
	r25.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// addi r4,r11,2300
	ctx.r4.s64 = r11.s64 + 2300;
	// li r5,45
	ctx.r5.s64 = 45;
	// lwz r3,6512(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 6512);
	// bl 0x82df9d90
	sub_82DF9D90(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r29,8(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// beq cr6,0x82b99400
	if (cr6.eq) goto loc_82B99400;
	// subf r27,r28,r11
	r27.s64 = r11.s64 - r28.s64;
loc_82B993DC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82b993f0
	if (cr6.eq) goto loc_82B993F0;
	// add r4,r27,r30
	ctx.r4.u64 = r27.u64 + r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
loc_82B993F0:
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// add r11,r27,r30
	r11.u64 = r27.u64 + r30.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bne cr6,0x82b993dc
	if (!cr6.eq) goto loc_82B993DC;
loc_82B99400:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b99414
	if (!cr6.eq) goto loc_82B99414;
	// li r27,0
	r27.s64 = 0;
	// b 0x82b99420
	goto loc_82B99420;
loc_82B99414:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi r27,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	r27.s64 = ctx.r10.s32 >> 2;
loc_82B99420:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b99458
	if (cr6.eq) goto loc_82B99458;
	// lwz r29,8(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r30,r11
	r30.u64 = r11.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// beq cr6,0x82b9944c
	if (cr6.eq) goto loc_82B9944C;
loc_82B99438:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// bne cr6,0x82b99438
	if (!cr6.eq) goto loc_82B99438;
loc_82B9944C:
	// lwz r3,6512(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 6512);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
loc_82B99458:
	// rlwinm r11,r27,2,0,29
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r28,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r28.u32);
	// add r10,r25,r28
	ctx.r10.u64 = r25.u64 + r28.u64;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_82B99470:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82B99478"))) PPC_WEAK_FUNC(sub_82B99478);
PPC_FUNC_IMPL(__imp__sub_82B99478) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d54f0
	sub_823D54F0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b994bc
	if (cr0.eq) goto loc_82B994BC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_82B994BC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B994D8"))) PPC_WEAK_FUNC(sub_82B994D8);
PPC_FUNC_IMPL(__imp__sub_82B994D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82b1c178
	sub_82B1C178(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// bl 0x82b1c178
	sub_82B1C178(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// addi r4,r30,32
	ctx.r4.s64 = r30.s64 + 32;
	// bl 0x82b1c178
	sub_82B1C178(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// addi r4,r30,48
	ctx.r4.s64 = r30.s64 + 48;
	// bl 0x82b1c178
	sub_82B1C178(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// addi r4,r30,64
	ctx.r4.s64 = r30.s64 + 64;
	// bl 0x8254e650
	sub_8254E650(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r30,80
	ctx.r4.s64 = r30.s64 + 80;
	// bl 0x8254e650
	sub_8254E650(ctx, base);
	// lwz r11,96(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// lwz r11,100(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// lwz r11,104(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B99568"))) PPC_WEAK_FUNC(sub_82B99568);
PPC_FUNC_IMPL(__imp__sub_82B99568) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822c0988
	sub_822C0988(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b995c0
	if (cr0.eq) goto loc_82B995C0;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-25236
	ctx.r9.s64 = r11.s64 + -25236;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82b995c4
	goto loc_82B995C4;
loc_82B995C0:
	// li r11,0
	r11.s64 = 0;
loc_82B995C4:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b99604
	if (!cr6.eq) goto loc_82B99604;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b995e4
	if (cr6.eq) goto loc_82B995E4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b99478
	sub_82B99478(ctx, base);
loc_82B995E4:
	// lis r11,-31951
	r11.s64 = -2093940736;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-17496(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -17496);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82B99604:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B99620"))) PPC_WEAK_FUNC(sub_82B99620);
PPC_FUNC_IMPL(__imp__sub_82B99620) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82b99478
	sub_82B99478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B99634"))) PPC_WEAK_FUNC(sub_82B99634);
PPC_FUNC_IMPL(__imp__sub_82B99634) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B99638"))) PPC_WEAK_FUNC(sub_82B99638);
PPC_FUNC_IMPL(__imp__sub_82B99638) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B99688"))) PPC_WEAK_FUNC(sub_82B99688);
PPC_FUNC_IMPL(__imp__sub_82B99688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x822c8ab0
	sub_822C8AB0(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// bl 0x822c8ab0
	sub_822C8AB0(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// addi r4,r30,32
	ctx.r4.s64 = r30.s64 + 32;
	// bl 0x822c8ab0
	sub_822C8AB0(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// addi r4,r30,48
	ctx.r4.s64 = r30.s64 + 48;
	// bl 0x822c8ab0
	sub_822C8AB0(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// addi r4,r30,64
	ctx.r4.s64 = r30.s64 + 64;
	// bl 0x8254e108
	sub_8254E108(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r30,80
	ctx.r4.s64 = r30.s64 + 80;
	// bl 0x8254e108
	sub_8254E108(ctx, base);
	// lwz r11,96(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// lwz r11,100(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// lwz r11,104(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B99718"))) PPC_WEAK_FUNC(sub_82B99718);
PPC_FUNC_IMPL(__imp__sub_82B99718) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r30,4
	r31.s64 = r30.s64 + 4;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x8257f410
	sub_8257F410(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x823d54f0
	sub_823D54F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B99770"))) PPC_WEAK_FUNC(sub_82B99770);
PPC_FUNC_IMPL(__imp__sub_82B99770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// bl 0x8254e650
	sub_8254E650(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// addi r4,r30,20
	ctx.r4.s64 = r30.s64 + 20;
	// bl 0x82b994d8
	sub_82B994D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B997C8"))) PPC_WEAK_FUNC(sub_82B997C8);
PPC_FUNC_IMPL(__imp__sub_82B997C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82dfb8f0
	sub_82DFB8F0(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// bl 0x8254e108
	sub_8254E108(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// addi r4,r30,20
	ctx.r4.s64 = r30.s64 + 20;
	// bl 0x82b99688
	sub_82B99688(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B99820"))) PPC_WEAK_FUNC(sub_82B99820);
PPC_FUNC_IMPL(__imp__sub_82B99820) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// li r6,148
	ctx.r6.s64 = 148;
	// lwz r3,6512(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 6512);
	// addi r4,r10,2300
	ctx.r4.s64 = ctx.r10.s64 + 2300;
	// li r5,45
	ctx.r5.s64 = 45;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// bl 0x82df9d90
	sub_82DF9D90(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82b99898
	if (cr0.eq) goto loc_82B99898;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// addi r30,r31,12
	r30.s64 = r31.s64 + 12;
	// stw r28,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r28.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r27,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r27.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// addi r4,r29,4
	ctx.r4.s64 = r29.s64 + 4;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x82b99770
	sub_82B99770(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r26,144(r31)
	PPC_STORE_U8(r31.u32 + 144, r26.u8);
	// stb r11,145(r31)
	PPC_STORE_U8(r31.u32 + 145, r11.u8);
loc_82B99898:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82B998A8"))) PPC_WEAK_FUNC(sub_82B998A8);
PPC_FUNC_IMPL(__imp__sub_82B998A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r11,496
	r11.s64 = 32505856;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// ori r11,r11,31774
	r11.u64 = r11.u64 | 31774;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x82b99920
	if (cr6.lt) goto loc_82B99920;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23004
	ctx.r4.s64 = r11.s64 + -23004;
	// bl 0x822c30c0
	sub_822C30C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822c7380
	sub_822C7380(ctx, base);
	// bl 0x822c1ca8
	sub_822C1CA8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-24916
	r11.s64 = r11.s64 + -24916;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// bl 0x822c2978
	sub_822C2978(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c2248
	sub_822C2248(ctx, base);
loc_82B99920:
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b99820
	sub_82B99820(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// bne cr6,0x82b9996c
	if (!cr6.eq) goto loc_82B9996C;
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// b 0x82b999a4
	goto loc_82B999A4;
loc_82B9996C:
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b99990
	if (cr0.eq) goto loc_82B99990;
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x82b999a8
	if (!cr6.eq) goto loc_82B999A8;
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// b 0x82b999a8
	goto loc_82B999A8;
loc_82B99990:
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x82b999a8
	if (!cr6.eq) goto loc_82B999A8;
loc_82B999A4:
	// stw r28,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r28.u32);
loc_82B999A8:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r11,r28,4
	r11.s64 = r28.s64 + 4;
	// li r29,1
	r29.s64 = 1;
	// mr r31,r28
	r31.u64 = r28.u64;
	// lbz r10,144(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 144);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b99ab0
	if (!cr6.eq) goto loc_82B99AB0;
	// li r27,0
	r27.s64 = 0;
loc_82B999C8:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82b99a2c
	if (!cr6.eq) goto loc_82B99A2C;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r9,144(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 144);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b99a3c
	if (cr6.eq) goto loc_82B99A3C;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x82b99a04
	if (!cr6.eq) goto loc_82B99A04;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82b98fb0
	sub_82B98FB0(ctx, base);
loc_82B99A04:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r29,144(r11)
	PPC_STORE_U8(r11.u32 + 144, r29.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stb r27,144(r11)
	PPC_STORE_U8(r11.u32 + 144, r27.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x82b98de8
	sub_82B98DE8(ctx, base);
	// b 0x82b99a9c
	goto loc_82B99A9C;
loc_82B99A2C:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,144(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 144);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b99a60
	if (!cr6.eq) goto loc_82B99A60;
loc_82B99A3C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stb r29,144(r9)
	PPC_STORE_U8(ctx.r9.u32 + 144, r29.u8);
	// stb r29,144(r10)
	PPC_STORE_U8(ctx.r10.u32 + 144, r29.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r27,144(r10)
	PPC_STORE_U8(ctx.r10.u32 + 144, r27.u8);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x82b99a9c
	goto loc_82B99A9C;
loc_82B99A60:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x82b99a78
	if (!cr6.eq) goto loc_82B99A78;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82b98de8
	sub_82B98DE8(ctx, base);
loc_82B99A78:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r29,144(r11)
	PPC_STORE_U8(r11.u32 + 144, r29.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stb r27,144(r11)
	PPC_STORE_U8(r11.u32 + 144, r27.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x82b98fb0
	sub_82B98FB0(ctx, base);
loc_82B99A9C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// lbz r10,144(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 144);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b999c8
	if (cr6.eq) goto loc_82B999C8;
loc_82B99AB0:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r28,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r28.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stb r29,144(r11)
	PPC_STORE_U8(r11.u32 + 144, r29.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82B99AD0"))) PPC_WEAK_FUNC(sub_82B99AD0);
PPC_FUNC_IMPL(__imp__sub_82B99AD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// li r25,1
	r25.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r28,r25
	r28.u64 = r25.u64;
	// lwz r30,4(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r29,4(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// b 0x82b99b24
	goto loc_82B99B24;
loc_82B99AFC:
	// addi r4,r29,12
	ctx.r4.s64 = r29.s64 + 12;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r30,r29
	r30.u64 = r29.u64;
	// bl 0x82dfaf58
	sub_82DFAF58(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b99b20
	if (cr0.eq) goto loc_82B99B20;
	// lwz r29,0(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// b 0x82b99b24
	goto loc_82B99B24;
loc_82B99B20:
	// lwz r29,8(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 8);
loc_82B99B24:
	// lbz r11,145(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 145);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b99afc
	if (cr6.eq) goto loc_82B99AFC;
	// mr r29,r30
	r29.u64 = r30.u64;
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// beq 0x82b99b84
	if (cr0.eq) goto loc_82B99B84;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x82b99b7c
	if (!cr6.eq) goto loc_82B99B7C;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82B99B58:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// bl 0x82b998a8
	sub_82B998A8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stb r25,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r25.u8);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x82b99bb0
	goto loc_82B99BB0;
loc_82B99B7C:
	// bl 0x82b98e50
	sub_82B98E50(ctx, base);
	// lwz r29,80(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82B99B84:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r29,12
	ctx.r3.s64 = r29.s64 + 12;
	// bl 0x82dfaf58
	sub_82DFAF58(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b99ba4
	if (cr0.eq) goto loc_82B99BA4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x82b99b58
	goto loc_82B99B58;
loc_82B99BA4:
	// li r11,0
	r11.s64 = 0;
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// stb r11,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r11.u8);
loc_82B99BB0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82B99BC0"))) PPC_WEAK_FUNC(sub_82B99BC0);
PPC_FUNC_IMPL(__imp__sub_82B99BC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// stw r31,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, r31.u32);
	// lbz r11,145(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 145);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b99c2c
	if (cr6.eq) goto loc_82B99C2C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,16264
	ctx.r4.s64 = r11.s64 + 16264;
	// bl 0x822c30c0
	sub_822C30C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822c2ed0
	sub_822C2ED0(ctx, base);
	// bl 0x822c1ca8
	sub_822C1CA8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,16244
	r11.s64 = r11.s64 + 16244;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// bl 0x822c2978
	sub_822C2978(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c2248
	sub_822C2248(ctx, base);
loc_82B99C2C:
	// addi r3,r1,260
	ctx.r3.s64 = ctx.r1.s64 + 260;
	// mr r27,r31
	r27.u64 = r31.u64;
	// bl 0x82b98f38
	sub_82B98F38(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lbz r10,145(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 145);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r25,260(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// beq cr6,0x82b99c54
	if (cr6.eq) goto loc_82B99C54;
	// lwz r28,8(r27)
	r28.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// b 0x82b99c78
	goto loc_82B99C78;
loc_82B99C54:
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// lbz r10,145(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 145);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b99c6c
	if (cr6.eq) goto loc_82B99C6C;
	// mr r28,r11
	r28.u64 = r11.u64;
	// b 0x82b99c78
	goto loc_82B99C78;
loc_82B99C6C:
	// lwz r28,8(r25)
	r28.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// cmplw cr6,r25,r27
	cr6.compare<uint32_t>(r25.u32, r27.u32, xer);
	// bne cr6,0x82b99d50
	if (!cr6.eq) goto loc_82B99D50;
loc_82B99C78:
	// lbz r11,145(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 145);
	// lwz r31,4(r27)
	r31.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b99c8c
	if (!cr6.eq) goto loc_82B99C8C;
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
loc_82B99C8C:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, xer);
	// bne cr6,0x82b99ca4
	if (!cr6.eq) goto loc_82B99CA4;
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
	// b 0x82b99cbc
	goto loc_82B99CBC;
loc_82B99CA4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bne cr6,0x82b99cb8
	if (!cr6.eq) goto loc_82B99CB8;
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// b 0x82b99cbc
	goto loc_82B99CBC;
loc_82B99CB8:
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
loc_82B99CBC:
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bne cr6,0x82b99d04
	if (!cr6.eq) goto loc_82B99D04;
	// lbz r11,145(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 145);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b99ce0
	if (cr6.eq) goto loc_82B99CE0;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// b 0x82b99d00
	goto loc_82B99D00;
loc_82B99CE0:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// b 0x82b99cf4
	goto loc_82B99CF4;
loc_82B99CEC:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_82B99CF4:
	// lbz r8,145(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 145);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82b99cec
	if (cr6.eq) goto loc_82B99CEC;
loc_82B99D00:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82B99D04:
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r11,8(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bne cr6,0x82b99de4
	if (!cr6.eq) goto loc_82B99DE4;
	// lbz r11,145(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 145);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b99d28
	if (cr6.eq) goto loc_82B99D28;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// b 0x82b99d48
	goto loc_82B99D48;
loc_82B99D28:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// b 0x82b99d3c
	goto loc_82B99D3C;
loc_82B99D34:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
loc_82B99D3C:
	// lbz r8,145(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 145);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82b99d34
	if (cr6.eq) goto loc_82B99D34;
loc_82B99D48:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x82b99de4
	goto loc_82B99DE4;
loc_82B99D50:
	// stw r25,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r25.u32);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// bne cr6,0x82b99d70
	if (!cr6.eq) goto loc_82B99D70;
	// mr r31,r25
	r31.u64 = r25.u64;
	// b 0x82b99d98
	goto loc_82B99D98;
loc_82B99D70:
	// lbz r11,145(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 145);
	// lwz r31,4(r25)
	r31.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b99d84
	if (!cr6.eq) goto loc_82B99D84;
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
loc_82B99D84:
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// stw r11,8(r25)
	PPC_STORE_U32(r25.u32 + 8, r11.u32);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// stw r25,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r25.u32);
loc_82B99D98:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, xer);
	// bne cr6,0x82b99db0
	if (!cr6.eq) goto loc_82B99DB0;
	// stw r25,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r25.u32);
	// b 0x82b99dcc
	goto loc_82B99DCC;
loc_82B99DB0:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, xer);
	// bne cr6,0x82b99dc8
	if (!cr6.eq) goto loc_82B99DC8;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// b 0x82b99dcc
	goto loc_82B99DCC;
loc_82B99DC8:
	// stw r25,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r25.u32);
loc_82B99DCC:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// stw r11,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r11.u32);
	// lbz r11,144(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 144);
	// lbz r10,144(r25)
	ctx.r10.u64 = PPC_LOAD_U8(r25.u32 + 144);
	// stb r11,144(r25)
	PPC_STORE_U8(r25.u32 + 144, r11.u8);
	// stb r10,144(r27)
	PPC_STORE_U8(r27.u32 + 144, ctx.r10.u8);
loc_82B99DE4:
	// lbz r11,144(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 144);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82b99f84
	if (!cr6.eq) goto loc_82B99F84;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// li r30,1
	r30.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// beq cr6,0x82b99f80
	if (cr6.eq) goto loc_82B99F80;
	// li r29,0
	r29.s64 = 0;
loc_82B99E08:
	// lbz r11,144(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 144);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82b99f80
	if (!cr6.eq) goto loc_82B99F80;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bne cr6,0x82b99ec4
	if (!cr6.eq) goto loc_82B99EC4;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 144);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b99e48
	if (!cr6.eq) goto loc_82B99E48;
	// stb r30,144(r11)
	PPC_STORE_U8(r11.u32 + 144, r30.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stb r29,144(r31)
	PPC_STORE_U8(r31.u32 + 144, r29.u8);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82b98fb0
	sub_82B98FB0(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_82B99E48:
	// lbz r10,145(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 145);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b99f18
	if (!cr6.eq) goto loc_82B99F18;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r10,144(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 144);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82b99e74
	if (!cr6.eq) goto loc_82B99E74;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r10,144(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 144);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x82b99f14
	if (cr6.eq) goto loc_82B99F14;
loc_82B99E74:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r10,144(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 144);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82b99ea0
	if (!cr6.eq) goto loc_82B99EA0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stb r30,144(r10)
	PPC_STORE_U8(ctx.r10.u32 + 144, r30.u8);
	// stb r29,144(r11)
	PPC_STORE_U8(r11.u32 + 144, r29.u8);
	// bl 0x82b98de8
	sub_82B98DE8(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_82B99EA0:
	// lbz r10,144(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 144);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stb r10,144(r11)
	PPC_STORE_U8(r11.u32 + 144, ctx.r10.u8);
	// stb r30,144(r31)
	PPC_STORE_U8(r31.u32 + 144, r30.u8);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stb r30,144(r11)
	PPC_STORE_U8(r11.u32 + 144, r30.u8);
	// bl 0x82b98fb0
	sub_82B98FB0(ctx, base);
	// b 0x82b99f80
	goto loc_82B99F80;
loc_82B99EC4:
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 144);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b99ee8
	if (!cr6.eq) goto loc_82B99EE8;
	// stb r30,144(r11)
	PPC_STORE_U8(r11.u32 + 144, r30.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stb r29,144(r31)
	PPC_STORE_U8(r31.u32 + 144, r29.u8);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82b98de8
	sub_82B98DE8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_82B99EE8:
	// lbz r10,145(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 145);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b99f18
	if (!cr6.eq) goto loc_82B99F18;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r10,144(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 144);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82b99f34
	if (!cr6.eq) goto loc_82B99F34;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r10,144(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 144);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82b99f34
	if (!cr6.eq) goto loc_82B99F34;
loc_82B99F14:
	// stb r29,144(r11)
	PPC_STORE_U8(r11.u32 + 144, r29.u8);
loc_82B99F18:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// mr r28,r31
	r28.u64 = r31.u64;
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bne cr6,0x82b99e08
	if (!cr6.eq) goto loc_82B99E08;
	// b 0x82b99f80
	goto loc_82B99F80;
loc_82B99F34:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r10,144(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 144);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82b99f60
	if (!cr6.eq) goto loc_82B99F60;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stb r30,144(r10)
	PPC_STORE_U8(ctx.r10.u32 + 144, r30.u8);
	// stb r29,144(r11)
	PPC_STORE_U8(r11.u32 + 144, r29.u8);
	// bl 0x82b98fb0
	sub_82B98FB0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_82B99F60:
	// lbz r10,144(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 144);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stb r10,144(r11)
	PPC_STORE_U8(r11.u32 + 144, ctx.r10.u8);
	// stb r30,144(r31)
	PPC_STORE_U8(r31.u32 + 144, r30.u8);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stb r30,144(r11)
	PPC_STORE_U8(r11.u32 + 144, r30.u8);
	// bl 0x82b98de8
	sub_82B98DE8(ctx, base);
loc_82B99F80:
	// stb r30,144(r28)
	PPC_STORE_U8(r28.u32 + 144, r30.u8);
loc_82B99F84:
	// addi r3,r27,12
	ctx.r3.s64 = r27.s64 + 12;
	// bl 0x82b99718
	sub_82B99718(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,6512(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 6512);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b99fb0
	if (cr6.eq) goto loc_82B99FB0;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,8(r26)
	PPC_STORE_U32(r26.u32 + 8, r11.u32);
loc_82B99FB0:
	// stw r25,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r25.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82B99FC0"))) PPC_WEAK_FUNC(sub_82B99FC0);
PPC_FUNC_IMPL(__imp__sub_82B99FC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r30
	r31.u64 = r30.u64;
	// lbz r11,145(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 145);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b9a01c
	if (!cr6.eq) goto loc_82B9A01C;
	// lis r28,-31946
	r28.s64 = -2093613056;
loc_82B99FE8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82b99fc0
	sub_82B99FC0(ctx, base);
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82b99718
	sub_82B99718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,6512(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 6512);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
	// lbz r11,145(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 145);
	// mr r30,r31
	r30.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b99fe8
	if (cr6.eq) goto loc_82B99FE8;
loc_82B9A01C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82B9A028"))) PPC_WEAK_FUNC(sub_82B9A028);
PPC_FUNC_IMPL(__imp__sub_82B9A028) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b9a06c
	if (!cr6.eq) goto loc_82B9A06C;
	// lwz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 4);
loc_82B9A054:
	// li r5,1
	ctx.r5.s64 = 1;
loc_82B9A058:
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_82B9A064:
	// bl 0x82b998a8
	sub_82B998A8(ctx, base);
	// b 0x82b9a1c4
	goto loc_82B9A1C4;
loc_82B9A06C:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// bne cr6,0x82b9a098
	if (!cr6.eq) goto loc_82B9A098;
	// addi r4,r28,12
	ctx.r4.s64 = r28.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfaf58
	sub_82DFAF58(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9a1a8
	if (cr0.eq) goto loc_82B9A1A8;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// b 0x82b9a054
	goto loc_82B9A054;
loc_82B9A098:
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bne cr6,0x82b9a0c8
	if (!cr6.eq) goto loc_82B9A0C8;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// bl 0x82dfaf58
	sub_82DFAF58(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9a1a8
	if (cr0.eq) goto loc_82B9A1A8;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x82b9a058
	goto loc_82B9A058;
loc_82B9A0C8:
	// addi r26,r28,12
	r26.s64 = r28.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82dfaf58
	sub_82DFAF58(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9a138
	if (cr0.eq) goto loc_82B9A138;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b98e50
	sub_82B98E50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r27,80(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r27,12
	ctx.r3.s64 = r27.s64 + 12;
	// bl 0x82dfaf58
	sub_82DFAF58(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9a138
	if (cr0.eq) goto loc_82B9A138;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r11,145(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 145);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b9a12c
	if (cr6.eq) goto loc_82B9A12C;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
loc_82B9A124:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82b9a064
	goto loc_82B9A064;
loc_82B9A12C:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
loc_82B9A130:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82b9a064
	goto loc_82B9A064;
loc_82B9A138:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82dfaf58
	sub_82DFAF58(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9a1a8
	if (cr0.eq) goto loc_82B9A1A8;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b98f38
	sub_82B98F38(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r27,80(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// beq cr6,0x82b9a17c
	if (cr6.eq) goto loc_82B9A17C;
	// addi r4,r27,12
	ctx.r4.s64 = r27.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfaf58
	sub_82DFAF58(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9a1a8
	if (cr0.eq) goto loc_82B9A1A8;
loc_82B9A17C:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r11,145(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 145);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b9a1a0
	if (cr6.eq) goto loc_82B9A1A0;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// b 0x82b9a124
	goto loc_82B9A124;
loc_82B9A1A0:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// b 0x82b9a130
	goto loc_82B9A130;
loc_82B9A1A8:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b99ad0
	sub_82B99AD0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_82B9A1C4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82B9A1D0"))) PPC_WEAK_FUNC(sub_82B9A1D0);
PPC_FUNC_IMPL(__imp__sub_82B9A1D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x82b99fc0
	sub_82B99FC0(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r11,0
	r11.s64 = 0;
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9A228"))) PPC_WEAK_FUNC(sub_82B9A228);
PPC_FUNC_IMPL(__imp__sub_82B9A228) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82b98ee0
	sub_82B98EE0(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x82b9a264
	if (cr6.eq) goto loc_82B9A264;
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dfaf58
	sub_82DFAF58(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9a2d8
	if (cr0.eq) goto loc_82B9A2D8;
loc_82B9A264:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// bl 0x8257f390
	sub_8257F390(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// bl 0x82b99770
	sub_82B99770(ctx, base);
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b9a028
	sub_82B9A028(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82b99718
	sub_82B99718(ctx, base);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x8257f410
	sub_8257F410(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x823d54f0
	sub_823D54F0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_82B9A2D8:
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82B9A2E8"))) PPC_WEAK_FUNC(sub_82B9A2E8);
PPC_FUNC_IMPL(__imp__sub_82B9A2E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bne cr6,0x82b9a354
	if (!cr6.eq) goto loc_82B9A354;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x82b9a354
	if (!cr6.eq) goto loc_82B9A354;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b9a1d0
	sub_82B9A1D0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x82b9a360
	goto loc_82B9A360;
loc_82B9A334:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x82b98f38
	sub_82B98F38(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b99bc0
	sub_82B99BC0(ctx, base);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
loc_82B9A354:
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, r30.u32, xer);
	// bne cr6,0x82b9a334
	if (!cr6.eq) goto loc_82B9A334;
	// stw r5,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r5.u32);
loc_82B9A360:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82B9A370"))) PPC_WEAK_FUNC(sub_82B9A370);
PPC_FUNC_IMPL(__imp__sub_82B9A370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82b9a2e8
	sub_82B9A2E8(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,6512(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 6512);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9A3C8"))) PPC_WEAK_FUNC(sub_82B9A3C8);
PPC_FUNC_IMPL(__imp__sub_82B9A3C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// addi r31,r11,-2904
	r31.s64 = r11.s64 + -2904;
	// lwz r11,-2892(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2892);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82b9a40c
	if (!cr0.eq) goto loc_82B9A40C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,-2892(r10)
	PPC_STORE_U32(ctx.r10.u32 + -2892, r11.u32);
	// bl 0x82b991a8
	sub_82B991A8(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-22864
	ctx.r3.s64 = r11.s64 + -22864;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
loc_82B9A40C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9A428"))) PPC_WEAK_FUNC(sub_82B9A428);
PPC_FUNC_IMPL(__imp__sub_82B9A428) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r14{};
	PPCRegister r15{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0af0
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-1008(r1)
	ea = -1008 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82b9a3c8
	sub_82B9A3C8(ctx, base);
	// stw r3,588(r1)
	PPC_STORE_U32(ctx.r1.u32 + 588, ctx.r3.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x825de468
	sub_825DE468(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x82421f88
	sub_82421F88(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lwz r31,608(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 608);
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82e0ebe8
	sub_82E0EBE8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82e627e0
	sub_82E627E0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,600
	ctx.r3.s64 = ctx.r1.s64 + 600;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x825de698
	sub_825DE698(ctx, base);
	// lwz r3,692(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 692);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9a4c0
	if (cr6.eq) goto loc_82B9A4C0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9A4C0:
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// lwz r4,600(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 600);
	// bl 0x825ddd78
	sub_825DDD78(ctx, base);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// lwz r4,592(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 592);
	// bl 0x825df068
	sub_825DF068(ctx, base);
	// lwz r11,152(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b9b814
	if (cr6.eq) goto loc_82B9B814;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r26,-32244
	r26.s64 = -2113142784;
	// addi r11,r11,-24936
	r11.s64 = r11.s64 + -24936;
	// lis r20,-32243
	r20.s64 = -2113077248;
	// lis r19,-32243
	r19.s64 = -2113077248;
	// stw r11,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, r11.u32);
	// addi r10,r26,31884
	ctx.r10.s64 = r26.s64 + 31884;
	// lis r18,-32243
	r18.s64 = -2113077248;
	// lis r16,-32243
	r16.s64 = -2113077248;
	// stw r10,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r10.u32);
	// addi r26,r20,-24944
	r26.s64 = r20.s64 + -24944;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r20,r19,-24952
	r20.s64 = r19.s64 + -24952;
	// lis r25,-32243
	r25.s64 = -2113077248;
	// addi r19,r18,-24964
	r19.s64 = r18.s64 + -24964;
	// lis r17,-32243
	r17.s64 = -2113077248;
	// addi r18,r16,-24972
	r18.s64 = r16.s64 + -24972;
	// addi r16,r11,-24988
	r16.s64 = r11.s64 + -24988;
	// lis r15,-32243
	r15.s64 = -2113077248;
	// addi r10,r25,-24996
	ctx.r10.s64 = r25.s64 + -24996;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r25,r17,-25008
	r25.s64 = r17.s64 + -25008;
	// stw r10,524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 524, ctx.r10.u32);
	// addi r17,r15,-25016
	r17.s64 = r15.s64 + -25016;
	// addi r15,r11,-25020
	r15.s64 = r11.s64 + -25020;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r10,r11,-25024
	ctx.r10.s64 = r11.s64 + -25024;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// stw r10,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r10.u32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r11,r11,-25036
	r11.s64 = r11.s64 + -25036;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lfs f31,-24676(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -24676);
	f31.f64 = double(temp.f32);
	// stw r11,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, r11.u32);
	// addi r11,r10,24168
	r11.s64 = ctx.r10.s64 + 24168;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// stw r11,556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 556, r11.u32);
	// addi r10,r9,-25052
	ctx.r10.s64 = ctx.r9.s64 + -25052;
	// addi r11,r7,-25060
	r11.s64 = ctx.r7.s64 + -25060;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stw r10,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r10.u32);
	// addi r9,r8,24176
	ctx.r9.s64 = ctx.r8.s64 + 24176;
	// stw r11,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, r11.u32);
	// lis r3,-32254
	ctx.r3.s64 = -2113798144;
	// lis r28,-32243
	r28.s64 = -2113077248;
	// stw r9,440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 440, ctx.r9.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r10,r6,-31144
	ctx.r10.s64 = ctx.r6.s64 + -31144;
	// addi r11,r3,-10748
	r11.s64 = ctx.r3.s64 + -10748;
	// lis r30,-32243
	r30.s64 = -2113077248;
	// stw r10,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r10.u32);
	// addi r4,r28,-25080
	ctx.r4.s64 = r28.s64 + -25080;
	// stw r11,552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 552, r11.u32);
	// addi r9,r5,19616
	ctx.r9.s64 = ctx.r5.s64 + 19616;
	// lis r29,-32243
	r29.s64 = -2113077248;
	// stw r4,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r4.u32);
	// addi r10,r30,-25092
	ctx.r10.s64 = r30.s64 + -25092;
	// stw r9,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r9.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r31,-32253
	r31.s64 = -2113732608;
	// stw r10,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r10.u32);
	// lis r27,-32243
	r27.s64 = -2113077248;
	// lis r24,-32247
	r24.s64 = -2113339392;
	// lis r23,-32254
	r23.s64 = -2113798144;
	// lis r22,-32243
	r22.s64 = -2113077248;
	// lis r21,-32253
	r21.s64 = -2113732608;
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// addi r9,r29,-29660
	ctx.r9.s64 = r29.s64 + -29660;
	// addi r10,r11,25976
	ctx.r10.s64 = r11.s64 + 25976;
	// lis r14,-32249
	r14.s64 = -2113470464;
	// stw r9,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r9.u32);
	// addi r31,r31,-12576
	r31.s64 = r31.s64 + -12576;
	// addi r27,r27,-25104
	r27.s64 = r27.s64 + -25104;
	// addi r24,r24,26032
	r24.s64 = r24.s64 + 26032;
	// addi r23,r23,22476
	r23.s64 = r23.s64 + 22476;
	// addi r22,r22,-25124
	r22.s64 = r22.s64 + -25124;
	// addi r21,r21,25984
	r21.s64 = r21.s64 + 25984;
	// addi r28,r4,-25188
	r28.s64 = ctx.r4.s64 + -25188;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// stw r10,508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 508, ctx.r10.u32);
	// addi r10,r14,24104
	ctx.r10.s64 = r14.s64 + 24104;
	// addi r11,r11,-25200
	r11.s64 = r11.s64 + -25200;
	// stw r10,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r10.u32);
	// stw r11,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, r11.u32);
loc_82B9A63C:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x825deb60
	sub_825DEB60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82dfaf30
	sub_82DFAF30(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,83
	cr6.compare<uint32_t>(r11.u32, 83, xer);
	// bne cr6,0x82b9b7cc
	if (!cr6.eq) goto loc_82B9B7CC;
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// lwz r4,500(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,280
	ctx.r4.s64 = ctx.r1.s64 + 280;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9b7cc
	if (cr0.eq) goto loc_82B9B7CC;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// addi r3,r1,740
	ctx.r3.s64 = ctx.r1.s64 + 740;
	// stw r29,728(r1)
	PPC_STORE_U32(ctx.r1.u32 + 728, r29.u32);
	// stw r29,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, r29.u32);
	// stw r29,736(r1)
	PPC_STORE_U32(ctx.r1.u32 + 736, r29.u32);
	// bl 0x8257f390
	sub_8257F390(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x825df068
	sub_825DF068(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b9b784
	if (cr6.eq) goto loc_82B9B784;
	// b 0x82b9a6d4
	goto loc_82B9A6D4;
loc_82B9A6D0:
	// li r29,0
	r29.s64 = 0;
loc_82B9A6D4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825deb60
	sub_825DEB60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfaf30
	sub_82DFAF30(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,79
	cr6.compare<int32_t>(r11.s32, 79, xer);
	// bgt cr6,0x82b9af1c
	if (cr6.gt) goto loc_82B9AF1C;
	// beq cr6,0x82b9acc0
	if (cr6.eq) goto loc_82B9ACC0;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// beq cr6,0x82b9abbc
	if (cr6.eq) goto loc_82B9ABBC;
	// cmpwi cr6,r11,76
	cr6.compare<int32_t>(r11.s32, 76, xer);
	// beq cr6,0x82b9aa6c
	if (cr6.eq) goto loc_82B9AA6C;
	// cmpwi cr6,r11,77
	cr6.compare<int32_t>(r11.s32, 77, xer);
	// beq cr6,0x82b9a768
	if (cr6.eq) goto loc_82B9A768;
	// cmpwi cr6,r11,78
	cr6.compare<int32_t>(r11.s32, 78, xer);
	// bne cr6,0x82b9b73c
	if (!cr6.eq) goto loc_82B9B73C;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9b73c
	if (cr0.eq) goto loc_82B9B73C;
	// addi r3,r1,536
	ctx.r3.s64 = ctx.r1.s64 + 536;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825debc8
	sub_825DEBC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82dfb8f0
	sub_82DFB8F0(ctx, base);
	// addi r3,r1,536
	ctx.r3.s64 = ctx.r1.s64 + 536;
	// b 0x82b9b738
	goto loc_82B9B738;
loc_82B9A768:
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,296
	ctx.r4.s64 = ctx.r1.s64 + 296;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9b73c
	if (cr0.eq) goto loc_82B9B73C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82b9a7bc
	if (cr0.eq) goto loc_82B9A7BC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// b 0x82b9a7c0
	goto loc_82B9A7C0;
loc_82B9A7BC:
	// mr r30,r29
	r30.u64 = r29.u64;
loc_82B9A7C0:
	// stw r30,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, r30.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,380
	ctx.r3.s64 = ctx.r1.s64 + 380;
	// bl 0x82aefb58
	sub_82AEFB58(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,380
	ctx.r3.s64 = ctx.r1.s64 + 380;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// addi r4,r1,376
	ctx.r4.s64 = ctx.r1.s64 + 376;
	// addi r3,r1,772
	ctx.r3.s64 = ctx.r1.s64 + 772;
	// bl 0x82afaf88
	sub_82AFAF88(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825df068
	sub_825DF068(ctx, base);
	// lwz r30,376(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	// b 0x82b9aa34
	goto loc_82B9AA34;
loc_82B9A800:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825deb60
	sub_825DEB60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfaf30
	sub_82DFAF30(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,73
	cr6.compare<int32_t>(r11.s32, 73, xer);
	// beq cr6,0x82b9a968
	if (cr6.eq) goto loc_82B9A968;
	// cmpwi cr6,r11,77
	cr6.compare<int32_t>(r11.s32, 77, xer);
	// beq cr6,0x82b9a91c
	if (cr6.eq) goto loc_82B9A91C;
	// cmpwi cr6,r11,79
	cr6.compare<int32_t>(r11.s32, 79, xer);
	// beq cr6,0x82b9a88c
	if (cr6.eq) goto loc_82B9A88C;
	// cmpwi cr6,r11,80
	cr6.compare<int32_t>(r11.s32, 80, xer);
	// bne cr6,0x82b9a9f8
	if (!cr6.eq) goto loc_82B9A9F8;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r14,24
	r11.u64 = r14.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9a9f8
	if (cr0.eq) goto loc_82B9A9F8;
	// addi r3,r1,420
	ctx.r3.s64 = ctx.r1.s64 + 420;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x825debc8
	sub_825DEBC8(ctx, base);
	// bl 0x82b8bb10
	sub_82B8BB10(ctx, base);
	// stfs f1,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// addi r3,r1,420
	ctx.r3.s64 = ctx.r1.s64 + 420;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// li r29,1
	r29.s64 = 1;
	// b 0x82b9a9f8
	goto loc_82B9A9F8;
loc_82B9A88C:
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,312
	ctx.r4.s64 = ctx.r1.s64 + 312;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r14,24
	r11.u64 = r14.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9a8d4
	if (cr0.eq) goto loc_82B9A8D4;
	// addi r3,r1,428
	ctx.r3.s64 = ctx.r1.s64 + 428;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x825debc8
	sub_825DEBC8(ctx, base);
	// bl 0x82b8bb10
	sub_82B8BB10(ctx, base);
	// stfs f1,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 16, temp.u32);
	// addi r3,r1,428
	ctx.r3.s64 = ctx.r1.s64 + 428;
	// b 0x82b9a9f4
	goto loc_82B9A9F4;
loc_82B9A8D4:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r14,24
	r11.u64 = r14.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9a9f8
	if (cr0.eq) goto loc_82B9A9F8;
	// addi r3,r1,436
	ctx.r3.s64 = ctx.r1.s64 + 436;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x825debc8
	sub_825DEBC8(ctx, base);
	// bl 0x82b8bb10
	sub_82B8BB10(ctx, base);
	// stfs f1,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 20, temp.u32);
	// addi r3,r1,436
	ctx.r3.s64 = ctx.r1.s64 + 436;
	// b 0x82b9a9f4
	goto loc_82B9A9F4;
loc_82B9A91C:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,328
	ctx.r4.s64 = ctx.r1.s64 + 328;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r14,24
	r11.u64 = r14.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9a9f8
	if (cr0.eq) goto loc_82B9A9F8;
	// addi r3,r1,444
	ctx.r3.s64 = ctx.r1.s64 + 444;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x825debc8
	sub_825DEBC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dfb8f0
	sub_82DFB8F0(ctx, base);
	// addi r3,r1,444
	ctx.r3.s64 = ctx.r1.s64 + 444;
	// b 0x82b9a9f4
	goto loc_82B9A9F4;
loc_82B9A968:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r14,24
	r11.u64 = r14.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9a9b0
	if (cr0.eq) goto loc_82B9A9B0;
	// addi r3,r1,452
	ctx.r3.s64 = ctx.r1.s64 + 452;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x825debc8
	sub_825DEBC8(ctx, base);
	// bl 0x82b8bb10
	sub_82B8BB10(ctx, base);
	// stfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// addi r3,r1,452
	ctx.r3.s64 = ctx.r1.s64 + 452;
	// b 0x82b9a9f4
	goto loc_82B9A9F4;
loc_82B9A9B0:
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,344
	ctx.r4.s64 = ctx.r1.s64 + 344;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r14,24
	r11.u64 = r14.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9a9f8
	if (cr0.eq) goto loc_82B9A9F8;
	// addi r3,r1,460
	ctx.r3.s64 = ctx.r1.s64 + 460;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x825debc8
	sub_825DEBC8(ctx, base);
	// bl 0x82b8bb10
	sub_82B8BB10(ctx, base);
	// stfs f1,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// addi r3,r1,460
	ctx.r3.s64 = ctx.r1.s64 + 460;
loc_82B9A9F4:
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_82B9A9F8:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x825df180
	sub_825DF180(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,676(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 676);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9aa34
	if (cr6.eq) goto loc_82B9AA34;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9AA34:
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82b9a800
	if (!cr6.eq) goto loc_82B9A800;
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9aa50
	if (cr6.eq) goto loc_82B9AA50;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9AA50:
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82b9aa64
	if (!cr0.eq) goto loc_82B9AA64;
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f31
	f0.f64 = double(float(f0.f64 - f31.f64));
	// stfs f0,4(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
loc_82B9AA64:
	// lwz r3,380(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// b 0x82b9acb0
	goto loc_82B9ACB0;
loc_82B9AA6C:
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// lwz r4,468(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9b73c
	if (cr0.eq) goto loc_82B9B73C;
	// li r11,1
	r11.s64 = 1;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// stb r11,836(r1)
	PPC_STORE_U8(ctx.r1.u32 + 836, r11.u8);
	// bl 0x825df068
	sub_825DF068(ctx, base);
	// b 0x82b9aba8
	goto loc_82B9ABA8;
loc_82B9AAB0:
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x825deb60
	sub_825DEB60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82dfaf30
	sub_82DFAF30(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,73
	cr6.compare<int32_t>(r11.s32, 73, xer);
	// beq cr6,0x82b9ab24
	if (cr6.eq) goto loc_82B9AB24;
	// cmpwi cr6,r11,79
	cr6.compare<int32_t>(r11.s32, 79, xer);
	// bne cr6,0x82b9ab6c
	if (!cr6.eq) goto loc_82B9AB6C;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,360
	ctx.r4.s64 = ctx.r1.s64 + 360;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9ab6c
	if (cr0.eq) goto loc_82B9AB6C;
	// addi r3,r1,476
	ctx.r3.s64 = ctx.r1.s64 + 476;
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x825debc8
	sub_825DEBC8(ctx, base);
	// bl 0x82b8bb10
	sub_82B8BB10(ctx, base);
	// stfs f1,844(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 844, temp.u32);
	// addi r3,r1,476
	ctx.r3.s64 = ctx.r1.s64 + 476;
	// b 0x82b9ab68
	goto loc_82B9AB68;
loc_82B9AB24:
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// lwz r4,484(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9ab6c
	if (cr0.eq) goto loc_82B9AB6C;
	// addi r3,r1,492
	ctx.r3.s64 = ctx.r1.s64 + 492;
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x825debc8
	sub_825DEBC8(ctx, base);
	// bl 0x82b8bb10
	sub_82B8BB10(ctx, base);
	// stfs f1,840(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 840, temp.u32);
	// addi r3,r1,492
	ctx.r3.s64 = ctx.r1.s64 + 492;
loc_82B9AB68:
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_82B9AB6C:
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x825df180
	sub_825DF180(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,644(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 644);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9aba8
	if (cr6.eq) goto loc_82B9ABA8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9ABA8:
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82b9aab0
	if (!cr6.eq) goto loc_82B9AAB0;
	// lwz r3,172(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// b 0x82b9acb0
	goto loc_82B9ACB0;
loc_82B9ABBC:
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// lwz r4,416(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,232
	ctx.r4.s64 = ctx.r1.s64 + 232;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9b73c
	if (cr0.eq) goto loc_82B9B73C;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825df068
	sub_825DF068(ctx, base);
	// b 0x82b9aca0
	goto loc_82B9ACA0;
loc_82B9ABF8:
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// bl 0x825deb60
	sub_825DEB60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// bl 0x82dfaf30
	sub_82DFAF30(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,65
	cr6.compare<uint32_t>(r11.u32, 65, xer);
	// bne cr6,0x82b9ac64
	if (!cr6.eq) goto loc_82B9AC64;
	// addi r3,r1,316
	ctx.r3.s64 = ctx.r1.s64 + 316;
	// lwz r4,508(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,316
	ctx.r4.s64 = ctx.r1.s64 + 316;
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,316
	ctx.r3.s64 = ctx.r1.s64 + 316;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9ac64
	if (cr0.eq) goto loc_82B9AC64;
	// addi r3,r1,516
	ctx.r3.s64 = ctx.r1.s64 + 516;
	// lwz r4,200(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// bl 0x825debc8
	sub_825DEBC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,724
	ctx.r3.s64 = ctx.r1.s64 + 724;
	// bl 0x822f0e98
	sub_822F0E98(ctx, base);
	// addi r3,r1,516
	ctx.r3.s64 = ctx.r1.s64 + 516;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_82B9AC64:
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// lwz r4,200(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// bl 0x825df180
	sub_825DF180(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,708(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9aca0
	if (cr6.eq) goto loc_82B9ACA0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9ACA0:
	// lwz r4,200(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82b9abf8
	if (!cr6.eq) goto loc_82B9ABF8;
	// lwz r3,204(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
loc_82B9ACB0:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9b73c
	if (cr6.eq) goto loc_82B9B73C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
	// b 0x82b9b73c
	goto loc_82B9B73C;
loc_82B9ACC0:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9b73c
	if (cr0.eq) goto loc_82B9B73C;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825df068
	sub_825DF068(ctx, base);
	// b 0x82b9af08
	goto loc_82B9AF08;
loc_82B9ACFC:
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x825deb60
	sub_825DEB60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82dfaf30
	sub_82DFAF30(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,75
	cr6.compare<uint32_t>(r11.u32, 75, xer);
	// bne cr6,0x82b9aecc
	if (!cr6.eq) goto loc_82B9AECC;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,356
	ctx.r3.s64 = ctx.r1.s64 + 356;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,356
	ctx.r4.s64 = ctx.r1.s64 + 356;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,356
	ctx.r3.s64 = ctx.r1.s64 + 356;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9aecc
	if (cr0.eq) goto loc_82B9AECC;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,188
	ctx.r5.s64 = 188;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,396
	ctx.r3.s64 = ctx.r1.s64 + 396;
	// stw r30,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, r30.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82b99018
	sub_82B99018(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,396
	ctx.r3.s64 = ctx.r1.s64 + 396;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// addi r4,r1,392
	ctx.r4.s64 = ctx.r1.s64 + 392;
	// addi r3,r1,788
	ctx.r3.s64 = ctx.r1.s64 + 788;
	// bl 0x82afaf88
	sub_82AFAF88(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,216(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// bl 0x825df068
	sub_825DF068(ctx, base);
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b9aeac
	if (cr6.eq) goto loc_82B9AEAC;
	// lwz r30,392(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 392);
loc_82B9ADA8:
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x825deb60
	sub_825DEB60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x82dfaf30
	sub_82DFAF30(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,70
	cr6.compare<int32_t>(r11.s32, 70, xer);
	// beq cr6,0x82b9ae1c
	if (cr6.eq) goto loc_82B9AE1C;
	// cmpwi cr6,r11,79
	cr6.compare<int32_t>(r11.s32, 79, xer);
	// bne cr6,0x82b9ae64
	if (!cr6.eq) goto loc_82B9AE64;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// lwz r4,524(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 524);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,248
	ctx.r4.s64 = ctx.r1.s64 + 248;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9ae64
	if (cr0.eq) goto loc_82B9AE64;
	// addi r3,r1,424
	ctx.r3.s64 = ctx.r1.s64 + 424;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825debc8
	sub_825DEBC8(ctx, base);
	// bl 0x82b8bb10
	sub_82B8BB10(ctx, base);
	// stfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// addi r3,r1,424
	ctx.r3.s64 = ctx.r1.s64 + 424;
	// b 0x82b9ae60
	goto loc_82B9AE60;
loc_82B9AE1C:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,324
	ctx.r3.s64 = ctx.r1.s64 + 324;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,324
	ctx.r4.s64 = ctx.r1.s64 + 324;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,324
	ctx.r3.s64 = ctx.r1.s64 + 324;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9ae64
	if (cr0.eq) goto loc_82B9AE64;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825debc8
	sub_825DEBC8(ctx, base);
	// bl 0x82b8bb38
	sub_82B8BB38(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
loc_82B9AE60:
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_82B9AE64:
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825df180
	sub_825DF180(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,660(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 660);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9aea0
	if (cr6.eq) goto loc_82B9AEA0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9AEA0:
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82b9ada8
	if (!cr6.eq) goto loc_82B9ADA8;
loc_82B9AEAC:
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9aebc
	if (cr6.eq) goto loc_82B9AEBC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9AEBC:
	// lwz r3,396(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9aecc
	if (cr6.eq) goto loc_82B9AECC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9AECC:
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,616
	ctx.r3.s64 = ctx.r1.s64 + 616;
	// lwz r4,216(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// bl 0x825df180
	sub_825DF180(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,220
	ctx.r3.s64 = ctx.r1.s64 + 220;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,620(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 620);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9af08
	if (cr6.eq) goto loc_82B9AF08;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9AF08:
	// lwz r4,216(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82b9acfc
	if (!cr6.eq) goto loc_82B9ACFC;
	// lwz r3,220(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// b 0x82b9acb0
	goto loc_82B9ACB0;
loc_82B9AF1C:
	// cmpwi cr6,r11,82
	cr6.compare<int32_t>(r11.s32, 82, xer);
	// beq cr6,0x82b9b6f0
	if (cr6.eq) goto loc_82B9B6F0;
	// cmpwi cr6,r11,83
	cr6.compare<int32_t>(r11.s32, 83, xer);
	// beq cr6,0x82b9b6a4
	if (cr6.eq) goto loc_82B9B6A4;
	// cmpwi cr6,r11,84
	cr6.compare<int32_t>(r11.s32, 84, xer);
	// bne cr6,0x82b9b73c
	if (!cr6.eq) goto loc_82B9B73C;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lwz r4,432(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9b448
	if (cr0.eq) goto loc_82B9B448;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,229
	ctx.r5.s64 = 229;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b9af88
	if (cr0.eq) goto loc_82B9AF88;
	// bl 0x82b99638
	sub_82B99638(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82b9af8c
	goto loc_82B9AF8C;
loc_82B9AF88:
	// mr r30,r29
	r30.u64 = r29.u64;
loc_82B9AF8C:
	// stw r30,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, r30.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,412
	ctx.r3.s64 = ctx.r1.s64 + 412;
	// bl 0x82b99568
	sub_82B99568(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,412
	ctx.r3.s64 = ctx.r1.s64 + 412;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// addi r4,r1,408
	ctx.r4.s64 = ctx.r1.s64 + 408;
	// addi r3,r1,740
	ctx.r3.s64 = ctx.r1.s64 + 740;
	// bl 0x82afaf88
	sub_82AFAF88(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825df068
	sub_825DF068(ctx, base);
	// lwz r30,408(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	// b 0x82b9b410
	goto loc_82B9B410;
loc_82B9AFCC:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825deb60
	sub_825DEB60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfaf30
	sub_82DFAF30(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,69
	cr6.compare<int32_t>(r11.s32, 69, xer);
	// beq cr6,0x82b9b38c
	if (cr6.eq) goto loc_82B9B38C;
	// cmpwi cr6,r11,77
	cr6.compare<int32_t>(r11.s32, 77, xer);
	// beq cr6,0x82b9b2f4
	if (cr6.eq) goto loc_82B9B2F4;
	// cmpwi cr6,r11,80
	cr6.compare<int32_t>(r11.s32, 80, xer);
	// beq cr6,0x82b9b2a4
	if (cr6.eq) goto loc_82B9B2A4;
	// cmpwi cr6,r11,83
	cr6.compare<int32_t>(r11.s32, 83, xer);
	// beq cr6,0x82b9b108
	if (cr6.eq) goto loc_82B9B108;
	// cmpwi cr6,r11,84
	cr6.compare<int32_t>(r11.s32, 84, xer);
	// bne cr6,0x82b9b3d4
	if (!cr6.eq) goto loc_82B9B3D4;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// lwz r4,544(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 544);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r14,24
	r11.u64 = r14.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9b3d4
	if (cr0.eq) goto loc_82B9B3D4;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825df068
	sub_825DF068(ctx, base);
	// b 0x82b9b0f4
	goto loc_82B9B0F4;
loc_82B9B04C:
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// bl 0x825deb60
	sub_825DEB60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// bl 0x82dfaf30
	sub_82DFAF30(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,84
	cr6.compare<uint32_t>(r11.u32, 84, xer);
	// bne cr6,0x82b9b0b8
	if (!cr6.eq) goto loc_82B9B0B8;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r4,440(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 440);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r14,24
	r11.u64 = r14.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9b0b8
	if (cr0.eq) goto loc_82B9B0B8;
	// addi r3,r1,568
	ctx.r3.s64 = ctx.r1.s64 + 568;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825debc8
	sub_825DEBC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822f0e98
	sub_822F0E98(ctx, base);
	// addi r3,r1,568
	ctx.r3.s64 = ctx.r1.s64 + 568;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_82B9B0B8:
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825df180
	sub_825DF180(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,628(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9b0f4
	if (cr6.eq) goto loc_82B9B0F4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9B0F4:
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82b9b04c
	if (!cr6.eq) goto loc_82B9B04C;
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// b 0x82b9b294
	goto loc_82B9B294;
loc_82B9B108:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,332
	ctx.r3.s64 = ctx.r1.s64 + 332;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,332
	ctx.r4.s64 = ctx.r1.s64 + 332;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// addi r3,r1,332
	ctx.r3.s64 = ctx.r1.s64 + 332;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r14,24
	r11.u64 = r14.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9b150
	if (cr0.eq) goto loc_82B9B150;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825debc8
	sub_825DEBC8(ctx, base);
	// bl 0x82b8bb10
	sub_82B8BB10(ctx, base);
	// stfs f1,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 28, temp.u32);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// b 0x82b9b3d0
	goto loc_82B9B3D0;
loc_82B9B150:
	// addi r3,r1,276
	ctx.r3.s64 = ctx.r1.s64 + 276;
	// lwz r4,552(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 552);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,276
	ctx.r4.s64 = ctx.r1.s64 + 276;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// addi r3,r1,276
	ctx.r3.s64 = ctx.r1.s64 + 276;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r14,24
	r11.u64 = r14.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9b3d4
	if (cr0.eq) goto loc_82B9B3D4;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825df068
	sub_825DF068(ctx, base);
	// b 0x82b9b284
	goto loc_82B9B284;
loc_82B9B18C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825deb60
	sub_825DEB60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82dfaf30
	sub_82DFAF30(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,72
	cr6.compare<int32_t>(r11.s32, 72, xer);
	// beq cr6,0x82b9b200
	if (cr6.eq) goto loc_82B9B200;
	// cmpwi cr6,r11,87
	cr6.compare<int32_t>(r11.s32, 87, xer);
	// bne cr6,0x82b9b248
	if (!cr6.eq) goto loc_82B9B248;
	// addi r3,r1,364
	ctx.r3.s64 = ctx.r1.s64 + 364;
	// lwz r4,456(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 456);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,364
	ctx.r4.s64 = ctx.r1.s64 + 364;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// addi r3,r1,364
	ctx.r3.s64 = ctx.r1.s64 + 364;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r14,24
	r11.u64 = r14.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9b248
	if (cr0.eq) goto loc_82B9B248;
	// addi r3,r1,584
	ctx.r3.s64 = ctx.r1.s64 + 584;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825debc8
	sub_825DEBC8(ctx, base);
	// bl 0x82b8bb38
	sub_82B8BB38(ctx, base);
	// stw r3,36(r30)
	PPC_STORE_U32(r30.u32 + 36, ctx.r3.u32);
	// addi r3,r1,584
	ctx.r3.s64 = ctx.r1.s64 + 584;
	// b 0x82b9b244
	goto loc_82B9B244;
loc_82B9B200:
	// addi r3,r1,284
	ctx.r3.s64 = ctx.r1.s64 + 284;
	// lwz r4,464(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 464);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,284
	ctx.r4.s64 = ctx.r1.s64 + 284;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// addi r3,r1,284
	ctx.r3.s64 = ctx.r1.s64 + 284;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r14,24
	r11.u64 = r14.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9b248
	if (cr0.eq) goto loc_82B9B248;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825debc8
	sub_825DEBC8(ctx, base);
	// bl 0x82b8bb38
	sub_82B8BB38(ctx, base);
	// stw r3,40(r30)
	PPC_STORE_U32(r30.u32 + 40, ctx.r3.u32);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
loc_82B9B244:
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_82B9B248:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,632
	ctx.r3.s64 = ctx.r1.s64 + 632;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825df180
	sub_825DF180(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,636(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 636);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9b284
	if (cr6.eq) goto loc_82B9B284;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9B284:
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82b9b18c
	if (!cr6.eq) goto loc_82B9B18C;
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
loc_82B9B294:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9b3d4
	if (cr6.eq) goto loc_82B9B3D4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
	// b 0x82b9b3d4
	goto loc_82B9B3D4;
loc_82B9B2A4:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,340
	ctx.r3.s64 = ctx.r1.s64 + 340;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,340
	ctx.r4.s64 = ctx.r1.s64 + 340;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// addi r3,r1,340
	ctx.r3.s64 = ctx.r1.s64 + 340;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r14,24
	r11.u64 = r14.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9b3d4
	if (cr0.eq) goto loc_82B9B3D4;
	// addi r3,r1,472
	ctx.r3.s64 = ctx.r1.s64 + 472;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825debc8
	sub_825DEBC8(ctx, base);
	// bl 0x82b8bb10
	sub_82B8BB10(ctx, base);
	// stfs f1,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 24, temp.u32);
	// addi r3,r1,472
	ctx.r3.s64 = ctx.r1.s64 + 472;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// li r29,1
	r29.s64 = 1;
	// b 0x82b9b3d4
	goto loc_82B9B3D4;
loc_82B9B2F4:
	// addi r3,r1,292
	ctx.r3.s64 = ctx.r1.s64 + 292;
	// lwz r4,532(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,292
	ctx.r4.s64 = ctx.r1.s64 + 292;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// addi r3,r1,292
	ctx.r3.s64 = ctx.r1.s64 + 292;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r14,24
	r11.u64 = r14.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9b340
	if (cr0.eq) goto loc_82B9B340;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825debc8
	sub_825DEBC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// bl 0x82dfb8f0
	sub_82DFB8F0(ctx, base);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// b 0x82b9b3d0
	goto loc_82B9B3D0;
loc_82B9B340:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r14,24
	r11.u64 = r14.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9b3d4
	if (cr0.eq) goto loc_82B9B3D4;
	// addi r3,r1,540
	ctx.r3.s64 = ctx.r1.s64 + 540;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825debc8
	sub_825DEBC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,20
	ctx.r3.s64 = r30.s64 + 20;
	// bl 0x82dfb8f0
	sub_82DFB8F0(ctx, base);
	// addi r3,r1,540
	ctx.r3.s64 = ctx.r1.s64 + 540;
	// b 0x82b9b3d0
	goto loc_82B9B3D0;
loc_82B9B38C:
	// addi r3,r1,300
	ctx.r3.s64 = ctx.r1.s64 + 300;
	// lwz r4,228(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,300
	ctx.r4.s64 = ctx.r1.s64 + 300;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// addi r3,r1,300
	ctx.r3.s64 = ctx.r1.s64 + 300;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r14,24
	r11.u64 = r14.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9b3d4
	if (cr0.eq) goto loc_82B9B3D4;
	// addi r3,r1,488
	ctx.r3.s64 = ctx.r1.s64 + 488;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825debc8
	sub_825DEBC8(ctx, base);
	// bl 0x82b8bb10
	sub_82B8BB10(ctx, base);
	// stfs f1,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 32, temp.u32);
	// addi r3,r1,488
	ctx.r3.s64 = ctx.r1.s64 + 488;
loc_82B9B3D0:
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_82B9B3D4:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,648
	ctx.r3.s64 = ctx.r1.s64 + 648;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825df180
	sub_825DF180(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,652(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 652);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9b410
	if (cr6.eq) goto loc_82B9B410;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9B410:
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82b9afcc
	if (!cr6.eq) goto loc_82B9AFCC;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9b42c
	if (cr6.eq) goto loc_82B9B42C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9B42C:
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82b9b440
	if (!cr0.eq) goto loc_82B9B440;
	// lfs f0,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 28);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f31
	f0.f64 = double(float(f0.f64 - f31.f64));
	// stfs f0,24(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 24, temp.u32);
loc_82B9B440:
	// lwz r3,412(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	// b 0x82b9acb0
	goto loc_82B9ACB0;
loc_82B9B448:
	// addi r3,r1,348
	ctx.r3.s64 = ctx.r1.s64 + 348;
	// lwz r4,548(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,348
	ctx.r4.s64 = ctx.r1.s64 + 348;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,348
	ctx.r3.s64 = ctx.r1.s64 + 348;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9b658
	if (cr0.eq) goto loc_82B9B658;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,308
	ctx.r5.s64 = 308;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82b9b49c
	if (cr0.eq) goto loc_82B9B49C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// b 0x82b9b4a0
	goto loc_82B9B4A0;
loc_82B9B49C:
	// mr r30,r29
	r30.u64 = r29.u64;
loc_82B9B4A0:
	// stw r30,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, r30.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,268
	ctx.r3.s64 = ctx.r1.s64 + 268;
	// bl 0x82b99258
	sub_82B99258(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,268
	ctx.r3.s64 = ctx.r1.s64 + 268;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// addi r4,r1,264
	ctx.r4.s64 = ctx.r1.s64 + 264;
	// addi r3,r1,756
	ctx.r3.s64 = ctx.r1.s64 + 756;
	// bl 0x82afaf88
	sub_82AFAF88(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825df068
	sub_825DF068(ctx, base);
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b9b640
	if (cr6.eq) goto loc_82B9B640;
	// lwz r30,264(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
loc_82B9B4E8:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825deb60
	sub_825DEB60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82dfaf30
	sub_82DFAF30(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,69
	cr6.compare<int32_t>(r11.s32, 69, xer);
	// beq cr6,0x82b9b5b0
	if (cr6.eq) goto loc_82B9B5B0;
	// cmpwi cr6,r11,80
	cr6.compare<int32_t>(r11.s32, 80, xer);
	// beq cr6,0x82b9b564
	if (cr6.eq) goto loc_82B9B564;
	// cmpwi cr6,r11,83
	cr6.compare<int32_t>(r11.s32, 83, xer);
	// bne cr6,0x82b9b5f8
	if (!cr6.eq) goto loc_82B9B5F8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,308
	ctx.r3.s64 = ctx.r1.s64 + 308;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,308
	ctx.r4.s64 = ctx.r1.s64 + 308;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,308
	ctx.r3.s64 = ctx.r1.s64 + 308;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9b5f8
	if (cr0.eq) goto loc_82B9B5F8;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x825debc8
	sub_825DEBC8(ctx, base);
	// bl 0x82b8bb38
	sub_82B8BB38(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// b 0x82b9b5f4
	goto loc_82B9B5F4;
loc_82B9B564:
	// addi r3,r1,372
	ctx.r3.s64 = ctx.r1.s64 + 372;
	// lwz r4,556(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 556);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,372
	ctx.r4.s64 = ctx.r1.s64 + 372;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,372
	ctx.r3.s64 = ctx.r1.s64 + 372;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9b5f8
	if (cr0.eq) goto loc_82B9B5F8;
	// addi r3,r1,504
	ctx.r3.s64 = ctx.r1.s64 + 504;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x825debc8
	sub_825DEBC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dfb8f0
	sub_82DFB8F0(ctx, base);
	// addi r3,r1,504
	ctx.r3.s64 = ctx.r1.s64 + 504;
	// b 0x82b9b5f4
	goto loc_82B9B5F4;
loc_82B9B5B0:
	// addi r3,r1,236
	ctx.r3.s64 = ctx.r1.s64 + 236;
	// lwz r4,228(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,236
	ctx.r4.s64 = ctx.r1.s64 + 236;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,236
	ctx.r3.s64 = ctx.r1.s64 + 236;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9b5f8
	if (cr0.eq) goto loc_82B9B5F8;
	// addi r3,r1,564
	ctx.r3.s64 = ctx.r1.s64 + 564;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x825debc8
	sub_825DEBC8(ctx, base);
	// bl 0x82b8bb38
	sub_82B8BB38(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// addi r3,r1,564
	ctx.r3.s64 = ctx.r1.s64 + 564;
loc_82B9B5F4:
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_82B9B5F8:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,664
	ctx.r3.s64 = ctx.r1.s64 + 664;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x825df180
	sub_825DF180(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,668(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 668);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9b634
	if (cr6.eq) goto loc_82B9B634;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9B634:
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82b9b4e8
	if (!cr6.eq) goto loc_82B9B4E8;
loc_82B9B640:
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9b650
	if (cr6.eq) goto loc_82B9B650;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9B650:
	// lwz r3,268(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// b 0x82b9acb0
	goto loc_82B9ACB0;
loc_82B9B658:
	// addi r3,r1,244
	ctx.r3.s64 = ctx.r1.s64 + 244;
	// lwz r4,512(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,244
	ctx.r4.s64 = ctx.r1.s64 + 244;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,244
	ctx.r3.s64 = ctx.r1.s64 + 244;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9b73c
	if (cr0.eq) goto loc_82B9B73C;
	// addi r3,r1,572
	ctx.r3.s64 = ctx.r1.s64 + 572;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825debc8
	sub_825DEBC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,804
	ctx.r3.s64 = ctx.r1.s64 + 804;
	// bl 0x822f0e98
	sub_822F0E98(ctx, base);
	// addi r3,r1,572
	ctx.r3.s64 = ctx.r1.s64 + 572;
	// b 0x82b9b738
	goto loc_82B9B738;
loc_82B9B6A4:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,252
	ctx.r3.s64 = ctx.r1.s64 + 252;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,252
	ctx.r4.s64 = ctx.r1.s64 + 252;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,252
	ctx.r3.s64 = ctx.r1.s64 + 252;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9b73c
	if (cr0.eq) goto loc_82B9B73C;
	// addi r3,r1,520
	ctx.r3.s64 = ctx.r1.s64 + 520;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825debc8
	sub_825DEBC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,820
	ctx.r3.s64 = ctx.r1.s64 + 820;
	// bl 0x822f0e98
	sub_822F0E98(ctx, base);
	// addi r3,r1,520
	ctx.r3.s64 = ctx.r1.s64 + 520;
	// b 0x82b9b738
	goto loc_82B9B738;
loc_82B9B6F0:
	// addi r3,r1,260
	ctx.r3.s64 = ctx.r1.s64 + 260;
	// lwz r4,580(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,260
	ctx.r4.s64 = ctx.r1.s64 + 260;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,260
	ctx.r3.s64 = ctx.r1.s64 + 260;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9b73c
	if (cr0.eq) goto loc_82B9B73C;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825debc8
	sub_825DEBC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x82dfb8f0
	sub_82DFB8F0(ctx, base);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
loc_82B9B738:
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_82B9B73C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,680
	ctx.r3.s64 = ctx.r1.s64 + 680;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825df180
	sub_825DF180(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,684(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 684);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9b778
	if (cr6.eq) goto loc_82B9B778;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9B778:
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82b9a6d0
	if (!cr6.eq) goto loc_82B9A6D0;
loc_82B9B784:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9b794
	if (cr6.eq) goto loc_82B9B794;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9B794:
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r3,588(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// addi r30,r1,720
	r30.s64 = ctx.r1.s64 + 720;
	// bl 0x82b9a228
	sub_82B9A228(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82b997c8
	sub_82B997C8(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,740
	ctx.r3.s64 = ctx.r1.s64 + 740;
	// bl 0x8257f410
	sub_8257F410(ctx, base);
	// addi r3,r1,724
	ctx.r3.s64 = ctx.r1.s64 + 724;
	// bl 0x823d54f0
	sub_823D54F0(ctx, base);
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_82B9B7CC:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,696
	ctx.r3.s64 = ctx.r1.s64 + 696;
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x825df180
	sub_825DF180(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,700(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 700);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9b808
	if (cr6.eq) goto loc_82B9B808;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9B808:
	// lwz r11,152(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b9a63c
	if (!cr6.eq) goto loc_82B9A63C;
loc_82B9B814:
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9b824
	if (cr6.eq) goto loc_82B9B824;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9B824:
	// lwz r3,596(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9b834
	if (cr6.eq) goto loc_82B9B834;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9B834:
	// lwz r3,604(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 604);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9b844
	if (cr6.eq) goto loc_82B9B844;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9B844:
	// lwz r3,612(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9b854
	if (cr6.eq) goto loc_82B9B854;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9B854:
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x825de520
	sub_825DE520(ctx, base);
	// addi r1,r1,1008
	ctx.r1.s64 = ctx.r1.s64 + 1008;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x831b0b40
	return;
}

__attribute__((alias("__imp__sub_82B9B868"))) PPC_WEAK_FUNC(sub_82B9B868);
PPC_FUNC_IMPL(__imp__sub_82B9B868) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82b9a3c8
	sub_82B9A3C8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x82b99358
	sub_82B99358(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// b 0x82b9b8cc
	goto loc_82B9B8CC;
loc_82B9B8B4:
	// addi r4,r11,12
	ctx.r4.s64 = r11.s64 + 12;
	// bl 0x822f0e98
	sub_822F0E98(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b98f38
	sub_82B98F38(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82B9B8CC:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x82b9b8b4
	if (!cr6.eq) goto loc_82B9B8B4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9B8F0"))) PPC_WEAK_FUNC(sub_82B9B8F0);
PPC_FUNC_IMPL(__imp__sub_82B9B8F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b10
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r22,0
	r22.s64 = 0;
	// bl 0x82b9a3c8
	sub_82B9A3C8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b99138
	sub_82B99138(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x82b9ba7c
	if (cr6.eq) goto loc_82B9BA7C;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r23,0(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r27,r30,16
	r27.s64 = r30.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r22,1
	r22.s64 = 1;
	// bl 0x82dfb8f0
	sub_82DFB8F0(ctx, base);
	// addi r4,r27,20
	ctx.r4.s64 = r27.s64 + 20;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x82b99688
	sub_82B99688(ctx, base);
	// addi r28,r31,4
	r28.s64 = r31.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x829f87b8
	sub_829F87B8(ctx, base);
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b9b994
	if (!cr6.eq) goto loc_82B9B994;
	// li r31,0
	r31.s64 = 0;
	// b 0x82b9b9a0
	goto loc_82B9B9A0;
loc_82B9B994:
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r31,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r31.s64 = r11.s32 >> 2;
loc_82B9B9A0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82b99358
	sub_82B99358(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x82b9ba7c
	if (!cr6.gt) goto loc_82B9BA7C;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r26,0
	r26.s64 = 0;
	// mr r25,r31
	r25.u64 = r31.u64;
	// addi r24,r11,-25284
	r24.s64 = r11.s64 + -25284;
loc_82B9B9C4:
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r30,r26,r11
	r30.u64 = r26.u64 + r11.u64;
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// b 0x82b9ba2c
	goto loc_82B9BA2C;
loc_82B9B9E0:
	// subf r6,r31,r29
	ctx.r6.s64 = r29.s64 - r31.s64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb430
	sub_82DFB430(ctx, base);
	// addi r4,r29,1
	ctx.r4.s64 = r29.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82dfaf30
	sub_82DFAF30(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,108
	cr6.compare<uint32_t>(r11.u32, 108, xer);
	// bne cr6,0x82b9ba28
	if (!cr6.eq) goto loc_82B9BA28;
	// lwz r11,8(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r24
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r24.u32);
	// bl 0x82dfb298
	sub_82DFB298(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_82B9BA28:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_82B9BA2C:
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dfc180
	sub_82DFC180(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bge 0x82b9b9e0
	if (!cr0.lt) goto loc_82B9B9E0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dfb150
	sub_82DFB150(ctx, base);
	// subf r6,r31,r3
	ctx.r6.s64 = ctx.r3.s64 - r31.s64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb430
	sub_82DFB430(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822f0e98
	sub_822F0E98(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addic. r25,r25,-1
	xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// bne 0x82b9b9c4
	if (!cr0.eq) goto loc_82B9B9C4;
loc_82B9BA7C:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_82B9BA88"))) PPC_WEAK_FUNC(sub_82B9BA88);
PPC_FUNC_IMPL(__imp__sub_82B9BA88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r4,r11,-24916
	ctx.r4.s64 = r11.s64 + -24916;
	// b 0x82b9a428
	sub_82B9A428(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B9BA98"))) PPC_WEAK_FUNC(sub_82B9BA98);
PPC_FUNC_IMPL(__imp__sub_82B9BA98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r27,0(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82dd5ab8
	sub_82DD5AB8(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-24836
	ctx.r4.s64 = r11.s64 + -24836;
	// li r5,37
	ctx.r5.s64 = 37;
	// li r3,196
	ctx.r3.s64 = 196;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b9bb08
	if (cr0.eq) goto loc_82B9BB08;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82b98d80
	sub_82B98D80(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82b9bb0c
	goto loc_82B9BB0C;
loc_82B9BB08:
	// li r31,0
	r31.s64 = 0;
loc_82B9BB0C:
	// stw r31,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r31.u32);
	// addi r30,r28,4
	r30.s64 = r28.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x829c1d30
	sub_829C1D30(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x82b984f8
	sub_82B984F8(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b868e0
	sub_82B868E0(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b9bb64
	if (cr6.eq) goto loc_82B9BB64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x82b98a40
	sub_82B98A40(ctx, base);
loc_82B9BB64:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9bb74
	if (cr6.eq) goto loc_82B9BB74;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9BB74:
	// lbz r10,29(r27)
	ctx.r10.u64 = PPC_LOAD_U8(r27.u32 + 29);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r31,r11,-24892
	r31.s64 = r11.s64 + -24892;
	// beq 0x82b9bc00
	if (cr0.eq) goto loc_82B9BC00;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r10,-24848
	ctx.r5.s64 = ctx.r10.s64 + -24848;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwzx r30,r11,r31
	r30.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// bl 0x82dfba18
	sub_82DFBA18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82dfba18
	sub_82DFBA18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82b868e0
	sub_82B868E0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b9bbf0
	if (cr6.eq) goto loc_82B9BBF0;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x82b98380
	sub_82B98380(ctx, base);
loc_82B9BBF0:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9bc00
	if (cr6.eq) goto loc_82B9BC00;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9BC00:
	// lbz r11,28(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 28);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82b9bc88
	if (cr0.eq) goto loc_82B9BC88;
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// addi r10,r31,24
	ctx.r10.s64 = r31.s64 + 24;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r9,-24856
	ctx.r5.s64 = ctx.r9.s64 + -24856;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwzx r31,r11,r10
	r31.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x82dfba18
	sub_82DFBA18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x82dfba18
	sub_82DFBA18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82b868e0
	sub_82B868E0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b9bc78
	if (cr6.eq) goto loc_82B9BC78;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x82b98380
	sub_82B98380(ctx, base);
loc_82B9BC78:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9bc88
	if (cr6.eq) goto loc_82B9BC88;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9BC88:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r5,r11,-24860
	ctx.r5.s64 = r11.s64 + -24860;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfba18
	sub_82DFBA18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82b868e0
	sub_82B868E0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b9bccc
	if (cr6.eq) goto loc_82B9BCCC;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x82b98380
	sub_82B98380(ctx, base);
loc_82B9BCCC:
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9bcdc
	if (cr6.eq) goto loc_82B9BCDC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9BCDC:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r5,r11,-27280
	ctx.r5.s64 = r11.s64 + -27280;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfba18
	sub_82DFBA18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82b868e0
	sub_82B868E0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b9bd20
	if (cr6.eq) goto loc_82B9BD20;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x82b98380
	sub_82B98380(ctx, base);
loc_82B9BD20:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9bd30
	if (cr6.eq) goto loc_82B9BD30;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9BD30:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82B9BD40"))) PPC_WEAK_FUNC(sub_82B9BD40);
PPC_FUNC_IMPL(__imp__sub_82B9BD40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f1,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9BD50"))) PPC_WEAK_FUNC(sub_82B9BD50);
PPC_FUNC_IMPL(__imp__sub_82B9BD50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f1,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9BD60"))) PPC_WEAK_FUNC(sub_82B9BD60);
PPC_FUNC_IMPL(__imp__sub_82B9BD60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b9bd84
	if (!cr6.eq) goto loc_82B9BD84;
	// li r31,0
	r31.s64 = 0;
	// b 0x82b9bd90
	goto loc_82B9BD90;
loc_82B9BD84:
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r31,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r31.s64 = r11.s32 >> 3;
loc_82B9BD90:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b9bdd0
	if (cr6.eq) goto loc_82B9BDD0;
	// li r30,0
	r30.s64 = 0;
loc_82B9BD9C:
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// lwzx r11,r30,r11
	r11.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// addi r10,r11,8
	ctx.r10.s64 = r11.s64 + 8;
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r11,r10,12
	r11.s64 = ctx.r10.s64 + 12;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// stw r9,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// bne 0x82b9bd9c
	if (!cr0.eq) goto loc_82B9BD9C;
loc_82B9BDD0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82B9BDD8"))) PPC_WEAK_FUNC(sub_82B9BDD8);
PPC_FUNC_IMPL(__imp__sub_82B9BDD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,30088(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 30088);
	// bl 0x82df98c0
	sub_82DF98C0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82ae3730
	sub_82AE3730(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82ae3790
	sub_82AE3790(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r31,45(r30)
	PPC_STORE_U8(r30.u32 + 45, r31.u8);
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b9bd60
	sub_82B9BD60(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r31,32(r30)
	PPC_STORE_U8(r30.u32 + 32, r31.u8);
	// stb r11,33(r30)
	PPC_STORE_U8(r30.u32 + 33, r11.u8);
	// stb r31,34(r30)
	PPC_STORE_U8(r30.u32 + 34, r31.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9BE58"))) PPC_WEAK_FUNC(sub_82B9BE58);
PPC_FUNC_IMPL(__imp__sub_82B9BE58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9be84
	if (cr6.eq) goto loc_82B9BE84;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9BE84:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9be94
	if (cr6.eq) goto loc_82B9BE94;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9BE94:
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9bea4
	if (cr0.eq) goto loc_82B9BEA4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_82B9BEA4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9BEC0"))) PPC_WEAK_FUNC(sub_82B9BEC0);
PPC_FUNC_IMPL(__imp__sub_82B9BEC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,30088(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 30088);
	// bl 0x82df98c0
	sub_82DF98C0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,40(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r4,36(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// bl 0x82ae34a0
	sub_82AE34A0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r4,r10,-28232
	ctx.r4.s64 = ctx.r10.s64 + -28232;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r5,r11,20
	ctx.r5.s64 = r11.s64 + 20;
	// addi r30,r9,256
	r30.s64 = ctx.r9.s64 + 256;
	// lwz r29,88(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82dfb9c0
	sub_82DFB9C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82dfba18
	sub_82DFBA18(ctx, base);
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82ae37d8
	sub_82AE37D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82ae3518
	sub_82AE3518(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-24752
	ctx.r4.s64 = r11.s64 + -24752;
	// li r5,129
	ctx.r5.s64 = 129;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b9bf84
	if (cr0.eq) goto loc_82B9BF84;
	// bl 0x822cc790
	sub_822CC790(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82b9bf88
	goto loc_82B9BF88;
loc_82B9BF84:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82B9BF88:
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// bl 0x825e4880
	sub_825E4880(ctx, base);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// li r11,0
	r11.s64 = 0;
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, r11.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r30,36(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// bl 0x82de0870
	sub_82DE0870(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x82be6970
	sub_82BE6970(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// bl 0x82e06cb8
	sub_82E06CB8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r11,44(r31)
	PPC_STORE_U8(r31.u32 + 44, r11.u8);
	// stb r11,45(r31)
	PPC_STORE_U8(r31.u32 + 45, r11.u8);
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82B9BFE0"))) PPC_WEAK_FUNC(sub_82B9BFE0);
PPC_FUNC_IMPL(__imp__sub_82B9BFE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r11,44(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 44);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82b9c004
	if (!cr0.eq) goto loc_82B9C004;
	// bl 0x82b9bec0
	sub_82B9BEC0(ctx, base);
loc_82B9C004:
	// lis r11,-31946
	r11.s64 = -2093613056;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,30088(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 30088);
	// bl 0x82df98c0
	sub_82DF98C0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82ae3560
	sub_82AE3560(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,44(r31)
	PPC_STORE_U8(r31.u32 + 44, r11.u8);
	// stb r10,32(r31)
	PPC_STORE_U8(r31.u32 + 32, ctx.r10.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9C050"))) PPC_WEAK_FUNC(sub_82B9C050);
PPC_FUNC_IMPL(__imp__sub_82B9C050) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82b9c098
	if (!cr0.eq) goto loc_82B9C098;
	// lbz r11,32(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82b9c098
	if (!cr0.eq) goto loc_82B9C098;
	// lbz r11,33(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 33);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82b9c098
	if (!cr0.eq) goto loc_82B9C098;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// blt cr6,0x82b9c098
	if (cr6.lt) goto loc_82B9C098;
	// bl 0x82b9bec0
	sub_82B9BEC0(ctx, base);
loc_82B9C098:
	// lbz r11,32(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82b9c148
	if (cr0.eq) goto loc_82B9C148;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,30088(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 30088);
	// bl 0x82df98c0
	sub_82DF98C0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82ae35a8
	sub_82AE35A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9c140
	if (cr0.eq) goto loc_82B9C140;
	// lbz r11,34(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 34);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82b9c140
	if (!cr0.eq) goto loc_82B9C140;
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b9c0e8
	if (!cr6.eq) goto loc_82B9C0E8;
	// li r31,0
	r31.s64 = 0;
	// b 0x82b9c0f4
	goto loc_82B9C0F4;
loc_82B9C0E8:
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r31,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r31.s64 = r11.s32 >> 3;
loc_82B9C0F4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b9c138
	if (cr6.eq) goto loc_82B9C138;
	// addi r28,r29,36
	r28.s64 = r29.s64 + 36;
	// li r30,0
	r30.s64 = 0;
	// addi r27,r28,4
	r27.s64 = r28.s64 + 4;
loc_82B9C108:
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// bne 0x82b9c108
	if (!cr0.eq) goto loc_82B9C108;
loc_82B9C138:
	// li r11,1
	r11.s64 = 1;
	// stb r11,34(r29)
	PPC_STORE_U8(r29.u32 + 34, r11.u8);
loc_82B9C140:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
loc_82B9C148:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82B9C150"))) PPC_WEAK_FUNC(sub_82B9C150);
PPC_FUNC_IMPL(__imp__sub_82B9C150) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822c0988
	sub_822C0988(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b9c1a8
	if (cr0.eq) goto loc_82B9C1A8;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-24768
	ctx.r9.s64 = r11.s64 + -24768;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82b9c1ac
	goto loc_82B9C1AC;
loc_82B9C1A8:
	// li r11,0
	r11.s64 = 0;
loc_82B9C1AC:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b9c1ec
	if (!cr6.eq) goto loc_82B9C1EC;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b9c1cc
	if (cr6.eq) goto loc_82B9C1CC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b9be58
	sub_82B9BE58(ctx, base);
loc_82B9C1CC:
	// lis r11,-31951
	r11.s64 = -2093940736;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-17224(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -17224);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82B9C1EC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9C208"))) PPC_WEAK_FUNC(sub_82B9C208);
PPC_FUNC_IMPL(__imp__sub_82B9C208) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82b9be58
	sub_82B9BE58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B9C21C"))) PPC_WEAK_FUNC(sub_82B9C21C);
PPC_FUNC_IMPL(__imp__sub_82B9C21C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9C220"))) PPC_WEAK_FUNC(sub_82B9C220);
PPC_FUNC_IMPL(__imp__sub_82B9C220) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// addi r11,r11,-24676
	r11.s64 = r11.s64 + -24676;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82b971e8
	sub_82B971E8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9c258
	if (cr6.eq) goto loc_82B9C258;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9C258:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9C270"))) PPC_WEAK_FUNC(sub_82B9C270);
PPC_FUNC_IMPL(__imp__sub_82B9C270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r11,0
	r11.s64 = 0;
	// addi r8,r9,-24676
	ctx.r8.s64 = ctx.r9.s64 + -24676;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// addi r9,r31,4
	ctx.r9.s64 = r31.s64 + 4;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// addi r3,r9,4
	ctx.r3.s64 = ctx.r9.s64 + 4;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9C2F0"))) PPC_WEAK_FUNC(sub_82B9C2F0);
PPC_FUNC_IMPL(__imp__sub_82B9C2F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82b9c220
	sub_82B9C220(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9c320
	if (cr0.eq) goto loc_82B9C320;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_82B9C320:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9C340"))) PPC_WEAK_FUNC(sub_82B9C340);
PPC_FUNC_IMPL(__imp__sub_82B9C340) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x829f8840
	sub_829F8840(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B9C348"))) PPC_WEAK_FUNC(sub_82B9C348);
PPC_FUNC_IMPL(__imp__sub_82B9C348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82b9c270
	sub_82B9C270(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r10,-24648
	ctx.r10.s64 = ctx.r10.s64 + -24648;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// stb r11,32(r31)
	PPC_STORE_U8(r31.u32 + 32, r11.u8);
	// stb r11,33(r31)
	PPC_STORE_U8(r31.u32 + 33, r11.u8);
	// stb r11,34(r31)
	PPC_STORE_U8(r31.u32 + 34, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9C3A0"))) PPC_WEAK_FUNC(sub_82B9C3A0);
PPC_FUNC_IMPL(__imp__sub_82B9C3A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9c3cc
	if (cr6.eq) goto loc_82B9C3CC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9C3CC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b9c220
	sub_82B9C220(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9c3e4
	if (cr0.eq) goto loc_82B9C3E4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_82B9C3E4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9C400"))) PPC_WEAK_FUNC(sub_82B9C400);
PPC_FUNC_IMPL(__imp__sub_82B9C400) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,30088(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 30088);
	// bl 0x82df98c0
	sub_82DF98C0(ctx, base);
	// lbz r11,45(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 45);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82b9c444
	if (cr0.eq) goto loc_82B9C444;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82ae3730
	sub_82AE3730(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82ae3790
	sub_82AE3790(ctx, base);
loc_82B9C444:
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x829f8840
	sub_829F8840(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9C468"))) PPC_WEAK_FUNC(sub_82B9C468);
PPC_FUNC_IMPL(__imp__sub_82B9C468) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-24752
	ctx.r4.s64 = r11.s64 + -24752;
	// li r5,217
	ctx.r5.s64 = 217;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b9c4b4
	if (cr0.eq) goto loc_82B9C4B4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82b9c348
	sub_82B9C348(ctx, base);
	// b 0x82b9c4b8
	goto loc_82B9C4B8;
loc_82B9C4B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B9C4B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9C4D0"))) PPC_WEAK_FUNC(sub_82B9C4D0);
PPC_FUNC_IMPL(__imp__sub_82B9C4D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r25,0
	r25.s64 = 0;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b9c4fc
	if (!cr6.eq) goto loc_82B9C4FC;
	// mr r31,r25
	r31.u64 = r25.u64;
	// b 0x82b9c508
	goto loc_82B9C508;
loc_82B9C4FC:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r31,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r31.s64 = r11.s32 >> 2;
loc_82B9C508:
	// addi r26,r29,16
	r26.s64 = r29.s64 + 16;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82591920
	sub_82591920(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b9c63c
	if (cr6.eq) goto loc_82B9C63C;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r28,r25
	r28.u64 = r25.u64;
	// mr r24,r31
	r24.u64 = r31.u64;
	// addi r27,r11,-24752
	r27.s64 = r11.s64 + -24752;
loc_82B9C530:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,237
	ctx.r5.s64 = 237;
	// li r3,16
	ctx.r3.s64 = 16;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r30,r11,r28
	r30.u64 = r11.u64 + r28.u64;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b9c570
	if (cr0.eq) goto loc_82B9C570;
	// stw r25,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r25.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r25,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r25.u32);
	// stw r25,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r25.u32);
	// stw r25,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r25.u32);
	// b 0x82b9c574
	goto loc_82B9C574;
loc_82B9C570:
	// mr r31,r25
	r31.u64 = r25.u64;
loc_82B9C574:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82b9c150
	sub_82B9C150(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82afaf88
	sub_82AFAF88(ctx, base);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// bl 0x82b956c8
	sub_82B956C8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82e5e6c8
	sub_82E5E6C8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e34e78
	sub_82E34E78(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9c5f8
	if (cr6.eq) goto loc_82B9C5F8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9C5F8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r10,r31,8
	ctx.r10.s64 = r31.s64 + 8;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e5e6e0
	sub_82E5E6E0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9c630
	if (cr6.eq) goto loc_82B9C630;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9C630:
	// addic. r24,r24,-1
	xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// bne 0x82b9c530
	if (!cr0.eq) goto loc_82B9C530;
loc_82B9C63C:
	// stb r25,32(r29)
	PPC_STORE_U8(r29.u32 + 32, r25.u8);
	// stb r25,33(r29)
	PPC_STORE_U8(r29.u32 + 33, r25.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82B9C650"))) PPC_WEAK_FUNC(sub_82B9C650);
PPC_FUNC_IMPL(__imp__sub_82B9C650) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82b9c4d0
	sub_82B9C4D0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stb r11,44(r31)
	PPC_STORE_U8(r31.u32 + 44, r11.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,45(r31)
	PPC_STORE_U8(r31.u32 + 45, r11.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,30088(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30088);
	// bl 0x82df98c0
	sub_82DF98C0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9C6A8"))) PPC_WEAK_FUNC(sub_82B9C6A8);
PPC_FUNC_IMPL(__imp__sub_82B9C6A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9C6B8"))) PPC_WEAK_FUNC(sub_82B9C6B8);
PPC_FUNC_IMPL(__imp__sub_82B9C6B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9C6C8"))) PPC_WEAK_FUNC(sub_82B9C6C8);
PPC_FUNC_IMPL(__imp__sub_82B9C6C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r11,r11,-24620
	r11.s64 = r11.s64 + -24620;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9c6f8
	if (cr6.eq) goto loc_82B9C6F8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9C6F8:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9c708
	if (cr6.eq) goto loc_82B9C708;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9C708:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9C720"))) PPC_WEAK_FUNC(sub_82B9C720);
PPC_FUNC_IMPL(__imp__sub_82B9C720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r11,0
	r11.s64 = 0;
	// addi r8,r9,-24620
	ctx.r8.s64 = ctx.r9.s64 + -24620;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// addi r9,r31,4
	ctx.r9.s64 = r31.s64 + 4;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// addi r3,r9,4
	ctx.r3.s64 = ctx.r9.s64 + 4;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9C798"))) PPC_WEAK_FUNC(sub_82B9C798);
PPC_FUNC_IMPL(__imp__sub_82B9C798) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82b9c6c8
	sub_82B9C6C8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9c7c8
	if (cr0.eq) goto loc_82B9C7C8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_82B9C7C8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9C7E8"))) PPC_WEAK_FUNC(sub_82B9C7E8);
PPC_FUNC_IMPL(__imp__sub_82B9C7E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,16
	ctx.r10.s64 = r11.s64 + 16;
	// stw r9,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r9.u32);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r9,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r9.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x822c0890
	sub_822C0890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B9C80C"))) PPC_WEAK_FUNC(sub_82B9C80C);
PPC_FUNC_IMPL(__imp__sub_82B9C80C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9C810"))) PPC_WEAK_FUNC(sub_82B9C810);
PPC_FUNC_IMPL(__imp__sub_82B9C810) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-24592
	ctx.r4.s64 = r11.s64 + -24592;
	// li r5,13
	ctx.r5.s64 = 13;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b9c85c
	if (cr0.eq) goto loc_82B9C85C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82b9c720
	sub_82B9C720(ctx, base);
	// b 0x82b9c860
	goto loc_82B9C860;
loc_82B9C85C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B9C860:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9C878"))) PPC_WEAK_FUNC(sub_82B9C878);
PPC_FUNC_IMPL(__imp__sub_82B9C878) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r27,r11,-2888
	r27.s64 = r11.s64 + -2888;
	// lwz r11,-2884(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2884);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82b9c8b8
	if (!cr0.eq) goto loc_82B9C8B8;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r11,-2884(r10)
	PPC_STORE_U32(ctx.r10.u32 + -2884, r11.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r9,-18512
	ctx.r4.s64 = ctx.r9.s64 + -18512;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
loc_82B9C8B8:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-24592
	ctx.r4.s64 = r11.s64 + -24592;
	// li r5,27
	ctx.r5.s64 = 27;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// li r28,0
	r28.s64 = 0;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b9c8e8
	if (cr0.eq) goto loc_82B9C8E8;
	// bl 0x822e7160
	sub_822E7160(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82b9c8ec
	goto loc_82B9C8EC;
loc_82B9C8E8:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_82B9C8EC:
	// addi r31,r30,16
	r31.s64 = r30.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x829f62b8
	sub_829F62B8(ctx, base);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x82b956c8
	sub_82B956C8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82e5e6c8
	sub_82E5E6C8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r29,16(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x82e34550
	sub_82E34550(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r29,12
	ctx.r10.s64 = r29.s64 + 12;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9c954
	if (cr6.eq) goto loc_82B9C954;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9C954:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e5e6e0
	sub_82E5E6E0(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r11,2
	r11.s64 = 2;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r28,20(r9)
	PPC_STORE_U8(ctx.r9.u32 + 20, r28.u8);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r11,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, r11.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r11,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, r11.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,36(r9)
	PPC_STORE_U32(ctx.r9.u32 + 36, ctx.r10.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r11,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, r11.u32);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r11,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, r11.u32);
	// stb r28,24(r30)
	PPC_STORE_U8(r30.u32 + 24, r28.u8);
	// stb r28,25(r30)
	PPC_STORE_U8(r30.u32 + 25, r28.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82B9C9B0"))) PPC_WEAK_FUNC(sub_82B9C9B0);
PPC_FUNC_IMPL(__imp__sub_82B9C9B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82b8af60
	sub_82B8AF60(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// beq cr6,0x82b9ca14
	if (cr6.eq) goto loc_82B9CA14;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82B9C9F8:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82b9c9f8
	if (!cr0.eq) goto loc_82B9C9F8;
loc_82B9CA14:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r29,r1,88
	r29.s64 = ctx.r1.s64 + 88;
	// bl 0x824ec4a8
	sub_824EC4A8(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r10,-24592
	ctx.r4.s64 = ctx.r10.s64 + -24592;
	// li r5,51
	ctx.r5.s64 = 51;
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// bl 0x82e5fcd0
	sub_82E5FCD0(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9ca50
	if (cr6.eq) goto loc_82B9CA50;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9CA50:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9ca60
	if (cr6.eq) goto loc_82B9CA60;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9CA60:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// stb r30,24(r31)
	PPC_STORE_U8(r31.u32 + 24, r30.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82B9CA78"))) PPC_WEAK_FUNC(sub_82B9CA78);
PPC_FUNC_IMPL(__imp__sub_82B9CA78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r29,0
	r29.s64 = 0;
	// li r28,1
	r28.s64 = 1;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f0,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r5,r10,-22524
	ctx.r5.s64 = ctx.r10.s64 + -22524;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82b8afd8
	sub_82B8AFD8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// beq cr6,0x82b9cb04
	if (cr6.eq) goto loc_82B9CB04;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82B9CAE8:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82b9cae8
	if (!cr0.eq) goto loc_82B9CAE8;
loc_82B9CB04:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r27,r1,88
	r27.s64 = ctx.r1.s64 + 88;
	// bl 0x824ec4a8
	sub_824EC4A8(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r30,r11,-24592
	r30.s64 = r11.s64 + -24592;
	// li r5,60
	ctx.r5.s64 = 60;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r10,40
	ctx.r3.s64 = ctx.r10.s64 + 40;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// bl 0x82e5fcd0
	sub_82E5FCD0(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9cb44
	if (cr6.eq) goto loc_82B9CB44;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9CB44:
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9cb54
	if (cr6.eq) goto loc_82B9CB54;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9CB54:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9cb64
	if (cr6.eq) goto loc_82B9CB64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9CB64:
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82b8b068
	sub_82B8B068(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// beq cr6,0x82b9cbac
	if (cr6.eq) goto loc_82B9CBAC;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82B9CB90:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82b9cb90
	if (!cr0.eq) goto loc_82B9CB90;
loc_82B9CBAC:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r27,r1,104
	r27.s64 = ctx.r1.s64 + 104;
	// bl 0x824ec4a8
	sub_824EC4A8(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,61
	ctx.r5.s64 = 61;
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// bl 0x82e5fcd0
	sub_82E5FCD0(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9cbe4
	if (cr6.eq) goto loc_82B9CBE4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9CBE4:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9cbf4
	if (cr6.eq) goto loc_82B9CBF4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9CBF4:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// stb r29,24(r31)
	PPC_STORE_U8(r31.u32 + 24, r29.u8);
	// stb r28,25(r31)
	PPC_STORE_U8(r31.u32 + 25, r28.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82B9CC10"))) PPC_WEAK_FUNC(sub_82B9CC10);
PPC_FUNC_IMPL(__imp__sub_82B9CC10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r11,24(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82b9ccf8
	if (cr0.eq) goto loc_82B9CCF8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r5,r9,-22492
	ctx.r5.s64 = ctx.r9.s64 + -22492;
	// lfs f0,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f0.f64 = double(temp.f32);
	// addi r6,r31,16
	ctx.r6.s64 = r31.s64 + 16;
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82b8afd8
	sub_82B8AFD8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// beq cr6,0x82b9cca4
	if (cr6.eq) goto loc_82B9CCA4;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82B9CC88:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82b9cc88
	if (!cr0.eq) goto loc_82B9CC88;
loc_82B9CCA4:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r30,r1,88
	r30.s64 = ctx.r1.s64 + 88;
	// bl 0x824ec4a8
	sub_824EC4A8(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r10,-24592
	ctx.r4.s64 = ctx.r10.s64 + -24592;
	// li r5,71
	ctx.r5.s64 = 71;
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x82e5fcd0
	sub_82E5FCD0(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9cce0
	if (cr6.eq) goto loc_82B9CCE0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9CCE0:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9ccf0
	if (cr6.eq) goto loc_82B9CCF0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9CCF0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
loc_82B9CCF8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9CD10"))) PPC_WEAK_FUNC(sub_82B9CD10);
PPC_FUNC_IMPL(__imp__sub_82B9CD10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x82b9cd30
	if (cr6.lt) goto loc_82B9CD30;
	// li r11,0
	r11.s64 = 0;
loc_82B9CD30:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9CD38"))) PPC_WEAK_FUNC(sub_82B9CD38);
PPC_FUNC_IMPL(__imp__sub_82B9CD38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// addi r11,r31,-1
	r11.s64 = r31.s64 + -1;
	// b 0x82b9cda4
	goto loc_82B9CDA4;
loc_82B9CD60:
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// add r29,r11,r28
	r29.u64 = r11.u64 + r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r25
	ctr.u64 = r25.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9cdb4
	if (cr0.eq) goto loc_82B9CDB4;
	// rlwinm r11,r31,3,0,28
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r4,r29,4
	ctx.r4.s64 = r29.s64 + 4;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// addi r11,r30,-1
	r11.s64 = r30.s64 + -1;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_82B9CDA4:
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// cmpw cr6,r26,r31
	cr6.compare<int32_t>(r26.s32, r31.s32, xer);
	// addze r30,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r30.s64 = temp.s64;
	// blt cr6,0x82b9cd60
	if (cr6.lt) goto loc_82B9CD60;
loc_82B9CDB4:
	// rlwinm r11,r31,3,0,28
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r4,r27,4
	ctx.r4.s64 = r27.s64 + 4;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9cde0
	if (cr6.eq) goto loc_82B9CDE0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9CDE0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82B9CDE8"))) PPC_WEAK_FUNC(sub_82B9CDE8);
PPC_FUNC_IMPL(__imp__sub_82B9CDE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b10
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// subf r11,r26,r4
	r11.s64 = ctx.r4.s64 - r26.s64;
	// stw r26,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, r26.u32);
	// subf r10,r26,r22
	ctx.r10.s64 = r22.s64 - r26.s64;
	// srawi. r25,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r25.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// srawi r9,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 3;
	// mr r11,r25
	r11.u64 = r25.u64;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// beq 0x82b9ce48
	if (cr0.eq) goto loc_82B9CE48;
loc_82B9CE1C:
	// divw r8,r28,r11
	ctx.r8.s32 = r28.s32 / r11.s32;
	// rotlwi r10,r28,1
	ctx.r10.u64 = __builtin_rotateleft32(r28.u32, 1);
	// mullw r8,r8,r11
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(r11.s32);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// subf. r10,r8,r28
	ctx.r10.s64 = r28.s64 - ctx.r8.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// andc r8,r11,r7
	ctx.r8.u64 = r11.u64 & ~ctx.r7.u64;
	// twllei r11,0
	// mr r28,r11
	r28.u64 = r11.u64;
	// twlgei r8,-1
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// bne 0x82b9ce1c
	if (!cr0.eq) goto loc_82B9CE1C;
loc_82B9CE48:
	// cmpw cr6,r28,r9
	cr6.compare<int32_t>(r28.s32, ctx.r9.s32, xer);
	// bge cr6,0x82b9cf44
	if (!cr6.lt) goto loc_82B9CF44;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x82b9cf44
	if (!cr6.gt) goto loc_82B9CF44;
	// rlwinm r29,r25,3,0,28
	r29.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r28,3,0,28
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// subfic r23,r29,4
	xer.ca = r29.u32 <= 4;
	r23.s64 = 4 - r29.s64;
	// add r30,r11,r26
	r30.u64 = r11.u64 + r26.u64;
loc_82B9CE68:
	// add r11,r30,r29
	r11.u64 = r30.u64 + r29.u64;
	// lwz r24,0(r30)
	r24.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// lwzx r27,r23,r11
	r27.u64 = PPC_LOAD_U32(r23.u32 + r11.u32);
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r24.u32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// beq cr6,0x82b9cea8
	if (cr6.eq) goto loc_82B9CEA8;
	// addi r10,r27,4
	ctx.r10.s64 = r27.s64 + 4;
loc_82B9CE8C:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r8,0,r10
	reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r8.u64 = __builtin_bswap32(reserved.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwcx. r8,0,r10
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x82b9ce8c
	if (!cr0.eq) goto loc_82B9CE8C;
loc_82B9CEA8:
	// cmplw cr6,r11,r22
	cr6.compare<uint32_t>(r11.u32, r22.u32, xer);
	// bne cr6,0x82b9ceb8
	if (!cr6.eq) goto loc_82B9CEB8;
	// addi r11,r1,212
	r11.s64 = ctx.r1.s64 + 212;
	// b 0x82b9cf0c
	goto loc_82B9CF0C;
loc_82B9CEB8:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// b 0x82b9cf0c
	goto loc_82B9CF0C;
loc_82B9CEC4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// subf r11,r31,r22
	r11.s64 = r22.s64 - r31.s64;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// bge cr6,0x82b9cef8
	if (!cr6.lt) goto loc_82B9CEF8;
	// add r10,r29,r31
	ctx.r10.u64 = r29.u64 + r31.u64;
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// b 0x82b9cf0c
	goto loc_82B9CF0C;
loc_82B9CEF8:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
	// subf r10,r10,r29
	ctx.r10.s64 = r29.s64 - ctx.r10.s64;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + r26.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_82B9CF0C:
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r9,4
	ctx.r3.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x82b9cec4
	if (!cr6.eq) goto loc_82B9CEC4;
	// stw r24,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r24.u32);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82b9cf38
	if (cr6.eq) goto loc_82B9CF38;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9CF38:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r30,r30,-8
	r30.s64 = r30.s64 + -8;
	// bgt 0x82b9ce68
	if (cr0.gt) goto loc_82B9CE68;
loc_82B9CF44:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_82B9CF50"))) PPC_WEAK_FUNC(sub_82B9CF50);
PPC_FUNC_IMPL(__imp__sub_82B9CF50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// mr r25,r30
	r25.u64 = r30.u64;
	// b 0x82b9cfc8
	goto loc_82B9CFC8;
loc_82B9CF7C:
	// rlwinm r11,r31,3,0,28
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// addi r4,r3,-8
	ctx.r4.s64 = ctx.r3.s64 + -8;
	// mtctr r27
	ctr.u64 = r27.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9cf9c
	if (cr0.eq) goto loc_82B9CF9C;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
loc_82B9CF9C:
	// rlwinm r11,r31,3,0,28
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// mr r30,r31
	r30.u64 = r31.u64;
loc_82B9CFC8:
	// rlwinm r31,r11,1,0,30
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(r31.s32, r28.s32, xer);
	// blt cr6,0x82b9cf7c
	if (cr6.lt) goto loc_82B9CF7C;
	// bne cr6,0x82b9d004
	if (!cr6.eq) goto loc_82B9D004;
	// rlwinm r11,r28,3,0,28
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// addi r4,r9,4
	ctx.r4.s64 = ctx.r9.s64 + 4;
	// lwz r11,-8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -8);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// addi r30,r28,-1
	r30.s64 = r28.s64 + -1;
loc_82B9D004:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r31,r26,4
	r31.s64 = r26.s64 + 4;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x82b9d040
	if (cr6.eq) goto loc_82B9D040;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82B9D024:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82b9d024
	if (!cr0.eq) goto loc_82B9D024;
loc_82B9D040:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82b9cd38
	sub_82B9CD38(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9d068
	if (cr6.eq) goto loc_82B9D068;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9D068:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82B9D070"))) PPC_WEAK_FUNC(sub_82B9D070);
PPC_FUNC_IMPL(__imp__sub_82B9D070) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// addi r3,r5,4
	ctx.r3.s64 = ctx.r5.s64 + 4;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x82b9d0dc
	if (cr6.eq) goto loc_82B9D0DC;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82B9D0C0:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82b9d0c0
	if (!cr0.eq) goto loc_82B9D0C0;
loc_82B9D0DC:
	// subf r11,r31,r28
	r11.s64 = r28.s64 - r31.s64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// srawi r5,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	ctx.r5.s64 = r11.s32 >> 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b9cf50
	sub_82B9CF50(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9d108
	if (cr6.eq) goto loc_82B9D108;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9D108:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82B9D110"))) PPC_WEAK_FUNC(sub_82B9D110);
PPC_FUNC_IMPL(__imp__sub_82B9D110) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// subf r11,r30,r4
	r11.s64 = ctx.r4.s64 - r30.s64;
	// srawi r28,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r28.s64 = r11.s32 >> 3;
	// srawi r11,r28,1
	xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1) != 0);
	r11.s64 = r28.s32 >> 1;
	// addze. r31,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r31.s64 = temp.s64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// ble 0x82b9d1a0
	if (!cr0.gt) goto loc_82B9D1A0;
	// rlwinm r11,r31,3,0,28
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r11,r30
	r29.u64 = r11.u64 + r30.u64;
loc_82B9D140:
	// addi r29,r29,-8
	r29.s64 = r29.s64 + -8;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x82b9d180
	if (cr6.eq) goto loc_82B9D180;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82B9D164:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82b9d164
	if (!cr0.eq) goto loc_82B9D164;
loc_82B9D180:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b9cf50
	sub_82B9CF50(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bgt cr6,0x82b9d140
	if (cr6.gt) goto loc_82B9D140;
loc_82B9D1A0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82B9D1A8"))) PPC_WEAK_FUNC(sub_82B9D1A8);
PPC_FUNC_IMPL(__imp__sub_82B9D1A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r29
	ctr.u64 = r29.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9d1e8
	if (cr0.eq) goto loc_82B9D1E8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bc4528
	sub_82BC4528(ctx, base);
loc_82B9D1E8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r29
	ctr.u64 = r29.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9d20c
	if (cr0.eq) goto loc_82B9D20C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82bc4528
	sub_82BC4528(ctx, base);
loc_82B9D20C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r29
	ctr.u64 = r29.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9d230
	if (cr0.eq) goto loc_82B9D230;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bc4528
	sub_82BC4528(ctx, base);
loc_82B9D230:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82B9D238"))) PPC_WEAK_FUNC(sub_82B9D238);
PPC_FUNC_IMPL(__imp__sub_82B9D238) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r4,-8
	ctx.r4.s64 = ctx.r4.s64 + -8;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x82b9d284
	if (cr6.eq) goto loc_82B9D284;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82B9D268:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82b9d268
	if (!cr0.eq) goto loc_82B9D268;
loc_82B9D284:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x82b9d070
	sub_82B9D070(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9D2A8"))) PPC_WEAK_FUNC(sub_82B9D2A8);
PPC_FUNC_IMPL(__imp__sub_82B9D2A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// cmplw cr6,r27,r25
	cr6.compare<uint32_t>(r27.u32, r25.u32, xer);
	// beq cr6,0x82b9d37c
	if (cr6.eq) goto loc_82B9D37C;
	// addi r31,r27,8
	r31.s64 = r27.s64 + 8;
	// cmplw cr6,r31,r25
	cr6.compare<uint32_t>(r31.u32, r25.u32, xer);
	// beq cr6,0x82b9d37c
	if (cr6.eq) goto loc_82B9D37C;
	// addi r29,r31,8
	r29.s64 = r31.s64 + 8;
loc_82B9D2D8:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r26
	ctr.u64 = r26.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9d308
	if (cr0.eq) goto loc_82B9D308;
	// cmplw cr6,r27,r31
	cr6.compare<uint32_t>(r27.u32, r31.u32, xer);
	// beq cr6,0x82b9d36c
	if (cr6.eq) goto loc_82B9D36C;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// beq cr6,0x82b9d36c
	if (cr6.eq) goto loc_82B9D36C;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// b 0x82b9d358
	goto loc_82B9D358;
loc_82B9D308:
	// addi r4,r29,-16
	ctx.r4.s64 = r29.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mtctr r26
	ctr.u64 = r26.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9d36c
	if (cr0.eq) goto loc_82B9D36C;
loc_82B9D324:
	// mr r28,r30
	r28.u64 = r30.u64;
	// addi r30,r30,-8
	r30.s64 = r30.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mtctr r26
	ctr.u64 = r26.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82b9d324
	if (!cr0.eq) goto loc_82B9D324;
	// cmplw cr6,r28,r31
	cr6.compare<uint32_t>(r28.u32, r31.u32, xer);
	// beq cr6,0x82b9d36c
	if (cr6.eq) goto loc_82B9D36C;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// beq cr6,0x82b9d36c
	if (cr6.eq) goto loc_82B9D36C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82B9D358:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82b9cde8
	sub_82B9CDE8(ctx, base);
loc_82B9D36C:
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmplw cr6,r31,r25
	cr6.compare<uint32_t>(r31.u32, r25.u32, xer);
	// bne cr6,0x82b9d2d8
	if (!cr6.eq) goto loc_82B9D2D8;
loc_82B9D37C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82B9D388"))) PPC_WEAK_FUNC(sub_82B9D388);
PPC_FUNC_IMPL(__imp__sub_82B9D388) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// subf r11,r3,r28
	r11.s64 = r28.s64 - ctx.r3.s64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// cmpwi cr6,r11,40
	cr6.compare<int32_t>(r11.s32, 40, xer);
	// ble cr6,0x82b9d410
	if (!cr6.gt) goto loc_82B9D410;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// rlwinm r31,r11,3,0,28
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r26,r11,4,0,27
	r26.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r27,r31,r3
	r27.u64 = r31.u64 + ctx.r3.u64;
	// add r5,r26,r3
	ctx.r5.u64 = r26.u64 + ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82b9d1a8
	sub_82B9D1A8(ctx, base);
	// add r5,r31,r30
	ctx.r5.u64 = r31.u64 + r30.u64;
	// subf r3,r31,r30
	ctx.r3.s64 = r30.s64 - r31.s64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82b9d1a8
	sub_82B9D1A8(ctx, base);
	// subf r31,r31,r28
	r31.s64 = r28.s64 - r31.s64;
	// subf r3,r26,r28
	ctx.r3.s64 = r28.s64 - r26.s64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x82b9d1a8
	sub_82B9D1A8(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// b 0x82b9d414
	goto loc_82B9D414;
loc_82B9D410:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_82B9D414:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82b9d1a8
	sub_82B9D1A8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82B9D428"))) PPC_WEAK_FUNC(sub_82B9D428);
PPC_FUNC_IMPL(__imp__sub_82B9D428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b14
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// subf r11,r25,r24
	r11.s64 = r24.s64 - r25.s64;
	// addi r5,r24,-8
	ctx.r5.s64 = r24.s64 + -8;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r25
	r31.u64 = r11.u64 + r25.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82b9d388
	sub_82B9D388(ctx, base);
	// addi r28,r31,8
	r28.s64 = r31.s64 + 8;
	// cmplw cr6,r25,r31
	cr6.compare<uint32_t>(r25.u32, r31.u32, xer);
	// bge cr6,0x82b9d4f0
	if (!cr6.lt) goto loc_82B9D4F0;
loc_82B9D478:
	// addi r30,r31,-8
	r30.s64 = r31.s64 + -8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r26
	ctr.u64 = r26.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82b9d4f0
	if (!cr0.eq) goto loc_82B9D4F0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r26
	ctr.u64 = r26.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82b9d4f0
	if (!cr0.eq) goto loc_82B9D4F0;
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmplw cr6,r25,r30
	cr6.compare<uint32_t>(r25.u32, r30.u32, xer);
	// blt cr6,0x82b9d478
	if (cr6.lt) goto loc_82B9D478;
	// b 0x82b9d4f0
	goto loc_82B9D4F0;
loc_82B9D4BC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r26
	ctr.u64 = r26.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82b9d4f8
	if (!cr0.eq) goto loc_82B9D4F8;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r26
	ctr.u64 = r26.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82b9d4f8
	if (!cr0.eq) goto loc_82B9D4F8;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
loc_82B9D4F0:
	// cmplw cr6,r28,r24
	cr6.compare<uint32_t>(r28.u32, r24.u32, xer);
	// blt cr6,0x82b9d4bc
	if (cr6.lt) goto loc_82B9D4BC;
loc_82B9D4F8:
	// mr r30,r28
	r30.u64 = r28.u64;
	// mr r27,r31
	r27.u64 = r31.u64;
	// b 0x82b9d548
	goto loc_82B9D548;
loc_82B9D504:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r26
	ctr.u64 = r26.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82b9d544
	if (!cr0.eq) goto loc_82B9D544;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r26
	ctr.u64 = r26.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82b9d550
	if (!cr0.eq) goto loc_82B9D550;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// bl 0x82bc4528
	sub_82BC4528(ctx, base);
loc_82B9D544:
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
loc_82B9D548:
	// cmplw cr6,r30,r24
	cr6.compare<uint32_t>(r30.u32, r24.u32, xer);
	// blt cr6,0x82b9d504
	if (cr6.lt) goto loc_82B9D504;
loc_82B9D550:
	// cmplw cr6,r27,r25
	cr6.compare<uint32_t>(r27.u32, r25.u32, xer);
	// ble cr6,0x82b9d5b0
	if (!cr6.gt) goto loc_82B9D5B0;
	// addi r29,r27,-8
	r29.s64 = r27.s64 + -8;
loc_82B9D55C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r26
	ctr.u64 = r26.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82b9d59c
	if (!cr0.eq) goto loc_82B9D59C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r26
	ctr.u64 = r26.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82b9d5ac
	if (!cr0.eq) goto loc_82B9D5AC;
	// addi r31,r31,-8
	r31.s64 = r31.s64 + -8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bc4528
	sub_82BC4528(ctx, base);
loc_82B9D59C:
	// addi r27,r27,-8
	r27.s64 = r27.s64 + -8;
	// addi r29,r29,-8
	r29.s64 = r29.s64 + -8;
	// cmplw cr6,r25,r27
	cr6.compare<uint32_t>(r25.u32, r27.u32, xer);
	// blt cr6,0x82b9d55c
	if (cr6.lt) goto loc_82B9D55C;
loc_82B9D5AC:
	// cmplw cr6,r27,r25
	cr6.compare<uint32_t>(r27.u32, r25.u32, xer);
loc_82B9D5B0:
	// bne cr6,0x82b9d5e4
	if (!cr6.eq) goto loc_82B9D5E4;
	// cmplw cr6,r30,r24
	cr6.compare<uint32_t>(r30.u32, r24.u32, xer);
	// beq cr6,0x82b9d62c
	if (cr6.eq) goto loc_82B9D62C;
	// cmplw cr6,r28,r30
	cr6.compare<uint32_t>(r28.u32, r30.u32, xer);
	// beq cr6,0x82b9d5d0
	if (cr6.eq) goto loc_82B9D5D0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bc4528
	sub_82BC4528(ctx, base);
loc_82B9D5D0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// b 0x82b9d620
	goto loc_82B9D620;
loc_82B9D5E4:
	// cmplw cr6,r30,r24
	cr6.compare<uint32_t>(r30.u32, r24.u32, xer);
	// addi r27,r27,-8
	r27.s64 = r27.s64 + -8;
	// bne cr6,0x82b9d618
	if (!cr6.eq) goto loc_82B9D618;
	// addi r31,r31,-8
	r31.s64 = r31.s64 + -8;
	// cmplw cr6,r27,r31
	cr6.compare<uint32_t>(r27.u32, r31.u32, xer);
	// beq cr6,0x82b9d608
	if (cr6.eq) goto loc_82B9D608;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82bc4528
	sub_82BC4528(ctx, base);
loc_82B9D608:
	// addi r28,r28,-8
	r28.s64 = r28.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// b 0x82b9d624
	goto loc_82B9D624;
loc_82B9D618:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_82B9D620:
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
loc_82B9D624:
	// bl 0x82bc4528
	sub_82BC4528(ctx, base);
	// b 0x82b9d548
	goto loc_82B9D548;
loc_82B9D62C:
	// stw r31,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r31.u32);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// stw r28,4(r23)
	PPC_STORE_U32(r23.u32 + 4, r28.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_82B9D640"))) PPC_WEAK_FUNC(sub_82B9D640);
PPC_FUNC_IMPL(__imp__sub_82B9D640) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// subf r10,r29,r31
	ctx.r10.s64 = r31.s64 - r29.s64;
	// srawi r11,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	r11.s64 = ctx.r10.s32 >> 3;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x82b9d694
	if (!cr6.gt) goto loc_82B9D694;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
loc_82B9D66C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82b9d238
	sub_82B9D238(ctx, base);
	// addi r30,r30,-8
	r30.s64 = r30.s64 + -8;
	// addi r31,r31,-8
	r31.s64 = r31.s64 + -8;
	// srawi r11,r30,3
	xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7) != 0);
	r11.s64 = r30.s32 >> 3;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bgt cr6,0x82b9d66c
	if (cr6.gt) goto loc_82B9D66C;
loc_82B9D694:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82B9D6A0"))) PPC_WEAK_FUNC(sub_82B9D6A0);
PPC_FUNC_IMPL(__imp__sub_82B9D6A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// subf r11,r30,r31
	r11.s64 = r31.s64 - r30.s64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// ble cr6,0x82b9d79c
	if (!cr6.gt) goto loc_82B9D79C;
loc_82B9D6CC:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x82b9d758
	if (!cr6.gt) goto loc_82B9D758;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b9d428
	sub_82B9D428(ctx, base);
	// srawi r11,r29,1
	xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	r11.s64 = r29.s32 >> 1;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// srawi r10,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r10.s64 = r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + r11.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r27,84(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r26,80(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r27,r31
	r11.s64 = r31.s64 - r27.s64;
	// subf r10,r30,r26
	ctx.r10.s64 = r26.s64 - r30.s64;
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bge cr6,0x82b9d738
	if (!cr6.lt) goto loc_82B9D738;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b9d6a0
	sub_82B9D6A0(ctx, base);
	// mr r30,r27
	r30.u64 = r27.u64;
	// b 0x82b9d748
	goto loc_82B9D748;
loc_82B9D738:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82b9d6a0
	sub_82B9D6A0(ctx, base);
	// mr r31,r26
	r31.u64 = r26.u64;
loc_82B9D748:
	// subf r11,r30,r31
	r11.s64 = r31.s64 - r30.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// bgt cr6,0x82b9d6cc
	if (cr6.gt) goto loc_82B9D6CC;
loc_82B9D758:
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// ble cr6,0x82b9d79c
	if (!cr6.gt) goto loc_82B9D79C;
	// subf r11,r30,r31
	r11.s64 = r31.s64 - r30.s64;
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// ble cr6,0x82b9d788
	if (!cr6.gt) goto loc_82B9D788;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b9d110
	sub_82B9D110(ctx, base);
loc_82B9D788:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b9d640
	sub_82B9D640(ctx, base);
	// b 0x82b9d7b4
	goto loc_82B9D7B4;
loc_82B9D79C:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x82b9d7b4
	if (!cr6.gt) goto loc_82B9D7B4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b9d2a8
	sub_82B9D2A8(ctx, base);
loc_82B9D7B4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82B9D7C0"))) PPC_WEAK_FUNC(sub_82B9D7C0);
PPC_FUNC_IMPL(__imp__sub_82B9D7C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-32070
	r11.s64 = -2101739520;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r6,r11,-13040
	ctx.r6.s64 = r11.s64 + -13040;
	// subf r11,r3,r4
	r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// srawi r5,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	ctx.r5.s64 = r11.s32 >> 3;
	// b 0x82b9d6a0
	sub_82B9D6A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B9D7E0"))) PPC_WEAK_FUNC(sub_82B9D7E0);
PPC_FUNC_IMPL(__imp__sub_82B9D7E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f29,f2
	f29.f64 = ctx.f2.f64;
	// li r28,1
	r28.s64 = 1;
	// lfs f30,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f30.f64 = double(temp.f32);
loc_82B9D810:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b9d9c4
	if (cr6.eq) goto loc_82B9D9C4;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// srawi r9,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82b9d9c4
	if (!cr6.lt) goto loc_82B9D9C4;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r8,21(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 21);
	// li r29,0
	r29.s64 = 0;
	// li r11,0
	r11.s64 = 0;
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// lwzx r30,r10,r9
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bne 0x82b9d88c
	if (!cr0.eq) goto loc_82B9D88C;
	// lwa r10,0(r30)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(r30.u32 + 0));
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fsubs f0,f0,f29
	f0.f64 = double(float(f0.f64 - f29.f64));
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// bge cr6,0x82b9d87c
	if (!cr6.lt) goto loc_82B9D87C;
	// fmr f0,f30
	f0.f64 = f30.f64;
loc_82B9D87C:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, f0.f64);
	// blt cr6,0x82b9d88c
	if (cr6.lt) goto loc_82B9D88C;
	// mr r11,r28
	r11.u64 = r28.u64;
	// stb r28,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r28.u8);
loc_82B9D88C:
	// lbz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 20);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82b9d954
	if (!cr0.eq) goto loc_82B9D954;
	// lbz r10,21(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 21);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82b9d954
	if (cr0.eq) goto loc_82B9D954;
	// lwa r10,0(r30)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(r30.u32 + 0));
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(f0.f64));
	// fcmpu cr6,f31,f1
	cr6.compare(f31.f64, ctx.f1.f64);
	// blt cr6,0x82b9d920
	if (cr6.lt) goto loc_82B9D920;
	// lbz r11,8(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 8);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82b9d8f4
	if (cr0.eq) goto loc_82B9D8F4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r29,r28
	r29.u64 = r28.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// b 0x82b9d954
	goto loc_82B9D954;
loc_82B9D8F4:
	// lwa r11,4(r30)
	r11.s64 = int32_t(PPC_LOAD_U32(r30.u32 + 4));
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// frsp f2,f0
	ctx.f2.f64 = double(float(f0.f64));
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r28,20(r31)
	PPC_STORE_U8(r31.u32 + 20, r28.u8);
	// b 0x82b9d954
	goto loc_82B9D954;
loc_82B9D920:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9d954
	if (cr0.eq) goto loc_82B9D954;
	// lwa r11,4(r30)
	r11.s64 = int32_t(PPC_LOAD_U32(r30.u32 + 4));
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f31.f64;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, r11.u64);
	// lfd f0,104(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// frsp f2,f0
	ctx.f2.f64 = double(float(f0.f64));
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B9D954:
	// lbz r11,20(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82b9d9bc
	if (cr0.eq) goto loc_82B9D9BC;
	// lwa r11,4(r30)
	r11.s64 = int32_t(PPC_LOAD_U32(r30.u32 + 4));
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f2,f0
	ctx.f2.f64 = double(float(f0.f64));
	// fcmpu cr6,f31,f2
	cr6.compare(f31.f64, ctx.f2.f64);
	// blt cr6,0x82b9d9bc
	if (cr6.lt) goto loc_82B9D9BC;
	// lwa r11,0(r30)
	r11.s64 = int32_t(PPC_LOAD_U32(r30.u32 + 0));
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, r11.u64);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// lfd f0,120(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(f0.f64));
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mr r29,r28
	r29.u64 = r28.u64;
	// stb r10,20(r31)
	PPC_STORE_U8(r31.u32 + 20, ctx.r10.u8);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
loc_82B9D9BC:
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82b9d810
	if (!cr0.eq) goto loc_82B9D810;
loc_82B9D9C4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82B9D9D8"))) PPC_WEAK_FUNC(sub_82B9D9D8);
PPC_FUNC_IMPL(__imp__sub_82B9D9D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r11,20(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82b9da48
	if (cr0.eq) goto loc_82B9DA48;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r10,28(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// lwa r9,0(r11)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(r11.u32 + 0));
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lwa r11,4(r11)
	r11.s64 = int32_t(PPC_LOAD_U32(r11.u32 + 4));
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f2,f13
	ctx.f2.f64 = double(float(ctx.f13.f64));
	// frsp f1,f0
	ctx.f1.f64 = double(float(f0.f64));
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B9DA48:
	// li r11,0
	r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stb r11,20(r31)
	PPC_STORE_U8(r31.u32 + 20, r11.u8);
	// stb r11,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9DA70"))) PPC_WEAK_FUNC(sub_82B9DA70);
PPC_FUNC_IMPL(__imp__sub_82B9DA70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82dfb960
	sub_82DFB960(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9DAA0"))) PPC_WEAK_FUNC(sub_82B9DAA0);
PPC_FUNC_IMPL(__imp__sub_82B9DAA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x825df298
	sub_825DF298(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r31,r10,1
	r31.u64 = ctx.r10.u64 ^ 1;
	// beq cr6,0x82b9dae8
	if (cr6.eq) goto loc_82B9DAE8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9DAE8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9DB00"))) PPC_WEAK_FUNC(sub_82B9DB00);
PPC_FUNC_IMPL(__imp__sub_82B9DB00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x825df298
	sub_825DF298(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// rlwinm r28,r10,27,31,31
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// beq cr6,0x82b9db44
	if (cr6.eq) goto loc_82B9DB44;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9DB44:
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9db60
	if (cr0.eq) goto loc_82B9DB60;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-23007
	ctx.r4.s64 = r11.s64 + -23007;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// b 0x82b9db90
	goto loc_82B9DB90;
loc_82B9DB60:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df298
	sub_825DF298(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x825debc8
	sub_825DEBC8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9db90
	if (cr6.eq) goto loc_82B9DB90;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9DB90:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82B9DBA0"))) PPC_WEAK_FUNC(sub_82B9DBA0);
PPC_FUNC_IMPL(__imp__sub_82B9DBA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825df298
	sub_825DF298(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b87118
	sub_82B87118(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9dbdc
	if (cr6.eq) goto loc_82B9DBDC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9DBDC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9DBF8"))) PPC_WEAK_FUNC(sub_82B9DBF8);
PPC_FUNC_IMPL(__imp__sub_82B9DBF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82e9ed10
	sub_82E9ED10(ctx, base);
	// addi r3,r31,65
	ctx.r3.s64 = r31.s64 + 65;
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-24520
	r11.s64 = r11.s64 + -24520;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9DC40"))) PPC_WEAK_FUNC(sub_82B9DC40);
PPC_FUNC_IMPL(__imp__sub_82B9DC40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r11,r11,-24520
	r11.s64 = r11.s64 + -24520;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82e9ecb0
	sub_82E9ECB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B9DC50"))) PPC_WEAK_FUNC(sub_82B9DC50);
PPC_FUNC_IMPL(__imp__sub_82B9DC50) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e627e0
	sub_82E627E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B9DC58"))) PPC_WEAK_FUNC(sub_82B9DC58);
PPC_FUNC_IMPL(__imp__sub_82B9DC58) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e9d8e8
	sub_82E9D8E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B9DC60"))) PPC_WEAK_FUNC(sub_82B9DC60);
PPC_FUNC_IMPL(__imp__sub_82B9DC60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82e627e0
	sub_82E627E0(ctx, base);
	// lwz r3,160(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9DC88"))) PPC_WEAK_FUNC(sub_82B9DC88);
PPC_FUNC_IMPL(__imp__sub_82B9DC88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82b9dbf8
	sub_82B9DBF8(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-24496
	r11.s64 = r11.s64 + -24496;
	// stb r10,68(r31)
	PPC_STORE_U8(r31.u32 + 68, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9DCD0"))) PPC_WEAK_FUNC(sub_82B9DCD0);
PPC_FUNC_IMPL(__imp__sub_82B9DCD0) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82e9d938
	sub_82E9D938(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B9DCD8"))) PPC_WEAK_FUNC(sub_82B9DCD8);
PPC_FUNC_IMPL(__imp__sub_82B9DCD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r12,0(r3)
	r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r12)
	r11.u64 = PPC_LOAD_U32(r12.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82B9DCE8"))) PPC_WEAK_FUNC(sub_82B9DCE8);
PPC_FUNC_IMPL(__imp__sub_82B9DCE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r12,0(r3)
	r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r12)
	r11.u64 = PPC_LOAD_U32(r12.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82B9DCF8"))) PPC_WEAK_FUNC(sub_82B9DCF8);
PPC_FUNC_IMPL(__imp__sub_82B9DCF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r12,0(r3)
	r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r12)
	r11.u64 = PPC_LOAD_U32(r12.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82B9DD08"))) PPC_WEAK_FUNC(sub_82B9DD08);
PPC_FUNC_IMPL(__imp__sub_82B9DD08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r11,-24520
	r11.s64 = r11.s64 + -24520;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82e9ecb0
	sub_82E9ECB0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9dd44
	if (cr0.eq) goto loc_82B9DD44;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_82B9DD44:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9DD60"))) PPC_WEAK_FUNC(sub_82B9DD60);
PPC_FUNC_IMPL(__imp__sub_82B9DD60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// clrlwi. r30,r5,24
	r30.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82b9ddb0
	if (cr0.eq) goto loc_82B9DDB0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31951
	r11.s64 = -2093940736;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-19960
	ctx.r3.s64 = r11.s64 + -19960;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9ddb0
	if (cr0.eq) goto loc_82B9DDB0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82b9dce8
	sub_82B9DCE8(ctx, base);
loc_82B9DDA8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82b9de24
	goto loc_82B9DE24;
loc_82B9DDB0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82b9de20
	if (cr6.eq) goto loc_82B9DE20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,24520
	ctx.r3.s64 = r11.s64 + 24520;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9dde8
	if (cr0.eq) goto loc_82B9DDE8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82b9dcf8
	sub_82B9DCF8(ctx, base);
	// b 0x82b9dda8
	goto loc_82B9DDA8;
loc_82B9DDE8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82b9de20
	if (cr6.eq) goto loc_82B9DE20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,24476
	ctx.r3.s64 = r11.s64 + 24476;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b9de20
	if (cr0.eq) goto loc_82B9DE20;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82b9dcd8
	sub_82B9DCD8(ctx, base);
	// b 0x82b9dda8
	goto loc_82B9DDA8;
loc_82B9DE20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B9DE24:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82B9DE30"))) PPC_WEAK_FUNC(sub_82B9DE30);
PPC_FUNC_IMPL(__imp__sub_82B9DE30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// bl 0x82e627e0
	sub_82E627E0(ctx, base);
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// bl 0x82e61a78
	sub_82E61A78(ctx, base);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9de84
	if (cr6.eq) goto loc_82B9DE84;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9DE84:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82B9DE90"))) PPC_WEAK_FUNC(sub_82B9DE90);
PPC_FUNC_IMPL(__imp__sub_82B9DE90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// bl 0x82e627e0
	sub_82E627E0(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// bl 0x82e5fcd0
	sub_82E5FCD0(ctx, base);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b9dee0
	if (cr6.eq) goto loc_82B9DEE0;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9DEE0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82B9DEF0"))) PPC_WEAK_FUNC(sub_82B9DEF0);
PPC_FUNC_IMPL(__imp__sub_82B9DEF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,-24328
	ctx.r4.s64 = r11.s64 + -24328;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-24344
	ctx.r4.s64 = r11.s64 + -24344;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825ce300
	sub_825CE300(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82bac908
	sub_82BAC908(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9df50
	if (cr6.eq) goto loc_82B9DF50;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9DF50:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-24368
	ctx.r4.s64 = r11.s64 + -24368;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,-24384
	ctx.r4.s64 = r11.s64 + -24384;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825ce300
	sub_825CE300(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82babe80
	sub_82BABE80(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9dfac
	if (cr6.eq) goto loc_82B9DFAC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9DFAC:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-24396
	ctx.r4.s64 = r11.s64 + -24396;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,-24412
	ctx.r4.s64 = r11.s64 + -24412;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x825ce300
	sub_825CE300(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82bb2d38
	sub_82BB2D38(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9e008
	if (cr6.eq) goto loc_82B9E008;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9E008:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-24424
	ctx.r4.s64 = r11.s64 + -24424;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,-24436
	ctx.r4.s64 = r11.s64 + -24436;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825ce300
	sub_825CE300(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82bb08a0
	sub_82BB08A0(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9e064
	if (cr6.eq) goto loc_82B9E064;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9E064:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-24452
	ctx.r4.s64 = r11.s64 + -24452;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,-24464
	ctx.r4.s64 = r11.s64 + -24464;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825ce300
	sub_825CE300(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82bb34b0
	sub_82BB34B0(ctx, base);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9e0c0
	if (cr6.eq) goto loc_82B9E0C0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9E0C0:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9E0E8"))) PPC_WEAK_FUNC(sub_82B9E0E8);
PPC_FUNC_IMPL(__imp__sub_82B9E0E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// lwz r11,-2876(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2876);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82b9e100
	if (!cr0.eq) goto loc_82B9E100;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-2876(r10)
	PPC_STORE_U32(ctx.r10.u32 + -2876, r11.u32);
loc_82B9E100:
	// lis r11,-31943
	r11.s64 = -2093416448;
	// addi r3,r11,-2880
	ctx.r3.s64 = r11.s64 + -2880;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9E110"))) PPC_WEAK_FUNC(sub_82B9E110);
PPC_FUNC_IMPL(__imp__sub_82B9E110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822c0988
	sub_822C0988(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b9e168
	if (cr0.eq) goto loc_82B9E168;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-24308
	ctx.r9.s64 = r11.s64 + -24308;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82b9e16c
	goto loc_82B9E16C;
loc_82B9E168:
	// li r11,0
	r11.s64 = 0;
loc_82B9E16C:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b9e1b8
	if (!cr6.eq) goto loc_82B9E1B8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b9e198
	if (cr6.eq) goto loc_82B9E198;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B9E198:
	// lis r11,-31951
	r11.s64 = -2093940736;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-16840(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -16840);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82B9E1B8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9E1D8"))) PPC_WEAK_FUNC(sub_82B9E1D8);
PPC_FUNC_IMPL(__imp__sub_82B9E1D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822c0988
	sub_822C0988(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b9e230
	if (cr0.eq) goto loc_82B9E230;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-24288
	ctx.r9.s64 = r11.s64 + -24288;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82b9e234
	goto loc_82B9E234;
loc_82B9E230:
	// li r11,0
	r11.s64 = 0;
loc_82B9E234:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b9e280
	if (!cr6.eq) goto loc_82B9E280;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b9e260
	if (cr6.eq) goto loc_82B9E260;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B9E260:
	// lis r11,-31951
	r11.s64 = -2093940736;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-16840(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -16840);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82B9E280:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9E2A0"))) PPC_WEAK_FUNC(sub_82B9E2A0);
PPC_FUNC_IMPL(__imp__sub_82B9E2A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822c0988
	sub_822C0988(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b9e2f8
	if (cr0.eq) goto loc_82B9E2F8;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-24268
	ctx.r9.s64 = r11.s64 + -24268;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82b9e2fc
	goto loc_82B9E2FC;
loc_82B9E2F8:
	// li r11,0
	r11.s64 = 0;
loc_82B9E2FC:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b9e348
	if (!cr6.eq) goto loc_82B9E348;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b9e328
	if (cr6.eq) goto loc_82B9E328;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B9E328:
	// lis r11,-31951
	r11.s64 = -2093940736;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-16840(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -16840);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82B9E348:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9E368"))) PPC_WEAK_FUNC(sub_82B9E368);
PPC_FUNC_IMPL(__imp__sub_82B9E368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822c0988
	sub_822C0988(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b9e3c0
	if (cr0.eq) goto loc_82B9E3C0;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-24248
	ctx.r9.s64 = r11.s64 + -24248;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82b9e3c4
	goto loc_82B9E3C4;
loc_82B9E3C0:
	// li r11,0
	r11.s64 = 0;
loc_82B9E3C4:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b9e410
	if (!cr6.eq) goto loc_82B9E410;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b9e3f0
	if (cr6.eq) goto loc_82B9E3F0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B9E3F0:
	// lis r11,-31951
	r11.s64 = -2093940736;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-16840(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -16840);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82B9E410:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9E430"))) PPC_WEAK_FUNC(sub_82B9E430);
PPC_FUNC_IMPL(__imp__sub_82B9E430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822c0988
	sub_822C0988(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b9e488
	if (cr0.eq) goto loc_82B9E488;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-24228
	ctx.r9.s64 = r11.s64 + -24228;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82b9e48c
	goto loc_82B9E48C;
loc_82B9E488:
	// li r11,0
	r11.s64 = 0;
loc_82B9E48C:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b9e4d8
	if (!cr6.eq) goto loc_82B9E4D8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b9e4b8
	if (cr6.eq) goto loc_82B9E4B8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B9E4B8:
	// lis r11,-31951
	r11.s64 = -2093940736;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-16840(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -16840);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82B9E4D8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9E4F8"))) PPC_WEAK_FUNC(sub_82B9E4F8);
PPC_FUNC_IMPL(__imp__sub_82B9E4F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822c0988
	sub_822C0988(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b9e550
	if (cr0.eq) goto loc_82B9E550;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-24208
	ctx.r9.s64 = r11.s64 + -24208;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82b9e554
	goto loc_82B9E554;
loc_82B9E550:
	// li r11,0
	r11.s64 = 0;
loc_82B9E554:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b9e5a0
	if (!cr6.eq) goto loc_82B9E5A0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b9e580
	if (cr6.eq) goto loc_82B9E580;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B9E580:
	// lis r11,-31951
	r11.s64 = -2093940736;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-16840(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -16840);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82B9E5A0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9E5C0"))) PPC_WEAK_FUNC(sub_82B9E5C0);
PPC_FUNC_IMPL(__imp__sub_82B9E5C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822c0988
	sub_822C0988(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b9e618
	if (cr0.eq) goto loc_82B9E618;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-24188
	ctx.r9.s64 = r11.s64 + -24188;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82b9e61c
	goto loc_82B9E61C;
loc_82B9E618:
	// li r11,0
	r11.s64 = 0;
loc_82B9E61C:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b9e668
	if (!cr6.eq) goto loc_82B9E668;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b9e648
	if (cr6.eq) goto loc_82B9E648;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B9E648:
	// lis r11,-31951
	r11.s64 = -2093940736;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-16840(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -16840);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82B9E668:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9E688"))) PPC_WEAK_FUNC(sub_82B9E688);
PPC_FUNC_IMPL(__imp__sub_82B9E688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822c0988
	sub_822C0988(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b9e6e0
	if (cr0.eq) goto loc_82B9E6E0;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-24168
	ctx.r9.s64 = r11.s64 + -24168;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82b9e6e4
	goto loc_82B9E6E4;
loc_82B9E6E0:
	// li r11,0
	r11.s64 = 0;
loc_82B9E6E4:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b9e730
	if (!cr6.eq) goto loc_82B9E730;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b9e710
	if (cr6.eq) goto loc_82B9E710;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B9E710:
	// lis r11,-31951
	r11.s64 = -2093940736;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-16840(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -16840);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82B9E730:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9E750"))) PPC_WEAK_FUNC(sub_82B9E750);
PPC_FUNC_IMPL(__imp__sub_82B9E750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822c0988
	sub_822C0988(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b9e7a8
	if (cr0.eq) goto loc_82B9E7A8;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-24148
	ctx.r9.s64 = r11.s64 + -24148;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82b9e7ac
	goto loc_82B9E7AC;
loc_82B9E7A8:
	// li r11,0
	r11.s64 = 0;
loc_82B9E7AC:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b9e7f8
	if (!cr6.eq) goto loc_82B9E7F8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b9e7d8
	if (cr6.eq) goto loc_82B9E7D8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B9E7D8:
	// lis r11,-31951
	r11.s64 = -2093940736;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-16840(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -16840);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82B9E7F8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9E818"))) PPC_WEAK_FUNC(sub_82B9E818);
PPC_FUNC_IMPL(__imp__sub_82B9E818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822c0988
	sub_822C0988(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b9e870
	if (cr0.eq) goto loc_82B9E870;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-24128
	ctx.r9.s64 = r11.s64 + -24128;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82b9e874
	goto loc_82B9E874;
loc_82B9E870:
	// li r11,0
	r11.s64 = 0;
loc_82B9E874:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b9e8c0
	if (!cr6.eq) goto loc_82B9E8C0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b9e8a0
	if (cr6.eq) goto loc_82B9E8A0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B9E8A0:
	// lis r11,-31951
	r11.s64 = -2093940736;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-16840(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -16840);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82B9E8C0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9E8E0"))) PPC_WEAK_FUNC(sub_82B9E8E0);
PPC_FUNC_IMPL(__imp__sub_82B9E8E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822c0988
	sub_822C0988(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b9e938
	if (cr0.eq) goto loc_82B9E938;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-24108
	ctx.r9.s64 = r11.s64 + -24108;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82b9e93c
	goto loc_82B9E93C;
loc_82B9E938:
	// li r11,0
	r11.s64 = 0;
loc_82B9E93C:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b9e988
	if (!cr6.eq) goto loc_82B9E988;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b9e968
	if (cr6.eq) goto loc_82B9E968;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B9E968:
	// lis r11,-31951
	r11.s64 = -2093940736;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-16840(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -16840);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82B9E988:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9E9A8"))) PPC_WEAK_FUNC(sub_82B9E9A8);
PPC_FUNC_IMPL(__imp__sub_82B9E9A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822c0988
	sub_822C0988(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b9ea00
	if (cr0.eq) goto loc_82B9EA00;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-24088
	ctx.r9.s64 = r11.s64 + -24088;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82b9ea04
	goto loc_82B9EA04;
loc_82B9EA00:
	// li r11,0
	r11.s64 = 0;
loc_82B9EA04:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b9ea50
	if (!cr6.eq) goto loc_82B9EA50;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b9ea30
	if (cr6.eq) goto loc_82B9EA30;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B9EA30:
	// lis r11,-31951
	r11.s64 = -2093940736;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-16840(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -16840);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82B9EA50:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9EA70"))) PPC_WEAK_FUNC(sub_82B9EA70);
PPC_FUNC_IMPL(__imp__sub_82B9EA70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822c0988
	sub_822C0988(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b9eac8
	if (cr0.eq) goto loc_82B9EAC8;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-24068
	ctx.r9.s64 = r11.s64 + -24068;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82b9eacc
	goto loc_82B9EACC;
loc_82B9EAC8:
	// li r11,0
	r11.s64 = 0;
loc_82B9EACC:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b9eb18
	if (!cr6.eq) goto loc_82B9EB18;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b9eaf8
	if (cr6.eq) goto loc_82B9EAF8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B9EAF8:
	// lis r11,-31951
	r11.s64 = -2093940736;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-16840(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -16840);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82B9EB18:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9EB38"))) PPC_WEAK_FUNC(sub_82B9EB38);
PPC_FUNC_IMPL(__imp__sub_82B9EB38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822c0988
	sub_822C0988(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b9eb90
	if (cr0.eq) goto loc_82B9EB90;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-24048
	ctx.r9.s64 = r11.s64 + -24048;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82b9eb94
	goto loc_82B9EB94;
loc_82B9EB90:
	// li r11,0
	r11.s64 = 0;
loc_82B9EB94:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b9ebe0
	if (!cr6.eq) goto loc_82B9EBE0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b9ebc0
	if (cr6.eq) goto loc_82B9EBC0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B9EBC0:
	// lis r11,-31951
	r11.s64 = -2093940736;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-16840(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -16840);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82B9EBE0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9EC00"))) PPC_WEAK_FUNC(sub_82B9EC00);
PPC_FUNC_IMPL(__imp__sub_82B9EC00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822c0988
	sub_822C0988(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b9ec58
	if (cr0.eq) goto loc_82B9EC58;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-24028
	ctx.r9.s64 = r11.s64 + -24028;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82b9ec5c
	goto loc_82B9EC5C;
loc_82B9EC58:
	// li r11,0
	r11.s64 = 0;
loc_82B9EC5C:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b9eca8
	if (!cr6.eq) goto loc_82B9ECA8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b9ec88
	if (cr6.eq) goto loc_82B9EC88;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B9EC88:
	// lis r11,-31951
	r11.s64 = -2093940736;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-16840(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -16840);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82B9ECA8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9ECC8"))) PPC_WEAK_FUNC(sub_82B9ECC8);
PPC_FUNC_IMPL(__imp__sub_82B9ECC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822c0988
	sub_822C0988(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b9ed20
	if (cr0.eq) goto loc_82B9ED20;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-24008
	ctx.r9.s64 = r11.s64 + -24008;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82b9ed24
	goto loc_82B9ED24;
loc_82B9ED20:
	// li r11,0
	r11.s64 = 0;
loc_82B9ED24:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b9ed70
	if (!cr6.eq) goto loc_82B9ED70;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b9ed50
	if (cr6.eq) goto loc_82B9ED50;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B9ED50:
	// lis r11,-31951
	r11.s64 = -2093940736;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-16840(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -16840);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82B9ED70:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9ED90"))) PPC_WEAK_FUNC(sub_82B9ED90);
PPC_FUNC_IMPL(__imp__sub_82B9ED90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822c0988
	sub_822C0988(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b9ede8
	if (cr0.eq) goto loc_82B9EDE8;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-23988
	ctx.r9.s64 = r11.s64 + -23988;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82b9edec
	goto loc_82B9EDEC;
loc_82B9EDE8:
	// li r11,0
	r11.s64 = 0;
loc_82B9EDEC:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b9ee38
	if (!cr6.eq) goto loc_82B9EE38;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b9ee18
	if (cr6.eq) goto loc_82B9EE18;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B9EE18:
	// lis r11,-31951
	r11.s64 = -2093940736;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-16840(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -16840);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82B9EE38:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9EE58"))) PPC_WEAK_FUNC(sub_82B9EE58);
PPC_FUNC_IMPL(__imp__sub_82B9EE58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822c0988
	sub_822C0988(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b9eeb0
	if (cr0.eq) goto loc_82B9EEB0;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-23968
	ctx.r9.s64 = r11.s64 + -23968;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82b9eeb4
	goto loc_82B9EEB4;
loc_82B9EEB0:
	// li r11,0
	r11.s64 = 0;
loc_82B9EEB4:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b9ef00
	if (!cr6.eq) goto loc_82B9EF00;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b9eee0
	if (cr6.eq) goto loc_82B9EEE0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B9EEE0:
	// lis r11,-31951
	r11.s64 = -2093940736;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-16840(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -16840);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82B9EF00:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9EF20"))) PPC_WEAK_FUNC(sub_82B9EF20);
PPC_FUNC_IMPL(__imp__sub_82B9EF20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822c0988
	sub_822C0988(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b9ef78
	if (cr0.eq) goto loc_82B9EF78;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-23948
	ctx.r9.s64 = r11.s64 + -23948;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82b9ef7c
	goto loc_82B9EF7C;
loc_82B9EF78:
	// li r11,0
	r11.s64 = 0;
loc_82B9EF7C:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b9efc8
	if (!cr6.eq) goto loc_82B9EFC8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b9efa8
	if (cr6.eq) goto loc_82B9EFA8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B9EFA8:
	// lis r11,-31951
	r11.s64 = -2093940736;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-16840(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -16840);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82B9EFC8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9EFE8"))) PPC_WEAK_FUNC(sub_82B9EFE8);
PPC_FUNC_IMPL(__imp__sub_82B9EFE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822c0988
	sub_822C0988(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b9f040
	if (cr0.eq) goto loc_82B9F040;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-23928
	ctx.r9.s64 = r11.s64 + -23928;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82b9f044
	goto loc_82B9F044;
loc_82B9F040:
	// li r11,0
	r11.s64 = 0;
loc_82B9F044:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b9f090
	if (!cr6.eq) goto loc_82B9F090;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b9f070
	if (cr6.eq) goto loc_82B9F070;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B9F070:
	// lis r11,-31951
	r11.s64 = -2093940736;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-16840(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -16840);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82B9F090:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9F0B0"))) PPC_WEAK_FUNC(sub_82B9F0B0);
PPC_FUNC_IMPL(__imp__sub_82B9F0B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-23912
	ctx.r4.s64 = r11.s64 + -23912;
	// li r5,65
	ctx.r5.s64 = 65;
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b9f0f0
	if (cr0.eq) goto loc_82B9F0F0;
	// bl 0x82baffc8
	sub_82BAFFC8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82b9f0f4
	goto loc_82B9F0F4;
loc_82B9F0F0:
	// li r31,0
	r31.s64 = 0;
loc_82B9F0F4:
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82b9e110
	sub_82B9E110(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x82b9f150
	if (cr6.eq) goto loc_82B9F150;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82B9F134:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82b9f134
	if (!cr0.eq) goto loc_82B9F134;
loc_82B9F150:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e9ce40
	sub_82E9CE40(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9f16c
	if (cr6.eq) goto loc_82B9F16C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9F16C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82B9F178"))) PPC_WEAK_FUNC(sub_82B9F178);
PPC_FUNC_IMPL(__imp__sub_82B9F178) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-23912
	ctx.r4.s64 = r11.s64 + -23912;
	// li r5,65
	ctx.r5.s64 = 65;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b9f1b8
	if (cr0.eq) goto loc_82B9F1B8;
	// bl 0x82baaca0
	sub_82BAACA0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82b9f1bc
	goto loc_82B9F1BC;
loc_82B9F1B8:
	// li r31,0
	r31.s64 = 0;
loc_82B9F1BC:
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82b9e1d8
	sub_82B9E1D8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x82b9f218
	if (cr6.eq) goto loc_82B9F218;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82B9F1FC:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82b9f1fc
	if (!cr0.eq) goto loc_82B9F1FC;
loc_82B9F218:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e9ce40
	sub_82E9CE40(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9f234
	if (cr6.eq) goto loc_82B9F234;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9F234:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82B9F240"))) PPC_WEAK_FUNC(sub_82B9F240);
PPC_FUNC_IMPL(__imp__sub_82B9F240) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-23912
	ctx.r4.s64 = r11.s64 + -23912;
	// li r5,65
	ctx.r5.s64 = 65;
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b9f280
	if (cr0.eq) goto loc_82B9F280;
	// bl 0x82baa678
	sub_82BAA678(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82b9f284
	goto loc_82B9F284;
loc_82B9F280:
	// li r31,0
	r31.s64 = 0;
loc_82B9F284:
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82b9e2a0
	sub_82B9E2A0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x82b9f2e0
	if (cr6.eq) goto loc_82B9F2E0;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82B9F2C4:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82b9f2c4
	if (!cr0.eq) goto loc_82B9F2C4;
loc_82B9F2E0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e9ce40
	sub_82E9CE40(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9f2fc
	if (cr6.eq) goto loc_82B9F2FC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9F2FC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82B9F308"))) PPC_WEAK_FUNC(sub_82B9F308);
PPC_FUNC_IMPL(__imp__sub_82B9F308) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-23912
	ctx.r4.s64 = r11.s64 + -23912;
	// li r5,65
	ctx.r5.s64 = 65;
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b9f348
	if (cr0.eq) goto loc_82B9F348;
	// bl 0x82ba7860
	sub_82BA7860(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82b9f34c
	goto loc_82B9F34C;
loc_82B9F348:
	// li r31,0
	r31.s64 = 0;
loc_82B9F34C:
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82b9e368
	sub_82B9E368(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x82b9f3a8
	if (cr6.eq) goto loc_82B9F3A8;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82B9F38C:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82b9f38c
	if (!cr0.eq) goto loc_82B9F38C;
loc_82B9F3A8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e9ce40
	sub_82E9CE40(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9f3c4
	if (cr6.eq) goto loc_82B9F3C4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9F3C4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82B9F3D0"))) PPC_WEAK_FUNC(sub_82B9F3D0);
PPC_FUNC_IMPL(__imp__sub_82B9F3D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-23912
	ctx.r4.s64 = r11.s64 + -23912;
	// li r5,65
	ctx.r5.s64 = 65;
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b9f410
	if (cr0.eq) goto loc_82B9F410;
	// bl 0x82baa5b8
	sub_82BAA5B8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82b9f414
	goto loc_82B9F414;
loc_82B9F410:
	// li r31,0
	r31.s64 = 0;
loc_82B9F414:
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82b9e430
	sub_82B9E430(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x82b9f470
	if (cr6.eq) goto loc_82B9F470;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82B9F454:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82b9f454
	if (!cr0.eq) goto loc_82B9F454;
loc_82B9F470:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e9ce40
	sub_82E9CE40(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9f48c
	if (cr6.eq) goto loc_82B9F48C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9F48C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82B9F498"))) PPC_WEAK_FUNC(sub_82B9F498);
PPC_FUNC_IMPL(__imp__sub_82B9F498) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-23912
	ctx.r4.s64 = r11.s64 + -23912;
	// li r5,73
	ctx.r5.s64 = 73;
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b9f4dc
	if (cr0.eq) goto loc_82B9F4DC;
	// bl 0x82ba80f0
	sub_82BA80F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82b9f4e0
	goto loc_82B9F4E0;
loc_82B9F4DC:
	// li r31,0
	r31.s64 = 0;
loc_82B9F4E0:
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82b9e4f8
	sub_82B9E4F8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82e9d8d8
	sub_82E9D8D8(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x82b9f548
	if (cr6.eq) goto loc_82B9F548;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82B9F52C:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82b9f52c
	if (!cr0.eq) goto loc_82B9F52C;
loc_82B9F548:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82e9ce40
	sub_82E9CE40(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9f564
	if (cr6.eq) goto loc_82B9F564;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9F564:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82B9F570"))) PPC_WEAK_FUNC(sub_82B9F570);
PPC_FUNC_IMPL(__imp__sub_82B9F570) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-23912
	ctx.r4.s64 = r11.s64 + -23912;
	// li r5,65
	ctx.r5.s64 = 65;
	// li r3,164
	ctx.r3.s64 = 164;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b9f5b0
	if (cr0.eq) goto loc_82B9F5B0;
	// bl 0x82baded8
	sub_82BADED8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82b9f5b4
	goto loc_82B9F5B4;
loc_82B9F5B0:
	// li r31,0
	r31.s64 = 0;
loc_82B9F5B4:
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82b9e5c0
	sub_82B9E5C0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x82b9f610
	if (cr6.eq) goto loc_82B9F610;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82B9F5F4:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82b9f5f4
	if (!cr0.eq) goto loc_82B9F5F4;
loc_82B9F610:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e9ce40
	sub_82E9CE40(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9f62c
	if (cr6.eq) goto loc_82B9F62C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9F62C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82B9F638"))) PPC_WEAK_FUNC(sub_82B9F638);
PPC_FUNC_IMPL(__imp__sub_82B9F638) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-23912
	ctx.r4.s64 = r11.s64 + -23912;
	// li r5,65
	ctx.r5.s64 = 65;
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b9f678
	if (cr0.eq) goto loc_82B9F678;
	// bl 0x82bab710
	sub_82BAB710(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82b9f67c
	goto loc_82B9F67C;
loc_82B9F678:
	// li r31,0
	r31.s64 = 0;
loc_82B9F67C:
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82b9e688
	sub_82B9E688(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x82b9f6d8
	if (cr6.eq) goto loc_82B9F6D8;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82B9F6BC:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82b9f6bc
	if (!cr0.eq) goto loc_82B9F6BC;
loc_82B9F6D8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e9ce40
	sub_82E9CE40(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9f6f4
	if (cr6.eq) goto loc_82B9F6F4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9F6F4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82B9F700"))) PPC_WEAK_FUNC(sub_82B9F700);
PPC_FUNC_IMPL(__imp__sub_82B9F700) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-23912
	ctx.r4.s64 = r11.s64 + -23912;
	// li r5,65
	ctx.r5.s64 = 65;
	// li r3,400
	ctx.r3.s64 = 400;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b9f740
	if (cr0.eq) goto loc_82B9F740;
	// bl 0x82baf210
	sub_82BAF210(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82b9f744
	goto loc_82B9F744;
loc_82B9F740:
	// li r31,0
	r31.s64 = 0;
loc_82B9F744:
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82b9e750
	sub_82B9E750(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x82b9f7a0
	if (cr6.eq) goto loc_82B9F7A0;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82B9F784:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82b9f784
	if (!cr0.eq) goto loc_82B9F784;
loc_82B9F7A0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e9ce40
	sub_82E9CE40(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9f7bc
	if (cr6.eq) goto loc_82B9F7BC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9F7BC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82B9F7C8"))) PPC_WEAK_FUNC(sub_82B9F7C8);
PPC_FUNC_IMPL(__imp__sub_82B9F7C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-23912
	ctx.r4.s64 = r11.s64 + -23912;
	// li r5,65
	ctx.r5.s64 = 65;
	// li r3,940
	ctx.r3.s64 = 940;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b9f808
	if (cr0.eq) goto loc_82B9F808;
	// bl 0x82ba5480
	sub_82BA5480(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82b9f80c
	goto loc_82B9F80C;
loc_82B9F808:
	// li r31,0
	r31.s64 = 0;
loc_82B9F80C:
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82b9e818
	sub_82B9E818(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x82b9f868
	if (cr6.eq) goto loc_82B9F868;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82B9F84C:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82b9f84c
	if (!cr0.eq) goto loc_82B9F84C;
loc_82B9F868:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e9ce40
	sub_82E9CE40(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9f884
	if (cr6.eq) goto loc_82B9F884;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9F884:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82B9F890"))) PPC_WEAK_FUNC(sub_82B9F890);
PPC_FUNC_IMPL(__imp__sub_82B9F890) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-23912
	ctx.r4.s64 = r11.s64 + -23912;
	// li r5,65
	ctx.r5.s64 = 65;
	// li r3,816
	ctx.r3.s64 = 816;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b9f8d0
	if (cr0.eq) goto loc_82B9F8D0;
	// bl 0x82bb0a98
	sub_82BB0A98(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82b9f8d4
	goto loc_82B9F8D4;
loc_82B9F8D0:
	// li r31,0
	r31.s64 = 0;
loc_82B9F8D4:
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82b9e8e0
	sub_82B9E8E0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x82b9f930
	if (cr6.eq) goto loc_82B9F930;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82B9F914:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82b9f914
	if (!cr0.eq) goto loc_82B9F914;
loc_82B9F930:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e9ce40
	sub_82E9CE40(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9f94c
	if (cr6.eq) goto loc_82B9F94C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9F94C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82B9F958"))) PPC_WEAK_FUNC(sub_82B9F958);
PPC_FUNC_IMPL(__imp__sub_82B9F958) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-23912
	ctx.r4.s64 = r11.s64 + -23912;
	// li r5,65
	ctx.r5.s64 = 65;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b9f998
	if (cr0.eq) goto loc_82B9F998;
	// bl 0x82bb1a78
	sub_82BB1A78(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82b9f99c
	goto loc_82B9F99C;
loc_82B9F998:
	// li r31,0
	r31.s64 = 0;
loc_82B9F99C:
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82b9e9a8
	sub_82B9E9A8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x82b9f9f8
	if (cr6.eq) goto loc_82B9F9F8;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82B9F9DC:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82b9f9dc
	if (!cr0.eq) goto loc_82B9F9DC;
loc_82B9F9F8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e9ce40
	sub_82E9CE40(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9fa14
	if (cr6.eq) goto loc_82B9FA14;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9FA14:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82B9FA20"))) PPC_WEAK_FUNC(sub_82B9FA20);
PPC_FUNC_IMPL(__imp__sub_82B9FA20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-23912
	ctx.r4.s64 = r11.s64 + -23912;
	// li r5,65
	ctx.r5.s64 = 65;
	// li r3,228
	ctx.r3.s64 = 228;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b9fa60
	if (cr0.eq) goto loc_82B9FA60;
	// bl 0x82ba64e0
	sub_82BA64E0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82b9fa64
	goto loc_82B9FA64;
loc_82B9FA60:
	// li r31,0
	r31.s64 = 0;
loc_82B9FA64:
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82b9ea70
	sub_82B9EA70(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x82b9fac0
	if (cr6.eq) goto loc_82B9FAC0;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82B9FAA4:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82b9faa4
	if (!cr0.eq) goto loc_82B9FAA4;
loc_82B9FAC0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e9ce40
	sub_82E9CE40(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9fadc
	if (cr6.eq) goto loc_82B9FADC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9FADC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82B9FAE8"))) PPC_WEAK_FUNC(sub_82B9FAE8);
PPC_FUNC_IMPL(__imp__sub_82B9FAE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-23912
	ctx.r4.s64 = r11.s64 + -23912;
	// li r5,65
	ctx.r5.s64 = 65;
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b9fb28
	if (cr0.eq) goto loc_82B9FB28;
	// bl 0x82ba8058
	sub_82BA8058(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82b9fb2c
	goto loc_82B9FB2C;
loc_82B9FB28:
	// li r31,0
	r31.s64 = 0;
loc_82B9FB2C:
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82b9eb38
	sub_82B9EB38(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x82b9fb88
	if (cr6.eq) goto loc_82B9FB88;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82B9FB6C:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82b9fb6c
	if (!cr0.eq) goto loc_82B9FB6C;
loc_82B9FB88:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e9ce40
	sub_82E9CE40(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9fba4
	if (cr6.eq) goto loc_82B9FBA4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9FBA4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82B9FBB0"))) PPC_WEAK_FUNC(sub_82B9FBB0);
PPC_FUNC_IMPL(__imp__sub_82B9FBB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-23912
	ctx.r4.s64 = r11.s64 + -23912;
	// li r5,65
	ctx.r5.s64 = 65;
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b9fbf0
	if (cr0.eq) goto loc_82B9FBF0;
	// bl 0x82bac0c0
	sub_82BAC0C0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82b9fbf4
	goto loc_82B9FBF4;
loc_82B9FBF0:
	// li r31,0
	r31.s64 = 0;
loc_82B9FBF4:
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82b9ec00
	sub_82B9EC00(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x82b9fc50
	if (cr6.eq) goto loc_82B9FC50;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82B9FC34:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82b9fc34
	if (!cr0.eq) goto loc_82B9FC34;
loc_82B9FC50:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e9ce40
	sub_82E9CE40(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9fc6c
	if (cr6.eq) goto loc_82B9FC6C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9FC6C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82B9FC78"))) PPC_WEAK_FUNC(sub_82B9FC78);
PPC_FUNC_IMPL(__imp__sub_82B9FC78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-23912
	ctx.r4.s64 = r11.s64 + -23912;
	// li r5,65
	ctx.r5.s64 = 65;
	// li r3,304
	ctx.r3.s64 = 304;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b9fcb8
	if (cr0.eq) goto loc_82B9FCB8;
	// bl 0x82ba8c30
	sub_82BA8C30(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82b9fcbc
	goto loc_82B9FCBC;
loc_82B9FCB8:
	// li r31,0
	r31.s64 = 0;
loc_82B9FCBC:
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82b9ecc8
	sub_82B9ECC8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x82b9fd18
	if (cr6.eq) goto loc_82B9FD18;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82B9FCFC:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82b9fcfc
	if (!cr0.eq) goto loc_82B9FCFC;
loc_82B9FD18:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e9ce40
	sub_82E9CE40(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9fd34
	if (cr6.eq) goto loc_82B9FD34;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9FD34:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82B9FD40"))) PPC_WEAK_FUNC(sub_82B9FD40);
PPC_FUNC_IMPL(__imp__sub_82B9FD40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-23912
	ctx.r4.s64 = r11.s64 + -23912;
	// li r5,65
	ctx.r5.s64 = 65;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b9fd80
	if (cr0.eq) goto loc_82B9FD80;
	// bl 0x82baad60
	sub_82BAAD60(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82b9fd84
	goto loc_82B9FD84;
loc_82B9FD80:
	// li r31,0
	r31.s64 = 0;
loc_82B9FD84:
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82b9ed90
	sub_82B9ED90(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x82b9fde0
	if (cr6.eq) goto loc_82B9FDE0;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82B9FDC4:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82b9fdc4
	if (!cr0.eq) goto loc_82B9FDC4;
loc_82B9FDE0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e9ce40
	sub_82E9CE40(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9fdfc
	if (cr6.eq) goto loc_82B9FDFC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9FDFC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82B9FE08"))) PPC_WEAK_FUNC(sub_82B9FE08);
PPC_FUNC_IMPL(__imp__sub_82B9FE08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-23912
	ctx.r4.s64 = r11.s64 + -23912;
	// li r5,65
	ctx.r5.s64 = 65;
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b9fe48
	if (cr0.eq) goto loc_82B9FE48;
	// bl 0x82bb2990
	sub_82BB2990(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82b9fe4c
	goto loc_82B9FE4C;
loc_82B9FE48:
	// li r31,0
	r31.s64 = 0;
loc_82B9FE4C:
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82b9ee58
	sub_82B9EE58(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x82b9fea8
	if (cr6.eq) goto loc_82B9FEA8;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82B9FE8C:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82b9fe8c
	if (!cr0.eq) goto loc_82B9FE8C;
loc_82B9FEA8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e9ce40
	sub_82E9CE40(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9fec4
	if (cr6.eq) goto loc_82B9FEC4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9FEC4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82B9FED0"))) PPC_WEAK_FUNC(sub_82B9FED0);
PPC_FUNC_IMPL(__imp__sub_82B9FED0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-23912
	ctx.r4.s64 = r11.s64 + -23912;
	// li r5,65
	ctx.r5.s64 = 65;
	// li r3,192
	ctx.r3.s64 = 192;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b9ff10
	if (cr0.eq) goto loc_82B9FF10;
	// bl 0x82bb02e0
	sub_82BB02E0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82b9ff14
	goto loc_82B9FF14;
loc_82B9FF10:
	// li r31,0
	r31.s64 = 0;
loc_82B9FF14:
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82b9ef20
	sub_82B9EF20(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x82b9ff70
	if (cr6.eq) goto loc_82B9FF70;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82B9FF54:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82b9ff54
	if (!cr0.eq) goto loc_82B9FF54;
loc_82B9FF70:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e9ce40
	sub_82E9CE40(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9ff8c
	if (cr6.eq) goto loc_82B9FF8C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B9FF8C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82B9FF98"))) PPC_WEAK_FUNC(sub_82B9FF98);
PPC_FUNC_IMPL(__imp__sub_82B9FF98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-23912
	ctx.r4.s64 = r11.s64 + -23912;
	// li r5,65
	ctx.r5.s64 = 65;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b9ffd8
	if (cr0.eq) goto loc_82B9FFD8;
	// bl 0x82bb2ff0
	sub_82BB2FF0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82b9ffdc
	goto loc_82B9FFDC;
loc_82B9FFD8:
	// li r31,0
	r31.s64 = 0;
loc_82B9FFDC:
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82b9efe8
	sub_82B9EFE8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x82ba0038
	if (cr6.eq) goto loc_82BA0038;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82BA001C:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82ba001c
	if (!cr0.eq) goto loc_82BA001C;
loc_82BA0038:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e9ce40
	sub_82E9CE40(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba0054
	if (cr6.eq) goto loc_82BA0054;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA0054:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82BA0060"))) PPC_WEAK_FUNC(sub_82BA0060);
PPC_FUNC_IMPL(__imp__sub_82BA0060) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82b9f0b0
	sub_82B9F0B0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82b9f178
	sub_82B9F178(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82b9f240
	sub_82B9F240(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82b9f308
	sub_82B9F308(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82b9f3d0
	sub_82B9F3D0(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23820
	ctx.r4.s64 = r11.s64 + -23820;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b9f498
	sub_82B9F498(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r11.u32);
	// bl 0x82dfd900
	sub_82DFD900(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// lwz r29,136(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82bafd10
	sub_82BAFD10(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r27,r11,-23836
	r27.s64 = r11.s64 + -23836;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lwz r30,120(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// lwz r28,128(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r26,r11,-23852
	r26.s64 = r11.s64 + -23852;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r11.u32);
	// bl 0x82e9d918
	sub_82E9D918(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lwz r30,104(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82e9d918
	sub_82E9D918(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r30,100(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// stw r8,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// beq cr6,0x82ba02b8
	if (cr6.eq) goto loc_82BA02B8;
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
loc_82BA029C:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82ba029c
	if (!cr0.eq) goto loc_82BA029C;
loc_82BA02B8:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e9c5d0
	sub_82E9C5D0(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba02d4
	if (cr6.eq) goto loc_82BA02D4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA02D4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82ba02e4
	if (cr6.eq) goto loc_82BA02E4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA02E4:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba02f4
	if (cr6.eq) goto loc_82BA02F4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA02F4:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba0304
	if (cr6.eq) goto loc_82BA0304;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA0304:
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba0314
	if (cr6.eq) goto loc_82BA0314;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA0314:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba0324
	if (cr6.eq) goto loc_82BA0324;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA0324:
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba0334
	if (cr6.eq) goto loc_82BA0334;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA0334:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82BA0340"))) PPC_WEAK_FUNC(sub_82BA0340);
PPC_FUNC_IMPL(__imp__sub_82BA0340) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b10
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82b9f0b0
	sub_82B9F0B0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82b9f570
	sub_82B9F570(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82b9f638
	sub_82B9F638(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x82b9f700
	sub_82B9F700(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82b9f7c8
	sub_82B9F7C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82b9f890
	sub_82B9F890(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82b9f958
	sub_82B9F958(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x82b9fa20
	sub_82B9FA20(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82b9fae8
	sub_82B9FAE8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82b9f308
	sub_82B9F308(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x82b9f240
	sub_82B9F240(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82b9f308
	sub_82B9F308(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82b9f3d0
	sub_82B9F3D0(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,-23820
	ctx.r4.s64 = r11.s64 + -23820;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82b9f498
	sub_82B9F498(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x82dfd900
	sub_82DFD900(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r30,r10,-23732
	r30.s64 = ctx.r10.s64 + -23732;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lwz r29,152(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// lwz r30,168(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r28,r11,-23752
	r28.s64 = r11.s64 + -23752;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r27,r11,-23764
	r27.s64 = r11.s64 + -23764;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r26,r10,-23768
	r26.s64 = ctx.r10.s64 + -23768;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lwz r30,200(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d918
	sub_82E9D918(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r28,192(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x82e9d918
	sub_82E9D918(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r25,r11,-23772
	r25.s64 = r11.s64 + -23772;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r24,r11,-23780
	r24.s64 = r11.s64 + -23780;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d918
	sub_82E9D918(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r28,216(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x82e9d918
	sub_82E9D918(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r23,r11,-23792
	r23.s64 = r11.s64 + -23792;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d918
	sub_82E9D918(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lwz r30,144(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d918
	sub_82E9D918(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lwz r30,208(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23800
	ctx.r4.s64 = r11.s64 + -23800;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,-23812
	ctx.r4.s64 = r11.s64 + -23812;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// lwz r29,184(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d918
	sub_82E9D918(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r30,160(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x82ba7670
	sub_82BA7670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d918
	sub_82E9D918(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d918
	sub_82E9D918(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r28,r10,-23836
	r28.s64 = ctx.r10.s64 + -23836;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lwz r30,232(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r27,r11,-23852
	r27.s64 = r11.s64 + -23852;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d918
	sub_82E9D918(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x82e9d918
	sub_82E9D918(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lwz r30,224(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d918
	sub_82E9D918(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r30,176(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x82e9d918
	sub_82E9D918(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// lwz r29,180(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r30.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r29,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r29.u32);
	// beq cr6,0x82ba0a90
	if (cr6.eq) goto loc_82BA0A90;
	// addi r11,r29,4
	r11.s64 = r29.s64 + 4;
loc_82BA0A74:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82ba0a74
	if (!cr0.eq) goto loc_82BA0A74;
loc_82BA0A90:
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e9c5d0
	sub_82E9C5D0(ctx, base);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba0aac
	if (cr6.eq) goto loc_82BA0AAC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA0AAC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82ba0abc
	if (cr6.eq) goto loc_82BA0ABC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA0ABC:
	// lwz r3,228(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba0acc
	if (cr6.eq) goto loc_82BA0ACC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA0ACC:
	// lwz r3,244(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba0adc
	if (cr6.eq) goto loc_82BA0ADC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA0ADC:
	// lwz r3,236(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba0aec
	if (cr6.eq) goto loc_82BA0AEC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA0AEC:
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba0afc
	if (cr6.eq) goto loc_82BA0AFC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA0AFC:
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba0b0c
	if (cr6.eq) goto loc_82BA0B0C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA0B0C:
	// lwz r3,252(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba0b1c
	if (cr6.eq) goto loc_82BA0B1C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA0B1C:
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba0b2c
	if (cr6.eq) goto loc_82BA0B2C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA0B2C:
	// lwz r3,220(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba0b3c
	if (cr6.eq) goto loc_82BA0B3C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA0B3C:
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba0b4c
	if (cr6.eq) goto loc_82BA0B4C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA0B4C:
	// lwz r3,204(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba0b5c
	if (cr6.eq) goto loc_82BA0B5C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA0B5C:
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba0b6c
	if (cr6.eq) goto loc_82BA0B6C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA0B6C:
	// lwz r3,172(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba0b7c
	if (cr6.eq) goto loc_82BA0B7C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA0B7C:
	// lwz r3,188(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba0b8c
	if (cr6.eq) goto loc_82BA0B8C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA0B8C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_82BA0B98"))) PPC_WEAK_FUNC(sub_82BA0B98);
PPC_FUNC_IMPL(__imp__sub_82BA0B98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82b9f0b0
	sub_82B9F0B0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82b9f570
	sub_82B9F570(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82b9f638
	sub_82B9F638(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82b9f700
	sub_82B9F700(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82b9f7c8
	sub_82B9F7C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82b9f890
	sub_82B9F890(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82b9fa20
	sub_82B9FA20(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82b9fae8
	sub_82B9FAE8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x82b9f308
	sub_82B9F308(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82b9f240
	sub_82B9F240(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x82b9f308
	sub_82B9F308(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82b9f3d0
	sub_82B9F3D0(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,-23820
	ctx.r4.s64 = r11.s64 + -23820;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82b9f498
	sub_82B9F498(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x82dfd900
	sub_82DFD900(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r30,r10,-23732
	r30.s64 = ctx.r10.s64 + -23732;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lwz r28,152(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// lwz r30,160(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r11,-23752
	r29.s64 = r11.s64 + -23752;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23764
	ctx.r4.s64 = r11.s64 + -23764;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r27,r10,-23768
	r27.s64 = ctx.r10.s64 + -23768;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lwz r30,192(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d918
	sub_82E9D918(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r29,184(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x82e9d918
	sub_82E9D918(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r26,r11,-23772
	r26.s64 = r11.s64 + -23772;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r25,r11,-23780
	r25.s64 = r11.s64 + -23780;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d918
	sub_82E9D918(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r29,144(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x82e9d918
	sub_82E9D918(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r24,r11,-23792
	r24.s64 = r11.s64 + -23792;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d918
	sub_82E9D918(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lwz r30,168(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23800
	ctx.r4.s64 = r11.s64 + -23800;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,-23812
	ctx.r4.s64 = r11.s64 + -23812;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// lwz r29,176(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d918
	sub_82E9D918(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r30,200(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x82ba7670
	sub_82BA7670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d918
	sub_82E9D918(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d918
	sub_82E9D918(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r28,r10,-23836
	r28.s64 = ctx.r10.s64 + -23836;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lwz r30,224(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r27,r11,-23852
	r27.s64 = r11.s64 + -23852;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d918
	sub_82E9D918(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,232(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x82e9d918
	sub_82E9D918(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lwz r30,216(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d918
	sub_82E9D918(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r30,208(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x82e9d918
	sub_82E9D918(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// lwz r29,212(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r30.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r29,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r29.u32);
	// beq cr6,0x82ba1240
	if (cr6.eq) goto loc_82BA1240;
	// addi r11,r29,4
	r11.s64 = r29.s64 + 4;
loc_82BA1224:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82ba1224
	if (!cr0.eq) goto loc_82BA1224;
loc_82BA1240:
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e9c5d0
	sub_82E9C5D0(ctx, base);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba125c
	if (cr6.eq) goto loc_82BA125C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA125C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82ba126c
	if (cr6.eq) goto loc_82BA126C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA126C:
	// lwz r3,220(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba127c
	if (cr6.eq) goto loc_82BA127C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA127C:
	// lwz r3,236(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba128c
	if (cr6.eq) goto loc_82BA128C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA128C:
	// lwz r3,228(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba129c
	if (cr6.eq) goto loc_82BA129C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA129C:
	// lwz r3,204(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba12ac
	if (cr6.eq) goto loc_82BA12AC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA12AC:
	// lwz r3,172(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba12bc
	if (cr6.eq) goto loc_82BA12BC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA12BC:
	// lwz r3,244(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba12cc
	if (cr6.eq) goto loc_82BA12CC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA12CC:
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba12dc
	if (cr6.eq) goto loc_82BA12DC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA12DC:
	// lwz r3,188(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba12ec
	if (cr6.eq) goto loc_82BA12EC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA12EC:
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba12fc
	if (cr6.eq) goto loc_82BA12FC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA12FC:
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba130c
	if (cr6.eq) goto loc_82BA130C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA130C:
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba131c
	if (cr6.eq) goto loc_82BA131C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA131C:
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba132c
	if (cr6.eq) goto loc_82BA132C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA132C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82BA1338"))) PPC_WEAK_FUNC(sub_82BA1338);
PPC_FUNC_IMPL(__imp__sub_82BA1338) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b0c
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82b9f0b0
	sub_82B9F0B0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82b9f570
	sub_82B9F570(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82b9fbb0
	sub_82B9FBB0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82b9f638
	sub_82B9F638(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82b9f700
	sub_82B9F700(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82b9f7c8
	sub_82B9F7C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82b9f890
	sub_82B9F890(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82b9f958
	sub_82B9F958(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x82b9fc78
	sub_82B9FC78(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82b9fa20
	sub_82B9FA20(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82b9fd40
	sub_82B9FD40(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x82b9fe08
	sub_82B9FE08(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x82b9fed0
	sub_82B9FED0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82b9ff98
	sub_82B9FF98(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// bl 0x82b9fae8
	sub_82B9FAE8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82b9f308
	sub_82B9F308(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x82b9f308
	sub_82B9F308(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82b9f240
	sub_82B9F240(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82b9f308
	sub_82B9F308(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82b9f3d0
	sub_82B9F3D0(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,-23820
	ctx.r4.s64 = r11.s64 + -23820;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// bl 0x82b9f498
	sub_82B9F498(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x82dfd900
	sub_82DFD900(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r11,0
	r11.s64 = 0;
	// addi r28,r10,-23732
	r28.s64 = ctx.r10.s64 + -23732;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lwz r30,208(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// lwz r29,240(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r27,r11,-23752
	r27.s64 = r11.s64 + -23752;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lwz r27,144(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r11,-23720
	r29.s64 = r11.s64 + -23720;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// lis r4,12
	ctx.r4.s64 = 786432;
	// li r5,15
	ctx.r5.s64 = 15;
	// ori r4,r4,4095
	ctx.r4.u64 = ctx.r4.u64 | 4095;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82baac40
	sub_82BAAC40(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r26,r11,-23764
	r26.s64 = r11.s64 + -23764;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r25,r10,-23768
	r25.s64 = ctx.r10.s64 + -23768;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lwz r29,192(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d918
	sub_82E9D918(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r28,176(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x82e9d918
	sub_82E9D918(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r24,r11,-23772
	r24.s64 = r11.s64 + -23772;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r23,r11,-23780
	r23.s64 = r11.s64 + -23780;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d918
	sub_82E9D918(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r28,160(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x82e9d918
	sub_82E9D918(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r22,r11,-23792
	r22.s64 = r11.s64 + -23792;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d918
	sub_82E9D918(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lwz r29,152(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d918
	sub_82E9D918(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lwz r29,264(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d918
	sub_82E9D918(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lwz r29,216(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d918
	sub_82E9D918(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r28,r10,-23836
	r28.s64 = ctx.r10.s64 + -23836;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r26,r11,-23852
	r26.s64 = r11.s64 + -23852;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d918
	sub_82E9D918(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,200(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x82e9d918
	sub_82E9D918(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,248(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x82e9d918
	sub_82E9D918(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r4,184(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x82e9d918
	sub_82E9D918(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lwz r30,296(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23800
	ctx.r4.s64 = r11.s64 + -23800;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,-23812
	ctx.r4.s64 = r11.s64 + -23812;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// lwz r29,256(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d918
	sub_82E9D918(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r30,168(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x82ba7670
	sub_82BA7670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d918
	sub_82E9D918(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d918
	sub_82E9D918(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r30,232(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x82ba7670
	sub_82BA7670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d918
	sub_82E9D918(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d918
	sub_82E9D918(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lwz r30,304(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d918
	sub_82E9D918(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,288(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x82e9d918
	sub_82E9D918(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lwz r30,272(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82e9d8f8
	sub_82E9D8F8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e9d918
	sub_82E9D918(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r30,280(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x82e9d918
	sub_82E9D918(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e9d890
	sub_82E9D890(ctx, base);
	// lwz r29,284(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r30.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r29,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r29.u32);
	// beq cr6,0x82ba1de8
	if (cr6.eq) goto loc_82BA1DE8;
	// addi r11,r29,4
	r11.s64 = r29.s64 + 4;
loc_82BA1DCC:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82ba1dcc
	if (!cr0.eq) goto loc_82BA1DCC;
loc_82BA1DE8:
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e9c5d0
	sub_82E9C5D0(ctx, base);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba1e04
	if (cr6.eq) goto loc_82BA1E04;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA1E04:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82ba1e14
	if (cr6.eq) goto loc_82BA1E14;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA1E14:
	// lwz r3,276(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba1e24
	if (cr6.eq) goto loc_82BA1E24;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA1E24:
	// lwz r3,292(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba1e34
	if (cr6.eq) goto loc_82BA1E34;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA1E34:
	// lwz r3,308(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba1e44
	if (cr6.eq) goto loc_82BA1E44;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA1E44:
	// lwz r3,236(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba1e54
	if (cr6.eq) goto loc_82BA1E54;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA1E54:
	// lwz r3,172(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba1e64
	if (cr6.eq) goto loc_82BA1E64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA1E64:
	// lwz r3,300(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba1e74
	if (cr6.eq) goto loc_82BA1E74;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA1E74:
	// lwz r3,188(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba1e84
	if (cr6.eq) goto loc_82BA1E84;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA1E84:
	// lwz r3,252(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba1e94
	if (cr6.eq) goto loc_82BA1E94;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA1E94:
	// lwz r3,204(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba1ea4
	if (cr6.eq) goto loc_82BA1EA4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA1EA4:
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba1eb4
	if (cr6.eq) goto loc_82BA1EB4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA1EB4:
	// lwz r3,220(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba1ec4
	if (cr6.eq) goto loc_82BA1EC4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA1EC4:
	// lwz r3,268(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba1ed4
	if (cr6.eq) goto loc_82BA1ED4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA1ED4:
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba1ee4
	if (cr6.eq) goto loc_82BA1EE4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA1EE4:
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba1ef4
	if (cr6.eq) goto loc_82BA1EF4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA1EF4:
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba1f04
	if (cr6.eq) goto loc_82BA1F04;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA1F04:
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba1f14
	if (cr6.eq) goto loc_82BA1F14;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA1F14:
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba1f24
	if (cr6.eq) goto loc_82BA1F24;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA1F24:
	// lwz r3,228(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba1f34
	if (cr6.eq) goto loc_82BA1F34;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA1F34:
	// lwz r3,244(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba1f44
	if (cr6.eq) goto loc_82BA1F44;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA1F44:
	// lwz r3,260(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba1f54
	if (cr6.eq) goto loc_82BA1F54;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA1F54:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_82BA1F60"))) PPC_WEAK_FUNC(sub_82BA1F60);
PPC_FUNC_IMPL(__imp__sub_82BA1F60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x82ba1f90
	if (cr6.lt) goto loc_82BA1F90;
	// beq cr6,0x82ba1f8c
	if (cr6.eq) goto loc_82BA1F8C;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// blt cr6,0x82ba1f88
	if (cr6.lt) goto loc_82BA1F88;
	// beq cr6,0x82ba1f84
	if (cr6.eq) goto loc_82BA1F84;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82BA1F84:
	// b 0x82ba0b98
	sub_82BA0B98(ctx, base);
	return;
loc_82BA1F88:
	// b 0x82ba0340
	sub_82BA0340(ctx, base);
	return;
loc_82BA1F8C:
	// b 0x82ba1338
	sub_82BA1338(ctx, base);
	return;
loc_82BA1F90:
	// b 0x82ba0060
	sub_82BA0060(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA1F98"))) PPC_WEAK_FUNC(sub_82BA1F98);
PPC_FUNC_IMPL(__imp__sub_82BA1F98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-25016
	ctx.r4.s64 = r11.s64 + -25016;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,-12248
	ctx.r4.s64 = ctx.r9.s64 + -12248;
	// stw r11,-2836(r10)
	PPC_STORE_U32(ctx.r10.u32 + -2836, r11.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,-25008
	ctx.r4.s64 = ctx.r9.s64 + -25008;
	// stw r11,-2832(r10)
	PPC_STORE_U32(ctx.r10.u32 + -2832, r11.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,-9732
	ctx.r4.s64 = ctx.r9.s64 + -9732;
	// stw r11,-2828(r10)
	PPC_STORE_U32(ctx.r10.u32 + -2828, r11.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,-23636
	ctx.r4.s64 = ctx.r9.s64 + -23636;
	// stw r11,-2824(r10)
	PPC_STORE_U32(ctx.r10.u32 + -2824, r11.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,-23648
	ctx.r4.s64 = ctx.r9.s64 + -23648;
	// stw r11,-2820(r10)
	PPC_STORE_U32(ctx.r10.u32 + -2820, r11.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,4300
	ctx.r4.s64 = ctx.r9.s64 + 4300;
	// stw r11,-2816(r10)
	PPC_STORE_U32(ctx.r10.u32 + -2816, r11.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,10428
	ctx.r4.s64 = ctx.r9.s64 + 10428;
	// stw r11,-2812(r10)
	PPC_STORE_U32(ctx.r10.u32 + -2812, r11.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,5084
	ctx.r4.s64 = ctx.r9.s64 + 5084;
	// stw r11,-2808(r10)
	PPC_STORE_U32(ctx.r10.u32 + -2808, r11.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,-3792
	ctx.r4.s64 = ctx.r9.s64 + -3792;
	// stw r11,-2804(r10)
	PPC_STORE_U32(ctx.r10.u32 + -2804, r11.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,-3680
	ctx.r4.s64 = ctx.r9.s64 + -3680;
	// stw r11,-2800(r10)
	PPC_STORE_U32(ctx.r10.u32 + -2800, r11.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,-23664
	ctx.r4.s64 = ctx.r9.s64 + -23664;
	// stw r11,-2796(r10)
	PPC_STORE_U32(ctx.r10.u32 + -2796, r11.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,-23684
	ctx.r4.s64 = ctx.r9.s64 + -23684;
	// stw r11,-2792(r10)
	PPC_STORE_U32(ctx.r10.u32 + -2792, r11.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,-23704
	ctx.r4.s64 = ctx.r9.s64 + -23704;
	// stw r11,-2788(r10)
	PPC_STORE_U32(ctx.r10.u32 + -2788, r11.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,-2784(r10)
	PPC_STORE_U32(ctx.r10.u32 + -2784, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA2150"))) PPC_WEAK_FUNC(sub_82BA2150);
PPC_FUNC_IMPL(__imp__sub_82BA2150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA2170"))) PPC_WEAK_FUNC(sub_82BA2170);
PPC_FUNC_IMPL(__imp__sub_82BA2170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82e76328
	sub_82E76328(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f31,2240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f31.f64 = double(temp.f32);
	// lwz r4,-2788(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -2788);
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82e193b0
	sub_82E193B0(ctx, base);
	// lis r11,-31943
	r11.s64 = -2093416448;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lwz r4,-2784(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -2784);
	// bl 0x82e193b0
	sub_82E193B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA21F0"))) PPC_WEAK_FUNC(sub_82BA21F0);
PPC_FUNC_IMPL(__imp__sub_82BA21F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82ba225c
	if (cr6.eq) goto loc_82BA225C;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// beq cr6,0x82ba224c
	if (cr6.eq) goto loc_82BA224C;
	// cmpwi cr6,r10,16
	cr6.compare<int32_t>(ctx.r10.s32, 16, xer);
	// beq cr6,0x82ba223c
	if (cr6.eq) goto loc_82BA223C;
	// cmpwi cr6,r10,20
	cr6.compare<int32_t>(ctx.r10.s32, 20, xer);
	// beq cr6,0x82ba222c
	if (cr6.eq) goto loc_82BA222C;
	// cmpwi cr6,r10,24
	cr6.compare<int32_t>(ctx.r10.s32, 24, xer);
	// bne cr6,0x82ba2268
	if (!cr6.eq) goto loc_82BA2268;
	// addi r11,r4,18
	r11.s64 = ctx.r4.s64 + 18;
	// mulli r11,r11,20
	r11.s64 = r11.s64 * 20;
	// stwx r6,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, ctx.r6.u32);
	// b 0x82ba2268
	goto loc_82BA2268;
loc_82BA222C:
	// mulli r11,r4,20
	r11.s64 = ctx.r4.s64 * 20;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// stw r6,356(r11)
	PPC_STORE_U32(r11.u32 + 356, ctx.r6.u32);
	// b 0x82ba2268
	goto loc_82BA2268;
loc_82BA223C:
	// mulli r11,r4,20
	r11.s64 = ctx.r4.s64 * 20;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// stw r6,352(r11)
	PPC_STORE_U32(r11.u32 + 352, ctx.r6.u32);
	// b 0x82ba2268
	goto loc_82BA2268;
loc_82BA224C:
	// mulli r11,r4,20
	r11.s64 = ctx.r4.s64 * 20;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// stw r6,348(r11)
	PPC_STORE_U32(r11.u32 + 348, ctx.r6.u32);
	// b 0x82ba2268
	goto loc_82BA2268;
loc_82BA225C:
	// mulli r11,r4,20
	r11.s64 = ctx.r4.s64 * 20;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// stw r6,344(r11)
	PPC_STORE_U32(r11.u32 + 344, ctx.r6.u32);
loc_82BA2268:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// add r11,r3,r10
	r11.u64 = ctx.r3.u64 + ctx.r10.u64;
	// lwz r11,468(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 468);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82BA2280"))) PPC_WEAK_FUNC(sub_82BA2280);
PPC_FUNC_IMPL(__imp__sub_82BA2280) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r11,r11,-23620
	r11.s64 = r11.s64 + -23620;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r3,244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba22b0
	if (cr6.eq) goto loc_82BA22B0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA22B0:
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba22c0
	if (cr6.eq) goto loc_82BA22C0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA22C0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e9d348
	sub_82E9D348(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA22E0"))) PPC_WEAK_FUNC(sub_82BA22E0);
PPC_FUNC_IMPL(__imp__sub_82BA22E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	// li r8,16
	ctx.r8.s64 = 16;
	// lvlx128 v63,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r9,32
	ctx.r9.s64 = 32;
	// li r10,48
	ctx.r10.s64 = 48;
	// addi r11,r3,176
	r11.s64 = ctx.r3.s64 + 176;
	// lvlx128 v62,r8,r4
	temp.u32 = ctx.r8.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r9,r4
	temp.u32 = ctx.r9.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r11,r8
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r11,r9
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r11,r10
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA2318"))) PPC_WEAK_FUNC(sub_82BA2318);
PPC_FUNC_IMPL(__imp__sub_82BA2318) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mulli r11,r4,20
	r11.s64 = ctx.r4.s64 * 20;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// li r8,1
	ctx.r8.s64 = 1;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rldicr r8,r8,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// stw r5,344(r11)
	PPC_STORE_U32(r11.u32 + 344, ctx.r5.u32);
	// addi r10,r4,48
	ctx.r10.s64 = ctx.r4.s64 + 48;
	// srd r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r9.u8 & 0x7F));
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// rlwimi r7,r5,10,19,21
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r5.u32, 10) & 0x1C00) | (ctx.r7.u64 & 0xFFFFFFFFFFFFE3FF);
	// stwx r7,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r7.u32);
	// ld r7,24(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 24);
	// or r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 | ctx.r7.u64;
	// std r7,24(r8)
	PPC_STORE_U64(ctx.r8.u32 + 24, ctx.r7.u64);
	// stw r5,348(r11)
	PPC_STORE_U32(r11.u32 + 348, ctx.r5.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// rlwimi r8,r5,13,16,18
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r5.u32, 13) & 0xE000) | (ctx.r8.u64 & 0xFFFFFFFFFFFF1FFF);
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r8.u32);
	// ld r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 24);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// std r10,24(r11)
	PPC_STORE_U64(r11.u32 + 24, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA2380"))) PPC_WEAK_FUNC(sub_82BA2380);
PPC_FUNC_IMPL(__imp__sub_82BA2380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mulli r11,r31,20
	r11.s64 = r31.s64 * 20;
	// add r29,r11,r30
	r29.u64 = r11.u64 + r30.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// stw r5,352(r29)
	PPC_STORE_U32(r29.u32 + 352, ctx.r5.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82bdc730
	sub_82BDC730(ctx, base);
	// stw r28,356(r29)
	PPC_STORE_U32(r29.u32 + 356, r28.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82bdc588
	sub_82BDC588(ctx, base);
	// addi r11,r31,18
	r11.s64 = r31.s64 + 18;
	// mulli r11,r11,20
	r11.s64 = r11.s64 * 20;
	// stwx r27,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, r27.u32);
	// addi r10,r31,32
	ctx.r10.s64 = r31.s64 + 32;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mulli r11,r31,24
	r11.s64 = r31.s64 * 24;
	// srd r8,r9,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r9,r11,1164
	ctx.r9.s64 = r11.s64 + 1164;
	// lwz r9,1164(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 1164);
	// rlwimi r9,r27,23,7,8
	ctx.r9.u64 = (__builtin_rotateleft32(r27.u32, 23) & 0x1800000) | (ctx.r9.u64 & 0xFFFFFFFFFE7FFFFF);
	// stw r9,1164(r11)
	PPC_STORE_U32(r11.u32 + 1164, ctx.r9.u32);
	// ld r11,24(r10)
	r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// or r11,r8,r11
	r11.u64 = ctx.r8.u64 | r11.u64;
	// std r11,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, r11.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82BA2418"))) PPC_WEAK_FUNC(sub_82BA2418);
PPC_FUNC_IMPL(__imp__sub_82BA2418) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82ba2280
	sub_82BA2280(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ba2448
	if (cr0.eq) goto loc_82BA2448;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_82BA2448:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA2468"))) PPC_WEAK_FUNC(sub_82BA2468);
PPC_FUNC_IMPL(__imp__sub_82BA2468) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82e76328
	sub_82E76328(ctx, base);
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bne 0x82ba2554
	if (!cr0.eq) goto loc_82BA2554;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e9d048
	sub_82E9D048(ctx, base);
	// addi r5,r31,240
	ctx.r5.s64 = r31.s64 + 240;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x82e9f430
	sub_82E9F430(ctx, base);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r11,1
	r11.s64 = 1;
	// stw r10,544(r28)
	PPC_STORE_U32(r28.u32 + 544, ctx.r10.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r8,1392(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1392);
	// rlwimi r8,r11,11,19,21
	ctx.r8.u64 = (__builtin_rotateleft32(r11.u32, 11) & 0x1C00) | (ctx.r8.u64 & 0xFFFFFFFFFFFFE3FF);
	// stw r8,1392(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1392, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 24);
	// oris r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 | 2097152;
	// std r8,24(r9)
	PPC_STORE_U64(ctx.r9.u32 + 24, ctx.r8.u64);
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r10,548(r28)
	PPC_STORE_U32(r28.u32 + 548, ctx.r10.u32);
	// lwz r10,1392(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1392);
	// rlwimi r10,r11,14,16,18
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 14) & 0xE000) | (ctx.r10.u64 & 0xFFFFFFFFFFFF1FFF);
	// stw r10,1392(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1392, ctx.r10.u32);
	// ld r11,24(r9)
	r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 24);
	// oris r11,r11,32
	r11.u64 = r11.u64 | 2097152;
	// std r11,24(r9)
	PPC_STORE_U64(ctx.r9.u32 + 24, r11.u64);
	// bl 0x82ba2380
	sub_82BA2380(ctx, base);
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// addi r5,r11,-2864
	ctx.r5.s64 = r11.s64 + -2864;
	// lwz r11,-2848(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2848);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82ba2544
	if (!cr0.eq) goto loc_82BA2544;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-2848(r10)
	PPC_STORE_U32(ctx.r10.u32 + -2848, r11.u32);
	// lfs f0,2244(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2244);
	f0.f64 = double(temp.f32);
	// lfs f13,2240(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2240);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f0,4(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// stfs f13,8(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// stfs f13,12(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
loc_82BA2544:
	// lis r11,-31943
	r11.s64 = -2093416448;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r4,-2792(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -2792);
	// bl 0x82e19108
	sub_82E19108(ctx, base);
loc_82BA2554:
	// lis r31,-31943
	r31.s64 = -2093416448;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,-2796(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + -2796);
	// bl 0x82e19280
	sub_82E19280(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,-2796(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + -2796);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82e19578
	sub_82E19578(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82BA2580"))) PPC_WEAK_FUNC(sub_82BA2580);
PPC_FUNC_IMPL(__imp__sub_82BA2580) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82e76328
	sub_82E76328(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82e9d040
	sub_82E9D040(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82e9d048
	sub_82E9D048(ctx, base);
	// rlwinm. r11,r26,0,30,30
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r28,-31943
	r28.s64 = -2093416448;
	// beq 0x82ba25f0
	if (cr0.eq) goto loc_82BA25F0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ba2468
	sub_82BA2468(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ba2170
	sub_82BA2170(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r5,-2812(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + -2812);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r6,31072(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 31072);
	// bl 0x82e236a8
	sub_82E236A8(ctx, base);
loc_82BA25F0:
	// rlwinm. r11,r26,0,29,29
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ba2628
	if (cr0.eq) goto loc_82BA2628;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ba2468
	sub_82BA2468(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ba2170
	sub_82BA2170(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r5,-2812(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + -2812);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r6,31040(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 31040);
	// bl 0x82e236a8
	sub_82E236A8(ctx, base);
loc_82BA2628:
	// rlwinm. r11,r26,0,28,28
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ba2698
	if (cr0.eq) goto loc_82BA2698;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ba2468
	sub_82BA2468(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ba2170
	sub_82BA2170(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,308
	ctx.r4.s64 = 308;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// li r4,308
	ctx.r4.s64 = 308;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82e16dd0
	sub_82E16DD0(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r5,-2812(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + -2812);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r6,31044(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 31044);
	// bl 0x82e236a8
	sub_82E236A8(ctx, base);
	// li r4,308
	ctx.r4.s64 = 308;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82e16df8
	sub_82E16DF8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,308
	ctx.r4.s64 = 308;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
loc_82BA2698:
	// rlwinm. r11,r26,0,27,27
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ba26d0
	if (cr0.eq) goto loc_82BA26D0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ba2468
	sub_82BA2468(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ba2170
	sub_82BA2170(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r5,-2812(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + -2812);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r6,31048(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 31048);
	// bl 0x82e236a8
	sub_82E236A8(ctx, base);
loc_82BA26D0:
	// rlwinm. r11,r26,0,26,26
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ba2708
	if (cr0.eq) goto loc_82BA2708;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ba2468
	sub_82BA2468(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ba2170
	sub_82BA2170(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r5,-2812(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + -2812);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r6,31052(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 31052);
	// bl 0x82e236a8
	sub_82E236A8(ctx, base);
loc_82BA2708:
	// rlwinm. r11,r26,0,25,25
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ba2740
	if (cr0.eq) goto loc_82BA2740;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ba2468
	sub_82BA2468(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ba2170
	sub_82BA2170(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r5,-2812(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + -2812);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r6,31056(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 31056);
	// bl 0x82e236a8
	sub_82E236A8(ctx, base);
loc_82BA2740:
	// rlwinm. r11,r26,0,24,24
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ba2778
	if (cr0.eq) goto loc_82BA2778;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ba2468
	sub_82BA2468(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ba2170
	sub_82BA2170(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r5,-2812(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + -2812);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r6,31060(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 31060);
	// bl 0x82e236a8
	sub_82E236A8(ctx, base);
loc_82BA2778:
	// rlwinm. r11,r26,0,23,23
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ba27b0
	if (cr0.eq) goto loc_82BA27B0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ba2468
	sub_82BA2468(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ba2170
	sub_82BA2170(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r5,-2812(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + -2812);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r6,31064(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 31064);
	// bl 0x82e236a8
	sub_82E236A8(ctx, base);
loc_82BA27B0:
	// clrlwi. r11,r26,31
	r11.u64 = r26.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ba27e8
	if (cr0.eq) goto loc_82BA27E8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ba2468
	sub_82BA2468(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ba2170
	sub_82BA2170(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r5,-2812(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + -2812);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r6,31068(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 31068);
	// bl 0x82e236a8
	sub_82E236A8(ctx, base);
loc_82BA27E8:
	// rlwinm. r11,r26,0,12,12
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x80000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ba2818
	if (cr0.eq) goto loc_82BA2818;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ba2468
	sub_82BA2468(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r5,-2812(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + -2812);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r6,31152(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 31152);
	// bl 0x82e236a8
	sub_82E236A8(ctx, base);
loc_82BA2818:
	// rlwinm. r11,r26,0,13,13
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ba2848
	if (cr0.eq) goto loc_82BA2848;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ba2468
	sub_82BA2468(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r5,-2812(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + -2812);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r6,31148(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 31148);
	// bl 0x82e236a8
	sub_82E236A8(ctx, base);
loc_82BA2848:
	// rlwinm. r11,r26,0,21,21
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ba2878
	if (cr0.eq) goto loc_82BA2878;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ba2468
	sub_82BA2468(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r5,-2812(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + -2812);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r6,31076(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 31076);
	// bl 0x82e236a8
	sub_82E236A8(ctx, base);
loc_82BA2878:
	// rlwinm. r11,r26,0,17,17
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x4000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ba28a8
	if (cr0.eq) goto loc_82BA28A8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ba2468
	sub_82BA2468(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r5,-2812(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + -2812);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r6,31132(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 31132);
	// bl 0x82e236a8
	sub_82E236A8(ctx, base);
loc_82BA28A8:
	// rlwinm. r11,r26,0,16,16
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ba28d8
	if (cr0.eq) goto loc_82BA28D8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ba2468
	sub_82BA2468(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r5,-2812(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + -2812);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r6,31136(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 31136);
	// bl 0x82e236a8
	sub_82E236A8(ctx, base);
loc_82BA28D8:
	// rlwinm. r11,r26,0,15,15
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x10000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ba2908
	if (cr0.eq) goto loc_82BA2908;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ba2468
	sub_82BA2468(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r5,-2812(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + -2812);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r6,31140(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 31140);
	// bl 0x82e236a8
	sub_82E236A8(ctx, base);
loc_82BA2908:
	// rlwinm. r11,r26,0,14,14
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x20000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ba2938
	if (cr0.eq) goto loc_82BA2938;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ba2468
	sub_82BA2468(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r5,-2812(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + -2812);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r6,31144(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 31144);
	// bl 0x82e236a8
	sub_82E236A8(ctx, base);
loc_82BA2938:
	// rlwinm. r11,r26,0,20,20
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ba29cc
	if (cr0.eq) goto loc_82BA29CC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ba2468
	sub_82BA2468(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,148(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 148);
	// bl 0x82532900
	sub_82532900(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ba2974
	if (!cr0.eq) goto loc_82BA2974;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,148(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 148);
	// bl 0x82532900
	sub_82532900(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ba2990
	if (cr0.eq) goto loc_82BA2990;
loc_82BA2974:
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r5,-2812(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + -2812);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r6,31084(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 31084);
	// bl 0x82e236a8
	sub_82E236A8(ctx, base);
loc_82BA2990:
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r5,-2812(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + -2812);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r6,31124(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 31124);
	// bl 0x82e236a8
	sub_82E236A8(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r6,31128(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 31128);
	// lwz r5,-2808(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2808);
	// bl 0x82e236a8
	sub_82E236A8(ctx, base);
loc_82BA29CC:
	// rlwinm. r11,r26,0,19,19
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ba2a6c
	if (cr0.eq) goto loc_82BA2A6C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ba2468
	sub_82BA2468(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r5,-2812(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + -2812);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r6,31088(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 31088);
	// bl 0x82e236a8
	sub_82E236A8(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r5,-2812(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + -2812);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r6,31092(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 31092);
	// bl 0x82e236a8
	sub_82E236A8(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r5,-2812(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + -2812);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r6,31096(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 31096);
	// bl 0x82e236a8
	sub_82E236A8(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r5,-2812(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + -2812);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r6,31100(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 31100);
	// bl 0x82e236a8
	sub_82E236A8(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r5,-2812(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + -2812);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r6,31104(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 31104);
	// bl 0x82e236a8
	sub_82E236A8(ctx, base);
loc_82BA2A6C:
	// rlwinm. r11,r26,0,18,18
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x2000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ba2af4
	if (cr0.eq) goto loc_82BA2AF4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ba2468
	sub_82BA2468(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r5,-2812(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + -2812);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r6,31108(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 31108);
	// bl 0x82e236a8
	sub_82E236A8(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r5,-2812(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + -2812);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r6,31112(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 31112);
	// bl 0x82e236a8
	sub_82E236A8(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lis r28,-31943
	r28.s64 = -2093416448;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r6,31116(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 31116);
	// lwz r5,-2804(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + -2804);
	// bl 0x82e236a8
	sub_82E236A8(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r5,-2804(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + -2804);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r6,31120(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 31120);
	// bl 0x82e236a8
	sub_82E236A8(ctx, base);
loc_82BA2AF4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82BA2B00"))) PPC_WEAK_FUNC(sub_82BA2B00);
PPC_FUNC_IMPL(__imp__sub_82BA2B00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b0c
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// bl 0x82e76328
	sub_82E76328(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e9d040
	sub_82E9D040(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e9d048
	sub_82E9D048(ctx, base);
	// lwz r11,240(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 240);
	// addi r31,r28,240
	r31.s64 = r28.s64 + 240;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ba2bb0
	if (!cr6.eq) goto loc_82BA2BB0;
	// lis r9,10240
	ctx.r9.s64 = 671088640;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r9,r9,258
	ctx.r9.u64 = ctx.r9.u64 | 258;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ea2790
	sub_82EA2790(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba2b98
	if (cr6.eq) goto loc_82BA2B98;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA2B98:
	// lis r11,-32070
	r11.s64 = -2101739520;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,8528
	ctx.r5.s64 = r11.s64 + 8528;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82e9ef90
	sub_82E9EF90(ctx, base);
loc_82BA2BB0:
	// lis r11,-31943
	r11.s64 = -2093416448;
	// lbz r11,-4180(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + -4180);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ba2bc8
	if (cr0.eq) goto loc_82BA2BC8;
	// li r12,-16390
	r12.s64 = -16390;
	// and r24,r24,r12
	r24.u64 = r24.u64 & r12.u64;
loc_82BA2BC8:
	// rlwinm. r11,r24,0,22,22
	r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r23,-31943
	r23.s64 = -2093416448;
	// lis r25,-31943
	r25.s64 = -2093416448;
	// lis r22,-31943
	r22.s64 = -2093416448;
	// beq 0x82ba2ca0
	if (cr0.eq) goto loc_82BA2CA0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ba2468
	sub_82BA2468(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lfs f0,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r4,-2800(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2800);
	// stfs f0,120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f0,164(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 164);
	f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x82e194a8
	sub_82E194A8(ctx, base);
	// clrlwi. r11,r21,31
	r11.u64 = r21.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r30,-31943
	r30.s64 = -2093416448;
	// lis r31,-31946
	r31.s64 = -2093613056;
	// beq 0x82ba2c40
	if (cr0.eq) goto loc_82BA2C40;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r7,-2836(r25)
	ctx.r7.u64 = PPC_LOAD_U32(r25.u32 + -2836);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r6,31080(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 31080);
	// lwz r5,-2812(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + -2812);
	// bl 0x82e236a8
	sub_82E236A8(ctx, base);
loc_82BA2C40:
	// rlwinm. r11,r21,0,30,30
	r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ba2c60
	if (cr0.eq) goto loc_82BA2C60;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r7,-2832(r23)
	ctx.r7.u64 = PPC_LOAD_U32(r23.u32 + -2832);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r6,31080(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 31080);
	// lwz r5,-2812(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + -2812);
	// bl 0x82e236a8
	sub_82E236A8(ctx, base);
loc_82BA2C60:
	// rlwinm. r11,r21,0,29,29
	r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ba2ca0
	if (cr0.eq) goto loc_82BA2CA0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// li r4,308
	ctx.r4.s64 = 308;
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r7,-2828(r22)
	ctx.r7.u64 = PPC_LOAD_U32(r22.u32 + -2828);
	// lwz r6,31080(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 31080);
	// lwz r5,-2812(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + -2812);
	// bl 0x82e236a8
	sub_82E236A8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// li r4,308
	ctx.r4.s64 = 308;
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
loc_82BA2CA0:
	// rlwinm. r11,r24,0,23,21
	r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ba2d4c
	if (cr0.eq) goto loc_82BA2D4C;
	// clrlwi. r11,r21,31
	r11.u64 = r21.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ba2cc0
	if (cr0.eq) goto loc_82BA2CC0;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r5,-2836(r25)
	ctx.r5.u64 = PPC_LOAD_U32(r25.u32 + -2836);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ba2580
	sub_82BA2580(ctx, base);
loc_82BA2CC0:
	// rlwinm. r11,r21,0,30,30
	r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ba2cd8
	if (cr0.eq) goto loc_82BA2CD8;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r5,-2832(r23)
	ctx.r5.u64 = PPC_LOAD_U32(r23.u32 + -2832);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ba2580
	sub_82BA2580(ctx, base);
loc_82BA2CD8:
	// rlwinm. r11,r21,0,28,28
	r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ba2d14
	if (cr0.eq) goto loc_82BA2D14;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// li r4,308
	ctx.r4.s64 = 308;
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// lis r11,-31943
	r11.s64 = -2093416448;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,-2824(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + -2824);
	// bl 0x82ba2580
	sub_82BA2580(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// li r4,308
	ctx.r4.s64 = 308;
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
loc_82BA2D14:
	// rlwinm. r11,r21,0,29,29
	r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ba2d4c
	if (cr0.eq) goto loc_82BA2D4C;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// li r4,308
	ctx.r4.s64 = 308;
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,-2828(r22)
	ctx.r5.u64 = PPC_LOAD_U32(r22.u32 + -2828);
	// bl 0x82ba2580
	sub_82BA2580(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,308
	ctx.r4.s64 = 308;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
loc_82BA2D4C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_82BA2D58"))) PPC_WEAK_FUNC(sub_82BA2D58);
PPC_FUNC_IMPL(__imp__sub_82BA2D58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82e9d748
	sub_82E9D748(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// stw r30,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r30.u32);
	// stw r29,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r29.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,-23620
	r11.s64 = r11.s64 + -23620;
	// addi r4,r10,-23608
	ctx.r4.s64 = ctx.r10.s64 + -23608;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r30,0
	r30.s64 = 0;
	// beq 0x82ba2dcc
	if (cr0.eq) goto loc_82BA2DCC;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r30.u32);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r30.u32);
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r30.u32);
	// stw r30,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r30.u32);
	// b 0x82ba2dd0
	goto loc_82BA2DD0;
loc_82BA2DCC:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_82BA2DD0:
	// stw r29,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r29.u32);
	// addi r11,r31,152
	r11.s64 = r31.s64 + 152;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r28,r11,4
	r28.s64 = r11.s64 + 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ae39a0
	sub_82AE39A0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stb r30,160(r31)
	PPC_STORE_U8(r31.u32 + 160, r30.u8);
	// lis r11,-31943
	r11.s64 = -2093416448;
	// stb r30,161(r31)
	PPC_STORE_U8(r31.u32 + 161, r30.u8);
	// li r6,16
	ctx.r6.s64 = 16;
	// stb r30,162(r31)
	PPC_STORE_U8(r31.u32 + 162, r30.u8);
	// addi r4,r11,29088
	ctx.r4.s64 = r11.s64 + 29088;
	// stb r30,163(r31)
	PPC_STORE_U8(r31.u32 + 163, r30.u8);
	// li r7,32
	ctx.r7.s64 = 32;
	// lfs f0,2244(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2244);
	f0.f64 = double(temp.f32);
	// li r8,48
	ctx.r8.s64 = 48;
	// stfs f0,164(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 164, temp.u32);
	// lis r9,-31943
	ctx.r9.s64 = -2093416448;
	// addi r11,r31,176
	r11.s64 = r31.s64 + 176;
	// lwz r10,-2840(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -2840);
	// clrlwi. r5,r10,31
	ctx.r5.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// lvlx128 v63,r6,r4
	temp.u32 = ctx.r6.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r7,r4
	temp.u32 = ctx.r7.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r8,r4
	temp.u32 = ctx.r8.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stvx128 v60,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r6
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r11,r7
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r11,r8
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r30,240(r31)
	PPC_STORE_U32(r31.u32 + 240, r30.u32);
	// stw r30,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r30.u32);
	// bne 0x82ba2e78
	if (!cr0.eq) goto loc_82BA2E78;
	// ori r11,r10,1
	r11.u64 = ctx.r10.u64 | 1;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// stw r11,-2840(r9)
	PPC_STORE_U32(ctx.r9.u32 + -2840, r11.u32);
	// addi r3,r10,-2844
	ctx.r3.s64 = ctx.r10.s64 + -2844;
	// bl 0x82ba1f98
	sub_82BA1F98(ctx, base);
loc_82BA2E78:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82BA2E88"))) PPC_WEAK_FUNC(sub_82BA2E88);
PPC_FUNC_IMPL(__imp__sub_82BA2E88) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e9c3c8
	sub_82E9C3C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA2E90"))) PPC_WEAK_FUNC(sub_82BA2E90);
PPC_FUNC_IMPL(__imp__sub_82BA2E90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,176(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA2E98"))) PPC_WEAK_FUNC(sub_82BA2E98);
PPC_FUNC_IMPL(__imp__sub_82BA2E98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82e9c3c8
	sub_82E9C3C8(ctx, base);
	// bl 0x8246c608
	sub_8246C608(ctx, base);
	// addi r11,r31,24
	r11.s64 = r31.s64 + 24;
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// stb r11,24(r31)
	PPC_STORE_U8(r31.u32 + 24, r11.u8);
	// lbz r11,1(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// stb r11,25(r31)
	PPC_STORE_U8(r31.u32 + 25, r11.u8);
	// lbz r11,2(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// stb r11,26(r31)
	PPC_STORE_U8(r31.u32 + 26, r11.u8);
	// lbz r11,3(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// stb r11,27(r31)
	PPC_STORE_U8(r31.u32 + 27, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA2EF0"))) PPC_WEAK_FUNC(sub_82BA2EF0);
PPC_FUNC_IMPL(__imp__sub_82BA2EF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r4,24
	r31.s64 = ctx.r4.s64 + 24;
	// bl 0x82e9c3c8
	sub_82E9C3C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA2F28"))) PPC_WEAK_FUNC(sub_82BA2F28);
PPC_FUNC_IMPL(__imp__sub_82BA2F28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82e9c3c8
	sub_82E9C3C8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82e76328
	sub_82E76328(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824907e8
	sub_824907E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82e17c60
	sub_82E17C60(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x822c6518
	sub_822C6518(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x822c6518
	sub_822C6518(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA2F90"))) PPC_WEAK_FUNC(sub_82BA2F90);
PPC_FUNC_IMPL(__imp__sub_82BA2F90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82e9c3c8
	sub_82E9C3C8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e9c3b8
	sub_82E9C3B8(ctx, base);
	// lwz r11,680(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 680);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ba2fd8
	if (cr6.eq) goto loc_82BA2FD8;
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ba22e0
	sub_82BA22E0(ctx, base);
	// b 0x82ba302c
	goto loc_82BA302C;
loc_82BA2FD8:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4300
	ctx.r4.s64 = r11.s64 + 4300;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,160(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// bl 0x8250f238
	sub_8250F238(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-148
	ctx.r3.s64 = r11.s64 + -148;
	// bne cr6,0x82ba3014
	if (!cr6.eq) goto loc_82BA3014;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BA3014:
	// bl 0x8252bb90
	sub_8252BB90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ba22e0
	sub_82BA22E0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
loc_82BA302C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stfs f0,176(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 176, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA3050"))) PPC_WEAK_FUNC(sub_82BA3050);
PPC_FUNC_IMPL(__imp__sub_82BA3050) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r31,r11,-2768
	r31.s64 = r11.s64 + -2768;
	// lwz r11,-2752(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2752);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82ba3098
	if (!cr0.eq) goto loc_82BA3098;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-2752(r10)
	PPC_STORE_U32(ctx.r10.u32 + -2752, r11.u32);
	// lfs f0,2244(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f0,12(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
loc_82BA3098:
	// bl 0x82e9c3c8
	sub_82E9C3C8(ctx, base);
	// addi r5,r30,32
	ctx.r5.s64 = r30.s64 + 32;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82e9d118
	sub_82E9D118(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// bl 0x82e9d180
	sub_82E9D180(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82BA30C8"))) PPC_WEAK_FUNC(sub_82BA30C8);
PPC_FUNC_IMPL(__imp__sub_82BA30C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822c0988
	sub_822C0988(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ba3120
	if (cr0.eq) goto loc_82BA3120;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-23536
	ctx.r9.s64 = r11.s64 + -23536;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82ba3124
	goto loc_82BA3124;
loc_82BA3120:
	// li r11,0
	r11.s64 = 0;
loc_82BA3124:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ba3170
	if (!cr6.eq) goto loc_82BA3170;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82ba3150
	if (cr6.eq) goto loc_82BA3150;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BA3150:
	// lis r11,-31951
	r11.s64 = -2093940736;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-15272(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -15272);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82BA3170:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA3190"))) PPC_WEAK_FUNC(sub_82BA3190);
PPC_FUNC_IMPL(__imp__sub_82BA3190) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,-23496
	r11.s64 = r11.s64 + -23496;
	// addi r10,r10,-23516
	ctx.r10.s64 = ctx.r10.s64 + -23516;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r30,r31,12
	r30.s64 = r31.s64 + 12;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba31d4
	if (cr6.eq) goto loc_82BA31D4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA31D4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e61da0
	sub_82E61DA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e9cf20
	sub_82E9CF20(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA3200"))) PPC_WEAK_FUNC(sub_82BA3200);
PPC_FUNC_IMPL(__imp__sub_82BA3200) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
	// b 0x82ba3290
	sub_82BA3290(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA3208"))) PPC_WEAK_FUNC(sub_82BA3208);
PPC_FUNC_IMPL(__imp__sub_82BA3208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// li r27,0
	r27.s64 = 0;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ba3244
	if (cr0.eq) goto loc_82BA3244;
	// li r27,1
	r27.s64 = 1;
loc_82BA3244:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e9c398
	sub_82E9C398(ctx, base);
	// lwz r31,4(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r30,8(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x82ba3278
	goto loc_82BA3278;
loc_82BA3258:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
loc_82BA3278:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x82ba3258
	if (!cr6.eq) goto loc_82BA3258;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82BA3290"))) PPC_WEAK_FUNC(sub_82BA3290);
PPC_FUNC_IMPL(__imp__sub_82BA3290) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82ba3190
	sub_82BA3190(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ba32c0
	if (cr0.eq) goto loc_82BA32C0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_82BA32C0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA32E0"))) PPC_WEAK_FUNC(sub_82BA32E0);
PPC_FUNC_IMPL(__imp__sub_82BA32E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,176(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 176, temp.u32);
	// bl 0x82e9c398
	sub_82E9C398(ctx, base);
	// lwz r30,4(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r28,8(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x82ba3328
	goto loc_82BA3328;
loc_82BA330C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
loc_82BA3328:
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// bne cr6,0x82ba330c
	if (!cr6.eq) goto loc_82BA330C;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba3394
	if (cr6.eq) goto loc_82BA3394;
	// bl 0x82e06cc8
	sub_82E06CC8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ba3394
	if (cr0.eq) goto loc_82BA3394;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e9c3c8
	sub_82E9C3C8(ctx, base);
	// lwz r11,168(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,32
	ctx.r5.s64 = r11.s64 + 32;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82e9d118
	sub_82E9D118(ctx, base);
	// lwz r11,168(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r11,48
	ctx.r5.s64 = r11.s64 + 48;
	// bl 0x82e9d180
	sub_82E9D180(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,168(r31)
	PPC_STORE_U32(r31.u32 + 168, r11.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r11.u32);
	// beq cr6,0x82ba3394
	if (cr6.eq) goto loc_82BA3394;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA3394:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82BA33A0"))) PPC_WEAK_FUNC(sub_82BA33A0);
PPC_FUNC_IMPL(__imp__sub_82BA33A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,160(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 160);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x8250c0b8
	sub_8250C0B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82e5e6c8
	sub_82E5E6C8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r28,r31,4
	r28.s64 = r31.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// beq cr6,0x82ba3444
	if (cr6.eq) goto loc_82BA3444;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e36e08
	sub_82E36E08(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba343c
	if (cr6.eq) goto loc_82BA343C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA343C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_82BA3444:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82ba349c
	if (cr6.eq) goto loc_82BA349C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e36cb8
	sub_82E36CB8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba3494
	if (cr6.eq) goto loc_82BA3494;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA3494:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_82BA349C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e5e6e0
	sub_82E5E6E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82BA34B0"))) PPC_WEAK_FUNC(sub_82BA34B0);
PPC_FUNC_IMPL(__imp__sub_82BA34B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,160(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 160);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x8250c0b8
	sub_8250C0B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82e5e6c8
	sub_82E5E6C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82e34550
	sub_82E34550(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e5e6e0
	sub_82E5E6E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA3530"))) PPC_WEAK_FUNC(sub_82BA3530);
PPC_FUNC_IMPL(__imp__sub_82BA3530) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x8250c0b8
	sub_8250C0B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82e5e6c8
	sub_82E5E6C8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,28
	ctx.r5.s64 = r31.s64 + 28;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e344e0
	sub_82E344E0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r30,168
	ctx.r10.s64 = r30.s64 + 168;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,168(r30)
	PPC_STORE_U32(r30.u32 + 168, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba35a4
	if (cr6.eq) goto loc_82BA35A4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA35A4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e5e6e0
	sub_82E5E6E0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA35C8"))) PPC_WEAK_FUNC(sub_82BA35C8);
PPC_FUNC_IMPL(__imp__sub_82BA35C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// clrlwi. r29,r28,24
	r29.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x82ba361c
	if (cr0.eq) goto loc_82BA361C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31959
	r11.s64 = -2094465024;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,3596
	ctx.r3.s64 = r11.s64 + 3596;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ba361c
	if (cr0.eq) goto loc_82BA361C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-12
	ctx.r3.s64 = r30.s64 + -12;
	// bl 0x82ba2e98
	sub_82BA2E98(ctx, base);
loc_82BA3614:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82ba3744
	goto loc_82BA3744;
loc_82BA361C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82ba365c
	if (cr6.eq) goto loc_82BA365C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31952
	r11.s64 = -2094006272;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,9644
	ctx.r3.s64 = r11.s64 + 9644;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ba3654
	if (cr0.eq) goto loc_82BA3654;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-12
	ctx.r3.s64 = r30.s64 + -12;
	// bl 0x82ba2ef0
	sub_82BA2EF0(ctx, base);
	// b 0x82ba3614
	goto loc_82BA3614;
loc_82BA3654:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82ba3734
	if (!cr6.eq) goto loc_82BA3734;
loc_82BA365C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31952
	r11.s64 = -2094006272;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,9520
	ctx.r3.s64 = r11.s64 + 9520;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ba368c
	if (cr0.eq) goto loc_82BA368C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-12
	ctx.r3.s64 = r30.s64 + -12;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// b 0x82ba3614
	goto loc_82BA3614;
loc_82BA368C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82ba3734
	if (!cr6.eq) goto loc_82BA3734;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31952
	r11.s64 = -2094006272;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,9468
	ctx.r3.s64 = r11.s64 + 9468;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ba36c4
	if (cr0.eq) goto loc_82BA36C4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-12
	ctx.r3.s64 = r30.s64 + -12;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// b 0x82ba3614
	goto loc_82BA3614;
loc_82BA36C4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82ba3734
	if (!cr6.eq) goto loc_82BA3734;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31952
	r11.s64 = -2094006272;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,9420
	ctx.r3.s64 = r11.s64 + 9420;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ba36fc
	if (cr0.eq) goto loc_82BA36FC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-12
	ctx.r3.s64 = r30.s64 + -12;
	// bl 0x82ba3050
	sub_82BA3050(ctx, base);
	// b 0x82ba3614
	goto loc_82BA3614;
loc_82BA36FC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82ba3734
	if (!cr6.eq) goto loc_82BA3734;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31952
	r11.s64 = -2094006272;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,9372
	ctx.r3.s64 = r11.s64 + 9372;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ba3734
	if (cr0.eq) goto loc_82BA3734;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-12
	ctx.r3.s64 = r30.s64 + -12;
	// bl 0x82ba3530
	sub_82BA3530(ctx, base);
	// b 0x82ba3614
	goto loc_82BA3614;
loc_82BA3734:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e71e58
	sub_82E71E58(ctx, base);
loc_82BA3744:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82BA3750"))) PPC_WEAK_FUNC(sub_82BA3750);
PPC_FUNC_IMPL(__imp__sub_82BA3750) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x82e9ce80
	sub_82E9CE80(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82e61f28
	sub_82E61F28(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r28,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r28.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r27,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r27.u32);
	// addi r11,r11,-23496
	r11.s64 = r11.s64 + -23496;
	// addi r10,r10,-23516
	ctx.r10.s64 = ctx.r10.s64 + -23516;
	// li r26,0
	r26.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r26,168(r31)
	PPC_STORE_U32(r31.u32 + 168, r26.u32);
	// lfs f0,2240(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stw r26,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r26.u32);
	// stfs f0,176(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 176, temp.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82e9c7e0
	sub_82E9C7E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e9c3b8
	sub_82E9C3B8(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r29,r11,-23320
	r29.s64 = r11.s64 + -23320;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r6,r10,-23332
	ctx.r6.s64 = ctx.r10.s64 + -23332;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82e9cd40
	sub_82E9CD40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,40
	ctx.r3.s64 = r30.s64 + 40;
	// bl 0x82bc2e30
	sub_82BC2E30(ctx, base);
	// lwz r3,220(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba380c
	if (cr6.eq) goto loc_82BA380C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA380C:
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba381c
	if (cr6.eq) goto loc_82BA381C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA381C:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r6,r11,-23344
	ctx.r6.s64 = r11.s64 + -23344;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82e9cd40
	sub_82E9CD40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,56
	ctx.r3.s64 = r30.s64 + 56;
	// bl 0x82bc2e30
	sub_82BC2E30(ctx, base);
	// lwz r3,188(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba3850
	if (cr6.eq) goto loc_82BA3850;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA3850:
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba3860
	if (cr6.eq) goto loc_82BA3860;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA3860:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r6,r11,-23364
	ctx.r6.s64 = r11.s64 + -23364;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82e9cd40
	sub_82E9CD40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,72
	ctx.r3.s64 = r30.s64 + 72;
	// bl 0x82bc2e30
	sub_82BC2E30(ctx, base);
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba3894
	if (cr6.eq) goto loc_82BA3894;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA3894:
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba38a4
	if (cr6.eq) goto loc_82BA38A4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA38A4:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r6,r11,-23380
	ctx.r6.s64 = r11.s64 + -23380;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e9cd40
	sub_82E9CD40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,88
	ctx.r3.s64 = r30.s64 + 88;
	// bl 0x82bc2e30
	sub_82BC2E30(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba38d8
	if (cr6.eq) goto loc_82BA38D8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA38D8:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba38e8
	if (cr6.eq) goto loc_82BA38E8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA38E8:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r6,r11,-23400
	ctx.r6.s64 = r11.s64 + -23400;
	// addi r5,r10,-23412
	ctx.r5.s64 = ctx.r10.s64 + -23412;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e9cd40
	sub_82E9CD40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,104
	ctx.r3.s64 = r30.s64 + 104;
	// bl 0x82bc2e30
	sub_82BC2E30(ctx, base);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba3920
	if (cr6.eq) goto loc_82BA3920;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA3920:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba3930
	if (cr6.eq) goto loc_82BA3930;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA3930:
	// lis r11,-32244
	r11.s64 = -2113142784;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r29,r11,-3752
	r29.s64 = r11.s64 + -3752;
	// addi r6,r10,-3116
	ctx.r6.s64 = ctx.r10.s64 + -3116;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82e9cd40
	sub_82E9CD40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,120
	ctx.r3.s64 = r30.s64 + 120;
	// bl 0x82bc2e30
	sub_82BC2E30(ctx, base);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba396c
	if (cr6.eq) goto loc_82BA396C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA396C:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba397c
	if (cr6.eq) goto loc_82BA397C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA397C:
	// lis r11,-32244
	r11.s64 = -2113142784;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r6,r11,-3276
	ctx.r6.s64 = r11.s64 + -3276;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82e9cd40
	sub_82E9CD40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,136
	ctx.r3.s64 = r30.s64 + 136;
	// bl 0x82bc2e30
	sub_82BC2E30(ctx, base);
	// lwz r3,172(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba39b0
	if (cr6.eq) goto loc_82BA39B0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA39B0:
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba39c0
	if (cr6.eq) goto loc_82BA39C0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA39C0:
	// lis r11,-32244
	r11.s64 = -2113142784;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r6,r11,-3136
	ctx.r6.s64 = r11.s64 + -3136;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82e9cd40
	sub_82E9CD40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,152
	ctx.r3.s64 = r30.s64 + 152;
	// bl 0x82bc2e30
	sub_82BC2E30(ctx, base);
	// lwz r3,204(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba39f4
	if (cr6.eq) goto loc_82BA39F4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA39F4:
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba3a04
	if (cr6.eq) goto loc_82BA3A04;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA3A04:
	// lis r11,-32244
	r11.s64 = -2113142784;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r6,r11,-3156
	ctx.r6.s64 = r11.s64 + -3156;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82e9cd40
	sub_82E9CD40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,168
	ctx.r3.s64 = r30.s64 + 168;
	// bl 0x82bc2e30
	sub_82BC2E30(ctx, base);
	// lwz r3,236(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba3a38
	if (cr6.eq) goto loc_82BA3A38;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA3A38:
	// lwz r3,228(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba3a48
	if (cr6.eq) goto loc_82BA3A48;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA3A48:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-23476
	ctx.r4.s64 = r11.s64 + -23476;
	// li r5,50
	ctx.r5.s64 = 50;
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ba3a7c
	if (cr0.eq) goto loc_82BA3A7C;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82ba2d58
	sub_82BA2D58(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82ba3a80
	goto loc_82BA3A80;
loc_82BA3A7C:
	// mr r30,r26
	r30.u64 = r26.u64;
loc_82BA3A80:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82ba30c8
	sub_82BA30C8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r30,84(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// beq cr6,0x82ba3ad8
	if (cr6.eq) goto loc_82BA3AD8;
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
loc_82BA3ABC:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82ba3abc
	if (!cr0.eq) goto loc_82BA3ABC;
loc_82BA3AD8:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e9c580
	sub_82E9C580(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba3af4
	if (cr6.eq) goto loc_82BA3AF4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA3AF4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82ba3b04
	if (cr6.eq) goto loc_82BA3B04;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA3B04:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82BA3B10"))) PPC_WEAK_FUNC(sub_82BA3B10);
PPC_FUNC_IMPL(__imp__sub_82BA3B10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-31952
	r11.s64 = -2094006272;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r9,-31952
	ctx.r9.s64 = -2094006272;
	// lis r8,-31952
	ctx.r8.s64 = -2094006272;
	// addi r7,r9,10876
	ctx.r7.s64 = ctx.r9.s64 + 10876;
	// lbz r11,10856(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 10856);
	// lis r6,-31952
	ctx.r6.s64 = -2094006272;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r11,10860(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10860);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// lfs f0,10876(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 10876);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f0,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f0,10864(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 10864);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f0,10868(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 10868);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA3B68"))) PPC_WEAK_FUNC(sub_82BA3B68);
PPC_FUNC_IMPL(__imp__sub_82BA3B68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r9,-31952
	ctx.r9.s64 = -2094006272;
	// lis r8,-31952
	ctx.r8.s64 = -2094006272;
	// lis r7,-31952
	ctx.r7.s64 = -2094006272;
	// addi r6,r8,10876
	ctx.r6.s64 = ctx.r8.s64 + 10876;
	// stb r11,10856(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10856, r11.u8);
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,10860(r9)
	PPC_STORE_U32(ctx.r9.u32 + 10860, r11.u32);
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,10876(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 10876, temp.u32);
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lfs f0,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lfs f0,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	f0.f64 = double(temp.f32);
	// stfs f0,10864(r7)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 10864, temp.u32);
	// lfs f0,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	f0.f64 = double(temp.f32);
	// stfs f0,10868(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 10868, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA3BC0"))) PPC_WEAK_FUNC(sub_82BA3BC0);
PPC_FUNC_IMPL(__imp__sub_82BA3BC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,-2748
	r31.s64 = r11.s64 + -2748;
	// lwz r11,-2744(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2744);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82ba3c08
	if (!cr0.eq) goto loc_82BA3C08;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// stw r11,-2744(r10)
	PPC_STORE_U32(ctx.r10.u32 + -2744, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r9,-1200
	ctx.r4.s64 = ctx.r9.s64 + -1200;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
loc_82BA3C08:
	// lis r11,-31952
	r11.s64 = -2094006272;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r10,r11,10876
	ctx.r10.s64 = r11.s64 + 10876;
	// lfs f1,10876(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 10876);
	ctx.f1.f64 = double(temp.f32);
	// lfs f4,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82e1a210
	sub_82E1A210(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA3C48"))) PPC_WEAK_FUNC(sub_82BA3C48);
PPC_FUNC_IMPL(__imp__sub_82BA3C48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31943
	r31.s64 = -2093416448;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r27,r11,-2724
	r27.s64 = r11.s64 + -2724;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,-2720(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -2720);
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82ba3c98
	if (!cr0.eq) goto loc_82BA3C98;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stw r11,-2720(r31)
	PPC_STORE_U32(r31.u32 + -2720, r11.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r10,-1180
	ctx.r4.s64 = ctx.r10.s64 + -1180;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lwz r11,-2720(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -2720);
loc_82BA3C98:
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r29,r10,-2728
	r29.s64 = ctx.r10.s64 + -2728;
	// bne 0x82ba3cc0
	if (!cr0.eq) goto loc_82BA3CC0;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stw r11,-2720(r31)
	PPC_STORE_U32(r31.u32 + -2720, r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r10,-1156
	ctx.r4.s64 = ctx.r10.s64 + -1156;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
loc_82BA3CC0:
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lfs f0,2240(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2240);
	f0.f64 = double(temp.f32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
	// li r10,16
	ctx.r10.s64 = 16;
	// bne 0x82ba3d04
	if (!cr0.eq) goto loc_82BA3D04;
loc_82BA3CDC:
	// lfs f13,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stfs f13,-8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + -8, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stfs f0,-4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + -4, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// bne 0x82ba3cdc
	if (!cr0.eq) goto loc_82BA3CDC;
	// b 0x82ba3d28
	goto loc_82BA3D28;
loc_82BA3D04:
	// lfs f13,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stfs f0,-8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + -8, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stfs f13,-4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + -4, temp.u32);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// bne 0x82ba3d04
	if (!cr0.eq) goto loc_82BA3D04;
loc_82BA3D28:
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// bl 0x82e1a228
	sub_82E1A228(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r3,8(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// bl 0x82e1a228
	sub_82E1A228(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82BA3D58"))) PPC_WEAK_FUNC(sub_82BA3D58);
PPC_FUNC_IMPL(__imp__sub_82BA3D58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,24
	r11.s64 = ctx.r3.s64 + 24;
	// li r30,2
	r30.s64 = 2;
	// addi r31,r11,4
	r31.s64 = r11.s64 + 4;
loc_82BA3D78:
	// addi r31,r31,-8
	r31.s64 = r31.s64 + -8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba3d8c
	if (cr6.eq) goto loc_82BA3D8C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA3D8C:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x82ba3d78
	if (!cr0.lt) goto loc_82BA3D78;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA3DB0"))) PPC_WEAK_FUNC(sub_82BA3DB0);
PPC_FUNC_IMPL(__imp__sub_82BA3DB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,96
	r11.s64 = ctx.r3.s64 + 96;
	// li r30,11
	r30.s64 = 11;
	// addi r31,r11,4
	r31.s64 = r11.s64 + 4;
loc_82BA3DD0:
	// addi r31,r31,-8
	r31.s64 = r31.s64 + -8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba3de4
	if (cr6.eq) goto loc_82BA3DE4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA3DE4:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x82ba3dd0
	if (!cr0.lt) goto loc_82BA3DD0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA3E08"))) PPC_WEAK_FUNC(sub_82BA3E08);
PPC_FUNC_IMPL(__imp__sub_82BA3E08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x82e9f430
	sub_82E9F430(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba3e38
	if (cr6.eq) goto loc_82BA3E38;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA3E38:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

extern void PostProcessResolutionFix(PPCRegister& r4, PPCRegister& f1, PPCRegister& f2);

extern void PostProcessResolutionFix(PPCRegister& r4, PPCRegister& f1, PPCRegister& f2);

extern void PostProcessResolutionFix(PPCRegister& r4, PPCRegister& f1, PPCRegister& f2);

extern void PostProcessResolutionFix(PPCRegister& r4, PPCRegister& f1, PPCRegister& f2);

extern void PostProcessResolutionFix(PPCRegister& r4, PPCRegister& f1, PPCRegister& f2);

extern void PostProcessResolutionFix(PPCRegister& r4, PPCRegister& f1, PPCRegister& f2);

__attribute__((alias("__imp__sub_82BA3E48"))) PPC_WEAK_FUNC(sub_82BA3E48);
PPC_FUNC_IMPL(__imp__sub_82BA3E48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82e9d8e0
	sub_82E9D8E0(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r9,6690
	ctx.r9.s64 = 438435840;
	// li r29,0
	r29.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f31,-28612(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -28612);
	f31.f64 = double(temp.f32);
	// ori r9,r9,43872
	ctx.r9.u64 = ctx.r9.u64 | 43872;
	// li r8,1
	ctx.r8.s64 = 1;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ea2878
	PostProcessResolutionFix(ctx.r4, ctx.f1, ctx.f2);
	sub_82EA2878(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r28,r31,72
	r28.s64 = r31.s64 + 72;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// addi r3,r28,4
	ctx.r3.s64 = r28.s64 + 4;
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba3ec8
	if (cr6.eq) goto loc_82BA3EC8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA3EC8:
	// lis r11,6184
	r11.s64 = 405274624;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// ori r27,r11,390
	r27.u64 = r11.u64 | 390;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82ea27e8
	PostProcessResolutionFix(ctx.r4, ctx.f1, ctx.f2);
	sub_82EA27E8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba3f20
	if (cr6.eq) goto loc_82BA3F20;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA3F20:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f30,-16564(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -16564);
	f30.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x82ea27e8
	PostProcessResolutionFix(ctx.r4, ctx.f1, ctx.f2);
	sub_82EA27E8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// stw r10,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba3f78
	if (cr6.eq) goto loc_82BA3F78;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA3F78:
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82ea27e8
	PostProcessResolutionFix(ctx.r4, ctx.f1, ctx.f2);
	sub_82EA27E8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r31,96
	r11.s64 = r31.s64 + 96;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// stw r10,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba3fc8
	if (cr6.eq) goto loc_82BA3FC8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA3FC8:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x82ea2908
	sub_82EA2908(ctx, base);
	// addi r28,r31,104
	r28.s64 = r31.s64 + 104;
	// li r26,3
	r26.s64 = 3;
loc_82BA3FDC:
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82ea27e8
	PostProcessResolutionFix(ctx.r4, ctx.f1, ctx.f2);
	sub_82EA27E8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r28,4
	ctx.r3.s64 = r28.s64 + 4;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba402c
	if (cr6.eq) goto loc_82BA402C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA402C:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// bne 0x82ba3fdc
	if (!cr0.eq) goto loc_82BA3FDC;
	// addi r31,r31,128
	r31.s64 = r31.s64 + 128;
	// li r28,12
	r28.s64 = 12;
loc_82BA4040:
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// li r8,1
	ctx.r8.s64 = 1;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82ea27e8
	PostProcessResolutionFix(ctx.r4, ctx.f1, ctx.f2);
	sub_82EA27E8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba4090
	if (cr6.eq) goto loc_82BA4090;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA4090:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// bne 0x82ba4040
	if (!cr0.eq) goto loc_82BA4040;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82BA40B0"))) PPC_WEAK_FUNC(sub_82BA40B0);
PPC_FUNC_IMPL(__imp__sub_82BA40B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82b9dc50
	sub_82B9DC50(ctx, base);
	// lis r11,-32244
	r11.s64 = -2113142784;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r29,r11,-3752
	r29.s64 = r11.s64 + -3752;
	// lis r11,-32244
	r11.s64 = -2113142784;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r6,r11,-992
	ctx.r6.s64 = r11.s64 + -992;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e9cd40
	sub_82E9CD40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x82bc2e30
	sub_82BC2E30(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba4104
	if (cr6.eq) goto loc_82BA4104;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA4104:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba4114
	if (cr6.eq) goto loc_82BA4114;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA4114:
	// lis r11,-32244
	r11.s64 = -2113142784;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r6,r11,-1016
	ctx.r6.s64 = r11.s64 + -1016;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e9cd40
	sub_82E9CD40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// bl 0x82bc2e30
	sub_82BC2E30(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba4148
	if (cr6.eq) goto loc_82BA4148;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA4148:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba4158
	if (cr6.eq) goto loc_82BA4158;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA4158:
	// lis r11,-32244
	r11.s64 = -2113142784;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r6,r11,-1040
	ctx.r6.s64 = r11.s64 + -1040;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e9cd40
	sub_82E9CD40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
	// bl 0x82bc2e30
	sub_82BC2E30(ctx, base);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba418c
	if (cr6.eq) goto loc_82BA418C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA418C:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba419c
	if (cr6.eq) goto loc_82BA419C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA419C:
	// lis r11,-32244
	r11.s64 = -2113142784;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r6,r11,-3276
	ctx.r6.s64 = r11.s64 + -3276;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82e9cd40
	sub_82E9CD40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,272
	ctx.r3.s64 = r31.s64 + 272;
	// bl 0x82bc2e30
	sub_82BC2E30(ctx, base);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba41d0
	if (cr6.eq) goto loc_82BA41D0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA41D0:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba41e0
	if (cr6.eq) goto loc_82BA41E0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA41E0:
	// lis r11,-32244
	r11.s64 = -2113142784;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r6,r11,-1060
	ctx.r6.s64 = r11.s64 + -1060;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82e9cd40
	sub_82E9CD40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,288
	ctx.r3.s64 = r31.s64 + 288;
	// bl 0x82bc2e30
	sub_82BC2E30(ctx, base);
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba4214
	if (cr6.eq) goto loc_82BA4214;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA4214:
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba4224
	if (cr6.eq) goto loc_82BA4224;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA4224:
	// lis r11,-32244
	r11.s64 = -2113142784;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r6,r11,-1080
	ctx.r6.s64 = r11.s64 + -1080;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82e9cd40
	sub_82E9CD40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,320
	ctx.r3.s64 = r31.s64 + 320;
	// bl 0x82bc2e30
	sub_82BC2E30(ctx, base);
	// lwz r3,172(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba4258
	if (cr6.eq) goto loc_82BA4258;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA4258:
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba4268
	if (cr6.eq) goto loc_82BA4268;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA4268:
	// lis r11,-32244
	r11.s64 = -2113142784;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r6,r11,-1100
	ctx.r6.s64 = r11.s64 + -1100;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82e9cd40
	sub_82E9CD40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,304
	ctx.r3.s64 = r31.s64 + 304;
	// bl 0x82bc2e30
	sub_82BC2E30(ctx, base);
	// lwz r3,188(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba429c
	if (cr6.eq) goto loc_82BA429C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA429C:
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba42ac
	if (cr6.eq) goto loc_82BA42AC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA42AC:
	// lis r11,-32244
	r11.s64 = -2113142784;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r6,r11,-1128
	ctx.r6.s64 = r11.s64 + -1128;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82e9cd40
	sub_82E9CD40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,352
	ctx.r3.s64 = r31.s64 + 352;
	// bl 0x82bc2e30
	sub_82BC2E30(ctx, base);
	// lwz r3,204(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba42e0
	if (cr6.eq) goto loc_82BA42E0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA42E0:
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba42f0
	if (cr6.eq) goto loc_82BA42F0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA42F0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82BA42F8"))) PPC_WEAK_FUNC(sub_82BA42F8);
PPC_FUNC_IMPL(__imp__sub_82BA42F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x82e9d8e0
	sub_82E9D8E0(ctx, base);
	// addi r30,r31,224
	r30.s64 = r31.s64 + 224;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ba3bc0
	sub_82BA3BC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e9efd8
	sub_82E9EFD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e9f430
	sub_82E9F430(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ba2380
	sub_82BA2380(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82e9f430
	sub_82E9F430(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82ba2380
	sub_82BA2380(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82e9fdc8
	sub_82E9FDC8(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e9f430
	sub_82E9F430(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba43c4
	if (cr6.eq) goto loc_82BA43C4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA43C4:
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e9f430
	sub_82E9F430(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba43ec
	if (cr6.eq) goto loc_82BA43EC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA43EC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82BA43F8"))) PPC_WEAK_FUNC(sub_82BA43F8);
PPC_FUNC_IMPL(__imp__sub_82BA43F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82e9d8e0
	sub_82E9D8E0(ctx, base);
	// addi r31,r31,240
	r31.s64 = r31.s64 + 240;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ba3bc0
	sub_82BA3BC0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e9efd8
	sub_82E9EFD8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e9f430
	sub_82E9F430(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ba2380
	sub_82BA2380(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82e9fdc8
	sub_82E9FDC8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e9f430
	sub_82E9F430(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba4498
	if (cr6.eq) goto loc_82BA4498;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA4498:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82BA44A0"))) PPC_WEAK_FUNC(sub_82BA44A0);
PPC_FUNC_IMPL(__imp__sub_82BA44A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x82e9d8e0
	sub_82E9D8E0(ctx, base);
	// addi r30,r31,352
	r30.s64 = r31.s64 + 352;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ba3bc0
	sub_82BA3BC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e9efd8
	sub_82E9EFD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e9f430
	sub_82E9F430(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ba2380
	sub_82BA2380(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82e9f430
	sub_82E9F430(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82ba2380
	sub_82BA2380(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82e9fdc8
	sub_82E9FDC8(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e9f430
	sub_82E9F430(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba456c
	if (cr6.eq) goto loc_82BA456C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA456C:
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e9f430
	sub_82E9F430(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba4594
	if (cr6.eq) goto loc_82BA4594;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA4594:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82BA45A0"))) PPC_WEAK_FUNC(sub_82BA45A0);
PPC_FUNC_IMPL(__imp__sub_82BA45A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r14{};
	PPCRegister r15{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f16{};
	PPCRegister f17{};
	PPCRegister f18{};
	PPCRegister f19{};
	PPCRegister f20{};
	PPCRegister f21{};
	PPCRegister f22{};
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0af0
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831b1408
	// stwu r1,-1552(r1)
	ea = -1552 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r26,r11,-2668
	r26.s64 = r11.s64 + -2668;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// mr r14,r4
	r14.u64 = ctx.r4.u64;
	// stw r26,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, r26.u32);
	// addi r28,r11,-2672
	r28.s64 = r11.s64 + -2672;
	// addi r4,r10,-1156
	ctx.r4.s64 = ctx.r10.s64 + -1156;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r4,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r4.u32);
	// stw r25,1572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1572, r25.u32);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r29,1588(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1588, r29.u32);
	// stw r28,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, r28.u32);
	// bne 0x82ba460c
	if (!cr0.eq) goto loc_82BA460C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
loc_82BA460C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,628(r14)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r14.u32 + 628);
	f0.f64 = double(temp.f32);
	// lfs f17,2240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f17.f64 = double(temp.f32);
	// fcmpu cr6,f0,f17
	cr6.compare(f0.f64, f17.f64);
	// ble cr6,0x82ba4f78
	if (!cr6.gt) goto loc_82BA4F78;
	// lfs f0,644(r14)
	temp.u32 = PPC_LOAD_U32(r14.u32 + 644);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f17
	cr6.compare(f0.f64, f17.f64);
	// ble cr6,0x82ba4f78
	if (!cr6.gt) goto loc_82BA4F78;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r27,r10,-2676
	r27.s64 = ctx.r10.s64 + -2676;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// bne 0x82ba466c
	if (!cr0.eq) goto loc_82BA466C;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfs f0,-3780(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -3780);
	f0.f64 = double(temp.f32);
	// lfs f13,-16564(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -16564);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 * ctx.f13.f64));
	// bl 0x831b3980
	sub_831B3980(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// stfs f0,0(r27)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r27.u32 + 0, temp.u32);
loc_82BA466C:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r30,-31943
	r30.s64 = -2093416448;
	// bne 0x82ba468c
	if (!cr0.eq) goto loc_82BA468C;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// lfs f0,-21220(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -21220);
	f0.f64 = double(temp.f32);
	// stfs f0,-2680(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + -2680, temp.u32);
loc_82BA468C:
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// rlwinm. r9,r11,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r10,r10,-2684
	ctx.r10.s64 = ctx.r10.s64 + -2684;
	// stw r10,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r10.u32);
	// bne 0x82ba46b4
	if (!cr0.eq) goto loc_82BA46B4;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// lfs f0,5576(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5576);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_82BA46B4:
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// rlwinm. r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r31,r10,-2700
	r31.s64 = ctx.r10.s64 + -2700;
	// bne 0x82ba46dc
	if (!cr0.eq) goto loc_82BA46DC;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// addi r10,r10,-23296
	ctx.r10.s64 = ctx.r10.s64 + -23296;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82BA46DC:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrldi r11,r3,32
	r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// frsp f31,f0
	f31.f64 = double(float(f0.f64));
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrldi r11,r3,32
	r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// li r10,15
	ctx.r10.s64 = 15;
	// lvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r9,-31943
	ctx.r9.s64 = -2093416448;
	// lvx128 v62,r31,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f27,2244(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f27.f64 = double(temp.f32);
	// frsp f30,f0
	f30.f64 = double(float(f0.f64));
	// lfs f13,-2680(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + -2680);
	ctx.f13.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lvsl v0,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r11,r1,880
	r11.s64 = ctx.r1.s64 + 880;
	// lfs f0,652(r14)
	temp.u32 = PPC_LOAD_U32(r14.u32 + 652);
	f0.f64 = double(temp.f32);
	// vperm128 v13,v63,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stfs f0,188(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// fdivs f13,f27,f13
	ctx.f13.f64 = double(float(f27.f64 / ctx.f13.f64));
	// stfs f0,184(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// addi r7,r9,-3848
	ctx.r7.s64 = ctx.r9.s64 + -3848;
	// stfs f0,180(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f0,176(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
loc_82BA4774:
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// li r30,8
	r30.s64 = 8;
	// extsw r9,r8
	ctx.r9.s64 = ctx.r8.s32;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f0,172(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f0,168(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f0,164(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f0,160(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
loc_82BA47AC:
	// li r5,15
	ctx.r5.s64 = 15;
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v0,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lvsr v7,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// addi r31,r1,128
	r31.s64 = ctx.r1.s64 + 128;
	// li r6,4
	ctx.r6.s64 = 4;
	// lvx128 v62,r10,r5
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r24,r1,128
	r24.s64 = ctx.r1.s64 + 128;
	// vperm128 v0,v63,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v12,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsr v6,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// vsubfp v11,v13,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// addi r23,r1,176
	r23.s64 = ctx.r1.s64 + 176;
	// addi r22,r1,143
	r22.s64 = ctx.r1.s64 + 143;
	// addi r21,r1,128
	r21.s64 = ctx.r1.s64 + 128;
	// addi r20,r1,128
	r20.s64 = ctx.r1.s64 + 128;
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lvsl v5,r0,r20
	temp.u32 = r20.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmaddfp v0,v11,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vperm128 v63,v0,v0,v6
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// stvewx128 v63,r0,r31
	ea = (r31.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r24,r6
	ea = (r24.u32 + ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r4,r30
	ea = (ctx.r4.u32 + r30.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r3,r5
	ea = (ctx.r3.u32 + ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v0,r0,r23
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r23.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r22
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r22.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r21
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r21.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v63,v62,v63,v5
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vsubfp128 v12,v63,v13
	simde_mm_store_ps(ctx.v12.f32, simde_mm_sub_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v12,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vperm128 v63,v0,v0,v7
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// stvewx128 v63,r0,r11
	ea = (r11.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r11,r6
	ea = (r11.u32 + ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r11,r30
	ea = (r11.u32 + r30.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r11,r5
	ea = (r11.u32 + ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// bne 0x82ba47ac
	if (!cr0.eq) goto loc_82BA47AC;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,3
	cr6.compare<uint32_t>(ctx.r8.u32, 3, xer);
	// bne cr6,0x82ba4774
	if (!cr6.eq) goto loc_82BA4774;
	// lfs f0,648(r14)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r14.u32 + 648);
	f0.f64 = double(temp.f32);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// lfs f13,932(r14)
	temp.u32 = PPC_LOAD_U32(r14.u32 + 932);
	ctx.f13.f64 = double(temp.f32);
	// addi r31,r14,668
	r31.s64 = r14.s64 + 668;
	// fadds f18,f0,f13
	f18.f64 = double(float(f0.f64 + ctx.f13.f64));
	// bl 0x82e9d8e0
	sub_82E9D8E0(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// bl 0x82ba2380
	sub_82BA2380(ctx, base);
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// lwz r11,924(r14)
	r11.u64 = PPC_LOAD_U32(r14.u32 + 924);
	// addi r15,r31,256
	r15.s64 = r31.s64 + 256;
	// li r16,0
	r16.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ba4cf0
	if (cr6.eq) goto loc_82BA4CF0;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// fdivs f23,f27,f31
	ctx.fpscr.disableFlushMode();
	f23.f64 = double(float(f27.f64 / f31.f64));
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// fdivs f22,f27,f30
	f22.f64 = double(float(f27.f64 / f30.f64));
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// fadds f21,f30,f31
	f21.f64 = double(float(f30.f64 + f31.f64));
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f20,-20128(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -20128);
	f20.f64 = double(temp.f32);
	// lis r11,-31943
	r11.s64 = -2093416448;
	// lfs f19,-22120(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -22120);
	f19.f64 = double(temp.f32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-31943
	ctx.r9.s64 = -2093416448;
	// lfs f24,-8992(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -8992);
	f24.f64 = double(temp.f32);
	// lfs f25,-1132(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -1132);
	f25.f64 = double(temp.f32);
	// li r19,0
	r19.s64 = 0;
	// lfs f26,-24412(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -24412);
	f26.f64 = double(temp.f32);
	// addi r17,r14,160
	r17.s64 = r14.s64 + 160;
	// lis r22,-31943
	r22.s64 = -2093416448;
	// lis r20,-31952
	r20.s64 = -2094006272;
	// addi r24,r11,-2740
	r24.s64 = r11.s64 + -2740;
	// addi r18,r10,-1180
	r18.s64 = ctx.r10.s64 + -1180;
	// addi r23,r9,-2736
	r23.s64 = ctx.r9.s64 + -2736;
	// b 0x82ba492c
	goto loc_82BA492C;
loc_82BA4928:
	// lwz r27,80(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82BA492C:
	// addi r11,r14,668
	r11.s64 = r14.s64 + 668;
	// lwz r11,928(r14)
	r11.u64 = PPC_LOAD_U32(r14.u32 + 928);
	// add r28,r11,r19
	r28.u64 = r11.u64 + r19.u64;
	// lfs f0,12(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 12);
	f0.f64 = double(temp.f32);
	// fadds f31,f0,f18
	f31.f64 = double(float(f0.f64 + f18.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x831b1788
	sub_831B1788(ctx, base);
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4);
	f0.f64 = double(temp.f32);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fmuls f12,f23,f0
	ctx.f12.f64 = double(float(f23.f64 * f0.f64));
	// lfs f0,10868(r20)
	temp.u32 = PPC_LOAD_U32(r20.u32 + 10868);
	f0.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x831b1868
	sub_831B1868(ctx, base);
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	f0.f64 = double(temp.f32);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fadds f12,f0,f26
	ctx.f12.f64 = double(float(f0.f64 + f26.f64));
	// lfs f11,4(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lfs f0,10868(r20)
	temp.u32 = PPC_LOAD_U32(r20.u32 + 10868);
	f0.f64 = double(temp.f32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r11.u32);
	// fmuls f13,f13,f22
	ctx.f13.f64 = double(float(ctx.f13.f64 * f22.f64));
	// fmuls f12,f12,f25
	ctx.f12.f64 = double(float(ctx.f12.f64 * f25.f64));
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fdivs f12,f12,f21
	ctx.f12.f64 = double(float(ctx.f12.f64 / f21.f64));
	// fmuls f30,f13,f0
	f30.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmuls f29,f12,f24
	f29.f64 = double(float(ctx.f12.f64 * f24.f64));
	// beq cr6,0x82ba49d0
	if (cr6.eq) goto loc_82BA49D0;
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
loc_82BA49B0:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82ba49b0
	if (!cr0.eq) goto loc_82BA49B0;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
loc_82BA49D0:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r27,1
	r27.s64 = 1;
	// li r25,0
	r25.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ba4cc4
	if (cr6.eq) goto loc_82BA4CC4;
	// addi r26,r14,304
	r26.s64 = r14.s64 + 304;
loc_82BA49E8:
	// extsw r11,r25
	r11.s64 = r25.s32;
	// li r29,0
	r29.s64 = 0;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// frsp f28,f0
	f28.f64 = double(float(f0.f64));
	// cmpw cr6,r11,r25
	cr6.compare<int32_t>(r11.s32, r25.s32, xer);
	// bne cr6,0x82ba4a4c
	if (!cr6.eq) goto loc_82BA4A4C;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// lwz r4,0(r17)
	ctx.r4.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// bl 0x82ea2b00
	sub_82EA2B00(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,220(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// b 0x82ba4a7c
	goto loc_82BA4A7C;
loc_82BA4A4C:
	// addi r11,r27,16
	r11.s64 = r27.s64 + 16;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r4,r11,r14
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r14.u32);
	// bl 0x82ea2b00
	sub_82EA2B00(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,228(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
loc_82BA4A7C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba4a88
	if (cr6.eq) goto loc_82BA4A88;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA4A88:
	// fadds f28,f28,f27
	ctx.fpscr.disableFlushMode();
	f28.f64 = double(float(f28.f64 + f27.f64));
	// addi r30,r1,244
	r30.s64 = ctx.r1.s64 + 244;
	// addi r31,r1,376
	r31.s64 = ctx.r1.s64 + 376;
loc_82BA4A94:
	// extsw r11,r29
	r11.s64 = r29.s32;
	// lfs f1,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, r11.u64);
	// lfd f0,128(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f16,f0
	f16.f64 = double(float(f0.f64));
	// fmuls f2,f16,f29
	ctx.f2.f64 = double(float(f16.f64 * f29.f64));
	// bl 0x831b3f58
	sub_831B3F58(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// fmuls f12,f16,f31
	ctx.f12.f64 = double(float(f16.f64 * f31.f64));
	// stfs f12,-4(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + -4, temp.u32);
	// subf r11,r25,r11
	r11.s64 = r11.s64 - r25.s64;
	// fmuls f0,f16,f30
	f0.f64 = double(float(f16.f64 * f30.f64));
	// addi r10,r1,880
	ctx.r10.s64 = ctx.r1.s64 + 880;
	// stfs f0,0(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// fmuls f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 * f28.f64));
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f13,f13,f19
	ctx.f13.f64 = double(float(ctx.f13.f64 * f19.f64));
	// lfs f8,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f12,f20
	cr6.compare(ctx.f12.f64, f20.f64);
	// fmuls f12,f13,f11
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f12,-8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + -8, temp.u32);
	// fmuls f12,f10,f13
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f12,-4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + -4, temp.u32);
	// fmuls f12,f9,f13
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// fmuls f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// bge cr6,0x82ba4b38
	if (!cr6.lt) goto loc_82BA4B38;
	// fabs f0,f0
	f0.u64 = f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f20
	cr6.compare(f0.f64, f20.f64);
	// blt cr6,0x82ba4b70
	if (cr6.lt) goto loc_82BA4B70;
loc_82BA4B38:
	// lfs f0,-8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -8);
	f0.f64 = double(temp.f32);
	// lfs f13,-4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f17
	f0.f64 = double(float(f0.f64 * f17.f64));
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f17
	ctx.f13.f64 = double(float(ctx.f13.f64 * f17.f64));
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f17
	ctx.f12.f64 = double(float(ctx.f12.f64 * f17.f64));
	// fmuls f11,f11,f17
	ctx.f11.f64 = double(float(ctx.f11.f64 * f17.f64));
	// stfs f17,-4(r30)
	temp.f32 = float(f17.f64);
	PPC_STORE_U32(r30.u32 + -4, temp.u32);
	// stfs f17,0(r30)
	temp.f32 = float(f17.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// stfs f0,-8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -8, temp.u32);
	// stfs f13,-4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + -4, temp.u32);
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f11,4(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
loc_82BA4B70:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// cmplwi cr6,r29,8
	cr6.compare<uint32_t>(r29.u32, 8, xer);
	// bne cr6,0x82ba4a94
	if (!cr6.eq) goto loc_82BA4A94;
	// lwz r11,-2732(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + -2732);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82ba4ba8
	if (!cr0.eq) goto loc_82BA4BA8;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// stw r11,-2732(r22)
	PPC_STORE_U32(r22.u32 + -2732, r11.u32);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lwz r11,-2732(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + -2732);
loc_82BA4BA8:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82ba4bc4
	if (!cr0.eq) goto loc_82BA4BC4;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r11,-2732(r22)
	PPC_STORE_U32(r22.u32 + -2732, r11.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
loc_82BA4BC4:
	// addi r10,r1,244
	ctx.r10.s64 = ctx.r1.s64 + 244;
	// addi r11,r1,632
	r11.s64 = ctx.r1.s64 + 632;
	// li r9,16
	ctx.r9.s64 = 16;
loc_82BA4BD0:
	// lfs f0,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	f0.f64 = double(temp.f32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stfs f17,0(r11)
	temp.f32 = float(f17.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f17,4(r11)
	temp.f32 = float(f17.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stfs f0,-8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + -8, temp.u32);
	// stfs f13,-4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + -4, temp.u32);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// bne 0x82ba4bd0
	if (!cr0.eq) goto loc_82BA4BD0;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// addi r5,r1,624
	ctx.r5.s64 = ctx.r1.s64 + 624;
	// lwz r3,8(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// bl 0x82e1a228
	sub_82E1A228(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lwz r3,8(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// bl 0x82e1a228
	sub_82E1A228(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82e9efd8
	sub_82E9EFD8(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82e9f430
	sub_82E9F430(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82e9fdc8
	sub_82E9FDC8(ctx, base);
	// addi r11,r27,16
	r11.s64 = r27.s64 + 16;
	// lwz r10,200(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r14
	r11.u64 = r11.u64 + r14.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// fmuls f31,f0,f31
	f31.f64 = double(float(f0.f64 * f31.f64));
	// fmuls f30,f0,f30
	f30.f64 = double(float(f0.f64 * f30.f64));
	// fmuls f29,f0,f29
	f29.f64 = double(float(f0.f64 * f29.f64));
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(r27.s32, 2, xer);
	// ble cr6,0x82ba4c94
	if (!cr6.gt) goto loc_82BA4C94;
	// li r27,1
	r27.s64 = 1;
loc_82BA4C94:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba4ca4
	if (cr6.eq) goto loc_82BA4CA4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA4CA4:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// bne cr6,0x82ba49e8
	if (!cr6.eq) goto loc_82BA49E8;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r30,8
	r30.s64 = 8;
	// lwz r26,212(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r29,1588(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1588);
loc_82BA4CC4:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba4cd0
	if (cr6.eq) goto loc_82BA4CD0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA4CD0:
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + 0);
	// addi r16,r16,1
	r16.s64 = r16.s64 + 1;
	// addi r19,r19,16
	r19.s64 = r19.s64 + 16;
	// addi r17,r17,8
	r17.s64 = r17.s64 + 8;
	// cmpw cr6,r16,r11
	cr6.compare<int32_t>(r16.s32, r11.s32, xer);
	// bne cr6,0x82ba4928
	if (!cr6.eq) goto loc_82BA4928;
	// lwz r25,1572(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1572);
	// lwz r28,204(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
loc_82BA4CF0:
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + 0);
	// li r29,0
	r29.s64 = 0;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ba4e4c
	if (cr6.eq) goto loc_82BA4E4C;
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_set1_epi32(int(0x0)));
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// lwz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r11,r1,376
	r11.s64 = ctx.r1.s64 + 376;
	// addi r10,r10,-2716
	ctx.r10.s64 = ctx.r10.s64 + -2716;
	// vupkd3d128 v63,v63,4
	temp.f32 = 3.0f;
	temp.s32 += v63.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += v63.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	v63 = vTemp;
	// lfs f10,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// vspltw128 v13,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0x0));
	// lfs f12,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
loc_82BA4D30:
	// rlwinm. r7,r8,0,26,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x82ba4d5c
	if (!cr0.eq) goto loc_82BA4D5C;
	// fmr f13,f27
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f27.f64;
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmr f12,f27
	ctx.f12.f64 = f27.f64;
	// stfs f12,4(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmr f11,f27
	ctx.f11.f64 = f27.f64;
	// stfs f11,8(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fmr f10,f27
	ctx.f10.f64 = f27.f64;
	// stfs f10,12(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// ori r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 | 32;
loc_82BA4D5C:
	// lwz r7,0(r15)
	ctx.r7.u64 = PPC_LOAD_U32(r15.u32 + 0);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stfs f13,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// extsw r4,r7
	ctx.r4.s64 = ctx.r7.s32;
	// stfs f12,164(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// stfs f11,168(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// lfd f0,128(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// addi r4,r1,175
	ctx.r4.s64 = ctx.r1.s64 + 175;
	// stfs f10,172(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// lvsl v0,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r1,96
	r31.s64 = ctx.r1.s64 + 96;
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r27,r1,96
	r27.s64 = ctx.r1.s64 + 96;
	// lvx128 v62,r0,r4
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v62,v63,v62,v0
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lvsr v7,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r24,r1,96
	r24.s64 = ctx.r1.s64 + 96;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r9,r7
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, xer);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,188(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f0,184(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f0,180(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f0,176(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lvx128 v63,r0,r6
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrefp128 v0,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(v63.f32)));
	// vor128 v12,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)v63.u8));
	// vor v10,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vor128 v9,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)v63.u8));
	// vnmsubfp v12,v12,v0,v13
	simde_mm_store_ps(ctx.v12.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v12,v9,v0,v13
	simde_mm_store_ps(ctx.v12.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v11,v0,v0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v0,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vsel v0,v10,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vmulfp128 v63,v62,v0
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vperm128 v63,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// stvewx128 v63,r0,r31
	ea = (r31.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r27,r3
	ea = (r27.u32 + ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r5,r30
	ea = (ctx.r5.u32 + r30.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r24,r4
	ea = (r24.u32 + ctx.r4.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f9,108(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f7,-4(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r11.u32 + -4, temp.u32);
	// stfs f8,-8(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r11.u32 + -8, temp.u32);
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// bne cr6,0x82ba4d30
	if (!cr6.eq) goto loc_82BA4D30;
	// stw r8,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r8.u32);
loc_82BA4E4C:
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// lwz r3,344(r14)
	ctx.r3.u64 = PPC_LOAD_U32(r14.u32 + 344);
	// bl 0x82e1a228
	sub_82E1A228(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,128(r14)
	ctx.r4.u64 = PPC_LOAD_U32(r14.u32 + 128);
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x82ea2b00
	sub_82EA2B00(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82e9efd8
	sub_82E9EFD8(ctx, base);
	// lwz r3,236(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba4e94
	if (cr6.eq) goto loc_82BA4E94;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA4E94:
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + 0);
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ba4ee4
	if (cr6.eq) goto loc_82BA4EE4;
	// addi r30,r14,160
	r30.s64 = r14.s64 + 160;
loc_82BA4EA8:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82e9f430
	sub_82E9F430(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82ba2380
	sub_82BA2380(ctx, base);
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + 0);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// bne cr6,0x82ba4ea8
	if (!cr6.eq) goto loc_82BA4EA8;
loc_82BA4EE4:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r14,336
	ctx.r4.s64 = r14.s64 + 336;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82e9fdc8
	sub_82E9FDC8(ctx, base);
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + 0);
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ba4f3c
	if (cr6.eq) goto loc_82BA4F3C;
loc_82BA4F04:
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r29.u32);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, r29.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82e9f430
	sub_82E9F430(ctx, base);
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba4f2c
	if (cr6.eq) goto loc_82BA4F2C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA4F2C:
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + 0);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// bne cr6,0x82ba4f04
	if (!cr6.eq) goto loc_82BA4F04;
loc_82BA4F3C:
	// lwz r11,128(r14)
	r11.u64 = PPC_LOAD_U32(r14.u32 + 128);
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// lwz r11,132(r14)
	r11.u64 = PPC_LOAD_U32(r14.u32 + 132);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r11.u32);
	// beq cr6,0x82ba4f84
	if (cr6.eq) goto loc_82BA4F84;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82BA4F58:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82ba4f58
	if (!cr0.eq) goto loc_82BA4F58;
	// b 0x82ba4f84
	goto loc_82BA4F84;
loc_82BA4F78:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// stw r11,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r11.u32);
loc_82BA4F84:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,1552
	ctx.r1.s64 = ctx.r1.s64 + 1552;
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831b1454
	// b 0x831b0b40
	return;
}

__attribute__((alias("__imp__sub_82BA4F98"))) PPC_WEAK_FUNC(sub_82BA4F98);
PPC_FUNC_IMPL(__imp__sub_82BA4F98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x82e9d8e0
	sub_82E9D8E0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82e9efd8
	sub_82E9EFD8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stb r11,685(r31)
	PPC_STORE_U8(r31.u32 + 685, r11.u8);
	// li r4,60
	ctx.r4.s64 = 60;
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,72
	ctx.r4.s64 = 72;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,76
	ctx.r4.s64 = 76;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ba2380
	sub_82BA2380(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ba5094
	if (cr6.eq) goto loc_82BA5094;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ba5088
	if (cr6.eq) goto loc_82BA5088;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ea2b00
	sub_82EA2B00(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e9efd8
	sub_82E9EFD8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba505c
	if (cr6.eq) goto loc_82BA505C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA505C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e9fe10
	sub_82E9FE10(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e9efd8
	sub_82E9EFD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82ba50a4
	goto loc_82BA50A4;
loc_82BA5088:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82ba50b0
	goto loc_82BA50B0;
loc_82BA5094:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ba50b8
	if (cr6.eq) goto loc_82BA50B8;
loc_82BA50A4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
loc_82BA50B0:
	// bl 0x82e9fe10
	sub_82E9FE10(ctx, base);
	// b 0x82ba50bc
	goto loc_82BA50BC;
loc_82BA50B8:
	// bl 0x82e9f500
	sub_82E9F500(ctx, base);
loc_82BA50BC:
	// li r11,0
	r11.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,685(r31)
	PPC_STORE_U8(r31.u32 + 685, r11.u8);
	// li r4,60
	ctx.r4.s64 = 60;
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82BA50E0"))) PPC_WEAK_FUNC(sub_82BA50E0);
PPC_FUNC_IMPL(__imp__sub_82BA50E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82e9d8e0
	sub_82E9D8E0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x82e9efd8
	sub_82E9EFD8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e9f430
	sub_82E9F430(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ba2380
	sub_82BA2380(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,272
	ctx.r4.s64 = r31.s64 + 272;
	// bl 0x82e9fdc8
	sub_82E9FDC8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e9f430
	sub_82E9F430(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba5170
	if (cr6.eq) goto loc_82BA5170;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA5170:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82BA5178"))) PPC_WEAK_FUNC(sub_82BA5178);
PPC_FUNC_IMPL(__imp__sub_82BA5178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b10
	// stwu r1,-832(r1)
	ea = -832 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31943
	r31.s64 = -2093416448;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r27,r11,-2660
	r27.s64 = r11.s64 + -2660;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r11,-2656(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -2656);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82ba51c4
	if (!cr0.eq) goto loc_82BA51C4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stw r11,-2656(r31)
	PPC_STORE_U32(r31.u32 + -2656, r11.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r10,-1156
	ctx.r4.s64 = ctx.r10.s64 + -1156;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lwz r11,-2656(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -2656);
loc_82BA51C4:
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r28,r10,-2664
	r28.s64 = ctx.r10.s64 + -2664;
	// bne 0x82ba51ec
	if (!cr0.eq) goto loc_82BA51EC;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stw r11,-2656(r31)
	PPC_STORE_U32(r31.u32 + -2656, r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r10,-1180
	ctx.r4.s64 = ctx.r10.s64 + -1180;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
loc_82BA51EC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e9d8e0
	sub_82E9D8E0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// lwz r25,0(r29)
	r25.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r24,r1,224
	r24.s64 = ctx.r1.s64 + 224;
	// addi r23,r1,96
	r23.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// lfs f1,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82ae6f10
	sub_82AE6F10(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// addi r11,r1,488
	r11.s64 = ctx.r1.s64 + 488;
	// li r9,16
	ctx.r9.s64 = 16;
	// lfs f0,2240(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2240);
	f0.f64 = double(temp.f32);
loc_82BA527C:
	// lfs f13,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stfs f13,-8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + -8, temp.u32);
	// stfs f12,-4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + -4, temp.u32);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// bne 0x82ba527c
	if (!cr0.eq) goto loc_82BA527C;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r5,r1,480
	ctx.r5.s64 = ctx.r1.s64 + 480;
	// lwz r3,264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 264);
	// bl 0x82e1a228
	sub_82E1A228(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r3,264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 264);
	// bl 0x82e1a228
	sub_82E1A228(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e9efd8
	sub_82E9EFD8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e9f430
	sub_82E9F430(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ba2380
	sub_82BA2380(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,256
	ctx.r4.s64 = r30.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e9fdc8
	sub_82E9FDC8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e9f430
	sub_82E9F430(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba5340
	if (cr6.eq) goto loc_82BA5340;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA5340:
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_82BA5348"))) PPC_WEAK_FUNC(sub_82BA5348);
PPC_FUNC_IMPL(__imp__sub_82BA5348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// li r11,8
	r11.s64 = 8;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82BA5388:
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82ba5388
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82BA5388;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// beq 0x82ba53bc
	if (cr0.eq) goto loc_82BA53BC;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// b 0x82ba53c0
	goto loc_82BA53C0;
loc_82BA53BC:
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
loc_82BA53C0:
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82ae6dd0
	sub_82AE6DD0(ctx, base);
	// addi r31,r30,288
	r31.s64 = r30.s64 + 288;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82ba3c48
	sub_82BA3C48(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e9d8e0
	sub_82E9D8E0(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82e9efd8
	sub_82E9EFD8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e9f430
	sub_82E9F430(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ba2380
	sub_82BA2380(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82e9fdc8
	sub_82E9FDC8(ctx, base);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e9f430
	sub_82E9F430(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba546c
	if (cr6.eq) goto loc_82BA546C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA546C:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82BA5480"))) PPC_WEAK_FUNC(sub_82BA5480);
PPC_FUNC_IMPL(__imp__sub_82BA5480) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82b9dc88
	sub_82B9DC88(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-23264
	ctx.r9.s64 = ctx.r10.s64 + -23264;
	// addi r10,r31,104
	ctx.r10.s64 = r31.s64 + 104;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
loc_82BA54D0:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bge 0x82ba54d0
	if (!cr0.lt) goto loc_82BA54D0;
	// addi r10,r31,128
	ctx.r10.s64 = r31.s64 + 128;
	// li r9,11
	ctx.r9.s64 = 11;
loc_82BA54EC:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bge 0x82ba54ec
	if (!cr0.lt) goto loc_82BA54EC;
	// stw r11,224(r31)
	PPC_STORE_U32(r31.u32 + 224, r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
	// addi r10,r31,224
	ctx.r10.s64 = r31.s64 + 224;
	// stw r11,232(r31)
	PPC_STORE_U32(r31.u32 + 232, r11.u32);
	// addi r10,r31,240
	ctx.r10.s64 = r31.s64 + 240;
	// stw r11,236(r31)
	PPC_STORE_U32(r31.u32 + 236, r11.u32);
	// addi r10,r31,256
	ctx.r10.s64 = r31.s64 + 256;
	// stw r11,240(r31)
	PPC_STORE_U32(r31.u32 + 240, r11.u32);
	// addi r10,r31,272
	ctx.r10.s64 = r31.s64 + 272;
	// stw r11,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r11.u32);
	// addi r10,r31,288
	ctx.r10.s64 = r31.s64 + 288;
	// stw r11,248(r31)
	PPC_STORE_U32(r31.u32 + 248, r11.u32);
	// addi r10,r31,304
	ctx.r10.s64 = r31.s64 + 304;
	// stw r11,252(r31)
	PPC_STORE_U32(r31.u32 + 252, r11.u32);
	// addi r3,r31,372
	ctx.r3.s64 = r31.s64 + 372;
	// stw r11,256(r31)
	PPC_STORE_U32(r31.u32 + 256, r11.u32);
	// addi r10,r31,320
	ctx.r10.s64 = r31.s64 + 320;
	// stw r11,260(r31)
	PPC_STORE_U32(r31.u32 + 260, r11.u32);
	// addi r10,r31,336
	ctx.r10.s64 = r31.s64 + 336;
	// stw r11,264(r31)
	PPC_STORE_U32(r31.u32 + 264, r11.u32);
	// stw r11,268(r31)
	PPC_STORE_U32(r31.u32 + 268, r11.u32);
	// stw r11,272(r31)
	PPC_STORE_U32(r31.u32 + 272, r11.u32);
	// stw r11,276(r31)
	PPC_STORE_U32(r31.u32 + 276, r11.u32);
	// stw r11,280(r31)
	PPC_STORE_U32(r31.u32 + 280, r11.u32);
	// stw r11,284(r31)
	PPC_STORE_U32(r31.u32 + 284, r11.u32);
	// stw r11,288(r31)
	PPC_STORE_U32(r31.u32 + 288, r11.u32);
	// stw r11,292(r31)
	PPC_STORE_U32(r31.u32 + 292, r11.u32);
	// stw r11,296(r31)
	PPC_STORE_U32(r31.u32 + 296, r11.u32);
	// stw r11,300(r31)
	PPC_STORE_U32(r31.u32 + 300, r11.u32);
	// stw r11,304(r31)
	PPC_STORE_U32(r31.u32 + 304, r11.u32);
	// stw r11,308(r31)
	PPC_STORE_U32(r31.u32 + 308, r11.u32);
	// stw r11,312(r31)
	PPC_STORE_U32(r31.u32 + 312, r11.u32);
	// stw r11,316(r31)
	PPC_STORE_U32(r31.u32 + 316, r11.u32);
	// stw r11,320(r31)
	PPC_STORE_U32(r31.u32 + 320, r11.u32);
	// stw r11,324(r31)
	PPC_STORE_U32(r31.u32 + 324, r11.u32);
	// stw r11,328(r31)
	PPC_STORE_U32(r31.u32 + 328, r11.u32);
	// stw r11,332(r31)
	PPC_STORE_U32(r31.u32 + 332, r11.u32);
	// stw r11,336(r31)
	PPC_STORE_U32(r31.u32 + 336, r11.u32);
	// stw r11,340(r31)
	PPC_STORE_U32(r31.u32 + 340, r11.u32);
	// stw r11,344(r31)
	PPC_STORE_U32(r31.u32 + 344, r11.u32);
	// stw r11,348(r31)
	PPC_STORE_U32(r31.u32 + 348, r11.u32);
	// stw r11,352(r31)
	PPC_STORE_U32(r31.u32 + 352, r11.u32);
	// stw r11,356(r31)
	PPC_STORE_U32(r31.u32 + 356, r11.u32);
	// stw r11,360(r31)
	PPC_STORE_U32(r31.u32 + 360, r11.u32);
	// stw r11,364(r31)
	PPC_STORE_U32(r31.u32 + 364, r11.u32);
	// addi r11,r31,352
	r11.s64 = r31.s64 + 352;
	// stw r9,368(r31)
	PPC_STORE_U32(r31.u32 + 368, ctx.r9.u32);
	// bl 0x82ae7e40
	sub_82AE7E40(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23280
	ctx.r4.s64 = r11.s64 + -23280;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e9d8d0
	sub_82E9D8D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23764
	ctx.r4.s64 = r11.s64 + -23764;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e9e1e0
	sub_82E9E1E0(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23772
	ctx.r4.s64 = r11.s64 + -23772;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e9e1e0
	sub_82E9E1E0(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23780
	ctx.r4.s64 = r11.s64 + -23780;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e9e1e0
	sub_82E9E1E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA5658"))) PPC_WEAK_FUNC(sub_82BA5658);
PPC_FUNC_IMPL(__imp__sub_82BA5658) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r30,372
	ctx.r3.s64 = r30.s64 + 372;
	// bl 0x82ae7ed8
	sub_82AE7ED8(ctx, base);
	// lwz r3,364(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 364);
	// addi r31,r30,352
	r31.s64 = r30.s64 + 352;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba568c
	if (cr6.eq) goto loc_82BA568C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA568C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba569c
	if (cr6.eq) goto loc_82BA569C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA569C:
	// lwz r3,348(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 348);
	// addi r31,r30,336
	r31.s64 = r30.s64 + 336;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba56b0
	if (cr6.eq) goto loc_82BA56B0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA56B0:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba56c0
	if (cr6.eq) goto loc_82BA56C0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA56C0:
	// lwz r3,332(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 332);
	// addi r31,r30,320
	r31.s64 = r30.s64 + 320;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba56d4
	if (cr6.eq) goto loc_82BA56D4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA56D4:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba56e4
	if (cr6.eq) goto loc_82BA56E4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA56E4:
	// lwz r3,316(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 316);
	// addi r31,r30,304
	r31.s64 = r30.s64 + 304;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba56f8
	if (cr6.eq) goto loc_82BA56F8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA56F8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba5708
	if (cr6.eq) goto loc_82BA5708;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA5708:
	// lwz r3,300(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 300);
	// addi r31,r30,288
	r31.s64 = r30.s64 + 288;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba571c
	if (cr6.eq) goto loc_82BA571C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA571C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba572c
	if (cr6.eq) goto loc_82BA572C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA572C:
	// lwz r3,284(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 284);
	// addi r31,r30,272
	r31.s64 = r30.s64 + 272;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba5740
	if (cr6.eq) goto loc_82BA5740;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA5740:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba5750
	if (cr6.eq) goto loc_82BA5750;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA5750:
	// lwz r3,268(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 268);
	// addi r31,r30,256
	r31.s64 = r30.s64 + 256;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba5764
	if (cr6.eq) goto loc_82BA5764;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA5764:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba5774
	if (cr6.eq) goto loc_82BA5774;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA5774:
	// lwz r3,252(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 252);
	// addi r31,r30,240
	r31.s64 = r30.s64 + 240;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba5788
	if (cr6.eq) goto loc_82BA5788;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA5788:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba5798
	if (cr6.eq) goto loc_82BA5798;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA5798:
	// lwz r3,236(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 236);
	// addi r31,r30,224
	r31.s64 = r30.s64 + 224;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba57ac
	if (cr6.eq) goto loc_82BA57AC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA57AC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba57bc
	if (cr6.eq) goto loc_82BA57BC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA57BC:
	// addi r3,r30,128
	ctx.r3.s64 = r30.s64 + 128;
	// bl 0x82ba3db0
	sub_82BA3DB0(ctx, base);
	// addi r3,r30,104
	ctx.r3.s64 = r30.s64 + 104;
	// bl 0x82ba3d58
	sub_82BA3D58(ctx, base);
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba57dc
	if (cr6.eq) goto loc_82BA57DC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA57DC:
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba57ec
	if (cr6.eq) goto loc_82BA57EC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA57EC:
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba57fc
	if (cr6.eq) goto loc_82BA57FC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA57FC:
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba580c
	if (cr6.eq) goto loc_82BA580C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA580C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b9dc40
	sub_82B9DC40(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA5830"))) PPC_WEAK_FUNC(sub_82BA5830);
PPC_FUNC_IMPL(__imp__sub_82BA5830) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82ba5658
	sub_82BA5658(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ba5860
	if (cr0.eq) goto loc_82BA5860;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_82BA5860:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA5880"))) PPC_WEAK_FUNC(sub_82BA5880);
PPC_FUNC_IMPL(__imp__sub_82BA5880) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82e9d8e0
	sub_82E9D8E0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,628(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x82ba59d0
	if (!cr6.gt) goto loc_82BA59D0;
	// lfs f13,632(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 632);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x82ba59d0
	if (!cr6.gt) goto loc_82BA59D0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r31,120
	r30.s64 = r31.s64 + 120;
	// bl 0x82ea2b00
	sub_82EA2B00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82ba5178
	sub_82BA5178(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba5900
	if (cr6.eq) goto loc_82BA5900;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA5900:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r29,r31,112
	r29.s64 = r31.s64 + 112;
	// bl 0x82ea2b00
	sub_82EA2B00(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lfs f31,-21220(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -21220);
	f31.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f30,-31000(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31000);
	f30.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// bl 0x82ba5348
	sub_82BA5348(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba5954
	if (cr6.eq) goto loc_82BA5954;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA5954:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ea2b00
	sub_82EA2B00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// li r8,1
	ctx.r8.s64 = 1;
	// bl 0x82ba5348
	sub_82BA5348(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba5994
	if (cr6.eq) goto loc_82BA5994;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA5994:
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
	// beq cr6,0x82ba59dc
	if (cr6.eq) goto loc_82BA59DC;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82BA59B0:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82ba59b0
	if (!cr0.eq) goto loc_82BA59B0;
	// b 0x82ba59dc
	goto loc_82BA59DC;
loc_82BA59D0:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
loc_82BA59DC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82BA59F0"))) PPC_WEAK_FUNC(sub_82BA59F0);
PPC_FUNC_IMPL(__imp__sub_82BA59F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mulli r10,r4,568
	ctx.r10.s64 = ctx.r4.s64 * 568;
	// lwz r11,-3852(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -3852);
	// addi r3,r31,372
	ctx.r3.s64 = r31.s64 + 372;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x82ae7bb0
	sub_82AE7BB0(ctx, base);
	// lwz r11,924(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 924);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ba5ac0
	if (cr6.eq) goto loc_82BA5AC0;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23232
	ctx.r4.s64 = r11.s64 + -23232;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lwz r11,924(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 924);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x825ab068
	sub_825AB068(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb5d0
	sub_82DFB5D0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32244
	r11.s64 = -2113142784;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r29,r11,-3752
	r29.s64 = r11.s64 + -3752;
	// bl 0x82b9dc50
	sub_82B9DC50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x82e9cd40
	sub_82E9CD40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,336
	ctx.r3.s64 = r31.s64 + 336;
	// bl 0x82bc2e30
	sub_82BC2E30(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba5aa8
	if (cr6.eq) goto loc_82BA5AA8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA5AA8:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba5ab8
	if (cr6.eq) goto loc_82BA5AB8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA5AB8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_82BA5AC0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82BA5AC8"))) PPC_WEAK_FUNC(sub_82BA5AC8);
PPC_FUNC_IMPL(__imp__sub_82BA5AC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82ba3e48
	sub_82BA3E48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ba40b0
	sub_82BA40B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,368(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 368);
	// bl 0x82ba59f0
	sub_82BA59F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA5B08"))) PPC_WEAK_FUNC(sub_82BA5B08);
PPC_FUNC_IMPL(__imp__sub_82BA5B08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23764
	ctx.r4.s64 = r11.s64 + -23764;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e9deb0
	sub_82E9DEB0(ctx, base);
	// lis r11,-31952
	r11.s64 = -2094006272;
	// lbz r11,10856(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 10856);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82ba5b94
	if (!cr0.eq) goto loc_82BA5B94;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// beq cr6,0x82ba5b80
	if (cr6.eq) goto loc_82BA5B80;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82BA5B64:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82ba5b64
	if (!cr0.eq) goto loc_82BA5B64;
loc_82BA5B80:
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e9e020
	sub_82E9E020(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// b 0x82ba5ff0
	goto loc_82BA5FF0;
loc_82BA5B94:
	// lis r11,-31952
	r11.s64 = -2094006272;
	// lwz r10,368(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 368);
	// lwz r11,10860(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 10860);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82ba5bb8
	if (cr6.eq) goto loc_82BA5BB8;
	// stw r11,368(r31)
	PPC_STORE_U32(r31.u32 + 368, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x82ba59f0
	sub_82BA59F0(ctx, base);
loc_82BA5BB8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e9d8e0
	sub_82E9D8E0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,40
	ctx.r4.s64 = 40;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r4,96
	ctx.r4.s64 = 96;
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stb r11,685(r30)
	PPC_STORE_U8(r30.u32 + 685, r11.u8);
	// li r4,60
	ctx.r4.s64 = 60;
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// li r28,2
	r28.s64 = 2;
	// li r29,1
	r29.s64 = 1;
	// stw r28,344(r30)
	PPC_STORE_U32(r30.u32 + 344, r28.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,1152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1152);
	// rlwimi r10,r29,11,19,21
	ctx.r10.u64 = (__builtin_rotateleft32(r29.u32, 11) & 0x1C00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE3FF);
	// stw r10,1152(r11)
	PPC_STORE_U32(r11.u32 + 1152, ctx.r10.u32);
	// ld r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 24);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// std r10,24(r11)
	PPC_STORE_U64(r11.u32 + 24, ctx.r10.u64);
	// stw r28,348(r30)
	PPC_STORE_U32(r30.u32 + 348, r28.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,1152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1152);
	// rlwimi r10,r29,14,16,18
	ctx.r10.u64 = (__builtin_rotateleft32(r29.u32, 14) & 0xE000) | (ctx.r10.u64 & 0xFFFFFFFFFFFF1FFF);
	// stw r10,1152(r11)
	PPC_STORE_U32(r11.u32 + 1152, ctx.r10.u32);
	// ld r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 24);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// std r10,24(r11)
	PPC_STORE_U64(r11.u32 + 24, ctx.r10.u64);
	// bl 0x82ba2380
	sub_82BA2380(ctx, base);
	// stw r28,364(r30)
	PPC_STORE_U32(r30.u32 + 364, r28.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,1176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1176);
	// rlwimi r10,r29,11,19,21
	ctx.r10.u64 = (__builtin_rotateleft32(r29.u32, 11) & 0x1C00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE3FF);
	// stw r10,1176(r11)
	PPC_STORE_U32(r11.u32 + 1176, ctx.r10.u32);
	// ld r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 24);
	// oris r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 1073741824;
	// std r10,24(r11)
	PPC_STORE_U64(r11.u32 + 24, ctx.r10.u64);
	// bl 0x82ba21f0
	sub_82BA21F0(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ba2380
	sub_82BA2380(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23772
	ctx.r4.s64 = r11.s64 + -23772;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e9dc90
	sub_82E9DC90(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ba5d70
	if (cr6.eq) goto loc_82BA5D70;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23780
	ctx.r4.s64 = r11.s64 + -23780;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82e9dc90
	sub_82E9DC90(ctx, base);
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r29,r31,80
	r29.s64 = r31.s64 + 80;
	// beq cr6,0x82ba5d3c
	if (cr6.eq) goto loc_82BA5D3C;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r28,r1,120
	r28.s64 = ctx.r1.s64 + 120;
	// addi r27,r1,96
	r27.s64 = ctx.r1.s64 + 96;
	// bl 0x82ea2b00
	sub_82EA2B00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// bl 0x82ba42f8
	sub_82BA42F8(ctx, base);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// b 0x82ba5d5c
	goto loc_82BA5D5C;
loc_82BA5D3C:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r28,r1,96
	r28.s64 = ctx.r1.s64 + 96;
	// bl 0x82ea2b00
	sub_82EA2B00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x82ba43f8
	sub_82BA43F8(ctx, base);
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
loc_82BA5D5C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba5d68
	if (cr6.eq) goto loc_82BA5D68;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA5D68:
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// b 0x82ba5da0
	goto loc_82BA5DA0;
loc_82BA5D70:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r29,r31,80
	r29.s64 = r31.s64 + 80;
	// addi r28,r1,88
	r28.s64 = ctx.r1.s64 + 88;
	// bl 0x82ea2b00
	sub_82EA2B00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x82ba43f8
	sub_82BA43F8(ctx, base);
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
loc_82BA5DA0:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba5dac
	if (cr6.eq) goto loc_82BA5DAC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA5DAC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e9d8f0
	sub_82E9D8F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ba5e20
	if (cr0.eq) goto loc_82BA5E20;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82ea29e8
	sub_82EA29E8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e9efd8
	sub_82E9EFD8(ctx, base);
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba5df0
	if (cr6.eq) goto loc_82BA5DF0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA5DF0:
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ba2380
	sub_82BA2380(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e9fe10
	sub_82E9FE10(ctx, base);
	// b 0x82ba5e7c
	goto loc_82BA5E7C;
loc_82BA5E20:
	// lwz r30,72(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82e0ebe8
	sub_82E0EBE8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82ea29e8
	sub_82EA29E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// bl 0x82ba44a0
	sub_82BA44A0(ctx, base);
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba5e6c
	if (cr6.eq) goto loc_82BA5E6C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA5E6C:
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba5e7c
	if (cr6.eq) goto loc_82BA5E7C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA5E7C:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// bl 0x82ea2910
	sub_82EA2910(ctx, base);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// addi r29,r31,96
	r29.s64 = r31.s64 + 96;
	// lwz r30,96(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82e0ebe8
	sub_82E0EBE8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82ea2b00
	sub_82EA2B00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ba5178
	sub_82BA5178(ctx, base);
	// lwz r3,172(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba5ed0
	if (cr6.eq) goto loc_82BA5ED0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA5ED0:
	// lwz r3,188(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba5ee0
	if (cr6.eq) goto loc_82BA5EE0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA5EE0:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// addi r30,r31,88
	r30.s64 = r31.s64 + 88;
	// bl 0x82ea2b00
	sub_82EA2B00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ba50e0
	sub_82BA50E0(ctx, base);
	// lwz r3,204(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba5f18
	if (cr6.eq) goto loc_82BA5F18;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA5F18:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82ba5880
	sub_82BA5880(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82ba45a0
	sub_82BA45A0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// addi r30,r1,128
	r30.s64 = ctx.r1.s64 + 128;
	// addi r29,r1,136
	r29.s64 = ctx.r1.s64 + 136;
	// bl 0x82ea2b00
	sub_82EA2B00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x82ba4f98
	sub_82BA4F98(ctx, base);
	// lwz r3,220(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba5f78
	if (cr6.eq) goto loc_82BA5F78;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA5F78:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// beq cr6,0x82ba5fb0
	if (cr6.eq) goto loc_82BA5FB0;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82BA5F94:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82ba5f94
	if (!cr0.eq) goto loc_82BA5F94;
loc_82BA5FB0:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e9e020
	sub_82E9E020(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba5fcc
	if (cr6.eq) goto loc_82BA5FCC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA5FCC:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba5fdc
	if (cr6.eq) goto loc_82BA5FDC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA5FDC:
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba5fec
	if (cr6.eq) goto loc_82BA5FEC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA5FEC:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_82BA5FF0:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba5ffc
	if (cr6.eq) goto loc_82BA5FFC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA5FFC:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba600c
	if (cr6.eq) goto loc_82BA600C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA600C:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82BA6018"))) PPC_WEAK_FUNC(sub_82BA6018);
PPC_FUNC_IMPL(__imp__sub_82BA6018) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// addi r12,r1,-48
	r12.s64 = ctx.r1.s64 + -48;
	// bl 0x831b1434
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lfs f0,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lfs f30,5576(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5576);
	f30.f64 = double(temp.f32);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lfs f31,2244(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2244);
	f31.f64 = double(temp.f32);
	// li r31,4
	r31.s64 = 4;
	// fmr f29,f0
	f29.f64 = f0.f64;
	// lis r28,-32243
	r28.s64 = -2113077248;
	// fmr f28,f0
	f28.f64 = f0.f64;
	// lfs f27,-31000(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31000);
	f27.f64 = double(temp.f32);
loc_82BA6068:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f3,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x82ae92a0
	sub_82AE92A0(ctx, base);
	// lfs f0,-23212(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -23212);
	f0.f64 = double(temp.f32);
	// fmadds f29,f1,f31,f29
	f29.f64 = double(float(ctx.f1.f64 * f31.f64 + f29.f64));
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// fadds f28,f28,f31
	f28.f64 = double(float(f28.f64 + f31.f64));
	// fmuls f31,f31,f0
	f31.f64 = double(float(f31.f64 * f0.f64));
	// fmuls f30,f30,f27
	f30.f64 = double(float(f30.f64 * f27.f64));
	// bne 0x82ba6068
	if (!cr0.eq) goto loc_82BA6068;
	// fdivs f0,f29,f28
	f0.f64 = double(float(f29.f64 / f28.f64));
	// stfs f0,0(r27)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r27.u32 + 0, temp.u32);
	// stfs f0,4(r27)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r27.u32 + 4, temp.u32);
	// stfs f0,8(r27)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r27.u32 + 8, temp.u32);
	// stfs f0,12(r27)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r27.u32 + 12, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-48
	r12.s64 = ctx.r1.s64 + -48;
	// bl 0x831b1480
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82BA60C0"))) PPC_WEAK_FUNC(sub_82BA60C0);
PPC_FUNC_IMPL(__imp__sub_82BA60C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,105(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 105);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ba60fc
	if (cr0.eq) goto loc_82BA60FC;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// lbz r11,11712(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 11712);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ba60fc
	if (cr0.eq) goto loc_82BA60FC;
	// bl 0x82b9dc60
	sub_82B9DC60(ctx, base);
	// bl 0x8250c610
	sub_8250C610(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x82ba6100
	if (!cr0.eq) goto loc_82BA6100;
loc_82BA60FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BA6100:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA6110"))) PPC_WEAK_FUNC(sub_82BA6110);
PPC_FUNC_IMPL(__imp__sub_82BA6110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stb r11,104(r3)
	PPC_STORE_U8(ctx.r3.u32 + 104, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA6120"))) PPC_WEAK_FUNC(sub_82BA6120);
PPC_FUNC_IMPL(__imp__sub_82BA6120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8315cf68
	sub_8315CF68(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,105(r3)
	PPC_STORE_U8(ctx.r3.u32 + 105, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA6148"))) PPC_WEAK_FUNC(sub_82BA6148);
PPC_FUNC_IMPL(__imp__sub_82BA6148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8315cf68
	sub_8315CF68(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,105(r3)
	PPC_STORE_U8(ctx.r3.u32 + 105, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA6170"))) PPC_WEAK_FUNC(sub_82BA6170);
PPC_FUNC_IMPL(__imp__sub_82BA6170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8315cf68
	sub_8315CF68(ctx, base);
	// lis r11,-31952
	r11.s64 = -2094006272;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,11776
	r11.s64 = r11.s64 + 11776;
	// lis r9,-31943
	ctx.r9.s64 = -2093416448;
	// stb r10,104(r3)
	PPC_STORE_U8(ctx.r3.u32 + 104, ctx.r10.u8);
	// lis r8,-31952
	ctx.r8.s64 = -2094006272;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,116(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// lfs f0,-3624(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3624);
	f0.f64 = double(temp.f32);
	// lfs f13,11740(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11740);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f0,120(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA61C0"))) PPC_WEAK_FUNC(sub_82BA61C0);
PPC_FUNC_IMPL(__imp__sub_82BA61C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822c0988
	sub_822C0988(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ba6218
	if (cr0.eq) goto loc_82BA6218;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-23188
	ctx.r9.s64 = r11.s64 + -23188;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82ba621c
	goto loc_82BA621C;
loc_82BA6218:
	// li r11,0
	r11.s64 = 0;
loc_82BA621C:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ba6268
	if (!cr6.eq) goto loc_82BA6268;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82ba6248
	if (cr6.eq) goto loc_82BA6248;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BA6248:
	// lis r11,-31951
	r11.s64 = -2093940736;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-15072(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -15072);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82BA6268:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA6288"))) PPC_WEAK_FUNC(sub_82BA6288);
PPC_FUNC_IMPL(__imp__sub_82BA6288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822c0988
	sub_822C0988(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ba62e0
	if (cr0.eq) goto loc_82BA62E0;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-23168
	ctx.r9.s64 = r11.s64 + -23168;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82ba62e4
	goto loc_82BA62E4;
loc_82BA62E0:
	// li r11,0
	r11.s64 = 0;
loc_82BA62E4:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ba6330
	if (!cr6.eq) goto loc_82BA6330;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82ba6310
	if (cr6.eq) goto loc_82BA6310;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BA6310:
	// lis r11,-31951
	r11.s64 = -2093940736;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-15072(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -15072);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82BA6330:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA6350"))) PPC_WEAK_FUNC(sub_82BA6350);
PPC_FUNC_IMPL(__imp__sub_82BA6350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822c0988
	sub_822C0988(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ba63a8
	if (cr0.eq) goto loc_82BA63A8;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-23148
	ctx.r9.s64 = r11.s64 + -23148;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82ba63ac
	goto loc_82BA63AC;
loc_82BA63A8:
	// li r11,0
	r11.s64 = 0;
loc_82BA63AC:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ba63f8
	if (!cr6.eq) goto loc_82BA63F8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82ba63d8
	if (cr6.eq) goto loc_82BA63D8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BA63D8:
	// lis r11,-31951
	r11.s64 = -2093940736;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-15072(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -15072);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82BA63F8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA6418"))) PPC_WEAK_FUNC(sub_82BA6418);
PPC_FUNC_IMPL(__imp__sub_82BA6418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822c0988
	sub_822C0988(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ba6470
	if (cr0.eq) goto loc_82BA6470;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-23128
	ctx.r9.s64 = r11.s64 + -23128;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82ba6474
	goto loc_82BA6474;
loc_82BA6470:
	// li r11,0
	r11.s64 = 0;
loc_82BA6474:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ba64c0
	if (!cr6.eq) goto loc_82BA64C0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82ba64a0
	if (cr6.eq) goto loc_82BA64A0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BA64A0:
	// lis r11,-31951
	r11.s64 = -2093940736;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-15072(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -15072);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82BA64C0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA64E0"))) PPC_WEAK_FUNC(sub_82BA64E0);
PPC_FUNC_IMPL(__imp__sub_82BA64E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82b9dc88
	sub_82B9DC88(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,-22848
	r11.s64 = r11.s64 + -22848;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r29,r31,132
	r29.s64 = r31.s64 + 132;
	// stw r30,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r30.u32);
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// stw r30,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r30.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// lfs f31,2240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f31.f64 = double(temp.f32);
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r30.u32);
	// stfs f31,108(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 108, temp.u32);
	// stfs f31,112(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// stb r30,104(r31)
	PPC_STORE_U8(r31.u32 + 104, r30.u8);
	// stfs f31,116(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 116, temp.u32);
	// stb r30,105(r31)
	PPC_STORE_U8(r31.u32 + 105, r30.u8);
	// stfs f31,120(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// stfs f31,124(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 124, temp.u32);
	// stfs f31,128(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 128, temp.u32);
	// bl 0x82e668c8
	sub_82E668C8(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,-23204
	r11.s64 = r11.s64 + -23204;
	// addi r4,r10,-22868
	ctx.r4.s64 = ctx.r10.s64 + -22868;
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e9d8d0
	sub_82E9D8D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23764
	ctx.r4.s64 = r11.s64 + -23764;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e9e1e0
	sub_82E9E1E0(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-22952
	ctx.r4.s64 = r11.s64 + -22952;
	// li r5,81
	ctx.r5.s64 = 81;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x82ba65fc
	if (cr0.eq) goto loc_82BA65FC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e65b68
	sub_82E65B68(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r30,r28
	r30.u64 = r28.u64;
	// addi r11,r11,-23108
	r11.s64 = r11.s64 + -23108;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
loc_82BA65FC:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82ba61c0
	sub_82BA61C0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r30,84(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// beq cr6,0x82ba6654
	if (cr6.eq) goto loc_82BA6654;
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
loc_82BA6638:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82ba6638
	if (!cr0.eq) goto loc_82BA6638;
loc_82BA6654:
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e676a0
	sub_82E676A0(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba6680
	if (cr6.eq) goto loc_82BA6680;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA6680:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba6690
	if (cr6.eq) goto loc_82BA6690;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA6690:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82ba66a0
	if (cr6.eq) goto loc_82BA66A0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA66A0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82BA66B0"))) PPC_WEAK_FUNC(sub_82BA66B0);
PPC_FUNC_IMPL(__imp__sub_82BA66B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r30,132
	ctx.r3.s64 = r30.s64 + 132;
	// bl 0x82e66778
	sub_82E66778(ctx, base);
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// addi r31,r30,88
	r31.s64 = r30.s64 + 88;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba66e4
	if (cr6.eq) goto loc_82BA66E4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA66E4:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba66f4
	if (cr6.eq) goto loc_82BA66F4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA66F4:
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba6704
	if (cr6.eq) goto loc_82BA6704;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA6704:
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba6714
	if (cr6.eq) goto loc_82BA6714;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA6714:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b9dc40
	sub_82B9DC40(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA6738"))) PPC_WEAK_FUNC(sub_82BA6738);
PPC_FUNC_IMPL(__imp__sub_82BA6738) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82ba66b0
	sub_82BA66B0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ba6768
	if (cr0.eq) goto loc_82BA6768;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_82BA6768:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA6788"))) PPC_WEAK_FUNC(sub_82BA6788);
PPC_FUNC_IMPL(__imp__sub_82BA6788) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82b9dc50
	sub_82B9DC50(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e9d8e0
	sub_82E9D8E0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r9,6184
	ctx.r9.s64 = 405274624;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f2,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	ctx.f2.f64 = double(temp.f32);
	// ori r9,r9,390
	ctx.r9.u64 = ctx.r9.u64 | 390;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ea27e8
	sub_82EA27E8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba680c
	if (cr6.eq) goto loc_82BA680C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA680C:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r6,r11,-22816
	ctx.r6.s64 = r11.s64 + -22816;
	// addi r5,r10,-23320
	ctx.r5.s64 = ctx.r10.s64 + -23320;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e9cd40
	sub_82E9CD40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82bc2e30
	sub_82BC2E30(ctx, base);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba6844
	if (cr6.eq) goto loc_82BA6844;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA6844:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba6854
	if (cr6.eq) goto loc_82BA6854;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA6854:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA6870"))) PPC_WEAK_FUNC(sub_82BA6870);
PPC_FUNC_IMPL(__imp__sub_82BA6870) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23764
	ctx.r4.s64 = r11.s64 + -23764;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e9deb0
	sub_82E9DEB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ba60c0
	sub_82BA60C0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ba68fc
	if (!cr0.eq) goto loc_82BA68FC;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// beq cr6,0x82ba68e8
	if (cr6.eq) goto loc_82BA68E8;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82BA68CC:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82ba68cc
	if (!cr0.eq) goto loc_82BA68CC;
loc_82BA68E8:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e9e020
	sub_82E9E020(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x82ba6be4
	goto loc_82BA6BE4;
loc_82BA68FC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e9d8e0
	sub_82E9D8E0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,80(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r26,r30,80
	r26.s64 = r30.s64 + 80;
	// bl 0x82ea2b00
	sub_82EA2B00(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e9efd8
	sub_82E9EFD8(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba6940
	if (cr6.eq) goto loc_82BA6940;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA6940:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e9f430
	sub_82E9F430(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r11,1
	r11.s64 = 1;
	// stw r10,344(r31)
	PPC_STORE_U32(r31.u32 + 344, ctx.r10.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r8,1152(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1152);
	// rlwimi r8,r11,11,19,21
	ctx.r8.u64 = (__builtin_rotateleft32(r11.u32, 11) & 0x1C00) | (ctx.r8.u64 & 0xFFFFFFFFFFFFE3FF);
	// stw r8,1152(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1152, ctx.r8.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// ld r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 24);
	// oris r8,r8,32768
	ctx.r8.u64 = ctx.r8.u64 | 2147483648;
	// std r8,24(r9)
	PPC_STORE_U64(ctx.r9.u32 + 24, ctx.r8.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,348(r31)
	PPC_STORE_U32(r31.u32 + 348, ctx.r10.u32);
	// lwz r10,1152(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1152);
	// rlwimi r10,r11,14,16,18
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 14) & 0xE000) | (ctx.r10.u64 & 0xFFFFFFFFFFFF1FFF);
	// stw r10,1152(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1152, ctx.r10.u32);
	// ld r11,24(r9)
	r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 24);
	// oris r11,r11,32768
	r11.u64 = r11.u64 | 2147483648;
	// std r11,24(r9)
	PPC_STORE_U64(ctx.r9.u32 + 24, r11.u64);
	// bl 0x82ba2380
	sub_82BA2380(ctx, base);
	// addi r5,r30,72
	ctx.r5.s64 = r30.s64 + 72;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e9f430
	sub_82E9F430(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r29,0
	r29.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r29,364(r31)
	PPC_STORE_U32(r31.u32 + 364, r29.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,1176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1176);
	// rlwinm r10,r10,0,22,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE3FF;
	// stw r10,1176(r11)
	PPC_STORE_U32(r11.u32 + 1176, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 24);
	// oris r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 1073741824;
	// std r10,24(r11)
	PPC_STORE_U64(r11.u32 + 24, ctx.r10.u64);
	// bl 0x82ba21f0
	sub_82BA21F0(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ba2380
	sub_82BA2380(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,40
	ctx.r4.s64 = 40;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// stb r29,685(r31)
	PPC_STORE_U8(r31.u32 + 685, r29.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,60
	ctx.r4.s64 = 60;
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// addi r28,r30,88
	r28.s64 = r30.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r28,8
	ctx.r5.s64 = r28.s64 + 8;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8258c838
	sub_8258C838(ctx, base);
	// lis r29,-31943
	r29.s64 = -2093416448;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r24,r10,-2644
	r24.s64 = ctx.r10.s64 + -2644;
	// lwz r11,-2640(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -2640);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82ba6a8c
	if (!cr0.eq) goto loc_82BA6A8C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stw r11,-2640(r29)
	PPC_STORE_U32(r29.u32 + -2640, r11.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r4,r10,-116
	ctx.r4.s64 = ctx.r10.s64 + -116;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lwz r11,-2640(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -2640);
loc_82BA6A8C:
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r25,r10,-2648
	r25.s64 = ctx.r10.s64 + -2648;
	// bne 0x82ba6ab8
	if (!cr0.eq) goto loc_82BA6AB8;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stw r11,-2640(r29)
	PPC_STORE_U32(r29.u32 + -2640, r11.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r4,r10,-128
	ctx.r4.s64 = ctx.r10.s64 + -128;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lwz r11,-2640(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -2640);
loc_82BA6AB8:
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// rlwinm. r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r27,r10,-2652
	r27.s64 = ctx.r10.s64 + -2652;
	// bne 0x82ba6ae0
	if (!cr0.eq) goto loc_82BA6AE0;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stw r11,-2640(r29)
	PPC_STORE_U32(r29.u32 + -2640, r11.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r10,-140
	ctx.r4.s64 = ctx.r10.s64 + -140;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
loc_82BA6AE0:
	// lis r11,-31952
	r11.s64 = -2094006272;
	// lfs f0,112(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 112);
	f0.f64 = double(temp.f32);
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f8,124(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 124);
	ctx.f8.f64 = double(temp.f32);
	// lis r8,-31952
	ctx.r8.s64 = -2094006272;
	// lfs f7,128(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 128);
	ctx.f7.f64 = double(temp.f32);
	// lis r7,-31952
	ctx.r7.s64 = -2094006272;
	// lfs f6,120(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 120);
	ctx.f6.f64 = double(temp.f32);
	// lis r6,-31952
	ctx.r6.s64 = -2094006272;
	// lfs f13,11720(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 11720);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,11724(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11724);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lfs f0,2240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	f0.f64 = double(temp.f32);
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lfs f11,11716(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11716);
	ctx.f11.f64 = double(temp.f32);
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// lfs f10,11728(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 11728);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,11732(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 11732);
	ctx.f9.f64 = double(temp.f32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f8,144(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f7,148(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,140(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f6,156(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f11,152(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f10,160(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f9,164(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f0,168(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f0,172(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// bl 0x82e1a218
	sub_82E1A218(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// bl 0x82e1a218
	sub_82E1A218(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// bl 0x82e1a218
	sub_82E1A218(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e9fdc8
	sub_82E9FDC8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ba3e08
	sub_82BA3E08(ctx, base);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// beq cr6,0x82ba6bd4
	if (cr6.eq) goto loc_82BA6BD4;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82BA6BB8:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82ba6bb8
	if (!cr0.eq) goto loc_82BA6BB8;
loc_82BA6BD4:
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e9e020
	sub_82E9E020(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_82BA6BE4:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba6bf0
	if (cr6.eq) goto loc_82BA6BF0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA6BF0:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba6c00
	if (cr6.eq) goto loc_82BA6C00;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA6C00:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82BA6C08"))) PPC_WEAK_FUNC(sub_82BA6C08);
PPC_FUNC_IMPL(__imp__sub_82BA6C08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lfs f0,28(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,96
	ctx.r3.s64 = 96;
	// stfs f0,108(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 108, temp.u32);
	// lfs f0,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	f0.f64 = double(temp.f32);
	// stfs f0,124(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 124, temp.u32);
	// lfs f0,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	f0.f64 = double(temp.f32);
	// stb r11,104(r30)
	PPC_STORE_U8(r30.u32 + 104, r11.u8);
	// stfs f0,128(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 128, temp.u32);
	// lbz r11,24(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 24);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r4,r11,-22952
	ctx.r4.s64 = r11.s64 + -22952;
	// beq 0x82ba6d18
	if (cr0.eq) goto loc_82BA6D18;
	// li r5,214
	ctx.r5.s64 = 214;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82ba6c84
	if (cr0.eq) goto loc_82BA6C84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e65b68
	sub_82E65B68(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r11,r11,-23068
	r11.s64 = r11.s64 + -23068;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x82ba6c88
	goto loc_82BA6C88;
loc_82BA6C84:
	// li r31,0
	r31.s64 = 0;
loc_82BA6C88:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82ba6288
	sub_82BA6288(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// beq cr6,0x82ba6ce0
	if (cr6.eq) goto loc_82BA6CE0;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
loc_82BA6CC4:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82ba6cc4
	if (!cr0.eq) goto loc_82BA6CC4;
loc_82BA6CE0:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r30,132
	ctx.r4.s64 = r30.s64 + 132;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e676a0
	sub_82E676A0(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba6d10
	if (cr6.eq) goto loc_82BA6D10;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA6D10:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x82ba6dd0
	goto loc_82BA6DD0;
loc_82BA6D18:
	// li r5,217
	ctx.r5.s64 = 217;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82ba6d40
	if (cr0.eq) goto loc_82BA6D40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e65b68
	sub_82E65B68(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r11,r11,-23028
	r11.s64 = r11.s64 + -23028;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x82ba6d44
	goto loc_82BA6D44;
loc_82BA6D40:
	// li r31,0
	r31.s64 = 0;
loc_82BA6D44:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82ba6350
	sub_82BA6350(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// beq cr6,0x82ba6d9c
	if (cr6.eq) goto loc_82BA6D9C;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
loc_82BA6D80:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82ba6d80
	if (!cr0.eq) goto loc_82BA6D80;
loc_82BA6D9C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r30,132
	ctx.r4.s64 = r30.s64 + 132;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e676a0
	sub_82E676A0(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba6dcc
	if (cr6.eq) goto loc_82BA6DCC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA6DCC:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_82BA6DD0:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba6ddc
	if (cr6.eq) goto loc_82BA6DDC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA6DDC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82ba6dec
	if (cr6.eq) goto loc_82BA6DEC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA6DEC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA6E08"))) PPC_WEAK_FUNC(sub_82BA6E08);
PPC_FUNC_IMPL(__imp__sub_82BA6E08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8315cf68
	sub_8315CF68(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e627d0
	sub_82E627D0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// lfs f1,112(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r29,r11,11776
	r29.s64 = r11.s64 + 11776;
	// addi r3,r31,116
	ctx.r3.s64 = r31.s64 + 116;
	// lfs f3,11776(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 11776);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,11736(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11736);
	ctx.f2.f64 = double(temp.f32);
	// lfs f5,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmr f6,f31
	ctx.f6.f64 = f31.f64;
	// bl 0x8249a738
	sub_8249A738(ctx, base);
	// lfs f0,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 112);
	f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f13,116(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f13,f31,f0
	f0.f64 = double(float(ctx.f13.f64 * f31.f64 + f0.f64));
	// stfs f0,112(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// bl 0x82e627b8
	sub_82E627B8(ctx, base);
	// lfs f0,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 12);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x82ba6f64
	if (!cr6.gt) goto loc_82BA6F64;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-22952
	ctx.r4.s64 = r11.s64 + -22952;
	// li r5,270
	ctx.r5.s64 = 270;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82ba6eb8
	if (cr0.eq) goto loc_82BA6EB8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e65b68
	sub_82E65B68(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r11,r11,-23028
	r11.s64 = r11.s64 + -23028;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x82ba6ebc
	goto loc_82BA6EBC;
loc_82BA6EB8:
	// li r31,0
	r31.s64 = 0;
loc_82BA6EBC:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82ba6350
	sub_82BA6350(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// beq cr6,0x82ba6f14
	if (cr6.eq) goto loc_82BA6F14;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
loc_82BA6EF8:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82ba6ef8
	if (!cr0.eq) goto loc_82BA6EF8;
loc_82BA6F14:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e678b8
	sub_82E678B8(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba6f44
	if (cr6.eq) goto loc_82BA6F44;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA6F44:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba6f54
	if (cr6.eq) goto loc_82BA6F54;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA6F54:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82ba6f64
	if (cr6.eq) goto loc_82BA6F64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA6F64:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82BA6F70"))) PPC_WEAK_FUNC(sub_82BA6F70);
PPC_FUNC_IMPL(__imp__sub_82BA6F70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8315cf68
	sub_8315CF68(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e627d0
	sub_82E627D0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// lfs f2,108(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 108);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r31,116
	ctx.r3.s64 = r31.s64 + 116;
	// lfs f1,112(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// addi r10,r11,11792
	ctx.r10.s64 = r11.s64 + 11792;
	// lfs f3,11792(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 11792);
	ctx.f3.f64 = double(temp.f32);
	// lfs f5,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmr f6,f31
	ctx.f6.f64 = f31.f64;
	// bl 0x8249a738
	sub_8249A738(ctx, base);
	// lfs f0,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 112);
	f0.f64 = double(temp.f32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lfs f13,116(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// fmadds f0,f13,f31,f0
	f0.f64 = double(float(ctx.f13.f64 * f31.f64 + f0.f64));
	// stfs f0,112(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// addi r4,r11,-22952
	ctx.r4.s64 = r11.s64 + -22952;
	// li r5,297
	ctx.r5.s64 = 297;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82ba7010
	if (cr0.eq) goto loc_82BA7010;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e65b68
	sub_82E65B68(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r11,r11,-22988
	r11.s64 = r11.s64 + -22988;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x82ba7014
	goto loc_82BA7014;
loc_82BA7010:
	// li r31,0
	r31.s64 = 0;
loc_82BA7014:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82ba6418
	sub_82BA6418(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// beq cr6,0x82ba706c
	if (cr6.eq) goto loc_82BA706C;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
loc_82BA7050:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82ba7050
	if (!cr0.eq) goto loc_82BA7050;
loc_82BA706C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e678b8
	sub_82E678B8(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba709c
	if (cr6.eq) goto loc_82BA709C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA709C:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba70ac
	if (cr6.eq) goto loc_82BA70AC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA70AC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82ba70bc
	if (cr6.eq) goto loc_82BA70BC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA70BC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA70D8"))) PPC_WEAK_FUNC(sub_82BA70D8);
PPC_FUNC_IMPL(__imp__sub_82BA70D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8315cf68
	sub_8315CF68(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e627d0
	sub_82E627D0(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// lfs f1,112(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,11792
	ctx.r9.s64 = r11.s64 + 11792;
	// addi r3,r31,116
	ctx.r3.s64 = r31.s64 + 116;
	// lfs f3,11792(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 11792);
	ctx.f3.f64 = double(temp.f32);
	// lfs f31,2240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f31.f64 = double(temp.f32);
	// lfs f5,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// lfs f4,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmr f6,f30
	ctx.f6.f64 = f30.f64;
	// bl 0x8249a738
	sub_8249A738(ctx, base);
	// lfs f13,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f12,116(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f13,f12,f30,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * f30.f64 + ctx.f13.f64));
	// stfs f13,112(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// lfs f0,-24792(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24792);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82ba7240
	if (!cr6.lt) goto loc_82BA7240;
	// stfs f31,112(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-22952
	ctx.r4.s64 = r11.s64 + -22952;
	// li r5,320
	ctx.r5.s64 = 320;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82ba7198
	if (cr0.eq) goto loc_82BA7198;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e65b68
	sub_82E65B68(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r11,r11,-23108
	r11.s64 = r11.s64 + -23108;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x82ba719c
	goto loc_82BA719C;
loc_82BA7198:
	// li r31,0
	r31.s64 = 0;
loc_82BA719C:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82ba61c0
	sub_82BA61C0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// beq cr6,0x82ba71f4
	if (cr6.eq) goto loc_82BA71F4;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
loc_82BA71D8:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82ba71d8
	if (!cr0.eq) goto loc_82BA71D8;
loc_82BA71F4:
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e678b8
	sub_82E678B8(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba7220
	if (cr6.eq) goto loc_82BA7220;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA7220:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba7230
	if (cr6.eq) goto loc_82BA7230;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA7230:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82ba7240
	if (cr6.eq) goto loc_82BA7240;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA7240:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA7260"))) PPC_WEAK_FUNC(sub_82BA7260);
PPC_FUNC_IMPL(__imp__sub_82BA7260) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// clrlwi. r28,r29,24
	r28.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x82ba72b4
	if (cr0.eq) goto loc_82BA72B4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31952
	r11.s64 = -2094006272;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,11808
	ctx.r3.s64 = r11.s64 + 11808;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ba72b4
	if (cr0.eq) goto loc_82BA72B4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ba6c08
	sub_82BA6C08(ctx, base);
loc_82BA72AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82ba72fc
	goto loc_82BA72FC;
loc_82BA72B4:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82ba72ec
	if (cr6.eq) goto loc_82BA72EC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31961
	r11.s64 = -2094596096;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,16888
	ctx.r3.s64 = r11.s64 + 16888;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ba72ec
	if (cr0.eq) goto loc_82BA72EC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ba6110
	sub_82BA6110(ctx, base);
	// b 0x82ba72ac
	goto loc_82BA72AC;
loc_82BA72EC:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b9dd60
	sub_82B9DD60(ctx, base);
loc_82BA72FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82BA7308"))) PPC_WEAK_FUNC(sub_82BA7308);
PPC_FUNC_IMPL(__imp__sub_82BA7308) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r31,r29,72
	r31.s64 = r29.s64 + 72;
	// lwz r10,72(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 72);
	// li r28,0
	r28.s64 = 0;
	// lfs f30,2244(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f30.f64 = double(temp.f32);
	// lfs f31,2240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	f31.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ba7400
	if (!cr6.eq) goto loc_82BA7400;
	// bl 0x82e9d8e0
	sub_82E9D8E0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r9,10240
	ctx.r9.s64 = 671088640;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r9,r9,258
	ctx.r9.u64 = ctx.r9.u64 | 258;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82ea2790
	sub_82EA2790(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba73a0
	if (cr6.eq) goto loc_82BA73A0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA73A0:
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r28.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r28,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r28.u32);
	// li r4,256
	ctx.r4.s64 = 256;
	// stw r28,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r28.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82ae9480
	sub_82AE9480(ctx, base);
	// lis r11,-32070
	r11.s64 = -2101739520;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r11,24600
	ctx.r5.s64 = r11.s64 + 24600;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e9ef90
	sub_82E9EF90(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82ae8eb8
	sub_82AE8EB8(ctx, base);
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba73f4
	if (cr6.eq) goto loc_82BA73F4;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_82BA73F4:
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r28.u32);
	// stw r28,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r28.u32);
	// stw r28,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r28.u32);
loc_82BA7400:
	// lis r11,-31959
	r11.s64 = -2094465024;
	// addi r4,r27,8
	ctx.r4.s64 = r27.s64 + 8;
	// lwz r3,-5808(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -5808);
	// bl 0x82dfb540
	sub_82DFB540(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ba75ec
	if (!cr0.eq) goto loc_82BA75EC;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// lfs f13,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,120(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r29,132
	ctx.r3.s64 = r29.s64 + 132;
	// lfs f0,11740(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 11740);
	f0.f64 = double(temp.f32);
	// fmadds f0,f13,f0,f12
	f0.f64 = double(float(ctx.f13.f64 * f0.f64 + ctx.f12.f64));
	// stfs f0,120(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 120, temp.u32);
	// bl 0x82e65d80
	sub_82E65D80(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82b9dc60
	sub_82B9DC60(ctx, base);
	// bl 0x8250c610
	sub_8250C610(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ba75ec
	if (cr0.eq) goto loc_82BA75EC;
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x824313e0
	sub_824313E0(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// beq cr6,0x82ba749c
	if (cr6.eq) goto loc_82BA749C;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82BA7480:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82ba7480
	if (!cr0.eq) goto loc_82BA7480;
loc_82BA749C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r31,r1,112
	r31.s64 = ctx.r1.s64 + 112;
	// bl 0x82b9dc60
	sub_82B9DC60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8250c5d0
	sub_8250C5D0(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-22952
	ctx.r4.s64 = r11.s64 + -22952;
	// li r5,118
	ctx.r5.s64 = 118;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// bl 0x82b9de90
	sub_82B9DE90(ctx, base);
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ba74e4
	if (cr6.eq) goto loc_82BA74E4;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA74E4:
	// clrlwi. r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ba75ec
	if (cr0.eq) goto loc_82BA75EC;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,4300
	ctx.r4.s64 = r11.s64 + 4300;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r31,r1,96
	r31.s64 = ctx.r1.s64 + 96;
	// bl 0x82b9dc60
	sub_82B9DC60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x8250f238
	sub_8250F238(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-148
	ctx.r3.s64 = r11.s64 + -148;
	// bne cr6,0x82ba7534
	if (!cr6.eq) goto loc_82BA7534;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82BA7534:
	// addi r31,r1,144
	r31.s64 = ctx.r1.s64 + 144;
	// bl 0x8252bb90
	sub_8252BB90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x82e84a10
	sub_82E84A10(ctx, base);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-148
	ctx.r3.s64 = r11.s64 + -148;
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bne cr6,0x82ba756c
	if (!cr6.eq) goto loc_82BA756C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82BA756C:
	// addi r31,r1,144
	r31.s64 = ctx.r1.s64 + 144;
	// bl 0x8252bd20
	sub_8252BD20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x82e84a10
	sub_82E84A10(ctx, base);
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bne cr6,0x82ba75b4
	if (!cr6.eq) goto loc_82BA75B4;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,29232
	r11.s64 = r11.s64 + 29232;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x82ba75c0
	goto loc_82BA75C0;
loc_82BA75B4:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// fdivs f1,f30,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f30.f64 / f0.f64));
	// bl 0x82e86250
	sub_82E86250(ctx, base);
loc_82BA75C0:
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	f0.f64 = double(temp.f32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// fadds f13,f0,f30
	ctx.f13.f64 = double(float(f0.f64 + f30.f64));
	// lfs f12,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lfs f0,-22120(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22120);
	f0.f64 = double(temp.f32);
	// fnmsubs f12,f12,f0,f0
	ctx.f12.f64 = double(float(-(ctx.f12.f64 * f0.f64 - f0.f64)));
	// stfs f12,128(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r29.u32 + 128, temp.u32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,124(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 124, temp.u32);
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
loc_82BA75EC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82BA7600"))) PPC_WEAK_FUNC(sub_82BA7600);
PPC_FUNC_IMPL(__imp__sub_82BA7600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-31952
	r11.s64 = -2094006272;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r9,r10,10032
	ctx.r9.s64 = ctx.r10.s64 + 10032;
	// lbz r11,10016(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 10016);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lfs f0,10032(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10032);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f0,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA7638"))) PPC_WEAK_FUNC(sub_82BA7638);
PPC_FUNC_IMPL(__imp__sub_82BA7638) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r9,-31952
	ctx.r9.s64 = -2094006272;
	// addi r8,r9,10032
	ctx.r8.s64 = ctx.r9.s64 + 10032;
	// stb r11,10016(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10016, r11.u8);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,10032(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 10032, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// lfs f0,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA7670"))) PPC_WEAK_FUNC(sub_82BA7670);
PPC_FUNC_IMPL(__imp__sub_82BA7670) {
	PPC_FUNC_PROLOGUE();
	// stw r4,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA7678"))) PPC_WEAK_FUNC(sub_82BA7678);
PPC_FUNC_IMPL(__imp__sub_82BA7678) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,72(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r10,36(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lbz r11,136(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 136);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
	// lbz r11,29(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 29);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// lfs f0,-24904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24904);
	f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f13,-24792(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24792);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f12,80(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// lbz r11,30(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 30);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f12,84(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// lbz r11,31(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 31);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f0,88(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// lfs f0,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x82ba7720
	if (!cr6.lt) goto loc_82BA7720;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,6808(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 6808);
	f0.f64 = double(temp.f32);
	// lfs f13,2244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,100(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f13,96(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// blr 
	return;
loc_82BA7720:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 / f0.f64));
	// lfs f13,2240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,100(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// lfs f0,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bltlr cr6
	if (cr6.lt) return;
	// stfs f0,96(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA7750"))) PPC_WEAK_FUNC(sub_82BA7750);
PPC_FUNC_IMPL(__imp__sub_82BA7750) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,72(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r10,36(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lbz r11,136(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 136);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
	// lbz r11,29(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 29);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// lfs f0,-24904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24904);
	f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f13,-24792(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24792);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f12,80(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// lbz r11,30(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 30);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f12,84(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// lbz r11,31(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 31);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f0,88(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// lfs f0,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x82ba77e8
	if (!cr6.lt) goto loc_82BA77E8;
	// lis r11,-32244
	r11.s64 = -2113142784;
	// lfs f0,656(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 656);
	f0.f64 = double(temp.f32);
	// b 0x82ba77f4
	goto loc_82BA77F4;
loc_82BA77E8:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f13,-24780(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24780);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 / f0.f64));
loc_82BA77F4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f0,100(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// lfs f0,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	f0.f64 = double(temp.f32);
	// lfs f13,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bltlr cr6
	if (cr6.lt) return;
	// stfs f0,96(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA7818"))) PPC_WEAK_FUNC(sub_82BA7818);
PPC_FUNC_IMPL(__imp__sub_82BA7818) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lbz r11,136(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 136);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,100(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	f0.f64 = double(temp.f32);
	// lfs f12,96(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f0,f13,f12
	f0.f64 = double(float(f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// lfs f13,2244(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x82ba7854
	if (cr6.gt) goto loc_82BA7854;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x82ba7858
	if (!cr6.lt) goto loc_82BA7858;
loc_82BA7854:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f13.f64;
loc_82BA7858:
	// stfs f0,96(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA7860"))) PPC_WEAK_FUNC(sub_82BA7860);
PPC_FUNC_IMPL(__imp__sub_82BA7860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82b9dc88
	sub_82B9DC88(ctx, base);
	// lis r11,-31943
	r11.s64 = -2093416448;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r9,r11,29232
	ctx.r9.s64 = r11.s64 + 29232;
	// li r8,80
	ctx.r8.s64 = 80;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r10,-22792
	ctx.r10.s64 = ctx.r10.s64 + -22792;
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r8
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,2240(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2240);
	f0.f64 = double(temp.f32);
	// addi r4,r6,-22804
	ctx.r4.s64 = ctx.r6.s64 + -22804;
	// stfs f0,96(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// addi r10,r31,104
	ctx.r10.s64 = r31.s64 + 104;
	// stfs f0,100(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// addi r10,r31,120
	ctx.r10.s64 = r31.s64 + 120;
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// stb r11,136(r31)
	PPC_STORE_U8(r31.u32 + 136, r11.u8);
	// stw r11,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r11.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e9d8d0
	sub_82E9D8D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA7920"))) PPC_WEAK_FUNC(sub_82BA7920);
PPC_FUNC_IMPL(__imp__sub_82BA7920) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,144(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba7948
	if (cr6.eq) goto loc_82BA7948;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA7948:
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// addi r31,r30,120
	r31.s64 = r30.s64 + 120;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba795c
	if (cr6.eq) goto loc_82BA795C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA795C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba796c
	if (cr6.eq) goto loc_82BA796C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA796C:
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 116);
	// addi r31,r30,104
	r31.s64 = r30.s64 + 104;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba7980
	if (cr6.eq) goto loc_82BA7980;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA7980:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba7990
	if (cr6.eq) goto loc_82BA7990;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA7990:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b9dc40
	sub_82B9DC40(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA79B0"))) PPC_WEAK_FUNC(sub_82BA79B0);
PPC_FUNC_IMPL(__imp__sub_82BA79B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82ba7920
	sub_82BA7920(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ba79e0
	if (cr0.eq) goto loc_82BA79E0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_82BA79E0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA7A00"))) PPC_WEAK_FUNC(sub_82BA7A00);
PPC_FUNC_IMPL(__imp__sub_82BA7A00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,-22724
	r30.s64 = r11.s64 + -22724;
	// addi r29,r10,-22740
	r29.s64 = ctx.r10.s64 + -22740;
	// bl 0x82b9dc50
	sub_82B9DC50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x82e9cd40
	sub_82E9CD40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82bc2e30
	sub_82BC2E30(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba7a54
	if (cr6.eq) goto loc_82BA7A54;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA7A54:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba7a64
	if (cr6.eq) goto loc_82BA7A64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA7A64:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r11,-22760
	r30.s64 = r11.s64 + -22760;
	// addi r29,r10,-23320
	r29.s64 = ctx.r10.s64 + -23320;
	// bl 0x82b9dc50
	sub_82B9DC50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x82e9cd40
	sub_82E9CD40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x82bc2e30
	sub_82BC2E30(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba7aac
	if (cr6.eq) goto loc_82BA7AAC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA7AAC:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba7abc
	if (cr6.eq) goto loc_82BA7ABC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA7ABC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
}

extern void FxFadePreRenderQuadMidAsmHook(PPCRegister& r31);

extern void FxFadePostRenderQuadMidAsmHook();

__attribute__((alias("__imp__sub_82BA7AC8"))) PPC_WEAK_FUNC(sub_82BA7AC8);
PPC_FUNC_IMPL(__imp__sub_82BA7AC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lfs f0,96(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 96);
	f0.f64 = double(temp.f32);
	// lfs f31,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bne cr6,0x82ba7b14
	if (!cr6.eq) goto loc_82BA7B14;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e9dd88
	sub_82E9DD88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e9e020
	sub_82E9E020(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x82ba7d98
	goto loc_82BA7D98;
loc_82BA7B14:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e9ddc0
	sub_82E9DDC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e9d8e0
	sub_82E9D8E0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82e9efd8
	sub_82E9EFD8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,40
	ctx.r4.s64 = 40;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stb r11,685(r30)
	PPC_STORE_U8(r30.u32 + 685, r11.u8);
	// li r4,60
	ctx.r4.s64 = 60;
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f30,2244(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f30.f64 = double(temp.f32);
	// stfs f30,120(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f30,124(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ba7c14
	if (cr6.eq) goto loc_82BA7C14;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824eb8b0
	sub_824EB8B0(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r29,r11,27,31,31
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x82ba7c14
	if (cr0.eq) goto loc_82BA7C14;
	// lbz r11,68(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 68);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfs f0,-16564(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -16564);
	f0.f64 = double(temp.f32);
	// beq 0x82ba7bfc
	if (cr0.eq) goto loc_82BA7BFC;
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + f0.f64));
	// fsubs f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 - f0.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// b 0x82ba7c14
	goto loc_82BA7C14;
loc_82BA7BFC:
	// lfs f13,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fadds f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 + f0.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
loc_82BA7C14:
	// lbz r11,136(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 136);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ba7cb8
	if (cr0.eq) goto loc_82BA7CB8;
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ba7cb8
	if (cr6.eq) goto loc_82BA7CB8;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// addi r29,r11,-2632
	r29.s64 = r11.s64 + -2632;
	// lwz r11,-2628(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2628);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82ba7c5c
	if (!cr0.eq) goto loc_82BA7C5C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stw r11,-2628(r10)
	PPC_STORE_U32(ctx.r10.u32 + -2628, r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r9,-22712
	ctx.r4.s64 = ctx.r9.s64 + -22712;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
loc_82BA7C5C:
	// lfs f1,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// fsubs f2,f30,f1
	ctx.f2.f64 = double(float(f30.f64 - ctx.f1.f64));
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// bl 0x82e1a210
	sub_82E1A210(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r4,72
	ctx.r4.s64 = 72;
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,76
	ctx.r4.s64 = 76;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e9f500
	sub_82E9F500(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,140(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82e16a08
	sub_82E16A08(ctx, base);
	// addi r4,r31,120
	ctx.r4.s64 = r31.s64 + 120;
	// b 0x82ba7d34
	goto loc_82BA7D34;
loc_82BA7CB8:
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// lfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 96);
	f0.f64 = double(temp.f32);
	// li r9,80
	ctx.r9.s64 = 80;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// addi r29,r11,-2636
	r29.s64 = r11.s64 + -2636;
	// lwz r11,-2628(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2628);
	// lvx128 v63,r31,r9
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm. r7,r11,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// stfs f0,140(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bne 0x82ba7d00
	if (!cr0.eq) goto loc_82BA7D00;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r11,-2628(r10)
	PPC_STORE_U32(ctx.r10.u32 + -2628, r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r9,-12304
	ctx.r4.s64 = ctx.r9.s64 + -12304;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
loc_82BA7D00:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x82e1a218
	sub_82E1A218(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,72
	ctx.r4.s64 = 72;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,76
	ctx.r4.s64 = 76;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
loc_82BA7D34:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e9fdc8
	FxFadePreRenderQuadMidAsmHook(r31);
	sub_82E9FDC8(ctx, base);
	// lwz r11,84(r1)
	FxFadePostRenderQuadMidAsmHook();
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// beq cr6,0x82ba7d78
	if (cr6.eq) goto loc_82BA7D78;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82BA7D5C:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82ba7d5c
	if (!cr0.eq) goto loc_82BA7D5C;
loc_82BA7D78:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e9e020
	sub_82E9E020(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba7d94
	if (cr6.eq) goto loc_82BA7D94;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA7D94:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82BA7D98:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba7da4
	if (cr6.eq) goto loc_82BA7DA4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82BA7DA4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82BA7DB8"))) PPC_WEAK_FUNC(sub_82BA7DB8);
PPC_FUNC_IMPL(__imp__sub_82BA7DB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r9,24(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r10,136(r11)
	PPC_STORE_U8(r11.u32 + 136, ctx.r10.u8);
	// addi r10,r11,140
	ctx.r10.s64 = r11.s64 + 140;
	// lfs f0,2240(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stfs f0,100(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 100, temp.u32);
	// stw r9,140(r11)
	PPC_STORE_U32(r11.u32 + 140, ctx.r9.u32);
	// lwz r3,144(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 144);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r9,144(r11)
	PPC_STORE_U32(r11.u32 + 144, ctx.r9.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x822c0890
	sub_822C0890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA7E00"))) PPC_WEAK_FUNC(sub_82BA7E00);
PPC_FUNC_IMPL(__imp__sub_82BA7E00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA7E08"))) PPC_WEAK_FUNC(sub_82BA7E08);
PPC_FUNC_IMPL(__imp__sub_82BA7E08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r9,24(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,140
	ctx.r9.s64 = r11.s64 + 140;
	// stb r10,136(r11)
	PPC_STORE_U8(r11.u32 + 136, ctx.r10.u8);
	// stw r10,140(r11)
	PPC_STORE_U32(r11.u32 + 140, ctx.r10.u32);
	// lwz r3,144(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 144);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,144(r11)
	PPC_STORE_U32(r11.u32 + 144, ctx.r10.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x822c0890
	sub_822C0890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA7E40"))) PPC_WEAK_FUNC(sub_82BA7E40);
PPC_FUNC_IMPL(__imp__sub_82BA7E40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA7E48"))) PPC_WEAK_FUNC(sub_82BA7E48);
PPC_FUNC_IMPL(__imp__sub_82BA7E48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// lwz r8,40(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// bne cr6,0x82ba7ef8
	if (!cr6.eq) goto loc_82BA7EF8;
	// lbz r9,136(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 136);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x82ba7ef8
	if (cr0.eq) goto loc_82BA7EF8;
	// lfs f0,24(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	f0.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stfs f0,96(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 96, temp.u32);
	// lbz r9,29(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 29);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// addi r9,r10,32
	ctx.r9.s64 = ctx.r10.s64 + 32;
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r4,r9,4
	ctx.r4.s64 = ctx.r9.s64 + 4;
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// lfs f0,-24904(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24904);
	f0.f64 = double(temp.f32);
	// addi r8,r11,140
	ctx.r8.s64 = r11.s64 + 140;
	// addi r3,r8,4
	ctx.r3.s64 = ctx.r8.s64 + 4;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,80(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 80, temp.u32);
	// lbz r9,30(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 30);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,84(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 84, temp.u32);
	// lbz r9,31(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 31);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,88(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 88, temp.u32);
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stw r10,140(r11)
	PPC_STORE_U32(r11.u32 + 140, ctx.r10.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
loc_82BA7EF8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA7F08"))) PPC_WEAK_FUNC(sub_82BA7F08);
PPC_FUNC_IMPL(__imp__sub_82BA7F08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// clrlwi. r29,r28,24
	r29.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x82ba7f5c
	if (cr0.eq) goto loc_82BA7F5C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31952
	r11.s64 = -2094006272;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,11976
	ctx.r3.s64 = r11.s64 + 11976;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ba7f5c
	if (cr0.eq) goto loc_82BA7F5C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ba7678
	sub_82BA7678(ctx, base);
loc_82BA7F54:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82ba804c
	goto loc_82BA804C;
loc_82BA7F5C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82ba803c
	if (cr6.eq) goto loc_82BA803C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31952
	r11.s64 = -2094006272;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,11932
	ctx.r3.s64 = r11.s64 + 11932;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ba7f94
	if (cr0.eq) goto loc_82BA7F94;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ba7750
	sub_82BA7750(ctx, base);
	// b 0x82ba7f54
	goto loc_82BA7F54;
loc_82BA7F94:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82ba803c
	if (cr6.eq) goto loc_82BA803C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31952
	r11.s64 = -2094006272;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,31560
	ctx.r3.s64 = r11.s64 + 31560;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ba7fcc
	if (cr0.eq) goto loc_82BA7FCC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ba7db8
	sub_82BA7DB8(ctx, base);
	// b 0x82ba7f54
	goto loc_82BA7F54;
loc_82BA7FCC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82ba803c
	if (cr6.eq) goto loc_82BA803C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31952
	r11.s64 = -2094006272;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,31604
	ctx.r3.s64 = r11.s64 + 31604;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ba8004
	if (cr0.eq) goto loc_82BA8004;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ba7e08
	sub_82BA7E08(ctx, base);
	// b 0x82ba7f54
	goto loc_82BA7F54;
loc_82BA8004:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82ba803c
	if (cr6.eq) goto loc_82BA803C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31952
	r11.s64 = -2094006272;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,31796
	ctx.r3.s64 = r11.s64 + 31796;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ba803c
	if (cr0.eq) goto loc_82BA803C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ba7e48
	sub_82BA7E48(ctx, base);
	// b 0x82ba7f54
	goto loc_82BA7F54;
loc_82BA803C:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b9dd60
	sub_82B9DD60(ctx, base);
loc_82BA804C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82BA8058"))) PPC_WEAK_FUNC(sub_82BA8058);
PPC_FUNC_IMPL(__imp__sub_82BA8058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82b9dc88
	sub_82B9DC88(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,-22676
	r11.s64 = r11.s64 + -22676;
	// addi r4,r10,-22688
	ctx.r4.s64 = ctx.r10.s64 + -22688;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e9d8d0
	sub_82E9D8D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23800
	ctx.r4.s64 = r11.s64 + -23800;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e9e1e0
	sub_82E9E1E0(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23768
	ctx.r4.s64 = r11.s64 + -23768;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e9e1e0
	sub_82E9E1E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

