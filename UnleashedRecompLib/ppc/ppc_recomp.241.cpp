#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83175650"))) PPC_WEAK_FUNC(sub_83175650);
PPC_FUNC_IMPL(__imp__sub_83175650) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83175658"))) PPC_WEAK_FUNC(sub_83175658);
PPC_FUNC_IMPL(__imp__sub_83175658) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83175698
	if (cr6.eq) goto loc_83175698;
	// li r11,-1
	r11.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x831756f8
	goto loc_831756F8;
loc_83175698:
	// lis r11,-31941
	r11.s64 = -2093285376;
	// stw r4,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r4.u32);
	// stw r5,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r5.u32);
	// lis r10,-31977
	ctx.r10.s64 = -2095644672;
	// stw r6,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r6.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r10,21616
	ctx.r4.s64 = ctx.r10.s64 + 21616;
	// lwz r3,-24104(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -24104);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x831756e8
	if (cr6.eq) goto loc_831756E8;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831756f8
	goto loc_831756F8;
loc_831756E8:
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
loc_831756F8:
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

__attribute__((alias("__imp__sub_83175710"))) PPC_WEAK_FUNC(sub_83175710);
PPC_FUNC_IMPL(__imp__sub_83175710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-31941
	r11.s64 = -2093285376;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r26,r11,-29936
	r26.s64 = r11.s64 + -29936;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83175658
	sub_83175658(ctx, base);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83175798"))) PPC_WEAK_FUNC(sub_83175798);
PPC_FUNC_IMPL(__imp__sub_83175798) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,-25080
	r11.s64 = r11.s64 + -25080;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x831757c4
	if (cr0.eq) goto loc_831757C4;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_831757C4:
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

__attribute__((alias("__imp__sub_831757E0"))) PPC_WEAK_FUNC(sub_831757E0);
PPC_FUNC_IMPL(__imp__sub_831757E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,-24832
	ctx.r5.s64 = r11.s64 + -24832;
	// li r4,96
	ctx.r4.s64 = 96;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x83167fd8
	sub_83167FD8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bne 0x83175824
	if (!cr0.eq) goto loc_83175824;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-24872
	ctx.r4.s64 = r11.s64 + -24872;
	// b 0x831759ac
	goto loc_831759AC;
loc_83175824:
	// li r31,0
	r31.s64 = 0;
	// addi r29,r28,4
	r29.s64 = r28.s64 + 4;
	// mr r30,r31
	r30.u64 = r31.u64;
loc_83175830:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8316f870
	sub_8316F870(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83175870
	if (cr0.eq) goto loc_83175870;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83175870
	if (!cr6.eq) goto loc_83175870;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stw r3,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r3.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// stw r31,-4(r29)
	PPC_STORE_U32(r29.u32 + -4, r31.u32);
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// cmplwi cr6,r30,8
	cr6.compare<uint32_t>(r30.u32, 8, xer);
	// blt cr6,0x83175830
	if (cr6.lt) goto loc_83175830;
	// b 0x831758a0
	goto loc_831758A0;
loc_83175870:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x83175890
	if (!cr6.eq) goto loc_83175890;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x83168100
	sub_83168100(ctx, base);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-24908
	ctx.r4.s64 = r11.s64 + -24908;
	// b 0x831759ac
	goto loc_831759AC;
loc_83175890:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-24944
	ctx.r4.s64 = r11.s64 + -24944;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_831758A0:
	// cmplwi cr6,r30,8
	cr6.compare<uint32_t>(r30.u32, 8, xer);
	// bge cr6,0x831758d4
	if (!cr6.lt) goto loc_831758D4;
	// mulli r11,r30,12
	r11.s64 = r30.s64 * 12;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// subfic r10,r30,8
	xer.ca = r30.u32 <= 8;
	ctx.r10.s64 = 8 - r30.s64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_831758B8:
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r31.u32);
	// stw r31,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, r31.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// bne 0x831758b8
	if (!cr0.eq) goto loc_831758B8;
loc_831758D4:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,-24968
	ctx.r5.s64 = r11.s64 + -24968;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x83168690
	sub_83168690(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83175924
	if (cr0.eq) goto loc_83175924;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r11,-1
	r11.s64 = -1;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// addi r10,r10,-25044
	ctx.r10.s64 = ctx.r10.s64 + -25044;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// stw r31,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r31.u32);
	// stw r31,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r31.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
	// std r11,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, r11.u64);
loc_83175924:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83175960
	if (cr6.eq) goto loc_83175960;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83175960
	if (!cr6.eq) goto loc_83175960;
	// stw r25,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r25.u32);
	// stw r24,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r24.u32);
	// stw r27,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r27.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// stw r28,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r28.u32);
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// bl 0x8315cf60
	sub_8315CF60(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x831759b8
	goto loc_831759B8;
loc_83175960:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x83175998
	if (cr6.eq) goto loc_83175998;
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r31,r28,8
	r31.s64 = r28.s64 + 8;
	// addi r29,r11,-29624
	r29.s64 = r11.s64 + -29624;
loc_83175974:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// bne 0x83175974
	if (!cr0.eq) goto loc_83175974;
loc_83175998:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x83168100
	sub_83168100(ctx, base);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-25008
	ctx.r4.s64 = r11.s64 + -25008;
loc_831759AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_831759B8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_831759C0"))) PPC_WEAK_FUNC(sub_831759C0);
PPC_FUNC_IMPL(__imp__sub_831759C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x831759f4
	if (!cr6.eq) goto loc_831759F4;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-24796
	ctx.r4.s64 = r11.s64 + -24796;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x83175a80
	goto loc_83175A80;
loc_831759F4:
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// addi r5,r11,-29624
	ctx.r5.s64 = r11.s64 + -29624;
	// bl 0x8316e4a0
	sub_8316E4A0(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x83175a5c
	if (!cr6.gt) goto loc_83175A5C;
	// li r30,0
	r30.s64 = 0;
loc_83175A1C:
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83175a48
	if (cr6.eq) goto loc_83175A48;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83175A48:
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x83175a1c
	if (cr6.lt) goto loc_83175A1C;
loc_83175A5C:
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x83168100
	sub_83168100(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83175A80:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83175A88"))) PPC_WEAK_FUNC(sub_83175A88);
PPC_FUNC_IMPL(__imp__sub_83175A88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,-1
	r11.s64 = -1;
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// stw r4,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
	// stw r5,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r5.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
	// std r11,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83175AA8"))) PPC_WEAK_FUNC(sub_83175AA8);
PPC_FUNC_IMPL(__imp__sub_83175AA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83175AB8"))) PPC_WEAK_FUNC(sub_83175AB8);
PPC_FUNC_IMPL(__imp__sub_83175AB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83175AC8"))) PPC_WEAK_FUNC(sub_83175AC8);
PPC_FUNC_IMPL(__imp__sub_83175AC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83175aec
	if (!cr6.eq) goto loc_83175AEC;
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83175aec
	if (!cr6.eq) goto loc_83175AEC;
loc_83175AE0:
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// blr 
	return;
loc_83175AEC:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x83175ae0
	if (cr6.lt) goto loc_83175AE0;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// stw r4,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83175B08"))) PPC_WEAK_FUNC(sub_83175B08);
PPC_FUNC_IMPL(__imp__sub_83175B08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83175b2c
	if (!cr6.eq) goto loc_83175B2C;
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83175b2c
	if (!cr6.eq) goto loc_83175B2C;
loc_83175B20:
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// blr 
	return;
loc_83175B2C:
	// cmpdi cr6,r4,0
	cr6.compare<int64_t>(ctx.r4.s64, 0, xer);
	// blt cr6,0x83175b20
	if (cr6.lt) goto loc_83175B20;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// std r4,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.r4.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83175B48"))) PPC_WEAK_FUNC(sub_83175B48);
PPC_FUNC_IMPL(__imp__sub_83175B48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x83175b6c
	if (!cr6.eq) goto loc_83175B6C;
	// li r11,-1
	r11.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// blr 
	return;
loc_83175B6C:
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83175B78"))) PPC_WEAK_FUNC(sub_83175B78);
PPC_FUNC_IMPL(__imp__sub_83175B78) {
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
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// stw r29,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r29.u32);
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83175bd0
	if (!cr6.eq) goto loc_83175BD0;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-24676
	ctx.r4.s64 = r11.s64 + -24676;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_83175BBC:
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
loc_83175BC4:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83175BC8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
loc_83175BD0:
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x83175bbc
	if (cr6.eq) goto loc_83175BBC;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
	// bl 0x83176d48
	sub_83176D48(ctx, base);
	// stw r3,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r3.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt 0x83175c2c
	if (cr0.gt) goto loc_83175C2C;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-24720
	ctx.r4.s64 = r11.s64 + -24720;
loc_83175C18:
	// li r10,3
	ctx.r10.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// b 0x83175bc4
	goto loc_83175BC4;
loc_83175C2C:
	// cmpw cr6,r28,r3
	cr6.compare<int32_t>(r28.s32, ctx.r3.s32, xer);
	// bge cr6,0x83175c48
	if (!cr6.lt) goto loc_83175C48;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-24764
	ctx.r4.s64 = r11.s64 + -24764;
	// b 0x83175c18
	goto loc_83175C18;
loc_83175C48:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r30.u32);
	// stw r29,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r29.u32);
	// stw r29,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r29.u32);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// stw r26,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r26.u32);
	// stw r10,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// b 0x83175bc8
	goto loc_83175BC8;
}

__attribute__((alias("__imp__sub_83175C68"))) PPC_WEAK_FUNC(sub_83175C68);
PPC_FUNC_IMPL(__imp__sub_83175C68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-31941
	r11.s64 = -2093285376;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r25,r11,-29936
	r25.s64 = r11.s64 + -29936;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83175b78
	sub_83175B78(ctx, base);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_83175CF8"))) PPC_WEAK_FUNC(sub_83175CF8);
PPC_FUNC_IMPL(__imp__sub_83175CF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// cmpw cr6,r10,r5
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, xer);
	// blt cr6,0x83175d18
	if (cr6.lt) goto loc_83175D18;
	// li r11,0
	r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r11.u32);
	// stw r10,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r10.u32);
	// b 0x83175d70
	goto loc_83175D70;
loc_83175D18:
	// mulli r11,r10,20
	r11.s64 = ctx.r10.s64 * 20;
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r8,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bne cr6,0x83175d50
	if (!cr6.eq) goto loc_83175D50;
loc_83175D3C:
	// addi r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 + 20;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x83175d3c
	if (cr6.eq) goto loc_83175D3C;
loc_83175D50:
	// mulli r11,r10,20
	r11.s64 = ctx.r10.s64 * 20;
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// subf r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
loc_83175D70:
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83175D78"))) PPC_WEAK_FUNC(sub_83175D78);
PPC_FUNC_IMPL(__imp__sub_83175D78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x83175da0
	if (!cr6.eq) goto loc_83175DA0;
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// subf r10,r6,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r6.s64;
loc_83175D88:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne 0x83175d88
	if (!cr0.eq) goto loc_83175D88;
	// blr 
	return;
loc_83175DA0:
	// lbz r11,0(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83175dcc
	if (!cr6.eq) goto loc_83175DCC;
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// subf r10,r6,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r6.s64;
loc_83175DB4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne 0x83175db4
	if (!cr0.eq) goto loc_83175DB4;
	// blr 
	return;
loc_83175DCC:
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// subf r10,r5,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r5.s64;
loc_83175DD4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne 0x83175dd4
	if (!cr0.eq) goto loc_83175DD4;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// addi r10,r10,3988
	ctx.r10.s64 = ctx.r10.s64 + 3988;
loc_83175DF4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83175df4
	if (!cr6.eq) goto loc_83175DF4;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
loc_83175E08:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne cr6,0x83175e08
	if (!cr6.eq) goto loc_83175E08;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_83175E24:
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83175e24
	if (!cr6.eq) goto loc_83175E24;
	// addi r11,r4,-1
	r11.s64 = ctx.r4.s64 + -1;
loc_83175E38:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne cr6,0x83175e38
	if (!cr6.eq) goto loc_83175E38;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83175E58"))) PPC_WEAK_FUNC(sub_83175E58);
PPC_FUNC_IMPL(__imp__sub_83175E58) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r26,0
	r26.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// b 0x83175f78
	goto loc_83175F78;
loc_83175E78:
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x83175f88
	if (!cr6.lt) goto loc_83175F88;
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// mulli r11,r29,12
	r11.s64 = r29.s64 * 12;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_83175E94:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83175eb8
	if (cr6.eq) goto loc_83175EB8;
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// cmplw cr6,r29,r9
	cr6.compare<uint32_t>(r29.u32, ctx.r9.u32, xer);
	// blt cr6,0x83175e94
	if (cr6.lt) goto loc_83175E94;
	// b 0x83175f88
	goto loc_83175F88;
loc_83175EB8:
	// mulli r11,r29,12
	r11.s64 = r29.s64 * 12;
	// add. r28,r11,r10
	r28.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// beq 0x83175f88
	if (cr0.eq) goto loc_83175F88;
	// lwz r6,68(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// addi r7,r31,72
	ctx.r7.s64 = r31.s64 + 72;
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mulli r11,r6,20
	r11.s64 = ctx.r6.s64 * 20;
	// lwz r5,56(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// add r30,r11,r4
	r30.u64 = r11.u64 + ctx.r4.u64;
	// bl 0x83175cf8
	sub_83175CF8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x83175d78
	sub_83175D78(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83175f0c
	if (!cr6.eq) goto loc_83175F0C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x83175f1c
	goto loc_83175F1C;
loc_83175F0C:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
loc_83175F1C:
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// lwz r7,76(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83175f88
	if (!cr6.eq) goto loc_83175F88;
	// li r11,1
	r11.s64 = 1;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
loc_83175F78:
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x83175e78
	if (cr6.lt) goto loc_83175E78;
loc_83175F88:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83175F98"))) PPC_WEAK_FUNC(sub_83175F98);
PPC_FUNC_IMPL(__imp__sub_83175F98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r28,r26
	r28.u64 = r26.u64;
	// mr r27,r26
	r27.u64 = r26.u64;
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x83176030
	if (!cr6.gt) goto loc_83176030;
	// mr r29,r26
	r29.u64 = r26.u64;
loc_83175FC8:
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// add r30,r29,r11
	r30.u64 = r29.u64 + r11.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8317601c
	if (!cr6.eq) goto loc_8317601C;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x83176018
	if (!cr6.eq) goto loc_83176018;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// stw r26,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r26.u32);
	// stw r26,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r26.u32);
	// b 0x8317601c
	goto loc_8317601C;
loc_83176018:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_8317601C:
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x83175fc8
	if (cr6.lt) goto loc_83175FC8;
loc_83176030:
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bge cr6,0x8317604c
	if (!cr6.lt) goto loc_8317604C;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83175e58
	sub_83175E58(ctx, base);
	// add r28,r3,r28
	r28.u64 = ctx.r3.u64 + r28.u64;
loc_8317604C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_83176058"))) PPC_WEAK_FUNC(sub_83176058);
PPC_FUNC_IMPL(__imp__sub_83176058) {
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
	// li r30,0
	r30.s64 = 0;
	// stw r30,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r30.u32);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x831760bc
	if (cr6.lt) goto loc_831760BC;
	// beq cr6,0x8317609c
	if (cr6.eq) goto loc_8317609C;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-24648
	ctx.r4.s64 = r11.s64 + -24648;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// b 0x831760d4
	goto loc_831760D4;
loc_8317609C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83175f98
	sub_83175F98(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831760d4
	if (!cr0.eq) goto loc_831760D4;
	// li r11,2
	r11.s64 = 2;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// b 0x831760d4
	goto loc_831760D4;
loc_831760BC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83175e58
	sub_83175E58(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831760d4
	if (cr0.eq) goto loc_831760D4;
	// li r11,1
	r11.s64 = 1;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
loc_831760D4:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
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

__attribute__((alias("__imp__sub_831760F0"))) PPC_WEAK_FUNC(sub_831760F0);
PPC_FUNC_IMPL(__imp__sub_831760F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x83176160
	if (!cr6.eq) goto loc_83176160;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83176160
	if (!cr6.eq) goto loc_83176160;
	// stw r3,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r3.u32);
loc_83176160:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
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

__attribute__((alias("__imp__sub_83176180"))) PPC_WEAK_FUNC(sub_83176180);
PPC_FUNC_IMPL(__imp__sub_83176180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// ld r11,40(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 40);
	// cmpdi cr6,r11,-1
	cr6.compare<int64_t>(r11.s64, -1, xer);
	// bne cr6,0x831761f0
	if (!cr6.eq) goto loc_831761F0;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x831761f0
	if (!cr6.eq) goto loc_831761F0;
	// std r3,40(r31)
	PPC_STORE_U64(r31.u32 + 40, ctx.r3.u64);
loc_831761F0:
	// ld r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U64(r31.u32 + 40);
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

__attribute__((alias("__imp__sub_83176210"))) PPC_WEAK_FUNC(sub_83176210);
PPC_FUNC_IMPL(__imp__sub_83176210) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83176234
	if (!cr6.eq) goto loc_83176234;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83176254
	goto loc_83176254;
loc_83176234:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r5,32(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r4,28(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x83176da0
	sub_83176DA0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x8317625c
	if (!cr0.lt) goto loc_8317625C;
loc_83176254:
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8317625C:
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

__attribute__((alias("__imp__sub_83176270"))) PPC_WEAK_FUNC(sub_83176270);
PPC_FUNC_IMPL(__imp__sub_83176270) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,-25080
	r11.s64 = r11.s64 + -25080;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x831762a0
	if (cr0.eq) goto loc_831762A0;
	// li r4,104
	ctx.r4.s64 = 104;
	// bl 0x83168618
	sub_83168618(ctx, base);
loc_831762A0:
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

__attribute__((alias("__imp__sub_831762B8"))) PPC_WEAK_FUNC(sub_831762B8);
PPC_FUNC_IMPL(__imp__sub_831762B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r11,-31941
	r11.s64 = -2093285376;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r29,r11,-29936
	r29.s64 = r11.s64 + -29936;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83176058
	sub_83176058(ctx, base);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83176328"))) PPC_WEAK_FUNC(sub_83176328);
PPC_FUNC_IMPL(__imp__sub_83176328) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// bl 0x831762b8
	sub_831762B8(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
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

__attribute__((alias("__imp__sub_83176360"))) PPC_WEAK_FUNC(sub_83176360);
PPC_FUNC_IMPL(__imp__sub_83176360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831763e0
	if (cr6.eq) goto loc_831763E0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r31,r11,-29624
	r31.s64 = r11.s64 + -29624;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,64(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x831763c0
	if (!cr6.eq) goto loc_831763C0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831763C0:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_831763E0:
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

__attribute__((alias("__imp__sub_831763F8"))) PPC_WEAK_FUNC(sub_831763F8);
PPC_FUNC_IMPL(__imp__sub_831763F8) {
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
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// addi r11,r11,-24616
	r11.s64 = r11.s64 + -24616;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x8317a7e0
	sub_8317A7E0(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x8317a770
	sub_8317A770(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x8303cd30
	sub_8303CD30(ctx, base);
	// addi r3,r31,168
	ctx.r3.s64 = r31.s64 + 168;
	// bl 0x83179e98
	sub_83179E98(ctx, base);
	// addi r3,r31,264
	ctx.r3.s64 = r31.s64 + 264;
	// bl 0x83179b00
	sub_83179B00(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r11,304(r31)
	PPC_STORE_U32(r31.u32 + 304, r11.u32);
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

__attribute__((alias("__imp__sub_83176480"))) PPC_WEAK_FUNC(sub_83176480);
PPC_FUNC_IMPL(__imp__sub_83176480) {
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
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// addi r11,r11,-24616
	r11.s64 = r11.s64 + -24616;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x83176360
	sub_83176360(ctx, base);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831764c8
	if (cr6.eq) goto loc_831764C8;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x83168100
	sub_83168100(ctx, base);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
loc_831764C8:
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831764e0
	if (cr6.eq) goto loc_831764E0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x83168100
	sub_83168100(ctx, base);
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
loc_831764E0:
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831764f8
	if (cr6.eq) goto loc_831764F8;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x83168100
	sub_83168100(ctx, base);
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
loc_831764F8:
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83176510
	if (cr6.eq) goto loc_83176510;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x83168100
	sub_83168100(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
loc_83176510:
	// addi r3,r31,264
	ctx.r3.s64 = r31.s64 + 264;
	// bl 0x8317a8c8
	sub_8317A8C8(ctx, base);
	// addi r3,r31,168
	ctx.r3.s64 = r31.s64 + 168;
	// bl 0x8317aa28
	sub_8317AA28(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x8317a800
	sub_8317A800(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
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

__attribute__((alias("__imp__sub_83176548"))) PPC_WEAK_FUNC(sub_83176548);
PPC_FUNC_IMPL(__imp__sub_83176548) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83176580
	if (cr6.eq) goto loc_83176580;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x83168100
	sub_83168100(ctx, base);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
loc_83176580:
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83176598
	if (cr6.eq) goto loc_83176598;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x83168100
	sub_83168100(ctx, base);
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
loc_83176598:
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831765b0
	if (cr6.eq) goto loc_831765B0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x83168100
	sub_83168100(ctx, base);
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
loc_831765B0:
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831765c8
	if (cr6.eq) goto loc_831765C8;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x83168100
	sub_83168100(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
loc_831765C8:
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

__attribute__((alias("__imp__sub_831765E0"))) PPC_WEAK_FUNC(sub_831765E0);
PPC_FUNC_IMPL(__imp__sub_831765E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// stw r28,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r28.u32);
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r30,12
	cr6.compare<uint32_t>(r30.u32, 12, xer);
	// bgt cr6,0x83176ad8
	if (cr6.gt) goto loc_83176AD8;
	// lis r12,-32230
	r12.s64 = -2112225280;
	// addi r12,r12,-24600
	r12.s64 = r12.s64 + -24600;
	// rlwinm r0,r30,1,0,30
	r0.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	r0.u64 = PPC_LOAD_U16(r12.u32 + r0.u32);
	// lis r12,-31977
	r12.s64 = -2095644672;
	// addi r12,r12,26160
	r12.s64 = r12.s64 + 26160;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (r30.u64) {
	case 0:
		goto loc_83176B04;
	case 1:
		goto loc_83176630;
	case 2:
		goto loc_8317667C;
	case 3:
		goto loc_83176698;
	case 4:
		goto loc_831766A4;
	case 5:
		goto loc_8317670C;
	case 6:
		goto loc_83176794;
	case 7:
		goto loc_83176850;
	case 8:
		goto loc_831768C0;
	case 9:
		goto loc_8317698C;
	case 10:
		goto loc_831769D4;
	case 11:
		goto loc_83176AA0;
	case 12:
		goto loc_83176B04;
	default:
		__builtin_unreachable();
	}
loc_83176630:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83176b04
	if (!cr6.eq) goto loc_83176B04;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83176674
	if (!cr6.eq) goto loc_83176674;
	// li r30,2
	r30.s64 = 2;
	// b 0x83176b04
	goto loc_83176B04;
loc_83176674:
	// li r30,4
	r30.s64 = 4;
	// b 0x83176b04
	goto loc_83176B04;
loc_8317667C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
loc_83176684:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x83176b04
	goto loc_83176B04;
loc_83176698:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// b 0x83176684
	goto loc_83176684;
loc_831766A4:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r11,-24448
	ctx.r5.s64 = r11.s64 + -24448;
	// li r4,2048
	ctx.r4.s64 = 2048;
	// bl 0x83167fd8
	sub_83167FD8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// stw r4,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r4.u32);
	// bne 0x831766e4
	if (!cr0.eq) goto loc_831766E4;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-24488
	ctx.r4.s64 = r11.s64 + -24488;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r11,-3
	r11.s64 = -3;
	// li r30,-1
	r30.s64 = -1;
	// b 0x83176b00
	goto loc_83176B00;
loc_831766E4:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// addi r6,r11,-29624
	ctx.r6.s64 = r11.s64 + -29624;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r30,5
	r30.s64 = 5;
	// b 0x83176b04
	goto loc_83176B04;
loc_8317670C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x83176b04
	if (!cr6.eq) goto loc_83176B04;
	// addi r29,r31,48
	r29.s64 = r31.s64 + 48;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8317ade0
	sub_8317ADE0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83176778
	if (!cr6.eq) goto loc_83176778;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8317a7a0
	sub_8317A7A0(ctx, base);
	// cmpdi cr6,r3,0
	cr6.compare<int64_t>(ctx.r3.s64, 0, xer);
	// beq cr6,0x83176764
	if (cr6.eq) goto loc_83176764;
	// li r30,6
	r30.s64 = 6;
	// b 0x83176778
	goto loc_83176778;
loc_83176764:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8317a7b0
	sub_8317A7B0(ctx, base);
	// cmpdi cr6,r3,0
	cr6.compare<int64_t>(ctx.r3.s64, 0, xer);
	// beq cr6,0x83176778
	if (cr6.eq) goto loc_83176778;
	// li r30,10
	r30.s64 = 10;
loc_83176778:
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83176b04
	if (cr6.eq) goto loc_83176B04;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x83168100
	sub_83168100(ctx, base);
	// stw r28,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r28.u32);
	// b 0x83176b04
	goto loc_83176B04;
loc_83176794:
	// addi r30,r31,48
	r30.s64 = r31.s64 + 48;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8317a798
	sub_8317A798(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8317a7a0
	sub_8317A7A0(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,76(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrldi r11,r30,59
	r11.u64 = r30.u64 & 0x1F;
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(r11.s64, 0, xer);
	// beq cr6,0x831767e8
	if (cr6.eq) goto loc_831767E8;
	// rldicr r11,r30,0,58
	r11.u64 = __builtin_rotateleft64(r30.u64, 0) & 0xFFFFFFFFFFFFFFE0;
	// addi r30,r11,32
	r30.s64 = r11.s64 + 32;
loc_831767E8:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r11,-24500
	ctx.r5.s64 = r11.s64 + -24500;
	// extsw r4,r30
	ctx.r4.s64 = r30.s32;
	// bl 0x83167fd8
	sub_83167FD8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// stw r4,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r4.u32);
	// bne 0x83176828
	if (!cr0.eq) goto loc_83176828;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-24516
	ctx.r4.s64 = r11.s64 + -24516;
loc_83176814:
	// li r5,-3
	ctx.r5.s64 = -3;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// li r30,-1
	r30.s64 = -1;
	// b 0x83176b04
	goto loc_83176B04;
loc_83176828:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r6,r11,-29624
	ctx.r6.s64 = r11.s64 + -29624;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r30,7
	r30.s64 = 7;
	// b 0x83176b04
	goto loc_83176B04;
loc_83176850:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x83176b04
	if (!cr6.eq) goto loc_83176B04;
	// addi r29,r31,48
	r29.s64 = r31.s64 + 48;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8317ad80
	sub_8317AD80(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83176b04
	if (!cr6.eq) goto loc_83176B04;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8317a7b0
	sub_8317A7B0(ctx, base);
	// cmpdi cr6,r3,0
	cr6.compare<int64_t>(ctx.r3.s64, 0, xer);
	// beq cr6,0x831768a8
	if (cr6.eq) goto loc_831768A8;
	// li r30,10
	r30.s64 = 10;
	// b 0x83176b04
	goto loc_83176B04;
loc_831768A8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8317a7c0
	sub_8317A7C0(ctx, base);
	// cmpdi cr6,r3,0
	cr6.compare<int64_t>(ctx.r3.s64, 0, xer);
	// beq cr6,0x831769cc
	if (cr6.eq) goto loc_831769CC;
	// li r30,8
	r30.s64 = 8;
	// b 0x83176b04
	goto loc_83176B04;
loc_831768C0:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x83176b04
	if (!cr6.eq) goto loc_83176B04;
	// addi r30,r31,48
	r30.s64 = r31.s64 + 48;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8317a7b8
	sub_8317A7B8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8317a7c0
	sub_8317A7C0(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,76(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrldi r11,r30,59
	r11.u64 = r30.u64 & 0x1F;
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(r11.s64, 0, xer);
	// beq cr6,0x83176934
	if (cr6.eq) goto loc_83176934;
	// rldicr r11,r30,0,58
	r11.u64 = __builtin_rotateleft64(r30.u64, 0) & 0xFFFFFFFFFFFFFFE0;
	// addi r30,r11,32
	r30.s64 = r11.s64 + 32;
loc_83176934:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r11,-24528
	ctx.r5.s64 = r11.s64 + -24528;
	// extsw r4,r30
	ctx.r4.s64 = r30.s32;
	// bl 0x83167fd8
	sub_83167FD8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// stw r4,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r4.u32);
	// bne 0x83176964
	if (!cr0.eq) goto loc_83176964;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-24544
	ctx.r4.s64 = r11.s64 + -24544;
	// b 0x83176814
	goto loc_83176814;
loc_83176964:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r6,r11,-29624
	ctx.r6.s64 = r11.s64 + -29624;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r30,9
	r30.s64 = 9;
	// b 0x83176b04
	goto loc_83176B04;
loc_8317698C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x83176b04
	if (!cr6.eq) goto loc_83176B04;
	// addi r7,r31,160
	ctx.r7.s64 = r31.s64 + 160;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r31,168
	ctx.r4.s64 = r31.s64 + 168;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x8317adc0
	sub_8317ADC0(ctx, base);
loc_831769C4:
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83176b04
	if (!cr6.eq) goto loc_83176B04;
loc_831769CC:
	// li r30,12
	r30.s64 = 12;
	// b 0x83176b04
	goto loc_83176B04;
loc_831769D4:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x83176b04
	if (!cr6.eq) goto loc_83176B04;
	// addi r30,r31,48
	r30.s64 = r31.s64 + 48;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8317a7a8
	sub_8317A7A8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8317a7b0
	sub_8317A7B0(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,76(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrldi r11,r30,59
	r11.u64 = r30.u64 & 0x1F;
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(r11.s64, 0, xer);
	// beq cr6,0x83176a48
	if (cr6.eq) goto loc_83176A48;
	// rldicr r11,r30,0,58
	r11.u64 = __builtin_rotateleft64(r30.u64, 0) & 0xFFFFFFFFFFFFFFE0;
	// addi r30,r11,32
	r30.s64 = r11.s64 + 32;
loc_83176A48:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r11,-24556
	ctx.r5.s64 = r11.s64 + -24556;
	// extsw r4,r30
	ctx.r4.s64 = r30.s32;
	// bl 0x83167fd8
	sub_83167FD8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// stw r4,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r4.u32);
	// bne 0x83176a78
	if (!cr0.eq) goto loc_83176A78;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-24572
	ctx.r4.s64 = r11.s64 + -24572;
	// b 0x83176814
	goto loc_83176814;
loc_83176A78:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r6,r11,-29624
	ctx.r6.s64 = r11.s64 + -29624;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r30,11
	r30.s64 = 11;
	// b 0x83176b04
	goto loc_83176B04;
loc_83176AA0:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x83176b04
	if (!cr6.eq) goto loc_83176B04;
	// addi r4,r31,264
	ctx.r4.s64 = r31.s64 + 264;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x8317ada0
	sub_8317ADA0(ctx, base);
	// b 0x831769c4
	goto loc_831769C4;
loc_83176AD8:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83176afc
	if (cr6.eq) goto loc_83176AFC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r28,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r28.u32);
loc_83176AFC:
	// li r11,-1
	r11.s64 = -1;
loc_83176B00:
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
loc_83176B04:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83176b70
	if (cr6.eq) goto loc_83176B70;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x83176b6c
	if (cr6.eq) goto loc_83176B6C;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x83176b6c
	if (cr6.eq) goto loc_83176B6C;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x83176b70
	if (!cr6.eq) goto loc_83176B70;
loc_83176B6C:
	// li r30,-1
	r30.s64 = -1;
loc_83176B70:
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83176B80"))) PPC_WEAK_FUNC(sub_83176B80);
PPC_FUNC_IMPL(__imp__sub_83176B80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,-12
	r11.s64 = r11.s64 + -12;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83176B98"))) PPC_WEAK_FUNC(sub_83176B98);
PPC_FUNC_IMPL(__imp__sub_83176B98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83176BB0"))) PPC_WEAK_FUNC(sub_83176BB0);
PPC_FUNC_IMPL(__imp__sub_83176BB0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// bne cr6,0x83176c38
	if (!cr6.eq) goto loc_83176C38;
	// addi r28,r31,48
	r28.s64 = r31.s64 + 48;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8317a7a0
	sub_8317A7A0(ctx, base);
	// cmpdi cr6,r3,0
	cr6.compare<int64_t>(ctx.r3.s64, 0, xer);
	// beq cr6,0x83176c38
	if (cr6.eq) goto loc_83176C38;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8317a7d8
	sub_8317A7D8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bne cr6,0x83176c0c
	if (!cr6.eq) goto loc_83176C0C;
	// bl 0x831799f0
	sub_831799F0(ctx, base);
	// b 0x83176c10
	goto loc_83176C10;
loc_83176C0C:
	// bl 0x83179940
	sub_83179940(ctx, base);
loc_83176C10:
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83176c38
	if (!cr6.eq) goto loc_83176C38;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// ld r11,288(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 288);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x83176c48
	goto loc_83176C48;
loc_83176C38:
	// li r11,0
	r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_83176C48:
	// std r11,8(r30)
	PPC_STORE_U64(r30.u32 + 8, r11.u64);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83176C58"))) PPC_WEAK_FUNC(sub_83176C58);
PPC_FUNC_IMPL(__imp__sub_83176C58) {
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
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// bne cr6,0x83176c84
	if (!cr6.eq) goto loc_83176C84;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x8317a7c0
	sub_8317A7C0(ctx, base);
	// cmpdi cr6,r3,0
	cr6.compare<int64_t>(ctx.r3.s64, 0, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x83176c88
	if (!cr6.eq) goto loc_83176C88;
loc_83176C84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83176C88:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83176C98"))) PPC_WEAK_FUNC(sub_83176C98);
PPC_FUNC_IMPL(__imp__sub_83176C98) {
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
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x8317a7c8
	sub_8317A7C8(ctx, base);
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83176CD0"))) PPC_WEAK_FUNC(sub_83176CD0);
PPC_FUNC_IMPL(__imp__sub_83176CD0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// b 0x8317a7d0
	sub_8317A7D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83176CD8"))) PPC_WEAK_FUNC(sub_83176CD8);
PPC_FUNC_IMPL(__imp__sub_83176CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,32767
	ctx.r7.s64 = 2147418112;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r7,r7,65535
	ctx.r7.u64 = ctx.r7.u64 | 65535;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r3,168
	ctx.r3.s64 = ctx.r3.s64 + 168;
	// b 0x8317a510
	sub_8317A510(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83176CF0"))) PPC_WEAK_FUNC(sub_83176CF0);
PPC_FUNC_IMPL(__imp__sub_83176CF0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r31,r3,168
	r31.s64 = ctx.r3.s64 + 168;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8317a508
	sub_8317A508(ctx, base);
	// lis r7,32767
	ctx.r7.s64 = 2147418112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r7,r7,65535
	ctx.r7.u64 = ctx.r7.u64 | 65535;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8317a510
	sub_8317A510(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317a7d0
	sub_8317A7D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83176D48"))) PPC_WEAK_FUNC(sub_83176D48);
PPC_FUNC_IMPL(__imp__sub_83176D48) {
	PPC_FUNC_PROLOGUE();
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
	// addi r31,r3,168
	r31.s64 = ctx.r3.s64 + 168;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// bl 0x8317a508
	sub_8317A508(ctx, base);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317a510
	sub_8317A510(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83176DA0"))) PPC_WEAK_FUNC(sub_83176DA0);
PPC_FUNC_IMPL(__imp__sub_83176DA0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,168
	ctx.r3.s64 = ctx.r3.s64 + 168;
	// b 0x8317abf0
	sub_8317ABF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83176DA8"))) PPC_WEAK_FUNC(sub_83176DA8);
PPC_FUNC_IMPL(__imp__sub_83176DA8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x83176dd4
	if (!cr6.eq) goto loc_83176DD4;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x83176e28
	if (cr6.eq) goto loc_83176E28;
loc_83176DD4:
	// addi r31,r3,168
	r31.s64 = ctx.r3.s64 + 168;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317a508
	sub_8317A508(ctx, base);
	// lis r7,32767
	ctx.r7.s64 = 2147418112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r7,r7,65535
	ctx.r7.u64 = ctx.r7.u64 | 65535;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8317a510
	sub_8317A510(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317a7d0
	sub_8317A7D0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x83176e1c
	if (cr6.eq) goto loc_83176E1C;
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
loc_83176E1C:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x83176e28
	if (cr6.eq) goto loc_83176E28;
	// std r3,0(r27)
	PPC_STORE_U64(r27.u32 + 0, ctx.r3.u64);
loc_83176E28:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83176E30"))) PPC_WEAK_FUNC(sub_83176E30);
PPC_FUNC_IMPL(__imp__sub_83176E30) {
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
	// bl 0x83176480
	sub_83176480(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83176e64
	if (cr0.eq) goto loc_83176E64;
	// li r4,312
	ctx.r4.s64 = 312;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83168618
	sub_83168618(ctx, base);
loc_83176E64:
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

__attribute__((alias("__imp__sub_83176E80"))) PPC_WEAK_FUNC(sub_83176E80);
PPC_FUNC_IMPL(__imp__sub_83176E80) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// beq cr6,0x83176eb4
	if (cr6.eq) goto loc_83176EB4;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x83176ebc
	if (!cr6.eq) goto loc_83176EBC;
loc_83176EB4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83176548
	sub_83176548(ctx, base);
loc_83176EBC:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83176ed4
	if (cr6.eq) goto loc_83176ED4;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-24392
	ctx.r4.s64 = r11.s64 + -24392;
	// b 0x83176fb4
	goto loc_83176FB4;
loc_83176ED4:
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83176360
	sub_83176360(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83176fac
	if (cr0.eq) goto loc_83176FAC;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83176fac
	if (!cr6.eq) goto loc_83176FAC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83176f54
	if (cr6.eq) goto loc_83176F54;
loc_83176F34:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r4,r11,-29624
	ctx.r4.s64 = r11.s64 + -29624;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83176fbc
	goto loc_83176FBC;
loc_83176F54:
	// cmpldi cr6,r28,0
	cr6.compare<uint64_t>(r28.u64, 0, xer);
	// beq cr6,0x83176f90
	if (cr6.eq) goto loc_83176F90;
	// cmpldi cr6,r27,0
	cr6.compare<uint64_t>(r27.u64, 0, xer);
	// beq cr6,0x83176f90
	if (cr6.eq) goto loc_83176F90;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83176f34
	if (!cr6.eq) goto loc_83176F34;
loc_83176F90:
	// li r11,1
	r11.s64 = 1;
	// std r28,288(r31)
	PPC_STORE_U64(r31.u32 + 288, r28.u64);
	// std r27,296(r31)
	PPC_STORE_U64(r31.u32 + 296, r27.u64);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r26,304(r31)
	PPC_STORE_U32(r31.u32 + 304, r26.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// b 0x83176fc0
	goto loc_83176FC0;
loc_83176FAC:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-24432
	ctx.r4.s64 = r11.s64 + -24432;
loc_83176FB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_83176FBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83176FC0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83176FC8"))) PPC_WEAK_FUNC(sub_83176FC8);
PPC_FUNC_IMPL(__imp__sub_83176FC8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// bne cr6,0x83177034
	if (!cr6.eq) goto loc_83177034;
	// addi r3,r30,48
	ctx.r3.s64 = r30.s64 + 48;
	// bl 0x8317a7b0
	sub_8317A7B0(ctx, base);
	// cmpdi cr6,r3,0
	cr6.compare<int64_t>(ctx.r3.s64, 0, xer);
	// beq cr6,0x83177034
	if (cr6.eq) goto loc_83177034;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,264
	ctx.r3.s64 = r30.s64 + 264;
	// bl 0x83179d78
	sub_83179D78(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83177034
	if (!cr6.eq) goto loc_83177034;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// ld r11,288(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 288);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x83177044
	goto loc_83177044;
loc_83177034:
	// li r11,0
	r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_83177044:
	// std r11,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r11.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83177050"))) PPC_WEAK_FUNC(sub_83177050);
PPC_FUNC_IMPL(__imp__sub_83177050) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// bne cr6,0x831770dc
	if (!cr6.eq) goto loc_831770DC;
	// addi r3,r30,48
	ctx.r3.s64 = r30.s64 + 48;
	// bl 0x8317a7a0
	sub_8317A7A0(ctx, base);
	// cmpdi cr6,r3,0
	cr6.compare<int64_t>(ctx.r3.s64, 0, xer);
	// beq cr6,0x831770dc
	if (cr6.eq) goto loc_831770DC;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,160
	ctx.r3.s64 = r30.s64 + 160;
	// bl 0x83179810
	sub_83179810(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x831770dc
	if (!cr6.eq) goto loc_831770DC;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// stw r7,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// ld r11,288(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 288);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r6,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r6.u32);
	// stw r5,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r5.u32);
	// b 0x831770fc
	goto loc_831770FC;
loc_831770DC:
	// li r11,0
	r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
loc_831770FC:
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83177108"))) PPC_WEAK_FUNC(sub_83177108);
PPC_FUNC_IMPL(__imp__sub_83177108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r3,108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83177148
	if (cr6.eq) goto loc_83177148;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r5,r10,-29624
	ctx.r5.s64 = ctx.r10.s64 + -29624;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83177148:
	// stw r31,88(r30)
	PPC_STORE_U32(r30.u32 + 88, r31.u32);
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

__attribute__((alias("__imp__sub_83177168"))) PPC_WEAK_FUNC(sub_83177168);
PPC_FUNC_IMPL(__imp__sub_83177168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r3,108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831771a8
	if (cr6.eq) goto loc_831771A8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r5,r10,-29624
	ctx.r5.s64 = ctx.r10.s64 + -29624;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831771A8:
	// std r31,96(r30)
	PPC_STORE_U64(r30.u32 + 96, r31.u64);
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

__attribute__((alias("__imp__sub_831771C8"))) PPC_WEAK_FUNC(sub_831771C8);
PPC_FUNC_IMPL(__imp__sub_831771C8) {
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
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-24336
	ctx.r4.s64 = r11.s64 + -24336;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r11,-1
	r11.s64 = -1;
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

__attribute__((alias("__imp__sub_83177208"))) PPC_WEAK_FUNC(sub_83177208);
PPC_FUNC_IMPL(__imp__sub_83177208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// lwz r11,108(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83177228
	if (!cr6.eq) goto loc_83177228;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// blr 
	return;
loc_83177228:
	// stw r4,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r4.u32);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,32(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83177240"))) PPC_WEAK_FUNC(sub_83177240);
PPC_FUNC_IMPL(__imp__sub_83177240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// lwz r11,108(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83177260
	if (!cr6.eq) goto loc_83177260;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// blr 
	return;
loc_83177260:
	// stw r10,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r10.u32);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,36(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83177278"))) PPC_WEAK_FUNC(sub_83177278);
PPC_FUNC_IMPL(__imp__sub_83177278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r4,r11,-29624
	ctx.r4.s64 = r11.s64 + -29624;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(r31.s32, 1, xer);
	// bne cr6,0x831772bc
	if (!cr6.eq) goto loc_831772BC;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-24268
	ctx.r4.s64 = r11.s64 + -24268;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_831772BC:
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

__attribute__((alias("__imp__sub_831772D8"))) PPC_WEAK_FUNC(sub_831772D8);
PPC_FUNC_IMPL(__imp__sub_831772D8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r28,1
	r28.s64 = 1;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x8316dcb0
	sub_8316DCB0(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x831773dc
	if (cr6.eq) goto loc_831773DC;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8317736c
	if (cr6.eq) goto loc_8317736C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x83177324
	if (cr6.eq) goto loc_83177324;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x831773e8
	if (!cr6.eq) goto loc_831773E8;
	// li r28,2
	r28.s64 = 2;
	// b 0x831773e8
	goto loc_831773E8;
loc_83177324:
	// lis r11,-31941
	r11.s64 = -2093285376;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r11,-29624
	r29.s64 = r11.s64 + -29624;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83175500
	sub_83175500(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8317734c
	if (!cr0.eq) goto loc_8317734C;
	// li r11,3
	r11.s64 = 3;
	// li r28,2
	r28.s64 = 2;
	// b 0x831773d4
	goto loc_831773D4;
loc_8317734C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83175500
	sub_83175500(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x831773e8
	if (!cr6.eq) goto loc_831773E8;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// b 0x831773e4
	goto loc_831773E4;
loc_8317736C:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x8316df60
	sub_8316DF60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83177398
	if (!cr0.eq) goto loc_83177398;
	// li r11,-1
	r11.s64 = -1;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// li r28,4
	r28.s64 = 4;
	// addi r4,r10,-24224
	ctx.r4.s64 = ctx.r10.s64 + -24224;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// b 0x831773e8
	goto loc_831773E8;
loc_83177398:
	// lis r11,-31941
	r11.s64 = -2093285376;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-29624
	ctx.r4.s64 = r11.s64 + -29624;
	// bl 0x83175500
	sub_83175500(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831773e8
	if (!cr0.eq) goto loc_831773E8;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r6,112(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,116(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// bl 0x83175710
	sub_83175710(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831773e8
	if (cr0.eq) goto loc_831773E8;
	// li r11,2
	r11.s64 = 2;
loc_831773D4:
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// b 0x831773e8
	goto loc_831773E8;
loc_831773DC:
	// li r11,-1
	r11.s64 = -1;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
loc_831773E4:
	// li r28,4
	r28.s64 = 4;
loc_831773E8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_831773F8"))) PPC_WEAK_FUNC(sub_831773F8);
PPC_FUNC_IMPL(__imp__sub_831773F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r6,r11,-29624
	ctx.r6.s64 = r11.s64 + -29624;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	r11.s64 = 0;
	// std r11,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r11.u64);
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r30)
	PPC_STORE_U64(r30.u32 + 0, r11.u64);
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

__attribute__((alias("__imp__sub_83177460"))) PPC_WEAK_FUNC(sub_83177460);
PPC_FUNC_IMPL(__imp__sub_83177460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-31941
	r11.s64 = -2093285376;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r29,r11,-29624
	r29.s64 = r11.s64 + -29624;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831774C8"))) PPC_WEAK_FUNC(sub_831774C8);
PPC_FUNC_IMPL(__imp__sub_831774C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83177524
	if (cr6.eq) goto loc_83177524;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-24180
	ctx.r4.s64 = r11.s64 + -24180;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83177524
	if (!cr6.eq) goto loc_83177524;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
loc_83177524:
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

__attribute__((alias("__imp__sub_83177538"))) PPC_WEAK_FUNC(sub_83177538);
PPC_FUNC_IMPL(__imp__sub_83177538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83177594
	if (cr6.eq) goto loc_83177594;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-24132
	ctx.r4.s64 = r11.s64 + -24132;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83177594
	if (!cr6.eq) goto loc_83177594;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
loc_83177594:
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

__attribute__((alias("__imp__sub_831775A8"))) PPC_WEAK_FUNC(sub_831775A8);
PPC_FUNC_IMPL(__imp__sub_831775A8) {
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
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,-24080
	r11.s64 = r11.s64 + -24080;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r11,8
	r11.s64 = 8;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// stw r30,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r30.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r10,96(r31)
	PPC_STORE_U64(r31.u32 + 96, ctx.r10.u64);
	// stw r30,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r30.u32);
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

__attribute__((alias("__imp__sub_83177628"))) PPC_WEAK_FUNC(sub_83177628);
PPC_FUNC_IMPL(__imp__sub_83177628) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,-27920
	r11.s64 = r11.s64 + -27920;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x83177658
	if (cr0.eq) goto loc_83177658;
	// li r4,128
	ctx.r4.s64 = 128;
	// bl 0x83168618
	sub_83168618(ctx, base);
loc_83177658:
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

__attribute__((alias("__imp__sub_83177670"))) PPC_WEAK_FUNC(sub_83177670);
PPC_FUNC_IMPL(__imp__sub_83177670) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r11,-23884
	ctx.r5.s64 = r11.s64 + -23884;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x83168690
	sub_83168690(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831776b8
	if (cr0.eq) goto loc_831776B8;
	// bl 0x831775a8
	sub_831775A8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_831776B8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x831776dc
	if (!cr6.eq) goto loc_831776DC;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-23928
	ctx.r4.s64 = r11.s64 + -23928;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r11,-3
	r11.s64 = -3;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x83177740
	goto loc_83177740;
loc_831776DC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x831686d0
	sub_831686D0(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8317770c
	if (cr0.eq) goto loc_8317770C;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8317770c
	if (!cr6.eq) goto loc_8317770C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x83177744
	goto loc_83177744;
loc_8317770C:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-23980
	ctx.r4.s64 = r11.s64 + -23980;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,-29624
	ctx.r4.s64 = ctx.r10.s64 + -29624;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83177740:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83177744:
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

__attribute__((alias("__imp__sub_83177760"))) PPC_WEAK_FUNC(sub_83177760);
PPC_FUNC_IMPL(__imp__sub_83177760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x8316dcb0
	sub_8316DCB0(ctx, base);
	// li r27,0
	r27.s64 = 0;
	// lis r11,-31941
	r11.s64 = -2093285376;
	// stw r27,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r27.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// addi r30,r11,-29624
	r30.s64 = r11.s64 + -29624;
	// bne cr6,0x831777bc
	if (!cr6.eq) goto loc_831777BC;
	// b 0x831777a8
	goto loc_831777A8;
loc_831777A0:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82bd42f0
	sub_82BD42F0(ctx, base);
loc_831777A8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83175500
	sub_83175500(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x831777a0
	if (cr6.eq) goto loc_831777A0;
loc_831777BC:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831777d4
	if (cr6.eq) goto loc_831777D4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// bl 0x8316e450
	sub_8316E450(ctx, base);
loc_831777D4:
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831777f8
	if (cr6.eq) goto loc_831777F8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r27,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r27.u32);
loc_831777F8:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83177820
	if (cr6.eq) goto loc_83177820;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r4,r10,-29936
	ctx.r4.s64 = ctx.r10.s64 + -29936;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r27,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r27.u32);
loc_83177820:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,96(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83177840"))) PPC_WEAK_FUNC(sub_83177840);
PPC_FUNC_IMPL(__imp__sub_83177840) {
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
	// bl 0x831774c8
	sub_831774C8(ctx, base);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// lwz r29,88(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// bl 0x83177538
	sub_83177538(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83177880"))) PPC_WEAK_FUNC(sub_83177880);
PPC_FUNC_IMPL(__imp__sub_83177880) {
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
	// bl 0x831774c8
	sub_831774C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83177108
	sub_83177108(ctx, base);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// bl 0x83177538
	sub_83177538(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831778C8"))) PPC_WEAK_FUNC(sub_831778C8);
PPC_FUNC_IMPL(__imp__sub_831778C8) {
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
	// bl 0x831774c8
	sub_831774C8(ctx, base);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// ld r29,96(r31)
	r29.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// bl 0x83177538
	sub_83177538(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83177908"))) PPC_WEAK_FUNC(sub_83177908);
PPC_FUNC_IMPL(__imp__sub_83177908) {
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
	// bl 0x831774c8
	sub_831774C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83177168
	sub_83177168(ctx, base);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// bl 0x83177538
	sub_83177538(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83177950"))) PPC_WEAK_FUNC(sub_83177950);
PPC_FUNC_IMPL(__imp__sub_83177950) {
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
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
	// li r5,259
	ctx.r5.s64 = 259;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r28,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r28.u8);
	// addi r3,r1,113
	ctx.r3.s64 = ctx.r1.s64 + 113;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r30,r11,-29624
	r30.s64 = r11.s64 + -29624;
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x831779c8
	if (cr6.eq) goto loc_831779C8;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-23788
	ctx.r4.s64 = r11.s64 + -23788;
loc_831779BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// b 0x83177c18
	goto loc_83177C18;
loc_831779C8:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831779ec
	if (cr6.eq) goto loc_831779EC;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,260
	ctx.r6.s64 = 260;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8316e350
	sub_8316E350(ctx, base);
	// b 0x83177a20
	goto loc_83177A20;
loc_831779EC:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
loc_831779F4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x831779f4
	if (!cr6.eq) goto loc_831779F4;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
loc_83177A08:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne cr6,0x83177a08
	if (!cr6.eq) goto loc_83177A08;
loc_83177A20:
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r10,-30280
	ctx.r10.s64 = ctx.r10.s64 + -30280;
	// addi r8,r11,6
	ctx.r8.s64 = r11.s64 + 6;
loc_83177A30:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x83177a50
	if (!cr0.eq) goto loc_83177A50;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x83177a30
	if (!cr6.eq) goto loc_83177A30;
loc_83177A50:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x83177b08
	if (!cr0.eq) goto loc_83177B08;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_83177A60:
	// addi r9,r1,118
	ctx.r9.s64 = ctx.r1.s64 + 118;
	// mulli r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 * 10;
	// lbzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + ctx.r9.u32);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(r11.u32, 9, xer);
	// addi r10,r10,-48
	ctx.r10.s64 = ctx.r10.s64 + -48;
	// blt cr6,0x83177a60
	if (cr6.lt) goto loc_83177A60;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x83177b08
	if (cr6.lt) goto loc_83177B08;
	// clrlwi r5,r10,16
	ctx.r5.u64 = ctx.r10.u32 & 0xFFFF;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8316ea08
	sub_8316EA08(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83177afc
	if (!cr6.eq) goto loc_83177AFC;
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// addi r27,r1,80
	r27.s64 = ctx.r1.s64 + 80;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r29,0(r10)
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83177b78
	if (cr6.eq) goto loc_83177B78;
loc_83177AFC:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-23820
	ctx.r4.s64 = r11.s64 + -23820;
	// b 0x831779bc
	goto loc_831779BC;
loc_83177B08:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8316efd0
	sub_8316EFD0(ctx, base);
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bne cr6,0x83177be0
	if (!cr6.eq) goto loc_83177BE0;
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// addi r27,r1,80
	r27.s64 = ctx.r1.s64 + 80;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r29,0(r10)
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83177c2c
	if (!cr6.eq) goto loc_83177C2C;
loc_83177B78:
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// ble cr6,0x83177bd4
	if (!cr6.gt) goto loc_83177BD4;
	// li r11,1
	r11.s64 = 1;
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// b 0x83177bd8
	goto loc_83177BD8;
loc_83177BD4:
	// stw r28,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r28.u32);
loc_83177BD8:
	// stw r10,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// b 0x83177c2c
	goto loc_83177C2C;
loc_83177BE0:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-23868
	ctx.r4.s64 = r11.s64 + -23868;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d0
	sub_831684D0(ctx, base);
loc_83177C18:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83177c2c
	if (!cr6.eq) goto loc_83177C2C;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
loc_83177C2C:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83177C38"))) PPC_WEAK_FUNC(sub_83177C38);
PPC_FUNC_IMPL(__imp__sub_83177C38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// bl 0x831774c8
	sub_831774C8(ctx, base);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r4,r11,-29624
	ctx.r4.s64 = r11.s64 + -29624;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x83177538
	sub_83177538(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83177C98"))) PPC_WEAK_FUNC(sub_83177C98);
PPC_FUNC_IMPL(__imp__sub_83177C98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// bl 0x831774c8
	sub_831774C8(ctx, base);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r4,r11,-29624
	ctx.r4.s64 = r11.s64 + -29624;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x83177538
	sub_83177538(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83177CF8"))) PPC_WEAK_FUNC(sub_83177CF8);
PPC_FUNC_IMPL(__imp__sub_83177CF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// bl 0x831774c8
	sub_831774C8(ctx, base);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r4,r11,-29624
	ctx.r4.s64 = r11.s64 + -29624;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x83177538
	sub_83177538(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83177D58"))) PPC_WEAK_FUNC(sub_83177D58);
PPC_FUNC_IMPL(__imp__sub_83177D58) {
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
	// bl 0x831774c8
	sub_831774C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83177278
	sub_83177278(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x83177538
	sub_83177538(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83177DA0"))) PPC_WEAK_FUNC(sub_83177DA0);
PPC_FUNC_IMPL(__imp__sub_83177DA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r4,r11,-29624
	ctx.r4.s64 = r11.s64 + -29624;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83177dec
	if (cr6.eq) goto loc_83177DEC;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x83177dec
	if (!cr6.eq) goto loc_83177DEC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831772d8
	sub_831772D8(ctx, base);
loc_83177DEC:
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

__attribute__((alias("__imp__sub_83177E00"))) PPC_WEAK_FUNC(sub_83177E00);
PPC_FUNC_IMPL(__imp__sub_83177E00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// bl 0x831774c8
	sub_831774C8(ctx, base);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r4,r11,-29624
	ctx.r4.s64 = r11.s64 + -29624;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x83177538
	sub_83177538(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83177E60"))) PPC_WEAK_FUNC(sub_83177E60);
PPC_FUNC_IMPL(__imp__sub_83177E60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// bl 0x831774c8
	sub_831774C8(ctx, base);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r4,r11,-29624
	ctx.r4.s64 = r11.s64 + -29624;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x83177538
	sub_83177538(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83177EC0"))) PPC_WEAK_FUNC(sub_83177EC0);
PPC_FUNC_IMPL(__imp__sub_83177EC0) {
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
	// bl 0x831774c8
	sub_831774C8(ctx, base);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// lwz r29,112(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// bl 0x83177538
	sub_83177538(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83177F00"))) PPC_WEAK_FUNC(sub_83177F00);
PPC_FUNC_IMPL(__imp__sub_83177F00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// bl 0x831774c8
	sub_831774C8(ctx, base);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r4,r11,-29624
	ctx.r4.s64 = r11.s64 + -29624;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x83177538
	sub_83177538(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83177F60"))) PPC_WEAK_FUNC(sub_83177F60);
PPC_FUNC_IMPL(__imp__sub_83177F60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x831774c8
	sub_831774C8(ctx, base);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r6,r11,-29624
	ctx.r6.s64 = r11.s64 + -29624;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// bl 0x83177538
	sub_83177538(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83177FD0"))) PPC_WEAK_FUNC(sub_83177FD0);
PPC_FUNC_IMPL(__imp__sub_83177FD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// bl 0x831774c8
	sub_831774C8(ctx, base);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r4,r11,-29624
	ctx.r4.s64 = r11.s64 + -29624;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x83177538
	sub_83177538(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83178030"))) PPC_WEAK_FUNC(sub_83178030);
PPC_FUNC_IMPL(__imp__sub_83178030) {
	PPC_FUNC_PROLOGUE();
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
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x831774c8
	sub_831774C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x831773f8
	sub_831773F8(ctx, base);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// bl 0x83177538
	sub_83177538(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83178080"))) PPC_WEAK_FUNC(sub_83178080);
PPC_FUNC_IMPL(__imp__sub_83178080) {
	PPC_FUNC_PROLOGUE();
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
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x831774c8
	sub_831774C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83177460
	sub_83177460(ctx, base);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// bl 0x83177538
	sub_83177538(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_831780D0"))) PPC_WEAK_FUNC(sub_831780D0);
PPC_FUNC_IMPL(__imp__sub_831780D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// bl 0x831774c8
	sub_831774C8(ctx, base);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r4,r11,-29624
	ctx.r4.s64 = r11.s64 + -29624;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x83177538
	sub_83177538(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83178130"))) PPC_WEAK_FUNC(sub_83178130);
PPC_FUNC_IMPL(__imp__sub_83178130) {
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
	// bl 0x831774c8
	sub_831774C8(ctx, base);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// li r11,0
	r11.s64 = 0;
	// stw r30,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// bl 0x83177538
	sub_83177538(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83178170"))) PPC_WEAK_FUNC(sub_83178170);
PPC_FUNC_IMPL(__imp__sub_83178170) {
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
	// bl 0x831774c8
	sub_831774C8(ctx, base);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// li r11,0
	r11.s64 = 0;
	// stw r30,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// bl 0x83177538
	sub_83177538(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831781B0"))) PPC_WEAK_FUNC(sub_831781B0);
PPC_FUNC_IMPL(__imp__sub_831781B0) {
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
	// bl 0x831774c8
	sub_831774C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83177950
	sub_83177950(ctx, base);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// bl 0x83177538
	sub_83177538(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831781F8"))) PPC_WEAK_FUNC(sub_831781F8);
PPC_FUNC_IMPL(__imp__sub_831781F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x831774c8
	sub_831774C8(ctx, base);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8317823c
	if (!cr6.eq) goto loc_8317823C;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83178254
	if (!cr6.eq) goto loc_83178254;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// b 0x83178254
	goto loc_83178254;
loc_8317823C:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r4,r10,-29624
	ctx.r4.s64 = ctx.r10.s64 + -29624;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83178254:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x83177538
	sub_83177538(ctx, base);
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

__attribute__((alias("__imp__sub_83178288"))) PPC_WEAK_FUNC(sub_83178288);
PPC_FUNC_IMPL(__imp__sub_83178288) {
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
	// bl 0x831774c8
	sub_831774C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83177da0
	sub_83177DA0(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x83177538
	sub_83177538(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831782D0"))) PPC_WEAK_FUNC(sub_831782D0);
PPC_FUNC_IMPL(__imp__sub_831782D0) {
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
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// bne cr6,0x83178318
	if (!cr6.eq) goto loc_83178318;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-23672
	ctx.r4.s64 = r11.s64 + -23672;
loc_83178300:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x83178364
	goto loc_83178364;
loc_83178318:
	// addi r10,r11,76
	ctx.r10.s64 = r11.s64 + 76;
loc_8317831C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83178338
	if (cr6.eq) goto loc_83178338;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// blt cr6,0x8317831c
	if (cr6.lt) goto loc_8317831C;
loc_83178338:
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x8317834c
	if (!cr6.eq) goto loc_8317834C;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-23724
	ctx.r4.s64 = r11.s64 + -23724;
	// b 0x83178300
	goto loc_83178300;
loc_8317834C:
	// addi r10,r3,19
	ctx.r10.s64 = ctx.r3.s64 + 19;
	// addi r9,r3,21
	ctx.r9.s64 = ctx.r3.s64 + 21;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r4.u32);
	// stwx r5,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, ctx.r5.u32);
loc_83178364:
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

__attribute__((alias("__imp__sub_83178378"))) PPC_WEAK_FUNC(sub_83178378);
PPC_FUNC_IMPL(__imp__sub_83178378) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// blt cr6,0x831783d8
	if (cr6.lt) goto loc_831783D8;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x831783d8
	if (!cr6.lt) goto loc_831783D8;
	// addi r11,r4,19
	r11.s64 = ctx.r4.s64 + 19;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x831783c4
	if (!cr6.eq) goto loc_831783C4;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-23592
	ctx.r4.s64 = r11.s64 + -23592;
	// b 0x831783e0
	goto loc_831783E0;
loc_831783C4:
	// addi r9,r4,21
	ctx.r9.s64 = ctx.r4.s64 + 21;
	// stwx r10,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// b 0x831783f0
	goto loc_831783F0;
loc_831783D8:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-23636
	ctx.r4.s64 = r11.s64 + -23636;
loc_831783E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_831783F0:
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

__attribute__((alias("__imp__sub_83178408"))) PPC_WEAK_FUNC(sub_83178408);
PPC_FUNC_IMPL(__imp__sub_83178408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83178448
	if (cr6.eq) goto loc_83178448;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-23540
	ctx.r4.s64 = r11.s64 + -23540;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_83178448:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83178458"))) PPC_WEAK_FUNC(sub_83178458);
PPC_FUNC_IMPL(__imp__sub_83178458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83178498
	if (cr6.eq) goto loc_83178498;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-23492
	ctx.r4.s64 = r11.s64 + -23492;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_83178498:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831784A8"))) PPC_WEAK_FUNC(sub_831784A8);
PPC_FUNC_IMPL(__imp__sub_831784A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r5,r10,-29936
	ctx.r5.s64 = ctx.r10.s64 + -29936;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_831784D0"))) PPC_WEAK_FUNC(sub_831784D0);
PPC_FUNC_IMPL(__imp__sub_831784D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r5,r10,-29936
	ctx.r5.s64 = ctx.r10.s64 + -29936;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_831784F8"))) PPC_WEAK_FUNC(sub_831784F8);
PPC_FUNC_IMPL(__imp__sub_831784F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r11,r11,-24100
	r11.s64 = r11.s64 + -24100;
loc_83178500:
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
	// bne 0x83178500
	if (!cr0.eq) goto loc_83178500;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83178520"))) PPC_WEAK_FUNC(sub_83178520);
PPC_FUNC_IMPL(__imp__sub_83178520) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31941
	r11.s64 = -2093285376;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,-24100
	ctx.r7.s64 = r11.s64 + -24100;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
loc_83178530:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r7
	reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r7
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x83178530
	if (!cr0.eq) goto loc_83178530;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// stw r11,-29624(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29624, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83178568"))) PPC_WEAK_FUNC(sub_83178568);
PPC_FUNC_IMPL(__imp__sub_83178568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// lis r11,-31941
	r11.s64 = -2093285376;
	// stw r29,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r29.u32);
	// addi r30,r11,-29936
	r30.s64 = r11.s64 + -29936;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831785ac
	if (cr6.eq) goto loc_831785AC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
loc_831785AC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831785d0
	if (cr6.eq) goto loc_831785D0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
loc_831785D0:
	// li r4,92
	ctx.r4.s64 = 92;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831785E8"))) PPC_WEAK_FUNC(sub_831785E8);
PPC_FUNC_IMPL(__imp__sub_831785E8) {
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
	// li r29,0
	r29.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r29,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r29.u32);
	// mr r31,r29
	r31.u64 = r29.u64;
	// bl 0x83178408
	sub_83178408(ctx, base);
	// li r11,15
	r11.s64 = 15;
	// addi r10,r30,68
	ctx.r10.s64 = r30.s64 + 68;
loc_83178610:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8317862c
	if (!cr6.eq) goto loc_8317862C;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// bge 0x83178610
	if (!cr0.lt) goto loc_83178610;
	// b 0x8317865c
	goto loc_8317865C;
loc_8317862C:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r30
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8317865c
	if (cr6.eq) goto loc_8317865C;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stwx r11,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + r30.u32, r11.u32);
	// beq cr6,0x83178654
	if (cr6.eq) goto loc_83178654;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
loc_83178654:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
loc_8317865C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83178458
	sub_83178458(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83178670"))) PPC_WEAK_FUNC(sub_83178670);
PPC_FUNC_IMPL(__imp__sub_83178670) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r27,0
	r27.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r27,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r27.u32);
	// lwz r29,8(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x83178408
	sub_83178408(ctx, base);
	// addi r11,r29,2
	r11.s64 = r29.s64 + 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r31
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x831786d4
	if (cr0.eq) goto loc_831786D4;
loc_831786B0:
	// cmplw cr6,r9,r30
	cr6.compare<uint32_t>(ctx.r9.u32, r30.u32, xer);
	// beq cr6,0x831786f4
	if (cr6.eq) goto loc_831786F4;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x831786b0
	if (!cr6.eq) goto loc_831786B0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x831786d4
	if (cr0.eq) goto loc_831786D4;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
loc_831786D4:
	// stwx r30,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + r31.u32, r30.u32);
loc_831786D8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83178458
	sub_83178458(ctx, base);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x831786ec
	if (cr6.eq) goto loc_831786EC;
	// stw r27,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r27.u32);
loc_831786EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_831786F4:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-23444
	ctx.r4.s64 = r11.s64 + -23444;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r27,-1
	r27.s64 = -1;
	// b 0x831786d8
	goto loc_831786D8;
}

__attribute__((alias("__imp__sub_83178710"))) PPC_WEAK_FUNC(sub_83178710);
PPC_FUNC_IMPL(__imp__sub_83178710) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r11,-31941
	r11.s64 = -2093285376;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r27,r11,-29624
	r27.s64 = r11.s64 + -29624;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x831785e8
	sub_831785E8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x83178788
	if (cr0.eq) goto loc_83178788;
	// addi r26,r28,76
	r26.s64 = r28.s64 + 76;
loc_83178744:
	// mr r31,r26
	r31.u64 = r26.u64;
	// li r29,2
	r29.s64 = 2;
loc_8317874C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83178768
	if (cr6.eq) goto loc_83178768;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83178768:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x8317874c
	if (!cr0.eq) goto loc_8317874C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831785e8
	sub_831785E8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x83178744
	if (!cr0.eq) goto loc_83178744;
loc_83178788:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83178790"))) PPC_WEAK_FUNC(sub_83178790);
PPC_FUNC_IMPL(__imp__sub_83178790) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r30,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r30.u32);
	// addi r5,r11,-23260
	ctx.r5.s64 = r11.s64 + -23260;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,92
	ctx.r3.s64 = 92;
	// bl 0x83168690
	sub_83168690(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x83178808
	if (cr0.eq) goto loc_83178808;
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r30.u32);
	// addi r3,r31,76
	ctx.r3.s64 = r31.s64 + 76;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// b 0x8317880c
	goto loc_8317880C;
loc_83178808:
	// mr r31,r30
	r31.u64 = r30.u64;
loc_8317880C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83178830
	if (!cr6.eq) goto loc_83178830;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-23300
	ctx.r4.s64 = r11.s64 + -23300;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r11,-3
	r11.s64 = -3;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x831788b4
	goto loc_831788B4;
loc_83178830:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83168890
	sub_83168890(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8317888c
	if (!cr6.eq) goto loc_8317888C;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8317888c
	if (cr6.eq) goto loc_8317888C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8320e508
	sub_8320E508(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83178880
	if (cr0.eq) goto loc_83178880;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83178880
	if (!cr6.eq) goto loc_83178880;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x831788b8
	goto loc_831788B8;
loc_83178880:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-23340
	ctx.r4.s64 = r11.s64 + -23340;
	// b 0x83178894
	goto loc_83178894;
loc_8317888C:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-23388
	ctx.r4.s64 = r11.s64 + -23388;
loc_83178894:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,-29624
	ctx.r4.s64 = ctx.r10.s64 + -29624;
	// bl 0x83178568
	sub_83178568(ctx, base);
loc_831788B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831788B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_831788C0"))) PPC_WEAK_FUNC(sub_831788C0);
PPC_FUNC_IMPL(__imp__sub_831788C0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x83178710
	sub_83178710(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x831788f4
	if (cr6.eq) goto loc_831788F4;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_831788F4:
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

__attribute__((alias("__imp__sub_83178908"))) PPC_WEAK_FUNC(sub_83178908);
PPC_FUNC_IMPL(__imp__sub_83178908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r4,r11,-29624
	ctx.r4.s64 = r11.s64 + -29624;
	// b 0x831788c0
	sub_831788C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83178918"))) PPC_WEAK_FUNC(sub_83178918);
PPC_FUNC_IMPL(__imp__sub_83178918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31976
	ctx.r10.s64 = -2095579136;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,-30456
	ctx.r4.s64 = ctx.r10.s64 + -30456;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8317896c
	if (cr6.eq) goto loc_8317896C;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8317896C:
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

__attribute__((alias("__imp__sub_83178980"))) PPC_WEAK_FUNC(sub_83178980);
PPC_FUNC_IMPL(__imp__sub_83178980) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// lwz r29,8(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x83178408
	sub_83178408(ctx, base);
	// addi r11,r29,2
	r11.s64 = r29.s64 + 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r31
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831789c4
	if (!cr6.eq) goto loc_831789C4;
	// stwx r30,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + r31.u32, r30.u32);
	// b 0x831789ec
	goto loc_831789EC;
loc_831789C4:
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x831789dc
	goto loc_831789DC;
loc_831789D0:
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
loc_831789DC:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x831789d0
	if (!cr6.eq) goto loc_831789D0;
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_831789EC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83178458
	sub_83178458(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83178918
	sub_83178918(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83178a10
	if (cr6.eq) goto loc_83178A10;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
loc_83178A10:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83178A18"))) PPC_WEAK_FUNC(sub_83178A18);
PPC_FUNC_IMPL(__imp__sub_83178A18) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r26,0
	r26.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r26
	r28.u64 = r26.u64;
	// stw r26,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r26.u32);
	// lwz r29,8(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x83178408
	sub_83178408(ctx, base);
	// addi r11,r29,2
	r11.s64 = r29.s64 + 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r31
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// b 0x83178a60
	goto loc_83178A60;
loc_83178A54:
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x83178a6c
	if (cr6.eq) goto loc_83178A6C;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
loc_83178A60:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83178a54
	if (!cr6.eq) goto loc_83178A54;
	// b 0x83178aa0
	goto loc_83178AA0;
loc_83178A6C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83178a84
	if (cr6.eq) goto loc_83178A84;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// b 0x83178a88
	goto loc_83178A88;
loc_83178A84:
	// stwx r9,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + r31.u32, ctx.r9.u32);
loc_83178A88:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83178a94
	if (cr6.eq) goto loc_83178A94;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
loc_83178A94:
	// stw r26,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r26.u32);
	// li r28,1
	r28.s64 = 1;
	// stw r26,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r26.u32);
loc_83178AA0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83178458
	sub_83178458(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83178918
	sub_83178918(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83178ac8
	if (cr6.eq) goto loc_83178AC8;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
loc_83178AC8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83178AD0"))) PPC_WEAK_FUNC(sub_83178AD0);
PPC_FUNC_IMPL(__imp__sub_83178AD0) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-24020
	r31.s64 = r11.s64 + -24020;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r31,-68
	ctx.r3.s64 = r31.s64 + -68;
	// bl 0x831686d0
	sub_831686D0(ctx, base);
	// stw r3,-72(r31)
	PPC_STORE_U32(r31.u32 + -72, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83178b6c
	if (cr0.eq) goto loc_83178B6C;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83178b6c
	if (!cr6.eq) goto loc_83178B6C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83178b84
	if (cr6.eq) goto loc_83178B84;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-23192
	ctx.r4.s64 = r11.s64 + -23192;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// lwz r3,-72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -72);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r4,r11,-29936
	ctx.r4.s64 = r11.s64 + -29936;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,-72(r31)
	PPC_STORE_U32(r31.u32 + -72, r11.u32);
	// b 0x83178b84
	goto loc_83178B84;
loc_83178B6C:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-23248
	ctx.r4.s64 = r11.s64 + -23248;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_83178B84:
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

__attribute__((alias("__imp__sub_83178BA0"))) PPC_WEAK_FUNC(sub_83178BA0);
PPC_FUNC_IMPL(__imp__sub_83178BA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-24024
	r31.s64 = r11.s64 + -24024;
	// lwz r3,-68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -68);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83178c00
	if (cr6.eq) goto loc_83178C00;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-27748
	ctx.r4.s64 = r11.s64 + -27748;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83178c00
	if (!cr6.eq) goto loc_83178C00;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_83178C00:
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

__attribute__((alias("__imp__sub_83178C18"))) PPC_WEAK_FUNC(sub_83178C18);
PPC_FUNC_IMPL(__imp__sub_83178C18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-24024
	r31.s64 = r11.s64 + -24024;
	// lwz r3,-68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -68);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83178c78
	if (cr6.eq) goto loc_83178C78;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-27700
	ctx.r4.s64 = r11.s64 + -27700;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83178c78
	if (!cr6.eq) goto loc_83178C78;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_83178C78:
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

__attribute__((alias("__imp__sub_83178C90"))) PPC_WEAK_FUNC(sub_83178C90);
PPC_FUNC_IMPL(__imp__sub_83178C90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-31941
	r11.s64 = -2093285376;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,-24096
	ctx.r7.s64 = r11.s64 + -24096;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
loc_83178CB4:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r7
	reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r7
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x83178cb4
	if (!cr0.eq) goto loc_83178CB4;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83178cf4
	if (!cr6.eq) goto loc_83178CF4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83178ad0
	sub_83178AD0(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83178cf4
	if (cr6.eq) goto loc_83178CF4;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_83178CF4:
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

__attribute__((alias("__imp__sub_83178D08"))) PPC_WEAK_FUNC(sub_83178D08);
PPC_FUNC_IMPL(__imp__sub_83178D08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// lis r11,-31941
	r11.s64 = -2093285376;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r11,-24096
	r31.s64 = r11.s64 + -24096;
	// stw r8,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r8.u32);
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
loc_83178D34:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r8
	reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r8
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x83178d34
	if (!cr0.eq) goto loc_83178D34;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83178dac
	if (!cr6.eq) goto loc_83178DAC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83178d88
	if (cr6.eq) goto loc_83178D88;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r4,r10,-29936
	ctx.r4.s64 = ctx.r10.s64 + -29936;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_83178D88:
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83178dac
	if (cr6.eq) goto loc_83178DAC;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-23120
	ctx.r4.s64 = r11.s64 + -23120;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_83178DAC:
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

__attribute__((alias("__imp__sub_83178DC8"))) PPC_WEAK_FUNC(sub_83178DC8);
PPC_FUNC_IMPL(__imp__sub_83178DC8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x83178ba0
	sub_83178BA0(ctx, base);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r11,r11,-24024
	r11.s64 = r11.s64 + -24024;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83178e04
	if (cr6.eq) goto loc_83178E04;
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r31.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_83178E04:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r31.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// bl 0x83178c18
	sub_83178C18(ctx, base);
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

__attribute__((alias("__imp__sub_83178E38"))) PPC_WEAK_FUNC(sub_83178E38);
PPC_FUNC_IMPL(__imp__sub_83178E38) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x83178ba0
	sub_83178BA0(ctx, base);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r9,r11,-24024
	ctx.r9.s64 = r11.s64 + -24024;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// beq cr6,0x83178e78
	if (cr6.eq) goto loc_83178E78;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// b 0x83178e7c
	goto loc_83178E7C;
loc_83178E78:
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r11.u32);
loc_83178E7C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83178e88
	if (cr6.eq) goto loc_83178E88;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_83178E88:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x83178c18
	sub_83178C18(ctx, base);
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

__attribute__((alias("__imp__sub_83178EB8"))) PPC_WEAK_FUNC(sub_83178EB8);
PPC_FUNC_IMPL(__imp__sub_83178EB8) {
	PPC_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b14
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// bl 0x83178ba0
	sub_83178BA0(ctx, base);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r30,r11,-24024
	r30.s64 = r11.s64 + -24024;
	// li r11,-1
	r11.s64 = -1;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// li r27,0
	r27.s64 = 0;
	// std r11,0(r28)
	PPC_STORE_U64(r28.u32 + 0, r11.u64);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r31,r11
	r31.u64 = r11.u64;
	// beq cr6,0x83178f5c
	if (cr6.eq) goto loc_83178F5C;
loc_83178F0C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpw cr6,r11,r25
	cr6.compare<int32_t>(r11.s32, r25.s32, xer);
	// bne cr6,0x83178f3c
	if (!cr6.eq) goto loc_83178F3C;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpw cr6,r11,r24
	cr6.compare<int32_t>(r11.s32, r24.s32, xer);
	// bne cr6,0x83178f3c
	if (!cr6.eq) goto loc_83178F3C;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x831b6fa0
	sub_831B6FA0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83178f48
	if (cr0.eq) goto loc_83178F48;
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_83178F3C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83178f0c
	if (!cr6.eq) goto loc_83178F0C;
	// b 0x83178f5c
	goto loc_83178F5C;
loc_83178F48:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r27,1
	r27.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// ld r11,24(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// std r11,0(r28)
	PPC_STORE_U64(r28.u32 + 0, r11.u64);
loc_83178F5C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r10,0(r23)
	PPC_STORE_U32(r23.u32 + 0, ctx.r10.u32);
	// bl 0x83178c18
	sub_83178C18(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_83178F80"))) PPC_WEAK_FUNC(sub_83178F80);
PPC_FUNC_IMPL(__imp__sub_83178F80) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x83178ba0
	sub_83178BA0(ctx, base);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// li r31,0
	r31.s64 = 0;
	// addi r11,r11,-24024
	r11.s64 = r11.s64 + -24024;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x83178fbc
	goto loc_83178FBC;
loc_83178FAC:
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplw cr6,r9,r29
	cr6.compare<uint32_t>(ctx.r9.u32, r29.u32, xer);
	// beq cr6,0x83178fc8
	if (cr6.eq) goto loc_83178FC8;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_83178FBC:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83178fac
	if (!cr6.eq) goto loc_83178FAC;
	// b 0x83178fcc
	goto loc_83178FCC;
loc_83178FC8:
	// li r31,1
	r31.s64 = 1;
loc_83178FCC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// bl 0x83178c18
	sub_83178C18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83178FF0"))) PPC_WEAK_FUNC(sub_83178FF0);
PPC_FUNC_IMPL(__imp__sub_83178FF0) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_83179008:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83179008
	if (!cr6.eq) goto loc_83179008;
	// subf r11,r28,r11
	r11.s64 = r11.s64 - r28.s64;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r30,r10,-15032
	r30.s64 = ctx.r10.s64 + -15032;
	// li r27,0
	r27.s64 = 0;
	// mr r31,r30
	r31.u64 = r30.u64;
	// rotlwi r29,r11,0
	r29.u64 = __builtin_rotateleft32(r11.u32, 0);
loc_83179034:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_83179038:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83179038
	if (!cr6.eq) goto loc_83179038;
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x83179060
	if (!cr6.lt) goto loc_83179060;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_83179060:
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831b8aa8
	sub_831B8AA8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83179090
	if (cr0.eq) goto loc_83179090;
	// addi r31,r31,68
	r31.s64 = r31.s64 + 68;
	// addi r11,r30,204
	r11.s64 = r30.s64 + 204;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x83179034
	if (cr6.lt) goto loc_83179034;
	// b 0x831790a0
	goto loc_831790A0;
loc_83179090:
	// li r5,68
	ctx.r5.s64 = 68;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
loc_831790A0:
	// addi r11,r27,-3
	r11.s64 = r27.s64 + -3;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_831790B8"))) PPC_WEAK_FUNC(sub_831790B8);
PPC_FUNC_IMPL(__imp__sub_831790B8) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r11,0
	r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// blt cr6,0x83179118
	if (cr6.lt) goto loc_83179118;
	// beq cr6,0x83179110
	if (cr6.eq) goto loc_83179110;
	// cmplwi cr6,r6,3
	cr6.compare<uint32_t>(ctx.r6.u32, 3, xer);
	// blt cr6,0x83179108
	if (cr6.lt) goto loc_83179108;
	// beq cr6,0x83179100
	if (cr6.eq) goto loc_83179100;
	// cmplwi cr6,r6,5
	cr6.compare<uint32_t>(ctx.r6.u32, 5, xer);
	// blt cr6,0x83179118
	if (cr6.lt) goto loc_83179118;
	// bne cr6,0x8317911c
	if (!cr6.eq) goto loc_8317911C;
	// li r11,5
	r11.s64 = 5;
	// b 0x8317911c
	goto loc_8317911C;
loc_83179100:
	// li r11,3
	r11.s64 = 3;
	// b 0x8317911c
	goto loc_8317911C;
loc_83179108:
	// li r11,1
	r11.s64 = 1;
	// b 0x8317911c
	goto loc_8317911C;
loc_83179110:
	// li r11,2
	r11.s64 = 2;
	// b 0x8317911c
	goto loc_8317911C;
loc_83179118:
	// li r11,4
	r11.s64 = 4;
loc_8317911C:
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// blt cr6,0x83179140
	if (cr6.lt) goto loc_83179140;
	// beq cr6,0x83179138
	if (cr6.eq) goto loc_83179138;
	// cmplwi cr6,r7,3
	cr6.compare<uint32_t>(ctx.r7.u32, 3, xer);
	// bge cr6,0x83179144
	if (!cr6.lt) goto loc_83179144;
	// lis r4,-16384
	ctx.r4.s64 = -1073741824;
	// b 0x83179144
	goto loc_83179144;
loc_83179138:
	// lis r4,16384
	ctx.r4.s64 = 1073741824;
	// b 0x83179144
	goto loc_83179144;
loc_83179140:
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
loc_83179144:
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,2048
	ctx.r8.s64 = 134217728;
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831ce3f8
	sub_831CE3F8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x83179188
	if (!cr6.eq) goto loc_83179188;
	// bl 0x82bd5708
	sub_82BD5708(ctx, base);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-22980
	ctx.r4.s64 = r11.s64 + -22980;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831684d0
	sub_831684D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83179188:
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

__attribute__((alias("__imp__sub_831791A0"))) PPC_WEAK_FUNC(sub_831791A0);
PPC_FUNC_IMPL(__imp__sub_831791A0) {
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
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x831791cc
	if (!cr6.eq) goto loc_831791CC;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-22924
	ctx.r4.s64 = r11.s64 + -22924;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831791d8
	goto loc_831791D8;
loc_831791CC:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82bd4418
	sub_82BD4418(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_831791D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831791E8"))) PPC_WEAK_FUNC(sub_831791E8);
PPC_FUNC_IMPL(__imp__sub_831791E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83179214
	if (!cr6.eq) goto loc_83179214;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-22840
	ctx.r4.s64 = r11.s64 + -22840;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_8317920C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83179244
	goto loc_83179244;
loc_83179214:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82bd5608
	sub_82BD5608(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83179240
	if (!cr0.eq) goto loc_83179240;
	// bl 0x82bd5708
	sub_82BD5708(ctx, base);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-22888
	ctx.r4.s64 = r11.s64 + -22888;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684c0
	sub_831684C0(ctx, base);
	// b 0x8317920c
	goto loc_8317920C;
loc_83179240:
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_83179244:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179258"))) PPC_WEAK_FUNC(sub_83179258);
PPC_FUNC_IMPL(__imp__sub_83179258) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83179294
	if (!cr6.eq) goto loc_83179294;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-22756
	ctx.r4.s64 = r11.s64 + -22756;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_8317928C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831792e4
	goto loc_831792E4;
loc_83179294:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831ce888
	sub_831CE888(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// rotlwi r5,r29,0
	ctx.r5.u64 = __builtin_rotateleft32(r29.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bd4478
	sub_82BD4478(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831792e0
	if (!cr0.eq) goto loc_831792E0;
	// bl 0x82bd5708
	sub_82BD5708(ctx, base);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-22804
	ctx.r4.s64 = r11.s64 + -22804;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831684c0
	sub_831684C0(ctx, base);
	// b 0x8317928c
	goto loc_8317928C;
loc_831792E0:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_831792E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831792F0"))) PPC_WEAK_FUNC(sub_831792F0);
PPC_FUNC_IMPL(__imp__sub_831792F0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8317932c
	if (!cr6.eq) goto loc_8317932C;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-22672
	ctx.r4.s64 = r11.s64 + -22672;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_83179324:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83179384
	goto loc_83179384;
loc_8317932C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831ce888
	sub_831CE888(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// rotlwi r5,r29,0
	ctx.r5.u64 = __builtin_rotateleft32(r29.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bd4860
	sub_82BD4860(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x831ce770
	sub_831CE770(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x83179380
	if (!cr6.eq) goto loc_83179380;
	// bl 0x82bd5708
	sub_82BD5708(ctx, base);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-22720
	ctx.r4.s64 = r11.s64 + -22720;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831684c0
	sub_831684C0(ctx, base);
	// b 0x83179324
	goto loc_83179324;
loc_83179380:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83179384:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83179390"))) PPC_WEAK_FUNC(sub_83179390);
PPC_FUNC_IMPL(__imp__sub_83179390) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x831793bc
	if (!cr6.eq) goto loc_831793BC;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-22580
	ctx.r4.s64 = r11.s64 + -22580;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_831793B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831793f0
	goto loc_831793F0;
loc_831793BC:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x831ce990
	sub_831CE990(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831793e8
	if (!cr0.eq) goto loc_831793E8;
	// bl 0x82bd5708
	sub_82BD5708(ctx, base);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-22636
	ctx.r4.s64 = r11.s64 + -22636;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684c0
	sub_831684C0(ctx, base);
	// b 0x831793b4
	goto loc_831793B4;
loc_831793E8:
	// bl 0x831ce770
	sub_831CE770(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_831793F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179400"))) PPC_WEAK_FUNC(sub_83179400);
PPC_FUNC_IMPL(__imp__sub_83179400) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83179438
	if (!cr6.eq) goto loc_83179438;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-22500
	ctx.r4.s64 = r11.s64 + -22500;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_83179430:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8317947c
	goto loc_8317947C;
loc_83179438:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831ce888
	sub_831CE888(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831cd340
	sub_831CD340(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83179474
	if (!cr0.eq) goto loc_83179474;
	// bl 0x82bd5708
	sub_82BD5708(ctx, base);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-22544
	ctx.r4.s64 = r11.s64 + -22544;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684c0
	sub_831684C0(ctx, base);
	// b 0x83179430
	goto loc_83179430;
loc_83179474:
	// bl 0x831ce770
	sub_831CE770(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8317947C:
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

__attribute__((alias("__imp__sub_83179490"))) PPC_WEAK_FUNC(sub_83179490);
PPC_FUNC_IMPL(__imp__sub_83179490) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r3,r11,-14828
	ctx.r3.s64 = r11.s64 + -14828;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831794A0"))) PPC_WEAK_FUNC(sub_831794A0);
PPC_FUNC_IMPL(__imp__sub_831794A0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,-23052
	r11.s64 = r11.s64 + -23052;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x831794cc
	if (cr0.eq) goto loc_831794CC;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_831794CC:
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

__attribute__((alias("__imp__sub_831794E8"))) PPC_WEAK_FUNC(sub_831794E8);
PPC_FUNC_IMPL(__imp__sub_831794E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x831688c8
	sub_831688C8(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bge 0x8317951c
	if (!cr0.lt) goto loc_8317951C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83179528
	goto loc_83179528;
loc_8317951C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83168ca0
	sub_83168CA0(ctx, base);
loc_83179528:
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

__attribute__((alias("__imp__sub_83179540"))) PPC_WEAK_FUNC(sub_83179540);
PPC_FUNC_IMPL(__imp__sub_83179540) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x831688c8
	sub_831688C8(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bge 0x83179574
	if (!cr0.lt) goto loc_83179574;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83179580
	goto loc_83179580;
loc_83179574:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83168b70
	sub_83168B70(ctx, base);
loc_83179580:
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

__attribute__((alias("__imp__sub_83179598"))) PPC_WEAK_FUNC(sub_83179598);
PPC_FUNC_IMPL(__imp__sub_83179598) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x831688c8
	sub_831688C8(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bge 0x831795cc
	if (!cr0.lt) goto loc_831795CC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831795d8
	goto loc_831795D8;
loc_831795CC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83168a48
	sub_83168A48(ctx, base);
loc_831795D8:
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

__attribute__((alias("__imp__sub_831795F0"))) PPC_WEAK_FUNC(sub_831795F0);
PPC_FUNC_IMPL(__imp__sub_831795F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x831688c8
	sub_831688C8(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bge 0x83179624
	if (!cr0.lt) goto loc_83179624;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83179630
	goto loc_83179630;
loc_83179624:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83168de8
	sub_83168DE8(ctx, base);
loc_83179630:
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

__attribute__((alias("__imp__sub_83179648"))) PPC_WEAK_FUNC(sub_83179648);
PPC_FUNC_IMPL(__imp__sub_83179648) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// extsb r11,r3
	r11.s64 = ctx.r3.s8;
	// extsb r10,r4
	ctx.r10.s64 = ctx.r4.s8;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x83179660
	if (!cr6.eq) goto loc_83179660;
loc_83179658:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83179660:
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(r11.s32, 97, xer);
	// blt cr6,0x8317967c
	if (cr6.lt) goto loc_8317967C;
	// cmpwi cr6,r11,122
	cr6.compare<int32_t>(r11.s32, 122, xer);
	// bgt cr6,0x8317967c
	if (cr6.gt) goto loc_8317967C;
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// b 0x83179688
	goto loc_83179688;
loc_8317967C:
	// cmpwi cr6,r11,92
	cr6.compare<int32_t>(r11.s32, 92, xer);
	// bne cr6,0x83179688
	if (!cr6.eq) goto loc_83179688;
	// li r3,47
	ctx.r3.s64 = 47;
loc_83179688:
	// cmpwi cr6,r10,97
	cr6.compare<int32_t>(ctx.r10.s32, 97, xer);
	// blt cr6,0x831796a4
	if (cr6.lt) goto loc_831796A4;
	// cmpwi cr6,r10,122
	cr6.compare<int32_t>(ctx.r10.s32, 122, xer);
	// bgt cr6,0x831796a4
	if (cr6.gt) goto loc_831796A4;
	// addi r11,r10,-32
	r11.s64 = ctx.r10.s64 + -32;
	// extsb r4,r11
	ctx.r4.s64 = r11.s8;
	// b 0x831796b0
	goto loc_831796B0;
loc_831796A4:
	// cmpwi cr6,r10,92
	cr6.compare<int32_t>(ctx.r10.s32, 92, xer);
	// bne cr6,0x831796b0
	if (!cr6.eq) goto loc_831796B0;
	// li r4,47
	ctx.r4.s64 = 47;
loc_831796B0:
	// extsb r11,r3
	r11.s64 = ctx.r3.s8;
	// extsb r10,r4
	ctx.r10.s64 = ctx.r4.s8;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x83179658
	if (cr6.eq) goto loc_83179658;
	// li r3,1
	ctx.r3.s64 = 1;
	// bgtlr cr6
	if (cr6.gt) return;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831796D0"))) PPC_WEAK_FUNC(sub_831796D0);
PPC_FUNC_IMPL(__imp__sub_831796D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lbz r11,0(r7)
	r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(r11.u32, 47, xer);
	// bne cr6,0x83179704
	if (!cr6.eq) goto loc_83179704;
	// li r9,1
	ctx.r9.s64 = 1;
loc_83179704:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83179770
	if (cr6.eq) goto loc_83179770;
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// extsb. r11,r11
	r11.s64 = r11.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83179770
	if (cr0.eq) goto loc_83179770;
	// cmpwi cr6,r11,47
	cr6.compare<int32_t>(r11.s32, 47, xer);
	// bne cr6,0x83179730
	if (!cr6.eq) goto loc_83179730;
	// li r8,1
	ctx.r8.s64 = 1;
	// b 0x83179730
	goto loc_83179730;
loc_83179728:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_83179730:
	// lbzx r4,r8,r31
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + r31.u32);
	// lbzx r3,r9,r7
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// bl 0x83179648
	sub_83179648(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83179728
	if (cr0.eq) goto loc_83179728;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x831797b4
	if (!cr6.gt) goto loc_831797B4;
	// lbzx r11,r8,r31
	r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831797b4
	if (!cr6.eq) goto loc_831797B4;
	// li r4,47
	ctx.r4.s64 = 47;
	// lbzx r3,r9,r7
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// bl 0x83179648
	sub_83179648(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831797b4
	if (!cr0.eq) goto loc_831797B4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_83179770:
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// b 0x83179790
	goto loc_83179790;
loc_83179778:
	// extsb. r11,r9
	r11.s64 = ctx.r9.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83179788
	if (!cr0.eq) goto loc_83179788;
	// extsb. r11,r8
	r11.s64 = ctx.r8.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x831797b0
	if (cr0.eq) goto loc_831797B0;
loc_83179788:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_83179790:
	// lbz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// lbz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x83179648
	sub_83179648(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83179778
	if (cr0.eq) goto loc_83179778;
	// b 0x831797b4
	goto loc_831797B4;
loc_831797B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831797B4:
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

__attribute__((alias("__imp__sub_831797C8"))) PPC_WEAK_FUNC(sub_831797C8);
PPC_FUNC_IMPL(__imp__sub_831797C8) {
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831797f8
	if (!cr6.eq) goto loc_831797F8;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-22372
	ctx.r4.s64 = r11.s64 + -22372;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831797fc
	goto loc_831797FC;
loc_831797F8:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_831797FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179810"))) PPC_WEAK_FUNC(sub_83179810);
PPC_FUNC_IMPL(__imp__sub_83179810) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8317984c
	if (!cr6.eq) goto loc_8317984C;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-22224
	ctx.r4.s64 = r11.s64 + -22224;
loc_8317983C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83179934
	goto loc_83179934;
loc_8317984C:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bge cr6,0x83179864
	if (!cr6.lt) goto loc_83179864;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-22296
	ctx.r4.s64 = r11.s64 + -22296;
	// b 0x8317983c
	goto loc_8317983C;
loc_83179864:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r11,13824
	ctx.r5.s64 = r11.s64 + 13824;
	// bl 0x831795f0
	sub_831795F0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r11,20760
	ctx.r5.s64 = r11.s64 + 20760;
	// bl 0x831795f0
	sub_831795F0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r11,-22308
	ctx.r5.s64 = r11.s64 + -22308;
	// bl 0x83179540
	sub_83179540(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r11,-22320
	ctx.r5.s64 = r11.s64 + -22320;
	// bl 0x83179540
	sub_83179540(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r11,-22332
	ctx.r5.s64 = r11.s64 + -22332;
	// bl 0x831794e8
	sub_831794E8(ctx, base);
	// rotlwi r11,r3,0
	r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// addi r11,r11,2048
	r11.s64 = r11.s64 + 2048;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// addi r5,r10,23876
	ctx.r5.s64 = ctx.r10.s64 + 23876;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x83179540
	sub_83179540(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r11,-22344
	ctx.r5.s64 = r11.s64 + -22344;
	// bl 0x831795f0
	sub_831795F0(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83179930
	if (cr6.eq) goto loc_83179930;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83179930
	if (!cr6.eq) goto loc_83179930;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_83179930:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83179934:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83179940"))) PPC_WEAK_FUNC(sub_83179940);
PPC_FUNC_IMPL(__imp__sub_83179940) {
	PPC_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b14
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// bl 0x831797c8
	sub_831797C8(ctx, base);
	// mr. r23,r3
	r23.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r23.s32, 0, xer);
	// li r31,0
	r31.s64 = 0;
	// ble 0x831799c4
	if (!cr0.gt) goto loc_831799C4;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r27,r10,13824
	r27.s64 = ctx.r10.s64 + 13824;
	// addi r26,r11,20760
	r26.s64 = r11.s64 + 20760;
loc_83179978:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x831795f0
	sub_831795F0(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x831795f0
	sub_831795F0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x831796d0
	sub_831796D0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831799d0
	if (cr0.eq) goto loc_831799D0;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r23
	cr6.compare<int32_t>(r31.s32, r23.s32, xer);
	// blt cr6,0x83179978
	if (cr6.lt) goto loc_83179978;
loc_831799C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831799C8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b64
	return;
loc_831799D0:
	// stw r29,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r29.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// stw r28,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r28.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83179810
	sub_83179810(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831799c8
	goto loc_831799C8;
}

__attribute__((alias("__imp__sub_831799F0"))) PPC_WEAK_FUNC(sub_831799F0);
PPC_FUNC_IMPL(__imp__sub_831799F0) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b10
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// bl 0x831797c8
	sub_831797C8(ctx, base);
	// addi r27,r3,-1
	r27.s64 = ctx.r3.s64 + -1;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// srawi r10,r27,1
	xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x1) != 0);
	ctx.r10.s64 = r27.s32 >> 1;
	// addi r25,r11,20760
	r25.s64 = r11.s64 + 20760;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	r11.s64 = temp.s64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// clrlwi r31,r11,16
	r31.u64 = r11.u32 & 0xFFFF;
	// li r23,0
	r23.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x831795f0
	sub_831795F0(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r24,r11,13824
	r24.s64 = r11.s64 + 13824;
	// b 0x83179aa0
	goto loc_83179AA0;
loc_83179A44:
	// clrlwi r11,r23,16
	r11.u64 = r23.u32 & 0xFFFF;
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(r11.s32, r27.s32, xer);
	// bge cr6,0x83179af0
	if (!cr6.lt) goto loc_83179AF0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x83179a74
	if (!cr6.lt) goto loc_83179A74;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83179a6c
	if (cr6.eq) goto loc_83179A6C;
	// addis r11,r31,1
	r11.s64 = r31.s64 + 65536;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// clrlwi r31,r11,16
	r31.u64 = r11.u32 & 0xFFFF;
loc_83179A6C:
	// clrlwi r27,r31,16
	r27.u64 = r31.u32 & 0xFFFF;
	// b 0x83179a7c
	goto loc_83179A7C;
loc_83179A74:
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// clrlwi r23,r11,16
	r23.u64 = r11.u32 & 0xFFFF;
loc_83179A7C:
	// clrlwi r11,r23,16
	r11.u64 = r23.u32 & 0xFFFF;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// clrlwi r31,r11,16
	r31.u64 = r11.u32 & 0xFFFF;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x831795f0
	sub_831795F0(ctx, base);
loc_83179AA0:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x831795f0
	sub_831795F0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x831796d0
	sub_831796D0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83179a44
	if (!cr0.eq) goto loc_83179A44;
	// stw r29,4(r22)
	PPC_STORE_U32(r22.u32 + 4, r29.u32);
	// clrlwi r5,r31,16
	ctx.r5.u64 = r31.u32 & 0xFFFF;
	// stw r28,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r28.u32);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83179810
	sub_83179810(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83179af4
	goto loc_83179AF4;
loc_83179AF0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83179AF4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_83179B00"))) PPC_WEAK_FUNC(sub_83179B00);
PPC_FUNC_IMPL(__imp__sub_83179B00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// sth r11,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, r11.u16);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179B20"))) PPC_WEAK_FUNC(sub_83179B20);
PPC_FUNC_IMPL(__imp__sub_83179B20) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83179b50
	if (cr6.eq) goto loc_83179B50;
	// bl 0x83169308
	sub_83169308(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
loc_83179B50:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83179b64
	if (cr6.eq) goto loc_83179B64;
	// bl 0x83169308
	sub_83169308(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
loc_83179B64:
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

__attribute__((alias("__imp__sub_83179B80"))) PPC_WEAK_FUNC(sub_83179B80);
PPC_FUNC_IMPL(__imp__sub_83179B80) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r26,0
	r26.s64 = 0;
	// clrlwi r29,r25,16
	r29.u64 = r25.u32 & 0xFFFF;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// bgt cr6,0x83179bb0
	if (cr6.gt) goto loc_83179BB0;
loc_83179BA8:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// b 0x83179cb0
	goto loc_83179CB0;
loc_83179BB0:
	// clrlwi r30,r29,16
	r30.u64 = r29.u32 & 0xFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// srawi r11,r30,1
	xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	r11.s64 = r30.s32 >> 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// clrlwi r31,r11,16
	r31.u64 = r11.u32 & 0xFFFF;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x83168a48
	sub_83168A48(ctx, base);
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// beq cr6,0x83179c4c
	if (cr6.eq) goto loc_83179C4C;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r24,r10,65535
	r24.u64 = ctx.r10.u64 | 65535;
loc_83179BE4:
	// clrlwi r10,r26,16
	ctx.r10.u64 = r26.u32 & 0xFFFF;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// bge cr6,0x83179c54
	if (!cr6.lt) goto loc_83179C54;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// ble cr6,0x83179c10
	if (!cr6.gt) goto loc_83179C10;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83179c08
	if (cr6.eq) goto loc_83179C08;
	// add r11,r31,r24
	r11.u64 = r31.u64 + r24.u64;
	// clrlwi r31,r11,16
	r31.u64 = r11.u32 & 0xFFFF;
loc_83179C08:
	// mr r29,r31
	r29.u64 = r31.u64;
	// b 0x83179c18
	goto loc_83179C18;
loc_83179C10:
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// clrlwi r26,r11,16
	r26.u64 = r11.u32 & 0xFFFF;
loc_83179C18:
	// clrlwi r11,r26,16
	r11.u64 = r26.u32 & 0xFFFF;
	// clrlwi r30,r29,16
	r30.u64 = r29.u32 & 0xFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// clrlwi r31,r11,16
	r31.u64 = r11.u32 & 0xFFFF;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x83168a48
	sub_83168A48(ctx, base);
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// bne cr6,0x83179be4
	if (!cr6.eq) goto loc_83179BE4;
loc_83179C4C:
	// clrlwi r3,r31,16
	ctx.r3.u64 = r31.u32 & 0xFFFF;
	// b 0x83179cb0
	goto loc_83179CB0;
loc_83179C54:
	// clrlwi r11,r31,16
	r11.u64 = r31.u32 & 0xFFFF;
	// cmpw cr6,r11,r25
	cr6.compare<int32_t>(r11.s32, r25.s32, xer);
	// blt cr6,0x83179c68
	if (cr6.lt) goto loc_83179C68;
	// add r11,r25,r24
	r11.u64 = r25.u64 + r24.u64;
	// clrlwi r31,r11,16
	r31.u64 = r11.u32 & 0xFFFF;
loc_83179C68:
	// clrlwi. r11,r26,16
	r11.u64 = r26.u32 & 0xFFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83179c7c
	if (!cr0.eq) goto loc_83179C7C;
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// bgt cr6,0x83179ba8
	if (cr6.gt) goto loc_83179BA8;
loc_83179C7C:
	// clrlwi. r30,r31,16
	r30.u64 = r31.u32 & 0xFFFF;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x83179ca8
	if (cr0.eq) goto loc_83179CA8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x83168a48
	sub_83168A48(ctx, base);
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// ble cr6,0x83179ca8
	if (!cr6.gt) goto loc_83179CA8;
	// add r11,r30,r24
	r11.u64 = r30.u64 + r24.u64;
	// clrlwi r31,r11,16
	r31.u64 = r11.u32 & 0xFFFF;
loc_83179CA8:
	// clrlwi r11,r31,16
	r11.u64 = r31.u32 & 0xFFFF;
	// subfic r3,r11,-1
	xer.ca = r11.u32 <= 4294967295;
	ctx.r3.s64 = -1 - r11.s64;
loc_83179CB0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_83179CB8"))) PPC_WEAK_FUNC(sub_83179CB8);
PPC_FUNC_IMPL(__imp__sub_83179CB8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r6,16
	r11.u64 = ctx.r6.u32 & 0xFFFF;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addis r11,r11,1
	r11.s64 = r11.s64 + 65536;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// lwz r30,20(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// mr r27,r11
	r27.u64 = r11.u64;
	// subfic r24,r11,-1
	xer.ca = r11.u32 <= 4294967295;
	r24.s64 = -1 - r11.s64;
	// ble cr6,0x83179d2c
	if (!cr6.gt) goto loc_83179D2C;
	// clrldi r26,r24,32
	r26.u64 = r24.u64 & 0xFFFFFFFF;
loc_83179CFC:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x83168a48
	sub_83168A48(ctx, base);
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(r31.s32, r28.s32, xer);
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// and r11,r11,r26
	r11.u64 = r11.u64 & r26.u64;
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
	// blt cr6,0x83179cfc
	if (cr6.lt) goto loc_83179CFC;
loc_83179D2C:
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// ble cr6,0x83179d68
	if (!cr6.gt) goto loc_83179D68;
	// clrldi r28,r24,32
	r28.u64 = r24.u64 & 0xFFFFFFFF;
loc_83179D3C:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x83168b70
	sub_83168B70(ctx, base);
	// add r11,r3,r27
	r11.u64 = ctx.r3.u64 + r27.u64;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// cmpw cr6,r31,r25
	cr6.compare<int32_t>(r31.s32, r25.s32, xer);
	// and r11,r11,r28
	r11.u64 = r11.u64 & r28.u64;
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
	// blt cr6,0x83179d3c
	if (cr6.lt) goto loc_83179D3C;
loc_83179D68:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_83179D78"))) PPC_WEAK_FUNC(sub_83179D78);
PPC_FUNC_IMPL(__imp__sub_83179D78) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// clrlwi r28,r27,16
	r28.u64 = r27.u32 & 0xFFFF;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x83179b80
	sub_83179B80(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83179b80
	sub_83179B80(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// sth r27,0(r30)
	PPC_STORE_U16(r30.u32 + 0, r27.u16);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// blt cr6,0x83179e2c
	if (cr6.lt) goto loc_83179E2C;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// beq cr6,0x83179ddc
	if (cr6.eq) goto loc_83179DDC;
	// neg r28,r28
	r28.s64 = -r28.s64;
loc_83179DDC:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lhz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U16(r31.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83179cb8
	sub_83179CB8(ctx, base);
	// std r3,16(r30)
	PPC_STORE_U64(r30.u32 + 16, ctx.r3.u64);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83168a48
	sub_83168A48(ctx, base);
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x83168a48
	sub_83168A48(ctx, base);
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
loc_83179E24:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83179e8c
	goto loc_83179E8C;
loc_83179E2C:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// blt cr6,0x83179e88
	if (cr6.lt) goto loc_83179E88;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// beq cr6,0x83179e44
	if (cr6.eq) goto loc_83179E44;
	// neg r29,r29
	r29.s64 = -r29.s64;
loc_83179E44:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lhz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U16(r31.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83179cb8
	sub_83179CB8(ctx, base);
	// std r3,16(r30)
	PPC_STORE_U64(r30.u32 + 16, ctx.r3.u64);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x83168b70
	sub_83168B70(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x83168b70
	sub_83168B70(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// b 0x83179e24
	goto loc_83179E24;
loc_83179E88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83179E8C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83179E98"))) PPC_WEAK_FUNC(sub_83179E98);
PPC_FUNC_IMPL(__imp__sub_83179E98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r10,-23007
	ctx.r10.s64 = ctx.r10.s64 + -23007;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r10,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// sth r11,40(r3)
	PPC_STORE_U16(ctx.r3.u32 + 40, r11.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r10,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r10.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, r11.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179ED8"))) PPC_WEAK_FUNC(sub_83179ED8);
PPC_FUNC_IMPL(__imp__sub_83179ED8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83179f08
	if (cr6.eq) goto loc_83179F08;
	// bl 0x83169308
	sub_83169308(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
loc_83179F08:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83179f1c
	if (cr6.eq) goto loc_83179F1C;
	// bl 0x83169308
	sub_83169308(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
loc_83179F1C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83179f30
	if (cr6.eq) goto loc_83179F30;
	// bl 0x83169308
	sub_83169308(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
loc_83179F30:
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

__attribute__((alias("__imp__sub_83179F48"))) PPC_WEAK_FUNC(sub_83179F48);
PPC_FUNC_IMPL(__imp__sub_83179F48) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r11,-22196
	ctx.r5.s64 = r11.s64 + -22196;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x831795f0
	sub_831795F0(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x83168c98
	sub_83168C98(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83168c98
	sub_83168C98(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83179FB0"))) PPC_WEAK_FUNC(sub_83179FB0);
PPC_FUNC_IMPL(__imp__sub_83179FB0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x83168a48
	sub_83168A48(ctx, base);
	// sth r3,0(r30)
	PPC_STORE_U16(r30.u32 + 0, ctx.r3.u16);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x83168c98
	sub_83168C98(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x83168c98
	sub_83168C98(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83168c98
	sub_83168C98(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8317A028"))) PPC_WEAK_FUNC(sub_8317A028);
PPC_FUNC_IMPL(__imp__sub_8317A028) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8317a064
	if (!cr6.eq) goto loc_8317A064;
	// li r11,-1
	r11.s64 = -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x8317a13c
	goto loc_8317A13C;
loc_8317A064:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
loc_8317A070:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8317a070
	if (!cr6.eq) goto loc_8317A070;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// li r31,0
	r31.s64 = 0;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// rotlwi r29,r11,0
	r29.u64 = __builtin_rotateleft32(r11.u32, 0);
	// ble cr6,0x8317a138
	if (!cr6.gt) goto loc_8317A138;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r27,r11,-22180
	r27.s64 = r11.s64 + -22180;
loc_8317A0A4:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x831795f0
	sub_831795F0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8317a128
	if (cr0.eq) goto loc_8317A128;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_8317A0C0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8317a0c0
	if (!cr6.eq) goto loc_8317A0C0;
	// subf r11,r3,r11
	r11.s64 = r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// bne cr6,0x8317a128
	if (!cr6.eq) goto loc_8317A128;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x8317a11c
	if (!cr6.gt) goto loc_8317A11C;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// subf r7,r30,r3
	ctx.r7.s64 = ctx.r3.s64 - r30.s64;
loc_8317A0F8:
	// lbzx r4,r7,r9
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// lbz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// bl 0x83179648
	sub_83179648(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8317a120
	if (!cr0.eq) goto loc_8317A120;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r8,r29
	cr6.compare<int32_t>(ctx.r8.s32, r29.s32, xer);
	// blt cr6,0x8317a0f8
	if (cr6.lt) goto loc_8317A0F8;
loc_8317A11C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8317A120:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8317a144
	if (cr6.eq) goto loc_8317A144;
loc_8317A128:
	// lwz r11,24(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x8317a0a4
	if (cr6.lt) goto loc_8317A0A4;
loc_8317A138:
	// li r3,-2
	ctx.r3.s64 = -2;
loc_8317A13C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
loc_8317A144:
	// stw r31,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r31.u32);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// addi r5,r11,-22188
	ctx.r5.s64 = r11.s64 + -22188;
	// bl 0x83179598
	sub_83179598(ctx, base);
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8317a13c
	goto loc_8317A13C;
}

__attribute__((alias("__imp__sub_8317A170"))) PPC_WEAK_FUNC(sub_8317A170);
PPC_FUNC_IMPL(__imp__sub_8317A170) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x8317a198
	if (!cr6.eq) goto loc_8317A198;
loc_8317A190:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8317a228
	goto loc_8317A228;
loc_8317A198:
	// lbz r11,0(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8317a190
	if (cr6.eq) goto loc_8317A190;
	// li r26,0
	r26.s64 = 0;
	// mr r11,r27
	r11.u64 = r27.u64;
loc_8317A1AC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8317a1ac
	if (!cr6.eq) goto loc_8317A1AC;
	// subf r11,r27,r11
	r11.s64 = r11.s64 - r27.s64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// rotlwi r25,r11,0
	r25.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x83179f48
	sub_83179F48(ctx, base);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// neg r29,r11
	r29.s64 = -r11.s64;
loc_8317A1E0:
	// lbzx r11,r26,r27
	r11.u64 = PPC_LOAD_U8(r26.u32 + r27.u32);
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(r11.u32, 47, xer);
	// bne cr6,0x8317a1f4
	if (!cr6.eq) goto loc_8317A1F4;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
loc_8317A1F4:
	// lbzx r11,r26,r27
	r11.u64 = PPC_LOAD_U8(r26.u32 + r27.u32);
	// add r30,r26,r27
	r30.u64 = r26.u64 + r27.u64;
	// b 0x8317a210
	goto loc_8317A210;
loc_8317A200:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8317a21c
	if (cr6.eq) goto loc_8317A21C;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lbzx r11,r30,r31
	r11.u64 = PPC_LOAD_U8(r30.u32 + r31.u32);
loc_8317A210:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,47
	cr6.compare<int32_t>(r11.s32, 47, xer);
	// bne cr6,0x8317a200
	if (!cr6.eq) goto loc_8317A200;
loc_8317A21C:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x8317a2a8
	if (!cr6.eq) goto loc_8317A2A8;
loc_8317A224:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8317A228:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
loc_8317A230:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x83179f48
	sub_83179F48(ctx, base);
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_8317A248:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8317a248
	if (!cr6.eq) goto loc_8317A248;
	// subf r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(r11.u32, 0);
	// cmpw cr6,r7,r31
	cr6.compare<int32_t>(ctx.r7.s32, r31.s32, xer);
	// bne cr6,0x8317a2a4
	if (!cr6.eq) goto loc_8317A2A4;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x8317a298
	if (!cr6.gt) goto loc_8317A298;
loc_8317A278:
	// lbzx r4,r9,r30
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + r30.u32);
	// lbzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// bl 0x83179648
	sub_83179648(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8317a29c
	if (!cr0.eq) goto loc_8317A29C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r9,r7
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, xer);
	// blt cr6,0x8317a278
	if (cr6.lt) goto loc_8317A278;
loc_8317A298:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8317A29C:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8317a2b4
	if (cr6.eq) goto loc_8317A2B4;
loc_8317A2A4:
	// lwz r29,4(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 4);
loc_8317A2A8:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bgt cr6,0x8317a230
	if (cr6.gt) goto loc_8317A230;
	// b 0x8317a224
	goto loc_8317A224;
loc_8317A2B4:
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge cr6,0x8317a2d8
	if (!cr6.lt) goto loc_8317A2D8;
	// add r11,r31,r26
	r11.u64 = r31.u64 + r26.u64;
	// cmpw cr6,r11,r25
	cr6.compare<int32_t>(r11.s32, r25.s32, xer);
	// bge cr6,0x8317a2d8
	if (!cr6.lt) goto loc_8317A2D8;
	// neg r29,r10
	r29.s64 = -ctx.r10.s64;
	// mr r26,r11
	r26.u64 = r11.u64;
	// b 0x8317a1e0
	goto loc_8317A1E0;
loc_8317A2D8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x8317a228
	goto loc_8317A228;
}

__attribute__((alias("__imp__sub_8317A2E0"))) PPC_WEAK_FUNC(sub_8317A2E0);
PPC_FUNC_IMPL(__imp__sub_8317A2E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r11,8(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// addi r30,r8,-1
	r30.s64 = ctx.r8.s64 + -1;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// subfic r28,r30,-1
	xer.ca = r30.u32 <= 4294967295;
	r28.s64 = -1 - r30.s64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// lwz r10,72(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 72);
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// and r22,r10,r28
	r22.u64 = ctx.r10.u64 & r28.u64;
	// bge cr6,0x8317a324
	if (!cr6.lt) goto loc_8317A324;
	// neg r11,r11
	r11.s64 = -r11.s64;
loc_8317A324:
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// lwz r3,28(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 28);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83179810
	sub_83179810(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// lwz r23,92(r1)
	r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// beq cr6,0x8317a40c
	if (cr6.eq) goto loc_8317A40C;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// ld r26,96(r1)
	r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stw r23,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r23.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// bne cr6,0x8317a368
	if (!cr6.eq) goto loc_8317A368;
	// stw r22,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r22.u32);
	// b 0x8317a378
	goto loc_8317A378;
loc_8317A368:
	// lwz r11,76(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 76);
	// rotlwi r10,r26,0
	ctx.r10.u64 = __builtin_rotateleft32(r26.u32, 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_8317A378:
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// beq cr6,0x8317a40c
	if (cr6.eq) goto loc_8317A40C;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(r11.u32, r23.u32, xer);
	// bne cr6,0x8317a40c
	if (!cr6.eq) goto loc_8317A40C;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// neg r5,r25
	ctx.r5.s64 = -r25.s64;
	// blt cr6,0x8317a3a4
	if (cr6.lt) goto loc_8317A3A4;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
loc_8317A3A4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,28(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 28);
	// bl 0x83179810
	sub_83179810(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x8317a40c
	if (!cr6.eq) goto loc_8317A40C;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// extsw r9,r30
	ctx.r9.s64 = r30.s32;
	// clrldi r8,r28,32
	ctx.r8.u64 = r28.u64 & 0xFFFFFFFF;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// and r11,r11,r8
	r11.u64 = r11.u64 & ctx.r8.u64;
	// cmpld cr6,r11,r26
	cr6.compare<uint64_t>(r11.u64, r26.u64, xer);
	// bne cr6,0x8317a40c
	if (!cr6.eq) goto loc_8317A40C;
	// lwz r11,12(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 12);
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// and r11,r11,r28
	r11.u64 = r11.u64 & r28.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x8317a40c
	if (!cr6.eq) goto loc_8317A40C;
	// li r11,1
	r11.s64 = 1;
	// stw r11,16(r24)
	PPC_STORE_U32(r24.u32 + 16, r11.u32);
loc_8317A40C:
	// add r11,r23,r22
	r11.u64 = r23.u64 + r22.u64;
	// stw r11,72(r27)
	PPC_STORE_U32(r27.u32 + 72, r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_8317A420"))) PPC_WEAK_FUNC(sub_8317A420);
PPC_FUNC_IMPL(__imp__sub_8317A420) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r31,60
	ctx.r4.s64 = r31.s64 + 60;
	// bl 0x83179f48
	sub_83179F48(ctx, base);
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// beq cr6,0x8317a474
	if (cr6.eq) goto loc_8317A474;
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// neg r9,r9
	ctx.r9.s64 = -ctx.r9.s64;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x8317a474
	if (!cr6.eq) goto loc_8317A474;
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x8317a4f0
	goto loc_8317A4F0;
loc_8317A474:
	// lhz r9,42(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 42);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8317a488
	if (!cr6.eq) goto loc_8317A488;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8317a4f0
	goto loc_8317A4F0;
loc_8317A488:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge cr6,0x8317a4b8
	if (!cr6.lt) goto loc_8317A4B8;
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// neg r8,r10
	ctx.r8.s64 = -ctx.r10.s64;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// bne cr6,0x8317a4b8
	if (!cr6.eq) goto loc_8317A4B8;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// addi r3,r11,-2
	ctx.r3.s64 = r11.s64 + -2;
	// b 0x8317a4f0
	goto loc_8317A4F0;
loc_8317A4B8:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x8317a4d4
	if (!cr6.lt) goto loc_8317A4D4;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// beq cr6,0x8317a4d4
	if (cr6.eq) goto loc_8317A4D4;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// b 0x8317a4e0
	goto loc_8317A4E0;
loc_8317A4D4:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8317a4e0
	if (!cr6.gt) goto loc_8317A4E0;
	// neg r10,r10
	ctx.r10.s64 = -ctx.r10.s64;
loc_8317A4E0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x8317a4ec
	if (!cr6.lt) goto loc_8317A4EC;
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
loc_8317A4EC:
	// neg r3,r10
	ctx.r3.s64 = -ctx.r10.s64;
loc_8317A4F0:
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

__attribute__((alias("__imp__sub_8317A508"))) PPC_WEAK_FUNC(sub_8317A508);
PPC_FUNC_IMPL(__imp__sub_8317A508) {
	PPC_FUNC_PROLOGUE();
	// stw r4,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A510"))) PPC_WEAK_FUNC(sub_8317A510);
PPC_FUNC_IMPL(__imp__sub_8317A510) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b00
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r18,r7
	r18.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// li r27,0
	r27.s64 = 0;
	// li r23,0
	r23.s64 = 0;
	// li r22,0
	r22.s64 = 0;
	// bl 0x8317a028
	sub_8317A028(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8317a55c
	if (!cr0.eq) goto loc_8317A55C;
loc_8317A554:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8317a6dc
	goto loc_8317A6DC;
loc_8317A55C:
	// addi r29,r31,60
	r29.s64 = r31.s64 + 60;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317a170
	sub_8317A170(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x8317a554
	if (cr0.lt) goto loc_8317A554;
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83179f48
	sub_83179F48(ctx, base);
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stw r10,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r10.u32);
	// sth r11,42(r31)
	PPC_STORE_U16(r31.u32 + 42, r11.u16);
	// bl 0x8317a420
	sub_8317A420(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// lwz r25,84(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r21,-1
	cr6.compare<int32_t>(r21.s32, -1, xer);
	// blt cr6,0x8317a6cc
	if (cr6.lt) goto loc_8317A6CC;
	// lwz r19,88(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_8317A5D0:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x8317a6a8
	if (cr6.lt) goto loc_8317A6A8;
	// mr r28,r11
	r28.u64 = r11.u64;
	// addi r30,r31,44
	r30.s64 = r31.s64 + 44;
loc_8317A5E4:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83179fb0
	sub_83179FB0(ctx, base);
	// mulli r11,r27,20
	r11.s64 = r27.s64 * 20;
	// add r29,r11,r20
	r29.u64 = r11.u64 + r20.u64;
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r26,48(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// neg r5,r11
	ctx.r5.s64 = -r11.s64;
loc_8317A608:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83179fb0
	sub_83179FB0(ctx, base);
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmpw cr6,r19,r11
	cr6.compare<int32_t>(r19.s32, r11.s32, xer);
	// beq cr6,0x8317a628
	if (cr6.eq) goto loc_8317A628;
	// cmpwi cr6,r19,-1
	cr6.compare<int32_t>(r19.s32, -1, xer);
	// bne cr6,0x8317a68c
	if (!cr6.eq) goto loc_8317A68C;
loc_8317A628:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// beq cr6,0x8317a664
	if (cr6.eq) goto loc_8317A664;
	// cmpw cr6,r27,r18
	cr6.compare<int32_t>(r27.s32, r18.s32, xer);
	// bge cr6,0x8317a554
	if (!cr6.lt) goto loc_8317A554;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317a2e0
	sub_8317A2E0(ctx, base);
	// mr r23,r29
	r23.u64 = r29.u64;
	// lwz r22,52(r31)
	r22.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// b 0x8317a684
	goto loc_8317A684;
loc_8317A664:
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317a2e0
	sub_8317A2E0(ctx, base);
loc_8317A684:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,20
	r29.s64 = r29.s64 + 20;
loc_8317A68C:
	// lwz r5,48(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bgt cr6,0x8317a608
	if (cr6.gt) goto loc_8317A608;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// ble cr6,0x8317a6a8
	if (!cr6.gt) goto loc_8317A6A8;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// b 0x8317a5e4
	goto loc_8317A5E4;
loc_8317A6A8:
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// ble cr6,0x8317a6cc
	if (!cr6.gt) goto loc_8317A6CC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317a420
	sub_8317A420(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// cmpwi cr6,r21,-1
	cr6.compare<int32_t>(r21.s32, -1, xer);
	// bge cr6,0x8317a5d0
	if (!cr6.lt) goto loc_8317A5D0;
loc_8317A6CC:
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
loc_8317A6DC:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831b0b50
	return;
}

__attribute__((alias("__imp__sub_8317A6E8"))) PPC_WEAK_FUNC(sub_8317A6E8);
PPC_FUNC_IMPL(__imp__sub_8317A6E8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x83168c98
	sub_83168C98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x83168c98
	sub_83168C98(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r10,20760
	ctx.r5.s64 = ctx.r10.s64 + 20760;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x831795f0
	sub_831795F0(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r10,13824
	ctx.r5.s64 = ctx.r10.s64 + 13824;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x831795f0
	sub_831795F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831796d0
	sub_831796D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8317A770"))) PPC_WEAK_FUNC(sub_8317A770);
PPC_FUNC_IMPL(__imp__sub_8317A770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, r11.u64);
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
	// std r11,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, r11.u64);
	// std r11,48(r3)
	PPC_STORE_U64(ctx.r3.u32 + 48, r11.u64);
	// std r11,56(r3)
	PPC_STORE_U64(ctx.r3.u32 + 56, r11.u64);
	// std r11,64(r3)
	PPC_STORE_U64(ctx.r3.u32 + 64, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A798"))) PPC_WEAK_FUNC(sub_8317A798);
PPC_FUNC_IMPL(__imp__sub_8317A798) {
	PPC_FUNC_PROLOGUE();
	// ld r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A7A0"))) PPC_WEAK_FUNC(sub_8317A7A0);
PPC_FUNC_IMPL(__imp__sub_8317A7A0) {
	PPC_FUNC_PROLOGUE();
	// ld r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A7A8"))) PPC_WEAK_FUNC(sub_8317A7A8);
PPC_FUNC_IMPL(__imp__sub_8317A7A8) {
	PPC_FUNC_PROLOGUE();
	// ld r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 40);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A7B0"))) PPC_WEAK_FUNC(sub_8317A7B0);
PPC_FUNC_IMPL(__imp__sub_8317A7B0) {
	PPC_FUNC_PROLOGUE();
	// ld r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 48);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A7B8"))) PPC_WEAK_FUNC(sub_8317A7B8);
PPC_FUNC_IMPL(__imp__sub_8317A7B8) {
	PPC_FUNC_PROLOGUE();
	// ld r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 56);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A7C0"))) PPC_WEAK_FUNC(sub_8317A7C0);
PPC_FUNC_IMPL(__imp__sub_8317A7C0) {
	PPC_FUNC_PROLOGUE();
	// ld r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A7C8"))) PPC_WEAK_FUNC(sub_8317A7C8);
PPC_FUNC_IMPL(__imp__sub_8317A7C8) {
	PPC_FUNC_PROLOGUE();
	// lhz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 84);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A7D0"))) PPC_WEAK_FUNC(sub_8317A7D0);
PPC_FUNC_IMPL(__imp__sub_8317A7D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A7D8"))) PPC_WEAK_FUNC(sub_8317A7D8);
PPC_FUNC_IMPL(__imp__sub_8317A7D8) {
	PPC_FUNC_PROLOGUE();
	// lhz r3,102(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 102);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A7E0"))) PPC_WEAK_FUNC(sub_8317A7E0);
PPC_FUNC_IMPL(__imp__sub_8317A7E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32230
	r11.s64 = -2112225280;
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-22464
	r11.s64 = r11.s64 + -22464;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,-24016(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24016, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A800"))) PPC_WEAK_FUNC(sub_8317A800);
PPC_FUNC_IMPL(__imp__sub_8317A800) {
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
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8317a82c
	if (cr6.eq) goto loc_8317A82C;
	// bl 0x83169308
	sub_83169308(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8317A82C:
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

__attribute__((alias("__imp__sub_8317A840"))) PPC_WEAK_FUNC(sub_8317A840);
PPC_FUNC_IMPL(__imp__sub_8317A840) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lbz r11,4(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8317a88c
	if (!cr6.eq) goto loc_8317A88C;
	// addic. r9,r5,-16
	xer.ca = ctx.r5.u32 > 15;
	ctx.r9.s64 = ctx.r5.s64 + -16;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r11,r4,16
	r11.s64 = ctx.r4.s64 + 16;
	// li r10,25951
	ctx.r10.s64 = 25951;
	// beq 0x8317a88c
	if (cr0.eq) goto loc_8317A88C;
loc_8317A870:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// xor r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// mulli r10,r10,16661
	ctx.r10.s64 = ctx.r10.s64 * 16661;
	// stb r8,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne 0x8317a870
	if (!cr0.eq) goto loc_8317A870;
loc_8317A88C:
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x83169c28
	sub_83169C28(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8317a8b0
	if (cr0.eq) goto loc_8317A8B0;
	// bl 0x83168938
	sub_83168938(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8317A8B0:
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

__attribute__((alias("__imp__sub_8317A8C8"))) PPC_WEAK_FUNC(sub_8317A8C8);
PPC_FUNC_IMPL(__imp__sub_8317A8C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x83179b20
	sub_83179B20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317A8D0"))) PPC_WEAK_FUNC(sub_8317A8D0);
PPC_FUNC_IMPL(__imp__sub_8317A8D0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// sth r8,16(r26)
	PPC_STORE_U16(r26.u32 + 16, ctx.r8.u16);
	// stw r7,20(r26)
	PPC_STORE_U32(r26.u32 + 20, ctx.r7.u32);
	// lbz r11,4(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8317a924
	if (!cr6.eq) goto loc_8317A924;
	// addic. r9,r5,-16
	xer.ca = ctx.r5.u32 > 15;
	ctx.r9.s64 = ctx.r5.s64 + -16;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r11,r4,16
	r11.s64 = ctx.r4.s64 + 16;
	// li r10,25951
	ctx.r10.s64 = 25951;
	// beq 0x8317a924
	if (cr0.eq) goto loc_8317A924;
loc_8317A908:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// xor r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// mulli r10,r10,16661
	ctx.r10.s64 = ctx.r10.s64 * 16661;
	// stb r8,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne 0x8317a908
	if (!cr0.eq) goto loc_8317A908;
loc_8317A924:
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x83169c28
	sub_83169C28(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x8317a940
	if (!cr0.eq) goto loc_8317A940;
loc_8317A938:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8317aa1c
	goto loc_8317AA1C;
loc_8317A940:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-22164
	ctx.r4.s64 = r11.s64 + -22164;
	// bl 0x831688c8
	sub_831688C8(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bge 0x8317a964
	if (!cr0.lt) goto loc_8317A964;
	// li r28,-1
	r28.s64 = -1;
	// li r27,0
	r27.s64 = 0;
	// b 0x8317a97c
	goto loc_8317A97C;
loc_8317A964:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83169378
	sub_83169378(ctx, base);
	// lwz r28,92(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r27,88(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_8317A97C:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-22172
	ctx.r4.s64 = r11.s64 + -22172;
	// bl 0x831688c8
	sub_831688C8(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bge 0x8317a9a0
	if (!cr0.lt) goto loc_8317A9A0;
	// li r30,-1
	r30.s64 = -1;
	// li r29,0
	r29.s64 = 0;
	// b 0x8317a9b8
	goto loc_8317A9B8;
loc_8317A9A0:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83169378
	sub_83169378(ctx, base);
	// lwz r30,108(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r29,104(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_8317A9B8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83169308
	sub_83169308(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x83169c28
	sub_83169C28(ctx, base);
	// stw r3,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8317a938
	if (cr0.eq) goto loc_8317A938;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x83169c28
	sub_83169C28(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,4(r26)
	PPC_STORE_U32(r26.u32 + 4, ctx.r3.u32);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// bne 0x8317aa04
	if (!cr0.eq) goto loc_8317AA04;
	// bl 0x83169308
	sub_83169308(ctx, base);
	// b 0x8317a938
	goto loc_8317A938;
loc_8317AA04:
	// bl 0x83168938
	sub_83168938(ctx, base);
	// stw r3,8(r26)
	PPC_STORE_U32(r26.u32 + 8, ctx.r3.u32);
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// bl 0x83168938
	sub_83168938(ctx, base);
	// stw r3,12(r26)
	PPC_STORE_U32(r26.u32 + 12, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8317AA1C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_8317AA28"))) PPC_WEAK_FUNC(sub_8317AA28);
PPC_FUNC_IMPL(__imp__sub_8317AA28) {
	PPC_FUNC_PROLOGUE();
	// b 0x83179ed8
	sub_83179ED8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317AA30"))) PPC_WEAK_FUNC(sub_8317AA30);
PPC_FUNC_IMPL(__imp__sub_8317AA30) {
	PPC_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b14
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// stw r8,0(r24)
	PPC_STORE_U32(r24.u32 + 0, ctx.r8.u32);
	// stw r7,28(r24)
	PPC_STORE_U32(r24.u32 + 28, ctx.r7.u32);
	// sth r9,40(r24)
	PPC_STORE_U16(r24.u32 + 40, ctx.r9.u16);
	// lbz r11,4(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8317aa88
	if (!cr6.eq) goto loc_8317AA88;
	// addic. r9,r5,-16
	xer.ca = ctx.r5.u32 > 15;
	ctx.r9.s64 = ctx.r5.s64 + -16;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r11,r4,16
	r11.s64 = ctx.r4.s64 + 16;
	// li r10,25951
	ctx.r10.s64 = 25951;
	// beq 0x8317aa88
	if (cr0.eq) goto loc_8317AA88;
loc_8317AA6C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// xor r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// mulli r10,r10,16661
	ctx.r10.s64 = ctx.r10.s64 * 16661;
	// stb r8,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne 0x8317aa6c
	if (!cr0.eq) goto loc_8317AA6C;
loc_8317AA88:
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x83169c28
	sub_83169C28(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x8317aaa4
	if (!cr0.eq) goto loc_8317AAA4;
loc_8317AA9C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8317abe8
	goto loc_8317ABE8;
loc_8317AAA4:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-22136
	ctx.r4.s64 = r11.s64 + -22136;
	// bl 0x831688c8
	sub_831688C8(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bge 0x8317aac8
	if (!cr0.lt) goto loc_8317AAC8;
	// li r26,-1
	r26.s64 = -1;
	// li r25,0
	r25.s64 = 0;
	// b 0x8317aae0
	goto loc_8317AAE0;
loc_8317AAC8:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83169378
	sub_83169378(ctx, base);
	// lwz r26,92(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r25,88(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_8317AAE0:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-22144
	ctx.r4.s64 = r11.s64 + -22144;
	// bl 0x831688c8
	sub_831688C8(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bge 0x8317ab04
	if (!cr0.lt) goto loc_8317AB04;
	// li r28,-1
	r28.s64 = -1;
	// li r27,0
	r27.s64 = 0;
	// b 0x8317ab1c
	goto loc_8317AB1C;
loc_8317AB04:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83169378
	sub_83169378(ctx, base);
	// lwz r28,108(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r27,104(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_8317AB1C:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-22156
	ctx.r4.s64 = r11.s64 + -22156;
	// bl 0x831688c8
	sub_831688C8(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bge 0x8317ab40
	if (!cr0.lt) goto loc_8317AB40;
	// li r30,-1
	r30.s64 = -1;
	// li r29,0
	r29.s64 = 0;
	// b 0x8317ab58
	goto loc_8317AB58;
loc_8317AB40:
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83169378
	sub_83169378(ctx, base);
	// lwz r30,124(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r29,120(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
loc_8317AB58:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83169308
	sub_83169308(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x83169c28
	sub_83169C28(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,4(r24)
	PPC_STORE_U32(r24.u32 + 4, ctx.r3.u32);
	// bne 0x8317ab88
	if (!cr0.eq) goto loc_8317AB88;
loc_8317AB7C:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x83179ed8
	sub_83179ED8(ctx, base);
	// b 0x8317aa9c
	goto loc_8317AA9C;
loc_8317AB88:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x83169c28
	sub_83169C28(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,8(r24)
	PPC_STORE_U32(r24.u32 + 8, ctx.r3.u32);
	// beq 0x8317ab7c
	if (cr0.eq) goto loc_8317AB7C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x83169c28
	sub_83169C28(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,12(r24)
	PPC_STORE_U32(r24.u32 + 12, ctx.r3.u32);
	// beq 0x8317ab7c
	if (cr0.eq) goto loc_8317AB7C;
	// lwz r3,4(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// bl 0x83168938
	sub_83168938(ctx, base);
	// stw r3,16(r24)
	PPC_STORE_U32(r24.u32 + 16, ctx.r3.u32);
	// lwz r3,8(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// bl 0x83168938
	sub_83168938(ctx, base);
	// stw r3,20(r24)
	PPC_STORE_U32(r24.u32 + 20, ctx.r3.u32);
	// lwz r3,12(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 12);
	// bl 0x83168938
	sub_83168938(ctx, base);
	// stw r3,24(r24)
	PPC_STORE_U32(r24.u32 + 24, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8317ABE8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_8317ABF0"))) PPC_WEAK_FUNC(sub_8317ABF0);
PPC_FUNC_IMPL(__imp__sub_8317ABF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b08
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r20,0
	r20.s64 = 0;
	// bl 0x8317a028
	sub_8317A028(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8317ad5c
	if (cr0.eq) goto loc_8317AD5C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r31,60
	ctx.r4.s64 = r31.s64 + 60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317a170
	sub_8317A170(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt 0x8317ad5c
	if (cr0.lt) goto loc_8317AD5C;
	// stw r4,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r4.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r4,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317a420
	sub_8317A420(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// cmpwi cr6,r22,-1
	cr6.compare<int32_t>(r22.s32, -1, xer);
	// blt cr6,0x8317ad5c
	if (cr6.lt) goto loc_8317AD5C;
	// lwz r21,84(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8317AC60:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x8317ad38
	if (cr6.lt) goto loc_8317AD38;
	// mr r25,r11
	r25.u64 = r11.u64;
	// addi r26,r31,44
	r26.s64 = r31.s64 + 44;
loc_8317AC74:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83179fb0
	sub_83179FB0(ctx, base);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lhz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U16(r26.u32 + 0);
	// neg r28,r11
	r28.s64 = -r11.s64;
	// cmpw cr6,r21,r10
	cr6.compare<int32_t>(r21.s32, ctx.r10.s32, xer);
	// lwz r23,48(r31)
	r23.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// beq cr6,0x8317aca4
	if (cr6.eq) goto loc_8317ACA4;
	// cmpwi cr6,r21,-1
	cr6.compare<int32_t>(r21.s32, -1, xer);
	// bne cr6,0x8317ad28
	if (!cr6.eq) goto loc_8317AD28;
loc_8317ACA4:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// mr r27,r28
	r27.u64 = r28.u64;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addi r29,r11,-1
	r29.s64 = r11.s64 + -1;
	// add r11,r29,r28
	r11.u64 = r29.u64 + r28.u64;
	// b 0x8317ace8
	goto loc_8317ACE8;
loc_8317ACBC:
	// cmpw cr6,r27,r29
	cr6.compare<int32_t>(r27.s32, r29.s32, xer);
	// bge cr6,0x8317ad14
	if (!cr6.lt) goto loc_8317AD14;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8317ace0
	if (!cr6.lt) goto loc_8317ACE0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x8317acd8
	if (!cr6.gt) goto loc_8317ACD8;
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
loc_8317ACD8:
	// mr r29,r30
	r29.u64 = r30.u64;
	// b 0x8317ace4
	goto loc_8317ACE4;
loc_8317ACE0:
	// addi r27,r30,1
	r27.s64 = r30.s64 + 1;
loc_8317ACE4:
	// add r11,r27,r29
	r11.u64 = r27.u64 + r29.u64;
loc_8317ACE8:
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// clrlwi r30,r11,16
	r30.u64 = r11.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8317a6e8
	sub_8317A6E8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8317acbc
	if (!cr0.eq) goto loc_8317ACBC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// b 0x8317ad18
	goto loc_8317AD18;
loc_8317AD14:
	// li r4,-1
	ctx.r4.s64 = -1;
loc_8317AD18:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bgt cr6,0x8317ad68
	if (cr6.gt) goto loc_8317AD68;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// add r20,r11,r20
	r20.u64 = r11.u64 + r20.u64;
loc_8317AD28:
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// ble cr6,0x8317ad38
	if (!cr6.gt) goto loc_8317AD38;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// b 0x8317ac74
	goto loc_8317AC74;
loc_8317AD38:
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// ble cr6,0x8317ad5c
	if (!cr6.gt) goto loc_8317AD5C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317a420
	sub_8317A420(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// cmpwi cr6,r22,-1
	cr6.compare<int32_t>(r22.s32, -1, xer);
	// bge cr6,0x8317ac60
	if (!cr6.lt) goto loc_8317AC60;
loc_8317AD5C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8317AD60:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b58
	return;
loc_8317AD68:
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x83168c98
	sub_83168C98(ctx, base);
	// subf r11,r28,r20
	r11.s64 = r20.s64 - r28.s64;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + r11.u64;
	// b 0x8317ad60
	goto loc_8317AD60;
}

__attribute__((alias("__imp__sub_8317AD80"))) PPC_WEAK_FUNC(sub_8317AD80);
PPC_FUNC_IMPL(__imp__sub_8317AD80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// ld r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// lwz r7,72(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// extsw r5,r10
	ctx.r5.s64 = ctx.r10.s32;
	// b 0x8317a840
	sub_8317A840(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317ADA0"))) PPC_WEAK_FUNC(sub_8317ADA0);
PPC_FUNC_IMPL(__imp__sub_8317ADA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// ld r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 48);
	// lhz r8,100(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 100);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// b 0x8317a8d0
	sub_8317A8D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317ADC0"))) PPC_WEAK_FUNC(sub_8317ADC0);
PPC_FUNC_IMPL(__imp__sub_8317ADC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// ld r5,64(r11)
	ctx.r5.u64 = PPC_LOAD_U64(r11.u32 + 64);
	// lhz r9,100(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 100);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8317aa30
	sub_8317AA30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317ADE0"))) PPC_WEAK_FUNC(sub_8317ADE0);
PPC_FUNC_IMPL(__imp__sub_8317ADE0) {
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
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lbz r11,0(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,67
	cr6.compare<uint32_t>(r11.u32, 67, xer);
	// bne cr6,0x8317ae28
	if (!cr6.eq) goto loc_8317AE28;
	// lbz r11,1(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// cmplwi cr6,r11,80
	cr6.compare<uint32_t>(r11.u32, 80, xer);
	// bne cr6,0x8317ae28
	if (!cr6.eq) goto loc_8317AE28;
	// lbz r11,2(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// cmplwi cr6,r11,75
	cr6.compare<uint32_t>(r11.u32, 75, xer);
	// bne cr6,0x8317ae28
	if (!cr6.eq) goto loc_8317AE28;
	// lbz r11,3(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(r11.u32, 32, xer);
	// beq cr6,0x8317ae30
	if (cr6.eq) goto loc_8317AE30;
loc_8317AE28:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8317b058
	goto loc_8317B058;
loc_8317AE30:
	// lbz r11,4(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8317ae64
	if (!cr6.eq) goto loc_8317AE64;
	// addi r11,r10,16
	r11.s64 = ctx.r10.s64 + 16;
	// li r8,25951
	ctx.r8.s64 = 25951;
	// li r9,2032
	ctx.r9.s64 = 2032;
loc_8317AE48:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// xor r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// mulli r8,r8,16661
	ctx.r8.s64 = ctx.r8.s64 * 16661;
	// stb r7,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne 0x8317ae48
	if (!cr0.eq) goto loc_8317AE48;
loc_8317AE64:
	// li r5,2048
	ctx.r5.s64 = 2048;
	// addi r4,r10,16
	ctx.r4.s64 = ctx.r10.s64 + 16;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x83169c28
	sub_83169C28(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8317ae28
	if (cr0.eq) goto loc_8317AE28;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-21968
	ctx.r5.s64 = r11.s64 + -21968;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831794e8
	sub_831794E8(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r10,-21980
	ctx.r5.s64 = ctx.r10.s64 + -21980;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831794e8
	sub_831794E8(ctx, base);
	// std r3,8(r30)
	PPC_STORE_U64(r30.u32 + 8, ctx.r3.u64);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-21988
	ctx.r5.s64 = r11.s64 + -21988;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831794e8
	sub_831794E8(ctx, base);
	// std r3,16(r30)
	PPC_STORE_U64(r30.u32 + 16, ctx.r3.u64);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-22000
	ctx.r5.s64 = r11.s64 + -22000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831794e8
	sub_831794E8(ctx, base);
	// std r3,24(r30)
	PPC_STORE_U64(r30.u32 + 24, ctx.r3.u64);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-22012
	ctx.r5.s64 = r11.s64 + -22012;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831794e8
	sub_831794E8(ctx, base);
	// std r3,32(r30)
	PPC_STORE_U64(r30.u32 + 32, ctx.r3.u64);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-22024
	ctx.r5.s64 = r11.s64 + -22024;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831794e8
	sub_831794E8(ctx, base);
	// std r3,40(r30)
	PPC_STORE_U64(r30.u32 + 40, ctx.r3.u64);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-22036
	ctx.r5.s64 = r11.s64 + -22036;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831794e8
	sub_831794E8(ctx, base);
	// std r3,48(r30)
	PPC_STORE_U64(r30.u32 + 48, ctx.r3.u64);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-22048
	ctx.r5.s64 = r11.s64 + -22048;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831794e8
	sub_831794E8(ctx, base);
	// std r3,56(r30)
	PPC_STORE_U64(r30.u32 + 56, ctx.r3.u64);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-22060
	ctx.r5.s64 = r11.s64 + -22060;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831794e8
	sub_831794E8(ctx, base);
	// std r3,64(r30)
	PPC_STORE_U64(r30.u32 + 64, ctx.r3.u64);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-22068
	ctx.r5.s64 = r11.s64 + -22068;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83179598
	sub_83179598(ctx, base);
	// sth r3,84(r30)
	PPC_STORE_U16(r30.u32 + 84, ctx.r3.u16);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-22080
	ctx.r5.s64 = r11.s64 + -22080;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83179598
	sub_83179598(ctx, base);
	// sth r3,86(r30)
	PPC_STORE_U16(r30.u32 + 86, ctx.r3.u16);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-22188
	ctx.r5.s64 = r11.s64 + -22188;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83179598
	sub_83179598(ctx, base);
	// sth r3,100(r30)
	PPC_STORE_U16(r30.u32 + 100, ctx.r3.u16);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-22088
	ctx.r5.s64 = r11.s64 + -22088;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83179598
	sub_83179598(ctx, base);
	// lis r11,-32244
	r11.s64 = -2113142784;
	// sth r3,102(r30)
	PPC_STORE_U16(r30.u32 + 102, ctx.r3.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,28528
	ctx.r5.s64 = r11.s64 + 28528;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831795f0
	sub_831795F0(ctx, base);
	// stw r3,104(r30)
	PPC_STORE_U32(r30.u32 + 104, ctx.r3.u32);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-22096
	ctx.r5.s64 = r11.s64 + -22096;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831795f0
	sub_831795F0(ctx, base);
	// stw r3,108(r30)
	PPC_STORE_U32(r30.u32 + 108, ctx.r3.u32);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-22104
	ctx.r5.s64 = r11.s64 + -22104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83179540
	sub_83179540(ctx, base);
	// stw r3,88(r30)
	PPC_STORE_U32(r30.u32 + 88, ctx.r3.u32);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-22112
	ctx.r5.s64 = r11.s64 + -22112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83179540
	sub_83179540(ctx, base);
	// stw r3,92(r30)
	PPC_STORE_U32(r30.u32 + 92, ctx.r3.u32);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-22120
	ctx.r5.s64 = r11.s64 + -22120;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83179540
	sub_83179540(ctx, base);
	// stw r3,96(r30)
	PPC_STORE_U32(r30.u32 + 96, ctx.r3.u32);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-22128
	ctx.r5.s64 = r11.s64 + -22128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83179540
	sub_83179540(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// stw r11,72(r30)
	PPC_STORE_U32(r30.u32 + 72, r11.u32);
	// bl 0x83169308
	sub_83169308(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8317B058:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8317B060"))) PPC_WEAK_FUNC(sub_8317B060);
PPC_FUNC_IMPL(__imp__sub_8317B060) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x83181fb8
	sub_83181FB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317B070"))) PPC_WEAK_FUNC(sub_8317B070);
PPC_FUNC_IMPL(__imp__sub_8317B070) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x83181fb8
	sub_83181FB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317B080"))) PPC_WEAK_FUNC(sub_8317B080);
PPC_FUNC_IMPL(__imp__sub_8317B080) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8317b090
	if (cr6.eq) goto loc_8317B090;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// b 0x8317b094
	goto loc_8317B094;
loc_8317B090:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8317B094:
	// b 0x83181fb8
	sub_83181FB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317B098"))) PPC_WEAK_FUNC(sub_8317B098);
PPC_FUNC_IMPL(__imp__sub_8317B098) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8317b0a8
	if (cr6.eq) goto loc_8317B0A8;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// b 0x8317b0ac
	goto loc_8317B0AC;
loc_8317B0A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8317B0AC:
	// b 0x83181e80
	sub_83181E80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317B0B0"))) PPC_WEAK_FUNC(sub_8317B0B0);
PPC_FUNC_IMPL(__imp__sub_8317B0B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,76(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317B0B8"))) PPC_WEAK_FUNC(sub_8317B0B8);
PPC_FUNC_IMPL(__imp__sub_8317B0B8) {
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
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// bl 0x83183d48
	sub_83183D48(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181480
	sub_83181480(ctx, base);
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

__attribute__((alias("__imp__sub_8317B100"))) PPC_WEAK_FUNC(sub_8317B100);
PPC_FUNC_IMPL(__imp__sub_8317B100) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8317b10c
	if (!cr6.eq) goto loc_8317B10C;
	// blr 
	return;
loc_8317B10C:
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317B118"))) PPC_WEAK_FUNC(sub_8317B118);
PPC_FUNC_IMPL(__imp__sub_8317B118) {
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
	// bl 0x8317b100
	sub_8317B100(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8317b158
	if (cr6.eq) goto loc_8317B158;
	// li r3,-12
	ctx.r3.s64 = -12;
	// bl 0x8317bf80
	sub_8317BF80(ctx, base);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-21952
	ctx.r3.s64 = r11.s64 + -21952;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8317b1a8
	goto loc_8317B1A8;
loc_8317B158:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// bl 0x83181d08
	sub_83181D08(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bge cr6,0x8317b174
	if (!cr6.lt) goto loc_8317B174;
loc_8317B16C:
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x8317b1a8
	goto loc_8317B1A8;
loc_8317B174:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83185c10
	sub_83185C10(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8317b16c
	if (!cr6.eq) goto loc_8317B16C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x8317b1a8
	if (!cr6.eq) goto loc_8317B1A8;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// beq cr6,0x8317b1a4
	if (cr6.eq) goto loc_8317B1A4;
	// cmpwi cr6,r30,6
	cr6.compare<int32_t>(r30.s32, 6, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x8317b1a8
	if (!cr6.eq) goto loc_8317B1A8;
loc_8317B1A4:
	// li r3,2
	ctx.r3.s64 = 2;
loc_8317B1A8:
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

__attribute__((alias("__imp__sub_8317B1C0"))) PPC_WEAK_FUNC(sub_8317B1C0);
PPC_FUNC_IMPL(__imp__sub_8317B1C0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,1324(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1324);
	// lwz r30,72(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8317b224
	if (!cr6.eq) goto loc_8317B224;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83184820
	sub_83184820(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8317b224
	if (cr6.eq) goto loc_8317B224;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x83184cc0
	sub_83184CC0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x83184b40
	sub_83184B40(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,1324(r31)
	PPC_STORE_U32(r31.u32 + 1324, r11.u32);
loc_8317B224:
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

__attribute__((alias("__imp__sub_8317B240"))) PPC_WEAK_FUNC(sub_8317B240);
PPC_FUNC_IMPL(__imp__sub_8317B240) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8317b100
	sub_8317B100(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8317b270
	if (cr6.eq) goto loc_8317B270;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-21880
	ctx.r3.s64 = r11.s64 + -21880;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
loc_8317B270:
	// lwz r29,72(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8317b2b8
	if (!cr6.eq) goto loc_8317B2B8;
	// li r5,0
	ctx.r5.s64 = 0;
loc_8317B280:
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_8317B288:
	// bl 0x83181fb8
	sub_83181FB8(ctx, base);
loc_8317B28C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r11,1320(r31)
	PPC_STORE_U32(r31.u32 + 1320, r11.u32);
	// stw r11,1324(r31)
	PPC_STORE_U32(r31.u32 + 1324, r11.u32);
loc_8317B29C:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_8317B2A0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x83184b40
	sub_83184B40(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
loc_8317B2B8:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8317b2c8
	if (!cr6.eq) goto loc_8317B2C8;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8317b280
	goto loc_8317B280;
loc_8317B2C8:
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bne cr6,0x8317b2f4
	if (!cr6.eq) goto loc_8317B2F4;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8317b2ec
	if (!cr6.eq) goto loc_8317B2EC;
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x8317b288
	goto loc_8317B288;
loc_8317B2EC:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8317b288
	goto loc_8317B288;
loc_8317B2F4:
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// bne cr6,0x8317b304
	if (!cr6.eq) goto loc_8317B304;
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x8317b280
	goto loc_8317B280;
loc_8317B304:
	// cmpwi cr6,r4,5
	cr6.compare<int32_t>(ctx.r4.s32, 5, xer);
	// bne cr6,0x8317b314
	if (!cr6.eq) goto loc_8317B314;
	// li r5,5
	ctx.r5.s64 = 5;
	// b 0x8317b280
	goto loc_8317B280;
loc_8317B314:
	// cmpwi cr6,r4,6
	cr6.compare<int32_t>(ctx.r4.s32, 6, xer);
	// bne cr6,0x8317b354
	if (!cr6.eq) goto loc_8317B354;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83181fb8
	sub_83181FB8(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// lwz r11,1332(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1332);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r30,1320(r31)
	PPC_STORE_U32(r31.u32 + 1320, r30.u32);
	// beq cr6,0x8317b364
	if (cr6.eq) goto loc_8317B364;
	// lwz r9,1328(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 1328);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r10,1324(r31)
	PPC_STORE_U32(r31.u32 + 1324, ctx.r10.u32);
	// b 0x8317b29c
	goto loc_8317B29C;
loc_8317B354:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-21912
	ctx.r3.s64 = r11.s64 + -21912;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// b 0x8317b28c
	goto loc_8317B28C;
loc_8317B364:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// li r3,30000
	ctx.r3.s64 = 30000;
	// bl 0x83184cc0
	sub_83184CC0(ctx, base);
	// stw r30,1324(r31)
	PPC_STORE_U32(r31.u32 + 1324, r30.u32);
	// b 0x8317b2a0
	goto loc_8317B2A0;
}

__attribute__((alias("__imp__sub_8317B380"))) PPC_WEAK_FUNC(sub_8317B380);
PPC_FUNC_IMPL(__imp__sub_8317B380) {
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
	// li r28,0
	r28.s64 = 0;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r29,1
	r29.s64 = 1;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// bl 0x8317b100
	sub_8317B100(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8317b3c8
	if (cr6.eq) goto loc_8317B3C8;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-21792
	ctx.r3.s64 = r11.s64 + -21792;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_8317B3C8:
	// lwz r3,72(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8317b410
	if (cr6.eq) goto loc_8317B410;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x83185728
	sub_83185728(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8317b3fc
	if (cr6.eq) goto loc_8317B3FC;
	// li r3,-309
	ctx.r3.s64 = -309;
	// bl 0x8317bf80
	sub_8317BF80(ctx, base);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-21832
	ctx.r3.s64 = r11.s64 + -21832;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
loc_8317B3FC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x8317b410
	if (!cr6.lt) goto loc_8317B410;
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
loc_8317B410:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8317B418"))) PPC_WEAK_FUNC(sub_8317B418);
PPC_FUNC_IMPL(__imp__sub_8317B418) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// b 0x83182058
	sub_83182058(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317B420"))) PPC_WEAK_FUNC(sub_8317B420);
PPC_FUNC_IMPL(__imp__sub_8317B420) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// bl 0x8317b100
	sub_8317B100(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8317b45c
	if (cr6.eq) goto loc_8317B45C;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-21748
	ctx.r3.s64 = r11.s64 + -21748;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8317B45C:
	// li r4,71
	ctx.r4.s64 = 71;
	// lwz r3,72(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// bl 0x83181fb8
	sub_83181FB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317B478"))) PPC_WEAK_FUNC(sub_8317B478);
PPC_FUNC_IMPL(__imp__sub_8317B478) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// bl 0x8317b100
	sub_8317B100(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8317b4b4
	if (cr6.eq) goto loc_8317B4B4;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-21696
	ctx.r3.s64 = r11.s64 + -21696;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8317B4B4:
	// lwz r3,72(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317B4C8"))) PPC_WEAK_FUNC(sub_8317B4C8);
PPC_FUNC_IMPL(__imp__sub_8317B4C8) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// bl 0x8317b100
	sub_8317B100(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8317b500
	if (cr6.eq) goto loc_8317B500;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-21612
	ctx.r3.s64 = r11.s64 + -21612;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8317B500:
	// lwz r3,72(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// bl 0x8318d960
	sub_8318D960(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8317b51c
	if (cr6.eq) goto loc_8317B51C;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-21652
	ctx.r3.s64 = r11.s64 + -21652;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
loc_8317B51C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317B530"))) PPC_WEAK_FUNC(sub_8317B530);
PPC_FUNC_IMPL(__imp__sub_8317B530) {
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
	// bl 0x8317b118
	sub_8317B118(ctx, base);
	// lwz r11,1276(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1276);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8317b588
	if (!cr6.eq) goto loc_8317B588;
	// lwz r11,1280(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1280);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8317b588
	if (!cr6.eq) goto loc_8317B588;
	// lwz r11,1292(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1292);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x8317b574
	if (cr6.eq) goto loc_8317B574;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x8317b588
	if (!cr6.eq) goto loc_8317B588;
loc_8317B574:
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8317b584
	if (cr6.eq) goto loc_8317B584;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x8317b588
	if (!cr6.eq) goto loc_8317B588;
loc_8317B584:
	// li r3,2
	ctx.r3.s64 = 2;
loc_8317B588:
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

__attribute__((alias("__imp__sub_8317B5A0"))) PPC_WEAK_FUNC(sub_8317B5A0);
PPC_FUNC_IMPL(__imp__sub_8317B5A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,6
	r11.s64 = 393216;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r11,r11,38188
	r11.u64 = r11.u64 | 38188;
	// ori r10,r10,15464
	ctx.r10.u64 = ctx.r10.u64 | 15464;
	// li r9,8192
	ctx.r9.s64 = 8192;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r3,r11,8192
	ctx.r3.s64 = r11.s64 + 8192;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317B5D8"))) PPC_WEAK_FUNC(sub_8317B5D8);
PPC_FUNC_IMPL(__imp__sub_8317B5D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r11,1212(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1212);
	// addi r4,r11,192
	ctx.r4.s64 = r11.s64 + 192;
	// b 0x8317b418
	sub_8317B418(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317B600"))) PPC_WEAK_FUNC(sub_8317B600);
PPC_FUNC_IMPL(__imp__sub_8317B600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r3,1216(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 1216);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317B618"))) PPC_WEAK_FUNC(sub_8317B618);
PPC_FUNC_IMPL(__imp__sub_8317B618) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31941
	r11.s64 = -2093285376;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,-24012
	r11.s64 = r11.s64 + -24012;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317B630"))) PPC_WEAK_FUNC(sub_8317B630);
PPC_FUNC_IMPL(__imp__sub_8317B630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31941
	r11.s64 = -2093285376;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,-24012
	r11.s64 = r11.s64 + -24012;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317B648"))) PPC_WEAK_FUNC(sub_8317B648);
PPC_FUNC_IMPL(__imp__sub_8317B648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31941
	r11.s64 = -2093285376;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,-24012
	r11.s64 = r11.s64 + -24012;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317B660"))) PPC_WEAK_FUNC(sub_8317B660);
PPC_FUNC_IMPL(__imp__sub_8317B660) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x8317b630
	sub_8317B630(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8317b694
	if (!cr6.eq) goto loc_8317B694;
loc_8317B680:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8317B694:
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8317b680
	if (!cr6.eq) goto loc_8317B680;
	// lwz r11,32(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317B6C0"))) PPC_WEAK_FUNC(sub_8317B6C0);
PPC_FUNC_IMPL(__imp__sub_8317B6C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8317b5a0
	sub_8317B5A0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317B6F0"))) PPC_WEAK_FUNC(sub_8317B6F0);
PPC_FUNC_IMPL(__imp__sub_8317B6F0) {
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
	// rlwinm r11,r4,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r30
	r31.u64 = r11.u64 + r30.u64;
	// lwz r28,1204(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 1204);
	// bl 0x8317b5d8
	sub_8317B5D8(ctx, base);
	// lwz r11,1208(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1208);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8317b740
	if (!cr6.eq) goto loc_8317B740;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r29,192
	ctx.r4.s64 = r29.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8317b418
	sub_8317B418(ctx, base);
loc_8317B740:
	// stw r29,1212(r31)
	PPC_STORE_U32(r31.u32 + 1212, r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8317B750"))) PPC_WEAK_FUNC(sub_8317B750);
PPC_FUNC_IMPL(__imp__sub_8317B750) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8317b600
	sub_8317B600(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317B758"))) PPC_WEAK_FUNC(sub_8317B758);
PPC_FUNC_IMPL(__imp__sub_8317B758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// bl 0x8317b618
	sub_8317B618(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x8317b630
	sub_8317B630(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8317b7b0
	if (cr6.eq) goto loc_8317B7B0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8317b7a4
	if (!cr6.eq) goto loc_8317B7A4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8317b7a4
	if (cr6.eq) goto loc_8317B7A4;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8317B7A4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_8317B7B0:
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

__attribute__((alias("__imp__sub_8317B7C8"))) PPC_WEAK_FUNC(sub_8317B7C8);
PPC_FUNC_IMPL(__imp__sub_8317B7C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// bl 0x8317b618
	sub_8317B618(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x8317b630
	sub_8317B630(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8317b81c
	if (cr6.eq) goto loc_8317B81C;
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8317b81c
	if (cr6.eq) goto loc_8317B81C;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, r11.u32);
	// bne 0x8317b81c
	if (!cr0.eq) goto loc_8317B81C;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8317b81c
	if (cr6.eq) goto loc_8317B81C;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8317B81C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317B830"))) PPC_WEAK_FUNC(sub_8317B830);
PPC_FUNC_IMPL(__imp__sub_8317B830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x8317b630
	sub_8317B630(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8317b874
	if (cr6.eq) goto loc_8317B874;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8317b874
	if (cr6.eq) goto loc_8317B874;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8317B874:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317B888"))) PPC_WEAK_FUNC(sub_8317B888);
PPC_FUNC_IMPL(__imp__sub_8317B888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// bl 0x8317b630
	sub_8317B630(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8317b8c8
	if (cr6.eq) goto loc_8317B8C8;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8317b8c8
	if (cr6.eq) goto loc_8317B8C8;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8317B8C8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317B8D8"))) PPC_WEAK_FUNC(sub_8317B8D8);
PPC_FUNC_IMPL(__imp__sub_8317B8D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// bl 0x8317b630
	sub_8317B630(ctx, base);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8317b910
	if (cr6.eq) goto loc_8317B910;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8317b910
	if (cr6.eq) goto loc_8317B910;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8317b910
	if (cr6.eq) goto loc_8317B910;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8317B910:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317B920"))) PPC_WEAK_FUNC(sub_8317B920);
PPC_FUNC_IMPL(__imp__sub_8317B920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// bl 0x8317b660
	sub_8317B660(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8317b964
	if (!cr6.eq) goto loc_8317B964;
	// lwz r11,8(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8317b964
	if (cr6.eq) goto loc_8317B964;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8317b964
	if (cr6.eq) goto loc_8317B964;
	// lwz r4,20(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// lwz r3,32(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8317B964:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317B978"))) PPC_WEAK_FUNC(sub_8317B978);
PPC_FUNC_IMPL(__imp__sub_8317B978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// bl 0x8317b660
	sub_8317B660(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8317b9c0
	if (!cr6.eq) goto loc_8317B9C0;
	// lwz r3,32(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// lwz r11,8(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8317b9c0
	if (cr6.eq) goto loc_8317B9C0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8317b9c0
	if (cr6.eq) goto loc_8317B9C0;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8317b9c0
	if (cr6.eq) goto loc_8317B9C0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8317B9C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317B9D0"))) PPC_WEAK_FUNC(sub_8317B9D0);
PPC_FUNC_IMPL(__imp__sub_8317B9D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8317b660
	sub_8317B660(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8317ba04
	if (cr6.eq) goto loc_8317BA04;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8317BA04:
	// lwz r11,8(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r3,32(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8317ba2c
	if (cr6.eq) goto loc_8317BA2C;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8317ba2c
	if (cr6.eq) goto loc_8317BA2C;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_8317BA2C:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317BA40"))) PPC_WEAK_FUNC(sub_8317BA40);
PPC_FUNC_IMPL(__imp__sub_8317BA40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// bl 0x8317b660
	sub_8317B660(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8317ba80
	if (!cr6.eq) goto loc_8317BA80;
	// lwz r11,8(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8317ba80
	if (cr6.eq) goto loc_8317BA80;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8317ba80
	if (cr6.eq) goto loc_8317BA80;
	// lwz r3,32(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8317BA80:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317BA90"))) PPC_WEAK_FUNC(sub_8317BA90);
PPC_FUNC_IMPL(__imp__sub_8317BA90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// bl 0x8317b660
	sub_8317B660(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8317bad0
	if (!cr6.eq) goto loc_8317BAD0;
	// lwz r11,8(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8317bad0
	if (cr6.eq) goto loc_8317BAD0;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8317bad0
	if (cr6.eq) goto loc_8317BAD0;
	// lwz r3,32(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8317BAD0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317BAE0"))) PPC_WEAK_FUNC(sub_8317BAE0);
PPC_FUNC_IMPL(__imp__sub_8317BAE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// bl 0x8317b660
	sub_8317B660(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8317bb20
	if (!cr6.eq) goto loc_8317BB20;
	// lwz r11,8(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8317bb20
	if (cr6.eq) goto loc_8317BB20;
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8317bb20
	if (cr6.eq) goto loc_8317BB20;
	// lwz r3,32(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8317BB20:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317BB30"))) PPC_WEAK_FUNC(sub_8317BB30);
PPC_FUNC_IMPL(__imp__sub_8317BB30) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// bl 0x8317b630
	sub_8317B630(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8317bbc0
	if (cr6.eq) goto loc_8317BBC0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8317b758
	sub_8317B758(ctx, base);
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// li r25,1
	r25.s64 = 1;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// add r31,r11,r31
	r31.u64 = r11.u64 + r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r30,1188(r31)
	PPC_STORE_U32(r31.u32 + 1188, r30.u32);
	// stw r27,1192(r31)
	PPC_STORE_U32(r31.u32 + 1192, r27.u32);
	// stw r28,1196(r31)
	PPC_STORE_U32(r31.u32 + 1196, r28.u32);
	// stw r29,1200(r31)
	PPC_STORE_U32(r31.u32 + 1200, r29.u32);
	// stw r26,1212(r31)
	PPC_STORE_U32(r31.u32 + 1212, r26.u32);
	// stw r25,1208(r31)
	PPC_STORE_U32(r31.u32 + 1208, r25.u32);
	// bl 0x8317b830
	sub_8317B830(ctx, base);
	// cmpw cr6,r3,r29
	cr6.compare<int32_t>(ctx.r3.s32, r29.s32, xer);
	// ble cr6,0x8317bbcc
	if (!cr6.gt) goto loc_8317BBCC;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-21480
	ctx.r3.s64 = r11.s64 + -21480;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
loc_8317BBC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b6c
	return;
loc_8317BBCC:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8313d0e0
	sub_8313D0E0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8317bc04
	if (!cr6.eq) goto loc_8317BC04;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-21520
	ctx.r3.s64 = r11.s64 + -21520;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b6c
	return;
loc_8317BC04:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,1204(r31)
	PPC_STORE_U32(r31.u32 + 1204, r11.u32);
	// bl 0x8317b888
	sub_8317B888(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8317bc38
	if (!cr6.eq) goto loc_8317BC38;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-21564
	ctx.r3.s64 = r11.s64 + -21564;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b6c
	return;
loc_8317BC38:
	// stw r3,1216(r31)
	PPC_STORE_U32(r31.u32 + 1216, ctx.r3.u32);
	// stw r25,1184(r31)
	PPC_STORE_U32(r31.u32 + 1184, r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_8317BC48"))) PPC_WEAK_FUNC(sub_8317BC48);
PPC_FUNC_IMPL(__imp__sub_8317BC48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// rlwinm r11,r4,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r8,r11,1184
	ctx.r8.s64 = r11.s64 + 1184;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// lwz r31,20(r8)
	r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// bl 0x8317b660
	sub_8317B660(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8317bc9c
	if (!cr6.eq) goto loc_8317BC9C;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x8317b978
	sub_8317B978(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8317BC9C:
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

__attribute__((alias("__imp__sub_8317BCB0"))) PPC_WEAK_FUNC(sub_8317BCB0);
PPC_FUNC_IMPL(__imp__sub_8317BCB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8317b660
	sub_8317B660(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8317bd20
	if (!cr6.eq) goto loc_8317BD20;
	// lwz r28,32(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r29,20(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8317bd20
	if (cr6.eq) goto loc_8317BD20;
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317b978
	sub_8317B978(ctx, base);
	// li r27,0
	r27.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r27.u32);
	// bl 0x8317b8d8
	sub_8317B8D8(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r27,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r27.u32);
	// bl 0x8317b7c8
	sub_8317B7C8(ctx, base);
loc_8317BD20:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8317BD28"))) PPC_WEAK_FUNC(sub_8317BD28);
PPC_FUNC_IMPL(__imp__sub_8317BD28) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8317b6f0
	sub_8317B6F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317BD38"))) PPC_WEAK_FUNC(sub_8317BD38);
PPC_FUNC_IMPL(__imp__sub_8317BD38) {
	PPC_FUNC_PROLOGUE();
	// b 0x8317bd28
	sub_8317BD28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317BD40"))) PPC_WEAK_FUNC(sub_8317BD40);
PPC_FUNC_IMPL(__imp__sub_8317BD40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31930
	r11.s64 = -2092564480;
	// addi r3,r11,-21344
	ctx.r3.s64 = r11.s64 + -21344;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317BD50"))) PPC_WEAK_FUNC(sub_8317BD50);
PPC_FUNC_IMPL(__imp__sub_8317BD50) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x83185b00
	sub_83185B00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317BD58"))) PPC_WEAK_FUNC(sub_8317BD58);
PPC_FUNC_IMPL(__imp__sub_8317BD58) {
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
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-21312
	ctx.r6.s64 = r11.s64 + -21312;
	// lis r11,-31976
	r11.s64 = -2095579136;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r11,26776
	ctx.r4.s64 = r11.s64 + 26776;
	// bl 0x83185968
	sub_83185968(ctx, base);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-21356
	ctx.r5.s64 = r11.s64 + -21356;
	// lis r11,-31976
	r11.s64 = -2095579136;
	// addi r3,r11,27536
	ctx.r3.s64 = r11.s64 + 27536;
	// bl 0x83185a08
	sub_83185A08(ctx, base);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-21380
	ctx.r5.s64 = r11.s64 + -21380;
	// lis r11,-31976
	r11.s64 = -2095579136;
	// addi r3,r11,27696
	ctx.r3.s64 = r11.s64 + 27696;
	// bl 0x831859c0
	sub_831859C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317BDC0"))) PPC_WEAK_FUNC(sub_8317BDC0);
PPC_FUNC_IMPL(__imp__sub_8317BDC0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8317bd40
	sub_8317BD40(ctx, base);
	// li r5,10864
	ctx.r5.s64 = 10864;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83186208
	sub_83186208(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// beq cr6,0x8317be2c
	if (cr6.eq) goto loc_8317BE2C;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// b 0x8317be44
	goto loc_8317BE44;
loc_8317BE2C:
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// lfs f0,-20680(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -20680);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
loc_8317BE44:
	// stw r10,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// stw r11,10860(r31)
	PPC_STORE_U32(r31.u32 + 10860, r11.u32);
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

__attribute__((alias("__imp__sub_8317BE68"))) PPC_WEAK_FUNC(sub_8317BE68);
PPC_FUNC_IMPL(__imp__sub_8317BE68) {
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
	// bl 0x8317bd40
	sub_8317BD40(ctx, base);
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317BE90"))) PPC_WEAK_FUNC(sub_8317BE90);
PPC_FUNC_IMPL(__imp__sub_8317BE90) {
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
	// bl 0x8317bd40
	sub_8317BD40(ctx, base);
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317BEB8"))) PPC_WEAK_FUNC(sub_8317BEB8);
PPC_FUNC_IMPL(__imp__sub_8317BEB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r23{};
	PPCRegister r24{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82bd59c0
	sub_82BD59C0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8312da48
	sub_8312DA48(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8317bf00
	if (cr6.eq) goto loc_8317BF00;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8317bf00
	if (cr6.eq) goto loc_8317BF00;
	// lwz r31,116(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_8317BF00:
	// cmplwi cr6,r31,5
	cr6.compare<uint32_t>(r31.u32, 5, xer);
	// bgt cr6,0x8317bf60
	if (cr6.gt) goto loc_8317BF60;
	// lis r12,-31976
	r12.s64 = -2095579136;
	// addi r12,r12,-16608
	r12.s64 = r12.s64 + -16608;
	// rlwinm r0,r31,2,0,29
	r0.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r31.u64) {
	case 0:
		goto loc_8317BF60;
	case 1:
		goto loc_8317BF38;
	case 2:
		goto loc_8317BF40;
	case 3:
		goto loc_8317BF48;
	case 4:
		goto loc_8317BF50;
	case 5:
		goto loc_8317BF58;
	default:
		__builtin_unreachable();
	}
	// lwz r24,-16544(r23)
	r24.u64 = PPC_LOAD_U32(r23.u32 + -16544);
	// lwz r24,-16584(r23)
	r24.u64 = PPC_LOAD_U32(r23.u32 + -16584);
	// lwz r24,-16576(r23)
	r24.u64 = PPC_LOAD_U32(r23.u32 + -16576);
	// lwz r24,-16568(r23)
	r24.u64 = PPC_LOAD_U32(r23.u32 + -16568);
	// lwz r24,-16560(r23)
	r24.u64 = PPC_LOAD_U32(r23.u32 + -16560);
	// lwz r24,-16552(r23)
	r24.u64 = PPC_LOAD_U32(r23.u32 + -16552);
loc_8317BF38:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8317bf64
	goto loc_8317BF64;
loc_8317BF40:
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x8317bf64
	goto loc_8317BF64;
loc_8317BF48:
	// li r3,8
	ctx.r3.s64 = 8;
	// b 0x8317bf64
	goto loc_8317BF64;
loc_8317BF50:
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x8317bf64
	goto loc_8317BF64;
loc_8317BF58:
	// li r3,32
	ctx.r3.s64 = 32;
	// b 0x8317bf64
	goto loc_8317BF64;
loc_8317BF60:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8317BF64:
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

__attribute__((alias("__imp__sub_8317BF80"))) PPC_WEAK_FUNC(sub_8317BF80);
PPC_FUNC_IMPL(__imp__sub_8317BF80) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// bl 0x8317bd40
	sub_8317BD40(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stw r10,104(r11)
	PPC_STORE_U32(r11.u32 + 104, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317BFB0"))) PPC_WEAK_FUNC(sub_8317BFB0);
PPC_FUNC_IMPL(__imp__sub_8317BFB0) {
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
	// bl 0x8318fdf8
	sub_8318FDF8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317BFD8"))) PPC_WEAK_FUNC(sub_8317BFD8);
PPC_FUNC_IMPL(__imp__sub_8317BFD8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8317c010
	if (cr6.eq) goto loc_8317C010;
	// mr r29,r30
	r29.u64 = r30.u64;
	// bl 0x8317b478
	sub_8317B478(ctx, base);
	// lis r11,-31930
	r11.s64 = -2092564480;
	// stw r30,-21352(r11)
	PPC_STORE_U32(r11.u32 + -21352, r30.u32);
	// lis r11,-31930
	r11.s64 = -2092564480;
	// stw r3,-10480(r11)
	PPC_STORE_U32(r11.u32 + -10480, ctx.r3.u32);
	// b 0x8317c028
	goto loc_8317C028;
loc_8317C010:
	// lis r10,-31930
	ctx.r10.s64 = -2092564480;
	// li r11,0
	r11.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// stw r11,-21352(r10)
	PPC_STORE_U32(ctx.r10.u32 + -21352, r11.u32);
	// lis r10,-31930
	ctx.r10.s64 = -2092564480;
	// stw r11,-10480(r10)
	PPC_STORE_U32(ctx.r10.u32 + -10480, r11.u32);
loc_8317C028:
	// lis r11,-31941
	r11.s64 = -2093285376;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r11,-23992
	r30.s64 = r11.s64 + -23992;
	// beq cr6,0x8317c054
	if (cr6.eq) goto loc_8317C054;
	// lwz r11,68(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r11,15
	cr6.compare<int32_t>(r11.s32, 15, xer);
	// stwx r31,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + r30.u32, r31.u32);
	// bge cr6,0x8317c054
	if (!cr6.lt) goto loc_8317C054;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,68(r30)
	PPC_STORE_U32(r30.u32 + 68, r11.u32);
loc_8317C054:
	// lis r11,-256
	r11.s64 = -16777216;
	// ori r5,r11,3861
	ctx.r5.u64 = r11.u64 | 3861;
	// cmpw cr6,r31,r5
	cr6.compare<int32_t>(r31.s32, ctx.r5.s32, xer);
	// bgt cr6,0x8317c0ec
	if (cr6.gt) goto loc_8317C0EC;
	// beq cr6,0x8317c0e0
	if (cr6.eq) goto loc_8317C0E0;
	// lis r11,-256
	r11.s64 = -16777216;
	// ori r5,r11,3076
	ctx.r5.u64 = r11.u64 | 3076;
	// cmpw cr6,r31,r5
	cr6.compare<int32_t>(r31.s32, ctx.r5.s32, xer);
	// bgt cr6,0x8317c0c4
	if (cr6.gt) goto loc_8317C0C4;
	// beq cr6,0x8317c0b8
	if (cr6.eq) goto loc_8317C0B8;
	// lis r11,-256
	r11.s64 = -16777216;
	// ori r11,r11,1032
	r11.u64 = r11.u64 | 1032;
	// subf. r11,r11,r31
	r11.s64 = r31.s64 - r11.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8317c130
	if (cr0.eq) goto loc_8317C130;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// beq cr6,0x8317c130
	if (cr6.eq) goto loc_8317C130;
loc_8317C094:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-19956
	ctx.r4.s64 = r11.s64 + -19956;
loc_8317C09C:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_8317C0A0:
	// addi r3,r30,72
	ctx.r3.s64 = r30.s64 + 72;
	// bl 0x831b1630
	sub_831B1630(ctx, base);
	// addi r3,r30,72
	ctx.r3.s64 = r30.s64 + 72;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_8317C0B8:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-20088
	ctx.r4.s64 = r11.s64 + -20088;
	// b 0x8317c0a0
	goto loc_8317C0A0;
loc_8317C0C4:
	// lis r11,-256
	r11.s64 = -16777216;
	// ori r5,r11,3844
	ctx.r5.u64 = r11.u64 | 3844;
	// cmpw cr6,r31,r5
	cr6.compare<int32_t>(r31.s32, ctx.r5.s32, xer);
	// bne cr6,0x8317c094
	if (!cr6.eq) goto loc_8317C094;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-20184
	ctx.r4.s64 = r11.s64 + -20184;
	// b 0x8317c0a0
	goto loc_8317C0A0;
loc_8317C0E0:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-20296
	ctx.r4.s64 = r11.s64 + -20296;
	// b 0x8317c0a0
	goto loc_8317C0A0;
loc_8317C0EC:
	// lis r11,-256
	r11.s64 = -16777216;
	// ori r5,r11,3871
	ctx.r5.u64 = r11.u64 | 3871;
	// cmpw cr6,r31,r5
	cr6.compare<int32_t>(r31.s32, ctx.r5.s32, xer);
	// bgt cr6,0x8317c1a4
	if (cr6.gt) goto loc_8317C1A4;
	// beq cr6,0x8317c198
	if (cr6.eq) goto loc_8317C198;
	// lis r11,-256
	r11.s64 = -16777216;
	// ori r11,r11,3863
	r11.u64 = r11.u64 | 3863;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x8317c094
	if (cr6.lt) goto loc_8317C094;
	// lis r11,-256
	r11.s64 = -16777216;
	// ori r11,r11,3864
	r11.u64 = r11.u64 | 3864;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// ble cr6,0x8317c13c
	if (!cr6.gt) goto loc_8317C13C;
	// lis r11,-256
	r11.s64 = -16777216;
	// ori r11,r11,3868
	r11.u64 = r11.u64 | 3868;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// bne cr6,0x8317c094
	if (!cr6.eq) goto loc_8317C094;
loc_8317C130:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-20384
	ctx.r4.s64 = r11.s64 + -20384;
	// b 0x8317c09c
	goto loc_8317C09C;
loc_8317C13C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8317c168
	if (cr6.eq) goto loc_8317C168;
	// lwz r11,208(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 208);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8317c168
	if (!cr6.eq) goto loc_8317C168;
	// lwz r6,216(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 216);
	// lwz r7,220(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 220);
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x8317c168
	if (!cr6.gt) goto loc_8317C168;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bgt cr6,0x8317c174
	if (cr6.gt) goto loc_8317C174;
loc_8317C168:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-20480
	ctx.r4.s64 = r11.s64 + -20480;
	// b 0x8317c09c
	goto loc_8317C09C;
loc_8317C174:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r30,72
	ctx.r3.s64 = r30.s64 + 72;
	// addi r4,r11,-20584
	ctx.r4.s64 = r11.s64 + -20584;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x831b1630
	sub_831B1630(ctx, base);
	// addi r3,r30,72
	ctx.r3.s64 = r30.s64 + 72;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_8317C198:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-20656
	ctx.r4.s64 = r11.s64 + -20656;
	// b 0x8317c0a0
	goto loc_8317C0A0;
loc_8317C1A4:
	// cmpwi cr6,r31,-3
	cr6.compare<int32_t>(r31.s32, -3, xer);
	// blt cr6,0x8317c094
	if (cr6.lt) goto loc_8317C094;
	// cmpwi cr6,r31,-2
	cr6.compare<int32_t>(r31.s32, -2, xer);
	// bgt cr6,0x8317c094
	if (cr6.gt) goto loc_8317C094;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-20676
	ctx.r4.s64 = r11.s64 + -20676;
	// b 0x8317c09c
	goto loc_8317C09C;
}

__attribute__((alias("__imp__sub_8317C1C0"))) PPC_WEAK_FUNC(sub_8317C1C0);
PPC_FUNC_IMPL(__imp__sub_8317C1C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8317c1ec
	if (cr6.eq) goto loc_8317C1EC;
	// bl 0x8317b478
	sub_8317B478(ctx, base);
	// bl 0x83185870
	sub_83185870(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8317C1EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83185870
	sub_83185870(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317C208"))) PPC_WEAK_FUNC(sub_8317C208);
PPC_FUNC_IMPL(__imp__sub_8317C208) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x8317b478
	sub_8317B478(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x831842a0
	sub_831842A0(ctx, base);
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

__attribute__((alias("__imp__sub_8317C250"))) PPC_WEAK_FUNC(sub_8317C250);
PPC_FUNC_IMPL(__imp__sub_8317C250) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r4,27
	ctx.r4.s64 = 27;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8317b080
	sub_8317B080(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,7
	ctx.r4.s64 = 7;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8317b080
	sub_8317B080(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317beb8
	sub_8317BEB8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8317c2cc
	if (cr6.eq) goto loc_8317C2CC;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x8317c2cc
	if (cr6.eq) goto loc_8317C2CC;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x8317c2c4
	if (cr6.eq) goto loc_8317C2C4;
	// cmpwi cr6,r3,8
	cr6.compare<int32_t>(ctx.r3.s32, 8, xer);
	// beq cr6,0x8317c2c4
	if (cr6.eq) goto loc_8317C2C4;
	// li r5,8
	ctx.r5.s64 = 8;
	// b 0x8317c2d0
	goto loc_8317C2D0;
loc_8317C2C4:
	// li r5,32
	ctx.r5.s64 = 32;
	// b 0x8317c2d0
	goto loc_8317C2D0;
loc_8317C2CC:
	// li r5,40
	ctx.r5.s64 = 40;
loc_8317C2D0:
	// li r4,13
	ctx.r4.s64 = 13;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83186cc0
	sub_83186CC0(ctx, base);
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

__attribute__((alias("__imp__sub_8317C2F0"))) PPC_WEAK_FUNC(sub_8317C2F0);
PPC_FUNC_IMPL(__imp__sub_8317C2F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31930
	r28.s64 = -2092564480;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r27,r11,-14608
	r27.s64 = r11.s64 + -14608;
	// lwz r10,-21356(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + -21356);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8317c330
	if (cr6.eq) goto loc_8317C330;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r4,r27,4
	ctx.r4.s64 = r27.s64 + 4;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,-21356(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + -21356);
loc_8317C330:
	// bl 0x8317bd40
	sub_8317BD40(ctx, base);
	// lis r9,-31941
	ctx.r9.s64 = -2093285376;
	// lwz r11,-23664(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23664);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,-23664(r9)
	PPC_STORE_U32(ctx.r9.u32 + -23664, r11.u32);
	// bne cr6,0x8317c404
	if (!cr6.eq) goto loc_8317C404;
	// li r29,0
	r29.s64 = 0;
	// addi r31,r3,108
	r31.s64 = ctx.r3.s64 + 108;
	// li r30,8
	r30.s64 = 8;
loc_8317C358:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8317c370
	if (!cr6.eq) goto loc_8317C370;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317e200
	sub_8317E200(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_8317C370:
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// addi r31,r31,1344
	r31.s64 = r31.s64 + 1344;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8317c358
	if (!cr6.eq) goto loc_8317C358;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bne cr6,0x8317c3a4
	if (!cr6.eq) goto loc_8317C3A4;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831862a8
	sub_831862A8(ctx, base);
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831862a8
	sub_831862A8(ctx, base);
loc_8317C3A4:
	// bl 0x831859b0
	sub_831859B0(ctx, base);
	// bl 0x83185a40
	sub_83185A40(ctx, base);
	// bl 0x831859f8
	sub_831859F8(ctx, base);
	// bl 0x8317f548
	sub_8317F548(ctx, base);
	// bl 0x83139850
	sub_83139850(ctx, base);
	// bl 0x8317bfb0
	sub_8317BFB0(ctx, base);
	// bl 0x83133978
	sub_83133978(ctx, base);
	// bl 0x82e71e58
	sub_82E71E58(ctx, base);
	// bl 0x8313d628
	sub_8313D628(ctx, base);
	// bl 0x8313bd28
	sub_8313BD28(ctx, base);
	// bl 0x8313ca68
	sub_8313CA68(ctx, base);
	// li r31,1024
	r31.s64 = 1024;
loc_8317C3D4:
	// bl 0x83185ad0
	sub_83185AD0(ctx, base);
	// bl 0x83185a50
	sub_83185A50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83185a80
	sub_83185A80(ctx, base);
	// bl 0x83185ae0
	sub_83185AE0(ctx, base);
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8317c3d4
	if (!cr6.eq) goto loc_8317C3D4;
	// bl 0x83185928
	sub_83185928(ctx, base);
	// bl 0x8317d5b8
	sub_8317D5B8(ctx, base);
	// bl 0x83185a90
	sub_83185A90(ctx, base);
	// lwz r10,-21356(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + -21356);
loc_8317C404:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8317c424
	if (cr6.eq) goto loc_8317C424;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r4,r27,108
	ctx.r4.s64 = r27.s64 + 108;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8317C424:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8317C430"))) PPC_WEAK_FUNC(sub_8317C430);
PPC_FUNC_IMPL(__imp__sub_8317C430) {
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
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r10,-19888
	ctx.r3.s64 = ctx.r10.s64 + -19888;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// li r4,8144
	ctx.r4.s64 = 8144;
	// ld r10,-20692(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + -20692);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x8318fc40
	sub_8318FC40(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8317c488
	if (cr6.eq) goto loc_8317C488;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-19940
	ctx.r3.s64 = r11.s64 + -19940;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8317C488:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831900d8
	sub_831900D8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8317c4b0
	if (cr6.eq) goto loc_8317C4B0;
	// li r3,-301
	ctx.r3.s64 = -301;
	// bl 0x8317bf80
	sub_8317BF80(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8317C4B0:
	// lis r11,-31976
	r11.s64 = -2095579136;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-16424
	ctx.r4.s64 = r11.s64 + -16424;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8318ffa8
	sub_8318FFA8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8317c4e4
	if (cr6.eq) goto loc_8317C4E4;
	// li r3,-303
	ctx.r3.s64 = -303;
	// bl 0x8317bf80
	sub_8317BF80(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8317C4E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317C4F8"))) PPC_WEAK_FUNC(sub_8317C4F8);
PPC_FUNC_IMPL(__imp__sub_8317C4F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8317c52c
	if (!cr6.eq) goto loc_8317C52C;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-19812
	ctx.r3.s64 = r11.s64 + -19812;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831b0b78
	return;
loc_8317C52C:
	// lis r29,-31930
	r29.s64 = -2092564480;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r28,r11,-14824
	r28.s64 = r11.s64 + -14824;
	// lwz r3,-21356(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -21356);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8317c558
	if (cr6.eq) goto loc_8317C558;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r28,4
	ctx.r4.s64 = r28.s64 + 4;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8317C558:
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lfs f31,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f31.f64 = double(temp.f32);
	// li r30,0
	r30.s64 = 0;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-31941
	ctx.r9.s64 = -2093285376;
	// addi r10,r10,-20832
	ctx.r10.s64 = ctx.r10.s64 + -20832;
	// std r30,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r30.u64);
	// std r30,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r30.u64);
	// std r30,16(r11)
	PPC_STORE_U64(r11.u32 + 16, r30.u64);
	// std r30,24(r11)
	PPC_STORE_U64(r11.u32 + 24, r30.u64);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r10,-23928(r9)
	PPC_STORE_U32(ctx.r9.u32 + -23928, ctx.r10.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// li r11,1
	r11.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// bl 0x831858d8
	sub_831858D8(ctx, base);
	// lis r31,-31941
	r31.s64 = -2093285376;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// lwz r11,-23664(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -23664);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8317c68c
	if (!cr6.eq) goto loc_8317C68C;
	// bl 0x83185bc0
	sub_83185BC0(ctx, base);
	// bl 0x8317d528
	sub_8317D528(ctx, base);
	// bl 0x83133838
	sub_83133838(ctx, base);
	// bl 0x8313ca00
	sub_8313CA00(ctx, base);
	// bl 0x8313bcc0
	sub_8313BCC0(ctx, base);
	// bl 0x8313d5c0
	sub_8313D5C0(ctx, base);
	// bl 0x82e71e58
	sub_82E71E58(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8317c608
	if (cr6.eq) goto loc_8317C608;
	// li r3,-101
	ctx.r3.s64 = -101;
	// bl 0x8317bf80
	sub_8317BF80(ctx, base);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-19852
	ctx.r3.s64 = r11.s64 + -19852;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
loc_8317C608:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8317bdc0
	sub_8317BDC0(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lfs f0,-5316(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -5316);
	f0.f64 = double(temp.f32);
	// lis r11,-31930
	r11.s64 = -2092564480;
	// stw r30,-21388(r11)
	PPC_STORE_U32(r11.u32 + -21388, r30.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f13,-22120(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22120);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f31,f0,f13
	f0.f64 = double(float(f31.f64 * f0.f64 + ctx.f13.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8317c430
	sub_8317C430(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8317c654
	if (cr6.eq) goto loc_8317C654;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-19880
	ctx.r3.s64 = r11.s64 + -19880;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
loc_8317C654:
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// li r11,1
	r11.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,-23660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23660, r11.u32);
	// bl 0x8317c250
	sub_8317C250(ctx, base);
	// bl 0x831397d0
	sub_831397D0(ctx, base);
	// lis r11,-31976
	r11.s64 = -2095579136;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-17072
	ctx.r3.s64 = r11.s64 + -17072;
	// bl 0x83139708
	sub_83139708(ctx, base);
	// bl 0x8317fb78
	sub_8317FB78(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8317bd58
	sub_8317BD58(ctx, base);
	// lwz r11,-23664(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -23664);
loc_8317C68C:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r3,-21356(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -21356);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,-23664(r31)
	PPC_STORE_U32(r31.u32 + -23664, r11.u32);
	// beq cr6,0x8317c6b4
	if (cr6.eq) goto loc_8317C6B4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r28,108
	ctx.r4.s64 = r28.s64 + 108;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8317C6B4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8317C6C0"))) PPC_WEAK_FUNC(sub_8317C6C0);
PPC_FUNC_IMPL(__imp__sub_8317C6C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,140
	cr6.compare<uint32_t>(ctx.r4.u32, 140, xer);
	// bge cr6,0x8317c6d0
	if (!cr6.lt) goto loc_8317C6D0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8317C6D0:
	// li r11,1
	r11.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317C6E0"))) PPC_WEAK_FUNC(sub_8317C6E0);
PPC_FUNC_IMPL(__imp__sub_8317C6E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	// mflr r12
	// bl 0x831b0b28
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bgt cr6,0x8317c700
	if (cr6.gt) goto loc_8317C700;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8317C700:
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(r31.s32, 2, xer);
	// beq cr6,0x8317c7c8
	if (cr6.eq) goto loc_8317C7C8;
	// cmpwi cr6,r31,6
	cr6.compare<int32_t>(r31.s32, 6, xer);
	// beq cr6,0x8317c7c8
	if (cr6.eq) goto loc_8317C7C8;
	// cmpwi cr6,r31,8
	cr6.compare<int32_t>(r31.s32, 8, xer);
	// beq cr6,0x8317c7c8
	if (cr6.eq) goto loc_8317C7C8;
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(r31.s32, 3, xer);
	// beq cr6,0x8317c780
	if (cr6.eq) goto loc_8317C780;
	// cmpwi cr6,r31,7
	cr6.compare<int32_t>(r31.s32, 7, xer);
	// beq cr6,0x8317c780
	if (cr6.eq) goto loc_8317C780;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// lis r29,0
	r29.s64 = 0;
	// srawi r11,r11,11
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7FF) != 0);
	r11.s64 = r11.s32 >> 11;
	// li r31,24012
	r31.s64 = 24012;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// li r30,24332
	r30.s64 = 24332;
	// rlwinm r28,r11,11,0,20
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 11) & 0xFFFFF800;
	// mullw r11,r11,r10
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r10.s32);
	// srawi r10,r28,1
	xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1) != 0);
	ctx.r10.s64 = r28.s32 >> 1;
	// rlwinm r28,r11,11,0,20
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 11) & 0xFFFFF800;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	r11.s64 = temp.s64;
	// ori r29,r29,33216
	r29.u64 = r29.u64 | 33216;
	// addi r11,r11,2048
	r11.s64 = r11.s64 + 2048;
	// stw r28,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r28.u32);
	// stw r3,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// stw r31,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r31.u32);
	// stw r30,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r30.u32);
	// stw r29,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r29.u32);
	// b 0x831b0b78
	return;
loc_8317C780:
	// srawi r3,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	ctx.r3.s64 = r11.s32 >> 3;
	// li r11,0
	r11.s64 = 0;
	// addze r3,r3
	temp.s64 = ctx.r3.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r3.s64 = temp.s64;
	// srawi r3,r3,11
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 11;
	// addze r3,r3
	temp.s64 = ctx.r3.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r3.s64 = temp.s64;
	// rlwinm r31,r3,11,0,20
	r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 11) & 0xFFFFF800;
	// mullw r10,r3,r10
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// srawi r3,r31,1
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	ctx.r3.s64 = r31.s32 >> 1;
	// rlwinm r31,r10,11,0,20
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0xFFFFF800;
	// addze r10,r3
	temp.s64 = ctx.r3.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r10.s64 = temp.s64;
	// addi r10,r10,2048
	ctx.r10.s64 = ctx.r10.s64 + 2048;
	// stw r31,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r31.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r11.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// b 0x831b0b78
	return;
loc_8317C7C8:
	// srawi r3,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	ctx.r3.s64 = r11.s32 >> 3;
	// li r11,0
	r11.s64 = 0;
	// addze r3,r3
	temp.s64 = ctx.r3.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r3.s64 = temp.s64;
	// srawi r3,r3,11
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 11;
	// addze r3,r3
	temp.s64 = ctx.r3.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r3.s64 = temp.s64;
	// mullw r10,r3,r10
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r10,11,0,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0xFFFFF800;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r11.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8317C800"))) PPC_WEAK_FUNC(sub_8317C800);
PPC_FUNC_IMPL(__imp__sub_8317C800) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// addi r9,r9,31
	ctx.r9.s64 = ctx.r9.s64 + 31;
	// srawi r9,r9,5
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 5;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r8,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// stw r8,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317C840"))) PPC_WEAK_FUNC(sub_8317C840);
PPC_FUNC_IMPL(__imp__sub_8317C840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r23{};
	PPCRegister r24{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// bgt cr6,0x8317c8a4
	if (cr6.gt) goto loc_8317C8A4;
	// lis r12,-31976
	r12.s64 = -2095579136;
	// addi r12,r12,-14228
	r12.s64 = r12.s64 + -14228;
	// rlwinm r0,r3,2,0,29
	r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_8317C8B0;
	case 1:
		goto loc_8317C87C;
	case 2:
		goto loc_8317C890;
	case 3:
		goto loc_8317C8B0;
	default:
		__builtin_unreachable();
	}
	// lwz r24,-14160(r23)
	r24.u64 = PPC_LOAD_U32(r23.u32 + -14160);
	// lwz r24,-14212(r23)
	r24.u64 = PPC_LOAD_U32(r23.u32 + -14212);
	// lwz r24,-14192(r23)
	r24.u64 = PPC_LOAD_U32(r23.u32 + -14192);
	// lwz r24,-14160(r23)
	r24.u64 = PPC_LOAD_U32(r23.u32 + -14160);
loc_8317C87C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8317C890:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8317C8A4:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-19664
	ctx.r3.s64 = r11.s64 + -19664;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
loc_8317C8B0:
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317C8C8"))) PPC_WEAK_FUNC(sub_8317C8C8);
PPC_FUNC_IMPL(__imp__sub_8317C8C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,26
	r11.s64 = r11.s64 + 26;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317C8D8"))) PPC_WEAK_FUNC(sub_8317C8D8);
PPC_FUNC_IMPL(__imp__sub_8317C8D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r11,r11,6,0,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r3,r11,224
	ctx.r3.s64 = r11.s64 + 224;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317C8E8"))) PPC_WEAK_FUNC(sub_8317C8E8);
PPC_FUNC_IMPL(__imp__sub_8317C8E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,9216
	r11.s64 = 9216;
	// li r10,256
	ctx.r10.s64 = 256;
	// li r9,1536
	ctx.r9.s64 = 1536;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r3,r11,1536
	ctx.r3.s64 = r11.s64 + 1536;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317C918"))) PPC_WEAK_FUNC(sub_8317C918);
PPC_FUNC_IMPL(__imp__sub_8317C918) {
	PPC_FUNC_PROLOGUE();
	// li r3,256
	ctx.r3.s64 = 256;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317C920"))) PPC_WEAK_FUNC(sub_8317C920);
PPC_FUNC_IMPL(__imp__sub_8317C920) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x8317f550
	sub_8317F550(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317f938
	sub_8317F938(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// addis r3,r30,2
	ctx.r3.s64 = r30.s64 + 131072;
	// beq cr6,0x8317c960
	if (cr6.eq) goto loc_8317C960;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8317C960:
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

__attribute__((alias("__imp__sub_8317C978"))) PPC_WEAK_FUNC(sub_8317C978);
PPC_FUNC_IMPL(__imp__sub_8317C978) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// addi r11,r3,15
	r11.s64 = ctx.r3.s64 + 15;
	// addi r10,r4,15
	ctx.r10.s64 = ctx.r4.s64 + 15;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// srawi r10,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// addi r11,r11,127
	r11.s64 = r11.s64 + 127;
	// addi r9,r9,127
	ctx.r9.s64 = ctx.r9.s64 + 127;
	// srawi r9,r9,7
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 7;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r8,r8,1
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 1;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// srawi r7,r11,7
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7F) != 0);
	ctx.r7.s64 = r11.s32 >> 7;
	// mullw r11,r9,r8
	r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// addze r9,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r9.s64 = temp.s64;
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,8,0,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// addi r3,r11,128
	ctx.r3.s64 = r11.s64 + 128;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317C9E0"))) PPC_WEAK_FUNC(sub_8317C9E0);
PPC_FUNC_IMPL(__imp__sub_8317C9E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r10,1104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1104);
	// lwz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8317cab0
	if (cr6.eq) goto loc_8317CAB0;
	// lwz r9,1140(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 1140);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x8317ca38
	if (!cr6.eq) goto loc_8317CA38;
	// lwz r9,1144(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 1144);
	// lwz r11,1148(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1148);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r11,1
	r11.s64 = 1;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// b 0x8317ca8c
	goto loc_8317CA8C;
loc_8317CA38:
	// lwz r9,1108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 1108);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x8317ca64
	if (!cr6.eq) goto loc_8317CA64;
	// lwz r9,1112(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 1112);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lwz r9,1116(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 1116);
	// lwz r11,1120(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1120);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// b 0x8317ca84
	goto loc_8317CA84;
loc_8317CA64:
	// lwz r10,1128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1128);
	// lwz r9,1124(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 1124);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lwz r10,1132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1132);
	// lwz r11,1136(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1136);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_8317CA84:
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
loc_8317CA8C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8318c048
	sub_8318C048(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8317cab0
	if (cr6.eq) goto loc_8317CAB0;
	// li r3,-312
	ctx.r3.s64 = -312;
	// bl 0x8317bf80
	sub_8317BF80(ctx, base);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-19624
	ctx.r3.s64 = r11.s64 + -19624;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
loc_8317CAB0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317CAC0"))) PPC_WEAK_FUNC(sub_8317CAC0);
PPC_FUNC_IMPL(__imp__sub_8317CAC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r11,r11,15
	r11.s64 = r11.s64 + 15;
	// lwz r9,40(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// li r28,0
	r28.s64 = 0;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// srawi r10,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r8,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r8.s64 = r11.s32 >> 1;
	// rlwinm r7,r10,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// addi r11,r11,127
	r11.s64 = r11.s64 + 127;
	// addi r8,r8,127
	ctx.r8.s64 = ctx.r8.s64 + 127;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// srawi r8,r8,7
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 7;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// srawi r7,r7,1
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 1;
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r6,r11,7
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7F) != 0);
	ctx.r6.s64 = r11.s32 >> 7;
	// mullw r11,r8,r7
	r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// addze r8,r6
	temp.s64 = ctx.r6.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r8.s64 = temp.s64;
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,8,0,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// addi r30,r11,128
	r30.s64 = r11.s64 + 128;
	// beq cr6,0x8317cb90
	if (cr6.eq) goto loc_8317CB90;
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// blt cr6,0x8317cb7c
	if (cr6.lt) goto loc_8317CB7C;
	// lwz r11,44(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// blt cr6,0x8317cb7c
	if (cr6.lt) goto loc_8317CB7C;
	// lwz r11,48(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,48(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// b 0x8317cbb4
	goto loc_8317CBB4;
loc_8317CB7C:
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r28,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_8317CB90:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831901d0
	sub_831901D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x831901d0
	sub_831901D0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
loc_8317CBB4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8317cbcc
	if (cr6.eq) goto loc_8317CBCC;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8317cbd8
	if (!cr6.eq) goto loc_8317CBD8;
loc_8317CBCC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_8317CBD8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8317CBE8"))) PPC_WEAK_FUNC(sub_8317CBE8);
PPC_FUNC_IMPL(__imp__sub_8317CBE8) {
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
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r25,0
	r25.s64 = 0;
	// lwz r28,16(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r29,12(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// bl 0x8317c840
	sub_8317C840(ctx, base);
	// addi r11,r30,15
	r11.s64 = r30.s64 + 15;
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// addi r10,r29,15
	ctx.r10.s64 = r29.s64 + 15;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// srawi r10,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r8,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r8.s64 = r11.s32 >> 1;
	// rlwinm r7,r10,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// addi r11,r11,127
	r11.s64 = r11.s64 + 127;
	// addi r8,r8,127
	ctx.r8.s64 = ctx.r8.s64 + 127;
	// srawi r8,r8,7
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 7;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// srawi r7,r7,1
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 1;
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r6,r11,7
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7F) != 0);
	ctx.r6.s64 = r11.s32 >> 7;
	// mullw r11,r8,r7
	r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// addze r8,r6
	temp.s64 = ctx.r6.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r8.s64 = temp.s64;
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,8,0,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// addi r30,r11,128
	r30.s64 = r11.s64 + 128;
	// beq cr6,0x8317ccf0
	if (cr6.eq) goto loc_8317CCF0;
	// addi r11,r28,2
	r11.s64 = r28.s64 + 2;
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// blt cr6,0x8317cce4
	if (cr6.lt) goto loc_8317CCE4;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// blt cr6,0x8317cce4
	if (cr6.lt) goto loc_8317CCE4;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x8317cd24
	if (!cr6.gt) goto loc_8317CD24;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// subfic r9,r27,8
	xer.ca = r27.u32 <= 8;
	ctx.r9.s64 = 8 - r27.s64;
loc_8317CCAC:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// bne cr6,0x8317ccc8
	if (!cr6.eq) goto loc_8317CCC8;
	// li r25,-1
	r25.s64 = -1;
loc_8317CCC8:
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x8317ccac
	if (!cr6.eq) goto loc_8317CCAC;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
loc_8317CCE4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
loc_8317CCF0:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x8317cd24
	if (!cr6.gt) goto loc_8317CD24;
loc_8317CCF8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x831901d0
	sub_831901D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r3.u32);
	// bne cr6,0x8317cd14
	if (!cr6.eq) goto loc_8317CD14;
	// li r25,-1
	r25.s64 = -1;
loc_8317CD14:
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x8317ccf8
	if (!cr6.eq) goto loc_8317CCF8;
loc_8317CD24:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_8317CD30"))) PPC_WEAK_FUNC(sub_8317CD30);
PPC_FUNC_IMPL(__imp__sub_8317CD30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r23{};
	PPCRegister r24{};
	// addi r11,r3,-2
	r11.s64 = ctx.r3.s64 + -2;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// bgt cr6,0x8317cd78
	if (cr6.gt) goto loc_8317CD78;
	// lis r12,-31976
	r12.s64 = -2095579136;
	// addi r12,r12,-12972
	r12.s64 = r12.s64 + -12972;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_8317CD70;
	case 1:
		goto loc_8317CD70;
	case 2:
		goto loc_8317CD78;
	case 3:
		goto loc_8317CD78;
	case 4:
		goto loc_8317CD70;
	case 5:
		goto loc_8317CD70;
	case 6:
		goto loc_8317CD70;
	default:
		__builtin_unreachable();
	}
	// lwz r24,-12944(r23)
	r24.u64 = PPC_LOAD_U32(r23.u32 + -12944);
	// lwz r24,-12944(r23)
	r24.u64 = PPC_LOAD_U32(r23.u32 + -12944);
	// lwz r24,-12936(r23)
	r24.u64 = PPC_LOAD_U32(r23.u32 + -12936);
	// lwz r24,-12936(r23)
	r24.u64 = PPC_LOAD_U32(r23.u32 + -12936);
	// lwz r24,-12944(r23)
	r24.u64 = PPC_LOAD_U32(r23.u32 + -12944);
	// lwz r24,-12944(r23)
	r24.u64 = PPC_LOAD_U32(r23.u32 + -12944);
	// lwz r24,-12944(r23)
	r24.u64 = PPC_LOAD_U32(r23.u32 + -12944);
loc_8317CD70:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8317CD78:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317CD80"))) PPC_WEAK_FUNC(sub_8317CD80);
PPC_FUNC_IMPL(__imp__sub_8317CD80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r3,1012
	r11.s64 = ctx.r3.s64 + 1012;
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
	// stw r6,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r6.u32);
	// stw r11,1036(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1036, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317CD98"))) PPC_WEAK_FUNC(sub_8317CD98);
PPC_FUNC_IMPL(__imp__sub_8317CD98) {
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
	// lwz r11,1036(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 1036);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8317cdc8
	if (!cr6.eq) goto loc_8317CDC8;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-19532
	ctx.r3.s64 = r11.s64 + -19532;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_8317CDC8:
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r31,8(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r30,r10,3
	r30.s64 = ctx.r10.s64 + 3;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mullw r11,r30,r31
	r11.s64 = int64_t(r30.s32) * int64_t(r31.s32);
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// bge cr6,0x8317cdfc
	if (!cr6.lt) goto loc_8317CDFC;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-19592
	ctx.r3.s64 = r11.s64 + -19592;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_8317CDFC:
	// bl 0x8317be68
	sub_8317BE68(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8317ce1c
	if (!cr6.eq) goto loc_8317CE1C;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r3,72(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 72);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x83190e28
	sub_83190E28(ctx, base);
loc_8317CE1C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8317CE28"))) PPC_WEAK_FUNC(sub_8317CE28);
PPC_FUNC_IMPL(__imp__sub_8317CE28) {
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
	// bl 0x8318d560
	sub_8318D560(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8317ce54
	if (cr6.eq) goto loc_8317CE54;
	// li r3,-306
	ctx.r3.s64 = -306;
	// bl 0x8317bf80
	sub_8317BF80(ctx, base);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-19476
	ctx.r3.s64 = r11.s64 + -19476;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
loc_8317CE54:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317CE68"))) PPC_WEAK_FUNC(sub_8317CE68);
PPC_FUNC_IMPL(__imp__sub_8317CE68) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,72(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x83181fb8
	sub_83181FB8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181fb8
	sub_83181FB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181fb8
	sub_83181FB8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181fb8
	sub_83181FB8(ctx, base);
	// mullw r11,r30,r29
	r11.s64 = int64_t(r30.s32) * int64_t(r29.s32);
	// mulli r11,r11,1000
	r11.s64 = r11.s64 * 1000;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,-22120(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22120);
	f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f0.f64));
	// stfiwx f13,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f13.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// addi r30,r11,-1
	r30.s64 = r11.s64 + -1;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x8317cf1c
	if (cr6.gt) goto loc_8317CF1C;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_8317CF1C:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181fb8
	sub_83181FB8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181fb8
	sub_83181FB8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,42
	ctx.r4.s64 = 42;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181fb8
	sub_83181FB8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181fb8
	sub_83181FB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,51
	ctx.r4.s64 = 51;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181fb8
	sub_83181FB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181fb8
	sub_83181FB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181fb8
	sub_83181FB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83186cc0
	sub_83186CC0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8317CFA8"))) PPC_WEAK_FUNC(sub_8317CFA8);
PPC_FUNC_IMPL(__imp__sub_8317CFA8) {
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
	// li r11,0
	r11.s64 = 0;
	// lwz r30,72(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8318d648
	sub_8318D648(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8317cff0
	if (cr6.eq) goto loc_8317CFF0;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-19392
	ctx.r3.s64 = r11.s64 + -19392;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8317d038
	goto loc_8317D038;
loc_8317CFF0:
	// lis r11,-31976
	r11.s64 = -2095579136;
	// stw r30,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r30.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r11,-16424
	ctx.r4.s64 = r11.s64 + -16424;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8318ffa8
	sub_8318FFA8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8317d02c
	if (cr6.eq) goto loc_8317D02C;
	// li r3,-303
	ctx.r3.s64 = -303;
	// bl 0x8317bf80
	sub_8317BF80(ctx, base);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-19444
	ctx.r3.s64 = r11.s64 + -19444;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8317d038
	goto loc_8317D038;
loc_8317D02C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317cd98
	sub_8317CD98(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8317D038:
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

__attribute__((alias("__imp__sub_8317D050"))) PPC_WEAK_FUNC(sub_8317D050);
PPC_FUNC_IMPL(__imp__sub_8317D050) {
	PPC_FUNC_PROLOGUE();
	// lwz r5,1120(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1120);
	// lwz r4,1116(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1116);
	// lwz r3,1112(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1112);
	// b 0x8313d0e0
	sub_8313D0E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317D060"))) PPC_WEAK_FUNC(sub_8317D060);
PPC_FUNC_IMPL(__imp__sub_8317D060) {
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
	// bl 0x8317bd40
	sub_8317BD40(ctx, base);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8317d0ac
	if (!cr6.eq) goto loc_8317D0AC;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8317d09c
	if (!cr6.eq) goto loc_8317D09C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8317D09C:
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8317d0ac
	if (!cr6.eq) goto loc_8317D0AC;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8317D0AC:
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

__attribute__((alias("__imp__sub_8317D0C0"))) PPC_WEAK_FUNC(sub_8317D0C0);
PPC_FUNC_IMPL(__imp__sub_8317D0C0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// stw r11,1152(r31)
	PPC_STORE_U32(r31.u32 + 1152, r11.u32);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// stw r11,1156(r31)
	PPC_STORE_U32(r31.u32 + 1156, r11.u32);
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// stw r29,1164(r31)
	PPC_STORE_U32(r31.u32 + 1164, r29.u32);
	// stw r11,1160(r31)
	PPC_STORE_U32(r31.u32 + 1160, r11.u32);
	// bl 0x83190198
	sub_83190198(ctx, base);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r11,r11,18
	r11.s64 = r11.s64 + 18;
	// stw r11,1168(r31)
	PPC_STORE_U32(r31.u32 + 1168, r11.u32);
	// stw r29,1176(r31)
	PPC_STORE_U32(r31.u32 + 1176, r29.u32);
	// stw r29,1180(r31)
	PPC_STORE_U32(r31.u32 + 1180, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8317D118"))) PPC_WEAK_FUNC(sub_8317D118);
PPC_FUNC_IMPL(__imp__sub_8317D118) {
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
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8317d14c
	if (cr6.eq) goto loc_8317D14C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x8317d14c
	if (cr6.eq) goto loc_8317D14C;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-19344
	ctx.r3.s64 = r11.s64 + -19344;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8317D14C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317D160"))) PPC_WEAK_FUNC(sub_8317D160);
PPC_FUNC_IMPL(__imp__sub_8317D160) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x8317f550
	sub_8317F550(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x831901d0
	sub_831901D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8317d1bc
	if (!cr6.eq) goto loc_8317D1BC;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-19268
	ctx.r3.s64 = r11.s64 + -19268;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831902d0
	sub_831902D0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_8317D1BC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,188(r31)
	PPC_STORE_U32(r31.u32 + 188, r11.u32);
	// stw r29,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r29.u32);
	// bl 0x8317f938
	sub_8317F938(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8317d220
	if (!cr6.eq) goto loc_8317D220;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831901d0
	sub_831901D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8317d208
	if (!cr6.eq) goto loc_8317D208;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-19308
	ctx.r3.s64 = r11.s64 + -19308;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831902d0
	sub_831902D0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_8317D208:
	// lis r11,2
	r11.s64 = 131072;
	// stw r3,1044(r31)
	PPC_STORE_U32(r31.u32 + 1044, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,1048(r31)
	PPC_STORE_U32(r31.u32 + 1048, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_8317D220:
	// li r11,0
	r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,1044(r31)
	PPC_STORE_U32(r31.u32 + 1044, r11.u32);
	// stw r11,1048(r31)
	PPC_STORE_U32(r31.u32 + 1048, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8317D238"))) PPC_WEAK_FUNC(sub_8317D238);
PPC_FUNC_IMPL(__imp__sub_8317D238) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8317d3e0
	if (cr6.eq) goto loc_8317D3E0;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8317d3e0
	if (cr6.eq) goto loc_8317D3E0;
	// li r5,516
	ctx.r5.s64 = 516;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// cmpwi cr6,r31,2048
	cr6.compare<int32_t>(r31.s32, 2048, xer);
	// bge cr6,0x8317d28c
	if (!cr6.lt) goto loc_8317D28C;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-19148
	ctx.r3.s64 = r11.s64 + -19148;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b5c
	return;
loc_8317D28C:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r22,2
	r22.s64 = 2;
	// addi r23,r30,2048
	r23.s64 = r30.s64 + 2048;
	// addi r24,r31,-2048
	r24.s64 = r31.s64 + -2048;
	// addi r21,r11,-19184
	r21.s64 = r11.s64 + -19184;
	// li r27,0
	r27.s64 = 0;
	// li r25,1
	r25.s64 = 1;
loc_8317D2A8:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x83191808
	sub_83191808(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x8317d2cc
	if (!cr6.eq) goto loc_8317D2CC;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// b 0x8317d3c4
	goto loc_8317D3C4;
loc_8317D2CC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831918b8
	sub_831918B8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8317d3b0
	if (!cr6.eq) goto loc_8317D3B0;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8317d3b0
	if (!cr6.eq) goto loc_8317D3B0;
	// mr r28,r27
	r28.u64 = r27.u64;
loc_8317D2F0:
	// rlwinm r11,r28,4,0,27
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r28,192
	ctx.r10.s64 = r28.s64 + 192;
	// add r31,r11,r26
	r31.u64 = r11.u64 + r26.u64;
	// clrlwi r30,r10,24
	r30.u64 = ctx.r10.u32 & 0xFF;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r27,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r27.u32);
	// stw r27,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r27.u32);
	// stw r27,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r27.u32);
	// stw r27,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r27.u32);
	// bl 0x83191108
	sub_83191108(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8317d39c
	if (!cr6.eq) goto loc_8317D39C;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8317d39c
	if (!cr6.eq) goto loc_8317D39C;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r25,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r25.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83191388
	sub_83191388(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8317d35c
	if (!cr6.eq) goto loc_8317D35C;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x83180f08
	sub_83180F08(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
loc_8317D35C:
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831913d8
	sub_831913D8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8317d37c
	if (!cr6.eq) goto loc_8317D37C;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_8317D37C:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83191400
	sub_83191400(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8317d39c
	if (!cr6.eq) goto loc_8317D39C;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
loc_8317D39C:
	// addi r11,r28,1
	r11.s64 = r28.s64 + 1;
	// clrlwi r28,r11,24
	r28.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r28,32
	cr6.compare<uint32_t>(r28.u32, 32, xer);
	// blt cr6,0x8317d2f0
	if (cr6.lt) goto loc_8317D2F0;
	// stw r25,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r25.u32);
loc_8317D3B0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831910d0
	sub_831910D0(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8317d3ec
	if (cr6.eq) goto loc_8317D3EC;
loc_8317D3C4:
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r24,r24,-2048
	r24.s64 = r24.s64 + -2048;
	// addi r23,r23,2048
	r23.s64 = r23.s64 + 2048;
	// cmpwi cr6,r22,3
	cr6.compare<int32_t>(r22.s32, 3, xer);
	// ble cr6,0x8317d2a8
	if (!cr6.gt) goto loc_8317D2A8;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b5c
	return;
loc_8317D3E0:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-19232
	ctx.r3.s64 = r11.s64 + -19232;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
loc_8317D3EC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_8317D3F8"))) PPC_WEAK_FUNC(sub_8317D3F8);
PPC_FUNC_IMPL(__imp__sub_8317D3F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8317d42c
	if (!cr6.eq) goto loc_8317D42C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_8317D42C:
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,3
	ctx.r3.s64 = r11.s64 + 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317D448"))) PPC_WEAK_FUNC(sub_8317D448);
PPC_FUNC_IMPL(__imp__sub_8317D448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317D460"))) PPC_WEAK_FUNC(sub_8317D460);
PPC_FUNC_IMPL(__imp__sub_8317D460) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// addi r11,r3,1152
	r11.s64 = ctx.r3.s64 + 1152;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// ble cr6,0x8317d480
	if (!cr6.gt) goto loc_8317D480;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8317D480:
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317D498"))) PPC_WEAK_FUNC(sub_8317D498);
PPC_FUNC_IMPL(__imp__sub_8317D498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// bl 0x8317bd40
	sub_8317BD40(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

