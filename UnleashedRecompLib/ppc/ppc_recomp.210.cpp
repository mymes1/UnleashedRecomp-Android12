#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8302D228"))) PPC_WEAK_FUNC(sub_8302D228);
PPC_FUNC_IMPL(__imp__sub_8302D228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// addi r31,r1,-720
	r31.s64 = ctx.r1.s64 + -720;
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// lwz r3,528(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 528);
	// stw r30,740(r31)
	PPC_STORE_U32(r31.u32 + 740, r30.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,528(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 528);
	// lwz r10,104(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// stw r10,88(r11)
	PPC_STORE_U32(r11.u32 + 88, ctx.r10.u32);
	// lbz r11,11(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 11);
	// lwz r10,528(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 528);
	// stb r11,84(r10)
	PPC_STORE_U8(ctx.r10.u32 + 84, r11.u8);
	// lwz r11,176(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// lwz r10,528(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 528);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, r11.u32);
	// lbz r11,17(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 17);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8302d2a4
	if (cr0.eq) goto loc_8302D2A4;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8302D2A4:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,216(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x8306e810
	sub_8306E810(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82fdc818
	sub_82FDC818(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82fdc7e8
	sub_82FDC7E8(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// lwz r4,100(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// bl 0x8306e538
	sub_8306E538(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// lwz r4,104(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// bl 0x8306e520
	sub_8306E520(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82fdc9c0
	sub_82FDC9C0(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,228(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 228);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8302d360
	if (cr0.eq) goto loc_8302D360;
	// lbz r11,11(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 11);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8302d360
	if (cr0.eq) goto loc_8302D360;
	// li r4,297
	ctx.r4.s64 = 297;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_8302D360:
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x83159448
	sub_83159448(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8302d4dc
	if (cr0.eq) goto loc_8302D4DC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// beq 0x8302d4dc
	if (cr0.eq) goto loc_8302D4DC;
	// li r3,80
	ctx.r3.s64 = 80;
	// lwz r4,180(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8302d3b0
	if (cr0.eq) goto loc_8302D3B0;
	// lwz r4,180(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// bl 0x8305a378
	sub_8305A378(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// b 0x8302d3b4
	goto loc_8302D3B4;
loc_8302D3B0:
	// li r27,0
	r27.s64 = 0;
loc_8302D3B4:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r26,0(r28)
	r26.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,56(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 56);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r29,216(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// lwz r28,104(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// lwz r26,100(r30)
	r26.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// lwz r7,176(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r5,192(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// addi r3,r31,320
	ctx.r3.s64 = r31.s64 + 320;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// bl 0x83081160
	sub_83081160(ctx, base);
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8302d498
	if (cr0.eq) goto loc_8302D498;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8302D498:
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8302d4a8
	if (cr0.eq) goto loc_8302D4A8;
	// lwz r3,176(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// bl 0x82fef530
	sub_82FEF530(ctx, base);
loc_8302D4A8:
	// lwz r11,112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8302d4c0
	if (cr0.eq) goto loc_8302D4C0;
	// lwz r3,176(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// bl 0x82fef6f8
	sub_82FEF6F8(ctx, base);
	// stw r3,556(r30)
	PPC_STORE_U32(r30.u32 + 556, ctx.r3.u32);
loc_8302D4C0:
	// addi r3,r31,320
	ctx.r3.s64 = r31.s64 + 320;
	// bl 0x830813d0
	sub_830813D0(ctx, base);
loc_8302D4C8:
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x8306eb48
	sub_8306EB48(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r31,720
	ctx.r1.s64 = r31.s64 + 720;
	// b 0x831b0b68
	return;
loc_8302D4DC:
	// li r27,0
	r27.s64 = 0;
	// b 0x8302d4c8
	goto loc_8302D4C8;
}

__attribute__((alias("__imp__sub_8302D4E4"))) PPC_WEAK_FUNC(sub_8302D4E4);
PPC_FUNC_IMPL(__imp__sub_8302D4E4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-720
	r31.s64 = r12.s64 + -720;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x8306eb48
	sub_8306EB48(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8302D50C"))) PPC_WEAK_FUNC(sub_8302D50C);
PPC_FUNC_IMPL(__imp__sub_8302D50C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-720
	r31.s64 = r12.s64 + -720;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,740(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 740);
	// lwz r4,180(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 180);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8302D53C"))) PPC_WEAK_FUNC(sub_8302D53C);
PPC_FUNC_IMPL(__imp__sub_8302D53C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-720
	r31.s64 = r12.s64 + -720;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,320
	ctx.r3.s64 = r31.s64 + 320;
	// bl 0x830813d0
	sub_830813D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8302D570"))) PPC_WEAK_FUNC(sub_8302D570);
PPC_FUNC_IMPL(__imp__sub_8302D570) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x831b0b20
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// stw r4,236(r31)
	PPC_STORE_U32(r31.u32 + 236, ctx.r4.u32);
	// li r28,0
	r28.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r31,86
	ctx.r4.s64 = r31.s64 + 86;
	// addi r3,r30,124
	ctx.r3.s64 = r30.s64 + 124;
	// lwz r11,24(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// stw r28,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r28.u32);
	// stw r30,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r30.u32);
	// stw r27,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r27.u32);
	// sth r28,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r28.u16);
	// bl 0x82ff62e0
	sub_82FF62E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8302d5cc
	if (!cr0.eq) goto loc_8302D5CC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8302D5C4:
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x831b0b70
	return;
loc_8302D5CC:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// mr r29,r28
	r29.u64 = r28.u64;
	// ori r10,r10,32808
	ctx.r10.u64 = ctx.r10.u64 | 32808;
	// lwzx r26,r11,r10
	r26.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// sth r28,82(r31)
	PPC_STORE_U16(r31.u32 + 82, r28.u16);
	// stw r26,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r26.u32);
loc_8302D5E8:
	// addi r3,r30,124
	ctx.r3.s64 = r30.s64 + 124;
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// sth r3,84(r31)
	PPC_STORE_U16(r31.u32 + 84, ctx.r3.u16);
	// clrlwi. r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8302d634
	if (!cr0.eq) goto loc_8302D634;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r6,47
	ctx.r6.s64 = 47;
	// addi r4,r11,28392
	ctx.r4.s64 = r11.s64 + 28392;
	// li r5,3869
	ctx.r5.s64 = 3869;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82fefc90
	sub_82FEFC90(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// addi r4,r11,-8072
	ctx.r4.s64 = r11.s64 + -8072;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8302D634:
	// lhz r11,86(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 86);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x8302d67c
	if (!cr6.eq) goto loc_8302D67C;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// ori r10,r10,32808
	ctx.r10.u64 = ctx.r10.u64 | 32808;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// bne cr6,0x8302d660
	if (!cr6.eq) goto loc_8302D660;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8302d5c4
	goto loc_8302D5C4;
loc_8302D660:
	// ble cr6,0x8302d67c
	if (!cr6.gt) goto loc_8302D67C;
	// li r4,231
	ctx.r4.s64 = 231;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8302d5c4
	goto loc_8302D5C4;
loc_8302D67C:
	// stb r28,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r28.u8);
	// cmplwi cr6,r3,38
	cr6.compare<uint32_t>(ctx.r3.u32, 38, xer);
	// bne cr6,0x8302d6c0
	if (!cr6.eq) goto loc_8302D6C0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// addi r6,r31,82
	ctx.r6.s64 = r31.s64 + 82;
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8302d784
	if (cr6.eq) goto loc_8302D784;
	// mr r29,r28
	r29.u64 = r28.u64;
	// b 0x8302d5e8
	goto loc_8302D5E8;
loc_8302D6C0:
	// cmplwi cr6,r3,55296
	cr6.compare<uint32_t>(ctx.r3.u32, 55296, xer);
	// blt cr6,0x8302d6f4
	if (cr6.lt) goto loc_8302D6F4;
	// cmplwi cr6,r3,56319
	cr6.compare<uint32_t>(ctx.r3.u32, 56319, xer);
	// bgt cr6,0x8302d6f4
	if (cr6.gt) goto loc_8302D6F4;
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8302d6ec
	if (cr0.eq) goto loc_8302D6EC;
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8302d784
	goto loc_8302D784;
loc_8302D6EC:
	// li r29,1
	r29.s64 = 1;
	// b 0x8302d784
	goto loc_8302D784;
loc_8302D6F4:
	// cmplwi cr6,r3,56320
	cr6.compare<uint32_t>(ctx.r3.u32, 56320, xer);
	// blt cr6,0x8302d71c
	if (cr6.lt) goto loc_8302D71C;
	// cmplwi cr6,r3,57343
	cr6.compare<uint32_t>(ctx.r3.u32, 57343, xer);
	// bgt cr6,0x8302d71c
	if (cr6.gt) goto loc_8302D71C;
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8302d780
	if (!cr0.eq) goto loc_8302D780;
	// li r4,282
	ctx.r4.s64 = 282;
loc_8302D710:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// b 0x8302d77c
	goto loc_8302D77C;
loc_8302D71C:
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8302d72c
	if (cr0.eq) goto loc_8302D72C;
	// li r4,249
	ctx.r4.s64 = 249;
	// b 0x8302d710
	goto loc_8302D710;
loc_8302D72C:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// ori r10,r10,32852
	ctx.r10.u64 = ctx.r10.u64 | 32852;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lbzx r11,r11,r3
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8302d780
	if (!cr0.eq) goto loc_8302D780;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// bl 0x82fd9bb8
	sub_82FD9BB8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,236(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// li r4,218
	ctx.r4.s64 = 218;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
loc_8302D77C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8302D780:
	// mr r29,r28
	r29.u64 = r28.u64;
loc_8302D784:
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8302d7a0
	if (cr0.eq) goto loc_8302D7A0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8302D7A0:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lhz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U16(r31.u32 + 84);
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lhz r4,82(r31)
	ctx.r4.u64 = PPC_LOAD_U16(r31.u32 + 82);
	// mr. r11,r4
	r11.u64 = ctx.r4.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8302d5e8
	if (cr0.eq) goto loc_8302D5E8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// sth r28,82(r31)
	PPC_STORE_U16(r31.u32 + 82, r28.u16);
	// b 0x8302d5e8
	goto loc_8302D5E8;
	// lwz r30,228(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// lwz r27,244(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// li r28,0
	r28.s64 = 0;
	// lwz r26,88(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lbz r29,81(r31)
	r29.u64 = PPC_LOAD_U8(r31.u32 + 81);
	// b 0x8302d5e8
	goto loc_8302D5E8;
}

__attribute__((alias("__imp__sub_8302D7F0"))) PPC_WEAK_FUNC(sub_8302D7F0);
PPC_FUNC_IMPL(__imp__sub_8302D7F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-208
	r31.s64 = r12.s64 + -208;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// lis r3,-31997
	ctx.r3.s64 = -2096955392;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,-10288
	ctx.r3.s64 = ctx.r3.s64 + -10288;
	// stb r28,81(r31)
	PPC_STORE_U8(r31.u32 + 81, r28.u8);
	// stb r28,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r28.u8);
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_8302D818"))) PPC_WEAK_FUNC(sub_8302D818);
PPC_FUNC_IMPL(__imp__sub_8302D818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// bl 0x82feeed8
	sub_82FEEED8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8302d848
	if (!cr0.eq) goto loc_8302D848;
	// lwz r3,524(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 524);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8302d8b0
	if (cr0.eq) goto loc_8302D8B0;
loc_8302D848:
	// stw r3,184(r31)
	PPC_STORE_U32(r31.u32 + 184, ctx.r3.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,476(r31)
	PPC_STORE_U32(r31.u32 + 476, ctx.r3.u32);
	// bne 0x8302d894
	if (!cr0.eq) goto loc_8302D894;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,216(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 216);
	// li r6,44
	ctx.r6.s64 = 44;
	// addi r4,r11,28392
	ctx.r4.s64 = r11.s64 + 28392;
	// li r5,4495
	ctx.r5.s64 = 4495;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fd93a0
	sub_82FD93A0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-8860
	ctx.r4.s64 = r11.s64 + -8860;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_8302D894:
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// lwz r4,184(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8302D8B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8302D8C8"))) PPC_WEAK_FUNC(sub_8302D8C8);
PPC_FUNC_IMPL(__imp__sub_8302D8C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0af4
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// rlwinm r20,r7,2,0,29
	r20.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r21,-32233
	r21.s64 = -2112421888;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// li r16,0
	r16.s64 = 0;
	// lwz r11,484(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 484);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r17,r16
	r17.u64 = r16.u64;
	// lwz r19,32(r22)
	r19.u64 = PPC_LOAD_U32(r22.u32 + 32);
	// mr r15,r16
	r15.u64 = r16.u64;
	// lwzx r28,r11,r20
	r28.u64 = PPC_LOAD_U32(r11.u32 + r20.u32);
	// lwz r11,-22324(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + -22324);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bne cr6,0x8302d918
	if (!cr6.eq) goto loc_8302D918;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8302dad0
	goto loc_8302DAD0;
loc_8302D918:
	// lwz r11,176(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 176);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r11,192(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 192);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// beq cr6,0x8302daa8
	if (cr6.eq) goto loc_8302DAA8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r27,r16
	r27.u64 = r16.u64;
	// bl 0x82e627e0
	sub_82E627E0(ctx, base);
	// mr. r18,r3
	r18.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r18.s32, 0, xer);
	// beq 0x8302da90
	if (cr0.eq) goto loc_8302DA90;
loc_8302D944:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83086240
	sub_83086240(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r23,r16
	r23.u64 = r16.u64;
	// lwz r30,32(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x830862a0
	sub_830862A0(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// bne 0x8302d9d8
	if (!cr0.eq) goto loc_8302D9D8;
	// cmplw cr6,r30,r19
	cr6.compare<uint32_t>(r30.u32, r19.u32, xer);
	// bne cr6,0x8302d98c
	if (!cr6.eq) goto loc_8302D98C;
	// lwz r4,16(r22)
	ctx.r4.u64 = PPC_LOAD_U32(r22.u32 + 16);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8302d9a4
	if (!cr0.eq) goto loc_8302D9A4;
loc_8302D98C:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83085d78
	sub_83085D78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8302da0c
	if (cr0.eq) goto loc_8302DA0C;
loc_8302D9A4:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,-22324(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + -22324);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x8302da0c
	if (cr6.eq) goto loc_8302DA0C;
	// lwz r11,484(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 484);
	// stwx r3,r11,r20
	PPC_STORE_U32(r11.u32 + r20.u32, ctx.r3.u32);
	// b 0x8302da90
	goto loc_8302DA90;
loc_8302D9D8:
	// clrlwi r11,r26,28
	r11.u64 = r26.u32 & 0xF;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8302da08
	if (cr6.eq) goto loc_8302DA08;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// bne cr6,0x8302d9f8
	if (!cr6.eq) goto loc_8302D9F8;
	// cmplw cr6,r30,r19
	cr6.compare<uint32_t>(r30.u32, r19.u32, xer);
	// beq cr6,0x8302da0c
	if (cr6.eq) goto loc_8302DA0C;
	// b 0x8302da08
	goto loc_8302DA08;
loc_8302D9F8:
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// bne cr6,0x8302da0c
	if (!cr6.eq) goto loc_8302DA0C;
	// cmplw cr6,r30,r19
	cr6.compare<uint32_t>(r30.u32, r19.u32, xer);
	// bne cr6,0x8302da0c
	if (!cr6.eq) goto loc_8302DA0C;
loc_8302DA08:
	// li r23,1
	r23.s64 = 1;
loc_8302DA0C:
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8302da3c
	if (cr0.eq) goto loc_8302DA3C;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,-22324(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + -22324);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x8302da4c
	if (!cr6.eq) goto loc_8302DA4C;
loc_8302DA3C:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmplw cr6,r27,r18
	cr6.compare<uint32_t>(r27.u32, r18.u32, xer);
	// blt cr6,0x8302d944
	if (cr6.lt) goto loc_8302D944;
	// b 0x8302da90
	goto loc_8302DA90;
loc_8302DA4C:
	// lwz r11,484(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 484);
	// cmpwi cr6,r26,38
	cr6.compare<int32_t>(r26.s32, 38, xer);
	// stwx r3,r11,r20
	PPC_STORE_U32(r11.u32 + r20.u32, ctx.r3.u32);
	// beq cr6,0x8302da8c
	if (cr6.eq) goto loc_8302DA8C;
	// cmpwi cr6,r26,40
	cr6.compare<int32_t>(r26.s32, 40, xer);
	// beq cr6,0x8302da8c
	if (cr6.eq) goto loc_8302DA8C;
	// cmpwi cr6,r26,39
	cr6.compare<int32_t>(r26.s32, 39, xer);
	// beq cr6,0x8302da8c
	if (cr6.eq) goto loc_8302DA8C;
	// cmpwi cr6,r26,22
	cr6.compare<int32_t>(r26.s32, 22, xer);
	// beq cr6,0x8302da84
	if (cr6.eq) goto loc_8302DA84;
	// cmpwi cr6,r26,24
	cr6.compare<int32_t>(r26.s32, 24, xer);
	// beq cr6,0x8302da84
	if (cr6.eq) goto loc_8302DA84;
	// cmpwi cr6,r26,23
	cr6.compare<int32_t>(r26.s32, 23, xer);
	// bne cr6,0x8302da90
	if (!cr6.eq) goto loc_8302DA90;
loc_8302DA84:
	// li r15,1
	r15.s64 = 1;
	// b 0x8302da90
	goto loc_8302DA90;
loc_8302DA8C:
	// li r17,1
	r17.s64 = 1;
loc_8302DA90:
	// cmplw cr6,r27,r18
	cr6.compare<uint32_t>(r27.u32, r18.u32, xer);
	// bne cr6,0x8302daa8
	if (!cr6.eq) goto loc_8302DAA8;
	// lwz r11,484(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 484);
	// lwz r10,-22324(r21)
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + -22324);
	// stwx r10,r11,r20
	PPC_STORE_U32(r11.u32 + r20.u32, ctx.r10.u32);
	// b 0x8302dacc
	goto loc_8302DACC;
loc_8302DAA8:
	// clrlwi. r11,r17,24
	r11.u64 = r17.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8302dacc
	if (cr0.eq) goto loc_8302DACC;
	// stb r16,16(r25)
	PPC_STORE_U8(r25.u32 + 16, r16.u8);
	// lwz r11,440(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 440);
	// lwz r10,432(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 432);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,-4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// stb r16,32(r11)
	PPC_STORE_U8(r11.u32 + 32, r16.u8);
loc_8302DACC:
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
loc_8302DAD0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831b0b44
	return;
}

__attribute__((alias("__imp__sub_8302DAD8"))) PPC_WEAK_FUNC(sub_8302DAD8);
PPC_FUNC_IMPL(__imp__sub_8302DAD8) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// li r24,0
	r24.s64 = 0;
	// lwz r11,572(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 572);
	// lwz r10,576(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 576);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x8302db0c
	if (!cr6.gt) goto loc_8302DB0C;
	// li r25,2
	r25.s64 = 2;
	// b 0x8302db30
	goto loc_8302DB30;
loc_8302DB0C:
	// lwz r10,580(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 580);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x8302db20
	if (!cr6.gt) goto loc_8302DB20;
	// li r25,0
	r25.s64 = 0;
	// b 0x8302db30
	goto loc_8302DB30;
loc_8302DB20:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// li r25,1
	r25.s64 = 1;
	// stw r11,580(r31)
	PPC_STORE_U32(r31.u32 + 580, r11.u32);
	// stw r11,576(r31)
	PPC_STORE_U32(r31.u32 + 576, r11.u32);
loc_8302DB30:
	// lbz r11,16(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8302db60
	if (cr0.eq) goto loc_8302DB60;
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8302db60
	if (cr0.eq) goto loc_8302DB60;
	// lbz r11,569(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 569);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r24,r11,1
	r24.s64 = r11.s64 + 1;
loc_8302DB60:
	// lwz r4,588(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 588);
	// li r28,0
	r28.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8302dba8
	if (cr0.eq) goto loc_8302DBA8;
	// lwz r3,556(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 556);
	// bl 0x83015c80
	sub_83015C80(ctx, base);
	// lwz r11,588(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 588);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x8302db9c
	if (cr6.eq) goto loc_8302DB9C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x8302dba0
	if (!cr6.eq) goto loc_8302DBA0;
loc_8302DB9C:
	// li r11,1
	r11.s64 = 1;
loc_8302DBA0:
	// clrlwi r30,r11,24
	r30.u64 = r11.u32 & 0xFF;
	// b 0x8302dbc0
	goto loc_8302DBC0;
loc_8302DBA8:
	// lwz r4,584(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 584);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8302dbc0
	if (cr0.eq) goto loc_8302DBC0;
	// lwz r3,556(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 556);
	// bl 0x83015c80
	sub_83015C80(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_8302DBC0:
	// lwz r4,592(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 592);
	// li r29,0
	r29.s64 = 0;
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8302dc1c
	if (cr0.eq) goto loc_8302DC1C;
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8302dc1c
	if (!cr0.eq) goto loc_8302DC1C;
	// cmpwi cr6,r24,2
	cr6.compare<int32_t>(r24.s32, 2, xer);
	// bne cr6,0x8302dc1c
	if (!cr6.eq) goto loc_8302DC1C;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8302dbf4
	if (cr6.eq) goto loc_8302DBF4;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// b 0x8302dc04
	goto loc_8302DC04;
loc_8302DBF4:
	// lwz r3,584(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 584);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8302dc38
	if (cr0.eq) goto loc_8302DC38;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8302DC04:
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,216(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 216);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8302DC1C:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8302dc38
	if (cr6.eq) goto loc_8302DC38;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,556(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 556);
	// bl 0x83015c80
	sub_83015C80(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8302dc3c
	goto loc_8302DC3C;
loc_8302DC38:
	// li r30,0
	r30.s64 = 0;
loc_8302DC3C:
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8302dc64
	if (cr0.eq) goto loc_8302DC64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,556(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 556);
	// bl 0x83015c80
	sub_83015C80(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// b 0x8302dc68
	goto loc_8302DC68;
loc_8302DC64:
	// li r8,0
	ctx.r8.s64 = 0;
loc_8302DC68:
	// lwz r3,52(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 52);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// lwz r11,592(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 592);
	// li r30,0
	r30.s64 = 0;
	// lwz r26,556(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 556);
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lbz r7,568(r31)
	ctx.r7.u64 = PPC_LOAD_U8(r31.u32 + 568);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r6,196(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lwz r3,560(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 560);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// bl 0x8305c008
	sub_8305C008(ctx, base);
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// lwz r28,560(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 560);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r30,16(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r29,0(r10)
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,36(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,572(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 572);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,572(r31)
	PPC_STORE_U32(r31.u32 + 572, r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_8302DD08"))) PPC_WEAK_FUNC(sub_8302DD08);
PPC_FUNC_IMPL(__imp__sub_8302DD08) {
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// blt cr6,0x8302dd4c
	if (cr6.lt) goto loc_8302DD4C;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r6,116
	ctx.r6.s64 = 116;
	// addi r4,r11,32144
	ctx.r4.s64 = r11.s64 + 32144;
	// li r5,241
	ctx.r5.s64 = 241;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fd8ca0
	sub_82FD8CA0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-8684
	ctx.r4.s64 = r11.s64 + -8684;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_8302DD4C:
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8302DD68"))) PPC_WEAK_FUNC(sub_8302DD68);
PPC_FUNC_IMPL(__imp__sub_8302DD68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8302ddb4
	if (cr0.eq) goto loc_8302DDB4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8302ddac
	if (cr0.eq) goto loc_8302DDAC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8302ddb4
	goto loc_8302DDB4;
loc_8302DDAC:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_8302DDB4:
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8302DDC8"))) PPC_WEAK_FUNC(sub_8302DDC8);
PPC_FUNC_IMPL(__imp__sub_8302DDC8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8302de30
	if (!cr6.gt) goto loc_8302DE30;
	// li r31,0
	r31.s64 = 0;
loc_8302DDEC:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8302de10
	if (cr0.eq) goto loc_8302DE10;
loc_8302DDFC:
	// lwz r28,4(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x8302ddfc
	if (!cr6.eq) goto loc_8302DDFC;
loc_8302DE10:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stwx r10,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, ctx.r10.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x8302ddec
	if (cr6.lt) goto loc_8302DDEC;
loc_8302DE30:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8302DE38"))) PPC_WEAK_FUNC(sub_8302DE38);
PPC_FUNC_IMPL(__imp__sub_8302DE38) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8302de80
	if (!cr6.eq) goto loc_8302DE80;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,48
	ctx.r6.s64 = 48;
	// addi r4,r11,29520
	ctx.r4.s64 = r11.s64 + 29520;
	// li r5,88
	ctx.r5.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fd9010
	sub_82FD9010(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-8844
	ctx.r4.s64 = r11.s64 + -8844;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_8302DE80:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r11,0
	r11.s64 = 0;
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x8302ded4
	if (!cr6.gt) goto loc_8302DED4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8302DEB4:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwx r8,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8302deb4
	if (cr6.lt) goto loc_8302DEB4;
loc_8302DED4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8302DEE8"))) PPC_WEAK_FUNC(sub_8302DEE8);
PPC_FUNC_IMPL(__imp__sub_8302DEE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x8302df58
	if (!cr6.gt) goto loc_8302DF58;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,49
	ctx.r6.s64 = 49;
	// addi r4,r11,-13408
	ctx.r4.s64 = r11.s64 + -13408;
	// li r5,502
	ctx.r5.s64 = 502;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fd93a0
	sub_82FD93A0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-8860
	ctx.r4.s64 = r11.s64 + -8860;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_8302DF58:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r11
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// b 0x8302df90
	goto loc_8302DF90;
loc_8302DF68:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8302dfa4
	if (!cr0.eq) goto loc_8302DFA4;
	// lwz r30,4(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 4);
loc_8302DF90:
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// bne 0x8302df68
	if (!cr0.eq) goto loc_8302DF68;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8302DF9C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
loc_8302DFA4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8302df9c
	goto loc_8302DF9C;
}

__attribute__((alias("__imp__sub_8302DFB0"))) PPC_WEAK_FUNC(sub_8302DFB0);
PPC_FUNC_IMPL(__imp__sub_8302DFB0) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stb r6,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r6.u8);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r5,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r5.u32);
	// stw r4,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r4.u32);
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
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

__attribute__((alias("__imp__sub_8302E020"))) PPC_WEAK_FUNC(sub_8302E020);
PPC_FUNC_IMPL(__imp__sub_8302E020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x831b0b28
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,80(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r11.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8302e0a0
	if (cr0.eq) goto loc_8302E0A0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8302E0A0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff2d38
	sub_82FF2D38(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r29,r30,124
	r29.s64 = r30.s64 + 124;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff5d08
	sub_82FF5D08(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq 0x8302e0f4
	if (cr0.eq) goto loc_8302E0F4;
	// li r4,279
	ctx.r4.s64 = 279;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// b 0x8302e168
	goto loc_8302E168;
loc_8302E0F4:
	// bl 0x8302c690
	sub_8302C690(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8302e17c
	if (cr0.eq) goto loc_8302E17C;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8302e13c
	if (cr0.eq) goto loc_8302E13C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff3c38
	sub_82FF3C38(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8302E13C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff5d08
	sub_82FF5D08(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8302e17c
	if (!cr0.eq) goto loc_8302E17C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff2b28
	sub_82FF2B28(ctx, base);
loc_8302E168:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8302E17C:
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8302e1ac
	if (cr0.eq) goto loc_8302E1AC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8302E1AC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff5aa8
	sub_82FF5AA8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8302e1d4
	goto loc_8302E1D4;
	// b 0x8302e1d4
	goto loc_8302E1D4;
	// b 0x8302e1d4
	goto loc_8302E1D4;
loc_8302E1D4:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8302E1E4"))) PPC_WEAK_FUNC(sub_8302E1E4);
PPC_FUNC_IMPL(__imp__sub_8302E1E4) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_8302E204"))) PPC_WEAK_FUNC(sub_8302E204);
PPC_FUNC_IMPL(__imp__sub_8302E204) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addi r3,r11,124
	ctx.r3.s64 = r11.s64 + 124;
	// bl 0x82ff5aa8
	sub_82FF5AA8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_8302E234"))) PPC_WEAK_FUNC(sub_8302E234);
PPC_FUNC_IMPL(__imp__sub_8302E234) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addi r3,r11,124
	ctx.r3.s64 = r11.s64 + 124;
	// bl 0x82ff5aa8
	sub_82FF5AA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31997
	ctx.r3.s64 = -2096955392;
	// addi r3,r3,-7732
	ctx.r3.s64 = ctx.r3.s64 + -7732;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8302E270"))) PPC_WEAK_FUNC(sub_8302E270);
PPC_FUNC_IMPL(__imp__sub_8302E270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addi r3,r11,124
	ctx.r3.s64 = r11.s64 + 124;
	// bl 0x82ff5aa8
	sub_82FF5AA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31997
	ctx.r3.s64 = -2096955392;
	// addi r3,r3,-7728
	ctx.r3.s64 = ctx.r3.s64 + -7728;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8302E2AC"))) PPC_WEAK_FUNC(sub_8302E2AC);
PPC_FUNC_IMPL(__imp__sub_8302E2AC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,148(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// li r11,1
	r11.s64 = 1;
	// stb r11,13(r28)
	PPC_STORE_U8(r28.u32 + 13, r11.u8);
	// lwz r30,80(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fefb68
	sub_82FEFB68(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8302e30c
	if (!cr0.eq) goto loc_8302E30C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r29,16(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x8302e36c
	goto loc_8302E36C;
loc_8302E30C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fefb68
	sub_82FEFB68(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// blt cr6,0x8302e34c
	if (cr6.lt) goto loc_8302E34C;
	// lwz r29,16(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r4,292
	ctx.r4.s64 = 292;
	// b 0x8302e36c
	goto loc_8302E36C;
loc_8302E34C:
	// lwz r30,16(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,157
	ctx.r4.s64 = 157;
loc_8302E36C:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r3,r28,124
	ctx.r3.s64 = r28.s64 + 124;
	// bl 0x82ff5aa8
	sub_82FF5AA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31997
	ctx.r3.s64 = -2096955392;
	// addi r3,r3,-7724
	ctx.r3.s64 = ctx.r3.s64 + -7724;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8302E3AC"))) PPC_WEAK_FUNC(sub_8302E3AC);
PPC_FUNC_IMPL(__imp__sub_8302E3AC) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_8302E3CC"))) PPC_WEAK_FUNC(sub_8302E3CC);
PPC_FUNC_IMPL(__imp__sub_8302E3CC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addi r3,r11,124
	ctx.r3.s64 = r11.s64 + 124;
	// bl 0x82ff5aa8
	sub_82FF5AA8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_8302E400"))) PPC_WEAK_FUNC(sub_8302E400);
PPC_FUNC_IMPL(__imp__sub_8302E400) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x831b0b20
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,176(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// bl 0x82feebd0
	sub_82FEEBD0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,176(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// stb r28,1(r11)
	PPC_STORE_U8(r11.u32 + 1, r28.u8);
	// lwz r11,172(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 172);
	// stw r29,188(r30)
	PPC_STORE_U32(r30.u32 + 188, r29.u32);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x8302e474
	if (!cr6.eq) goto loc_8302E474;
	// li r11,1
	r11.s64 = 1;
	// stb r11,16(r30)
	PPC_STORE_U8(r30.u32 + 16, r11.u8);
loc_8302E474:
	// extsh r11,r27
	r11.s64 = r27.s16;
	// stb r29,13(r30)
	PPC_STORE_U8(r30.u32 + 13, r29.u8);
	// stb r29,14(r30)
	PPC_STORE_U8(r30.u32 + 14, r29.u8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// stw r29,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r29.u32);
	// li r11,1
	r11.s64 = 1;
	// stb r29,472(r30)
	PPC_STORE_U8(r30.u32 + 472, r29.u8);
	// stb r11,15(r30)
	PPC_STORE_U8(r30.u32 + 15, r11.u8);
	// bne cr6,0x8302e4c0
	if (!cr6.eq) goto loc_8302E4C0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8302d228
	sub_8302D228(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
loc_8302E4C0:
	// addi r3,r30,124
	ctx.r3.s64 = r30.s64 + 124;
	// bl 0x82ff5aa8
	sub_82FF5AA8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8302e4e8
	goto loc_8302E4E8;
	// b 0x8302e4e8
	goto loc_8302E4E8;
	// b 0x8302e4e8
	goto loc_8302E4E8;
loc_8302E4E8:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_8302E4FC"))) PPC_WEAK_FUNC(sub_8302E4FC);
PPC_FUNC_IMPL(__imp__sub_8302E4FC) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_8302E51C"))) PPC_WEAK_FUNC(sub_8302E51C);
PPC_FUNC_IMPL(__imp__sub_8302E51C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// addi r3,r11,124
	ctx.r3.s64 = r11.s64 + 124;
	// bl 0x82ff5aa8
	sub_82FF5AA8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_8302E54C"))) PPC_WEAK_FUNC(sub_8302E54C);
PPC_FUNC_IMPL(__imp__sub_8302E54C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// addi r3,r11,124
	ctx.r3.s64 = r11.s64 + 124;
	// bl 0x82ff5aa8
	sub_82FF5AA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31997
	ctx.r3.s64 = -2096955392;
	// addi r3,r3,-6944
	ctx.r3.s64 = ctx.r3.s64 + -6944;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_8302E588"))) PPC_WEAK_FUNC(sub_8302E588);
PPC_FUNC_IMPL(__imp__sub_8302E588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// addi r3,r11,124
	ctx.r3.s64 = r11.s64 + 124;
	// bl 0x82ff5aa8
	sub_82FF5AA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31997
	ctx.r3.s64 = -2096955392;
	// addi r3,r3,-6940
	ctx.r3.s64 = ctx.r3.s64 + -6940;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_8302E5C4"))) PPC_WEAK_FUNC(sub_8302E5C4);
PPC_FUNC_IMPL(__imp__sub_8302E5C4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,164(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// li r11,1
	r11.s64 = 1;
	// stb r11,13(r28)
	PPC_STORE_U8(r28.u32 + 13, r11.u8);
	// lwz r30,84(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fefb68
	sub_82FEFB68(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8302e610
	if (!cr0.eq) goto loc_8302E610;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,156
	ctx.r4.s64 = 156;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// b 0x8302e67c
	goto loc_8302E67C;
loc_8302E610:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fefb68
	sub_82FEFB68(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// blt cr6,0x8302e650
	if (cr6.lt) goto loc_8302E650;
	// lwz r29,16(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r4,292
	ctx.r4.s64 = 292;
	// b 0x8302e670
	goto loc_8302E670;
loc_8302E650:
	// lwz r30,16(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,157
	ctx.r4.s64 = 157;
loc_8302E670:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
loc_8302E67C:
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r3,r28,124
	ctx.r3.s64 = r28.s64 + 124;
	// bl 0x82ff5aa8
	sub_82FF5AA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31997
	ctx.r3.s64 = -2096955392;
	// addi r3,r3,-6936
	ctx.r3.s64 = ctx.r3.s64 + -6936;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_8302E6B0"))) PPC_WEAK_FUNC(sub_8302E6B0);
PPC_FUNC_IMPL(__imp__sub_8302E6B0) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_8302E6D0"))) PPC_WEAK_FUNC(sub_8302E6D0);
PPC_FUNC_IMPL(__imp__sub_8302E6D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// addi r3,r11,124
	ctx.r3.s64 = r11.s64 + 124;
	// bl 0x82ff5aa8
	sub_82FF5AA8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_8302E6F8"))) PPC_WEAK_FUNC(sub_8302E6F8);
PPC_FUNC_IMPL(__imp__sub_8302E6F8) {
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// mr r25,r31
	r25.u64 = r31.u64;
	// li r23,1
	r23.s64 = 1;
	// stb r31,0(r26)
	PPC_STORE_U8(r26.u32 + 0, r31.u8);
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(r11.s32, 11, xer);
	// stb r31,0(r24)
	PPC_STORE_U8(r24.u32 + 0, r31.u8);
	// beq cr6,0x8302e758
	if (cr6.eq) goto loc_8302E758;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// bne cr6,0x8302e760
	if (!cr6.eq) goto loc_8302E760;
	// lwz r11,40(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 40);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// beq cr6,0x8302e7b8
	if (cr6.eq) goto loc_8302E7B8;
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// beq cr6,0x8302e7b8
	if (cr6.eq) goto loc_8302E7B8;
loc_8302E758:
	// mr r25,r23
	r25.u64 = r23.u64;
	// b 0x8302e7b8
	goto loc_8302E7B8;
loc_8302E760:
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// bne cr6,0x8302e7b8
	if (!cr6.eq) goto loc_8302E7B8;
	// lwz r28,56(r27)
	r28.u64 = PPC_LOAD_U32(r27.u32 + 56);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// beq 0x8302e77c
	if (cr0.eq) goto loc_8302E77C;
	// lwz r30,4(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// b 0x8302e780
	goto loc_8302E780;
loc_8302E77C:
	// mr r30,r31
	r30.u64 = r31.u64;
loc_8302E780:
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x8302e7b8
	if (cr0.eq) goto loc_8302E7B8;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8302e7b8
	if (cr6.eq) goto loc_8302E7B8;
loc_8302E790:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8308ea58
	sub_8308EA58(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bne cr6,0x8302e7ac
	if (!cr6.eq) goto loc_8302E7AC;
	// mr r25,r23
	r25.u64 = r23.u64;
loc_8302E7AC:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// blt cr6,0x8302e790
	if (cr6.lt) goto loc_8302E790;
loc_8302E7B8:
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8302e7e0
	if (cr0.eq) goto loc_8302E7E0;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bne cr6,0x8302e7d4
	if (!cr6.eq) goto loc_8302E7D4;
	// stb r23,0(r26)
	PPC_STORE_U8(r26.u32 + 0, r23.u8);
	// b 0x8302e7e0
	goto loc_8302E7E0;
loc_8302E7D4:
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// bne cr6,0x8302e7e0
	if (!cr6.eq) goto loc_8302E7E0;
	// stb r23,0(r24)
	PPC_STORE_U8(r24.u32 + 0, r23.u8);
loc_8302E7E0:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_8302E7F8"))) PPC_WEAK_FUNC(sub_8302E7F8);
PPC_FUNC_IMPL(__imp__sub_8302E7F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r5,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r5.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// stw r4,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r4.u32);
	// stw r29,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r29.u32);
	// bl 0x8302de38
	sub_8302DE38(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8302e848
	if (cr0.eq) goto loc_8302E848;
	// bl 0x83017920
	sub_83017920(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8302E848:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r29.u32);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8302E858"))) PPC_WEAK_FUNC(sub_8302E858);
PPC_FUNC_IMPL(__imp__sub_8302E858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8302E888"))) PPC_WEAK_FUNC(sub_8302E888);
PPC_FUNC_IMPL(__imp__sub_8302E888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// bl 0x8302ddc8
	sub_8302DDC8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8302e8d8
	if (cr0.eq) goto loc_8302E8D8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8302E8D8:
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

__attribute__((alias("__imp__sub_8302E8F0"))) PPC_WEAK_FUNC(sub_8302E8F0);
PPC_FUNC_IMPL(__imp__sub_8302E8F0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83040820
	sub_83040820(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8302e940
	if (!cr0.eq) goto loc_8302E940;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r4,r11,29520
	ctx.r4.s64 = r11.s64 + 29520;
	// li r6,50
	ctx.r6.s64 = 50;
	// li r5,170
	ctx.r5.s64 = 170;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82fe9148
	sub_82FE9148(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-8184
	ctx.r4.s64 = r11.s64 + -8184;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_8302E940:
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

__attribute__((alias("__imp__sub_8302E958"))) PPC_WEAK_FUNC(sub_8302E958);
PPC_FUNC_IMPL(__imp__sub_8302E958) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x83040820
	sub_83040820(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8302e990
	if (cr0.eq) goto loc_8302E990;
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, r11.u16);
	// b 0x8302e9dc
	goto loc_8302E9DC;
loc_8302E990:
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8302e9cc
	if (cr0.eq) goto loc_8302E9CC;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwzx r11,r8,r11
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// sth r7,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r7.u16);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x8302e9d0
	goto loc_8302E9D0;
loc_8302E9CC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8302E9D0:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, ctx.r10.u32);
loc_8302E9DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8302E9F0"))) PPC_WEAK_FUNC(sub_8302E9F0);
PPC_FUNC_IMPL(__imp__sub_8302E9F0) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x8302ea78
	if (!cr6.eq) goto loc_8302EA78;
	// li r3,52
	ctx.r3.s64 = 52;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8302ea4c
	if (cr0.eq) goto loc_8302EA4C;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x83086300
	sub_83086300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8302ea50
	goto loc_8302EA50;
loc_8302EA4C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8302EA50:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x83043678
	sub_83043678(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x83043678
	sub_83043678(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x83043678
	sub_83043678(ctx, base);
	// b 0x8302eabc
	goto loc_8302EABC;
loc_8302EA78:
	// bl 0x83020000
	sub_83020000(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8302EABC:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8302EAD4"))) PPC_WEAK_FUNC(sub_8302EAD4);
PPC_FUNC_IMPL(__imp__sub_8302EAD4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8302EB10"))) PPC_WEAK_FUNC(sub_8302EB10);
PPC_FUNC_IMPL(__imp__sub_8302EB10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0afc
	// addi r31,r1,-256
	r31.s64 = ctx.r1.s64 + -256;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// addi r21,r11,26808
	r21.s64 = r11.s64 + 26808;
	// lis r11,-32235
	r11.s64 = -2112552960;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// mr r19,r6
	r19.u64 = ctx.r6.u64;
	// lwz r17,8(r22)
	r17.u64 = PPC_LOAD_U32(r22.u32 + 8);
	// addi r20,r11,-31840
	r20.s64 = r11.s64 + -31840;
	// lis r11,2
	r11.s64 = 131072;
	// stw r29,276(r31)
	PPC_STORE_U32(r31.u32 + 276, r29.u32);
	// mr r18,r4
	r18.u64 = ctx.r4.u64;
	// mr r23,r26
	r23.u64 = r26.u64;
	// addi r25,r29,124
	r25.s64 = r29.s64 + 124;
	// stb r26,0(r19)
	PPC_STORE_U8(r19.u32 + 0, r26.u8);
	// ori r24,r11,32852
	r24.u64 = r11.u64 | 32852;
loc_8302EB60:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82ff6188
	sub_82FF6188(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x8302ebcc
	if (cr6.eq) goto loc_8302EBCC;
	// clrlwi r11,r30,16
	r11.u64 = r30.u32 & 0xFFFF;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(r11.u32, 47, xer);
	// beq cr6,0x8302ebcc
	if (cr6.eq) goto loc_8302EBCC;
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(r11.u32, 62, xer);
	// beq cr6,0x8302ebcc
	if (cr6.eq) goto loc_8302EBCC;
	// lwz r10,132(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 132);
	// lwzx r10,r10,r24
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r24.u32);
	// lbzx r11,r10,r11
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8302ebc0
	if (cr0.eq) goto loc_8302EBC0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82ff6188
	sub_82FF6188(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8302ebcc
	goto loc_8302EBCC;
loc_8302EBC0:
	// li r4,207
	ctx.r4.s64 = 207;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_8302EBCC:
	// lwz r10,132(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 132);
	// clrlwi r11,r30,16
	r11.u64 = r30.u32 & 0xFFFF;
	// lwzx r10,r10,r24
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r24.u32);
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8302ee3c
	if (!cr0.eq) goto loc_8302EE3C;
	// addi r30,r29,232
	r30.s64 = r29.s64 + 232;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// stw r26,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r26.u32);
	// sth r26,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r26.u16);
	// lwz r3,132(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 132);
	// bl 0x82ffb090
	sub_82FFB090(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// beq 0x8302ee9c
	if (cr0.eq) goto loc_8302EE9C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ff0278
	sub_82FF0278(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8302ec70
	if (!cr0.eq) goto loc_8302EC70;
	// li r4,180
	ctx.r4.s64 = 180;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x82ff6498
	sub_82FF6498(ctx, base);
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(r11.u32, 62, xer);
	// beq cr6,0x8302eb60
	if (cr6.eq) goto loc_8302EB60;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(r11.u32, 47, xer);
	// beq cr6,0x8302eb60
	if (cr6.eq) goto loc_8302EB60;
	// cmplwi cr6,r11,39
	cr6.compare<uint32_t>(r11.u32, 39, xer);
	// beq cr6,0x8302ec70
	if (cr6.eq) goto loc_8302EC70;
	// cmplwi cr6,r11,34
	cr6.compare<uint32_t>(r11.u32, 34, xer);
	// beq cr6,0x8302ec70
	if (cr6.eq) goto loc_8302EC70;
	// lwz r10,132(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 132);
	// lwzx r10,r10,r24
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r24.u32);
	// lbzx r11,r10,r11
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8302eeb4
	if (cr0.eq) goto loc_8302EEB4;
loc_8302EC70:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r28,r29,260
	r28.s64 = r29.s64 + 260;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// sthx r26,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r26.u16);
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// bl 0x8302d570
	sub_8302D570(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8302ecdc
	if (!cr0.eq) goto loc_8302ECDC;
	// li r4,199
	ctx.r4.s64 = 199;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x82ff6498
	sub_82FF6498(ctx, base);
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(r11.u32, 62, xer);
	// beq cr6,0x8302ecdc
	if (cr6.eq) goto loc_8302ECDC;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(r11.u32, 47, xer);
	// beq cr6,0x8302ecdc
	if (cr6.eq) goto loc_8302ECDC;
	// lwz r10,132(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 132);
	// lwzx r10,r10,r24
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r24.u32);
	// lbzx r11,r10,r11
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8302eeb4
	if (cr0.eq) goto loc_8302EEB4;
loc_8302ECDC:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r4,58
	ctx.r4.s64 = 58;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r26,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r26.u16);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// bl 0x82fda0f8
	sub_82FDA0F8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,-1
	cr6.compare<int32_t>(r27.s32, -1, xer);
	// beq cr6,0x8302ed94
	if (cr6.eq) goto loc_8302ED94;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r26,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r26.u16);
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8302ed50
	if (cr0.eq) goto loc_8302ED50;
	// lhz r11,0(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8302ed50
	if (cr0.eq) goto loc_8302ED50;
	// addi r11,r4,2
	r11.s64 = ctx.r4.s64 + 2;
	// b 0x8302ed38
	goto loc_8302ED38;
loc_8302ED34:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
loc_8302ED38:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8302ed34
	if (!cr0.eq) goto loc_8302ED34;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r5,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r5.s64 = r11.s32 >> 1;
	// b 0x8302ed54
	goto loc_8302ED54;
loc_8302ED50:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
loc_8302ED54:
	// li r3,58
	ctx.r3.s64 = 58;
	// bl 0x82fda210
	sub_82FDA210(ctx, base);
	// cmpw cr6,r27,r3
	cr6.compare<int32_t>(r27.s32, ctx.r3.s32, xer);
	// beq cr6,0x8302ed6c
	if (cr6.eq) goto loc_8302ED6C;
	// li r4,288
	ctx.r4.s64 = 288;
	// b 0x8302ed88
	goto loc_8302ED88;
loc_8302ED6C:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x8302ed84
	if (cr6.eq) goto loc_8302ED84;
	// lwz r11,236(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 236);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bne cr6,0x8302ed94
	if (!cr6.eq) goto loc_8302ED94;
loc_8302ED84:
	// li r4,289
	ctx.r4.s64 = 289;
loc_8302ED88:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// b 0x8302eb60
	goto loc_8302EB60;
loc_8302ED94:
	// cmplw cr6,r23,r17
	cr6.compare<uint32_t>(r23.u32, r17.u32, xer);
	// blt cr6,0x8302edfc
	if (cr6.lt) goto loc_8302EDFC;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,216(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8302edec
	if (cr0.eq) goto loc_8302EDEC;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r26,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r26.u16);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,24(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// sthx r26,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r26.u16);
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r6,216(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 216);
	// bl 0x8304ddf8
	sub_8304DDF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8302edf0
	goto loc_8302EDF0;
loc_8302EDEC:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_8302EDF0:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x83043678
	sub_83043678(ctx, base);
	// b 0x8302ee34
	goto loc_8302EE34;
loc_8302EDFC:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x83020000
	sub_83020000(ctx, base);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r26,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r26.u16);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,24(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// sthx r26,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r26.u16);
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// bl 0x8304dc48
	sub_8304DC48(ctx, base);
loc_8302EE34:
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// b 0x8302eb60
	goto loc_8302EB60;
loc_8302EE3C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8302eee8
	if (cr6.eq) goto loc_8302EEE8;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(r11.u32, 47, xer);
	// beq cr6,0x8302ef14
	if (cr6.eq) goto loc_8302EF14;
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(r11.u32, 62, xer);
	// beq cr6,0x8302ef3c
	if (cr6.eq) goto loc_8302EF3C;
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(r11.u32, 60, xer);
	// beq cr6,0x8302eec0
	if (cr6.eq) goto loc_8302EEC0;
	// cmplwi cr6,r11,39
	cr6.compare<uint32_t>(r11.u32, 39, xer);
	// beq cr6,0x8302ee6c
	if (cr6.eq) goto loc_8302EE6C;
	// cmplwi cr6,r11,34
	cr6.compare<uint32_t>(r11.u32, 34, xer);
	// bne cr6,0x8302eb60
	if (!cr6.eq) goto loc_8302EB60;
loc_8302EE6C:
	// li r4,174
	ctx.r4.s64 = 174;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82ff63e0
	sub_82FF63E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
	// b 0x8302eb60
	goto loc_8302EB60;
loc_8302EE9C:
	// li r4,174
	ctx.r4.s64 = 174;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
	// b 0x8302eedc
	goto loc_8302EEDC;
loc_8302EEB4:
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(r11.u32, 60, xer);
	// bne cr6,0x8302eedc
	if (!cr6.eq) goto loc_8302EEDC;
loc_8302EEC0:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,198
	ctx.r4.s64 = 198;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
loc_8302EEDC:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r31,256
	ctx.r1.s64 = r31.s64 + 256;
	// b 0x831b0b4c
	return;
loc_8302EEE8:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,216(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 216);
	// li r6,47
	ctx.r6.s64 = 47;
	// addi r4,r11,28392
	ctx.r4.s64 = r11.s64 + 28392;
	// li r5,693
	ctx.r5.s64 = 693;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82fefc90
	sub_82FEFC90(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,-8072
	ctx.r4.s64 = r11.s64 + -8072;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_8302EF14:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stb r11,0(r19)
	PPC_STORE_U8(r19.u32 + 0, r11.u8);
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8302eedc
	if (!cr0.eq) goto loc_8302EEDC;
	// b 0x8302eec0
	goto loc_8302EEC0;
loc_8302EF3C:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// b 0x8302eedc
	goto loc_8302EEDC;
}

__attribute__((alias("__imp__sub_8302EF48"))) PPC_WEAK_FUNC(sub_8302EF48);
PPC_FUNC_IMPL(__imp__sub_8302EF48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-256
	r31.s64 = r12.s64 + -256;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,276(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8302EF80"))) PPC_WEAK_FUNC(sub_8302EF80);
PPC_FUNC_IMPL(__imp__sub_8302EF80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,216(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// lwz r11,480(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 480);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// stw r11,484(r30)
	PPC_STORE_U32(r30.u32 + 484, r11.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq 0x8302effc
	if (cr0.eq) goto loc_8302EFFC;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,216(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83043458
	sub_83043458(ctx, base);
	// lis r11,-32233
	r11.s64 = -2112421888;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// addi r11,r11,2232
	r11.s64 = r11.s64 + 2232;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x8302f000
	goto loc_8302F000;
loc_8302EFFC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8302F000:
	// li r3,104
	ctx.r3.s64 = 104;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// stw r10,520(r30)
	PPC_STORE_U32(r30.u32 + 520, ctx.r10.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8302f030
	if (cr0.eq) goto loc_8302F030;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,216(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x8305d650
	sub_8305D650(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8302f034
	goto loc_8302F034;
loc_8302F030:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8302F034:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r4,528(r30)
	PPC_STORE_U32(r30.u32 + 528, ctx.r4.u32);
	// bl 0x82feffa8
	sub_82FEFFA8(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8302f06c
	if (cr0.eq) goto loc_8302F06C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,216(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x8305c2f8
	sub_8305C2F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x8302f070
	goto loc_8302F070;
loc_8302F06C:
	// li r11,0
	r11.s64 = 0;
loc_8302F070:
	// li r3,16
	ctx.r3.s64 = 16;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// stw r11,532(r30)
	PPC_STORE_U32(r30.u32 + 532, r11.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8302f09c
	if (cr0.eq) goto loc_8302F09C;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r5,216(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x8302e7f8
	sub_8302E7F8(ctx, base);
	// b 0x8302f0a0
	goto loc_8302F0A0;
loc_8302F09C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8302F0A0:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// stw r3,516(r30)
	PPC_STORE_U32(r30.u32 + 516, ctx.r3.u32);
	// addi r29,r11,28288
	r29.s64 = r11.s64 + 28288;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r11,-27784
	ctx.r4.s64 = r11.s64 + -27784;
	// bl 0x8302e958
	sub_8302E958(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r5,r29,12
	ctx.r5.s64 = r29.s64 + 12;
	// lwz r3,516(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 516);
	// addi r4,r11,-27776
	ctx.r4.s64 = r11.s64 + -27776;
	// bl 0x8302e958
	sub_8302E958(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r5,r29,4
	ctx.r5.s64 = r29.s64 + 4;
	// lwz r3,516(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 516);
	// addi r4,r11,-27768
	ctx.r4.s64 = r11.s64 + -27768;
	// bl 0x8302e958
	sub_8302E958(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r5,r29,8
	ctx.r5.s64 = r29.s64 + 8;
	// lwz r3,516(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 516);
	// addi r4,r11,-27760
	ctx.r4.s64 = r11.s64 + -27760;
	// bl 0x8302e958
	sub_8302E958(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r5,r29,16
	ctx.r5.s64 = r29.s64 + 16;
	// lwz r3,516(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 516);
	// addi r4,r11,-27748
	ctx.r4.s64 = r11.s64 + -27748;
	// bl 0x8302e958
	sub_8302E958(ctx, base);
	// li r3,32
	ctx.r3.s64 = 32;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8302f140
	if (cr0.eq) goto loc_8302F140;
	// li r6,128
	ctx.r6.s64 = 128;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x830206b0
	sub_830206B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x8302f144
	goto loc_8302F144;
loc_8302F140:
	// li r11,0
	r11.s64 = 0;
loc_8302F144:
	// li r3,28
	ctx.r3.s64 = 28;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// stw r11,536(r30)
	PPC_STORE_U32(r30.u32 + 536, r11.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq 0x8302f1a4
	if (cr0.eq) goto loc_8302F1A4;
	// li r3,4
	ctx.r3.s64 = 4;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8302f184
	if (cr0.eq) goto loc_8302F184;
	// bl 0x83007488
	sub_83007488(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x8302f188
	goto loc_8302F188;
loc_8302F184:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8302F188:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,131
	ctx.r4.s64 = 131;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83043618
	sub_83043618(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x8302f1a8
	goto loc_8302F1A8;
loc_8302F1A4:
	// li r11,0
	r11.s64 = 0;
loc_8302F1A8:
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// stw r11,544(r30)
	PPC_STORE_U32(r30.u32 + 544, r11.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// beq 0x8302f208
	if (cr0.eq) goto loc_8302F208;
	// li r3,4
	ctx.r3.s64 = 4;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8302f1e8
	if (cr0.eq) goto loc_8302F1E8;
	// bl 0x83017920
	sub_83017920(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x8302f1ec
	goto loc_8302F1EC;
loc_8302F1E8:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8302F1EC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83020a30
	sub_83020A30(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x8302f20c
	goto loc_8302F20C;
loc_8302F208:
	// li r11,0
	r11.s64 = 0;
loc_8302F20C:
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// stw r11,548(r30)
	PPC_STORE_U32(r30.u32 + 548, r11.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8302f234
	if (cr0.eq) goto loc_8302F234;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82ff4ab0
	sub_82FF4AB0(ctx, base);
	// b 0x8302f238
	goto loc_8302F238;
loc_8302F234:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8302F238:
	// stw r3,552(r30)
	PPC_STORE_U32(r30.u32 + 552, ctx.r3.u32);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8302F244"))) PPC_WEAK_FUNC(sub_8302F244);
PPC_FUNC_IMPL(__imp__sub_8302F244) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8302F274"))) PPC_WEAK_FUNC(sub_8302F274);
PPC_FUNC_IMPL(__imp__sub_8302F274) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8302F2A4"))) PPC_WEAK_FUNC(sub_8302F2A4);
PPC_FUNC_IMPL(__imp__sub_8302F2A4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8302F2D4"))) PPC_WEAK_FUNC(sub_8302F2D4);
PPC_FUNC_IMPL(__imp__sub_8302F2D4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8302F304"))) PPC_WEAK_FUNC(sub_8302F304);
PPC_FUNC_IMPL(__imp__sub_8302F304) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8302F334"))) PPC_WEAK_FUNC(sub_8302F334);
PPC_FUNC_IMPL(__imp__sub_8302F334) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8302F364"))) PPC_WEAK_FUNC(sub_8302F364);
PPC_FUNC_IMPL(__imp__sub_8302F364) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8302F394"))) PPC_WEAK_FUNC(sub_8302F394);
PPC_FUNC_IMPL(__imp__sub_8302F394) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8302F3C4"))) PPC_WEAK_FUNC(sub_8302F3C4);
PPC_FUNC_IMPL(__imp__sub_8302F3C4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8302F3F4"))) PPC_WEAK_FUNC(sub_8302F3F4);
PPC_FUNC_IMPL(__imp__sub_8302F3F4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8302F430"))) PPC_WEAK_FUNC(sub_8302F430);
PPC_FUNC_IMPL(__imp__sub_8302F430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0af0
	// addi r31,r1,-608
	r31.s64 = ctx.r1.s64 + -608;
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r4,636(r31)
	PPC_STORE_U32(r31.u32 + 636, ctx.r4.u32);
	// li r22,0
	r22.s64 = 0;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r29,r22
	r29.u64 = r22.u64;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// stw r30,628(r31)
	PPC_STORE_U32(r31.u32 + 628, r30.u32);
	// stw r21,652(r31)
	PPC_STORE_U32(r31.u32 + 652, r21.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r28,644(r31)
	PPC_STORE_U32(r31.u32 + 644, r28.u32);
	// stw r26,660(r31)
	PPC_STORE_U32(r31.u32 + 660, r26.u32);
	// stw r22,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r22.u32);
	// stw r29,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r29.u32);
	// beq 0x8302f4c0
	if (cr0.eq) goto loc_8302F4C0;
	// lwz r11,168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8302f4a0
	if (cr0.eq) goto loc_8302F4A0;
	// stw r29,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r29.u32);
	// b 0x8302f4b4
	goto loc_8302F4B4;
loc_8302F4A0:
	// bl 0x83020b18
	sub_83020B18(ctx, base);
	// lwz r29,0(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// stw r29,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r29.u32);
	// bne 0x8302f4fc
	if (!cr0.eq) goto loc_8302F4FC;
loc_8302F4B4:
	// lwz r11,168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
loc_8302F4C0:
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8302F4D4:
	// lwz r11,540(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 540);
	// clrlwi. r27,r3,24
	r27.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r27,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r27.u32);
	// stw r11,540(r30)
	PPC_STORE_U32(r30.u32 + 540, r11.u32);
	// bne 0x8302f514
	if (!cr0.eq) goto loc_8302F514;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x8302f514
	if (!cr6.eq) goto loc_8302F514;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8303063c
	goto loc_8303063C;
loc_8302F4FC:
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8302f4c0
	if (cr0.eq) goto loc_8302F4C0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83048ca0
	sub_83048CA0(ctx, base);
	// b 0x8302f4d4
	goto loc_8302F4D4;
loc_8302F514:
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// addi r25,r30,220
	r25.s64 = r30.s64 + 220;
	// mr r26,r22
	r26.u64 = r22.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r25,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r25.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// stw r26,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r26.u32);
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// stw r25,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r25.u32);
	// stw r18,176(r31)
	PPC_STORE_U32(r31.u32 + 176, r18.u32);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// stw r4,120(r31)
	PPC_STORE_U32(r31.u32 + 120, ctx.r4.u32);
	// beq cr6,0x8303022c
	if (cr6.eq) goto loc_8303022C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lis r14,-31942
	r14.s64 = -2093350912;
	// addi r11,r11,-5500
	r11.s64 = r11.s64 + -5500;
	// stw r11,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r11.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r11,r11,-5436
	r11.s64 = r11.s64 + -5436;
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r27,r11,-8744
	r27.s64 = r11.s64 + -8744;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r11,r11,-28120
	r11.s64 = r11.s64 + -28120;
	// stw r27,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r27.u32);
	// stw r11,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r11.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r11,r11,-27800
	r11.s64 = r11.s64 + -27800;
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
	// b 0x8302f598
	goto loc_8302F598;
loc_8302F594:
	// lwz r27,156(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 156);
loc_8302F598:
	// lwz r3,636(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 636);
	// li r19,2
	r19.s64 = 2;
	// li r17,2
	r17.s64 = 2;
	// bl 0x8302dd08
	sub_8302DD08(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stw r22,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r22.u32);
	// stw r22,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r22.u32);
	// lwz r26,8(r24)
	r26.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// li r4,58
	ctx.r4.s64 = 58;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82fda0f8
	sub_82FDA0F8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r15,144(r31)
	r15.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(r28.s32, -1, xer);
	// beq cr6,0x8302f66c
	if (cr6.eq) goto loc_8302F66C;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8302f60c
	if (cr6.eq) goto loc_8302F60C;
	// lhz r11,0(r26)
	r11.u64 = PPC_LOAD_U16(r26.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8302f60c
	if (cr0.eq) goto loc_8302F60C;
	// addi r11,r26,2
	r11.s64 = r26.s64 + 2;
	// b 0x8302f5f4
	goto loc_8302F5F4;
loc_8302F5F0:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
loc_8302F5F4:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8302f5f0
	if (!cr0.eq) goto loc_8302F5F0;
	// subf r11,r26,r11
	r11.s64 = r11.s64 - r26.s64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// b 0x8302f610
	goto loc_8302F610;
loc_8302F60C:
	// mr r11,r22
	r11.u64 = r22.u64;
loc_8302F610:
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(r11.u32, 100, xer);
	// bge cr6,0x8302f630
	if (!cr6.lt) goto loc_8302F630;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
	// bl 0x82fd9eb0
	sub_82FD9EB0(ctx, base);
	// addi r10,r31,256
	ctx.r10.s64 = r31.s64 + 256;
	// addi r15,r31,256
	r15.s64 = r31.s64 + 256;
	// b 0x8302f658
	goto loc_8302F658;
loc_8302F630:
	// lwz r29,216(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x8302dd68
	sub_8302DD68(ctx, base);
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// mr r15,r10
	r15.u64 = ctx.r10.u64;
loc_8302F658:
	// rlwinm r11,r28,1,0,30
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r22,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r22.u16);
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// addi r20,r11,2
	r20.s64 = r11.s64 + 2;
	// b 0x8302f670
	goto loc_8302F670;
loc_8302F66C:
	// mr r20,r26
	r20.u64 = r26.u64;
loc_8302F670:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8302cd78
	sub_8302CD78(ctx, base);
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// cmplw cr6,r21,r11
	cr6.compare<uint32_t>(r21.u32, r11.u32, xer);
	// beq cr6,0x8302f6d0
	if (cr6.eq) goto loc_8302F6D0;
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cmplw cr6,r21,r11
	cr6.compare<uint32_t>(r21.u32, r11.u32, xer);
	// beq cr6,0x8302f6d0
	if (cr6.eq) goto loc_8302F6D0;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r4,136(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8302f6d0
	if (!cr0.eq) goto loc_8302F6D0;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0008
	sub_82FF0008(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r11,r22
	r11.u64 = r22.u64;
	// beq 0x8302f6d4
	if (cr0.eq) goto loc_8302F6D4;
loc_8302F6D0:
	// li r11,1
	r11.s64 = 1;
loc_8302F6D4:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r29,r22
	r29.u64 = r22.u64;
	// mr r16,r22
	r16.u64 = r22.u64;
	// bne 0x83030024
	if (!cr0.eq) goto loc_83030024;
	// mr r25,r22
	r25.u64 = r22.u64;
	// lwz r11,476(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// stb r22,97(r31)
	PPC_STORE_U8(r31.u32 + 97, r22.u8);
	// mr r23,r22
	r23.u64 = r22.u64;
	// mr r27,r22
	r27.u64 = r22.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// stb r25,96(r31)
	PPC_STORE_U8(r31.u32 + 96, r25.u8);
	// bne cr6,0x8302f9f8
	if (!cr6.eq) goto loc_8302F9F8;
	// lwz r28,108(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8302f74c
	if (cr6.eq) goto loc_8302F74C;
	// lwz r3,76(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 76);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8302f720
	if (!cr0.eq) goto loc_8302F720;
	// b 0x8302f744
	goto loc_8302F744;
loc_8302F720:
	// addi r6,r31,200
	ctx.r6.s64 = r31.s64 + 200;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x82fea480
	sub_82FEA480(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r11,r22
	r11.u64 = r22.u64;
	// beq 0x8302f740
	if (cr0.eq) goto loc_8302F740;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8302F740:
	// mr r27,r11
	r27.u64 = r11.u64;
loc_8302F744:
	// lwz r4,64(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 64);
	// b 0x8302f760
	goto loc_8302F760;
loc_8302F74C:
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8302f9f8
	if (!cr6.eq) goto loc_8302F9F8;
	// lwz r11,652(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 652);
	// lwz r4,76(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 76);
loc_8302F760:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8302f774
	if (cr6.eq) goto loc_8302F774;
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8302f968
	if (!cr6.eq) goto loc_8302F968;
loc_8302F774:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8302f810
	if (cr6.eq) goto loc_8302F810;
	// addi r7,r31,97
	ctx.r7.s64 = r31.s64 + 97;
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8302e6f8
	sub_8302E6F8(ctx, base);
	// lbz r25,96(r31)
	r25.u64 = PPC_LOAD_U8(r31.u32 + 96);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8302f968
	if (cr0.eq) goto loc_8302F968;
	// mr. r11,r25
	r11.u64 = r25.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8302f968
	if (!cr0.eq) goto loc_8302F968;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0008
	sub_82FF0008(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,176(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// bl 0x82feeed8
	sub_82FEEED8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x8302f968
	if (cr0.eq) goto loc_8302F968;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8302f968
	if (!cr6.eq) goto loc_8302F968;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8302f968
	if (cr0.eq) goto loc_8302F968;
	// addi r5,r31,164
	ctx.r5.s64 = r31.s64 + 164;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8302f808
	if (!cr0.eq) goto loc_8302F808;
	// mr r23,r22
	r23.u64 = r22.u64;
	// b 0x8302f968
	goto loc_8302F968;
loc_8302F808:
	// lwz r23,0(r3)
	r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8302f968
	goto loc_8302F968;
loc_8302F810:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8302f968
	if (cr6.eq) goto loc_8302F968;
	// lwz r5,40(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// cmplw cr6,r21,r5
	cr6.compare<uint32_t>(r21.u32, ctx.r5.u32, xer);
	// bne cr6,0x8302f8cc
	if (!cr6.eq) goto loc_8302F8CC;
	// lwz r3,184(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,20(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,192(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,76(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 76);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8302f86c
	if (!cr0.eq) goto loc_8302F86C;
	// mr r27,r22
	r27.u64 = r22.u64;
	// b 0x8302f890
	goto loc_8302F890;
loc_8302F86C:
	// addi r6,r31,232
	ctx.r6.s64 = r31.s64 + 232;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82fea480
	sub_82FEA480(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r11,r22
	r11.u64 = r22.u64;
	// beq 0x8302f88c
	if (cr0.eq) goto loc_8302F88C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8302F88C:
	// mr r27,r11
	r27.u64 = r11.u64;
loc_8302F890:
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8302f968
	if (cr0.eq) goto loc_8302F968;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8302f9f8
	if (cr6.eq) goto loc_8302F9F8;
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8302f968
	if (cr6.eq) goto loc_8302F968;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,95
	ctx.r4.s64 = 95;
	// b 0x8302f938
	goto loc_8302F938;
loc_8302F8CC:
	// lwz r3,76(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 76);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8302f8e0
	if (!cr0.eq) goto loc_8302F8E0;
	// mr r27,r22
	r27.u64 = r22.u64;
	// b 0x8302f900
	goto loc_8302F900;
loc_8302F8E0:
	// addi r6,r31,168
	ctx.r6.s64 = r31.s64 + 168;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x82fea480
	sub_82FEA480(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r11,r22
	r11.u64 = r22.u64;
	// beq 0x8302f8fc
	if (cr0.eq) goto loc_8302F8FC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8302F8FC:
	// mr r27,r11
	r27.u64 = r11.u64;
loc_8302F900:
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8302f968
	if (cr0.eq) goto loc_8302F968;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8302f9f8
	if (cr6.eq) goto loc_8302F9F8;
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8302f968
	if (cr6.eq) goto loc_8302F968;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,96
	ctx.r4.s64 = 96;
loc_8302F938:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stb r10,569(r30)
	PPC_STORE_U8(r30.u32 + 569, ctx.r10.u8);
	// beq 0x8302f968
	if (cr0.eq) goto loc_8302F968;
	// li r19,1
	r19.s64 = 1;
loc_8302F968:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8302f9f8
	if (cr6.eq) goto loc_8302F9F8;
	// addi r5,r31,172
	ctx.r5.s64 = r31.s64 + 172;
	// lwz r3,544(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 544);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8302f994
	if (cr0.eq) goto loc_8302F994;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8302f9b8
	if (!cr0.eq) goto loc_8302F9B8;
loc_8302F994:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff02e0
	sub_82FF02E0(ctx, base);
	// lwz r11,540(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 540);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// lwz r3,544(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 544);
	// bl 0x83020968
	sub_83020968(ctx, base);
	// b 0x8302fa90
	goto loc_8302FA90;
loc_8302F9B8:
	// lwz r10,540(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 540);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// blt cr6,0x8302fa58
	if (cr6.lt) goto loc_8302FA58;
	// lwz r11,652(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 652);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// b 0x8302fa74
	goto loc_8302FA74;
loc_8302F9F8:
	// addi r6,r31,216
	ctx.r6.s64 = r31.s64 + 216;
	// lwz r3,548(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 548);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x82fea480
	sub_82FEA480(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8302fa20
	if (cr0.eq) goto loc_8302FA20;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8302fa48
	if (!cr0.eq) goto loc_8302FA48;
loc_8302FA20:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff02e0
	sub_82FF02E0(ctx, base);
	// lwz r11,540(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 540);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// lwz r3,548(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 548);
	// bl 0x83072d30
	sub_83072D30(ctx, base);
	// b 0x8302fa90
	goto loc_8302FA90;
loc_8302FA48:
	// lwz r10,540(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 540);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x8302fa60
	if (!cr6.lt) goto loc_8302FA60;
loc_8302FA58:
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x8302fa90
	goto loc_8302FA90;
loc_8302FA60:
	// lwz r11,652(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 652);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
loc_8302FA74:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,247
	ctx.r4.s64 = 247;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,569(r30)
	PPC_STORE_U8(r30.u32 + 569, r11.u8);
loc_8302FA90:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x8302faf8
	if (!cr6.eq) goto loc_8302FAF8;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// bne cr6,0x8302faf8
	if (!cr6.eq) goto loc_8302FAF8;
	// lbz r10,97(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 97);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8302fabc
	if (!cr0.eq) goto loc_8302FABC;
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8302fabc
	if (!cr0.eq) goto loc_8302FABC;
	// li r11,1
	r11.s64 = 1;
	// stb r11,569(r30)
	PPC_STORE_U8(r30.u32 + 569, r11.u8);
loc_8302FABC:
	// lwz r11,112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8302faf8
	if (cr0.eq) goto loc_8302FAF8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8302fae8
	if (!cr6.eq) goto loc_8302FAE8;
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8302fae0
	if (!cr0.eq) goto loc_8302FAE0;
	// li r19,1
	r19.s64 = 1;
	// b 0x8302faf8
	goto loc_8302FAF8;
loc_8302FAE0:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8302faf0
	if (cr6.eq) goto loc_8302FAF0;
loc_8302FAE8:
	// li r17,1
	r17.s64 = 1;
	// b 0x8302faf4
	goto loc_8302FAF4;
loc_8302FAF0:
	// mr r17,r22
	r17.u64 = r22.u64;
loc_8302FAF4:
	// mr r19,r22
	r19.u64 = r22.u64;
loc_8302FAF8:
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8302fb18
	if (cr0.eq) goto loc_8302FB18;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// bne cr6,0x8302fb18
	if (!cr6.eq) goto loc_8302FB18;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x8302fb1c
	if (cr6.eq) goto loc_8302FB1C;
loc_8302FB18:
	// mr r11,r22
	r11.u64 = r22.u64;
loc_8302FB1C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8302fc20
	if (cr0.eq) goto loc_8302FC20;
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8302fc20
	if (!cr0.eq) goto loc_8302FC20;
	// lbz r11,97(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 97);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8302fc20
	if (!cr0.eq) goto loc_8302FC20;
	// lwz r28,100(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r28,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r28.u32);
	// stw r29,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r29.u32);
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// cmplw cr6,r21,r11
	cr6.compare<uint32_t>(r21.u32, r11.u32, xer);
	// beq cr6,0x8302fbcc
	if (cr6.eq) goto loc_8302FBCC;
	// rotlwi r3,r28,0
	ctx.r3.u64 = __builtin_rotateleft32(r28.u32, 0);
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r11,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r11.u32);
	// stw r28,208(r31)
	PPC_STORE_U32(r31.u32 + 208, r28.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0080
	sub_82FF0080(ctx, base);
	// li r4,123
	ctx.r4.s64 = 123;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// sthx r22,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r22.u16);
	// lwz r4,24(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// li r4,125
	ctx.r4.s64 = 125;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// lwz r28,100(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 100);
loc_8302FBCC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// lwz r11,652(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 652);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,17
	ctx.r4.s64 = 17;
	// sthx r22,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r22.u16);
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// bl 0x8301f560
	sub_8301F560(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
loc_8302FC20:
	// lwz r6,16(r24)
	ctx.r6.u64 = PPC_LOAD_U32(r24.u32 + 16);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq cr6,0x8302fd68
	if (cr6.eq) goto loc_8302FD68;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x8302ca40
	sub_8302CA40(ctx, base);
	// lbz r11,24(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 24);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8302fcd0
	if (cr0.eq) goto loc_8302FCD0;
	// lwz r28,44(r23)
	r28.u64 = PPC_LOAD_U32(r23.u32 + 44);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// beq 0x8302fcd0
	if (cr0.eq) goto loc_8302FCD0;
	// lhz r11,10(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 10);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8302fcd0
	if (cr0.eq) goto loc_8302FCD0;
	// lwz r26,100(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r26,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r26.u32);
	// stw r29,224(r31)
	PPC_STORE_U32(r31.u32 + 224, r29.u32);
	// lwz r11,4(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 4);
	// lwz r10,24(r18)
	ctx.r10.u64 = PPC_LOAD_U32(r18.u32 + 24);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// sthx r22,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r22.u16);
	// lwz r5,24(r18)
	ctx.r5.u64 = PPC_LOAD_U32(r18.u32 + 24);
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// bl 0x8305c9e0
	sub_8305C9E0(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r22,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r22.u16);
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// stw r22,4(r18)
	PPC_STORE_U32(r18.u32 + 4, r22.u32);
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
loc_8302FCD0:
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8302fd40
	if (cr0.eq) goto loc_8302FD40;
	// lwz r11,4(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,24(r18)
	ctx.r10.u64 = PPC_LOAD_U32(r18.u32 + 24);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,652(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 652);
	// sthx r22,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r22.u16);
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// lwz r5,24(r18)
	ctx.r5.u64 = PPC_LOAD_U32(r18.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// lbz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 100);
	// lwz r25,96(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8302fd60
	if (cr0.eq) goto loc_8302FD60;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stb r10,569(r30)
	PPC_STORE_U8(r30.u32 + 569, ctx.r10.u8);
	// beq 0x8302fd60
	if (cr0.eq) goto loc_8302FD60;
	// li r19,1
	r19.s64 = 1;
	// b 0x8302fd60
	goto loc_8302FD60;
loc_8302FD40:
	// addi r5,r31,184
	ctx.r5.s64 = r31.s64 + 184;
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// lwz r3,-15772(r14)
	ctx.r3.u64 = PPC_LOAD_U32(r14.u32 + -15772);
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r25,r22
	r25.u64 = r22.u64;
	// beq 0x8302fd60
	if (cr0.eq) goto loc_8302FD60;
	// lwz r25,0(r3)
	r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8302FD60:
	// lwz r24,8(r23)
	r24.u64 = PPC_LOAD_U32(r23.u32 + 8);
	// b 0x8302fed0
	goto loc_8302FED0;
loc_8302FD68:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8302ca40
	sub_8302CA40(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8302feac
	if (cr6.eq) goto loc_8302FEAC;
	// lbz r11,24(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 24);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8302fe14
	if (cr0.eq) goto loc_8302FE14;
	// lwz r11,476(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8302fe14
	if (!cr6.eq) goto loc_8302FE14;
	// lwz r28,44(r27)
	r28.u64 = PPC_LOAD_U32(r27.u32 + 44);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// beq 0x8302fe14
	if (cr0.eq) goto loc_8302FE14;
	// lhz r11,10(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 10);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8302fe14
	if (cr0.eq) goto loc_8302FE14;
	// lwz r26,100(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r26,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r26.u32);
	// stw r29,240(r31)
	PPC_STORE_U32(r31.u32 + 240, r29.u32);
	// lwz r11,4(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 4);
	// lwz r10,24(r18)
	ctx.r10.u64 = PPC_LOAD_U32(r18.u32 + 24);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// sthx r22,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r22.u16);
	// lwz r5,24(r18)
	ctx.r5.u64 = PPC_LOAD_U32(r18.u32 + 24);
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// bl 0x8305c9e0
	sub_8305C9E0(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r22,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r22.u16);
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// stw r22,4(r18)
	PPC_STORE_U32(r18.u32 + 4, r22.u32);
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
loc_8302FE14:
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8302fe8c
	if (cr0.eq) goto loc_8302FE8C;
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8302fe8c
	if (!cr0.eq) goto loc_8302FE8C;
	// lwz r11,4(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,24(r18)
	ctx.r10.u64 = PPC_LOAD_U32(r18.u32 + 24);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,652(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 652);
	// sthx r22,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r22.u16);
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// lwz r5,24(r18)
	ctx.r5.u64 = PPC_LOAD_U32(r18.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// lbz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 100);
	// lwz r25,96(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8302ff1c
	if (cr0.eq) goto loc_8302FF1C;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stb r10,569(r30)
	PPC_STORE_U8(r30.u32 + 569, ctx.r10.u8);
	// beq 0x8302ff1c
	if (cr0.eq) goto loc_8302FF1C;
	// li r19,1
	r19.s64 = 1;
	// b 0x8302ff1c
	goto loc_8302FF1C;
loc_8302FE8C:
	// addi r5,r31,248
	ctx.r5.s64 = r31.s64 + 248;
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// lwz r3,-15772(r14)
	ctx.r3.u64 = PPC_LOAD_U32(r14.u32 + -15772);
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8302ff18
	if (!cr0.eq) goto loc_8302FF18;
	// mr r25,r22
	r25.u64 = r22.u64;
	// b 0x8302ff1c
	goto loc_8302FF1C;
loc_8302FEAC:
	// addi r5,r31,152
	ctx.r5.s64 = r31.s64 + 152;
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// lwz r3,-15772(r14)
	ctx.r3.u64 = PPC_LOAD_U32(r14.u32 + -15772);
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8302ff18
	if (!cr0.eq) goto loc_8302FF18;
	// mr r25,r22
	r25.u64 = r22.u64;
loc_8302FEC8:
	// mr r11,r22
	r11.u64 = r22.u64;
loc_8302FECC:
	// mr r24,r11
	r24.u64 = r11.u64;
loc_8302FED0:
	// lwz r11,112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83030108
	if (cr0.eq) goto loc_83030108;
	// lwz r3,192(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// lwz r3,552(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 552);
	// bl 0x8302e9f0
	sub_8302E9F0(ctx, base);
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8302ff2c
	if (cr6.eq) goto loc_8302FF2C;
	// mr r29,r27
	r29.u64 = r27.u64;
	// b 0x8302ff38
	goto loc_8302FF38;
loc_8302FF18:
	// lwz r25,0(r3)
	r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8302FF1C:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8302fec8
	if (cr6.eq) goto loc_8302FEC8;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// b 0x8302fecc
	goto loc_8302FECC;
loc_8302FF2C:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x8302fff4
	if (cr6.eq) goto loc_8302FFF4;
	// mr r29,r23
	r29.u64 = r23.u64;
loc_8302FF38:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8302fff4
	if (cr6.eq) goto loc_8302FFF4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,556(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 556);
	// bl 0x83015c80
	sub_83015C80(ctx, base);
	// lwz r26,44(r29)
	r26.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r3,556(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 556);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x83015c80
	sub_83015C80(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r19,2
	cr6.compare<int32_t>(r19.s32, 2, xer);
	// beq cr6,0x8302ff9c
	if (cr6.eq) goto loc_8302FF9C;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,196(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r22.u32);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x83086430
	sub_83086430(ctx, base);
	// b 0x83030108
	goto loc_83030108;
loc_8302FF9C:
	// lwz r11,40(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x8302ffc4
	if (!cr6.eq) goto loc_8302FFC4;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,556(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 556);
	// bl 0x83015c80
	sub_83015C80(ctx, base);
	// mr r11,r25
	r11.u64 = r25.u64;
	// mr. r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x8302ffc8
	if (!cr0.eq) goto loc_8302FFC8;
loc_8302FFC4:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_8302FFC8:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r4,196(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x83086430
	sub_83086430(ctx, base);
	// b 0x83030108
	goto loc_83030108;
loc_8302FFF4:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,196(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r22.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x83086430
	sub_83086430(ctx, base);
	// b 0x83030108
	goto loc_83030108;
loc_83030024:
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// lwz r5,16(r24)
	ctx.r5.u64 = PPC_LOAD_U32(r24.u32 + 16);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r24,r22
	r24.u64 = r22.u64;
	// bl 0x8302cc88
	sub_8302CC88(ctx, base);
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// cmplw cr6,r21,r11
	cr6.compare<uint32_t>(r21.u32, r11.u32, xer);
	// beq cr6,0x83030064
	if (cr6.eq) goto loc_83030064;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0008
	sub_82FF0008(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83030084
	if (cr0.eq) goto loc_83030084;
loc_83030064:
	// addi r5,r31,160
	ctx.r5.s64 = r31.s64 + 160;
	// lwz r4,148(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// lwz r3,-15772(r14)
	ctx.r3.u64 = PPC_LOAD_U32(r14.u32 + -15772);
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r29,r22
	r29.u64 = r22.u64;
	// beq 0x83030084
	if (cr0.eq) goto loc_83030084;
	// lwz r29,0(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83030084:
	// lwz r11,112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83030108
	if (cr0.eq) goto loc_83030108;
	// lwz r3,192(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// lwz r3,552(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 552);
	// bl 0x8302e9f0
	sub_8302E9F0(ctx, base);
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x830300e0
	if (cr6.eq) goto loc_830300E0;
	// lwz r3,556(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 556);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830300e0
	if (cr0.eq) goto loc_830300E0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83015c80
	sub_83015C80(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_830300E0:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,196(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x83086430
	sub_83086430(ctx, base);
loc_83030108:
	// lwz r27,104(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x83030184
	if (cr6.lt) goto loc_83030184;
	// li r3,32
	ctx.r3.s64 = 32;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83030170
	if (cr0.eq) goto loc_83030170;
	// lwz r11,4(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 4);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,24(r18)
	ctx.r10.u64 = PPC_LOAD_U32(r18.u32 + 24);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stb r22,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, r22.u8);
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// sthx r22,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r22.u16);
	// lwz r7,24(r18)
	ctx.r7.u64 = PPC_LOAD_U32(r18.u32 + 24);
	// lwz r10,216(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82ff9d30
	sub_82FF9D30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83030174
	goto loc_83030174;
loc_83030170:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
loc_83030174:
	// lwz r3,660(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 660);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x83043678
	sub_83043678(ctx, base);
	// b 0x830301dc
	goto loc_830301DC;
loc_83030184:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,660(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 660);
	// bl 0x83020000
	sub_83020000(ctx, base);
	// lwz r11,4(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 4);
	// lwz r10,24(r18)
	ctx.r10.u64 = PPC_LOAD_U32(r18.u32 + 24);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// sthx r22,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r22.u16);
	// lwz r28,24(r18)
	r28.u64 = PPC_LOAD_U32(r18.u32 + 24);
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// bl 0x82fe6e90
	sub_82FE6E90(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff9c08
	sub_82FF9C08(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r24,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r24.u32);
	// stb r22,28(r29)
	PPC_STORE_U8(r29.u32 + 28, r22.u8);
	// stw r22,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r22.u32);
	// stb r11,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r11.u8);
loc_830301DC:
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// beq cr6,0x830301f0
	if (cr6.eq) goto loc_830301F0;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// bl 0x830864a8
	sub_830864A8(ctx, base);
loc_830301F0:
	// addi r26,r27,1
	r26.s64 = r27.s64 + 1;
	// stw r26,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r26.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82fdae08
	sub_82FDAE08(ctx, base);
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// lwz r11,644(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 644);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// stw r4,120(r31)
	PPC_STORE_U32(r31.u32 + 120, ctx.r4.u32);
	// blt cr6,0x8302f594
	if (cr6.lt) goto loc_8302F594;
	// lwz r25,100(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r27,140(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// lwz r29,108(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r21,652(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + 652);
loc_8303022C:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8303062c
	if (cr6.eq) goto loc_8303062C;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x83030248
	if (cr6.eq) goto loc_83030248;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830486f8
	sub_830486F8(ctx, base);
	// b 0x8303025c
	goto loc_8303025C;
loc_83030248:
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8303025C:
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r23,r22
	r23.u64 = r22.u64;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8303062c
	if (cr0.eq) goto loc_8303062C;
loc_8303027C:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,544(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 544);
	// addi r5,r31,160
	ctx.r5.s64 = r31.s64 + 160;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r27,4(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83030364
	if (cr0.eq) goto loc_83030364;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83030364
	if (cr0.eq) goto loc_83030364;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,540(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 540);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83030364
	if (cr6.lt) goto loc_83030364;
	// cmpwi cr6,r27,8
	cr6.compare<int32_t>(r27.s32, 8, xer);
	// bne cr6,0x8303060c
	if (!cr6.eq) goto loc_8303060C;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8303060c
	if (cr0.eq) goto loc_8303060C;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,49
	ctx.r4.s64 = 49;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
	// li r28,1
	r28.s64 = 1;
	// lwz r11,112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stb r28,569(r30)
	PPC_STORE_U8(r30.u32 + 569, r28.u8);
	// beq 0x8303060c
	if (cr0.eq) goto loc_8303060C;
	// lwz r3,192(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// lwz r11,40(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r29,16(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r11,36(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,552(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 552);
	// bl 0x82ff4a10
	sub_82FF4A10(ctx, base);
	// stw r28,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r28.u32);
	// b 0x8303060c
	goto loc_8303060C;
loc_83030364:
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83030420
	if (cr0.eq) goto loc_83030420;
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(r27.s32, 2, xer);
	// beq cr6,0x830303e8
	if (cr6.eq) goto loc_830303E8;
	// cmpwi cr6,r27,3
	cr6.compare<int32_t>(r27.s32, 3, xer);
	// beq cr6,0x830303e8
	if (cr6.eq) goto loc_830303E8;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x83030390
	if (cr6.eq) goto loc_83030390;
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(r27.s32, 1, xer);
	// bne cr6,0x83030420
	if (!cr6.eq) goto loc_83030420;
loc_83030390:
	// lbz r11,14(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 14);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83030420
	if (cr0.eq) goto loc_83030420;
	// lbz r11,17(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 17);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83030420
	if (cr0.eq) goto loc_83030420;
	// lwz r3,8(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,82
	ctx.r4.s64 = 82;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
	// b 0x83030420
	goto loc_83030420;
loc_830303E8:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,569(r30)
	PPC_STORE_U8(r30.u32 + 569, r11.u8);
loc_83030420:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x83030430
	if (cr6.eq) goto loc_83030430;
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(r27.s32, 1, xer);
	// bne cr6,0x8303060c
	if (!cr6.eq) goto loc_8303060C;
loc_83030430:
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83030460
	if (cr0.eq) goto loc_83030460;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83030460:
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// blt cr6,0x830304c4
	if (cr6.lt) goto loc_830304C4;
	// li r3,32
	ctx.r3.s64 = 32;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,152(r31)
	PPC_STORE_U32(r31.u32 + 152, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83030494
	if (cr0.eq) goto loc_83030494;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82ff9b50
	sub_82FF9B50(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x83030498
	goto loc_83030498;
loc_83030494:
	// mr r28,r22
	r28.u64 = r22.u64;
loc_83030498:
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// bl 0x83043678
	sub_83043678(ctx, base);
	// b 0x830304f0
	goto loc_830304F0;
loc_830304C4:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830304F0:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// stb r22,0(r28)
	PPC_STORE_U8(r28.u32 + 0, r22.u8);
	// lwz r11,112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r26,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r26.u32);
	// beq 0x8303060c
	if (cr0.eq) goto loc_8303060C;
	// lwz r3,192(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// lwz r11,40(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r28,16(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r11,36(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,552(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 552);
	// bl 0x8302e9f0
	sub_8302E9F0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r3,556(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 556);
	// bl 0x83015c80
	sub_83015C80(ctx, base);
	// lwz r26,44(r29)
	r26.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r3,556(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 556);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x83015c80
	sub_83015C80(ctx, base);
	// lwz r11,168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lbz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 100);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x830305a0
	if (cr0.eq) goto loc_830305A0;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,196(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r22.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x83086430
	sub_83086430(ctx, base);
	// b 0x830305f4
	goto loc_830305F4;
loc_830305A0:
	// lwz r10,40(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x830305cc
	if (!cr6.eq) goto loc_830305CC;
	// lwz r4,96(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// lwz r3,556(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 556);
	// bl 0x83015c80
	sub_83015C80(ctx, base);
	// mr. r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x830305cc
	if (cr0.eq) goto loc_830305CC;
	// lwz r11,168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// lwz r26,96(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 96);
loc_830305CC:
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,196(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x83086430
	sub_83086430(ctx, base);
loc_830305F4:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// bl 0x830864a8
	sub_830864A8(ctx, base);
	// lwz r25,100(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r26,104(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// lwz r21,652(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + 652);
loc_8303060C:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r23,r3
	cr6.compare<uint32_t>(r23.u32, ctx.r3.u32, xer);
	// blt cr6,0x8303027c
	if (cr6.lt) goto loc_8303027C;
loc_8303062C:
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_8303063C:
	// addi r1,r31,608
	ctx.r1.s64 = r31.s64 + 608;
	// b 0x831b0b40
	return;
}

__attribute__((alias("__imp__sub_83030644"))) PPC_WEAK_FUNC(sub_83030644);
PPC_FUNC_IMPL(__imp__sub_83030644) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-608
	r31.s64 = r12.s64 + -608;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x82fdc2c8
	sub_82FDC2C8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303066C"))) PPC_WEAK_FUNC(sub_8303066C);
PPC_FUNC_IMPL(__imp__sub_8303066C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-608
	r31.s64 = r12.s64 + -608;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82fdb1a0
	sub_82FDB1A0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83030694"))) PPC_WEAK_FUNC(sub_83030694);
PPC_FUNC_IMPL(__imp__sub_83030694) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-608
	r31.s64 = r12.s64 + -608;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x82fdc2c8
	sub_82FDC2C8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830306BC"))) PPC_WEAK_FUNC(sub_830306BC);
PPC_FUNC_IMPL(__imp__sub_830306BC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-608
	r31.s64 = r12.s64 + -608;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x82fdc2c8
	sub_82FDC2C8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830306E4"))) PPC_WEAK_FUNC(sub_830306E4);
PPC_FUNC_IMPL(__imp__sub_830306E4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-608
	r31.s64 = r12.s64 + -608;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x82fdc2c8
	sub_82FDC2C8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303070C"))) PPC_WEAK_FUNC(sub_8303070C);
PPC_FUNC_IMPL(__imp__sub_8303070C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-608
	r31.s64 = r12.s64 + -608;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// bl 0x82fdc2c8
	sub_82FDC2C8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83030734"))) PPC_WEAK_FUNC(sub_83030734);
PPC_FUNC_IMPL(__imp__sub_83030734) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-608
	r31.s64 = r12.s64 + -608;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,628(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 628);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83030764"))) PPC_WEAK_FUNC(sub_83030764);
PPC_FUNC_IMPL(__imp__sub_83030764) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-608
	r31.s64 = r12.s64 + -608;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,628(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 628);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830307A0"))) PPC_WEAK_FUNC(sub_830307A0);
PPC_FUNC_IMPL(__imp__sub_830307A0) {
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
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r5,4(r25)
	ctx.r5.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// cntlzw r11,r5
	r11.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83030c20
	if (!cr0.eq) goto loc_83030C20;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// li r28,0
	r28.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83030be0
	if (cr0.eq) goto loc_83030BE0;
	// lwz r10,24(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 24);
	// rlwinm r11,r5,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// li r26,2
	r26.s64 = 2;
	// sthx r28,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r28.u16);
	// lwz r11,168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// lwz r29,24(r25)
	r29.u64 = PPC_LOAD_U32(r25.u32 + 24);
	// lwz r27,4(r25)
	r27.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83030838
	if (!cr0.eq) goto loc_83030838;
	// bl 0x83020b18
	sub_83020B18(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83030838
	if (cr0.eq) goto loc_83030838;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x8303082c
	if (!cr6.eq) goto loc_8303082C;
	// li r26,1
	r26.s64 = 1;
	// b 0x83030838
	goto loc_83030838;
loc_8303082C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83030838
	if (!cr6.eq) goto loc_83030838;
	// mr r26,r28
	r26.u64 = r28.u64;
loc_83030838:
	// addi r3,r30,400
	ctx.r3.s64 = r30.s64 + 400;
	// bl 0x8301e5d8
	sub_8301E5D8(ctx, base);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// beq cr6,0x83030bd0
	if (cr6.eq) goto loc_83030BD0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82ffa048
	sub_82FFA048(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83030a2c
	if (cr0.eq) goto loc_83030A2C;
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(r26.s32, 1, xer);
	// bne cr6,0x8303088c
	if (!cr6.eq) goto loc_8303088C;
	// lwz r11,92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83030c14
	if (cr6.eq) goto loc_83030C14;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// b 0x83030c08
	goto loc_83030C08;
loc_8303088C:
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(r26.s32, 2, xer);
	// bne cr6,0x83030c14
	if (!cr6.eq) goto loc_83030C14;
	// addi r4,r27,1
	ctx.r4.s64 = r27.s64 + 1;
	// lwz r5,216(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82fe7278
	sub_82FE7278(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r28,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r28.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// lbz r11,24(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 24);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8303094c
	if (cr0.eq) goto loc_8303094C;
	// lwz r11,168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// lwz r26,40(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// cmplwi r26,0
	cr0.compare<uint32_t>(r26.u32, 0, xer);
	// beq 0x8303094c
	if (cr0.eq) goto loc_8303094C;
	// lhz r11,10(r26)
	r11.u64 = PPC_LOAD_U16(r26.u32 + 10);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8303094c
	if (cr0.eq) goto loc_8303094C;
	// addi r27,r30,220
	r27.s64 = r30.s64 + 220;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r27,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r27.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// sthx r28,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r28.u16);
	// lwz r5,120(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// bl 0x8305c9e0
	sub_8305C9E0(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r28,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r28.u16);
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// stw r28,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r28.u32);
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
loc_8303094C:
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r28,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r28.u16);
	// lwz r11,168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// addi r3,r11,48
	ctx.r3.s64 = r11.s64 + 48;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83030998
	if (cr0.eq) goto loc_83030998;
	// lbz r11,20(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83030998
	if (cr0.eq) goto loc_83030998;
	// lwz r11,532(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 532);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x8303099c
	if (!cr6.eq) goto loc_8303099C;
loc_83030998:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_8303099C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830309d8
	if (cr0.eq) goto loc_830309D8;
	// lwz r11,532(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 532);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830309d8
	if (cr0.eq) goto loc_830309D8;
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// addi r3,r30,488
	ctx.r3.s64 = r30.s64 + 488;
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r28,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r28.u16);
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
loc_830309D8:
	// lwz r11,92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83030a14
	if (cr6.eq) goto loc_83030A14;
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r9,120(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// sthx r28,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, r28.u16);
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83030A14:
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x83030bc8
	goto loc_83030BC8;
loc_83030A2C:
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(r26.s32, 2, xer);
	// bne cr6,0x83030bd0
	if (!cr6.eq) goto loc_83030BD0;
	// addi r4,r27,1
	ctx.r4.s64 = r27.s64 + 1;
	// lwz r5,216(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82fe7278
	sub_82FE7278(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r28,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r28.u32);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// lbz r11,24(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 24);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83030aec
	if (cr0.eq) goto loc_83030AEC;
	// lwz r11,168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// lwz r26,40(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// cmplwi r26,0
	cr0.compare<uint32_t>(r26.u32, 0, xer);
	// beq 0x83030aec
	if (cr0.eq) goto loc_83030AEC;
	// lhz r11,10(r26)
	r11.u64 = PPC_LOAD_U16(r26.u32 + 10);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83030aec
	if (cr0.eq) goto loc_83030AEC;
	// addi r27,r30,220
	r27.s64 = r30.s64 + 220;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r27,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r27.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// lwz r10,152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// sthx r28,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r28.u16);
	// lwz r5,152(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// bl 0x8305c9e0
	sub_8305C9E0(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r28,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r28.u16);
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// stw r28,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r28.u32);
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
loc_83030AEC:
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r28,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r28.u16);
	// lwz r11,168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// lwz r4,152(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// addi r3,r11,48
	ctx.r3.s64 = r11.s64 + 48;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83030b38
	if (cr0.eq) goto loc_83030B38;
	// lbz r11,20(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83030b38
	if (cr0.eq) goto loc_83030B38;
	// lwz r11,532(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 532);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x83030b3c
	if (!cr6.eq) goto loc_83030B3C;
loc_83030B38:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_83030B3C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83030b78
	if (cr0.eq) goto loc_83030B78;
	// lwz r11,532(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 532);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83030b78
	if (cr0.eq) goto loc_83030B78;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addi r3,r30,488
	ctx.r3.s64 = r30.s64 + 488;
	// lwz r10,152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r28,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r28.u16);
	// lwz r4,152(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
loc_83030B78:
	// lwz r11,92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83030bb4
	if (cr6.eq) goto loc_83030BB4;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r9,152(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// sthx r28,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, r28.u16);
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// lwz r4,152(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83030BB4:
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// lwz r4,152(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_83030BC8:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83030c14
	goto loc_83030C14;
loc_83030BD0:
	// li r4,22
	ctx.r4.s64 = 22;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// bl 0x8301f3f0
	sub_8301F3F0(ctx, base);
	// b 0x83030c14
	goto loc_83030C14;
loc_83030BE0:
	// lwz r11,92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83030c14
	if (cr6.eq) goto loc_83030C14;
	// lwz r10,24(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 24);
	// rlwinm r11,r5,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r28,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r28.u16);
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// lwz r4,24(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
loc_83030C08:
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83030C14:
	// lwz r11,24(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 24);
	// stw r28,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r28.u32);
	// sth r28,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r28.u16);
loc_83030C20:
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_83030C28"))) PPC_WEAK_FUNC(sub_83030C28);
PPC_FUNC_IMPL(__imp__sub_83030C28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-224
	r31.s64 = r12.s64 + -224;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82fe72f8
	sub_82FE72F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83030C50"))) PPC_WEAK_FUNC(sub_83030C50);
PPC_FUNC_IMPL(__imp__sub_83030C50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-224
	r31.s64 = r12.s64 + -224;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82fdc2c8
	sub_82FDC2C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83030C78"))) PPC_WEAK_FUNC(sub_83030C78);
PPC_FUNC_IMPL(__imp__sub_83030C78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-224
	r31.s64 = r12.s64 + -224;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82fe72f8
	sub_82FE72F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83030CA0"))) PPC_WEAK_FUNC(sub_83030CA0);
PPC_FUNC_IMPL(__imp__sub_83030CA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-224
	r31.s64 = r12.s64 + -224;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82fdc2c8
	sub_82FDC2C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83030CD0"))) PPC_WEAK_FUNC(sub_83030CD0);
PPC_FUNC_IMPL(__imp__sub_83030CD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b08
	// addi r31,r1,-912
	r31.s64 = ctx.r1.s64 + -912;
	// stwu r1,-912(r1)
	ea = -912 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// lwz r5,216(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// stw r30,932(r31)
	PPC_STORE_U32(r31.u32 + 932, r30.u32);
	// bl 0x8305b610
	sub_8305B610(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x8305b720
	sub_8305B720(ctx, base);
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// lwz r3,176(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// bl 0x82fef000
	sub_82FEF000(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x8305b0d8
	sub_8305B0D8(ctx, base);
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// beq cr6,0x83030db0
	if (cr6.eq) goto loc_83030DB0;
	// lwz r11,0(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83030db0
	if (cr0.eq) goto loc_83030DB0;
	// lwz r11,172(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 172);
	// li r24,1
	r24.s64 = 1;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x83030d80
	if (!cr6.eq) goto loc_83030D80;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83030d80
	if (!cr0.eq) goto loc_83030D80;
	// stb r24,16(r30)
	PPC_STORE_U8(r30.u32 + 16, r24.u8);
	// lwz r11,440(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 440);
	// lwz r10,432(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 432);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,-4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// stb r24,32(r11)
	PPC_STORE_U8(r11.u32 + 32, r24.u8);
loc_83030D80:
	// lwz r11,476(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8303136c
	if (!cr6.eq) goto loc_8303136C;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// stw r20,184(r30)
	PPC_STORE_U32(r30.u32 + 184, r20.u32);
	// stw r24,476(r30)
	PPC_STORE_U32(r30.u32 + 476, r24.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8303136c
	goto loc_8303136C;
loc_83030DB0:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,216(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,272
	ctx.r3.s64 = r31.s64 + 272;
	// bl 0x8306e810
	sub_8306E810(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,272
	ctx.r3.s64 = r31.s64 + 272;
	// bl 0x82fdc818
	sub_82FDC818(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,272
	ctx.r3.s64 = r31.s64 + 272;
	// bl 0x82fdc7e8
	sub_82FDC7E8(ctx, base);
	// addi r3,r31,272
	ctx.r3.s64 = r31.s64 + 272;
	// lwz r4,100(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// bl 0x8306e538
	sub_8306E538(ctx, base);
	// addi r3,r31,272
	ctx.r3.s64 = r31.s64 + 272;
	// lwz r4,104(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// bl 0x8306e520
	sub_8306E520(ctx, base);
	// addi r22,r30,220
	r22.s64 = r30.s64 + 220;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// stw r22,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r22.u32);
	// stw r21,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r21.u32);
	// li r11,-1
	r11.s64 = -1;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// sth r11,96(r31)
	PPC_STORE_U16(r31.u32 + 96, r11.u16);
	// bl 0x82fda7f0
	sub_82FDA7F0(ctx, base);
	// lwz r11,4(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// li r28,0
	r28.s64 = 0;
	// lwz r10,24(r21)
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + 24);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r28,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r28.u16);
	// lwz r29,24(r21)
	r29.u64 = PPC_LOAD_U32(r21.u32 + 24);
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r22,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r22.u32);
	// stw r26,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r26.u32);
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// mr r27,r28
	r27.u64 = r28.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83030ef4
	if (cr0.eq) goto loc_83030EF4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83030e94
	if (!cr0.eq) goto loc_83030E94;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r28,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r28.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
loc_83030E94:
	// addi r4,r31,256
	ctx.r4.s64 = r31.s64 + 256;
	// addi r3,r30,124
	ctx.r3.s64 = r30.s64 + 124;
	// bl 0x82ff6538
	sub_82FF6538(ctx, base);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r9,24(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-27800
	r11.s64 = r11.s64 + -27800;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// sthx r28,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, r28.u16);
	// lwz r10,24(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// lwz r11,256(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 256);
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// stw r28,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r28.u32);
	// stw r25,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r25.u32);
	// stw r10,120(r31)
	PPC_STORE_U32(r31.u32 + 120, ctx.r10.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// b 0x83030f08
	goto loc_83030F08;
loc_83030EF4:
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r28,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r28.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
loc_83030F08:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x83031074
	if (!cr6.eq) goto loc_83031074;
	// addi r4,r31,192
	ctx.r4.s64 = r31.s64 + 192;
	// addi r3,r30,124
	ctx.r3.s64 = r30.s64 + 124;
	// bl 0x82ff6538
	sub_82FF6538(ctx, base);
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x8301c3d8
	sub_8301C3D8(ctx, base);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r10,24(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// addi r6,r31,208
	ctx.r6.s64 = r31.s64 + 208;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// sthx r28,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r28.u16);
	// lwz r4,192(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// lwz r5,24(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// bl 0x8301d860
	sub_8301D860(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83030fe0
	if (cr0.eq) goto loc_83030FE0;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x8301c488
	sub_8301C488(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83030fe0
	if (!cr0.eq) goto loc_83030FE0;
	// lbz r11,8(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83030fac
	if (cr0.eq) goto loc_83030FAC;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x8301c4c0
	sub_8301C4C0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83030fac
	if (cr0.eq) goto loc_83030FAC;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r6,99
	ctx.r6.s64 = 99;
	// addi r4,r11,28392
	ctx.r4.s64 = r11.s64 + 28392;
	// li r5,3574
	ctx.r5.s64 = 3574;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x82fe1f38
	sub_82FE1F38(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// addi r4,r11,-8356
	ctx.r4.s64 = r11.s64 + -8356;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_83030FAC:
	// li r3,72
	ctx.r3.s64 = 72;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83030fd4
	if (cr0.eq) goto loc_83030FD4;
	// addi r4,r31,208
	ctx.r4.s64 = r31.s64 + 208;
	// lwz r5,216(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x8301c1d0
	sub_8301C1D0(ctx, base);
	// b 0x83030fd8
	goto loc_83030FD8;
loc_83030FD4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_83030FD8:
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// b 0x8303106c
	goto loc_8303106C;
loc_83030FE0:
	// lbz r11,8(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83031210
	if (!cr0.eq) goto loc_83031210;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r22,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r22.u32);
	// stw r29,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r29.u32);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r10,24(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r28,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r28.u16);
	// lwz r3,24(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// bl 0x82fe39e0
	sub_82FE39E0(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83031058
	if (cr0.eq) goto loc_83031058;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r28,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r28.u16);
	// lwz r4,192(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r6,216(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe0ed0
	sub_82FE0ED0(ctx, base);
	// b 0x8303105c
	goto loc_8303105C;
loc_83031058:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_8303105C:
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
loc_8303106C:
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x8301cf70
	sub_8301CF70(ctx, base);
loc_83031074:
	// stw r27,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r27.u32);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,272
	ctx.r3.s64 = r31.s64 + 272;
	// bl 0x82fdc9c0
	sub_82FDC9C0(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,388(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 388);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830310f0
	if (cr0.eq) goto loc_830310F0;
	// lbz r11,11(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 11);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830310f0
	if (cr0.eq) goto loc_830310F0;
	// li r4,297
	ctx.r4.s64 = 297;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_830310F0:
	// addi r3,r31,272
	ctx.r3.s64 = r31.s64 + 272;
	// bl 0x83159448
	sub_83159448(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83031340
	if (cr0.eq) goto loc_83031340;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r23,r3
	r23.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r23.s32, 0, xer);
	// beq 0x83031340
	if (cr0.eq) goto loc_83031340;
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r4,r11,-7008
	ctx.r4.s64 = r11.s64 + -7008;
	// lwz r11,160(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 160);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8303118c
	if (!cr0.eq) goto loc_8303118C;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83031160
	if (!cr0.eq) goto loc_83031160;
	// lwz r11,172(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 172);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x8303117c
	if (!cr6.eq) goto loc_8303117C;
loc_83031160:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,69
	ctx.r4.s64 = 69;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
loc_8303117C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,176(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// bl 0x82feeed8
	sub_82FEEED8(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
loc_8303118C:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// beq cr6,0x830311b0
	if (cr6.eq) goto loc_830311B0;
	// lwz r11,0(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83031340
	if (!cr0.eq) goto loc_83031340;
loc_830311B0:
	// lwz r11,172(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 172);
	// li r24,1
	r24.s64 = 1;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x830311e8
	if (!cr6.eq) goto loc_830311E8;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830311e8
	if (!cr0.eq) goto loc_830311E8;
	// stb r24,16(r30)
	PPC_STORE_U8(r30.u32 + 16, r24.u8);
	// lwz r11,440(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 440);
	// lwz r10,432(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 432);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,-4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// stb r24,32(r11)
	PPC_STORE_U8(r11.u32 + 32, r24.u8);
loc_830311E8:
	// li r3,80
	ctx.r3.s64 = 80;
	// lwz r4,180(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8303123c
	if (cr0.eq) goto loc_8303123C;
	// lwz r4,180(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// bl 0x8305a378
	sub_8305A378(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x83031240
	goto loc_83031240;
loc_83031210:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r6,99
	ctx.r6.s64 = 99;
	// addi r4,r11,28392
	ctx.r4.s64 = r11.s64 + 28392;
	// li r5,3569
	ctx.r5.s64 = 3569;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x82fe1f38
	sub_82FE1F38(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// addi r4,r11,-8356
	ctx.r4.s64 = r11.s64 + -8356;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_8303123C:
	// mr r29,r28
	r29.u64 = r28.u64;
loc_83031240:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r25,0(r28)
	r25.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,56(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 56);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r28,216(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// lwz r27,104(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// lwz r25,100(r30)
	r25.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// lwz r7,176(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r5,192(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// addi r3,r31,480
	ctx.r3.s64 = r31.s64 + 480;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// bl 0x83081160
	sub_83081160(ctx, base);
	// lwz r11,476(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83031310
	if (!cr6.eq) goto loc_83031310;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r29,184(r30)
	PPC_STORE_U32(r30.u32 + 184, r29.u32);
	// stw r24,476(r30)
	PPC_STORE_U32(r30.u32 + 476, r24.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83031310:
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83031338
	if (cr0.eq) goto loc_83031338;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83031338:
	// addi r3,r31,480
	ctx.r3.s64 = r31.s64 + 480;
	// bl 0x830813d0
	sub_830813D0(ctx, base);
loc_83031340:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// addi r3,r31,272
	ctx.r3.s64 = r31.s64 + 272;
	// bl 0x8306eb48
	sub_8306EB48(ctx, base);
loc_8303136C:
	// lwz r11,112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83031384
	if (cr6.eq) goto loc_83031384;
	// lwz r3,176(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// bl 0x82fef6f8
	sub_82FEF6F8(ctx, base);
	// stw r3,556(r30)
	PPC_STORE_U32(r30.u32 + 556, ctx.r3.u32);
loc_83031384:
	// addi r1,r31,912
	ctx.r1.s64 = r31.s64 + 912;
	// b 0x831b0b58
	return;
}

__attribute__((alias("__imp__sub_8303138C"))) PPC_WEAK_FUNC(sub_8303138C);
PPC_FUNC_IMPL(__imp__sub_8303138C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-912
	r31.s64 = r12.s64 + -912;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x8305b0d8
	sub_8305B0D8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830313B4"))) PPC_WEAK_FUNC(sub_830313B4);
PPC_FUNC_IMPL(__imp__sub_830313B4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-912
	r31.s64 = r12.s64 + -912;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,272
	ctx.r3.s64 = r31.s64 + 272;
	// bl 0x8306eb48
	sub_8306EB48(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830313DC"))) PPC_WEAK_FUNC(sub_830313DC);
PPC_FUNC_IMPL(__imp__sub_830313DC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-912
	r31.s64 = r12.s64 + -912;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82fdc2c8
	sub_82FDC2C8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83031404"))) PPC_WEAK_FUNC(sub_83031404);
PPC_FUNC_IMPL(__imp__sub_83031404) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-912
	r31.s64 = r12.s64 + -912;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// bl 0x82fdc2c8
	sub_82FDC2C8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303142C"))) PPC_WEAK_FUNC(sub_8303142C);
PPC_FUNC_IMPL(__imp__sub_8303142C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-912
	r31.s64 = r12.s64 + -912;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x8301cf70
	sub_8301CF70(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83031454"))) PPC_WEAK_FUNC(sub_83031454);
PPC_FUNC_IMPL(__imp__sub_83031454) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-912
	r31.s64 = r12.s64 + -912;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,932(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 932);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83031484"))) PPC_WEAK_FUNC(sub_83031484);
PPC_FUNC_IMPL(__imp__sub_83031484) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-912
	r31.s64 = r12.s64 + -912;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82fdc2c8
	sub_82FDC2C8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830314AC"))) PPC_WEAK_FUNC(sub_830314AC);
PPC_FUNC_IMPL(__imp__sub_830314AC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-912
	r31.s64 = r12.s64 + -912;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,932(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 932);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830314DC"))) PPC_WEAK_FUNC(sub_830314DC);
PPC_FUNC_IMPL(__imp__sub_830314DC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-912
	r31.s64 = r12.s64 + -912;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83094688
	sub_83094688(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83031504"))) PPC_WEAK_FUNC(sub_83031504);
PPC_FUNC_IMPL(__imp__sub_83031504) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-912
	r31.s64 = r12.s64 + -912;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,932(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 932);
	// lwz r4,180(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 180);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83031534"))) PPC_WEAK_FUNC(sub_83031534);
PPC_FUNC_IMPL(__imp__sub_83031534) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-912
	r31.s64 = r12.s64 + -912;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,480
	ctx.r3.s64 = r31.s64 + 480;
	// bl 0x830813d0
	sub_830813D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83031568"))) PPC_WEAK_FUNC(sub_83031568);
PPC_FUNC_IMPL(__imp__sub_83031568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// addi r31,r1,-240
	r31.s64 = ctx.r1.s64 + -240;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,91
	ctx.r4.s64 = 91;
	// addi r19,r30,124
	r19.s64 = r30.s64 + 124;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830315c0
	if (!cr0.eq) goto loc_830315C0;
	// li r4,261
	ctx.r4.s64 = 261;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
	// li r4,91
	ctx.r4.s64 = 91;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83031974
	if (cr0.eq) goto loc_83031974;
loc_830315C0:
	// addi r20,r30,220
	r20.s64 = r30.s64 + 220;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r20,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r20.u32);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// lwz r11,168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// li r24,0
	r24.s64 = 0;
	// li r18,2
	r18.s64 = 2;
	// mr r21,r24
	r21.u64 = r24.u64;
	// mr r25,r24
	r25.u64 = r24.u64;
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83031630
	if (!cr0.eq) goto loc_83031630;
	// bl 0x83020b18
	sub_83020B18(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83031630
	if (cr0.eq) goto loc_83031630;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x83031624
	if (!cr6.eq) goto loc_83031624;
	// li r18,1
	r18.s64 = 1;
	// b 0x83031630
	goto loc_83031630;
loc_83031624:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83031630
	if (!cr6.eq) goto loc_83031630;
	// mr r18,r24
	r18.u64 = r24.u64;
loc_83031630:
	// addi r3,r30,400
	ctx.r3.s64 = r30.s64 + 400;
	// bl 0x8301e5d8
	sub_8301E5D8(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// clrlwi. r29,r27,16
	r29.u64 = r27.u32 & 0xFFFF;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x830317ac
	if (cr0.eq) goto loc_830317AC;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r23,r11,24488
	r23.s64 = r11.s64 + 24488;
	// lis r11,2
	r11.s64 = 131072;
	// ori r26,r11,32852
	r26.u64 = r11.u64 | 32852;
loc_83031660:
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830316b0
	if (cr0.eq) goto loc_830316B0;
	// lbz r11,14(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 14);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830316b0
	if (cr0.eq) goto loc_830316B0;
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// lwzx r11,r11,r26
	r11.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// lbzx r11,r11,r29
	r11.u64 = PPC_LOAD_U8(r11.u32 + r29.u32);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830316b0
	if (cr0.eq) goto loc_830316B0;
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// lbz r11,20(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830316b0
	if (cr0.eq) goto loc_830316B0;
	// cmpwi cr6,r18,1
	cr6.compare<int32_t>(r18.s32, 1, xer);
	// bne cr6,0x830316b0
	if (!cr6.eq) goto loc_830316B0;
	// li r4,84
	ctx.r4.s64 = 84;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// bl 0x8301f3f0
	sub_8301F3F0(ctx, base);
loc_830316B0:
	// cmplwi cr6,r29,93
	cr6.compare<uint32_t>(r29.u32, 93, xer);
	// bne cr6,0x830316cc
	if (!cr6.eq) goto loc_830316CC;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// bl 0x82ffb458
	sub_82FFB458(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830317e4
	if (!cr0.eq) goto loc_830317E4;
loc_830316CC:
	// clrlwi. r11,r21,24
	r11.u64 = r21.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8303178c
	if (!cr0.eq) goto loc_8303178C;
	// cmplwi cr6,r29,55296
	cr6.compare<uint32_t>(r29.u32, 55296, xer);
	// blt cr6,0x83031704
	if (cr6.lt) goto loc_83031704;
	// cmplwi cr6,r29,56319
	cr6.compare<uint32_t>(r29.u32, 56319, xer);
	// bgt cr6,0x83031704
	if (cr6.gt) goto loc_83031704;
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830316fc
	if (cr0.eq) goto loc_830316FC;
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// b 0x8303178c
	goto loc_8303178C;
loc_830316FC:
	// li r25,1
	r25.s64 = 1;
	// b 0x8303178c
	goto loc_8303178C;
loc_83031704:
	// cmplwi cr6,r29,56320
	cr6.compare<uint32_t>(r29.u32, 56320, xer);
	// blt cr6,0x83031724
	if (cr6.lt) goto loc_83031724;
	// cmplwi cr6,r29,57343
	cr6.compare<uint32_t>(r29.u32, 57343, xer);
	// bgt cr6,0x83031724
	if (cr6.gt) goto loc_83031724;
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83031788
	if (!cr0.eq) goto loc_83031788;
	// li r4,282
	ctx.r4.s64 = 282;
	// b 0x83031730
	goto loc_83031730;
loc_83031724:
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8303173c
	if (cr0.eq) goto loc_8303173C;
	// li r4,249
	ctx.r4.s64 = 249;
loc_83031730:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// b 0x83031788
	goto loc_83031788;
loc_8303173C:
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// lwzx r11,r11,r26
	r11.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// lbzx r11,r11,r29
	r11.u64 = PPC_LOAD_U8(r11.u32 + r29.u32);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83031788
	if (!cr0.eq) goto loc_83031788;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fd9bb8
	sub_82FD9BB8(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// li r4,196
	ctx.r4.s64 = 196;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
	// li r21,1
	r21.s64 = 1;
loc_83031788:
	// mr r25,r24
	r25.u64 = r24.u64;
loc_8303178C:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// clrlwi. r29,r27,16
	r29.u64 = r27.u32 & 0xFFFF;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x83031660
	if (!cr0.eq) goto loc_83031660;
loc_830317AC:
	// li r4,264
	ctx.r4.s64 = 264;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,47
	ctx.r6.s64 = 47;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// addi r4,r11,28392
	ctx.r4.s64 = r11.s64 + 28392;
	// li r5,4032
	ctx.r5.s64 = 4032;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82fefc90
	sub_82FEFC90(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,-8072
	ctx.r4.s64 = r11.s64 + -8072;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830317E4:
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830317f8
	if (cr0.eq) goto loc_830317F8;
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_830317F8:
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830318cc
	if (cr0.eq) goto loc_830318CC;
	// lbz r11,24(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 24);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83031894
	if (cr0.eq) goto loc_83031894;
	// lwz r11,168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// lwz r27,40(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// cmplwi r27,0
	cr0.compare<uint32_t>(r27.u32, 0, xer);
	// beq 0x83031894
	if (cr0.eq) goto loc_83031894;
	// lhz r11,10(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 10);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83031894
	if (cr0.eq) goto loc_83031894;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r20,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r20.u32);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// sthx r24,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r24.u16);
	// lwz r5,24(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// bl 0x8305c9e0
	sub_8305C9E0(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r24,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r24.u16);
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// stw r24,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r24.u32);
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
loc_83031894:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r24,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r24.u16);
	// lwz r11,168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// lwz r4,24(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// addi r3,r11,48
	ctx.r3.s64 = r11.s64 + 48;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// cmpwi cr6,r18,2
	cr6.compare<int32_t>(r18.s32, 2, xer);
	// beq cr6,0x830318cc
	if (cr6.eq) goto loc_830318CC;
	// li r4,22
	ctx.r4.s64 = 22;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// bl 0x8301f3f0
	sub_8301F3F0(ctx, base);
loc_830318CC:
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830318f4
	if (cr0.eq) goto loc_830318F4;
	// lbz r11,20(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830318f4
	if (cr0.eq) goto loc_830318F4;
	// lwz r11,532(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 532);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x830318f8
	if (!cr6.eq) goto loc_830318F8;
loc_830318F4:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_830318F8:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83031930
	if (cr0.eq) goto loc_83031930;
	// lwz r11,532(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 532);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83031930
	if (cr0.eq) goto loc_83031930;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r3,r30,488
	ctx.r3.s64 = r30.s64 + 488;
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// rlwinm r11,r5,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r24,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r24.u16);
	// lwz r4,24(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
loc_83031930:
	// lwz r11,92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83031968
	if (cr6.eq) goto loc_83031968;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// rlwinm r11,r5,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r24,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r24.u16);
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// lwz r4,24(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83031968:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
loc_83031974:
	// addi r1,r31,240
	ctx.r1.s64 = r31.s64 + 240;
	// b 0x831b0b50
	return;
}

__attribute__((alias("__imp__sub_8303197C"))) PPC_WEAK_FUNC(sub_8303197C);
PPC_FUNC_IMPL(__imp__sub_8303197C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-240
	r31.s64 = r12.s64 + -240;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82fdc2c8
	sub_82FDC2C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830319A4"))) PPC_WEAK_FUNC(sub_830319A4);
PPC_FUNC_IMPL(__imp__sub_830319A4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-240
	r31.s64 = r12.s64 + -240;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82fdc2c8
	sub_82FDC2C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830319D8"))) PPC_WEAK_FUNC(sub_830319D8);
PPC_FUNC_IMPL(__imp__sub_830319D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x831b0b18
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// addi r11,r29,124
	r11.s64 = r29.s64 + 124;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,24(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// stw r29,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r29.u32);
	// stw r27,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r27.u32);
	// stw r26,236(r31)
	PPC_STORE_U32(r31.u32 + 236, r26.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// sth r27,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, r27.u16);
	// lbz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 28);
	// stb r10,28(r11)
	PPC_STORE_U8(r11.u32 + 28, ctx.r10.u8);
	// stb r9,96(r31)
	PPC_STORE_U8(r31.u32 + 96, ctx.r9.u8);
	// mr r24,r27
	r24.u64 = r27.u64;
	// sth r27,86(r31)
	PPC_STORE_U16(r31.u32 + 86, r27.u16);
	// mr r25,r27
	r25.u64 = r27.u64;
	// stb r27,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r27.u8);
	// stb r10,81(r31)
	PPC_STORE_U8(r31.u32 + 81, ctx.r10.u8);
	// stw r24,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r24.u32);
loc_83031A40:
	// lbz r11,81(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 81);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83031ca4
	if (cr0.eq) goto loc_83031CA4;
loc_83031A4C:
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// bne cr6,0x83031a6c
	if (!cr6.eq) goto loc_83031A6C;
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83031a6c
	if (!cr0.eq) goto loc_83031A6C;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,132(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 132);
	// bl 0x83026590
	sub_83026590(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83031A6C:
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// lwz r3,132(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 132);
	// li r4,60
	ctx.r4.s64 = 60;
	// bl 0x83027568
	sub_83027568(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83031aa8
	if (!cr0.eq) goto loc_83031AA8;
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83031aa0
	if (cr0.eq) goto loc_83031AA0;
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83031AA0:
	// stb r27,81(r31)
	PPC_STORE_U8(r31.u32 + 81, r27.u8);
	// b 0x83031a40
	goto loc_83031A40;
loc_83031AA8:
	// lhz r11,84(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 84);
	// stb r27,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r27.u8);
	// cmplwi cr6,r11,38
	cr6.compare<uint32_t>(r11.u32, 38, xer);
	// bne cr6,0x83031b2c
	if (!cr6.eq) goto loc_83031B2C;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r29,124
	r30.s64 = r29.s64 + 124;
	// lbz r28,28(r30)
	r28.u64 = PPC_LOAD_U8(r30.u32 + 28);
	// stw r30,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r30.u32);
	// stb r27,28(r30)
	PPC_STORE_U8(r30.u32 + 28, r27.u8);
	// stb r28,104(r31)
	PPC_STORE_U8(r31.u32 + 104, r28.u8);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// addi r6,r31,86
	ctx.r6.s64 = r31.s64 + 86;
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83031b24
	if (cr6.eq) goto loc_83031B24;
	// mr r25,r27
	r25.u64 = r27.u64;
	// stb r28,28(r30)
	PPC_STORE_U8(r30.u32 + 28, r28.u8);
	// b 0x83031a4c
	goto loc_83031A4C;
loc_83031B24:
	// stb r28,28(r30)
	PPC_STORE_U8(r30.u32 + 28, r28.u8);
	// b 0x83031bfc
	goto loc_83031BFC;
loc_83031B2C:
	// cmplwi cr6,r11,55296
	cr6.compare<uint32_t>(r11.u32, 55296, xer);
	// blt cr6,0x83031b60
	if (cr6.lt) goto loc_83031B60;
	// cmplwi cr6,r11,56319
	cr6.compare<uint32_t>(r11.u32, 56319, xer);
	// bgt cr6,0x83031b60
	if (cr6.gt) goto loc_83031B60;
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83031b58
	if (cr0.eq) goto loc_83031B58;
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x83031bfc
	goto loc_83031BFC;
loc_83031B58:
	// li r25,1
	r25.s64 = 1;
	// b 0x83031bfc
	goto loc_83031BFC;
loc_83031B60:
	// cmplwi cr6,r11,56320
	cr6.compare<uint32_t>(r11.u32, 56320, xer);
	// blt cr6,0x83031b88
	if (cr6.lt) goto loc_83031B88;
	// cmplwi cr6,r11,57343
	cr6.compare<uint32_t>(r11.u32, 57343, xer);
	// bgt cr6,0x83031b88
	if (cr6.gt) goto loc_83031B88;
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83031bf8
	if (!cr0.eq) goto loc_83031BF8;
	// li r4,282
	ctx.r4.s64 = 282;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// b 0x83031bf4
	goto loc_83031BF4;
loc_83031B88:
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83031ba0
	if (cr0.eq) goto loc_83031BA0;
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83031BA0:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r11,132(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 132);
	// lhz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U16(r31.u32 + 84);
	// ori r10,r10,32852
	ctx.r10.u64 = ctx.r10.u64 | 32852;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lbzx r11,r11,r3
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83031bf8
	if (!cr0.eq) goto loc_83031BF8;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r7,216(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 216);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// bl 0x82fd9bb8
	sub_82FD9BB8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,112
	ctx.r5.s64 = r31.s64 + 112;
	// li r4,196
	ctx.r4.s64 = 196;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
loc_83031BF4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83031BF8:
	// mr r25,r27
	r25.u64 = r27.u64;
loc_83031BFC:
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83031c54
	if (!cr0.eq) goto loc_83031C54;
	// lhz r11,84(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 84);
	// cmplwi cr6,r11,93
	cr6.compare<uint32_t>(r11.u32, 93, xer);
	// bne cr6,0x83031c34
	if (!cr6.eq) goto loc_83031C34;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// bne cr6,0x83031c24
	if (!cr6.eq) goto loc_83031C24;
	// li r24,1
	r24.s64 = 1;
	// b 0x83031c58
	goto loc_83031C58;
loc_83031C24:
	// cmpwi cr6,r24,1
	cr6.compare<int32_t>(r24.s32, 1, xer);
	// bne cr6,0x83031c5c
	if (!cr6.eq) goto loc_83031C5C;
	// li r24,2
	r24.s64 = 2;
	// b 0x83031c58
	goto loc_83031C58;
loc_83031C34:
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(r11.u32, 62, xer);
	// bne cr6,0x83031c54
	if (!cr6.eq) goto loc_83031C54;
	// cmpwi cr6,r24,2
	cr6.compare<int32_t>(r24.s32, 2, xer);
	// bne cr6,0x83031c54
	if (!cr6.eq) goto loc_83031C54;
	// li r4,262
	ctx.r4.s64 = 262;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83031C54:
	// mr r24,r27
	r24.u64 = r27.u64;
loc_83031C58:
	// stw r24,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r24.u32);
loc_83031C5C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lhz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U16(r31.u32 + 84);
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lhz r4,86(r31)
	ctx.r4.u64 = PPC_LOAD_U16(r31.u32 + 86);
	// mr. r11,r4
	r11.u64 = ctx.r4.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83031a4c
	if (cr0.eq) goto loc_83031A4C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// sth r27,86(r31)
	PPC_STORE_U16(r31.u32 + 86, r27.u16);
	// b 0x83031a4c
	goto loc_83031A4C;
	// lwz r29,228(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// lwz r26,236(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// li r27,0
	r27.s64 = 0;
	// lwz r24,88(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lbz r25,82(r31)
	r25.u64 = PPC_LOAD_U8(r31.u32 + 82);
	// b 0x83031a40
	goto loc_83031A40;
loc_83031CA4:
	// lbz r11,16(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83031d3c
	if (cr0.eq) goto loc_83031D3C;
	// lbz r11,14(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 14);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83031d3c
	if (cr0.eq) goto loc_83031D3C;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r10,24(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r27,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r27.u16);
	// lwz r4,24(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// lwz r5,4(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r3,132(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 132);
	// bl 0x82ffa098
	sub_82FFA098(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83031d3c
	if (cr0.eq) goto loc_83031D3C;
	// addi r3,r29,400
	ctx.r3.s64 = r29.s64 + 400;
	// bl 0x8301e5d8
	sub_8301E5D8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r11,20(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83031d3c
	if (cr0.eq) goto loc_83031D3C;
	// lwz r11,168(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 168);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83031d3c
	if (!cr0.eq) goto loc_83031D3C;
	// bl 0x83020b18
	sub_83020B18(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83031d3c
	if (cr0.eq) goto loc_83031D3C;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x83031d3c
	if (!cr6.eq) goto loc_83031D3C;
	// li r4,84
	ctx.r4.s64 = 84;
	// lwz r3,168(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 168);
	// bl 0x8301f3f0
	sub_8301F3F0(ctx, base);
loc_83031D3C:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,96(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 96);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// stb r11,28(r10)
	PPC_STORE_U8(ctx.r10.u32 + 28, r11.u8);
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_83031D70"))) PPC_WEAK_FUNC(sub_83031D70);
PPC_FUNC_IMPL(__imp__sub_83031D70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-208
	r31.s64 = r12.s64 + -208;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,228(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// lwz r4,236(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	r11.s64 = 0;
	// stb r11,82(r31)
	PPC_STORE_U8(r31.u32 + 82, r11.u8);
	// lwz r11,92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83031dcc
	if (cr6.eq) goto loc_83031DCC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83031DCC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31997
	ctx.r3.s64 = -2096955392;
	// addi r3,r3,7308
	ctx.r3.s64 = ctx.r3.s64 + 7308;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_83031DE4"))) PPC_WEAK_FUNC(sub_83031DE4);
PPC_FUNC_IMPL(__imp__sub_83031DE4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-208
	r31.s64 = r12.s64 + -208;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82fefc78
	sub_82FEFC78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83031E0C"))) PPC_WEAK_FUNC(sub_83031E0C);
PPC_FUNC_IMPL(__imp__sub_83031E0C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-208
	r31.s64 = r12.s64 + -208;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82fefc78
	sub_82FEFC78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83031E40"))) PPC_WEAK_FUNC(sub_83031E40);
PPC_FUNC_IMPL(__imp__sub_83031E40) {
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
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// li r28,0
	r28.s64 = 0;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,2
	r11.s64 = 131072;
	// addi r26,r30,124
	r26.s64 = r30.s64 + 124;
	// sth r28,0(r29)
	PPC_STORE_U16(r29.u32 + 0, r28.u16);
	// ori r27,r11,32808
	r27.u64 = r11.u64 | 32808;
	// stb r28,0(r24)
	PPC_STORE_U8(r24.u32 + 0, r28.u8);
	// li r4,35
	ctx.r4.s64 = 35;
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// lwzx r25,r11,r27
	r25.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83031ee4
	if (cr0.eq) goto loc_83031EE4;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff1b50
	sub_82FF1B50(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83031eb8
	if (!cr0.eq) goto loc_83031EB8;
loc_83031EAC:
	// li r3,2
	ctx.r3.s64 = 2;
loc_83031EB0:
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// b 0x831b0b60
	return;
loc_83031EB8:
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r24)
	PPC_STORE_U8(r24.u32 + 0, r11.u8);
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// lwzx r11,r11,r27
	r11.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// beq cr6,0x83031edc
	if (cr6.eq) goto loc_83031EDC;
	// li r4,231
	ctx.r4.s64 = 231;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_83031EDC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83031eb0
	goto loc_83031EB0;
loc_83031EE4:
	// addi r22,r30,220
	r22.s64 = r30.s64 + 220;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r22,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r22.u32);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// stw r28,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// sth r28,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r28.u16);
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// bl 0x82ffb090
	sub_82FFB090(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83031f3c
	if (!cr0.eq) goto loc_83031F3C;
	// li r4,226
	ctx.r4.s64 = 226;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// b 0x83031eac
	goto loc_83031EAC;
loc_83031F3C:
	// li r4,59
	ctx.r4.s64 = 59;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83031f7c
	if (!cr0.eq) goto loc_83031F7C;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,229
	ctx.r4.s64 = 229;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// sthx r28,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r28.u16);
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
loc_83031F7C:
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// lwzx r11,r11,r27
	r11.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// beq cr6,0x83031f98
	if (cr6.eq) goto loc_83031F98;
	// li r4,231
	ctx.r4.s64 = 231;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_83031F98:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r28,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r28.u16);
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r3,516(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 516);
	// bl 0x83040758
	sub_83040758(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83032028
	if (!cr0.eq) goto loc_83032028;
	// lbz r11,14(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 14);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83031fe4
	if (!cr0.eq) goto loc_83031FE4;
	// lbz r11,15(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 15);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83032010
	if (cr0.eq) goto loc_83032010;
loc_83031FE4:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,227
	ctx.r4.s64 = 227;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// sthx r28,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r28.u16);
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
loc_83032010:
	// li r30,2
	r30.s64 = 2;
loc_83032014:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x83031eb0
	goto loc_83031EB0;
loc_83032028:
	// lwz r11,208(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 208);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83032080
	if (cr6.eq) goto loc_83032080;
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(r11.u32, ctx.r3.u32, xer);
	// stw r11,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r11.u32);
	// ble cr6,0x83032080
	if (!cr6.gt) goto loc_83032080;
	// li r6,10
	ctx.r6.s64 = 10;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// bl 0x82fd9bb0
	sub_82FD9BB0(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// li r4,172
	ctx.r4.s64 = 172;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
	// stw r28,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r28.u32);
loc_83032080:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r28,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r28.u16);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r3,516(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 516);
	// lwz r5,-16120(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + -16120);
	// bl 0x8302e8f0
	sub_8302E8F0(ctx, base);
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// li r11,1
	r11.s64 = 1;
	// sth r10,0(r23)
	PPC_STORE_U16(r23.u32 + 0, ctx.r10.u16);
	// stb r11,0(r24)
	PPC_STORE_U8(r24.u32 + 0, r11.u8);
	// mr r30,r11
	r30.u64 = r11.u64;
	// b 0x83032014
	goto loc_83032014;
}

__attribute__((alias("__imp__sub_830320BC"))) PPC_WEAK_FUNC(sub_830320BC);
PPC_FUNC_IMPL(__imp__sub_830320BC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-224
	r31.s64 = r12.s64 + -224;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82fdc2c8
	sub_82FDC2C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830320E8"))) PPC_WEAK_FUNC(sub_830320E8);
PPC_FUNC_IMPL(__imp__sub_830320E8) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b10
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// li r23,1
	r23.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r23,0(r22)
	PPC_STORE_U8(r22.u32 + 0, r23.u8);
	// lwz r11,440(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 440);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83032154
	if (cr0.eq) goto loc_83032154;
	// li r4,245
	ctx.r4.s64 = 245;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// addi r3,r31,124
	ctx.r3.s64 = r31.s64 + 124;
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,77
	ctx.r6.s64 = 77;
	// lwz r7,216(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 216);
	// addi r4,r11,28392
	ctx.r4.s64 = r11.s64 + 28392;
	// li r5,864
	ctx.r5.s64 = 864;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82fd93a0
	sub_82FD93A0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-8860
	ctx.r4.s64 = r11.s64 + -8860;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_83032154:
	// lbz r11,10(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8303217c
	if (cr0.eq) goto loc_8303217C;
	// lwz r11,440(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 440);
	// lwz r10,432(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 432);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,-4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// lwz r24,44(r11)
	r24.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// b 0x83032180
	goto loc_83032180;
loc_8303217C:
	// lwz r24,40(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 40);
loc_83032180:
	// addi r26,r31,400
	r26.s64 = r31.s64 + 400;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,40(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 40);
	// lwz r10,32(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,-4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// lwz r30,48(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// bl 0x8301e348
	sub_8301E348(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// bl 0x82ffb458
	sub_82FFB458(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830321e8
	if (!cr0.eq) goto loc_830321E8;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,202
	ctx.r4.s64 = 202;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// addi r3,r31,124
	ctx.r3.s64 = r31.s64 + 124;
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
	// b 0x830325e4
	goto loc_830325E4;
loc_830321E8:
	// lwz r11,440(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 440);
	// lwz r3,564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 564);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r25,r11,24
	r25.u64 = r11.u32 & 0xFF;
	// bl 0x83020a88
	sub_83020A88(ctx, base);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// stb r3,569(r31)
	PPC_STORE_U8(r31.u32 + 569, ctx.r3.u8);
	// ori r10,r10,32808
	ctx.r10.u64 = ctx.r10.u64 | 32808;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x8303222c
	if (cr6.eq) goto loc_8303222C;
	// li r4,278
	ctx.r4.s64 = 278;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_8303222C:
	// addi r30,r31,124
	r30.s64 = r31.s64 + 124;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83032278
	if (!cr0.eq) goto loc_83032278;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,200
	ctx.r4.s64 = 200;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
loc_83032278:
	// lbz r11,16(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8303232c
	if (cr0.eq) goto loc_8303232C;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8303232c
	if (cr0.eq) goto loc_8303232C;
	// lwz r11,168(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// li r28,0
	r28.s64 = 0;
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830322c0
	if (cr0.eq) goto loc_830322C0;
	// mr r11,r28
	r11.u64 = r28.u64;
	// b 0x830322c8
	goto loc_830322C8;
loc_830322C0:
	// bl 0x83020b18
	sub_83020B18(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_830322C8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,588(r31)
	PPC_STORE_U32(r31.u32 + 588, r11.u32);
	// bne cr6,0x830322e4
	if (!cr6.eq) goto loc_830322E4;
	// lwz r11,168(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// stw r11,584(r31)
	PPC_STORE_U32(r31.u32 + 584, r11.u32);
	// b 0x830322e8
	goto loc_830322E8;
loc_830322E4:
	// stw r28,584(r31)
	PPC_STORE_U32(r31.u32 + 584, r28.u32);
loc_830322E8:
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8303233c
	if (cr6.eq) goto loc_8303233C;
	// lwz r11,168(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// addi r4,r10,-27800
	ctx.r4.s64 = ctx.r10.s64 + -27800;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r28,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, r28.u16);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// stw r3,592(r31)
	PPC_STORE_U32(r31.u32 + 592, ctx.r3.u32);
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8303233c
	if (cr0.eq) goto loc_8303233C;
	// b 0x83032338
	goto loc_83032338;
loc_8303232C:
	// li r28,0
	r28.s64 = 0;
	// stw r28,588(r31)
	PPC_STORE_U32(r31.u32 + 588, r28.u32);
	// stw r28,584(r31)
	PPC_STORE_U32(r31.u32 + 584, r28.u32);
loc_83032338:
	// stw r28,592(r31)
	PPC_STORE_U32(r31.u32 + 592, r28.u32);
loc_8303233C:
	// lbz r11,16(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// mr r27,r28
	r27.u64 = r28.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830324c0
	if (cr0.eq) goto loc_830324C0;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r6,12(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x830323f4
	if (cr0.lt) goto loc_830323F4;
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830323a0
	if (!cr0.eq) goto loc_830323A0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,16
	ctx.r4.s64 = 16;
loc_83032398:
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x830323e0
	goto loc_830323E0;
loc_830323A0:
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// blt cr6,0x830323c0
	if (cr6.lt) goto loc_830323C0;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,21
	ctx.r4.s64 = 21;
	// b 0x83032398
	goto loc_83032398;
loc_830323C0:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
loc_830323E0:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
loc_830323F4:
	// lwz r11,168(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// lbz r11,100(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 100);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8303240c
	if (cr0.eq) goto loc_8303240C;
	// stb r23,569(r31)
	PPC_STORE_U8(r31.u32 + 569, r23.u8);
	// b 0x8303243c
	goto loc_8303243C;
loc_8303240C:
	// lwz r11,584(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 584);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8303243c
	if (cr0.eq) goto loc_8303243C;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmpwi cr6,r11,25
	cr6.compare<int32_t>(r11.s32, 25, xer);
	// bne cr6,0x8303243c
	if (!cr6.eq) goto loc_8303243C;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_8303243C:
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83032468
	if (cr6.eq) goto loc_83032468;
	// lwz r11,168(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// lbz r11,101(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 101);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stb r11,568(r31)
	PPC_STORE_U8(r31.u32 + 568, r11.u8);
	// beq 0x83032468
	if (cr0.eq) goto loc_83032468;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// stw r11,592(r31)
	PPC_STORE_U32(r31.u32 + 592, r11.u32);
loc_83032468:
	// lbz r11,16(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83032490
	if (cr0.eq) goto loc_83032490;
	// lbz r11,20(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83032490
	if (cr0.eq) goto loc_83032490;
	// lwz r11,532(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 532);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r11,r23
	r11.u64 = r23.u64;
	// bne cr6,0x83032494
	if (!cr6.eq) goto loc_83032494;
loc_83032490:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_83032494:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830324c0
	if (cr0.eq) goto loc_830324C0;
	// addi r11,r31,488
	r11.s64 = r31.s64 + 488;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r28,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, r28.u16);
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r3,532(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 532);
	// bl 0x8305c4f8
	sub_8305C4F8(ctx, base);
loc_830324C0:
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830324dc
	if (cr6.eq) goto loc_830324DC;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8302dad8
	sub_8302DAD8(ctx, base);
loc_830324DC:
	// lwz r11,168(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// stw r28,52(r11)
	PPC_STORE_U32(r11.u32 + 52, r28.u32);
	// sth r28,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r28.u16);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83032530
	if (cr6.eq) goto loc_83032530;
	// addi r11,r31,344
	r11.s64 = r31.s64 + 344;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r28,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, r28.u16);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83032530:
	// clrlwi. r30,r25,24
	r30.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x83032568
	if (!cr0.eq) goto loc_83032568;
	// lwz r3,564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 564);
	// bl 0x83020a88
	sub_83020A88(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83032558
	if (!cr0.eq) goto loc_83032558;
	// lbz r11,569(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 569);
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r28.u8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8303255c
	if (cr0.eq) goto loc_8303255C;
loc_83032558:
	// stb r23,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r23.u8);
loc_8303255C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 564);
	// bl 0x83020b78
	sub_83020B78(ctx, base);
loc_83032568:
	// cntlzw r11,r30
	r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r11,0(r22)
	PPC_STORE_U8(r22.u32 + 0, r11.u8);
	// beq 0x830325e4
	if (cr0.eq) goto loc_830325E4;
	// lwz r11,40(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 40);
	// lwz r10,32(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,-4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// stw r3,184(r31)
	PPC_STORE_U32(r31.u32 + 184, ctx.r3.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,168(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// stw r3,476(r31)
	PPC_STORE_U32(r31.u32 + 476, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r4,184(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,40(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,40(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 40);
	// lwz r10,32(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,-4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// lbz r11,32(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 32);
	// stb r11,16(r31)
	PPC_STORE_U8(r31.u32 + 16, r11.u8);
loc_830325E4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_830325F8"))) PPC_WEAK_FUNC(sub_830325F8);
PPC_FUNC_IMPL(__imp__sub_830325F8) {
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
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lbz r4,21(r30)
	ctx.r4.u64 = PPC_LOAD_U8(r30.u32 + 21);
	// lwz r3,176(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// stw r30,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r30.u32);
	// bl 0x82feebd0
	sub_82FEEBD0(ctx, base);
	// lbz r11,22(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 22);
	// lwz r10,176(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// stb r11,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, r11.u8);
	// lwz r11,556(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 556);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83032650
	if (cr6.eq) goto loc_83032650;
	// lwz r11,112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83032650
	if (cr0.eq) goto loc_83032650;
	// lwz r3,176(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// bl 0x82fef6f8
	sub_82FEF6F8(ctx, base);
	// stw r3,556(r30)
	PPC_STORE_U32(r30.u32 + 556, ctx.r3.u32);
loc_83032650:
	// lwz r11,524(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 524);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8303268c
	if (!cr6.eq) goto loc_8303268C;
	// li r3,80
	ctx.r3.s64 = 80;
	// lwz r4,180(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83032684
	if (cr0.eq) goto loc_83032684;
	// lwz r4,180(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// bl 0x8305a378
	sub_8305A378(ctx, base);
	// b 0x83032688
	goto loc_83032688;
loc_83032684:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_83032688:
	// stw r3,524(r30)
	PPC_STORE_U32(r30.u32 + 524, ctx.r3.u32);
loc_8303268C:
	// lwz r4,524(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 524);
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// stw r28,476(r30)
	PPC_STORE_U32(r30.u32 + 476, r28.u32);
	// stw r28,188(r30)
	PPC_STORE_U32(r30.u32 + 188, r28.u32);
	// stw r4,184(r30)
	PPC_STORE_U32(r30.u32 + 184, ctx.r4.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,17(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 17);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830326e4
	if (cr0.eq) goto loc_830326E4;
	// lwz r11,104(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// lwz r10,168(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// stw r11,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, r11.u32);
	// lwz r11,176(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// lwz r10,168(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, r11.u32);
	// lbz r11,11(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 11);
	// lwz r10,168(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// stb r11,84(r10)
	PPC_STORE_U8(ctx.r10.u32 + 84, r11.u8);
loc_830326E4:
	// lwz r11,172(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 172);
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stb r11,16(r30)
	PPC_STORE_U8(r30.u32 + 16, r11.u8);
	// beq 0x83032714
	if (cr0.eq) goto loc_83032714;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83032714:
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83032730
	if (cr0.eq) goto loc_83032730;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83032730:
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8303274c
	if (cr0.eq) goto loc_8303274C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8303274C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8301fa40
	sub_8301FA40(ctx, base);
	// lwz r3,216(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// lwz r4,196(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,532(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 532);
	// stw r28,196(r30)
	PPC_STORE_U32(r30.u32 + 196, r28.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83032780
	if (cr0.eq) goto loc_83032780;
	// bl 0x8305c090
	sub_8305C090(ctx, base);
loc_83032780:
	// addi r3,r30,400
	ctx.r3.s64 = r30.s64 + 400;
	// lwz r7,52(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// lwz r6,48(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r5,44(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// bl 0x8301e758
	sub_8301E758(ctx, base);
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830327c4
	if (!cr6.eq) goto loc_830327C4;
	// lwz r3,192(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r4,r11,-8744
	ctx.r4.s64 = r11.s64 + -8744;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,56(r30)
	PPC_STORE_U32(r30.u32 + 56, ctx.r3.u32);
loc_830327C4:
	// li r11,1
	r11.s64 = 1;
	// stb r28,13(r30)
	PPC_STORE_U8(r30.u32 + 13, r28.u8);
	// stb r28,14(r30)
	PPC_STORE_U8(r30.u32 + 14, r28.u8);
	// stw r28,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r28.u32);
	// stb r28,472(r30)
	PPC_STORE_U8(r30.u32 + 472, r28.u8);
	// stb r11,15(r30)
	PPC_STORE_U8(r30.u32 + 15, r11.u8);
	// stb r11,10(r30)
	PPC_STORE_U8(r30.u32 + 10, r11.u8);
	// stb r11,18(r30)
	PPC_STORE_U8(r30.u32 + 18, r11.u8);
	// lwz r11,560(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 560);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8303281c
	if (!cr6.eq) goto loc_8303281C;
	// li r3,56
	ctx.r3.s64 = 56;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83032814
	if (cr0.eq) goto loc_83032814;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x8305bfb8
	sub_8305BFB8(ctx, base);
	// b 0x83032818
	goto loc_83032818;
loc_83032814:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_83032818:
	// stw r3,560(r30)
	PPC_STORE_U32(r30.u32 + 560, ctx.r3.u32);
loc_8303281C:
	// lwz r11,564(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 564);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83032864
	if (!cr0.eq) goto loc_83032864;
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r29.u32);
	// beq 0x83032858
	if (cr0.eq) goto loc_83032858;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,216(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8302dfb0
	sub_8302DFB0(ctx, base);
	// b 0x8303285c
	goto loc_8303285C;
loc_83032858:
	// mr r29,r28
	r29.u64 = r28.u64;
loc_8303285C:
	// stw r29,564(r30)
	PPC_STORE_U32(r30.u32 + 564, r29.u32);
	// b 0x83032868
	goto loc_83032868;
loc_83032864:
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
loc_83032868:
	// li r11,-1
	r11.s64 = -1;
	// lwz r3,528(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 528);
	// stb r28,568(r30)
	PPC_STORE_U8(r30.u32 + 568, r28.u8);
	// stb r28,569(r30)
	PPC_STORE_U8(r30.u32 + 569, r28.u8);
	// stw r28,584(r30)
	PPC_STORE_U32(r30.u32 + 584, r28.u32);
	// stw r28,588(r30)
	PPC_STORE_U32(r30.u32 + 588, r28.u32);
	// stw r11,572(r30)
	PPC_STORE_U32(r30.u32 + 572, r11.u32);
	// stw r11,576(r30)
	PPC_STORE_U32(r30.u32 + 576, r11.u32);
	// stw r11,580(r30)
	PPC_STORE_U32(r30.u32 + 580, r11.u32);
	// stw r28,592(r30)
	PPC_STORE_U32(r30.u32 + 592, r28.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,104(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// lwz r10,528(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 528);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// stw r11,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, r11.u32);
	// lwz r11,528(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 528);
	// lbz r10,11(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 11);
	// stb r10,84(r11)
	PPC_STORE_U8(r11.u32 + 84, ctx.r10.u8);
	// lwz r11,528(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 528);
	// lwz r10,176(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// stw r10,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r10.u32);
	// lbz r11,17(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 17);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830328e8
	if (cr0.eq) goto loc_830328E8;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830328E8:
	// addi r29,r30,124
	r29.s64 = r30.s64 + 124;
	// lbz r9,9(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 9);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff5178
	sub_82FF5178(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x830329c4
	if (!cr0.eq) goto loc_830329C4;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r30,216(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// beq 0x83032984
	if (cr0.eq) goto loc_83032984;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r4,r11,28392
	ctx.r4.s64 = r11.s64 + 28392;
	// li r6,76
	ctx.r6.s64 = 76;
	// li r5,3142
	ctx.r5.s64 = 3142;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x8301f788
	sub_8301F788(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// addi r4,r11,-8860
	ctx.r4.s64 = r11.s64 + -8860;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_83032984:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r4,r11,28392
	ctx.r4.s64 = r11.s64 + 28392;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,3144
	ctx.r5.s64 = 3144;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x8301f788
	sub_8301F788(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// addi r4,r11,-8860
	ctx.r4.s64 = r11.s64 + -8860;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830329C4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff65e8
	sub_82FF65E8(ctx, base);
	// lwz r3,208(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 208);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830329f4
	if (cr0.eq) goto loc_830329F4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,32(r30)
	PPC_STORE_U32(r30.u32 + 32, ctx.r3.u32);
	// stw r28,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r28.u32);
loc_830329F4:
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// stw r28,540(r30)
	PPC_STORE_U32(r30.u32 + 540, r28.u32);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(r11.u32, 32, xer);
	// blt cr6,0x83032a20
	if (cr6.lt) goto loc_83032A20;
	// lwz r3,544(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 544);
	// bl 0x8301ff70
	sub_8301FF70(ctx, base);
	// lwz r3,548(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 548);
	// bl 0x830778e0
	sub_830778E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0490
	sub_82FF0490(ctx, base);
	// b 0x83032a28
	goto loc_83032A28;
loc_83032A20:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0448
	sub_82FF0448(ctx, base);
loc_83032A28:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83032A30"))) PPC_WEAK_FUNC(sub_83032A30);
PPC_FUNC_IMPL(__imp__sub_83032A30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-192
	r31.s64 = r12.s64 + -192;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// lwz r4,180(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 180);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83032A60"))) PPC_WEAK_FUNC(sub_83032A60);
PPC_FUNC_IMPL(__imp__sub_83032A60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-192
	r31.s64 = r12.s64 + -192;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83032A90"))) PPC_WEAK_FUNC(sub_83032A90);
PPC_FUNC_IMPL(__imp__sub_83032A90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-192
	r31.s64 = r12.s64 + -192;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83032AC8"))) PPC_WEAK_FUNC(sub_83032AC8);
PPC_FUNC_IMPL(__imp__sub_83032AC8) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,216(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 216);
	// bl 0x82fdbb28
	sub_82FDBB28(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// lwz r28,8(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// clrlwi. r11,r28,31
	r11.u64 = r28.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83032b0c
	if (cr0.eq) goto loc_83032B0C;
	// li r4,295
	ctx.r4.s64 = 295;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// b 0x83032b50
	goto loc_83032B50;
loc_83032B0C:
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x83032b50
	if (cr6.eq) goto loc_83032B50;
loc_83032B18:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r4,r30,1
	ctx.r4.s64 = r30.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// bl 0x83030cd0
	sub_83030CD0(ctx, base);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// blt cr6,0x83032b18
	if (cr6.lt) goto loc_83032B18;
loc_83032B50:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83032B64"))) PPC_WEAK_FUNC(sub_83032B64);
PPC_FUNC_IMPL(__imp__sub_83032B64) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x83094688
	sub_83094688(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83032B98"))) PPC_WEAK_FUNC(sub_83032B98);
PPC_FUNC_IMPL(__imp__sub_83032B98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0af8
	// addi r31,r1,-272
	r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r17,r4
	r17.u64 = ctx.r4.u64;
	// li r19,0
	r19.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r19
	r27.u64 = r19.u64;
	// li r16,1
	r16.s64 = 1;
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(r17.s32, 0, xer);
	// ble cr6,0x83032c54
	if (!cr6.gt) goto loc_83032C54;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r26,r11,-8744
	r26.s64 = r11.s64 + -8744;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r24,r11,-28120
	r24.s64 = r11.s64 + -28120;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r25,r11,-28108
	r25.s64 = r11.s64 + -28108;
loc_83032BDC:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,520(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 520);
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r29,8(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fd9c88
	sub_82FD9C88(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83032c1c
	if (cr0.eq) goto loc_83032C1C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83032c48
	if (cr0.eq) goto loc_83032C48;
loc_83032C1C:
	// lwz r28,16(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x83061308
	sub_83061308(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83032c48
	if (cr0.eq) goto loc_83032C48;
	// stb r16,472(r30)
	PPC_STORE_U8(r30.u32 + 472, r16.u8);
loc_83032C48:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpw cr6,r27,r17
	cr6.compare<int32_t>(r27.s32, r17.s32, xer);
	// blt cr6,0x83032bdc
	if (cr6.lt) goto loc_83032BDC;
loc_83032C54:
	// lbz r11,472(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 472);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83032ea0
	if (cr0.eq) goto loc_83032EA0;
	// addi r18,r30,220
	r18.s64 = r30.s64 + 220;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r18,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r18.u32);
	// stw r28,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r28.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe65d0
	sub_82FE65D0(ctx, base);
	// mr r20,r19
	r20.u64 = r19.u64;
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(r17.s32, 0, xer);
	// ble cr6,0x83032dd8
	if (!cr6.gt) goto loc_83032DD8;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r24,r11,-6380
	r24.s64 = r11.s64 + -6380;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r23,r11,-7168
	r23.s64 = r11.s64 + -7168;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r22,r11,-8508
	r22.s64 = r11.s64 + -8508;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r25,r11,-27800
	r25.s64 = r11.s64 + -27800;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r21,r11,-8660
	r21.s64 = r11.s64 + -8660;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r26,r11,-8540
	r26.s64 = r11.s64 + -8540;
loc_83032CC0:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// lwz r3,520(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 520);
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r5,40(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x82fe6ed8
	sub_82FE6ED8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8302cd78
	sub_8302CD78(ctx, base);
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x83032dcc
	if (!cr6.eq) goto loc_83032DCC;
	// lwz r27,112(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r29,16(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83032d28
	if (cr0.eq) goto loc_83032D28;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83032ac8
	sub_83032AC8(ctx, base);
	// b 0x83032d4c
	goto loc_83032D4C;
loc_83032D28:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83032d4c
	if (cr0.eq) goto loc_83032D4C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83030cd0
	sub_83030CD0(ctx, base);
loc_83032D4C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83032d78
	if (cr0.eq) goto loc_83032D78;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r19,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r19.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// b 0x83032dcc
	goto loc_83032DCC;
loc_83032D78:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83032dcc
	if (cr0.eq) goto loc_83032DCC;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83032dcc
	if (cr0.eq) goto loc_83032DCC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83032dcc
	if (cr0.eq) goto loc_83032DCC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83032dcc
	if (cr0.eq) goto loc_83032DCC;
	// lwz r11,168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// stb r16,36(r11)
	PPC_STORE_U8(r11.u32 + 36, r16.u8);
loc_83032DCC:
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// cmpw cr6,r20,r17
	cr6.compare<int32_t>(r20.s32, r17.s32, xer);
	// blt cr6,0x83032cc0
	if (cr6.lt) goto loc_83032CC0;
loc_83032DD8:
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83032e8c
	if (cr0.eq) goto loc_83032E8C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83032e8c
	if (cr0.eq) goto loc_83032E8C;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x83032e8c
	if (!cr0.eq) goto loc_83032E8C;
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r29,r30,344
	r29.s64 = r30.s64 + 344;
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// sthx r19,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r19.u16);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r4,24(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r19,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r19.u16);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,24(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// sthx r19,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, r19.u16);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x8302c040
	sub_8302C040(ctx, base);
loc_83032E8C:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82fe6e10
	sub_82FE6E10(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
loc_83032EA0:
	// addi r1,r31,272
	ctx.r1.s64 = r31.s64 + 272;
	// b 0x831b0b48
	return;
}

__attribute__((alias("__imp__sub_83032EA8"))) PPC_WEAK_FUNC(sub_83032EA8);
PPC_FUNC_IMPL(__imp__sub_83032EA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-272
	r31.s64 = r12.s64 + -272;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82fdc2c8
	sub_82FDC2C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83032ED0"))) PPC_WEAK_FUNC(sub_83032ED0);
PPC_FUNC_IMPL(__imp__sub_83032ED0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-272
	r31.s64 = r12.s64 + -272;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82fe6e10
	sub_82FE6E10(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83032F00"))) PPC_WEAK_FUNC(sub_83032F00);
PPC_FUNC_IMPL(__imp__sub_83032F00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0af0
	// addi r31,r1,-368
	r31.s64 = ctx.r1.s64 + -368;
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r4,396(r31)
	PPC_STORE_U32(r31.u32 + 396, ctx.r4.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r30,488
	r11.s64 = r30.s64 + 488;
	// li r21,0
	r21.s64 = 0;
	// addi r19,r30,316
	r19.s64 = r30.s64 + 316;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,388(r31)
	PPC_STORE_U32(r31.u32 + 388, r30.u32);
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// stw r21,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r21.u32);
	// sth r21,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r21.u16);
	// lwz r11,24(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 24);
	// stw r21,4(r19)
	PPC_STORE_U32(r19.u32 + 4, r21.u32);
	// sth r21,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r21.u16);
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// bl 0x82ffb090
	sub_82FFB090(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83032f80
	if (!cr0.eq) goto loc_83032F80;
	// li r4,183
	ctx.r4.s64 = 183;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// li r4,60
	ctx.r4.s64 = 60;
	// addi r3,r30,124
	ctx.r3.s64 = r30.s64 + 124;
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83034020
	goto loc_83034020;
loc_83032F80:
	// lwz r11,440(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 440);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,124
	ctx.r3.s64 = r30.s64 + 124;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r29,r11,24
	r29.u64 = r11.u32 & 0xFF;
	// stb r29,128(r31)
	PPC_STORE_U8(r31.u32 + 128, r29.u8);
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
	// lwz r11,4(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 4);
	// addi r6,r31,129
	ctx.r6.s64 = r31.s64 + 129;
	// lwz r10,24(r19)
	ctx.r10.u64 = PPC_LOAD_U32(r19.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r21,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r21.u16);
	// lwz r23,24(r19)
	r23.u64 = PPC_LOAD_U32(r19.u32 + 24);
	// lwz r5,520(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 520);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x8302eb10
	sub_8302EB10(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// mr r26,r21
	r26.u64 = r21.u64;
	// mr r27,r21
	r27.u64 = r21.u64;
	// li r22,-1
	r22.s64 = -1;
	// mr r15,r21
	r15.u64 = r21.u64;
	// mr. r25,r29
	r25.u64 = r29.u64;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// bne 0x830330d4
	if (!cr0.eq) goto loc_830330D4;
	// addi r28,r30,400
	r28.s64 = r30.s64 + 400;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8301e5d8
	sub_8301E5D8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r29,56(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x83033008
	if (cr0.eq) goto loc_83033008;
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// b 0x8303300c
	goto loc_8303300C;
loc_83033008:
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
loc_8303300C:
	// lbz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x83033038
	if (cr0.eq) goto loc_83033038;
	// lwz r11,168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83033060
	if (cr0.eq) goto loc_83033060;
	// mr r29,r21
	r29.u64 = r21.u64;
loc_83033034:
	// li r11,1
	r11.s64 = 1;
loc_83033038:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x83033078
	if (cr6.eq) goto loc_83033078;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x83033078
	if (cr6.eq) goto loc_83033078;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x83033078
	if (cr6.eq) goto loc_83033078;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x830330d4
	if (!cr6.eq) goto loc_830330D4;
	// li r15,1
	r15.s64 = 1;
	// b 0x830330d4
	goto loc_830330D4;
loc_83033060:
	// bl 0x83020b18
	sub_83020B18(ctx, base);
	// lwz r29,0(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x83033034
	if (cr0.eq) goto loc_83033034;
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// b 0x83033038
	goto loc_83033038;
loc_83033078:
	// lwz r11,80(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830330a0
	if (!cr6.eq) goto loc_830330A0;
	// lwz r11,60(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830330a0
	if (cr6.eq) goto loc_830330A0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83048528
	sub_83048528(ctx, base);
	// stw r3,80(r29)
	PPC_STORE_U32(r29.u32 + 80, ctx.r3.u32);
loc_830330A0:
	// lwz r27,80(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + 80);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,40(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// lwz r10,32(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,-4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// lwz r22,36(r11)
	r22.u64 = PPC_LOAD_U32(r11.u32 + 36);
loc_830330D4:
	// addi r18,r30,400
	r18.s64 = r30.s64 + 400;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8301eaa0
	sub_8301EAA0(ctx, base);
	// lwz r10,40(r18)
	ctx.r10.u64 = PPC_LOAD_U32(r18.u32 + 40);
	// lwz r9,32(r18)
	ctx.r9.u64 = PPC_LOAD_U32(r18.u32 + 32);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,-4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// stb r11,32(r10)
	PPC_STORE_U8(ctx.r10.u32 + 32, r11.u8);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r29,r11,-27800
	r29.s64 = r11.s64 + -27800;
	// stw r29,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r29.u32);
	// beq cr6,0x83033154
	if (cr6.eq) goto loc_83033154;
	// lwz r4,200(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 200);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne 0x8303312c
	if (!cr0.eq) goto loc_8303312C;
	// lwz r11,204(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 204);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83033154
	if (cr6.eq) goto loc_83033154;
loc_8303312C:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8303313c
	if (cr6.eq) goto loc_8303313C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83032ac8
	sub_83032AC8(ctx, base);
loc_8303313C:
	// lwz r4,204(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 204);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x83033154
	if (cr0.eq) goto loc_83033154;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83030cd0
	sub_83030CD0(ctx, base);
loc_83033154:
	// cmplwi cr6,r14,0
	cr6.compare<uint32_t>(r14.u32, 0, xer);
	// beq cr6,0x83033168
	if (cr6.eq) goto loc_83033168;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83032b98
	sub_83032B98(ctx, base);
loc_83033168:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r20,r30,344
	r20.s64 = r30.s64 + 344;
	// addi r7,r31,132
	ctx.r7.s64 = r31.s64 + 132;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r10.u32);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r16,16(r30)
	r16.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x83033200
	if (cr6.eq) goto loc_83033200;
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// lwz r10,24(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 24);
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r21,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r21.u16);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// lwz r4,24(r20)
	ctx.r4.u64 = PPC_LOAD_U32(r20.u32 + 24);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r23
	ctx.r5.u64 = r11.u64 + r23.u64;
	// bl 0x82fe7048
	sub_82FE7048(ctx, base);
	// addi r7,r17,-1
	ctx.r7.s64 = r17.s64 + -1;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r31,176
	ctx.r4.s64 = r31.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8302d8c8
	sub_8302D8C8(ctx, base);
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x82fe6e10
	sub_82FE6E10(ctx, base);
loc_83033200:
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// mr r25,r21
	r25.u64 = r21.u64;
	// lwz r3,184(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r11,r23
	r28.u64 = r11.u64 + r23.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r3,184(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// beq cr6,0x830334a4
	if (cr6.eq) goto loc_830334A4;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x83033740
	if (!cr0.eq) goto loc_83033740;
	// addi r7,r31,136
	ctx.r7.s64 = r31.s64 + 136;
	// lwz r3,536(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 536);
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x83020118
	sub_83020118(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83033290
	if (cr0.eq) goto loc_83033290;
	// lwz r29,0(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// bne 0x83033740
	if (!cr0.eq) goto loc_83033740;
loc_83033290:
	// lwz r3,192(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplw cr6,r27,r24
	cr6.compare<uint32_t>(r27.u32, r24.u32, xer);
	// beq cr6,0x83033344
	if (cr6.eq) goto loc_83033344;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0008
	sub_82FF0008(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8302d818
	sub_8302D818(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830332e8
	if (!cr0.eq) goto loc_830332E8;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x830332ec
	if (!cr0.eq) goto loc_830332EC;
loc_830332E8:
	// mr r11,r21
	r11.u64 = r21.u64;
loc_830332EC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83033318
	if (cr0.eq) goto loc_83033318;
	// clrlwi. r11,r15,24
	r11.u64 = r15.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83033318
	if (!cr0.eq) goto loc_83033318;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,72
	ctx.r4.s64 = 72;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
loc_83033318:
	// lwz r3,184(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x83033740
	if (!cr0.eq) goto loc_83033740;
loc_83033344:
	// cmpwi cr6,r22,-1
	cr6.compare<int32_t>(r22.s32, -1, xer);
	// beq cr6,0x83033424
	if (cr6.eq) goto loc_83033424;
	// lwz r3,184(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x83033740
	if (!cr0.eq) goto loc_83033740;
	// addi r7,r31,136
	ctx.r7.s64 = r31.s64 + 136;
	// lwz r3,536(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 536);
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x83020118
	sub_83020118(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830333a4
	if (cr0.eq) goto loc_830333A4;
	// lwz r29,0(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// bne 0x83033740
	if (!cr0.eq) goto loc_83033740;
loc_830333A4:
	// lwz r3,184(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x830333e0
	if (cr0.eq) goto loc_830333E0;
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x830333e4
	if (!cr6.eq) goto loc_830333E4;
loc_830333E0:
	// mr r11,r21
	r11.u64 = r21.u64;
loc_830333E4:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8303341c
	if (cr0.eq) goto loc_8303341C;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8303341c
	if (cr0.eq) goto loc_8303341C;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,80
	ctx.r4.s64 = 80;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
loc_8303341C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x83033740
	if (!cr6.eq) goto loc_83033740;
loc_83033424:
	// cmplw cr6,r27,r24
	cr6.compare<uint32_t>(r27.u32, r24.u32, xer);
	// beq cr6,0x83033438
	if (cr6.eq) goto loc_83033438;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8302d818
	sub_8302D818(ctx, base);
loc_83033438:
	// li r3,96
	ctx.r3.s64 = 96;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,136(r31)
	PPC_STORE_U32(r31.u32 + 136, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83033484
	if (cr0.eq) goto loc_83033484;
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r10,24(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 24);
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// sthx r21,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r21.u16);
	// lwz r4,24(r20)
	ctx.r4.u64 = PPC_LOAD_U32(r20.u32 + 24);
	// lwz r9,216(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x8306dbe0
	sub_8306DBE0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x83033488
	goto loc_83033488;
loc_83033484:
	// mr r29,r21
	r29.u64 = r21.u64;
loc_83033488:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r3,536(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 536);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// b 0x83033734
	goto loc_83033734;
loc_830334A4:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x83033740
	if (!cr0.eq) goto loc_83033740;
	// addi r7,r31,136
	ctx.r7.s64 = r31.s64 + 136;
	// lwz r3,536(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 536);
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x83020118
	sub_83020118(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830334dc
	if (cr0.eq) goto loc_830334DC;
	// lwz r29,0(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// bne 0x83033740
	if (!cr0.eq) goto loc_83033740;
loc_830334DC:
	// lwz r3,192(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// beq cr6,0x83033588
	if (cr6.eq) goto loc_83033588;
	// lwz r29,140(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8302d818
	sub_8302D818(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8303352c
	if (!cr0.eq) goto loc_8303352C;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x83033530
	if (!cr0.eq) goto loc_83033530;
loc_8303352C:
	// mr r11,r21
	r11.u64 = r21.u64;
loc_83033530:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8303355c
	if (cr0.eq) goto loc_8303355C;
	// clrlwi. r11,r15,24
	r11.u64 = r15.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8303355c
	if (!cr0.eq) goto loc_8303355C;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,72
	ctx.r4.s64 = 72;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
loc_8303355C:
	// lwz r3,184(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x83033740
	if (!cr0.eq) goto loc_83033740;
loc_83033588:
	// cmpwi cr6,r22,-1
	cr6.compare<int32_t>(r22.s32, -1, xer);
	// beq cr6,0x830336b4
	if (cr6.eq) goto loc_830336B4;
	// lwz r3,184(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x83033740
	if (!cr0.eq) goto loc_83033740;
	// addi r7,r31,136
	ctx.r7.s64 = r31.s64 + 136;
	// lwz r3,536(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 536);
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x83020118
	sub_83020118(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830335e8
	if (cr0.eq) goto loc_830335E8;
	// lwz r29,0(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// bne 0x83033740
	if (!cr0.eq) goto loc_83033740;
loc_830335E8:
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// beq cr6,0x830336b4
	if (cr6.eq) goto loc_830336B4;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8302d818
	sub_8302D818(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83033618
	if (!cr0.eq) goto loc_83033618;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x8303361c
	if (!cr0.eq) goto loc_8303361C;
loc_83033618:
	// mr r11,r21
	r11.u64 = r21.u64;
loc_8303361C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83033648
	if (cr0.eq) goto loc_83033648;
	// clrlwi. r11,r15,24
	r11.u64 = r15.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83033648
	if (!cr0.eq) goto loc_83033648;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,72
	ctx.r4.s64 = 72;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
loc_83033648:
	// lwz r3,184(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x830336b4
	if (cr0.eq) goto loc_830336B4;
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// beq cr6,0x83033740
	if (cr6.eq) goto loc_83033740;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83033740
	if (cr0.eq) goto loc_83033740;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,79
	ctx.r4.s64 = 79;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
	// b 0x83033740
	goto loc_83033740;
loc_830336B4:
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// beq cr6,0x830336cc
	if (cr6.eq) goto loc_830336CC;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8302d818
	sub_8302D818(ctx, base);
loc_830336CC:
	// li r3,96
	ctx.r3.s64 = 96;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,136(r31)
	PPC_STORE_U32(r31.u32 + 136, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83033718
	if (cr0.eq) goto loc_83033718;
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r10,24(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 24);
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// sthx r21,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r21.u16);
	// lwz r4,24(r20)
	ctx.r4.u64 = PPC_LOAD_U32(r20.u32 + 24);
	// lwz r9,216(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x8306dbe0
	sub_8306DBE0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8303371c
	goto loc_8303371C;
loc_83033718:
	// mr r29,r21
	r29.u64 = r21.u64;
loc_8303371C:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r3,536(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 536);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
loc_83033734:
	// bl 0x83020790
	sub_83020790(ctx, base);
	// stw r3,16(r29)
	PPC_STORE_U32(r29.u32 + 16, ctx.r3.u32);
	// li r25,1
	r25.s64 = 1;
loc_83033740:
	// addi r26,r30,569
	r26.s64 = r30.s64 + 569;
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r21,0(r26)
	PPC_STORE_U8(r26.u32 + 0, r21.u8);
	// beq 0x830337b8
	if (cr0.eq) goto loc_830337B8;
	// clrlwi. r11,r15,24
	r11.u64 = r15.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83033774
	if (cr0.eq) goto loc_83033774;
	// stb r21,16(r30)
	PPC_STORE_U8(r30.u32 + 16, r21.u8);
	// lwz r11,40(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 40);
	// lwz r10,32(r18)
	ctx.r10.u64 = PPC_LOAD_U32(r18.u32 + 32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,-4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// stb r21,32(r11)
	PPC_STORE_U8(r11.u32 + 32, r21.u8);
loc_83033774:
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83033830
	if (cr0.eq) goto loc_83033830;
	// li r11,5
	r11.s64 = 5;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r11,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r11.u32);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r26)
	PPC_STORE_U8(r26.u32 + 0, r11.u8);
	// b 0x83033830
	goto loc_83033830;
loc_830337B8:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x83033830
	if (!cr0.eq) goto loc_83033830;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830337dc
	if (!cr0.eq) goto loc_830337DC;
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r26)
	PPC_STORE_U8(r26.u32 + 0, r11.u8);
loc_830337DC:
	// clrlwi. r11,r15,24
	r11.u64 = r15.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83033800
	if (cr0.eq) goto loc_83033800;
	// stb r21,16(r30)
	PPC_STORE_U8(r30.u32 + 16, r21.u8);
	// lwz r11,40(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 40);
	// lwz r10,32(r18)
	ctx.r10.u64 = PPC_LOAD_U32(r18.u32 + 32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,-4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// stb r21,32(r11)
	PPC_STORE_U8(r11.u32 + 32, r21.u8);
loc_83033800:
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83033830
	if (cr0.eq) goto loc_83033830;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
loc_83033830:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// ori r10,r10,32808
	ctx.r10.u64 = ctx.r10.u64 | 32808;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x8301e3b0
	sub_8301E3B0(ctx, base);
	// lbz r11,128(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 128);
	// lwz r10,32(r18)
	ctx.r10.u64 = PPC_LOAD_U32(r18.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,40(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 40);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,-4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// stw r24,44(r11)
	PPC_STORE_U32(r11.u32 + 44, r24.u32);
	// beq cr6,0x83033888
	if (cr6.eq) goto loc_83033888;
	// lwz r11,184(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// stw r11,188(r30)
	PPC_STORE_U32(r30.u32 + 188, r11.u32);
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// stw r3,196(r30)
	PPC_STORE_U32(r30.u32 + 196, ctx.r3.u32);
loc_83033888:
	// lwz r11,112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830338c0
	if (cr6.eq) goto loc_830338C0;
	// lwz r11,572(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 572);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,572(r30)
	PPC_STORE_U32(r30.u32 + 572, r11.u32);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x830338bc
	if (cr0.eq) goto loc_830338BC;
	// stw r11,580(r30)
	PPC_STORE_U32(r30.u32 + 580, r11.u32);
	// b 0x830338c0
	goto loc_830338C0;
loc_830338BC:
	// stw r11,576(r30)
	PPC_STORE_U32(r30.u32 + 576, r11.u32);
loc_830338C0:
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830338fc
	if (cr0.eq) goto loc_830338FC;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// lbz r11,100(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 100);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830338fc
	if (cr0.eq) goto loc_830338FC;
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r26)
	PPC_STORE_U8(r26.u32 + 0, r11.u8);
loc_830338FC:
	// lwz r11,4(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 4);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// lwz r10,24(r19)
	ctx.r10.u64 = PPC_LOAD_U32(r19.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r21,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r21.u16);
	// lwz r4,24(r19)
	ctx.r4.u64 = PPC_LOAD_U32(r19.u32 + 24);
	// bl 0x8301f818
	sub_8301F818(ctx, base);
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83033950
	if (cr0.eq) goto loc_83033950;
	// lwz r11,168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83033944
	if (cr0.eq) goto loc_83033944;
	// mr r11,r21
	r11.u64 = r21.u64;
	// b 0x83033954
	goto loc_83033954;
loc_83033944:
	// bl 0x83020b18
	sub_83020B18(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x83033954
	goto loc_83033954;
loc_83033950:
	// lwz r11,56(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 56);
loc_83033954:
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83033a44
	if (cr0.eq) goto loc_83033A44;
	// lwz r28,36(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// addi r4,r31,136
	ctx.r4.s64 = r31.s64 + 136;
	// lwz r22,24(r11)
	r22.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// li r11,35
	r11.s64 = 35;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// sth r21,138(r31)
	PPC_STORE_U16(r31.u32 + 138, r21.u16);
	// sth r11,136(r31)
	PPC_STORE_U16(r31.u32 + 136, r11.u16);
	// bl 0x82fe2190
	sub_82FE2190(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83033a44
	if (!cr0.eq) goto loc_83033A44;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fda0f8
	sub_82FDA0F8(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// ble 0x83033a44
	if (!cr0.gt) goto loc_83033A44;
	// addi r4,r27,1
	ctx.r4.s64 = r27.s64 + 1;
	// lwz r5,216(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82fe7278
	sub_82FE7278(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// lwz r10,168(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r21,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r21.u16);
	// lwz r4,168(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// bl 0x8302d818
	sub_8302D818(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830339ec
	if (!cr0.eq) goto loc_830339EC;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x830339f0
	if (!cr0.eq) goto loc_830339F0;
loc_830339EC:
	// mr r11,r21
	r11.u64 = r21.u64;
loc_830339F0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83033a2c
	if (cr0.eq) goto loc_83033A2C;
	// clrlwi. r11,r15,24
	r11.u64 = r15.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83033a2c
	if (!cr0.eq) goto loc_83033A2C;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,168(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,72
	ctx.r4.s64 = 72;
	// sthx r21,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r21.u16);
	// lwz r5,168(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// bl 0x8301f560
	sub_8301F560(ctx, base);
loc_83033A2C:
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// lwz r4,168(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83033A44:
	// lwz r11,40(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 40);
	// lwz r10,32(r18)
	ctx.r10.u64 = PPC_LOAD_U32(r18.u32 + 32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,-4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// stw r22,36(r11)
	PPC_STORE_U32(r11.u32 + 36, r22.u32);
	// lwz r11,480(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 480);
	// cmplw cr6,r17,r11
	cr6.compare<uint32_t>(r17.u32, r11.u32, xer);
	// blt cr6,0x83033a70
	if (cr6.lt) goto loc_83033A70;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8301fb40
	sub_8301FB40(ctx, base);
loc_83033A70:
	// lwz r11,484(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 484);
	// rlwinm r10,r17,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r25,128(r31)
	r25.u64 = PPC_LOAD_U8(r31.u32 + 128);
	// mr r23,r25
	r23.u64 = r25.u64;
	// stwx r21,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r21.u32);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// lwz r11,40(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 40);
	// lwz r10,32(r18)
	ctx.r10.u64 = PPC_LOAD_U32(r18.u32 + 32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,184(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,-4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// stw r9,40(r11)
	PPC_STORE_U32(r11.u32 + 40, ctx.r9.u32);
	// bne cr6,0x83033ac0
	if (!cr6.eq) goto loc_83033AC0;
	// clrlwi. r11,r16,24
	r11.u64 = r16.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83033ac0
	if (cr0.eq) goto loc_83033AC0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8301e438
	sub_8301E438(ctx, base);
loc_83033AC0:
	// lwz r11,112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83033ad4
	if (cr6.eq) goto loc_83033AD4;
	// lwz r11,552(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 552);
	// stw r21,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r21.u32);
loc_83033AD4:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r4,520(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 520);
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// lwz r7,84(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8302f430
	sub_8302F430(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x83033afc
	if (cr0.eq) goto loc_83033AFC;
	// lwz r3,548(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 548);
	// bl 0x830778e0
	sub_830778E0(ctx, base);
loc_83033AFC:
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83033b24
	if (cr0.eq) goto loc_83033B24;
	// lbz r11,20(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83033b24
	if (cr0.eq) goto loc_83033B24;
	// lwz r11,532(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 532);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x83033b28
	if (!cr6.eq) goto loc_83033B28;
loc_83033B24:
	// mr r11,r21
	r11.u64 = r21.u64;
loc_83033B28:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83033b60
	if (cr0.eq) goto loc_83033B60;
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// lwz r10,24(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 24);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// sthx r21,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r21.u16);
	// lwz r8,84(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// lwz r7,24(r20)
	ctx.r7.u64 = PPC_LOAD_U32(r20.u32 + 24);
	// lwz r3,532(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 532);
	// bl 0x8305c790
	sub_8305C790(ctx, base);
loc_83033B60:
	// lwz r11,92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83033bac
	if (cr6.eq) goto loc_83033BAC;
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// lwz r7,24(r20)
	ctx.r7.u64 = PPC_LOAD_U32(r20.u32 + 24);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// sthx r21,r11,r7
	PPC_STORE_U16(r11.u32 + ctx.r7.u32, r21.u16);
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// lwz r7,84(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// lwz r6,24(r20)
	ctx.r6.u64 = PPC_LOAD_U32(r20.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83033BAC:
	// lwz r10,112(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x83033bfc
	if (cr0.eq) goto loc_83033BFC;
	// lwz r3,192(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r28,0(r10)
	r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r22,552(r30)
	r22.u64 = PPC_LOAD_U32(r30.u32 + 552);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r27,16(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r11,36(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83033BFC:
	// lbz r11,129(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 129);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83033ee8
	if (cr0.eq) goto loc_83033EE8;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8301e348
	sub_8301E348(ctx, base);
	// lwz r11,476(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// mr r27,r21
	r27.u64 = r21.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83033cd4
	if (!cr6.eq) goto loc_83033CD4;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83033cc8
	if (cr0.eq) goto loc_83033CC8;
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83033cc8
	if (cr0.eq) goto loc_83033CC8;
	// lwz r11,168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83033c60
	if (cr0.eq) goto loc_83033C60;
	// mr r11,r21
	r11.u64 = r21.u64;
	// b 0x83033c68
	goto loc_83033C68;
loc_83033C60:
	// bl 0x83020b18
	sub_83020B18(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83033C68:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,588(r30)
	PPC_STORE_U32(r30.u32 + 588, r11.u32);
	// bne cr6,0x83033c84
	if (!cr6.eq) goto loc_83033C84;
	// lwz r11,168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// stw r11,584(r30)
	PPC_STORE_U32(r30.u32 + 584, r11.u32);
	// b 0x83033c88
	goto loc_83033C88;
loc_83033C84:
	// stw r21,584(r30)
	PPC_STORE_U32(r30.u32 + 584, r21.u32);
loc_83033C88:
	// lwz r11,112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83033cd4
	if (cr6.eq) goto loc_83033CD4;
	// lwz r11,168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// lwz r4,140(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r21,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, r21.u16);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// stw r3,592(r30)
	PPC_STORE_U32(r30.u32 + 592, ctx.r3.u32);
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83033cd4
	if (cr0.eq) goto loc_83033CD4;
	// b 0x83033cd0
	goto loc_83033CD0;
loc_83033CC8:
	// stw r21,584(r30)
	PPC_STORE_U32(r30.u32 + 584, r21.u32);
	// stw r21,588(r30)
	PPC_STORE_U32(r30.u32 + 588, r21.u32);
loc_83033CD0:
	// stw r21,592(r30)
	PPC_STORE_U32(r30.u32 + 592, r21.u32);
loc_83033CD4:
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83033e0c
	if (cr0.eq) goto loc_83033E0C;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
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
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83033d44
	if (cr0.lt) goto loc_83033D44;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// li r4,7
	ctx.r4.s64 = 7;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
loc_83033D44:
	// lwz r11,168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// lbz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 100);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x83033d60
	if (cr0.eq) goto loc_83033D60;
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r26)
	PPC_STORE_U8(r26.u32 + 0, r11.u8);
	// b 0x83033db4
	goto loc_83033DB4;
loc_83033D60:
	// lwz r10,112(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83033d84
	if (cr6.eq) goto loc_83033D84;
	// lbz r11,101(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 101);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stb r11,568(r30)
	PPC_STORE_U8(r30.u32 + 568, r11.u8);
	// beq 0x83033d84
	if (cr0.eq) goto loc_83033D84;
	// lwz r11,52(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// stw r11,592(r30)
	PPC_STORE_U32(r30.u32 + 592, r11.u32);
loc_83033D84:
	// lwz r11,584(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 584);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83033db4
	if (cr0.eq) goto loc_83033DB4;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmpwi cr6,r11,25
	cr6.compare<int32_t>(r11.s32, 25, xer);
	// bne cr6,0x83033db4
	if (!cr6.eq) goto loc_83033DB4;
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 116);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_83033DB4:
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83033ddc
	if (cr0.eq) goto loc_83033DDC;
	// lbz r11,20(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83033ddc
	if (cr0.eq) goto loc_83033DDC;
	// lwz r11,532(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 532);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x83033de0
	if (!cr6.eq) goto loc_83033DE0;
loc_83033DDC:
	// mr r11,r21
	r11.u64 = r21.u64;
loc_83033DE0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83033e0c
	if (cr0.eq) goto loc_83033E0C;
	// addi r11,r30,488
	r11.s64 = r30.s64 + 488;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r21,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, r21.u16);
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lwz r3,532(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 532);
	// bl 0x8305c4f8
	sub_8305C4F8(ctx, base);
loc_83033E0C:
	// lwz r11,112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83033e28
	if (cr6.eq) goto loc_83033E28;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8302dad8
	sub_8302DAD8(ctx, base);
loc_83033E28:
	// lwz r11,92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83033e68
	if (cr6.eq) goto loc_83033E68;
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// lwz r10,24(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 24);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// sthx r21,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r21.u16);
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// lwz r7,24(r20)
	ctx.r7.u64 = PPC_LOAD_U32(r20.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83033E68:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x83033e7c
	if (cr6.eq) goto loc_83033E7C;
	// lwz r11,396(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 396);
	// stb r21,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r21.u8);
	// b 0x8303401c
	goto loc_8303401C;
loc_83033E7C:
	// lwz r11,40(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 40);
	// lwz r10,32(r18)
	ctx.r10.u64 = PPC_LOAD_U32(r18.u32 + 32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,-4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// stw r3,184(r30)
	PPC_STORE_U32(r30.u32 + 184, ctx.r3.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// stw r3,476(r30)
	PPC_STORE_U32(r30.u32 + 476, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r4,184(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,40(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,40(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 40);
	// lwz r10,32(r18)
	ctx.r10.u64 = PPC_LOAD_U32(r18.u32 + 32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,-4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// lbz r11,32(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 32);
	// stb r11,16(r30)
	PPC_STORE_U8(r30.u32 + 16, r11.u8);
	// b 0x8303401c
	goto loc_8303401C;
loc_83033EE8:
	// lwz r11,112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83034010
	if (cr6.eq) goto loc_83034010;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// mr r28,r21
	r28.u64 = r21.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83033f5c
	if (cr0.eq) goto loc_83033F5C;
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83033f5c
	if (cr0.eq) goto loc_83033F5C;
	// lwz r11,168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83033f40
	if (!cr0.eq) goto loc_83033F40;
	// bl 0x83020b18
	sub_83020B18(ctx, base);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne 0x83033f50
	if (!cr0.eq) goto loc_83033F50;
loc_83033F40:
	// lwz r11,168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// lwz r4,40(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x83033f5c
	if (cr0.eq) goto loc_83033F5C;
loc_83033F50:
	// lwz r3,556(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 556);
	// bl 0x83015c80
	sub_83015C80(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_83033F5C:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83033f84
	if (cr0.eq) goto loc_83033F84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,556(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 556);
	// bl 0x83015c80
	sub_83015C80(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// b 0x83033f88
	goto loc_83033F88;
loc_83033F84:
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
loc_83033F88:
	// lwz r3,556(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 556);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,52(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// lwz r7,168(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,196(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// stw r21,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r21.u32);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r3,560(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 560);
	// lbz r7,101(r7)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + 101);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r21,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r21.u32);
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r21.u32);
	// bl 0x8305c008
	sub_8305C008(ctx, base);
	// lwz r10,112(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// lwz r3,192(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r27,560(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 560);
	// lwz r29,0(r10)
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r28,16(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r11,36(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83034010:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 564);
	// bl 0x83020b78
	sub_83020B78(ctx, base);
loc_8303401C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83034020:
	// addi r1,r31,368
	ctx.r1.s64 = r31.s64 + 368;
	// b 0x831b0b40
	return;
}

__attribute__((alias("__imp__sub_83034028"))) PPC_WEAK_FUNC(sub_83034028);
PPC_FUNC_IMPL(__imp__sub_83034028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-368
	r31.s64 = r12.s64 + -368;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x82fe6e10
	sub_82FE6E10(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83034050"))) PPC_WEAK_FUNC(sub_83034050);
PPC_FUNC_IMPL(__imp__sub_83034050) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-368
	r31.s64 = r12.s64 + -368;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,388(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 388);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83034080"))) PPC_WEAK_FUNC(sub_83034080);
PPC_FUNC_IMPL(__imp__sub_83034080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-368
	r31.s64 = r12.s64 + -368;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,388(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 388);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830340B0"))) PPC_WEAK_FUNC(sub_830340B0);
PPC_FUNC_IMPL(__imp__sub_830340B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-368
	r31.s64 = r12.s64 + -368;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82fe72f8
	sub_82FE72F8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830340D8"))) PPC_WEAK_FUNC(sub_830340D8);
PPC_FUNC_IMPL(__imp__sub_830340D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r3,216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 216);
	// lwz r4,484(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 484);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,524(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 524);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83034128
	if (cr0.eq) goto loc_83034128;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83034128:
	// lwz r30,516(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 516);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x83034144
	if (cr0.eq) goto loc_83034144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8302e888
	sub_8302E888(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_83034144:
	// lwz r3,520(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 520);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83034164
	if (cr0.eq) goto loc_83034164;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83034164:
	// lwz r3,528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 528);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83034184
	if (cr0.eq) goto loc_83034184;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83034184:
	// lwz r3,532(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 532);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830341a4
	if (cr0.eq) goto loc_830341A4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830341A4:
	// lwz r30,536(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 536);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x830341c0
	if (cr0.eq) goto loc_830341C0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83015b18
	sub_83015B18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_830341C0:
	// lwz r30,544(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 544);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x830341dc
	if (cr0.eq) goto loc_830341DC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83020900
	sub_83020900(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_830341DC:
	// lwz r30,548(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 548);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x830341f8
	if (cr0.eq) goto loc_830341F8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8307cbb8
	sub_8307CBB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_830341F8:
	// lwz r30,552(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 552);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x83034214
	if (cr0.eq) goto loc_83034214;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8301faa0
	sub_8301FAA0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_83034214:
	// lwz r3,560(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 560);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83034234
	if (cr0.eq) goto loc_83034234;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83034234:
	// lwz r3,564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 564);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83034248
	if (cr0.eq) goto loc_83034248;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82fdeaa8
	sub_82FDEAA8(ctx, base);
loc_83034248:
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

__attribute__((alias("__imp__sub_83034268"))) PPC_WEAK_FUNC(sub_83034268);
PPC_FUNC_IMPL(__imp__sub_83034268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x831b0b24
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// bl 0x82ff3818
	sub_82FF3818(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r29,0
	r29.s64 = 0;
	// addi r11,r11,32528
	r11.s64 = r11.s64 + 32528;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,16
	ctx.r9.s64 = 16;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,1023
	ctx.r4.s64 = 1023;
	// stb r29,472(r30)
	PPC_STORE_U8(r30.u32 + 472, r29.u8);
	// addi r3,r30,488
	ctx.r3.s64 = r30.s64 + 488;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r10,476(r30)
	PPC_STORE_U32(r30.u32 + 476, ctx.r10.u32);
	// stw r9,480(r30)
	PPC_STORE_U32(r30.u32 + 480, ctx.r9.u32);
	// stw r29,484(r30)
	PPC_STORE_U32(r30.u32 + 484, r29.u32);
	// bl 0x82fe7278
	sub_82FE7278(ctx, base);
	// stw r29,516(r30)
	PPC_STORE_U32(r30.u32 + 516, r29.u32);
	// stw r29,520(r30)
	PPC_STORE_U32(r30.u32 + 520, r29.u32);
	// stw r29,524(r30)
	PPC_STORE_U32(r30.u32 + 524, r29.u32);
	// stw r29,532(r30)
	PPC_STORE_U32(r30.u32 + 532, r29.u32);
	// stw r29,536(r30)
	PPC_STORE_U32(r30.u32 + 536, r29.u32);
	// stw r29,540(r30)
	PPC_STORE_U32(r30.u32 + 540, r29.u32);
	// stw r29,544(r30)
	PPC_STORE_U32(r30.u32 + 544, r29.u32);
	// stw r29,548(r30)
	PPC_STORE_U32(r30.u32 + 548, r29.u32);
	// stw r29,552(r30)
	PPC_STORE_U32(r30.u32 + 552, r29.u32);
	// stw r29,556(r30)
	PPC_STORE_U32(r30.u32 + 556, r29.u32);
	// stw r29,560(r30)
	PPC_STORE_U32(r30.u32 + 560, r29.u32);
	// stw r29,564(r30)
	PPC_STORE_U32(r30.u32 + 564, r29.u32);
	// stw r29,528(r30)
	PPC_STORE_U32(r30.u32 + 528, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8302ef80
	sub_8302EF80(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x83034378
	if (cr6.eq) goto loc_83034378;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83034380
	if (!cr0.eq) goto loc_83034380;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r6,158
	ctx.r6.s64 = 158;
	// addi r4,r11,28392
	ctx.r4.s64 = r11.s64 + 28392;
	// li r5,88
	ctx.r5.s64 = 88;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82fd93a0
	sub_82FD93A0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-8860
	ctx.r4.s64 = r11.s64 + -8860;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83034378:
	// lwz r11,528(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 528);
	// stw r11,168(r30)
	PPC_STORE_U32(r30.u32 + 168, r11.u32);
loc_83034380:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83034394"))) PPC_WEAK_FUNC(sub_83034394);
PPC_FUNC_IMPL(__imp__sub_83034394) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_830343B4"))) PPC_WEAK_FUNC(sub_830343B4);
PPC_FUNC_IMPL(__imp__sub_830343B4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// bl 0x830340d8
	sub_830340D8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_830343D8"))) PPC_WEAK_FUNC(sub_830343D8);
PPC_FUNC_IMPL(__imp__sub_830343D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// bl 0x82ff3d38
	sub_82FF3D38(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83034400"))) PPC_WEAK_FUNC(sub_83034400);
PPC_FUNC_IMPL(__imp__sub_83034400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// addi r3,r11,488
	ctx.r3.s64 = r11.s64 + 488;
	// bl 0x82fe72f8
	sub_82FE72F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83034430"))) PPC_WEAK_FUNC(sub_83034430);
PPC_FUNC_IMPL(__imp__sub_83034430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r3,r11,-27680
	ctx.r3.s64 = r11.s64 + -27680;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83034448"))) PPC_WEAK_FUNC(sub_83034448);
PPC_FUNC_IMPL(__imp__sub_83034448) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,32528
	r11.s64 = r11.s64 + 32528;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x830340d8
	sub_830340D8(ctx, base);
	// lwz r3,500(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 500);
	// lwz r4,512(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 512);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff3d38
	sub_82FF3D38(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
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

__attribute__((alias("__imp__sub_830344B0"))) PPC_WEAK_FUNC(sub_830344B0);
PPC_FUNC_IMPL(__imp__sub_830344B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// bl 0x82ff3d38
	sub_82FF3D38(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830344D8"))) PPC_WEAK_FUNC(sub_830344D8);
PPC_FUNC_IMPL(__imp__sub_830344D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addi r3,r11,488
	ctx.r3.s64 = r11.s64 + 488;
	// bl 0x82fe72f8
	sub_82FE72F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83034508"))) PPC_WEAK_FUNC(sub_83034508);
PPC_FUNC_IMPL(__imp__sub_83034508) {
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
	// bl 0x83034448
	sub_83034448(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83034538
	if (cr0.eq) goto loc_83034538;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_83034538:
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

__attribute__((alias("__imp__sub_83034558"))) PPC_WEAK_FUNC(sub_83034558);
PPC_FUNC_IMPL(__imp__sub_83034558) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cntlzw r11,r5
	r11.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830345c4
	if (!cr0.eq) goto loc_830345C4;
	// lwz r11,92(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830345b8
	if (cr6.eq) goto loc_830345B8;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// rlwinm r11,r5,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,0
	ctx.r6.s64 = 0;
	// sthx r30,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r30.u16);
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830345B8:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// sth r30,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r30.u16);
loc_830345C4:
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

__attribute__((alias("__imp__sub_830345E0"))) PPC_WEAK_FUNC(sub_830345E0);
PPC_FUNC_IMPL(__imp__sub_830345E0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	r11.s64 = 1;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r11,0(r26)
	PPC_STORE_U8(r26.u32 + 0, r11.u8);
	// lwz r11,440(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 440);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8303464c
	if (cr0.eq) goto loc_8303464C;
	// li r4,245
	ctx.r4.s64 = 245;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// addi r3,r31,124
	ctx.r3.s64 = r31.s64 + 124;
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
	// lis r11,-32235
	r11.s64 = -2112552960;
	// li r6,77
	ctx.r6.s64 = 77;
	// lwz r7,216(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 216);
	// addi r4,r11,-32588
	ctx.r4.s64 = r11.s64 + -32588;
	// li r5,697
	ctx.r5.s64 = 697;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fd93a0
	sub_82FD93A0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-8860
	ctx.r4.s64 = r11.s64 + -8860;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_8303464C:
	// lbz r11,10(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83034674
	if (cr0.eq) goto loc_83034674;
	// lwz r11,440(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 440);
	// lwz r10,432(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 432);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,-4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// lwz r27,44(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// b 0x83034678
	goto loc_83034678;
loc_83034674:
	// lwz r27,40(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 40);
loc_83034678:
	// addi r3,r31,400
	ctx.r3.s64 = r31.s64 + 400;
	// bl 0x8301e348
	sub_8301E348(ctx, base);
	// lwz r11,440(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 440);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r28,r11,24
	r28.u64 = r11.u32 & 0xFF;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// bl 0x82ffb458
	sub_82FFB458(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830346ec
	if (!cr0.eq) goto loc_830346EC;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,202
	ctx.r4.s64 = 202;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// addi r3,r31,124
	ctx.r3.s64 = r31.s64 + 124;
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
	// b 0x830347a4
	goto loc_830347A4;
loc_830346EC:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// ori r10,r10,32808
	ctx.r10.u64 = ctx.r10.u64 | 32808;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x83034714
	if (cr6.eq) goto loc_83034714;
	// li r4,278
	ctx.r4.s64 = 278;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_83034714:
	// addi r29,r31,124
	r29.s64 = r31.s64 + 124;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83034760
	if (!cr0.eq) goto loc_83034760;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,200
	ctx.r4.s64 = 200;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
loc_83034760:
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83034794
	if (cr6.eq) goto loc_83034794;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r11,20(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83034794:
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stb r11,0(r26)
	PPC_STORE_U8(r26.u32 + 0, r11.u8);
loc_830347A4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_830347B0"))) PPC_WEAK_FUNC(sub_830347B0);
PPC_FUNC_IMPL(__imp__sub_830347B0) {
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
	// addi r31,r3,124
	r31.s64 = ctx.r3.s64 + 124;
	// lis r11,-32235
	r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-32532
	ctx.r4.s64 = r11.s64 + -32532;
	// bl 0x82ff6440
	sub_82FF6440(ctx, base);
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,91
	cr6.compare<uint32_t>(r11.u32, 91, xer);
	// bne cr6,0x830347ec
	if (!cr6.eq) goto loc_830347EC;
	// li r4,93
	ctx.r4.s64 = 93;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
loc_830347EC:
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
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

__attribute__((alias("__imp__sub_83034818"))) PPC_WEAK_FUNC(sub_83034818);
PPC_FUNC_IMPL(__imp__sub_83034818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x831b0b18
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// li r27,0
	r27.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// addi r4,r31,86
	ctx.r4.s64 = r31.s64 + 86;
	// lwz r11,24(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 24);
	// addi r3,r30,124
	ctx.r3.s64 = r30.s64 + 124;
	// stw r27,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r27.u32);
	// stw r30,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r30.u32);
	// stw r24,252(r31)
	PPC_STORE_U32(r31.u32 + 252, r24.u32);
	// stw r25,260(r31)
	PPC_STORE_U32(r31.u32 + 260, r25.u32);
	// sth r27,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r27.u16);
	// bl 0x82ff62e0
	sub_82FF62E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83034878
	if (!cr0.eq) goto loc_83034878;
	// li r3,0
	ctx.r3.s64 = 0;
loc_83034870:
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// b 0x831b0b68
	return;
loc_83034878:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// mr r29,r27
	r29.u64 = r27.u64;
	// ori r10,r10,32808
	ctx.r10.u64 = ctx.r10.u64 | 32808;
	// lwzx r26,r11,r10
	r26.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// sth r27,84(r31)
	PPC_STORE_U16(r31.u32 + 84, r27.u16);
	// stw r26,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r26.u32);
loc_83034894:
	// lis r11,2
	r11.s64 = 131072;
	// ori r28,r11,32852
	r28.u64 = r11.u64 | 32852;
loc_8303489C:
	// addi r3,r30,124
	ctx.r3.s64 = r30.s64 + 124;
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// sth r3,82(r31)
	PPC_STORE_U16(r31.u32 + 82, ctx.r3.u16);
	// clrlwi. r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x830348e8
	if (!cr0.eq) goto loc_830348E8;
	// lis r11,-32235
	r11.s64 = -2112552960;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r6,47
	ctx.r6.s64 = 47;
	// addi r4,r11,-32588
	ctx.r4.s64 = r11.s64 + -32588;
	// li r5,1650
	ctx.r5.s64 = 1650;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82fefc90
	sub_82FEFC90(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// addi r4,r11,-8072
	ctx.r4.s64 = r11.s64 + -8072;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_830348E8:
	// lhz r11,86(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 86);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x83034930
	if (!cr6.eq) goto loc_83034930;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// ori r10,r10,32808
	ctx.r10.u64 = ctx.r10.u64 | 32808;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// bne cr6,0x83034914
	if (!cr6.eq) goto loc_83034914;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83034870
	goto loc_83034870;
loc_83034914:
	// ble cr6,0x83034930
	if (!cr6.gt) goto loc_83034930;
	// li r4,231
	ctx.r4.s64 = 231;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83034870
	goto loc_83034870;
loc_83034930:
	// stb r27,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r27.u8);
	// cmplwi cr6,r3,38
	cr6.compare<uint32_t>(ctx.r3.u32, 38, xer);
	// bne cr6,0x83034974
	if (!cr6.eq) goto loc_83034974;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// addi r6,r31,84
	ctx.r6.s64 = r31.s64 + 84;
	// addi r5,r31,82
	ctx.r5.s64 = r31.s64 + 82;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83034a30
	if (cr6.eq) goto loc_83034A30;
	// mr r29,r27
	r29.u64 = r27.u64;
	// b 0x8303489c
	goto loc_8303489C;
loc_83034974:
	// cmplwi cr6,r3,55296
	cr6.compare<uint32_t>(ctx.r3.u32, 55296, xer);
	// blt cr6,0x830349a8
	if (cr6.lt) goto loc_830349A8;
	// cmplwi cr6,r3,56319
	cr6.compare<uint32_t>(ctx.r3.u32, 56319, xer);
	// bgt cr6,0x830349a8
	if (cr6.gt) goto loc_830349A8;
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830349a0
	if (cr0.eq) goto loc_830349A0;
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x83034a30
	goto loc_83034A30;
loc_830349A0:
	// li r29,1
	r29.s64 = 1;
	// b 0x83034a30
	goto loc_83034A30;
loc_830349A8:
	// cmplwi cr6,r3,56320
	cr6.compare<uint32_t>(ctx.r3.u32, 56320, xer);
	// blt cr6,0x830349d0
	if (cr6.lt) goto loc_830349D0;
	// cmplwi cr6,r3,57343
	cr6.compare<uint32_t>(ctx.r3.u32, 57343, xer);
	// bgt cr6,0x830349d0
	if (cr6.gt) goto loc_830349D0;
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83034a2c
	if (!cr0.eq) goto loc_83034A2C;
	// li r4,282
	ctx.r4.s64 = 282;
loc_830349C4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// b 0x83034a28
	goto loc_83034A28;
loc_830349D0:
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830349e0
	if (cr0.eq) goto loc_830349E0;
	// li r4,249
	ctx.r4.s64 = 249;
	// b 0x830349c4
	goto loc_830349C4;
loc_830349E0:
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// lwzx r11,r11,r28
	r11.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// lbzx r11,r11,r3
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83034a2c
	if (!cr0.eq) goto loc_83034A2C;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// bl 0x82fd9bb8
	sub_82FD9BB8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,218
	ctx.r4.s64 = 218;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
loc_83034A28:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83034A2C:
	// mr r29,r27
	r29.u64 = r27.u64;
loc_83034A30:
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83034a88
	if (!cr0.eq) goto loc_83034A88;
	// lhz r10,82(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 82);
	// cmplwi cr6,r10,60
	cr6.compare<uint32_t>(ctx.r10.u32, 60, xer);
	// bne cr6,0x83034a6c
	if (!cr6.eq) goto loc_83034A6C;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,248
	ctx.r4.s64 = 248;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x83034a88
	goto loc_83034A88;
loc_83034A6C:
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// lwzx r11,r11,r28
	r11.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83034a88
	if (cr0.eq) goto loc_83034A88;
	// li r11,32
	r11.s64 = 32;
	// sth r11,82(r31)
	PPC_STORE_U16(r31.u32 + 82, r11.u16);
loc_83034A88:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lhz r4,82(r31)
	ctx.r4.u64 = PPC_LOAD_U16(r31.u32 + 82);
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lhz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U16(r31.u32 + 84);
	// mr. r11,r4
	r11.u64 = ctx.r4.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8303489c
	if (cr0.eq) goto loc_8303489C;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// sth r27,84(r31)
	PPC_STORE_U16(r31.u32 + 84, r27.u16);
	// b 0x8303489c
	goto loc_8303489C;
	// lwz r30,244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// lwz r25,260(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// li r27,0
	r27.s64 = 0;
	// lwz r24,252(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 252);
	// lwz r26,88(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lbz r29,81(r31)
	r29.u64 = PPC_LOAD_U8(r31.u32 + 81);
	// b 0x83034894
	goto loc_83034894;
}

__attribute__((alias("__imp__sub_83034ADC"))) PPC_WEAK_FUNC(sub_83034ADC);
PPC_FUNC_IMPL(__imp__sub_83034ADC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r27{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-224
	r31.s64 = r12.s64 + -224;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// lis r3,-31997
	ctx.r3.s64 = -2096955392;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,19128
	ctx.r3.s64 = ctx.r3.s64 + 19128;
	// stb r27,81(r31)
	PPC_STORE_U8(r31.u32 + 81, r27.u8);
	// stb r27,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r27.u8);
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_83034B08"))) PPC_WEAK_FUNC(sub_83034B08);
PPC_FUNC_IMPL(__imp__sub_83034B08) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b10
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r4,91
	ctx.r4.s64 = 91;
	// addi r25,r29,124
	r25.s64 = r29.s64 + 124;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83034b60
	if (!cr0.eq) goto loc_83034B60;
	// li r4,261
	ctx.r4.s64 = 261;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
	// li r4,91
	ctx.r4.s64 = 91;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83034d34
	if (cr0.eq) goto loc_83034D34;
loc_83034B60:
	// addi r24,r29,220
	r24.s64 = r29.s64 + 220;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r24,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r24.u32);
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// li r23,0
	r23.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// clrlwi. r30,r28,16
	r30.u64 = r28.u32 & 0xFFFF;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x83034ca0
	if (cr0.eq) goto loc_83034CA0;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r22,r11,24488
	r22.s64 = r11.s64 + 24488;
loc_83034B9C:
	// cmplwi cr6,r30,93
	cr6.compare<uint32_t>(r30.u32, 93, xer);
	// bne cr6,0x83034bb8
	if (!cr6.eq) goto loc_83034BB8;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r3,132(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 132);
	// bl 0x82ffb458
	sub_82FFB458(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83034cd8
	if (!cr0.eq) goto loc_83034CD8;
loc_83034BB8:
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83034c80
	if (!cr0.eq) goto loc_83034C80;
	// cmplwi cr6,r30,55296
	cr6.compare<uint32_t>(r30.u32, 55296, xer);
	// blt cr6,0x83034bf0
	if (cr6.lt) goto loc_83034BF0;
	// cmplwi cr6,r30,56319
	cr6.compare<uint32_t>(r30.u32, 56319, xer);
	// bgt cr6,0x83034bf0
	if (cr6.gt) goto loc_83034BF0;
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83034be8
	if (cr0.eq) goto loc_83034BE8;
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// b 0x83034c80
	goto loc_83034C80;
loc_83034BE8:
	// li r26,1
	r26.s64 = 1;
	// b 0x83034c80
	goto loc_83034C80;
loc_83034BF0:
	// cmplwi cr6,r30,56320
	cr6.compare<uint32_t>(r30.u32, 56320, xer);
	// blt cr6,0x83034c10
	if (cr6.lt) goto loc_83034C10;
	// cmplwi cr6,r30,57343
	cr6.compare<uint32_t>(r30.u32, 57343, xer);
	// bgt cr6,0x83034c10
	if (cr6.gt) goto loc_83034C10;
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83034c7c
	if (!cr0.eq) goto loc_83034C7C;
	// li r4,282
	ctx.r4.s64 = 282;
	// b 0x83034c1c
	goto loc_83034C1C;
loc_83034C10:
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83034c28
	if (cr0.eq) goto loc_83034C28;
	// li r4,249
	ctx.r4.s64 = 249;
loc_83034C1C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// b 0x83034c7c
	goto loc_83034C7C;
loc_83034C28:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r11,132(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 132);
	// ori r10,r10,32852
	ctx.r10.u64 = ctx.r10.u64 | 32852;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lbzx r11,r11,r30
	r11.u64 = PPC_LOAD_U8(r11.u32 + r30.u32);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83034c7c
	if (!cr0.eq) goto loc_83034C7C;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r7,216(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 216);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fd9bb8
	sub_82FD9BB8(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// li r4,196
	ctx.r4.s64 = 196;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
	// li r23,1
	r23.s64 = 1;
loc_83034C7C:
	// li r26,0
	r26.s64 = 0;
loc_83034C80:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// clrlwi. r30,r28,16
	r30.u64 = r28.u32 & 0xFFFF;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x83034b9c
	if (!cr0.eq) goto loc_83034B9C;
loc_83034CA0:
	// li r4,264
	ctx.r4.s64 = 264;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// lis r11,-32235
	r11.s64 = -2112552960;
	// li r6,47
	ctx.r6.s64 = 47;
	// lwz r7,216(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 216);
	// addi r4,r11,-32588
	ctx.r4.s64 = r11.s64 + -32588;
	// li r5,1797
	ctx.r5.s64 = 1797;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82fefc90
	sub_82FEFC90(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,-8072
	ctx.r4.s64 = r11.s64 + -8072;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_83034CD8:
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83034cec
	if (cr0.eq) goto loc_83034CEC;
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_83034CEC:
	// lwz r11,92(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83034d28
	if (cr6.eq) goto loc_83034D28;
	// lwz r5,4(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,24(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r11,r5,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, ctx.r9.u16);
	// lwz r3,92(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 92);
	// lwz r4,24(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83034D28:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
loc_83034D34:
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_83034D3C"))) PPC_WEAK_FUNC(sub_83034D3C);
PPC_FUNC_IMPL(__imp__sub_83034D3C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-208
	r31.s64 = r12.s64 + -208;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82fdc2c8
	sub_82FDC2C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83034D68"))) PPC_WEAK_FUNC(sub_83034D68);
PPC_FUNC_IMPL(__imp__sub_83034D68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83034D88"))) PPC_WEAK_FUNC(sub_83034D88);
PPC_FUNC_IMPL(__imp__sub_83034D88) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// mr r29,r28
	r29.u64 = r28.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x83034dfc
	if (!cr6.gt) goto loc_83034DFC;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_83034DB0:
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83034de0
	if (cr0.eq) goto loc_83034DE0;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83034de0
	if (cr0.eq) goto loc_83034DE0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83034DE0:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stwx r28,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, r28.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x83034db0
	if (cr6.lt) goto loc_83034DB0;
loc_83034DFC:
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83034E08"))) PPC_WEAK_FUNC(sub_83034E08);
PPC_FUNC_IMPL(__imp__sub_83034E08) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83034e38
	if (cr0.eq) goto loc_83034E38;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83034E38:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83034e54
	if (cr0.eq) goto loc_83034E54;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83034E54:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83034e70
	if (cr0.eq) goto loc_83034E70;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83034E70:
	// addi r3,r31,400
	ctx.r3.s64 = r31.s64 + 400;
	// lwz r7,52(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r6,48(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// bl 0x8301e758
	sub_8301E758(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// lwz r3,492(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 492);
	// li r11,1
	r11.s64 = 1;
	// stb r29,13(r31)
	PPC_STORE_U8(r31.u32 + 13, r29.u8);
	// stb r29,14(r31)
	PPC_STORE_U8(r31.u32 + 14, r29.u8);
	// stw r29,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r29.u32);
	// stb r11,15(r31)
	PPC_STORE_U8(r31.u32 + 15, r11.u8);
	// stw r29,472(r31)
	PPC_STORE_U32(r31.u32 + 472, r29.u32);
	// bl 0x83015278
	sub_83015278(ctx, base);
	// addi r28,r31,124
	r28.s64 = r31.s64 + 124;
	// lbz r9,9(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 9);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ff5178
	sub_82FF5178(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x83034f88
	if (!cr0.eq) goto loc_83034F88;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r31,216(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 216);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// beq 0x83034f48
	if (cr0.eq) goto loc_83034F48;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32235
	r11.s64 = -2112552960;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addi r4,r11,-32588
	ctx.r4.s64 = r11.s64 + -32588;
	// li r6,76
	ctx.r6.s64 = 76;
	// li r5,524
	ctx.r5.s64 = 524;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x8301f788
	sub_8301F788(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-8860
	ctx.r4.s64 = r11.s64 + -8860;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_83034F48:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32235
	r11.s64 = -2112552960;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addi r4,r11,-32588
	ctx.r4.s64 = r11.s64 + -32588;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,526
	ctx.r5.s64 = 526;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x8301f788
	sub_8301F788(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-8860
	ctx.r4.s64 = r11.s64 + -8860;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_83034F88:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ff65e8
	sub_82FF65E8(ctx, base);
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 208);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83034fb8
	if (cr0.eq) goto loc_83034FB8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// stw r29,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r29.u32);
loc_83034FB8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83034FC8"))) PPC_WEAK_FUNC(sub_83034FC8);
PPC_FUNC_IMPL(__imp__sub_83034FC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x831b0b18
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// addi r11,r28,124
	r11.s64 = r28.s64 + 124;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,24(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// stw r28,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r28.u32);
	// stw r27,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r27.u32);
	// stw r26,236(r31)
	PPC_STORE_U32(r31.u32 + 236, r26.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// sth r27,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, r27.u16);
	// lbz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 28);
	// stb r10,28(r11)
	PPC_STORE_U8(r11.u32 + 28, ctx.r10.u8);
	// stb r9,96(r31)
	PPC_STORE_U8(r31.u32 + 96, ctx.r9.u8);
	// mr r24,r27
	r24.u64 = r27.u64;
	// sth r27,86(r31)
	PPC_STORE_U16(r31.u32 + 86, r27.u16);
	// mr r25,r27
	r25.u64 = r27.u64;
	// stb r27,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r27.u8);
	// stb r10,81(r31)
	PPC_STORE_U8(r31.u32 + 81, ctx.r10.u8);
	// stw r24,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r24.u32);
loc_83035030:
	// lbz r11,81(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 81);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83035288
	if (cr0.eq) goto loc_83035288;
loc_8303503C:
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// bne cr6,0x8303505c
	if (!cr6.eq) goto loc_8303505C;
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8303505c
	if (!cr0.eq) goto loc_8303505C;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,132(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 132);
	// bl 0x83026590
	sub_83026590(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8303505C:
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// lwz r3,132(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 132);
	// li r4,60
	ctx.r4.s64 = 60;
	// bl 0x83027568
	sub_83027568(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83035098
	if (!cr0.eq) goto loc_83035098;
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83035090
	if (cr0.eq) goto loc_83035090;
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83035090:
	// stb r27,81(r31)
	PPC_STORE_U8(r31.u32 + 81, r27.u8);
	// b 0x83035030
	goto loc_83035030;
loc_83035098:
	// lhz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U16(r31.u32 + 84);
	// stb r27,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r27.u8);
	// cmplwi cr6,r3,38
	cr6.compare<uint32_t>(ctx.r3.u32, 38, xer);
	// bne cr6,0x8303511c
	if (!cr6.eq) goto loc_8303511C;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r28,124
	r30.s64 = r28.s64 + 124;
	// lbz r29,28(r30)
	r29.u64 = PPC_LOAD_U8(r30.u32 + 28);
	// stw r30,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r30.u32);
	// stb r27,28(r30)
	PPC_STORE_U8(r30.u32 + 28, r27.u8);
	// stb r29,104(r31)
	PPC_STORE_U8(r31.u32 + 104, r29.u8);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// addi r6,r31,86
	ctx.r6.s64 = r31.s64 + 86;
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83035114
	if (cr6.eq) goto loc_83035114;
	// mr r25,r27
	r25.u64 = r27.u64;
	// stb r29,28(r30)
	PPC_STORE_U8(r30.u32 + 28, r29.u8);
	// b 0x8303503c
	goto loc_8303503C;
loc_83035114:
	// stb r29,28(r30)
	PPC_STORE_U8(r30.u32 + 28, r29.u8);
	// b 0x830351e0
	goto loc_830351E0;
loc_8303511C:
	// cmplwi cr6,r3,55296
	cr6.compare<uint32_t>(ctx.r3.u32, 55296, xer);
	// blt cr6,0x83035150
	if (cr6.lt) goto loc_83035150;
	// cmplwi cr6,r3,56319
	cr6.compare<uint32_t>(ctx.r3.u32, 56319, xer);
	// bgt cr6,0x83035150
	if (cr6.gt) goto loc_83035150;
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83035148
	if (cr0.eq) goto loc_83035148;
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x830351e0
	goto loc_830351E0;
loc_83035148:
	// li r25,1
	r25.s64 = 1;
	// b 0x830351e0
	goto loc_830351E0;
loc_83035150:
	// cmplwi cr6,r3,56320
	cr6.compare<uint32_t>(ctx.r3.u32, 56320, xer);
	// blt cr6,0x83035178
	if (cr6.lt) goto loc_83035178;
	// cmplwi cr6,r3,57343
	cr6.compare<uint32_t>(ctx.r3.u32, 57343, xer);
	// bgt cr6,0x83035178
	if (cr6.gt) goto loc_83035178;
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830351dc
	if (!cr0.eq) goto loc_830351DC;
	// li r4,282
	ctx.r4.s64 = 282;
loc_8303516C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// b 0x830351d8
	goto loc_830351D8;
loc_83035178:
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83035188
	if (cr0.eq) goto loc_83035188;
	// li r4,249
	ctx.r4.s64 = 249;
	// b 0x8303516c
	goto loc_8303516C;
loc_83035188:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r11,132(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 132);
	// ori r10,r10,32852
	ctx.r10.u64 = ctx.r10.u64 | 32852;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lbzx r11,r11,r3
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830351dc
	if (!cr0.eq) goto loc_830351DC;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r7,216(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + 216);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// bl 0x82fd9bb8
	sub_82FD9BB8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,112
	ctx.r5.s64 = r31.s64 + 112;
	// li r4,196
	ctx.r4.s64 = 196;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
loc_830351D8:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_830351DC:
	// mr r25,r27
	r25.u64 = r27.u64;
loc_830351E0:
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83035238
	if (!cr0.eq) goto loc_83035238;
	// lhz r11,84(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 84);
	// cmplwi cr6,r11,93
	cr6.compare<uint32_t>(r11.u32, 93, xer);
	// bne cr6,0x83035218
	if (!cr6.eq) goto loc_83035218;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// bne cr6,0x83035208
	if (!cr6.eq) goto loc_83035208;
	// li r24,1
	r24.s64 = 1;
	// b 0x8303523c
	goto loc_8303523C;
loc_83035208:
	// cmpwi cr6,r24,1
	cr6.compare<int32_t>(r24.s32, 1, xer);
	// bne cr6,0x83035240
	if (!cr6.eq) goto loc_83035240;
	// li r24,2
	r24.s64 = 2;
	// b 0x8303523c
	goto loc_8303523C;
loc_83035218:
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(r11.u32, 62, xer);
	// bne cr6,0x83035238
	if (!cr6.eq) goto loc_83035238;
	// cmpwi cr6,r24,2
	cr6.compare<int32_t>(r24.s32, 2, xer);
	// bne cr6,0x83035238
	if (!cr6.eq) goto loc_83035238;
	// li r4,262
	ctx.r4.s64 = 262;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83035238:
	// mr r24,r27
	r24.u64 = r27.u64;
loc_8303523C:
	// stw r24,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r24.u32);
loc_83035240:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lhz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U16(r31.u32 + 84);
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lhz r4,86(r31)
	ctx.r4.u64 = PPC_LOAD_U16(r31.u32 + 86);
	// mr. r11,r4
	r11.u64 = ctx.r4.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8303503c
	if (cr0.eq) goto loc_8303503C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// sth r27,86(r31)
	PPC_STORE_U16(r31.u32 + 86, r27.u16);
	// b 0x8303503c
	goto loc_8303503C;
	// lwz r28,228(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// lwz r26,236(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// li r27,0
	r27.s64 = 0;
	// lwz r24,88(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lbz r25,82(r31)
	r25.u64 = PPC_LOAD_U8(r31.u32 + 82);
	// b 0x83035030
	goto loc_83035030;
loc_83035288:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,96(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 96);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// stb r11,28(r10)
	PPC_STORE_U8(ctx.r10.u32 + 28, r11.u8);
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_830352BC"))) PPC_WEAK_FUNC(sub_830352BC);
PPC_FUNC_IMPL(__imp__sub_830352BC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-208
	r31.s64 = r12.s64 + -208;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,228(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// lwz r4,236(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	r11.s64 = 0;
	// stb r11,82(r31)
	PPC_STORE_U8(r31.u32 + 82, r11.u8);
	// lwz r11,92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83035318
	if (cr6.eq) goto loc_83035318;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83035318:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31997
	ctx.r3.s64 = -2096955392;
	// addi r3,r3,21104
	ctx.r3.s64 = ctx.r3.s64 + 21104;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_83035330"))) PPC_WEAK_FUNC(sub_83035330);
PPC_FUNC_IMPL(__imp__sub_83035330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-208
	r31.s64 = r12.s64 + -208;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82fefc78
	sub_82FEFC78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83035358"))) PPC_WEAK_FUNC(sub_83035358);
PPC_FUNC_IMPL(__imp__sub_83035358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-208
	r31.s64 = r12.s64 + -208;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82fefc78
	sub_82FEFC78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83035388"))) PPC_WEAK_FUNC(sub_83035388);
PPC_FUNC_IMPL(__imp__sub_83035388) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830353cc
	if (cr0.eq) goto loc_830353CC;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r5,216(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x8302e7f8
	sub_8302E7F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x830353d0
	goto loc_830353D0;
loc_830353CC:
	// li r11,0
	r11.s64 = 0;
loc_830353D0:
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// stw r11,480(r30)
	PPC_STORE_U32(r30.u32 + 480, r11.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83035404
	if (cr0.eq) goto loc_83035404;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,216(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x83070930
	sub_83070930(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x83035408
	goto loc_83035408;
loc_83035404:
	// li r11,0
	r11.s64 = 0;
loc_83035408:
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// stw r11,484(r30)
	PPC_STORE_U32(r30.u32 + 484, r11.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8303543c
	if (cr0.eq) goto loc_8303543C;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,216(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x83070930
	sub_83070930(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x83035440
	goto loc_83035440;
loc_8303543C:
	// li r11,0
	r11.s64 = 0;
loc_83035440:
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// stw r11,488(r30)
	PPC_STORE_U32(r30.u32 + 488, r11.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq 0x83035484
	if (cr0.eq) goto loc_83035484;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,216(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83043458
	sub_83043458(ctx, base);
	// lis r11,-32233
	r11.s64 = -2112421888;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// addi r11,r11,2232
	r11.s64 = r11.s64 + 2232;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x83035488
	goto loc_83035488;
loc_83035484:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83035488:
	// li r3,28
	ctx.r3.s64 = 28;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// stw r10,476(r30)
	PPC_STORE_U32(r30.u32 + 476, ctx.r10.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830354bc
	if (cr0.eq) goto loc_830354BC;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,216(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r4,109
	ctx.r4.s64 = 109;
	// bl 0x83054fb0
	sub_83054FB0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x830354c0
	goto loc_830354C0;
loc_830354BC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_830354C0:
	// lis r11,-32235
	r11.s64 = -2112552960;
	// lwz r3,480(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 480);
	// addi r29,r11,-32632
	r29.s64 = r11.s64 + -32632;
	// stw r10,492(r30)
	PPC_STORE_U32(r30.u32 + 492, ctx.r10.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r11,-27784
	ctx.r4.s64 = r11.s64 + -27784;
	// bl 0x8302e958
	sub_8302E958(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r5,r29,12
	ctx.r5.s64 = r29.s64 + 12;
	// lwz r3,480(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 480);
	// addi r4,r11,-27776
	ctx.r4.s64 = r11.s64 + -27776;
	// bl 0x8302e958
	sub_8302E958(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r5,r29,4
	ctx.r5.s64 = r29.s64 + 4;
	// lwz r3,480(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 480);
	// addi r4,r11,-27768
	ctx.r4.s64 = r11.s64 + -27768;
	// bl 0x8302e958
	sub_8302E958(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r5,r29,8
	ctx.r5.s64 = r29.s64 + 8;
	// lwz r3,480(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 480);
	// addi r4,r11,-27760
	ctx.r4.s64 = r11.s64 + -27760;
	// bl 0x8302e958
	sub_8302E958(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r5,r29,16
	ctx.r5.s64 = r29.s64 + 16;
	// lwz r3,480(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 480);
	// addi r4,r11,-27748
	ctx.r4.s64 = r11.s64 + -27748;
	// bl 0x8302e958
	sub_8302E958(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83035538"))) PPC_WEAK_FUNC(sub_83035538);
PPC_FUNC_IMPL(__imp__sub_83035538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83035568"))) PPC_WEAK_FUNC(sub_83035568);
PPC_FUNC_IMPL(__imp__sub_83035568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83035598"))) PPC_WEAK_FUNC(sub_83035598);
PPC_FUNC_IMPL(__imp__sub_83035598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830355C8"))) PPC_WEAK_FUNC(sub_830355C8);
PPC_FUNC_IMPL(__imp__sub_830355C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830355F8"))) PPC_WEAK_FUNC(sub_830355F8);
PPC_FUNC_IMPL(__imp__sub_830355F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83035630"))) PPC_WEAK_FUNC(sub_83035630);
PPC_FUNC_IMPL(__imp__sub_83035630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0af0
	// addi r31,r1,-288
	r31.s64 = ctx.r1.s64 + -288;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r14,1
	r14.s64 = 1;
	// addi r29,r30,316
	r29.s64 = r30.s64 + 316;
	// li r26,0
	r26.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,308(r31)
	PPC_STORE_U32(r31.u32 + 308, r30.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r27,316(r31)
	PPC_STORE_U32(r31.u32 + 316, r27.u32);
	// stb r14,0(r27)
	PPC_STORE_U8(r27.u32 + 0, r14.u8);
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// stw r26,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r26.u32);
	// sth r26,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r26.u16);
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// bl 0x82ffb090
	sub_82FFB090(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830356a4
	if (!cr0.eq) goto loc_830356A4;
	// li r4,183
	ctx.r4.s64 = 183;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// li r4,60
	ctx.r4.s64 = 60;
	// addi r3,r30,124
	ctx.r3.s64 = r30.s64 + 124;
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
loc_8303569C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83035c68
	goto loc_83035C68;
loc_830356A4:
	// lwz r11,440(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 440);
	// addi r5,r31,100
	ctx.r5.s64 = r31.s64 + 100;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// stb r26,96(r31)
	PPC_STORE_U8(r31.u32 + 96, r26.u8);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r28,r11,24
	r28.u64 = r11.u32 & 0xFF;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stb r28,97(r31)
	PPC_STORE_U8(r31.u32 + 97, r28.u8);
	// sthx r26,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r26.u16);
	// lwz r15,24(r29)
	r15.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r3,492(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 492);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r20,r11,-27800
	r20.s64 = r11.s64 + -27800;
	// beq 0x830356fc
	if (cr0.eq) goto loc_830356FC;
	// lwz r21,0(r3)
	r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r21,0
	cr0.compare<uint32_t>(r21.u32, 0, xer);
	// bne 0x8303578c
	if (!cr0.eq) goto loc_8303578C;
loc_830356FC:
	// lwz r3,476(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// lwz r4,472(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 472);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge cr6,0x8303571c
	if (!cr6.lt) goto loc_8303571C;
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// b 0x83035754
	goto loc_83035754;
loc_8303571C:
	// li r3,48
	ctx.r3.s64 = 48;
	// lwz r4,180(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83035744
	if (cr0.eq) goto loc_83035744;
	// lwz r4,180(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// bl 0x8306c7d0
	sub_8306C7D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83035748
	goto loc_83035748;
loc_83035744:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_83035748:
	// lwz r3,476(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// bl 0x83043678
	sub_83043678(ctx, base);
loc_83035754:
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// lwz r6,40(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x83086608
	sub_83086608(ctx, base);
	// lwz r3,8(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// lwz r3,492(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 492);
	// bl 0x83054ec8
	sub_83054EC8(ctx, base);
	// lwz r11,472(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 472);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,472(r30)
	PPC_STORE_U32(r30.u32 + 472, r11.u32);
loc_8303578C:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// addi r16,r30,400
	r16.s64 = r30.s64 + 400;
	// ori r10,r10,32808
	ctx.r10.u64 = ctx.r10.u64 | 32808;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x8301ec78
	sub_8301EC78(ctx, base);
	// addi r25,r30,124
	r25.s64 = r30.s64 + 124;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
	// lwz r11,84(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// mr r24,r26
	r24.u64 = r26.u64;
	// li r22,-1
	r22.s64 = -1;
	// lwz r17,8(r11)
	r17.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r19,r11,26808
	r19.s64 = r11.s64 + 26808;
	// lis r11,-32235
	r11.s64 = -2112552960;
	// addi r18,r11,-31840
	r18.s64 = r11.s64 + -31840;
	// lis r11,2
	r11.s64 = 131072;
	// ori r23,r11,32852
	r23.u64 = r11.u64 | 32852;
loc_830357E4:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82ff6188
	sub_82FF6188(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x83035848
	if (cr6.eq) goto loc_83035848;
	// clrlwi r11,r29,16
	r11.u64 = r29.u32 & 0xFFFF;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(r11.u32, 47, xer);
	// beq cr6,0x83035848
	if (cr6.eq) goto loc_83035848;
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(r11.u32, 62, xer);
	// beq cr6,0x83035848
	if (cr6.eq) goto loc_83035848;
	// lwz r10,132(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// lwzx r10,r10,r23
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r23.u32);
	// lbzx r11,r10,r11
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8303583c
	if (cr0.eq) goto loc_8303583C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82ff6188
	sub_82FF6188(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x83035848
	goto loc_83035848;
loc_8303583C:
	// li r4,207
	ctx.r4.s64 = 207;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_83035848:
	// lwz r10,132(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// clrlwi r11,r29,16
	r11.u64 = r29.u32 & 0xFFFF;
	// lwzx r10,r10,r23
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r23.u32);
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x83035ae4
	if (!cr0.eq) goto loc_83035AE4;
	// addi r29,r30,232
	r29.s64 = r30.s64 + 232;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// stw r26,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r26.u32);
	// sth r26,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r26.u16);
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// bl 0x82ffb090
	sub_82FFB090(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq 0x83035b44
	if (cr0.eq) goto loc_83035B44;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ff0278
	sub_82FF0278(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830358ec
	if (!cr0.eq) goto loc_830358EC;
	// li r4,180
	ctx.r4.s64 = 180;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x82ff6498
	sub_82FF6498(ctx, base);
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(r11.u32, 62, xer);
	// beq cr6,0x830357e4
	if (cr6.eq) goto loc_830357E4;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(r11.u32, 47, xer);
	// beq cr6,0x830357e4
	if (cr6.eq) goto loc_830357E4;
	// cmplwi cr6,r11,39
	cr6.compare<uint32_t>(r11.u32, 39, xer);
	// beq cr6,0x830358ec
	if (cr6.eq) goto loc_830358EC;
	// cmplwi cr6,r11,34
	cr6.compare<uint32_t>(r11.u32, 34, xer);
	// beq cr6,0x830358ec
	if (cr6.eq) goto loc_830358EC;
	// lwz r10,132(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// lwzx r10,r10,r23
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r23.u32);
	// lbzx r11,r10,r11
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83035b5c
	if (cr0.eq) goto loc_83035B5C;
loc_830358EC:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r4,109
	ctx.r4.s64 = 109;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r26,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r26.u16);
	// lwz r27,24(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r5,216(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82fd9f48
	sub_82FD9F48(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// stw r28,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r28.u32);
	// beq cr6,0x8303598c
	if (cr6.eq) goto loc_8303598C;
	// mr r29,r26
	r29.u64 = r26.u64;
loc_83035924:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,484(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 484);
	// bl 0x8308ea58
	sub_8308EA58(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// bne cr6,0x83035960
	if (!cr6.eq) goto loc_83035960;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// bl 0x83020000
	sub_83020000(ctx, base);
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83035970
	if (!cr0.eq) goto loc_83035970;
loc_83035960:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(r29.u32, r24.u32, xer);
	// blt cr6,0x83035924
	if (cr6.lt) goto loc_83035924;
	// b 0x8303598c
	goto loc_8303598C;
loc_83035970:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,247
	ctx.r4.s64 = 247;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
loc_8303598C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
	// addi r28,r30,260
	r28.s64 = r30.s64 + 260;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x83034818
	sub_83034818(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830359f4
	if (!cr0.eq) goto loc_830359F4;
	// li r4,199
	ctx.r4.s64 = 199;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// bl 0x82ff6498
	sub_82FF6498(ctx, base);
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(r11.u32, 62, xer);
	// beq cr6,0x830359f4
	if (cr6.eq) goto loc_830359F4;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(r11.u32, 47, xer);
	// beq cr6,0x830359f4
	if (cr6.eq) goto loc_830359F4;
	// lwz r10,132(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// lwzx r10,r10,r23
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r23.u32);
	// lbzx r11,r10,r11
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83035b5c
	if (cr0.eq) goto loc_83035B5C;
loc_830359F4:
	// cmplw cr6,r24,r17
	cr6.compare<uint32_t>(r24.u32, r17.u32, xer);
	// blt cr6,0x83035a70
	if (cr6.lt) goto loc_83035A70;
	// li r3,32
	ctx.r3.s64 = 32;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83035a54
	if (cr0.eq) goto loc_83035A54;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stb r26,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, r26.u8);
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// sthx r26,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r26.u16);
	// lwz r7,24(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lwz r10,216(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82ff9d30
	sub_82FF9D30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83035a58
	goto loc_83035A58;
loc_83035A54:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_83035A58:
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// bl 0x83043678
	sub_83043678(ctx, base);
	// addi r4,r31,100
	ctx.r4.s64 = r31.s64 + 100;
	// lwz r3,484(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 484);
	// bl 0x8305c228
	sub_8305C228(ctx, base);
	// b 0x83035ad4
	goto loc_83035AD4;
loc_83035A70:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// bl 0x83020000
	sub_83020000(ctx, base);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// sthx r26,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r26.u16);
	// lwz r28,24(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// bl 0x82fe6e90
	sub_82FE6E90(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff9c08
	sub_82FF9C08(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r31,100
	ctx.r4.s64 = r31.s64 + 100;
	// stw r26,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r26.u32);
	// stb r26,28(r29)
	PPC_STORE_U8(r29.u32 + 28, r26.u8);
	// stw r26,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r26.u32);
	// stb r14,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r14.u8);
	// lwz r3,484(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 484);
	// bl 0x830a4a30
	sub_830A4A30(ctx, base);
loc_83035AD4:
	// lbz r28,97(r31)
	r28.u64 = PPC_LOAD_U8(r31.u32 + 97);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// lwz r27,316(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// b 0x830357e4
	goto loc_830357E4;
loc_83035AE4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83035b88
	if (cr6.eq) goto loc_83035B88;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(r11.u32, 47, xer);
	// beq cr6,0x83035bb4
	if (cr6.eq) goto loc_83035BB4;
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(r11.u32, 62, xer);
	// beq cr6,0x83035bdc
	if (cr6.eq) goto loc_83035BDC;
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(r11.u32, 60, xer);
	// beq cr6,0x83035be8
	if (cr6.eq) goto loc_83035BE8;
	// cmplwi cr6,r11,39
	cr6.compare<uint32_t>(r11.u32, 39, xer);
	// beq cr6,0x83035b14
	if (cr6.eq) goto loc_83035B14;
	// cmplwi cr6,r11,34
	cr6.compare<uint32_t>(r11.u32, 34, xer);
	// bne cr6,0x830357e4
	if (!cr6.eq) goto loc_830357E4;
loc_83035B14:
	// li r4,174
	ctx.r4.s64 = 174;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82ff63e0
	sub_82FF63E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
	// b 0x830357e4
	goto loc_830357E4;
loc_83035B44:
	// li r4,174
	ctx.r4.s64 = 174;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
	// b 0x8303569c
	goto loc_8303569C;
loc_83035B5C:
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(r11.u32, 60, xer);
	// bne cr6,0x8303569c
	if (!cr6.eq) goto loc_8303569C;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// li r4,198
	ctx.r4.s64 = 198;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
	// b 0x8303569c
	goto loc_8303569C;
loc_83035B88:
	// lis r11,-32235
	r11.s64 = -2112552960;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r6,47
	ctx.r6.s64 = 47;
	// addi r4,r11,-32588
	ctx.r4.s64 = r11.s64 + -32588;
	// li r5,1012
	ctx.r5.s64 = 1012;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82fefc90
	sub_82FEFC90(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// addi r4,r11,-8072
	ctx.r4.s64 = r11.s64 + -8072;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_83035BB4:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stb r14,96(r31)
	PPC_STORE_U8(r31.u32 + 96, r14.u8);
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83035c0c
	if (!cr0.eq) goto loc_83035C0C;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// b 0x83035bf4
	goto loc_83035BF4;
loc_83035BDC:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// b 0x83035c0c
	goto loc_83035C0C;
loc_83035BE8:
	// lwz r3,8(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_83035BF4:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,198
	ctx.r4.s64 = 198;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
loc_83035C0C:
	// lbz r29,96(r31)
	r29.u64 = PPC_LOAD_U8(r31.u32 + 96);
	// mr. r11,r29
	r11.u64 = r29.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83035c2c
	if (cr0.eq) goto loc_83035C2C;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x8301e348
	sub_8301E348(ctx, base);
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83035c2c
	if (cr0.eq) goto loc_83035C2C;
	// stb r26,0(r27)
	PPC_STORE_U8(r27.u32 + 0, r26.u8);
loc_83035C2C:
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83035c64
	if (cr0.eq) goto loc_83035C64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// lwz r7,84(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// lwz r5,40(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83035C64:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83035C68:
	// addi r1,r31,288
	ctx.r1.s64 = r31.s64 + 288;
	// b 0x831b0b40
	return;
}

__attribute__((alias("__imp__sub_83035C70"))) PPC_WEAK_FUNC(sub_83035C70);
PPC_FUNC_IMPL(__imp__sub_83035C70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-288
	r31.s64 = r12.s64 + -288;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,308(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 308);
	// lwz r4,180(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 180);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83035CA0"))) PPC_WEAK_FUNC(sub_83035CA0);
PPC_FUNC_IMPL(__imp__sub_83035CA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-288
	r31.s64 = r12.s64 + -288;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,308(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 308);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83035CD8"))) PPC_WEAK_FUNC(sub_83035CD8);
PPC_FUNC_IMPL(__imp__sub_83035CD8) {
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
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// li r28,0
	r28.s64 = 0;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,2
	r11.s64 = 131072;
	// addi r26,r30,124
	r26.s64 = r30.s64 + 124;
	// sth r28,0(r29)
	PPC_STORE_U16(r29.u32 + 0, r28.u16);
	// ori r27,r11,32808
	r27.u64 = r11.u64 | 32808;
	// stb r28,0(r24)
	PPC_STORE_U8(r24.u32 + 0, r28.u8);
	// li r4,35
	ctx.r4.s64 = 35;
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// lwzx r25,r11,r27
	r25.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83035d7c
	if (cr0.eq) goto loc_83035D7C;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff1b50
	sub_82FF1B50(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83035d50
	if (!cr0.eq) goto loc_83035D50;
loc_83035D44:
	// li r3,2
	ctx.r3.s64 = 2;
loc_83035D48:
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// b 0x831b0b60
	return;
loc_83035D50:
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r24)
	PPC_STORE_U8(r24.u32 + 0, r11.u8);
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// lwzx r11,r11,r27
	r11.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// beq cr6,0x83035d74
	if (cr6.eq) goto loc_83035D74;
	// li r4,231
	ctx.r4.s64 = 231;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_83035D74:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83035d48
	goto loc_83035D48;
loc_83035D7C:
	// addi r22,r30,220
	r22.s64 = r30.s64 + 220;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r22,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r22.u32);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// stw r28,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// sth r28,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r28.u16);
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// bl 0x82ffb090
	sub_82FFB090(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83035dd4
	if (!cr0.eq) goto loc_83035DD4;
	// li r4,226
	ctx.r4.s64 = 226;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// b 0x83035d44
	goto loc_83035D44;
loc_83035DD4:
	// li r4,59
	ctx.r4.s64 = 59;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83035e14
	if (!cr0.eq) goto loc_83035E14;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,229
	ctx.r4.s64 = 229;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// sthx r28,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r28.u16);
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
loc_83035E14:
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// lwzx r11,r11,r27
	r11.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// beq cr6,0x83035e30
	if (cr6.eq) goto loc_83035E30;
	// li r4,231
	ctx.r4.s64 = 231;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_83035E30:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r28,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r28.u16);
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r3,480(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 480);
	// bl 0x83040758
	sub_83040758(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83035ec0
	if (!cr0.eq) goto loc_83035EC0;
	// lbz r11,14(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 14);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83035e7c
	if (!cr0.eq) goto loc_83035E7C;
	// lbz r11,15(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 15);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83035ea8
	if (cr0.eq) goto loc_83035EA8;
loc_83035E7C:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,227
	ctx.r4.s64 = 227;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// sthx r28,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r28.u16);
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
loc_83035EA8:
	// li r30,2
	r30.s64 = 2;
loc_83035EAC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x83035d48
	goto loc_83035D48;
loc_83035EC0:
	// lwz r11,208(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 208);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83035f18
	if (cr6.eq) goto loc_83035F18;
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(r11.u32, ctx.r3.u32, xer);
	// stw r11,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r11.u32);
	// ble cr6,0x83035f18
	if (!cr6.gt) goto loc_83035F18;
	// li r6,10
	ctx.r6.s64 = 10;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// bl 0x82fd9bb0
	sub_82FD9BB0(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// li r4,172
	ctx.r4.s64 = 172;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
	// stw r28,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r28.u32);
loc_83035F18:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r28,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r28.u16);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r3,480(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 480);
	// lwz r5,-16120(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + -16120);
	// bl 0x8302e8f0
	sub_8302E8F0(ctx, base);
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// li r11,1
	r11.s64 = 1;
	// sth r10,0(r23)
	PPC_STORE_U16(r23.u32 + 0, ctx.r10.u16);
	// stb r11,0(r24)
	PPC_STORE_U8(r24.u32 + 0, r11.u8);
	// mr r30,r11
	r30.u64 = r11.u64;
	// b 0x83035eac
	goto loc_83035EAC;
}

__attribute__((alias("__imp__sub_83035F54"))) PPC_WEAK_FUNC(sub_83035F54);
PPC_FUNC_IMPL(__imp__sub_83035F54) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-224
	r31.s64 = r12.s64 + -224;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82fdc2c8
	sub_82FDC2C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83035F80"))) PPC_WEAK_FUNC(sub_83035F80);
PPC_FUNC_IMPL(__imp__sub_83035F80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r30,480(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 480);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x83035fb4
	if (cr0.eq) goto loc_83035FB4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8302e888
	sub_8302E888(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_83035FB4:
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 484);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83035fc8
	if (cr0.eq) goto loc_83035FC8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82fdeaa8
	sub_82FDEAA8(ctx, base);
loc_83035FC8:
	// lwz r3,488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 488);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83035fdc
	if (cr0.eq) goto loc_83035FDC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82fdeaa8
	sub_82FDEAA8(ctx, base);
loc_83035FDC:
	// lwz r30,492(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 492);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x83035ff8
	if (cr0.eq) goto loc_83035FF8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83015ab0
	sub_83015AB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_83035FF8:
	// lwz r3,476(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 476);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83036018
	if (cr0.eq) goto loc_83036018;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83036018:
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

__attribute__((alias("__imp__sub_83036038"))) PPC_WEAK_FUNC(sub_83036038);
PPC_FUNC_IMPL(__imp__sub_83036038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0af0
	// addi r31,r1,-304
	r31.s64 = ctx.r1.s64 + -304;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r4,332(r31)
	PPC_STORE_U32(r31.u32 + 332, ctx.r4.u32);
	// li r11,1
	r11.s64 = 1;
	// addi r29,r30,316
	r29.s64 = r30.s64 + 316;
	// li r14,0
	r14.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,324(r31)
	PPC_STORE_U32(r31.u32 + 324, r30.u32);
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, r11.u8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// stw r14,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r14.u32);
	// sth r14,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r14.u16);
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// bl 0x82ffb090
	sub_82FFB090(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830360a8
	if (!cr0.eq) goto loc_830360A8;
	// li r4,183
	ctx.r4.s64 = 183;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// li r4,60
	ctx.r4.s64 = 60;
	// addi r3,r30,124
	ctx.r3.s64 = r30.s64 + 124;
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
loc_830360A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83036b14
	goto loc_83036B14;
loc_830360A8:
	// lwz r11,440(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 440);
	// addi r22,r30,124
	r22.s64 = r30.s64 + 124;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r14,98(r31)
	PPC_STORE_U8(r31.u32 + 98, r14.u8);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stb r11,97(r31)
	PPC_STORE_U8(r31.u32 + 97, r11.u8);
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r5,r31,116
	ctx.r5.s64 = r31.s64 + 116;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r14,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r14.u16);
	// lwz r26,24(r29)
	r26.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r3,492(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 492);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stw r26,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r26.u32);
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8303610c
	if (cr0.eq) goto loc_8303610C;
	// lwz r29,0(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// stw r29,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r29.u32);
	// bne 0x830361d8
	if (!cr0.eq) goto loc_830361D8;
loc_8303610C:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r11,-28108
	ctx.r4.s64 = r11.s64 + -28108;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82fd9c88
	sub_82FD9C88(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83036144
	if (!cr0.eq) goto loc_83036144;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,305
	ctx.r4.s64 = 305;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
loc_83036144:
	// lwz r3,476(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// lwz r4,472(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 472);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge cr6,0x83036168
	if (!cr6.lt) goto loc_83036168;
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r29,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r29.u32);
	// b 0x830361a4
	goto loc_830361A4;
loc_83036168:
	// li r3,48
	ctx.r3.s64 = 48;
	// lwz r4,180(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83036190
	if (cr0.eq) goto loc_83036190;
	// lwz r4,180(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// bl 0x8306c7d0
	sub_8306C7D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83036194
	goto loc_83036194;
loc_83036190:
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
loc_83036194:
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r3,476(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// stw r29,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r29.u32);
	// bl 0x83043678
	sub_83043678(ctx, base);
loc_830361A4:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r5,40(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830866b8
	sub_830866B8(ctx, base);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,492(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 492);
	// bl 0x83054ec8
	sub_83054EC8(ctx, base);
	// lwz r11,472(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 472);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,472(r30)
	PPC_STORE_U32(r30.u32 + 472, r11.u32);
loc_830361D8:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// addi r3,r30,400
	ctx.r3.s64 = r30.s64 + 400;
	// ori r10,r10,32808
	ctx.r10.u64 = ctx.r10.u64 | 32808;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x8301ec78
	sub_8301EC78(ctx, base);
	// lwz r11,488(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 488);
	// mr r15,r14
	r15.u64 = r14.u64;
	// stw r14,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r14.u32);
	// lwz r11,84(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r21,r11,-27800
	r21.s64 = r11.s64 + -27800;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r16,r11,-28092
	r16.s64 = r11.s64 + -28092;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r18,r11,-27944
	r18.s64 = r11.s64 + -27944;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r23,r11,-28120
	r23.s64 = r11.s64 + -28120;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r17,r11,-28364
	r17.s64 = r11.s64 + -28364;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r20,r11,26808
	r20.s64 = r11.s64 + 26808;
	// lis r11,-32235
	r11.s64 = -2112552960;
	// addi r19,r11,-31840
	r19.s64 = r11.s64 + -31840;
	// lis r11,2
	r11.s64 = 131072;
	// ori r24,r11,32852
	r24.u64 = r11.u64 | 32852;
loc_8303624C:
	// stw r15,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r15.u32);
loc_83036250:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82ff6188
	sub_82FF6188(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(r15.u32, 0, xer);
	// beq cr6,0x830362b4
	if (cr6.eq) goto loc_830362B4;
	// clrlwi r11,r29,16
	r11.u64 = r29.u32 & 0xFFFF;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(r11.u32, 47, xer);
	// beq cr6,0x830362b4
	if (cr6.eq) goto loc_830362B4;
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(r11.u32, 62, xer);
	// beq cr6,0x830362b4
	if (cr6.eq) goto loc_830362B4;
	// lwz r10,132(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// lwzx r10,r10,r24
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r24.u32);
	// lbzx r11,r10,r11
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830362a8
	if (cr0.eq) goto loc_830362A8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82ff6188
	sub_82FF6188(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x830362b4
	goto loc_830362B4;
loc_830362A8:
	// li r4,207
	ctx.r4.s64 = 207;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_830362B4:
	// lwz r10,132(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// clrlwi r11,r29,16
	r11.u64 = r29.u32 & 0xFFFF;
	// lwzx r10,r10,r24
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r24.u32);
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8303678c
	if (!cr0.eq) goto loc_8303678C;
	// addi r29,r30,232
	r29.s64 = r30.s64 + 232;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// stw r14,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r14.u32);
	// sth r14,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r14.u16);
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// bl 0x82ffb090
	sub_82FFB090(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq 0x830367ec
	if (cr0.eq) goto loc_830367EC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ff0278
	sub_82FF0278(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83036358
	if (!cr0.eq) goto loc_83036358;
	// li r4,180
	ctx.r4.s64 = 180;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// bl 0x82ff6498
	sub_82FF6498(ctx, base);
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(r11.u32, 62, xer);
	// beq cr6,0x83036250
	if (cr6.eq) goto loc_83036250;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(r11.u32, 47, xer);
	// beq cr6,0x83036250
	if (cr6.eq) goto loc_83036250;
	// cmplwi cr6,r11,39
	cr6.compare<uint32_t>(r11.u32, 39, xer);
	// beq cr6,0x83036358
	if (cr6.eq) goto loc_83036358;
	// cmplwi cr6,r11,34
	cr6.compare<uint32_t>(r11.u32, 34, xer);
	// beq cr6,0x83036358
	if (cr6.eq) goto loc_83036358;
	// lwz r10,132(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// lwzx r10,r10,r24
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r24.u32);
	// lbzx r11,r10,r11
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83036804
	if (cr0.eq) goto loc_83036804;
loc_83036358:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r4,109
	ctx.r4.s64 = 109;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r14,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r14.u16);
	// lwz r25,24(r29)
	r25.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r5,216(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82fd9f48
	sub_82FD9F48(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(r15.u32, 0, xer);
	// stw r28,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r28.u32);
	// beq cr6,0x830363f4
	if (cr6.eq) goto loc_830363F4;
	// mr r29,r14
	r29.u64 = r14.u64;
loc_83036390:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,484(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 484);
	// bl 0x8308ea58
	sub_8308EA58(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// bne cr6,0x830363c8
	if (!cr6.eq) goto loc_830363C8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// bl 0x83020000
	sub_83020000(ctx, base);
	// bl 0x82ff9bf0
	sub_82FF9BF0(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830363d8
	if (!cr0.eq) goto loc_830363D8;
loc_830363C8:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r15
	cr6.compare<uint32_t>(r29.u32, r15.u32, xer);
	// blt cr6,0x83036390
	if (cr6.lt) goto loc_83036390;
	// b 0x830363f4
	goto loc_830363F4;
loc_830363D8:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,247
	ctx.r4.s64 = 247;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
loc_830363F4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
	// addi r27,r30,260
	r27.s64 = r30.s64 + 260;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x83034818
	sub_83034818(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8303645c
	if (!cr0.eq) goto loc_8303645C;
	// li r4,199
	ctx.r4.s64 = 199;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x82ff6498
	sub_82FF6498(ctx, base);
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(r11.u32, 62, xer);
	// beq cr6,0x8303645c
	if (cr6.eq) goto loc_8303645C;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(r11.u32, 47, xer);
	// beq cr6,0x8303645c
	if (cr6.eq) goto loc_8303645C;
	// lwz r10,132(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// lwzx r10,r10,r24
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r24.u32);
	// lbzx r11,r10,r11
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83036804
	if (cr0.eq) goto loc_83036804;
loc_8303645C:
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// lwz r10,24(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// cmplw cr6,r15,r11
	cr6.compare<uint32_t>(r15.u32, r11.u32, xer);
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r14,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r14.u16);
	// lwz r28,24(r27)
	r28.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// blt cr6,0x830364e4
	if (cr6.lt) goto loc_830364E4;
	// li r3,32
	ctx.r3.s64 = 32;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830364c0
	if (cr0.eq) goto loc_830364C0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,216(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r14,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, r14.u8);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// bl 0x82ff9e88
	sub_82FF9E88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x830364c4
	goto loc_830364C4;
loc_830364C0:
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
loc_830364C4:
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// stw r29,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r29.u32);
	// bl 0x83043678
	sub_83043678(ctx, base);
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// lwz r3,484(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 484);
	// bl 0x8305c228
	sub_8305C228(ctx, base);
	// b 0x83036538
	goto loc_83036538;
loc_830364E4:
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r5,40(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// stw r29,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r29.u32);
	// bl 0x82fe6ed8
	sub_82FE6ED8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff9c08
	sub_82FF9C08(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r14,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r14.u32);
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// stb r14,28(r29)
	PPC_STORE_U8(r29.u32 + 28, r14.u8);
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// stw r14,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r14.u32);
	// stb r11,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r11.u8);
	// lwz r3,484(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 484);
	// bl 0x830a4a30
	sub_830A4A30(ctx, base);
loc_83036538:
	// li r4,58
	ctx.r4.s64 = 58;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82fda0f8
	sub_82FDA0F8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(r28.s32, -1, xer);
	// beq cr6,0x830365d0
	if (cr6.eq) goto loc_830365D0;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x83036588
	if (cr6.eq) goto loc_83036588;
	// lhz r11,0(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83036588
	if (cr0.eq) goto loc_83036588;
	// addi r11,r25,2
	r11.s64 = r25.s64 + 2;
	// b 0x83036570
	goto loc_83036570;
loc_8303656C:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
loc_83036570:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8303656c
	if (!cr0.eq) goto loc_8303656C;
	// subf r11,r25,r11
	r11.s64 = r11.s64 - r25.s64;
	// srawi r5,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r5.s64 = r11.s32 >> 1;
	// b 0x8303658c
	goto loc_8303658C;
loc_83036588:
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
loc_8303658C:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r3,58
	ctx.r3.s64 = 58;
	// bl 0x82fda210
	sub_82FDA210(ctx, base);
	// cmpw cr6,r28,r3
	cr6.compare<int32_t>(r28.s32, ctx.r3.s32, xer);
	// beq cr6,0x830365a8
	if (cr6.eq) goto loc_830365A8;
	// li r4,288
	ctx.r4.s64 = 288;
	// b 0x830365c4
	goto loc_830365C4;
loc_830365A8:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x830365c0
	if (cr6.eq) goto loc_830365C0;
	// lwz r11,236(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 236);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bne cr6,0x830365d0
	if (!cr6.eq) goto loc_830365D0;
loc_830365C0:
	// li r4,289
	ctx.r4.s64 = 289;
loc_830365C4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// b 0x83036250
	goto loc_83036250;
loc_830365D0:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r28,8(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r26,16(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// rlwinm r11,r10,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,24(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// sthx r14,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r14.u16);
	// lwz r27,24(r27)
	r27.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// beq 0x83036708
	if (cr0.eq) goto loc_83036708;
	// lhz r11,0(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83036708
	if (cr0.eq) goto loc_83036708;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83036620
	if (cr0.eq) goto loc_83036620;
	// lwz r4,48(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// b 0x830366ec
	goto loc_830366EC;
loc_83036620:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830366f8
	if (cr0.eq) goto loc_830366F8;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83036650
	if (cr0.eq) goto loc_83036650;
	// li r4,301
	ctx.r4.s64 = 301;
	// b 0x8303667c
	goto loc_8303667C;
loc_83036650:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83036684
	if (cr0.eq) goto loc_83036684;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83036684
	if (!cr0.eq) goto loc_83036684;
	// li r4,303
	ctx.r4.s64 = 303;
loc_8303667C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_83036684:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x830366a4
	if (cr6.eq) goto loc_830366A4;
	// lhz r11,0(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830366c0
	if (!cr0.eq) goto loc_830366C0;
	// lwz r11,212(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x830366c0
	if (!cr6.eq) goto loc_830366C0;
loc_830366A4:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,300
	ctx.r4.s64 = 300;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
loc_830366C0:
	// lwz r3,192(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r30,400
	ctx.r3.s64 = r30.s64 + 400;
	// bl 0x8301ee40
	sub_8301EE40(ctx, base);
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 52);
loc_830366EC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff9bf8
	sub_82FF9BF8(ctx, base);
	// b 0x83036780
	goto loc_83036780;
loc_830366F8:
	// addi r4,r31,108
	ctx.r4.s64 = r31.s64 + 108;
	// lwz r3,488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 488);
	// bl 0x8305c228
	sub_8305C228(ctx, base);
	// b 0x83036780
	goto loc_83036780;
loc_83036708:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83036780
	if (cr0.eq) goto loc_83036780;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83036738
	if (cr0.eq) goto loc_83036738;
	// li r4,302
	ctx.r4.s64 = 302;
	// b 0x83036750
	goto loc_83036750;
loc_83036738:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83036758
	if (cr0.eq) goto loc_83036758;
	// li r4,304
	ctx.r4.s64 = 304;
loc_83036750:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_83036758:
	// lwz r3,192(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r30,400
	ctx.r3.s64 = r30.s64 + 400;
	// bl 0x8301ee40
	sub_8301EE40(ctx, base);
loc_83036780:
	// lwz r26,120(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// addi r15,r15,1
	r15.s64 = r15.s64 + 1;
	// b 0x8303624c
	goto loc_8303624C;
loc_8303678C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83036830
	if (cr6.eq) goto loc_83036830;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(r11.u32, 47, xer);
	// beq cr6,0x8303685c
	if (cr6.eq) goto loc_8303685C;
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(r11.u32, 62, xer);
	// beq cr6,0x83036948
	if (cr6.eq) goto loc_83036948;
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(r11.u32, 60, xer);
	// beq cr6,0x83036880
	if (cr6.eq) goto loc_83036880;
	// cmplwi cr6,r11,39
	cr6.compare<uint32_t>(r11.u32, 39, xer);
	// beq cr6,0x830367bc
	if (cr6.eq) goto loc_830367BC;
	// cmplwi cr6,r11,34
	cr6.compare<uint32_t>(r11.u32, 34, xer);
	// bne cr6,0x83036250
	if (!cr6.eq) goto loc_83036250;
loc_830367BC:
	// li r4,174
	ctx.r4.s64 = 174;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82ff63e0
	sub_82FF63E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
	// b 0x83036250
	goto loc_83036250;
loc_830367EC:
	// li r4,174
	ctx.r4.s64 = 174;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
	// b 0x830360a0
	goto loc_830360A0;
loc_83036804:
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(r11.u32, 60, xer);
	// bne cr6,0x830360a0
	if (!cr6.eq) goto loc_830360A0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,198
	ctx.r4.s64 = 198;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
	// b 0x830360a0
	goto loc_830360A0;
loc_83036830:
	// lis r11,-32235
	r11.s64 = -2112552960;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r6,47
	ctx.r6.s64 = 47;
	// addi r4,r11,-32588
	ctx.r4.s64 = r11.s64 + -32588;
	// li r5,1406
	ctx.r5.s64 = 1406;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82fefc90
	sub_82FEFC90(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// addi r4,r11,-8072
	ctx.r4.s64 = r11.s64 + -8072;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_8303685C:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// stb r11,98(r31)
	PPC_STORE_U8(r31.u32 + 98, r11.u8);
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8303689c
	if (!cr0.eq) goto loc_8303689C;
loc_83036880:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,198
	ctx.r4.s64 = 198;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
loc_8303689C:
	// lwz r11,488(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 488);
	// mr r29,r14
	r29.u64 = r14.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x830368f8
	if (!cr6.gt) goto loc_830368F8;
loc_830368B0:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 488);
	// bl 0x8308ea58
	sub_8308EA58(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x8302cd78
	sub_8302CD78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ff9bf8
	sub_82FF9BF8(ctx, base);
	// lwz r11,488(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 488);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x830368b0
	if (cr6.lt) goto loc_830368B0;
loc_830368F8:
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(r15.u32, 0, xer);
	// beq cr6,0x83036a44
	if (cr6.eq) goto loc_83036A44;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// stb r14,96(r31)
	PPC_STORE_U8(r31.u32 + 96, r14.u8);
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83029f88
	sub_83029F88(ctx, base);
	// addic. r25,r15,-1
	xer.ca = r15.u32 > 0;
	r25.s64 = r15.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// mr r26,r14
	r26.u64 = r14.u64;
	// beq 0x83036a44
	if (cr0.eq) goto loc_83036A44;
	// lbz r24,96(r31)
	r24.u64 = PPC_LOAD_U8(r31.u32 + 96);
	// lwz r23,100(r31)
	r23.u64 = PPC_LOAD_U32(r31.u32 + 100);
loc_83036928:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// bne cr6,0x830369c8
	if (!cr6.eq) goto loc_830369C8;
	// addi r27,r26,1
	r27.s64 = r26.s64 + 1;
	// b 0x830369bc
	goto loc_830369BC;
loc_83036948:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// b 0x8303689c
	goto loc_8303689C;
loc_83036954:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r8,32(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x830369b8
	if (!cr6.eq) goto loc_830369B8;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830369b8
	if (cr0.eq) goto loc_830369B8;
	// lwz r3,8(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,247
	ctx.r4.s64 = 247;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
loc_830369B8:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
loc_830369BC:
	// cmplw cr6,r27,r15
	cr6.compare<uint32_t>(r27.u32, r15.u32, xer);
	// blt cr6,0x83036954
	if (cr6.lt) goto loc_83036954;
	// b 0x83036a34
	goto loc_83036A34;
loc_830369C8:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// addi r6,r31,120
	ctx.r6.s64 = r31.s64 + 120;
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// lwz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x83027490
	sub_83027490(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83036a1c
	if (cr0.eq) goto loc_83036A1C;
	// lwz r3,8(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,247
	ctx.r4.s64 = 247;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
loc_83036A1C:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// lwz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x83028148
	sub_83028148(ctx, base);
loc_83036A34:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmplw cr6,r26,r25
	cr6.compare<uint32_t>(r26.u32, r25.u32, xer);
	// blt cr6,0x83036928
	if (cr6.lt) goto loc_83036928;
	// b 0x83036a48
	goto loc_83036A48;
loc_83036A44:
	// lwz r23,100(r31)
	r23.u64 = PPC_LOAD_U32(r31.u32 + 100);
loc_83036A48:
	// lwz r11,8(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x8302cd78
	sub_8302CD78(ctx, base);
	// addi r28,r30,400
	r28.s64 = r30.s64 + 400;
	// lbz r27,97(r31)
	r27.u64 = PPC_LOAD_U8(r31.u32 + 97);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,40(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// lwz r10,32(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,-4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// stw r29,44(r11)
	PPC_STORE_U32(r11.u32 + 44, r29.u32);
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83036abc
	if (cr0.eq) goto loc_83036ABC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// lwz r6,8(r23)
	ctx.r6.u64 = PPC_LOAD_U32(r23.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,84(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// mr r8,r15
	ctx.r8.u64 = r15.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r6,8(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83036ABC:
	// lbz r11,98(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 98);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83036b10
	if (cr0.eq) goto loc_83036B10;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8301e348
	sub_8301E348(ctx, base);
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83036b00
	if (cr0.eq) goto loc_83036B00;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r10,8(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 8);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83036B00:
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83036b10
	if (cr0.eq) goto loc_83036B10;
	// lwz r11,332(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 332);
	// stb r14,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r14.u8);
loc_83036B10:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83036B14:
	// addi r1,r31,304
	ctx.r1.s64 = r31.s64 + 304;
	// b 0x831b0b40
	return;
}

__attribute__((alias("__imp__sub_83036B1C"))) PPC_WEAK_FUNC(sub_83036B1C);
PPC_FUNC_IMPL(__imp__sub_83036B1C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-304
	r31.s64 = r12.s64 + -304;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,324(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 324);
	// lwz r4,180(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 180);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83036B4C"))) PPC_WEAK_FUNC(sub_83036B4C);
PPC_FUNC_IMPL(__imp__sub_83036B4C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-304
	r31.s64 = r12.s64 + -304;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,324(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 324);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83036B88"))) PPC_WEAK_FUNC(sub_83036B88);
PPC_FUNC_IMPL(__imp__sub_83036B88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// bl 0x82ff3818
	sub_82FF3818(ctx, base);
	// lis r11,-32235
	r11.s64 = -2112552960;
	// addi r10,r11,-31496
	ctx.r10.s64 = r11.s64 + -31496;
	// li r11,0
	r11.s64 = 0;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r11,472(r30)
	PPC_STORE_U32(r30.u32 + 472, r11.u32);
	// stw r11,476(r30)
	PPC_STORE_U32(r30.u32 + 476, r11.u32);
	// stw r11,480(r30)
	PPC_STORE_U32(r30.u32 + 480, r11.u32);
	// stw r11,484(r30)
	PPC_STORE_U32(r30.u32 + 484, r11.u32);
	// stw r11,488(r30)
	PPC_STORE_U32(r30.u32 + 488, r11.u32);
	// stw r11,492(r30)
	PPC_STORE_U32(r30.u32 + 492, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83035388
	sub_83035388(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
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

__attribute__((alias("__imp__sub_83036C10"))) PPC_WEAK_FUNC(sub_83036C10);
PPC_FUNC_IMPL(__imp__sub_83036C10) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_83036C30"))) PPC_WEAK_FUNC(sub_83036C30);
PPC_FUNC_IMPL(__imp__sub_83036C30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// bl 0x83035f80
	sub_83035F80(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_83036C54"))) PPC_WEAK_FUNC(sub_83036C54);
PPC_FUNC_IMPL(__imp__sub_83036C54) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// bl 0x82ff3d38
	sub_82FF3D38(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83036C80"))) PPC_WEAK_FUNC(sub_83036C80);
PPC_FUNC_IMPL(__imp__sub_83036C80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r3,r11,-27736
	ctx.r3.s64 = r11.s64 + -27736;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83036C98"))) PPC_WEAK_FUNC(sub_83036C98);
PPC_FUNC_IMPL(__imp__sub_83036C98) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	r11.s64 = -2112552960;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-31496
	r11.s64 = r11.s64 + -31496;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x83035f80
	sub_83035F80(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff3d38
	sub_82FF3D38(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
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

__attribute__((alias("__imp__sub_83036CE8"))) PPC_WEAK_FUNC(sub_83036CE8);
PPC_FUNC_IMPL(__imp__sub_83036CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// bl 0x82ff3d38
	sub_82FF3D38(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83036D18"))) PPC_WEAK_FUNC(sub_83036D18);
PPC_FUNC_IMPL(__imp__sub_83036D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x831b0b28
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// bl 0x82ff01b8
	sub_82FF01B8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83036d70
	if (!cr0.eq) goto loc_83036D70;
	// lis r11,-32235
	r11.s64 = -2112552960;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r6,78
	ctx.r6.s64 = 78;
	// addi r4,r11,-32588
	ctx.r4.s64 = r11.s64 + -32588;
	// li r5,241
	ctx.r5.s64 = 241;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82fd93a0
	sub_82FD93A0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,-8860
	ctx.r4.s64 = r11.s64 + -8860;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_83036D70:
	// li r29,1
	r29.s64 = 1;
	// stb r29,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r29.u8);
loc_83036D78:
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff1a10
	sub_82FF1A10(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83036dc0
	if (!cr6.eq) goto loc_83036DC0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r30,288
	ctx.r4.s64 = r30.s64 + 288;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83036fb0
	goto loc_83036FB0;
loc_83036DC0:
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x83036e4c
	if (!cr6.eq) goto loc_83036E4C;
	// lwz r11,440(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 440);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83036e44
	if (!cr0.eq) goto loc_83036E44;
	// addi r3,r30,400
	ctx.r3.s64 = r30.s64 + 400;
	// bl 0x8301e348
	sub_8301E348(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,274
	ctx.r4.s64 = 274;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83036E44:
	// li r29,0
	r29.s64 = 0;
	// b 0x83036fc4
	goto loc_83036FC4;
loc_83036E4C:
	// li r11,1
	r11.s64 = 1;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stb r11,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r11.u8);
	// beq cr6,0x83036ed8
	if (cr6.eq) goto loc_83036ED8;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x83036ecc
	if (cr6.eq) goto loc_83036ECC;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x83036ebc
	if (cr6.eq) goto loc_83036EBC;
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// beq cr6,0x83036eb0
	if (cr6.eq) goto loc_83036EB0;
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// beq cr6,0x83036e8c
	if (cr6.eq) goto loc_83036E8C;
	// li r4,60
	ctx.r4.s64 = 60;
	// addi r3,r30,124
	ctx.r3.s64 = r30.s64 + 124;
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
	// b 0x83036f1c
	goto loc_83036F1C;
loc_83036E8C:
	// lbz r11,10(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 10);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83036ea8
	if (cr0.eq) goto loc_83036EA8;
	// bl 0x83036038
	sub_83036038(ctx, base);
	// b 0x83036f1c
	goto loc_83036F1C;
loc_83036EA8:
	// bl 0x83035630
	sub_83035630(ctx, base);
	// b 0x83036f1c
	goto loc_83036F1C;
loc_83036EB0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0ca8
	sub_82FF0CA8(ctx, base);
	// b 0x83036f1c
	goto loc_83036F1C;
loc_83036EBC:
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830345e0
	sub_830345E0(ctx, base);
	// b 0x83036f1c
	goto loc_83036F1C;
loc_83036ECC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff1d50
	sub_82FF1D50(ctx, base);
	// b 0x83036f1c
	goto loc_83036F1C;
loc_83036ED8:
	// lwz r11,440(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 440);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83036f08
	if (cr0.eq) goto loc_83036F08;
	// li r4,280
	ctx.r4.s64 = 280;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83036F08:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83036F1C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// ori r10,r10,32808
	ctx.r10.u64 = ctx.r10.u64 | 32808;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x83036f6c
	if (cr6.eq) goto loc_83036F6C;
	// li r4,231
	ctx.r4.s64 = 231;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83036F6C:
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83036fc4
	if (!cr0.eq) goto loc_83036FC4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff2b28
	sub_82FF2B28(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83036fc4
	if (cr0.eq) goto loc_83036FC4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83036FB0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83036FC4:
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83036fd4
	if (!cr0.eq) goto loc_83036FD4;
	// addi r3,r30,124
	ctx.r3.s64 = r30.s64 + 124;
	// bl 0x82ff5aa8
	sub_82FF5AA8(ctx, base);
loc_83036FD4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x83036ff4
	goto loc_83036FF4;
	// lwz r30,180(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// lbz r29,80(r31)
	r29.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// b 0x83036d78
	goto loc_83036D78;
	// b 0x83036ff0
	goto loc_83036FF0;
	// b 0x83036ff0
	goto loc_83036FF0;
loc_83036FF0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83036FF4:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83037004"))) PPC_WEAK_FUNC(sub_83037004);
PPC_FUNC_IMPL(__imp__sub_83037004) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83037050
	if (cr0.eq) goto loc_83037050;
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83037050:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31997
	ctx.r3.s64 = -2096955392;
	// addi r3,r3,28636
	ctx.r3.s64 = ctx.r3.s64 + 28636;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83037070"))) PPC_WEAK_FUNC(sub_83037070);
PPC_FUNC_IMPL(__imp__sub_83037070) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_83037090"))) PPC_WEAK_FUNC(sub_83037090);
PPC_FUNC_IMPL(__imp__sub_83037090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// addi r3,r11,124
	ctx.r3.s64 = r11.s64 + 124;
	// bl 0x82ff5aa8
	sub_82FF5AA8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_830370C0"))) PPC_WEAK_FUNC(sub_830370C0);
PPC_FUNC_IMPL(__imp__sub_830370C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// addi r3,r11,124
	ctx.r3.s64 = r11.s64 + 124;
	// bl 0x82ff5aa8
	sub_82FF5AA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31997
	ctx.r3.s64 = -2096955392;
	// addi r3,r3,28648
	ctx.r3.s64 = ctx.r3.s64 + 28648;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830370FC"))) PPC_WEAK_FUNC(sub_830370FC);
PPC_FUNC_IMPL(__imp__sub_830370FC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// addi r3,r11,124
	ctx.r3.s64 = r11.s64 + 124;
	// bl 0x82ff5aa8
	sub_82FF5AA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31997
	ctx.r3.s64 = -2096955392;
	// addi r3,r3,28652
	ctx.r3.s64 = ctx.r3.s64 + 28652;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83037138"))) PPC_WEAK_FUNC(sub_83037138);
PPC_FUNC_IMPL(__imp__sub_83037138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,180(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// li r11,1
	r11.s64 = 1;
	// stb r11,13(r28)
	PPC_STORE_U8(r28.u32 + 13, r11.u8);
	// lwz r30,92(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fefb68
	sub_82FEFB68(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83037198
	if (!cr0.eq) goto loc_83037198;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r29,16(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x830371f8
	goto loc_830371F8;
loc_83037198:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fefb68
	sub_82FEFB68(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// blt cr6,0x830371d8
	if (cr6.lt) goto loc_830371D8;
	// lwz r29,16(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r4,292
	ctx.r4.s64 = 292;
	// b 0x830371f8
	goto loc_830371F8;
loc_830371D8:
	// lwz r30,16(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,157
	ctx.r4.s64 = 157;
loc_830371F8:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r3,r28,124
	ctx.r3.s64 = r28.s64 + 124;
	// bl 0x82ff5aa8
	sub_82FF5AA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31997
	ctx.r3.s64 = -2096955392;
	// addi r3,r3,28656
	ctx.r3.s64 = ctx.r3.s64 + 28656;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83037238"))) PPC_WEAK_FUNC(sub_83037238);
PPC_FUNC_IMPL(__imp__sub_83037238) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_83037258"))) PPC_WEAK_FUNC(sub_83037258);
PPC_FUNC_IMPL(__imp__sub_83037258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// addi r3,r11,124
	ctx.r3.s64 = r11.s64 + 124;
	// bl 0x82ff5aa8
	sub_82FF5AA8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_83037288"))) PPC_WEAK_FUNC(sub_83037288);
PPC_FUNC_IMPL(__imp__sub_83037288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x831b0b2c
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,1
	r11.s64 = 1;
	// li r29,0
	r29.s64 = 0;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stb r11,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r11.u8);
	// stb r29,81(r31)
	PPC_STORE_U8(r31.u32 + 81, r29.u8);
loc_830372B8:
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8303746c
	if (cr0.eq) goto loc_8303746C;
loc_830372C4:
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83037468
	if (cr0.eq) goto loc_83037468;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff1a10
	sub_82FF1A10(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83037308
	if (!cr6.eq) goto loc_83037308;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r30,288
	ctx.r4.s64 = r30.s64 + 288;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x830372c4
	goto loc_830372C4;
loc_83037308:
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x83037364
	if (!cr6.eq) goto loc_83037364;
	// lwz r11,440(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 440);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8303735c
	if (!cr0.eq) goto loc_8303735C;
	// addi r3,r30,400
	ctx.r3.s64 = r30.s64 + 400;
	// bl 0x8301e348
	sub_8301E348(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,274
	ctx.r4.s64 = 274;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8303735C:
	// stb r29,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r29.u8);
	// b 0x830372c4
	goto loc_830372C4;
loc_83037364:
	// li r11,1
	r11.s64 = 1;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stb r11,81(r31)
	PPC_STORE_U8(r31.u32 + 81, r11.u8);
	// beq cr6,0x830373f0
	if (cr6.eq) goto loc_830373F0;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x830373e4
	if (cr6.eq) goto loc_830373E4;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x830373d4
	if (cr6.eq) goto loc_830373D4;
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// beq cr6,0x830373c8
	if (cr6.eq) goto loc_830373C8;
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// beq cr6,0x830373a4
	if (cr6.eq) goto loc_830373A4;
	// li r4,60
	ctx.r4.s64 = 60;
	// addi r3,r30,124
	ctx.r3.s64 = r30.s64 + 124;
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
	// b 0x83037424
	goto loc_83037424;
loc_830373A4:
	// lbz r11,10(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 10);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830373c0
	if (cr0.eq) goto loc_830373C0;
	// bl 0x83036038
	sub_83036038(ctx, base);
	// b 0x83037424
	goto loc_83037424;
loc_830373C0:
	// bl 0x83035630
	sub_83035630(ctx, base);
	// b 0x83037424
	goto loc_83037424;
loc_830373C8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0ca8
	sub_82FF0CA8(ctx, base);
	// b 0x83037424
	goto loc_83037424;
loc_830373D4:
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830345e0
	sub_830345E0(ctx, base);
	// b 0x83037424
	goto loc_83037424;
loc_830373E4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff1d50
	sub_82FF1D50(ctx, base);
	// b 0x83037424
	goto loc_83037424;
loc_830373F0:
	// lwz r11,440(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 440);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83037410
	if (cr0.eq) goto loc_83037410;
	// li r4,280
	ctx.r4.s64 = 280;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83037410:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83037424:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// ori r10,r10,32808
	ctx.r10.u64 = ctx.r10.u64 | 32808;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x83037454
	if (cr6.eq) goto loc_83037454;
	// li r4,231
	ctx.r4.s64 = 231;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83037454:
	// stb r29,81(r31)
	PPC_STORE_U8(r31.u32 + 81, r29.u8);
	// b 0x830372c4
	goto loc_830372C4;
	// lwz r30,148(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// li r29,0
	r29.s64 = 0;
	// b 0x830372b8
	goto loc_830372B8;
loc_83037468:
	// b 0x830372b8
	goto loc_830372B8;
loc_8303746C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83037480"))) PPC_WEAK_FUNC(sub_83037480);
PPC_FUNC_IMPL(__imp__sub_83037480) {
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
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,81(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 81);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830374b0
	if (cr0.eq) goto loc_830374B0;
	// lwz r30,148(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// li r4,231
	ctx.r4.s64 = 231;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// b 0x830374b4
	goto loc_830374B4;
loc_830374B0:
	// lwz r30,148(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 148);
loc_830374B4:
	// lwz r11,92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830374dc
	if (cr6.eq) goto loc_830374DC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830374DC:
	// li r11,0
	r11.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31997
	ctx.r3.s64 = -2096955392;
	// addi r3,r3,29788
	ctx.r3.s64 = ctx.r3.s64 + 29788;
	// stb r11,81(r31)
	PPC_STORE_U8(r31.u32 + 81, r11.u8);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83037500"))) PPC_WEAK_FUNC(sub_83037500);
PPC_FUNC_IMPL(__imp__sub_83037500) {
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
	// bl 0x83036c98
	sub_83036C98(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83037530
	if (cr0.eq) goto loc_83037530;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_83037530:
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

__attribute__((alias("__imp__sub_83037558"))) PPC_WEAK_FUNC(sub_83037558);
PPC_FUNC_IMPL(__imp__sub_83037558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x831b0b28
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,80(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r11.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830375d8
	if (cr0.eq) goto loc_830375D8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_830375D8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff2d38
	sub_82FF2D38(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r29,r30,124
	r29.s64 = r30.s64 + 124;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff5d08
	sub_82FF5D08(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq 0x8303762c
	if (cr0.eq) goto loc_8303762C;
	// li r4,279
	ctx.r4.s64 = 279;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// b 0x83037678
	goto loc_83037678;
loc_8303762C:
	// bl 0x83037288
	sub_83037288(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8303768c
	if (cr0.eq) goto loc_8303768C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff5d08
	sub_82FF5D08(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8303768c
	if (!cr0.eq) goto loc_8303768C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff2b28
	sub_82FF2B28(ctx, base);
loc_83037678:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8303768C:
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830376bc
	if (cr0.eq) goto loc_830376BC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_830376BC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff5aa8
	sub_82FF5AA8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x830376e4
	goto loc_830376E4;
	// b 0x830376e4
	goto loc_830376E4;
	// b 0x830376e4
	goto loc_830376E4;
loc_830376E4:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830376F4"))) PPC_WEAK_FUNC(sub_830376F4);
PPC_FUNC_IMPL(__imp__sub_830376F4) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_83037714"))) PPC_WEAK_FUNC(sub_83037714);
PPC_FUNC_IMPL(__imp__sub_83037714) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addi r3,r11,124
	ctx.r3.s64 = r11.s64 + 124;
	// bl 0x82ff5aa8
	sub_82FF5AA8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_83037744"))) PPC_WEAK_FUNC(sub_83037744);
PPC_FUNC_IMPL(__imp__sub_83037744) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addi r3,r11,124
	ctx.r3.s64 = r11.s64 + 124;
	// bl 0x82ff5aa8
	sub_82FF5AA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31997
	ctx.r3.s64 = -2096955392;
	// addi r3,r3,30428
	ctx.r3.s64 = ctx.r3.s64 + 30428;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83037780"))) PPC_WEAK_FUNC(sub_83037780);
PPC_FUNC_IMPL(__imp__sub_83037780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addi r3,r11,124
	ctx.r3.s64 = r11.s64 + 124;
	// bl 0x82ff5aa8
	sub_82FF5AA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31997
	ctx.r3.s64 = -2096955392;
	// addi r3,r3,30432
	ctx.r3.s64 = ctx.r3.s64 + 30432;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830377BC"))) PPC_WEAK_FUNC(sub_830377BC);
PPC_FUNC_IMPL(__imp__sub_830377BC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,148(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// li r11,1
	r11.s64 = 1;
	// stb r11,13(r28)
	PPC_STORE_U8(r28.u32 + 13, r11.u8);
	// lwz r30,80(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fefb68
	sub_82FEFB68(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8303781c
	if (!cr0.eq) goto loc_8303781C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r29,16(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x8303787c
	goto loc_8303787C;
loc_8303781C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fefb68
	sub_82FEFB68(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// blt cr6,0x8303785c
	if (cr6.lt) goto loc_8303785C;
	// lwz r29,16(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r4,292
	ctx.r4.s64 = 292;
	// b 0x8303787c
	goto loc_8303787C;
loc_8303785C:
	// lwz r30,16(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,157
	ctx.r4.s64 = 157;
loc_8303787C:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r3,r28,124
	ctx.r3.s64 = r28.s64 + 124;
	// bl 0x82ff5aa8
	sub_82FF5AA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31997
	ctx.r3.s64 = -2096955392;
	// addi r3,r3,30436
	ctx.r3.s64 = ctx.r3.s64 + 30436;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830378BC"))) PPC_WEAK_FUNC(sub_830378BC);
PPC_FUNC_IMPL(__imp__sub_830378BC) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_830378DC"))) PPC_WEAK_FUNC(sub_830378DC);
PPC_FUNC_IMPL(__imp__sub_830378DC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addi r3,r11,124
	ctx.r3.s64 = r11.s64 + 124;
	// bl 0x82ff5aa8
	sub_82FF5AA8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_83037908"))) PPC_WEAK_FUNC(sub_83037908);
PPC_FUNC_IMPL(__imp__sub_83037908) {
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
	// lis r11,-32235
	r11.s64 = -2112552960;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r11,r11,-30224
	r11.s64 = r11.s64 + -30224;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r4,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r4.u32);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r6,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r6.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// beq cr6,0x83037954
	if (cr6.eq) goto loc_83037954;
	// addi r5,r4,-1
	ctx.r5.s64 = ctx.r4.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x83015bd8
	sub_83015BD8(ctx, base);
loc_83037954:
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

__attribute__((alias("__imp__sub_83037970"))) PPC_WEAK_FUNC(sub_83037970);
PPC_FUNC_IMPL(__imp__sub_83037970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32235
	r11.s64 = -2112552960;
	// addi r11,r11,-30224
	r11.s64 = r11.s64 + -30224;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83037980"))) PPC_WEAK_FUNC(sub_83037980);
PPC_FUNC_IMPL(__imp__sub_83037980) {
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
	// lis r11,-32235
	r11.s64 = -2112552960;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-30224
	r11.s64 = r11.s64 + -30224;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x830379ac
	if (cr0.eq) goto loc_830379AC;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_830379AC:
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

__attribute__((alias("__imp__sub_830379C8"))) PPC_WEAK_FUNC(sub_830379C8);
PPC_FUNC_IMPL(__imp__sub_830379C8) {
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
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_83037A28"))) PPC_WEAK_FUNC(sub_83037A28);
PPC_FUNC_IMPL(__imp__sub_83037A28) {
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
	// lis r11,-32235
	r11.s64 = -2112552960;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-30176
	r11.s64 = r11.s64 + -30176;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x83037a54
	if (cr0.eq) goto loc_83037A54;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_83037A54:
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

__attribute__((alias("__imp__sub_83037A70"))) PPC_WEAK_FUNC(sub_83037A70);
PPC_FUNC_IMPL(__imp__sub_83037A70) {
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
	// bl 0x82fdf8b8
	sub_82FDF8B8(ctx, base);
	// lis r11,-32235
	r11.s64 = -2112552960;
	// li r30,1
	r30.s64 = 1;
	// addi r10,r11,-30176
	ctx.r10.s64 = r11.s64 + -30176;
	// lis r11,-32235
	r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r9,r11,-29808
	ctx.r9.s64 = r11.s64 + -29808;
	// lis r11,-32235
	r11.s64 = -2112552960;
	// stw r10,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r10.u32);
	// addi r8,r11,-29824
	ctx.r8.s64 = r11.s64 + -29824;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lis r11,-32235
	r11.s64 = -2112552960;
	// stb r30,128(r31)
	PPC_STORE_U8(r31.u32 + 128, r30.u8);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r7,r11,-29852
	ctx.r7.s64 = r11.s64 + -29852;
	// lis r11,-32235
	r11.s64 = -2112552960;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// addi r6,r11,-29920
	ctx.r6.s64 = r11.s64 + -29920;
	// lis r11,-32235
	r11.s64 = -2112552960;
	// stw r7,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// addi r5,r11,-29940
	ctx.r5.s64 = r11.s64 + -29940;
	// lis r11,-32235
	r11.s64 = -2112552960;
	// stw r6,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r6.u32);
	// addi r4,r11,-30056
	ctx.r4.s64 = r11.s64 + -30056;
	// li r11,0
	r11.s64 = 0;
	// stw r5,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r5.u32);
	// stw r4,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r4.u32);
	// stb r11,108(r31)
	PPC_STORE_U8(r31.u32 + 108, r11.u8);
	// stb r11,109(r31)
	PPC_STORE_U8(r31.u32 + 109, r11.u8);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// stb r11,129(r31)
	PPC_STORE_U8(r31.u32 + 129, r11.u8);
	// stb r11,24(r10)
	PPC_STORE_U8(ctx.r10.u32 + 24, r11.u8);
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

__attribute__((alias("__imp__sub_83037B30"))) PPC_WEAK_FUNC(sub_83037B30);
PPC_FUNC_IMPL(__imp__sub_83037B30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32235
	r11.s64 = -2112552960;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lis r6,-32235
	ctx.r6.s64 = -2112552960;
	// lis r5,-32235
	ctx.r5.s64 = -2112552960;
	// addi r11,r11,-29808
	r11.s64 = r11.s64 + -29808;
	// addi r10,r10,-29824
	ctx.r10.s64 = ctx.r10.s64 + -29824;
	// addi r9,r9,-29852
	ctx.r9.s64 = ctx.r9.s64 + -29852;
	// addi r8,r8,-29920
	ctx.r8.s64 = ctx.r8.s64 + -29920;
	// addi r7,r7,-29940
	ctx.r7.s64 = ctx.r7.s64 + -29940;
	// addi r6,r6,-30056
	ctx.r6.s64 = ctx.r6.s64 + -30056;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// addi r5,r5,-30176
	ctx.r5.s64 = ctx.r5.s64 + -30176;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// stw r6,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r6.u32);
	// stw r5,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r5.u32);
	// b 0x82fdfb58
	sub_82FDFB58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83037B88"))) PPC_WEAK_FUNC(sub_83037B88);
PPC_FUNC_IMPL(__imp__sub_83037B88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// beq cr6,0x83037bb0
	if (cr6.eq) goto loc_83037BB0;
	// addic. r11,r3,-104
	xer.ca = ctx.r3.u32 > 103;
	r11.s64 = ctx.r3.s64 + -104;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r3,-100
	r11.s64 = ctx.r3.s64 + -100;
	// bne 0x83037ba4
	if (!cr0.eq) goto loc_83037BA4;
	// li r11,0
	r11.s64 = 0;
loc_83037BA4:
	// lwz r10,-76(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -76);
	// stw r11,104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 104, r11.u32);
	// blr 
	return;
loc_83037BB0:
	// lwz r11,-76(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -76);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,104(r11)
	PPC_STORE_U32(r11.u32 + 104, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83037BC0"))) PPC_WEAK_FUNC(sub_83037BC0);
PPC_FUNC_IMPL(__imp__sub_83037BC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// beq cr6,0x83037bf4
	if (cr6.eq) goto loc_83037BF4;
	// addic. r11,r3,-104
	xer.ca = ctx.r3.u32 > 103;
	r11.s64 = ctx.r3.s64 + -104;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r3,-96
	ctx.r10.s64 = ctx.r3.s64 + -96;
	// bne 0x83037be0
	if (!cr0.eq) goto loc_83037BE0;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_83037BE0:
	// lwz r11,-76(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -76);
	// stw r10,100(r11)
	PPC_STORE_U32(r11.u32 + 100, ctx.r10.u32);
	// stw r10,136(r11)
	PPC_STORE_U32(r11.u32 + 136, ctx.r10.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// blr 
	return;
loc_83037BF4:
	// lwz r11,-76(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -76);
	// stw r9,100(r11)
	PPC_STORE_U32(r11.u32 + 100, ctx.r9.u32);
	// stw r9,136(r11)
	PPC_STORE_U32(r11.u32 + 136, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83037C08"))) PPC_WEAK_FUNC(sub_83037C08);
PPC_FUNC_IMPL(__imp__sub_83037C08) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r6,-28(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83002050
	sub_83002050(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-8296
	ctx.r4.s64 = r11.s64 + -8296;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_83037C38"))) PPC_WEAK_FUNC(sub_83037C38);
PPC_FUNC_IMPL(__imp__sub_83037C38) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,-25500
	ctx.r4.s64 = r11.s64 + -25500;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83037c74
	if (!cr0.eq) goto loc_83037C74;
	// stb r29,-84(r30)
	PPC_STORE_U8(r30.u32 + -84, r29.u8);
loc_83037C6C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
loc_83037C74:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-26140
	ctx.r4.s64 = r11.s64 + -26140;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83037c94
	if (!cr0.eq) goto loc_83037C94;
	// stb r29,-80(r30)
	PPC_STORE_U8(r30.u32 + -80, r29.u8);
	// b 0x83037c6c
	goto loc_83037C6C;
loc_83037C94:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-23572
	ctx.r4.s64 = r11.s64 + -23572;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83037cb8
	if (!cr0.eq) goto loc_83037CB8;
	// lwz r11,-76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -76);
	// stb r29,24(r11)
	PPC_STORE_U8(r11.u32 + 24, r29.u8);
	// b 0x83037c6c
	goto loc_83037C6C;
loc_83037CB8:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-23508
	ctx.r4.s64 = r11.s64 + -23508;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83037ce0
	if (!cr0.eq) goto loc_83037CE0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,-104
	ctx.r3.s64 = r30.s64 + -104;
	// bl 0x82fdc7e8
	sub_82FDC7E8(ctx, base);
	// b 0x83037c6c
	goto loc_83037C6C;
loc_83037CE0:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-24532
	ctx.r4.s64 = r11.s64 + -24532;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83037d00
	if (!cr0.eq) goto loc_83037D00;
	// stb r29,-83(r30)
	PPC_STORE_U8(r30.u32 + -83, r29.u8);
	// b 0x83037c6c
	goto loc_83037C6C;
loc_83037D00:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-23396
	ctx.r4.s64 = r11.s64 + -23396;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83037d4c
	if (!cr0.eq) goto loc_83037D4C;
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r29,5(r30)
	PPC_STORE_U8(r30.u32 + 5, r29.u8);
	// beq 0x83037d44
	if (cr0.eq) goto loc_83037D44;
	// addi r31,r30,-104
	r31.s64 = r30.s64 + -104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fdc708
	sub_82FDC708(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83037c6c
	if (!cr0.eq) goto loc_83037C6C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x83037d7c
	goto loc_83037D7C;
loc_83037D44:
	// addi r3,r30,-104
	ctx.r3.s64 = r30.s64 + -104;
	// b 0x83037d78
	goto loc_83037D78;
loc_83037D4C:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-23436
	ctx.r4.s64 = r11.s64 + -23436;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83037d84
	if (!cr0.eq) goto loc_83037D84;
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r29,4(r30)
	PPC_STORE_U8(r30.u32 + 4, r29.u8);
	// addi r3,r30,-104
	ctx.r3.s64 = r30.s64 + -104;
	// li r4,2
	ctx.r4.s64 = 2;
	// bne 0x83037d7c
	if (!cr0.eq) goto loc_83037D7C;
loc_83037D78:
	// li r4,0
	ctx.r4.s64 = 0;
loc_83037D7C:
	// bl 0x82fdc818
	sub_82FDC818(ctx, base);
	// b 0x83037c6c
	goto loc_83037C6C;
loc_83037D84:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-23636
	ctx.r4.s64 = r11.s64 + -23636;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83037da4
	if (!cr0.eq) goto loc_83037DA4;
	// stb r29,24(r30)
	PPC_STORE_U8(r30.u32 + 24, r29.u8);
	// b 0x83037c6c
	goto loc_83037C6C;
loc_83037DA4:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-24916
	ctx.r4.s64 = r11.s64 + -24916;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830380b4
	if (cr0.eq) goto loc_830380B4;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-23524
	ctx.r4.s64 = r11.s64 + -23524;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830380b4
	if (cr0.eq) goto loc_830380B4;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-23700
	ctx.r4.s64 = r11.s64 + -23700;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830380b4
	if (cr0.eq) goto loc_830380B4;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-23484
	ctx.r4.s64 = r11.s64 + -23484;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83038088
	if (cr0.eq) goto loc_83038088;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-23668
	ctx.r4.s64 = r11.s64 + -23668;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83038088
	if (cr0.eq) goto loc_83038088;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-26120
	ctx.r4.s64 = r11.s64 + -26120;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83037e44
	if (!cr0.eq) goto loc_83037E44;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,-104
	ctx.r3.s64 = r30.s64 + -104;
	// bl 0x82fdc858
	sub_82FDC858(ctx, base);
	// b 0x83037c6c
	goto loc_83037C6C;
loc_83037E44:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-26016
	ctx.r4.s64 = r11.s64 + -26016;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83037e6c
	if (!cr0.eq) goto loc_83037E6C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,-104
	ctx.r3.s64 = r30.s64 + -104;
	// bl 0x82fdc868
	sub_82FDC868(ctx, base);
	// b 0x83037c6c
	goto loc_83037C6C;
loc_83037E6C:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-24088
	ctx.r4.s64 = r11.s64 + -24088;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83037e9c
	if (!cr0.eq) goto loc_83037E9C;
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x83037e94
	if (!cr0.eq) goto loc_83037E94;
	// li r11,0
	r11.s64 = 0;
loc_83037E94:
	// stb r11,25(r30)
	PPC_STORE_U8(r30.u32 + 25, r11.u8);
	// b 0x83037c6c
	goto loc_83037C6C;
loc_83037E9C:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-25744
	ctx.r4.s64 = r11.s64 + -25744;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83037ec4
	if (!cr0.eq) goto loc_83037EC4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,-104
	ctx.r3.s64 = r30.s64 + -104;
	// bl 0x82fdc8e8
	sub_82FDC8E8(ctx, base);
	// b 0x83037c6c
	goto loc_83037C6C;
loc_83037EC4:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-25616
	ctx.r4.s64 = r11.s64 + -25616;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83037ef4
	if (!cr0.eq) goto loc_83037EF4;
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// addi r3,r30,-104
	ctx.r3.s64 = r30.s64 + -104;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// bl 0x82fdc7f8
	sub_82FDC7F8(ctx, base);
	// b 0x83037c6c
	goto loc_83037C6C;
loc_83037EF4:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-25480
	ctx.r4.s64 = r11.s64 + -25480;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83037f1c
	if (!cr0.eq) goto loc_83037F1C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,-104
	ctx.r3.s64 = r30.s64 + -104;
	// bl 0x82fdc808
	sub_82FDC808(ctx, base);
	// b 0x83037c6c
	goto loc_83037C6C;
loc_83037F1C:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-23968
	ctx.r4.s64 = r11.s64 + -23968;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83037f48
	if (!cr0.eq) goto loc_83037F48;
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,-76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -76);
	// stb r29,21(r11)
	PPC_STORE_U8(r11.u32 + 21, r29.u8);
	// beq 0x83037c6c
	if (cr0.eq) goto loc_83037C6C;
	// b 0x83037f78
	goto loc_83037F78;
loc_83037F48:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-23832
	ctx.r4.s64 = r11.s64 + -23832;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83037f84
	if (!cr0.eq) goto loc_83037F84;
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83037f78
	if (!cr0.eq) goto loc_83037F78;
	// lwz r11,-76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -76);
	// lbz r11,21(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83037c6c
	if (!cr0.eq) goto loc_83037C6C;
loc_83037F78:
	// lwz r11,-76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -76);
	// stb r29,22(r11)
	PPC_STORE_U8(r11.u32 + 22, r29.u8);
	// b 0x83037c6c
	goto loc_83037C6C;
loc_83037F84:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-25360
	ctx.r4.s64 = r11.s64 + -25360;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83037fa8
	if (!cr0.eq) goto loc_83037FA8;
	// lwz r11,-76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -76);
	// stb r29,9(r11)
	PPC_STORE_U8(r11.u32 + 9, r29.u8);
	// b 0x83037c6c
	goto loc_83037C6C;
loc_83037FA8:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-25256
	ctx.r4.s64 = r11.s64 + -25256;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83037fd0
	if (!cr0.eq) goto loc_83037FD0;
	// lwz r11,-76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -76);
	// stb r29,8(r11)
	PPC_STORE_U8(r11.u32 + 8, r29.u8);
	// stb r29,160(r11)
	PPC_STORE_U8(r11.u32 + 160, r29.u8);
	// b 0x83037c6c
	goto loc_83037C6C;
loc_83037FD0:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-25144
	ctx.r4.s64 = r11.s64 + -25144;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83037ff8
	if (!cr0.eq) goto loc_83037FF8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,-104
	ctx.r3.s64 = r30.s64 + -104;
	// bl 0x82fdc980
	sub_82FDC980(ctx, base);
	// b 0x83037c6c
	goto loc_83037C6C;
loc_83037FF8:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-25040
	ctx.r4.s64 = r11.s64 + -25040;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8303801c
	if (!cr0.eq) goto loc_8303801C;
	// lwz r11,-76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -76);
	// stb r29,25(r11)
	PPC_STORE_U8(r11.u32 + 25, r29.u8);
	// b 0x83037c6c
	goto loc_83037C6C;
loc_8303801C:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-24864
	ctx.r4.s64 = r11.s64 + -24864;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83038040
	if (!cr0.eq) goto loc_83038040;
	// lwz r11,-76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -76);
	// stb r29,26(r11)
	PPC_STORE_U8(r11.u32 + 26, r29.u8);
	// b 0x83037c6c
	goto loc_83037C6C;
loc_83038040:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-25888
	ctx.r4.s64 = r11.s64 + -25888;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83038064
	if (!cr0.eq) goto loc_83038064;
	// lwz r11,-76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -76);
	// stb r29,20(r11)
	PPC_STORE_U8(r11.u32 + 20, r29.u8);
	// b 0x83037c6c
	goto loc_83037C6C;
loc_83038064:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,-28(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + -28);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83002050
	sub_83002050(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-8296
	ctx.r4.s64 = r11.s64 + -8296;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_83038088:
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83037c6c
	if (!cr0.eq) goto loc_83037C6C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,-28(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + -28);
	// li r4,9
	ctx.r4.s64 = 9;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83002050
	sub_83002050(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-8296
	ctx.r4.s64 = r11.s64 + -8296;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830380B4:
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83037c6c
	if (cr0.eq) goto loc_83037C6C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,-28(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + -28);
	// li r4,9
	ctx.r4.s64 = 9;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83002050
	sub_83002050(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-8296
	ctx.r4.s64 = r11.s64 + -8296;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_830380E0"))) PPC_WEAK_FUNC(sub_830380E0);
PPC_FUNC_IMPL(__imp__sub_830380E0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,-25500
	ctx.r4.s64 = r11.s64 + -25500;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8303811c
	if (!cr0.eq) goto loc_8303811C;
	// lbz r3,-84(r30)
	ctx.r3.u64 = PPC_LOAD_U8(r30.u32 + -84);
	// b 0x830384ac
	goto loc_830384AC;
loc_8303811C:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-26140
	ctx.r4.s64 = r11.s64 + -26140;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8303813c
	if (!cr0.eq) goto loc_8303813C;
	// lbz r3,-80(r30)
	ctx.r3.u64 = PPC_LOAD_U8(r30.u32 + -80);
	// b 0x830384ac
	goto loc_830384AC;
loc_8303813C:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-23572
	ctx.r4.s64 = r11.s64 + -23572;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83038160
	if (!cr0.eq) goto loc_83038160;
	// lwz r11,-76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -76);
	// lbz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 24);
	// b 0x830384ac
	goto loc_830384AC;
loc_83038160:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-23508
	ctx.r4.s64 = r11.s64 + -23508;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83038184
	if (!cr0.eq) goto loc_83038184;
	// addi r3,r30,-104
	ctx.r3.s64 = r30.s64 + -104;
	// bl 0x82fdc6d8
	sub_82FDC6D8(ctx, base);
	// b 0x830384ac
	goto loc_830384AC;
loc_83038184:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-24532
	ctx.r4.s64 = r11.s64 + -24532;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x830381a4
	if (!cr0.eq) goto loc_830381A4;
	// lbz r3,-83(r30)
	ctx.r3.u64 = PPC_LOAD_U8(r30.u32 + -83);
	// b 0x830384ac
	goto loc_830384AC;
loc_830381A4:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-23396
	ctx.r4.s64 = r11.s64 + -23396;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x830381c4
	if (!cr0.eq) goto loc_830381C4;
	// lbz r3,5(r30)
	ctx.r3.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// b 0x830384ac
	goto loc_830384AC;
loc_830381C4:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-23436
	ctx.r4.s64 = r11.s64 + -23436;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x830381e4
	if (!cr0.eq) goto loc_830381E4;
	// lbz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// b 0x830384ac
	goto loc_830384AC;
loc_830381E4:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-23636
	ctx.r4.s64 = r11.s64 + -23636;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83038204
	if (!cr0.eq) goto loc_83038204;
	// lbz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U8(r30.u32 + 24);
	// b 0x830384ac
	goto loc_830384AC;
loc_83038204:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-24916
	ctx.r4.s64 = r11.s64 + -24916;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830384a8
	if (cr0.eq) goto loc_830384A8;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-23524
	ctx.r4.s64 = r11.s64 + -23524;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830384a8
	if (cr0.eq) goto loc_830384A8;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-23700
	ctx.r4.s64 = r11.s64 + -23700;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830384a8
	if (cr0.eq) goto loc_830384A8;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-23484
	ctx.r4.s64 = r11.s64 + -23484;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830384a0
	if (cr0.eq) goto loc_830384A0;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-23668
	ctx.r4.s64 = r11.s64 + -23668;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830384a0
	if (cr0.eq) goto loc_830384A0;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-26120
	ctx.r4.s64 = r11.s64 + -26120;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x830382a0
	if (!cr0.eq) goto loc_830382A0;
	// addi r3,r30,-104
	ctx.r3.s64 = r30.s64 + -104;
	// bl 0x82fdc730
	sub_82FDC730(ctx, base);
	// b 0x830384ac
	goto loc_830384AC;
loc_830382A0:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-26016
	ctx.r4.s64 = r11.s64 + -26016;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x830382c4
	if (!cr0.eq) goto loc_830382C4;
	// addi r3,r30,-104
	ctx.r3.s64 = r30.s64 + -104;
	// bl 0x82fdc740
	sub_82FDC740(ctx, base);
	// b 0x830384ac
	goto loc_830384AC;
loc_830382C4:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-25888
	ctx.r4.s64 = r11.s64 + -25888;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x830382e8
	if (!cr0.eq) goto loc_830382E8;
	// addi r3,r30,-104
	ctx.r3.s64 = r30.s64 + -104;
	// bl 0x82fdc750
	sub_82FDC750(ctx, base);
	// b 0x830384ac
	goto loc_830384AC;
loc_830382E8:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-25744
	ctx.r4.s64 = r11.s64 + -25744;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8303830c
	if (!cr0.eq) goto loc_8303830C;
	// addi r3,r30,-104
	ctx.r3.s64 = r30.s64 + -104;
	// bl 0x82fdc7a0
	sub_82FDC7A0(ctx, base);
	// b 0x830384ac
	goto loc_830384AC;
loc_8303830C:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-25616
	ctx.r4.s64 = r11.s64 + -25616;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83038340
	if (!cr0.eq) goto loc_83038340;
	// addi r3,r30,-104
	ctx.r3.s64 = r30.s64 + -104;
	// bl 0x82fdc6e8
	sub_82FDC6E8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// b 0x830384ac
	goto loc_830384AC;
loc_83038340:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-25480
	ctx.r4.s64 = r11.s64 + -25480;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83038364
	if (!cr0.eq) goto loc_83038364;
	// addi r3,r30,-104
	ctx.r3.s64 = r30.s64 + -104;
	// bl 0x82fdc6f8
	sub_82FDC6F8(ctx, base);
	// b 0x830384ac
	goto loc_830384AC;
loc_83038364:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-23968
	ctx.r4.s64 = r11.s64 + -23968;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83038388
	if (!cr0.eq) goto loc_83038388;
	// lwz r11,-76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -76);
	// lbz r3,21(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// b 0x830384ac
	goto loc_830384AC;
loc_83038388:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-23832
	ctx.r4.s64 = r11.s64 + -23832;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x830383ac
	if (!cr0.eq) goto loc_830383AC;
	// lwz r11,-76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -76);
	// lbz r3,22(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 22);
	// b 0x830384ac
	goto loc_830384AC;
loc_830383AC:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-25360
	ctx.r4.s64 = r11.s64 + -25360;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x830383d0
	if (!cr0.eq) goto loc_830383D0;
	// lwz r11,-76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -76);
	// lbz r3,9(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 9);
	// b 0x830384ac
	goto loc_830384AC;
loc_830383D0:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-25256
	ctx.r4.s64 = r11.s64 + -25256;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x830383f4
	if (!cr0.eq) goto loc_830383F4;
	// lwz r11,-76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -76);
	// lbz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 8);
	// b 0x830384ac
	goto loc_830384AC;
loc_830383F4:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-24088
	ctx.r4.s64 = r11.s64 + -24088;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83038414
	if (!cr0.eq) goto loc_83038414;
	// lbz r3,25(r30)
	ctx.r3.u64 = PPC_LOAD_U8(r30.u32 + 25);
	// b 0x830384ac
	goto loc_830384AC;
loc_83038414:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-25144
	ctx.r4.s64 = r11.s64 + -25144;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83038434
	if (!cr0.eq) goto loc_83038434;
	// lbz r3,-78(r30)
	ctx.r3.u64 = PPC_LOAD_U8(r30.u32 + -78);
	// b 0x830384ac
	goto loc_830384AC;
loc_83038434:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-25040
	ctx.r4.s64 = r11.s64 + -25040;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83038458
	if (!cr0.eq) goto loc_83038458;
	// lwz r11,-76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -76);
	// lbz r3,25(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 25);
	// b 0x830384ac
	goto loc_830384AC;
loc_83038458:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-24864
	ctx.r4.s64 = r11.s64 + -24864;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8303847c
	if (!cr0.eq) goto loc_8303847C;
	// lwz r11,-76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -76);
	// lbz r3,26(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 26);
	// b 0x830384ac
	goto loc_830384AC;
loc_8303847C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,-28(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + -28);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83002050
	sub_83002050(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-8296
	ctx.r4.s64 = r11.s64 + -8296;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830384A0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830384ac
	goto loc_830384AC;
loc_830384A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830384AC:
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

__attribute__((alias("__imp__sub_830384C8"))) PPC_WEAK_FUNC(sub_830384C8);
PPC_FUNC_IMPL(__imp__sub_830384C8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-25500
	ctx.r4.s64 = r11.s64 + -25500;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8303876c
	if (cr0.eq) goto loc_8303876C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-26140
	ctx.r4.s64 = r11.s64 + -26140;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8303876c
	if (cr0.eq) goto loc_8303876C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-23572
	ctx.r4.s64 = r11.s64 + -23572;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8303876c
	if (cr0.eq) goto loc_8303876C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-23508
	ctx.r4.s64 = r11.s64 + -23508;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8303876c
	if (cr0.eq) goto loc_8303876C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-23396
	ctx.r4.s64 = r11.s64 + -23396;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8303876c
	if (cr0.eq) goto loc_8303876C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-23436
	ctx.r4.s64 = r11.s64 + -23436;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8303876c
	if (cr0.eq) goto loc_8303876C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-23636
	ctx.r4.s64 = r11.s64 + -23636;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8303876c
	if (cr0.eq) goto loc_8303876C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-24532
	ctx.r4.s64 = r11.s64 + -24532;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8303876c
	if (cr0.eq) goto loc_8303876C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-24088
	ctx.r4.s64 = r11.s64 + -24088;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8303876c
	if (cr0.eq) goto loc_8303876C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-25360
	ctx.r4.s64 = r11.s64 + -25360;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8303876c
	if (cr0.eq) goto loc_8303876C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-25256
	ctx.r4.s64 = r11.s64 + -25256;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8303876c
	if (cr0.eq) goto loc_8303876C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-25144
	ctx.r4.s64 = r11.s64 + -25144;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8303876c
	if (cr0.eq) goto loc_8303876C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-24864
	ctx.r4.s64 = r11.s64 + -24864;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8303876c
	if (cr0.eq) goto loc_8303876C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-25040
	ctx.r4.s64 = r11.s64 + -25040;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8303876c
	if (cr0.eq) goto loc_8303876C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-25888
	ctx.r4.s64 = r11.s64 + -25888;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8303876c
	if (cr0.eq) goto loc_8303876C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-24916
	ctx.r4.s64 = r11.s64 + -24916;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83038794
	if (cr0.eq) goto loc_83038794;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-23524
	ctx.r4.s64 = r11.s64 + -23524;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83038794
	if (cr0.eq) goto loc_83038794;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-23700
	ctx.r4.s64 = r11.s64 + -23700;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83038794
	if (cr0.eq) goto loc_83038794;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-23484
	ctx.r4.s64 = r11.s64 + -23484;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83038788
	if (cr0.eq) goto loc_83038788;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-23668
	ctx.r4.s64 = r11.s64 + -23668;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83038788
	if (cr0.eq) goto loc_83038788;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-26120
	ctx.r4.s64 = r11.s64 + -26120;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8303876c
	if (cr0.eq) goto loc_8303876C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-26016
	ctx.r4.s64 = r11.s64 + -26016;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8303876c
	if (cr0.eq) goto loc_8303876C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-25744
	ctx.r4.s64 = r11.s64 + -25744;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8303876c
	if (cr0.eq) goto loc_8303876C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-25616
	ctx.r4.s64 = r11.s64 + -25616;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8303876c
	if (cr0.eq) goto loc_8303876C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-25480
	ctx.r4.s64 = r11.s64 + -25480;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8303876c
	if (cr0.eq) goto loc_8303876C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-23968
	ctx.r4.s64 = r11.s64 + -23968;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8303876c
	if (cr0.eq) goto loc_8303876C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-23832
	ctx.r4.s64 = r11.s64 + -23832;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8303879c
	if (!cr0.eq) goto loc_8303879C;
loc_8303876C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83038770:
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
loc_83038788:
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8303879c
	if (cr0.eq) goto loc_8303879C;
	// b 0x8303876c
	goto loc_8303876C;
loc_83038794:
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8303876c
	if (cr0.eq) goto loc_8303876C;
loc_8303879C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83038770
	goto loc_83038770;
}

__attribute__((alias("__imp__sub_830387A8"))) PPC_WEAK_FUNC(sub_830387A8);
PPC_FUNC_IMPL(__imp__sub_830387A8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,-24760
	ctx.r4.s64 = r11.s64 + -24760;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x830387ec
	if (!cr0.eq) goto loc_830387EC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,-104
	ctx.r3.s64 = r30.s64 + -104;
	// bl 0x82fdc878
	sub_82FDC878(ctx, base);
loc_830387E4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
loc_830387EC:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-24472
	ctx.r4.s64 = r11.s64 + -24472;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83038814
	if (!cr0.eq) goto loc_83038814;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,-104
	ctx.r3.s64 = r30.s64 + -104;
	// bl 0x82fdc880
	sub_82FDC880(ctx, base);
	// b 0x830387e4
	goto loc_830387E4;
loc_83038814:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-24632
	ctx.r4.s64 = r11.s64 + -24632;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8303883c
	if (!cr0.eq) goto loc_8303883C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,-104
	ctx.r3.s64 = r30.s64 + -104;
	// bl 0x82fdc888
	sub_82FDC888(ctx, base);
	// b 0x830387e4
	goto loc_830387E4;
loc_8303883C:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-24320
	ctx.r4.s64 = r11.s64 + -24320;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83038864
	if (cr0.eq) goto loc_83038864;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,-104
	ctx.r3.s64 = r30.s64 + -104;
	// bl 0x82fdc8f8
	sub_82FDC8F8(ctx, base);
	// b 0x830387e4
	goto loc_830387E4;
loc_83038864:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-24224
	ctx.r4.s64 = r11.s64 + -24224;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8303888c
	if (cr0.eq) goto loc_8303888C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,-104
	ctx.r3.s64 = r30.s64 + -104;
	// bl 0x830379c8
	sub_830379C8(ctx, base);
	// b 0x830387e4
	goto loc_830387E4;
loc_8303888C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,-28(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + -28);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83002050
	sub_83002050(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-8296
	ctx.r4.s64 = r11.s64 + -8296;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_830388B0"))) PPC_WEAK_FUNC(sub_830388B0);
PPC_FUNC_IMPL(__imp__sub_830388B0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,-24760
	ctx.r4.s64 = r11.s64 + -24760;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83038904
	if (!cr0.eq) goto loc_83038904;
	// addi r3,r30,-104
	ctx.r3.s64 = r30.s64 + -104;
	// bl 0x82fdc770
	sub_82FDC770(ctx, base);
loc_830388EC:
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
loc_83038904:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-24472
	ctx.r4.s64 = r11.s64 + -24472;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83038928
	if (!cr0.eq) goto loc_83038928;
	// addi r3,r30,-104
	ctx.r3.s64 = r30.s64 + -104;
	// bl 0x82fdc780
	sub_82FDC780(ctx, base);
	// b 0x830388ec
	goto loc_830388EC;
loc_83038928:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-24632
	ctx.r4.s64 = r11.s64 + -24632;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8303894c
	if (!cr0.eq) goto loc_8303894C;
	// addi r3,r30,-104
	ctx.r3.s64 = r30.s64 + -104;
	// bl 0x82fdc790
	sub_82FDC790(ctx, base);
	// b 0x830388ec
	goto loc_830388EC;
loc_8303894C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,-28(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + -28);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83002050
	sub_83002050(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-8296
	ctx.r4.s64 = r11.s64 + -8296;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_83038970"))) PPC_WEAK_FUNC(sub_83038970);
PPC_FUNC_IMPL(__imp__sub_83038970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// addic. r3,r3,-104
	xer.ca = ctx.r3.u32 > 103;
	ctx.r3.s64 = ctx.r3.s64 + -104;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8303898C"))) PPC_WEAK_FUNC(sub_8303898C);
PPC_FUNC_IMPL(__imp__sub_8303898C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83038990"))) PPC_WEAK_FUNC(sub_83038990);
PPC_FUNC_IMPL(__imp__sub_83038990) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-104
	ctx.r3.s64 = ctx.r3.s64 + -104;
	// b 0x82fdc610
	sub_82FDC610(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830389A0"))) PPC_WEAK_FUNC(sub_830389A0);
PPC_FUNC_IMPL(__imp__sub_830389A0) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r6,-28(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + -28);
	// bl 0x83086938
	sub_83086938(ctx, base);
	// addi r29,r30,-104
	r29.s64 = r30.s64 + -104;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fdc9c0
	sub_82FDC9C0(ctx, base);
	// lbz r11,25(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 25);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83038a00
	if (cr0.eq) goto loc_83038A00;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fdc6c0
	sub_82FDC6C0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_830389EC:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x830869e8
	sub_830869E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b7c
	return;
loc_83038A00:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83159448
	sub_83159448(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x830389ec
	goto loc_830389EC;
}

__attribute__((alias("__imp__sub_83038A10"))) PPC_WEAK_FUNC(sub_83038A10);
PPC_FUNC_IMPL(__imp__sub_83038A10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x830869e8
	sub_830869E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83038A38"))) PPC_WEAK_FUNC(sub_83038A38);
PPC_FUNC_IMPL(__imp__sub_83038A38) {
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
	// addi r30,r31,-104
	r30.s64 = r31.s64 + -104;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fdcac0
	sub_82FDCAC0(ctx, base);
	// lbz r11,25(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 25);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83038a74
	if (cr0.eq) goto loc_83038A74;
	// bl 0x82fdc6c0
	sub_82FDC6C0(ctx, base);
	// b 0x83038a78
	goto loc_83038A78;
loc_83038A74:
	// bl 0x83159448
	sub_83159448(ctx, base);
loc_83038A78:
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

__attribute__((alias("__imp__sub_83038A90"))) PPC_WEAK_FUNC(sub_83038A90);
PPC_FUNC_IMPL(__imp__sub_83038A90) {
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
	// addi r30,r31,-104
	r30.s64 = r31.s64 + -104;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fdcbb0
	sub_82FDCBB0(ctx, base);
	// lbz r11,25(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 25);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83038acc
	if (cr0.eq) goto loc_83038ACC;
	// bl 0x82fdc6c0
	sub_82FDC6C0(ctx, base);
	// b 0x83038ad0
	goto loc_83038AD0;
loc_83038ACC:
	// bl 0x83159448
	sub_83159448(ctx, base);
loc_83038AD0:
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

__attribute__((alias("__imp__sub_83038AF0"))) PPC_WEAK_FUNC(sub_83038AF0);
PPC_FUNC_IMPL(__imp__sub_83038AF0) {
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
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// lwz r11,116(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83038bbc
	if (cr6.eq) goto loc_83038BBC;
	// li r29,1
	r29.s64 = 1;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x83038b30
	if (!cr6.eq) goto loc_83038B30;
	// li r29,0
	r29.s64 = 0;
	// b 0x83038b3c
	goto loc_83038B3C;
loc_83038B30:
	// cmpwi cr6,r6,2
	cr6.compare<int32_t>(ctx.r6.s32, 2, xer);
	// bne cr6,0x83038b3c
	if (!cr6.eq) goto loc_83038B3C;
	// li r29,2
	r29.s64 = 2;
loc_83038B3C:
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r6,36(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lwz r5,292(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x83086bf8
	sub_83086BF8(ctx, base);
	// addi r6,r31,128
	ctx.r6.s64 = r31.s64 + 128;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83041018
	sub_83041018(ctx, base);
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 116);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83038bac
	if (!cr0.eq) goto loc_83038BAC;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lbz r11,13(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 13);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83038bac
	if (!cr0.eq) goto loc_83038BAC;
	// lis r11,-32219
	r11.s64 = -2111504384;
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-8124
	ctx.r4.s64 = r11.s64 + -8124;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_83038BAC:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83041080
	sub_83041080(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x83086c20
	sub_83086C20(ctx, base);
loc_83038BBC:
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83038BC4"))) PPC_WEAK_FUNC(sub_83038BC4);
PPC_FUNC_IMPL(__imp__sub_83038BC4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-208
	r31.s64 = r12.s64 + -208;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x83086c20
	sub_83086C20(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83038BEC"))) PPC_WEAK_FUNC(sub_83038BEC);
PPC_FUNC_IMPL(__imp__sub_83038BEC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-208
	r31.s64 = r12.s64 + -208;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83041080
	sub_83041080(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83038C20"))) PPC_WEAK_FUNC(sub_83038C20);
PPC_FUNC_IMPL(__imp__sub_83038C20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,104(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83038c94
	if (cr6.eq) goto loc_83038C94;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x83038c94
	if (cr0.eq) goto loc_83038C94;
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r4,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r4.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83038c8c
	if (cr0.eq) goto loc_83038C8C;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,68(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83086938
	sub_83086938(ctx, base);
	// b 0x83038c90
	goto loc_83038C90;
loc_83038C8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83038C90:
	// b 0x83038c98
	goto loc_83038C98;
loc_83038C94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83038C98:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83038CA0"))) PPC_WEAK_FUNC(sub_83038CA0);
PPC_FUNC_IMPL(__imp__sub_83038CA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83038CD8"))) PPC_WEAK_FUNC(sub_83038CD8);
PPC_FUNC_IMPL(__imp__sub_83038CD8) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,104(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83038d5c
	if (cr6.eq) goto loc_83038D5C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x83038d5c
	if (cr0.eq) goto loc_83038D5C;
	// lwz r4,68(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 68);
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r4,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r4.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83038d54
	if (cr0.eq) goto loc_83038D54;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,68(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 68);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x83086938
	sub_83086938(ctx, base);
	// b 0x83038d58
	goto loc_83038D58;
loc_83038D54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83038D58:
	// b 0x83038d88
	goto loc_83038D88;
loc_83038D5C:
	// lwz r11,108(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83038d84
	if (cr6.eq) goto loc_83038D84;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83038d88
	goto loc_83038D88;
loc_83038D84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83038D88:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83038D90"))) PPC_WEAK_FUNC(sub_83038D90);
PPC_FUNC_IMPL(__imp__sub_83038D90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83038DC8"))) PPC_WEAK_FUNC(sub_83038DC8);
PPC_FUNC_IMPL(__imp__sub_83038DC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x831b0b28
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// sth r5,182(r31)
	PPC_STORE_U16(r31.u32 + 182, ctx.r5.u16);
	// lbz r11,-81(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + -81);
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83038e24
	if (cr0.eq) goto loc_83038E24;
	// lis r11,-32235
	r11.s64 = -2112552960;
	// lwz r7,-28(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + -28);
	// li r6,43
	ctx.r6.s64 = 43;
	// addi r4,r11,-29432
	ctx.r4.s64 = r11.s64 + -29432;
	// li r5,582
	ctx.r5.s64 = 582;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82fdc450
	sub_82FDC450(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-8564
	ctx.r4.s64 = r11.s64 + -8564;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_83038E24:
	// li r11,1
	r11.s64 = 1;
	// extsh. r28,r5
	r28.s64 = ctx.r5.s16;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// stb r11,-81(r30)
	PPC_STORE_U8(r30.u32 + -81, r11.u8);
	// bne 0x83038e40
	if (!cr0.eq) goto loc_83038E40;
	// lwz r11,-76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -76);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,96(r11)
	PPC_STORE_U32(r11.u32 + 96, ctx.r10.u32);
loc_83038E40:
	// lwz r3,-76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -76);
	// bl 0x82ff35a0
	sub_82FF35A0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r3,r30,-104
	ctx.r3.s64 = r30.s64 + -104;
	// bl 0x82fdc6c0
	sub_82FDC6C0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83038e88
	if (cr0.eq) goto loc_83038E88;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,152(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 152);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83038E88:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bne cr6,0x83038ea8
	if (!cr6.eq) goto loc_83038EA8;
	// addic. r11,r30,-104
	xer.ca = r30.u32 > 103;
	r11.s64 = r30.s64 + -104;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r30,-92
	r11.s64 = r30.s64 + -92;
	// bne 0x83038ea0
	if (!cr0.eq) goto loc_83038EA0;
	// li r11,0
	r11.s64 = 0;
loc_83038EA0:
	// lwz r10,-76(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + -76);
	// stw r11,96(r10)
	PPC_STORE_U32(ctx.r10.u32 + 96, r11.u32);
loc_83038EA8:
	// li r11,0
	r11.s64 = 0;
	// stb r11,-81(r30)
	PPC_STORE_U8(r30.u32 + -81, r11.u8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83038EC4"))) PPC_WEAK_FUNC(sub_83038EC4);
PPC_FUNC_IMPL(__imp__sub_83038EC4) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_83038EE4"))) PPC_WEAK_FUNC(sub_83038EE4);
PPC_FUNC_IMPL(__imp__sub_83038EE4) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,182(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 182);
	// lwz r10,164(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83038f1c
	if (!cr0.eq) goto loc_83038F1C;
	// addic. r11,r10,-104
	xer.ca = ctx.r10.u32 > 103;
	r11.s64 = ctx.r10.s64 + -104;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r10,-92
	r11.s64 = ctx.r10.s64 + -92;
	// bne 0x83038f14
	if (!cr0.eq) goto loc_83038F14;
	// li r11,0
	r11.s64 = 0;
loc_83038F14:
	// lwz r9,-76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -76);
	// stw r11,96(r9)
	PPC_STORE_U32(ctx.r9.u32 + 96, r11.u32);
loc_83038F1C:
	// li r11,0
	r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,-81(r10)
	PPC_STORE_U8(ctx.r10.u32 + -81, r11.u8);
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_83038F38"))) PPC_WEAK_FUNC(sub_83038F38);
PPC_FUNC_IMPL(__imp__sub_83038F38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x831b0b28
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// sth r5,182(r31)
	PPC_STORE_U16(r31.u32 + 182, ctx.r5.u16);
	// lbz r11,-81(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + -81);
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83038f94
	if (cr0.eq) goto loc_83038F94;
	// lis r11,-32235
	r11.s64 = -2112552960;
	// lwz r7,-28(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + -28);
	// li r6,43
	ctx.r6.s64 = 43;
	// addi r4,r11,-29432
	ctx.r4.s64 = r11.s64 + -29432;
	// li r5,622
	ctx.r5.s64 = 622;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82fdc450
	sub_82FDC450(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-8564
	ctx.r4.s64 = r11.s64 + -8564;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_83038F94:
	// li r11,1
	r11.s64 = 1;
	// extsh. r28,r5
	r28.s64 = ctx.r5.s16;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// stb r11,-81(r30)
	PPC_STORE_U8(r30.u32 + -81, r11.u8);
	// bne 0x83038fb0
	if (!cr0.eq) goto loc_83038FB0;
	// lwz r11,-76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -76);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,96(r11)
	PPC_STORE_U32(r11.u32 + 96, ctx.r10.u32);
loc_83038FB0:
	// lwz r3,-76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -76);
	// bl 0x82ff3028
	sub_82FF3028(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r3,r30,-104
	ctx.r3.s64 = r30.s64 + -104;
	// bl 0x82fdc6c0
	sub_82FDC6C0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83038ff8
	if (cr0.eq) goto loc_83038FF8;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,152(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 152);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83038FF8:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bne cr6,0x83039018
	if (!cr6.eq) goto loc_83039018;
	// addic. r11,r30,-104
	xer.ca = r30.u32 > 103;
	r11.s64 = r30.s64 + -104;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r30,-92
	r11.s64 = r30.s64 + -92;
	// bne 0x83039010
	if (!cr0.eq) goto loc_83039010;
	// li r11,0
	r11.s64 = 0;
loc_83039010:
	// lwz r10,-76(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + -76);
	// stw r11,96(r10)
	PPC_STORE_U32(ctx.r10.u32 + 96, r11.u32);
loc_83039018:
	// li r11,0
	r11.s64 = 0;
	// stb r11,-81(r30)
	PPC_STORE_U8(r30.u32 + -81, r11.u8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83039034"))) PPC_WEAK_FUNC(sub_83039034);
PPC_FUNC_IMPL(__imp__sub_83039034) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_83039054"))) PPC_WEAK_FUNC(sub_83039054);
PPC_FUNC_IMPL(__imp__sub_83039054) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,182(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 182);
	// lwz r10,164(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8303908c
	if (!cr0.eq) goto loc_8303908C;
	// addic. r11,r10,-104
	xer.ca = ctx.r10.u32 > 103;
	r11.s64 = ctx.r10.s64 + -104;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r10,-92
	r11.s64 = ctx.r10.s64 + -92;
	// bne 0x83039084
	if (!cr0.eq) goto loc_83039084;
	// li r11,0
	r11.s64 = 0;
loc_83039084:
	// lwz r9,-76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -76);
	// stw r11,96(r9)
	PPC_STORE_U32(ctx.r9.u32 + 96, r11.u32);
loc_8303908C:
	// li r11,0
	r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,-81(r10)
	PPC_STORE_U8(ctx.r10.u32 + -81, r11.u8);
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_830390A8"))) PPC_WEAK_FUNC(sub_830390A8);
PPC_FUNC_IMPL(__imp__sub_830390A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x831b0b24
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lbz r11,-81(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + -81);
	// stw r30,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r30.u32);
	// sth r29,230(r31)
	PPC_STORE_U16(r31.u32 + 230, r29.u16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8303910c
	if (cr0.eq) goto loc_8303910C;
	// lis r11,-32235
	r11.s64 = -2112552960;
	// lwz r7,-28(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + -28);
	// li r6,43
	ctx.r6.s64 = 43;
	// addi r4,r11,-29432
	ctx.r4.s64 = r11.s64 + -29432;
	// li r5,662
	ctx.r5.s64 = 662;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82fdc450
	sub_82FDC450(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-8564
	ctx.r4.s64 = r11.s64 + -8564;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_8303910C:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// lwz r6,-28(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + -28);
	// bl 0x83086938
	sub_83086938(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r11,1
	r11.s64 = 1;
	// extsh. r27,r29
	r27.s64 = r29.s16;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// stb r11,-81(r30)
	PPC_STORE_U8(r30.u32 + -81, r11.u8);
	// bne 0x83039140
	if (!cr0.eq) goto loc_83039140;
	// lwz r11,-76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -76);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,96(r11)
	PPC_STORE_U32(r11.u32 + 96, ctx.r10.u32);
loc_83039140:
	// lwz r3,-76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -76);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r3,r30,-104
	ctx.r3.s64 = r30.s64 + -104;
	// bl 0x82fdc6c0
	sub_82FDC6C0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830391a0
	if (cr0.eq) goto loc_830391A0;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,152(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 152);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_830391A0:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bne cr6,0x830391c0
	if (!cr6.eq) goto loc_830391C0;
	// addic. r11,r30,-104
	xer.ca = r30.u32 > 103;
	r11.s64 = r30.s64 + -104;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r30,-92
	r11.s64 = r30.s64 + -92;
	// bne 0x830391b8
	if (!cr0.eq) goto loc_830391B8;
	// li r11,0
	r11.s64 = 0;
loc_830391B8:
	// lwz r10,-76(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + -76);
	// stw r11,96(r10)
	PPC_STORE_U32(ctx.r10.u32 + 96, r11.u32);
loc_830391C0:
	// li r11,0
	r11.s64 = 0;
	// stb r11,-81(r30)
	PPC_STORE_U8(r30.u32 + -81, r11.u8);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x830869e8
	sub_830869E8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_830391EC"))) PPC_WEAK_FUNC(sub_830391EC);
PPC_FUNC_IMPL(__imp__sub_830391EC) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_8303920C"))) PPC_WEAK_FUNC(sub_8303920C);
PPC_FUNC_IMPL(__imp__sub_8303920C) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-192
	r31.s64 = r12.s64 + -192;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,230(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 230);
	// lwz r10,212(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83039244
	if (!cr0.eq) goto loc_83039244;
	// addic. r11,r10,-104
	xer.ca = ctx.r10.u32 > 103;
	r11.s64 = ctx.r10.s64 + -104;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r10,-92
	r11.s64 = ctx.r10.s64 + -92;
	// bne 0x8303923c
	if (!cr0.eq) goto loc_8303923C;
	// li r11,0
	r11.s64 = 0;
loc_8303923C:
	// lwz r9,-76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -76);
	// stw r11,96(r9)
	PPC_STORE_U32(ctx.r9.u32 + 96, r11.u32);
loc_83039244:
	// li r11,0
	r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,-81(r10)
	PPC_STORE_U8(ctx.r10.u32 + -81, r11.u8);
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_83039258"))) PPC_WEAK_FUNC(sub_83039258);
PPC_FUNC_IMPL(__imp__sub_83039258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-192
	r31.s64 = r12.s64 + -192;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x830869e8
	sub_830869E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039280"))) PPC_WEAK_FUNC(sub_83039280);
PPC_FUNC_IMPL(__imp__sub_83039280) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,-40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -40);
	// b 0x82feeb88
	sub_82FEEB88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83039288"))) PPC_WEAK_FUNC(sub_83039288);
PPC_FUNC_IMPL(__imp__sub_83039288) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,-40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -40);
	// b 0x82feeed8
	sub_82FEEED8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83039290"))) PPC_WEAK_FUNC(sub_83039290);
PPC_FUNC_IMPL(__imp__sub_83039290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-76(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -76);
	// lwz r3,188(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 188);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830392A0"))) PPC_WEAK_FUNC(sub_830392A0);
PPC_FUNC_IMPL(__imp__sub_830392A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,-76(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -76);
	// b 0x82ff0008
	sub_82FF0008(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830392A8"))) PPC_WEAK_FUNC(sub_830392A8);
PPC_FUNC_IMPL(__imp__sub_830392A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-76(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -76);
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 132);
	// b 0x82ffa1f8
	sub_82FFA1F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830392B8"))) PPC_WEAK_FUNC(sub_830392B8);
PPC_FUNC_IMPL(__imp__sub_830392B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x830392e0
	sub_830392E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830392C0"))) PPC_WEAK_FUNC(sub_830392C0);
PPC_FUNC_IMPL(__imp__sub_830392C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x830392e0
	sub_830392E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830392C8"))) PPC_WEAK_FUNC(sub_830392C8);
PPC_FUNC_IMPL(__imp__sub_830392C8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-104
	ctx.r3.s64 = ctx.r3.s64 + -104;
	// b 0x830392e0
	sub_830392E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830392D0"))) PPC_WEAK_FUNC(sub_830392D0);
PPC_FUNC_IMPL(__imp__sub_830392D0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
	// b 0x830392e0
	sub_830392E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830392D8"))) PPC_WEAK_FUNC(sub_830392D8);
PPC_FUNC_IMPL(__imp__sub_830392D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x830392e0
	sub_830392E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830392E0"))) PPC_WEAK_FUNC(sub_830392E0);
PPC_FUNC_IMPL(__imp__sub_830392E0) {
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
	// bl 0x83037b30
	sub_83037B30(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83039310
	if (cr0.eq) goto loc_83039310;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_83039310:
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

__attribute__((alias("__imp__sub_83039330"))) PPC_WEAK_FUNC(sub_83039330);
PPC_FUNC_IMPL(__imp__sub_83039330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r11,r11,3976
	r11.s64 = r11.s64 + 3976;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039348"))) PPC_WEAK_FUNC(sub_83039348);
PPC_FUNC_IMPL(__imp__sub_83039348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	r11.s64 = -2112552960;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-28456
	r11.s64 = r11.s64 + -28456;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830393c4
	if (cr0.eq) goto loc_830393C4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830393C4:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r11,r11,3976
	r11.s64 = r11.s64 + 3976;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
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

__attribute__((alias("__imp__sub_830393E8"))) PPC_WEAK_FUNC(sub_830393E8);
PPC_FUNC_IMPL(__imp__sub_830393E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// bl 0x83039330
	sub_83039330(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039410"))) PPC_WEAK_FUNC(sub_83039410);
PPC_FUNC_IMPL(__imp__sub_83039410) {
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
	// bl 0x83039348
	sub_83039348(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83039440
	if (cr0.eq) goto loc_83039440;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_83039440:
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

__attribute__((alias("__imp__sub_83039460"))) PPC_WEAK_FUNC(sub_83039460);
PPC_FUNC_IMPL(__imp__sub_83039460) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_830394C0"))) PPC_WEAK_FUNC(sub_830394C0);
PPC_FUNC_IMPL(__imp__sub_830394C0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_83039528"))) PPC_WEAK_FUNC(sub_83039528);
PPC_FUNC_IMPL(__imp__sub_83039528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x831b0b28
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,1023
	ctx.r4.s64 = 1023;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r5,52(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// bl 0x83086c38
	sub_83086C38(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r28,8(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r11,r11,-28688
	r11.s64 = r11.s64 + -28688;
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r28,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r28.u32);
	// beq 0x830395bc
	if (cr0.eq) goto loc_830395BC;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r30,52(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// bl 0x83086d60
	sub_83086D60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x830395c0
	goto loc_830395C0;
loc_830395BC:
	// li r30,0
	r30.s64 = 0;
loc_830395C0:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83086cd0
	sub_83086CD0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x830395dc
	goto loc_830395DC;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83086cd0
	sub_83086CD0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_830395DC:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830395EC"))) PPC_WEAK_FUNC(sub_830395EC);
PPC_FUNC_IMPL(__imp__sub_830395EC) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_8303960C"))) PPC_WEAK_FUNC(sub_8303960C);
PPC_FUNC_IMPL(__imp__sub_8303960C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// lis r3,-31996
	ctx.r3.s64 = -2096889856;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,-27184
	ctx.r3.s64 = ctx.r3.s64 + -27184;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83039630"))) PPC_WEAK_FUNC(sub_83039630);
PPC_FUNC_IMPL(__imp__sub_83039630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83086cd0
	sub_83086CD0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039658"))) PPC_WEAK_FUNC(sub_83039658);
PPC_FUNC_IMPL(__imp__sub_83039658) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r28,r10,-28900
	r28.s64 = ctx.r10.s64 + -28900;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r10,r28,4
	ctx.r10.s64 = r28.s64 + 4;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r10,28(r30)
	PPC_STORE_U32(r30.u32 + 28, ctx.r10.u32);
	// beq 0x8303969c
	if (cr0.eq) goto loc_8303969C;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8303969c
	if (cr0.eq) goto loc_8303969C;
	// stw r11,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r11.u32);
	// b 0x83039738
	goto loc_83039738;
loc_8303969C:
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
	// extsh r11,r3
	r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// bne cr6,0x830396c4
	if (!cr6.eq) goto loc_830396C4;
	// addi r31,r29,-12
	r31.s64 = r29.s64 + -12;
	// b 0x830396dc
	goto loc_830396DC;
loc_830396C4:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_830396DC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83039738
	if (cr6.eq) goto loc_83039738;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8303970c
	if (cr0.eq) goto loc_8303970C;
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83039734
	if (!cr0.eq) goto loc_83039734;
loc_8303970C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83039738
	if (cr0.eq) goto loc_83039738;
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83039738
	if (cr0.eq) goto loc_83039738;
loc_83039734:
	// stw r3,28(r30)
	PPC_STORE_U32(r30.u32 + 28, ctx.r3.u32);
loc_83039738:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83039750
	if (cr0.eq) goto loc_83039750;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x83039754
	if (!cr0.eq) goto loc_83039754;
loc_83039750:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_83039754:
	// stw r11,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsh r11,r3
	r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// bne cr6,0x83039780
	if (!cr6.eq) goto loc_83039780;
	// addi r3,r29,-12
	ctx.r3.s64 = r29.s64 + -12;
	// b 0x83039794
	goto loc_83039794;
loc_83039780:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83039794:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830397b0
	if (cr6.eq) goto loc_830397B0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 104);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r3.u32);
loc_830397B0:
	// li r11,0
	r11.s64 = 0;
	// stw r11,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830397C0"))) PPC_WEAK_FUNC(sub_830397C0);
PPC_FUNC_IMPL(__imp__sub_830397C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83039844
	if (cr6.eq) goto loc_83039844;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// slw r29,r9,r10
	r29.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// and. r11,r3,r29
	r11.u64 = ctx.r3.u64 & r29.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83039844
	if (cr0.eq) goto loc_83039844;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// b 0x83039848
	goto loc_83039848;
loc_83039844:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83039848:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83039850"))) PPC_WEAK_FUNC(sub_83039850);
PPC_FUNC_IMPL(__imp__sub_83039850) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830399e0
	if (cr6.eq) goto loc_830399E0;
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830399e0
	if (cr0.eq) goto loc_830399E0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-23372
	ctx.r4.s64 = r11.s64 + -23372;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830398a8
	if (cr0.eq) goto loc_830398A8;
	// li r11,0
	r11.s64 = 0;
	// b 0x830399c4
	goto loc_830399C4;
loc_830398A8:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-23340
	ctx.r4.s64 = r11.s64 + -23340;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830398c8
	if (cr0.eq) goto loc_830398C8;
	// li r11,1
	r11.s64 = 1;
	// b 0x830399c4
	goto loc_830399C4;
loc_830398C8:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-23288
	ctx.r4.s64 = r11.s64 + -23288;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830398e8
	if (cr0.eq) goto loc_830398E8;
	// li r11,2
	r11.s64 = 2;
	// b 0x830399c4
	goto loc_830399C4;
loc_830398E8:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-23268
	ctx.r4.s64 = r11.s64 + -23268;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83039908
	if (cr0.eq) goto loc_83039908;
	// li r11,3
	r11.s64 = 3;
	// b 0x830399c4
	goto loc_830399C4;
loc_83039908:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-23228
	ctx.r4.s64 = r11.s64 + -23228;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83039928
	if (cr0.eq) goto loc_83039928;
	// li r11,4
	r11.s64 = 4;
	// b 0x830399c4
	goto loc_830399C4;
loc_83039928:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-23184
	ctx.r4.s64 = r11.s64 + -23184;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83039948
	if (cr0.eq) goto loc_83039948;
	// li r11,5
	r11.s64 = 5;
	// b 0x830399c4
	goto loc_830399C4;
loc_83039948:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-23140
	ctx.r4.s64 = r11.s64 + -23140;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83039968
	if (cr0.eq) goto loc_83039968;
	// li r11,6
	r11.s64 = 6;
	// b 0x830399c4
	goto loc_830399C4;
loc_83039968:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-23116
	ctx.r4.s64 = r11.s64 + -23116;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83039988
	if (cr0.eq) goto loc_83039988;
	// li r11,7
	r11.s64 = 7;
	// b 0x830399c4
	goto loc_830399C4;
loc_83039988:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-23056
	ctx.r4.s64 = r11.s64 + -23056;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830399a8
	if (cr0.eq) goto loc_830399A8;
	// li r11,8
	r11.s64 = 8;
	// b 0x830399c4
	goto loc_830399C4;
loc_830399A8:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-22952
	ctx.r4.s64 = r11.s64 + -22952;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830399d0
	if (cr0.eq) goto loc_830399D0;
	// li r11,9
	r11.s64 = 9;
loc_830399C4:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83039a10
	goto loc_83039A10;
loc_830399D0:
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83039a0c
	if (cr0.eq) goto loc_83039A0C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// b 0x830399ec
	goto loc_830399EC;
loc_830399E0:
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83039a0c
	if (cr0.eq) goto loc_83039A0C;
	// li r5,0
	ctx.r5.s64 = 0;
loc_830399EC:
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r6,52(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83002050
	sub_83002050(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-8296
	ctx.r4.s64 = r11.s64 + -8296;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_83039A0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83039A10:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83039A20"))) PPC_WEAK_FUNC(sub_83039A20);
PPC_FUNC_IMPL(__imp__sub_83039A20) {
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
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// li r27,1
	r27.s64 = 1;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83039aa8
	if (cr6.eq) goto loc_83039AA8;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x83086bf8
	sub_83086BF8(ctx, base);
	// addi r6,r31,112
	ctx.r6.s64 = r31.s64 + 112;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// extsh r4,r29
	ctx.r4.s64 = r29.s16;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x83041018
	sub_83041018(ctx, base);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x83041080
	sub_83041080(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x83086c20
	sub_83086C20(ctx, base);
loc_83039AA8:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x83039abc
	if (cr6.eq) goto loc_83039ABC;
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r11.u32);
loc_83039ABC:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83039AC8"))) PPC_WEAK_FUNC(sub_83039AC8);
PPC_FUNC_IMPL(__imp__sub_83039AC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-192
	r31.s64 = r12.s64 + -192;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x83086c20
	sub_83086C20(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039AF0"))) PPC_WEAK_FUNC(sub_83039AF0);
PPC_FUNC_IMPL(__imp__sub_83039AF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-192
	r31.s64 = r12.s64 + -192;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x83041080
	sub_83041080(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039B20"))) PPC_WEAK_FUNC(sub_83039B20);
PPC_FUNC_IMPL(__imp__sub_83039B20) {
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
	// addi r31,r1,-2272
	r31.s64 = ctx.r1.s64 + -2272;
	// stwu r1,-2272(r1)
	ea = -2272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// bl 0x82ff7ba8
	sub_82FF7BA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1023
	ctx.r6.s64 = 1023;
	// addi r5,r31,160
	ctx.r5.s64 = r31.s64 + 160;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// li r27,1
	r27.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83039bcc
	if (cr6.eq) goto loc_83039BCC;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x83086bf8
	sub_83086BF8(ctx, base);
	// addi r6,r31,128
	ctx.r6.s64 = r31.s64 + 128;
	// addi r5,r31,160
	ctx.r5.s64 = r31.s64 + 160;
	// extsh r4,r28
	ctx.r4.s64 = r28.s16;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83041018
	sub_83041018(ctx, base);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83041080
	sub_83041080(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x83086c20
	sub_83086C20(ctx, base);
loc_83039BCC:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x83039be0
	if (cr6.eq) goto loc_83039BE0;
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r11.u32);
loc_83039BE0:
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(r28.s32, 2, xer);
	// beq cr6,0x83039bfc
	if (cr6.eq) goto loc_83039BFC;
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83039bfc
	if (cr0.eq) goto loc_83039BFC;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r31,2272
	ctx.r1.s64 = r31.s64 + 2272;
	// b 0x831b0b70
	return;
loc_83039BFC:
	// lis r11,-32219
	r11.s64 = -2111504384;
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-7528
	ctx.r4.s64 = r11.s64 + -7528;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_83039C10"))) PPC_WEAK_FUNC(sub_83039C10);
PPC_FUNC_IMPL(__imp__sub_83039C10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-2272
	r31.s64 = r12.s64 + -2272;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x83086c20
	sub_83086C20(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039C38"))) PPC_WEAK_FUNC(sub_83039C38);
PPC_FUNC_IMPL(__imp__sub_83039C38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-2272
	r31.s64 = r12.s64 + -2272;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83041080
	sub_83041080(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039C60"))) PPC_WEAK_FUNC(sub_83039C60);
PPC_FUNC_IMPL(__imp__sub_83039C60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm. r11,r11,29,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83039cd0
	if (cr0.eq) goto loc_83039CD0;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r11,-15716(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15716);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83039ca8
	if (cr6.eq) goto loc_83039CA8;
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// li r11,0
	r11.s64 = 0;
	// stw r11,-15716(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15716, r11.u32);
	// addze r11,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	r11.s64 = temp.s64;
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
loc_83039CA8:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x83039cd0
	if (!cr6.gt) goto loc_83039CD0;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
loc_83039CB4:
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// bl 0x83087600
	sub_83087600(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x83087600
	sub_83087600(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x83039cb4
	if (!cr0.eq) goto loc_83039CB4;
loc_83039CD0:
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

__attribute__((alias("__imp__sub_83039CE8"))) PPC_WEAK_FUNC(sub_83039CE8);
PPC_FUNC_IMPL(__imp__sub_83039CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83039D04"))) PPC_WEAK_FUNC(sub_83039D04);
PPC_FUNC_IMPL(__imp__sub_83039D04) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039D08"))) PPC_WEAK_FUNC(sub_83039D08);
PPC_FUNC_IMPL(__imp__sub_83039D08) {
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
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm. r11,r11,24,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83039ef0
	if (cr0.eq) goto loc_83039EF0;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,-28568
	ctx.r4.s64 = r11.s64 + -28568;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83039ed8
	if (cr0.eq) goto loc_83039ED8;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,-28544
	ctx.r4.s64 = r11.s64 + -28544;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83039ed8
	if (cr0.eq) goto loc_83039ED8;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,-28612
	ctx.r4.s64 = r11.s64 + -28612;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83039ec8
	if (cr0.eq) goto loc_83039EC8;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,-28588
	ctx.r4.s64 = r11.s64 + -28588;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83039ec8
	if (cr0.eq) goto loc_83039EC8;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,-28688
	ctx.r4.s64 = r11.s64 + -28688;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83039ec8
	if (cr0.eq) goto loc_83039EC8;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,-28672
	ctx.r4.s64 = r11.s64 + -28672;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83039ec8
	if (cr0.eq) goto loc_83039EC8;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,-28660
	ctx.r4.s64 = r11.s64 + -28660;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83039ec8
	if (cr0.eq) goto loc_83039EC8;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,-28644
	ctx.r4.s64 = r11.s64 + -28644;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83039ec8
	if (cr0.eq) goto loc_83039EC8;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,-28624
	ctx.r4.s64 = r11.s64 + -28624;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83039ec8
	if (cr0.eq) goto loc_83039EC8;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,-28820
	ctx.r4.s64 = r11.s64 + -28820;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83039eb8
	if (cr0.eq) goto loc_83039EB8;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,-28796
	ctx.r4.s64 = r11.s64 + -28796;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83039eb8
	if (cr0.eq) goto loc_83039EB8;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,-28860
	ctx.r4.s64 = r11.s64 + -28860;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83039ea8
	if (cr0.eq) goto loc_83039EA8;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,-28836
	ctx.r4.s64 = r11.s64 + -28836;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83039ea8
	if (cr0.eq) goto loc_83039EA8;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,-28896
	ctx.r4.s64 = r11.s64 + -28896;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83039ea8
	if (cr0.eq) goto loc_83039EA8;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,-28884
	ctx.r4.s64 = r11.s64 + -28884;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83039ea8
	if (cr0.eq) goto loc_83039EA8;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,-28872
	ctx.r4.s64 = r11.s64 + -28872;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83039ef0
	if (!cr0.eq) goto loc_83039EF0;
loc_83039EA8:
	// lis r11,-32235
	r11.s64 = -2112552960;
	// addi r4,r11,-28500
	ctx.r4.s64 = r11.s64 + -28500;
loc_83039EB0:
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x83039ee8
	goto loc_83039EE8;
loc_83039EB8:
	// lis r11,-32235
	r11.s64 = -2112552960;
	// addi r11,r11,-28500
	r11.s64 = r11.s64 + -28500;
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// b 0x83039eb0
	goto loc_83039EB0;
loc_83039EC8:
	// lis r11,-32235
	r11.s64 = -2112552960;
	// addi r11,r11,-28500
	r11.s64 = r11.s64 + -28500;
	// addi r4,r11,-8
	ctx.r4.s64 = r11.s64 + -8;
	// b 0x83039ee4
	goto loc_83039EE4;
loc_83039ED8:
	// lis r11,-32235
	r11.s64 = -2112552960;
	// addi r11,r11,-28500
	r11.s64 = r11.s64 + -28500;
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
loc_83039EE4:
	// li r5,2
	ctx.r5.s64 = 2;
loc_83039EE8:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// bl 0x830871f0
	sub_830871F0(ctx, base);
loc_83039EF0:
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

__attribute__((alias("__imp__sub_83039F08"))) PPC_WEAK_FUNC(sub_83039F08);
PPC_FUNC_IMPL(__imp__sub_83039F08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32235
	r11.s64 = -2112552960;
	// addi r11,r11,-27952
	r11.s64 = r11.s64 + -27952;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039F18"))) PPC_WEAK_FUNC(sub_83039F18);
PPC_FUNC_IMPL(__imp__sub_83039F18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r11,-32235
	r11.s64 = -2112552960;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-27952
	r11.s64 = r11.s64 + -27952;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r5,4(r31)
	PPC_STORE_U8(r31.u32 + 4, ctx.r5.u8);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// stw r6,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r6.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
	// lwz r11,0(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// beq cr6,0x83039f8c
	if (cr6.eq) goto loc_83039F8C;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_83039F78:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stwx r29,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r29.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x83039f78
	if (!cr0.eq) goto loc_83039F78;
loc_83039F8C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83039F98"))) PPC_WEAK_FUNC(sub_83039F98);
PPC_FUNC_IMPL(__imp__sub_83039F98) {
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
	// li r11,-1
	r11.s64 = -1;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x83039850
	sub_83039850(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83039ff0
	if (cr0.eq) goto loc_83039FF0;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// lis r11,-32235
	r11.s64 = -2112552960;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r11,r11,-28920
	r11.s64 = r11.s64 + -28920;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// b 0x83039ff4
	goto loc_83039FF4;
loc_83039FF0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83039FF4:
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

__attribute__((alias("__imp__sub_8303A008"))) PPC_WEAK_FUNC(sub_8303A008);
PPC_FUNC_IMPL(__imp__sub_8303A008) {
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
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-1
	r11.s64 = -1;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x83039850
	sub_83039850(ctx, base);
	// lis r11,-32235
	r11.s64 = -2112552960;
	// clrlwi r24,r31,24
	r24.u64 = r31.u32 & 0xFF;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r11,-28920
	r31.s64 = r11.s64 + -28920;
	// cntlzw r11,r24
	r11.u64 = r24.u32 == 0 ? 32 : __builtin_clz(r24.u32);
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lbzx r11,r11,r31
	r11.u64 = PPC_LOAD_U8(r11.u32 + r31.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8303a1bc
	if (!cr0.eq) goto loc_8303A1BC;
	// addi r11,r31,316
	r11.s64 = r31.s64 + 316;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
loc_8303A068:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8303a068
	if (!cr0.eq) goto loc_8303A068;
	// addi r10,r31,316
	ctx.r10.s64 = r31.s64 + 316;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r26,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r26.s64 = r11.s32 >> 1;
	// beq cr6,0x8303a0bc
	if (cr6.eq) goto loc_8303A0BC;
	// lhz r11,0(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8303a0bc
	if (cr0.eq) goto loc_8303A0BC;
	// addi r11,r28,2
	r11.s64 = r28.s64 + 2;
	// b 0x8303a0a4
	goto loc_8303A0A4;
loc_8303A0A0:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
loc_8303A0A4:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8303a0a0
	if (!cr0.eq) goto loc_8303A0A0;
	// subf r11,r28,r11
	r11.s64 = r11.s64 - r28.s64;
	// srawi r27,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r27.s64 = r11.s32 >> 1;
	// b 0x8303a0c0
	goto loc_8303A0C0;
loc_8303A0BC:
	// li r27,0
	r27.s64 = 0;
loc_8303A0C0:
	// addi r11,r31,336
	r11.s64 = r31.s64 + 336;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
loc_8303A0C8:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8303a0c8
	if (!cr0.eq) goto loc_8303A0C8;
	// addi r9,r31,336
	ctx.r9.s64 = r31.s64 + 336;
	// addi r10,r31,392
	ctx.r10.s64 = r31.s64 + 392;
	// subf r9,r9,r11
	ctx.r9.s64 = r11.s64 - ctx.r9.s64;
	// addi r11,r10,2
	r11.s64 = ctx.r10.s64 + 2;
	// srawi r29,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	r29.s64 = ctx.r9.s32 >> 1;
loc_8303A0EC:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8303a0ec
	if (!cr0.eq) goto loc_8303A0EC;
	// addi r10,r31,392
	ctx.r10.s64 = r31.s64 + 392;
	// addi r4,r31,316
	ctx.r4.s64 = r31.s64 + 316;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// srawi r30,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r30.s64 = r11.s32 >> 1;
	// bl 0x82fd9eb0
	sub_82FD9EB0(ctx, base);
	// add r11,r30,r29
	r11.u64 = r30.u64 + r29.u64;
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(r11.u32, 256, xer);
	// bge cr6,0x8303a138
	if (!cr6.lt) goto loc_8303A138;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82fd9be0
	sub_82FD9BE0(ctx, base);
	// b 0x8303a174
	goto loc_8303A174;
loc_8303A138:
	// addi r11,r31,316
	r11.s64 = r31.s64 + 316;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
loc_8303A140:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8303a140
	if (!cr0.eq) goto loc_8303A140;
	// addi r9,r31,316
	ctx.r9.s64 = r31.s64 + 316;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// li r5,200
	ctx.r5.s64 = 200;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82fd9ef0
	sub_82FD9EF0(ctx, base);
loc_8303A174:
	// addi r4,r31,336
	ctx.r4.s64 = r31.s64 + 336;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82fd9be0
	sub_82FD9BE0(ctx, base);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// addi r4,r31,376
	ctx.r4.s64 = r31.s64 + 376;
	// bne cr6,0x8303a190
	if (!cr6.eq) goto loc_8303A190;
	// addi r4,r31,392
	ctx.r4.s64 = r31.s64 + 392;
loc_8303A190:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82fd9be0
	sub_82FD9BE0(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,9
	ctx.r4.s64 = 9;
	// lwz r6,52(r25)
	ctx.r6.u64 = PPC_LOAD_U32(r25.u32 + 52);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83002050
	sub_83002050(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-8296
	ctx.r4.s64 = r11.s64 + -8296;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_8303A1BC:
	// li r11,1
	r11.s64 = 1;
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// slw r11,r11,r9
	r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r9.u8 & 0x3F));
	// beq cr6,0x8303a1d8
	if (cr6.eq) goto loc_8303A1D8;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// b 0x8303a1dc
	goto loc_8303A1DC;
loc_8303A1D8:
	// andc r11,r10,r11
	r11.u64 = ctx.r10.u64 & ~r11.u64;
loc_8303A1DC:
	// stw r11,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r11.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x8303a1fc
	if (!cr6.eq) goto loc_8303A1FC;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x8303a218
	if (cr6.eq) goto loc_8303A218;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// rlwinm r11,r11,0,29,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r11,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r11.u32);
loc_8303A1FC:
	// cmpwi cr6,r9,3
	cr6.compare<int32_t>(ctx.r9.s32, 3, xer);
	// bne cr6,0x8303a218
	if (!cr6.eq) goto loc_8303A218;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x8303a218
	if (cr6.eq) goto loc_8303A218;
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r11.u32);
loc_8303A218:
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_8303A220"))) PPC_WEAK_FUNC(sub_8303A220);
PPC_FUNC_IMPL(__imp__sub_8303A220) {
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
	// li r11,-1
	r11.s64 = -1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x83039850
	sub_83039850(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,1
	r11.s64 = 1;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// slw r11,r11,r9
	r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r9.u8 & 0x3F));
	// and r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_8303A288"))) PPC_WEAK_FUNC(sub_8303A288);
PPC_FUNC_IMPL(__imp__sub_8303A288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x831b0b14
	// addi r31,r1,-304
	r31.s64 = ctx.r1.s64 + -304;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r30,324(r31)
	PPC_STORE_U32(r31.u32 + 324, r30.u32);
	// stw r23,340(r31)
	PPC_STORE_U32(r31.u32 + 340, r23.u32);
	// beq cr6,0x8303a2f4
	if (cr6.eq) goto loc_8303A2F4;
	// lhz r11,0(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8303a2f4
	if (cr0.eq) goto loc_8303A2F4;
	// addi r11,r4,2
	r11.s64 = ctx.r4.s64 + 2;
	// b 0x8303a2d8
	goto loc_8303A2D8;
loc_8303A2D4:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
loc_8303A2D8:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8303a2d4
	if (!cr0.eq) goto loc_8303A2D4;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// li r27,0
	r27.s64 = 0;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// b 0x8303a2fc
	goto loc_8303A2FC;
loc_8303A2F4:
	// li r27,0
	r27.s64 = 0;
	// mr r11,r27
	r11.u64 = r27.u64;
loc_8303A2FC:
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,38
	ctx.r10.s64 = 38;
	// add r25,r11,r4
	r25.u64 = r11.u64 + ctx.r4.u64;
	// li r11,35
	r11.s64 = 35;
	// sth r10,160(r31)
	PPC_STORE_U16(r31.u32 + 160, ctx.r10.u16);
	// sth r11,162(r31)
	PPC_STORE_U16(r31.u32 + 162, r11.u16);
	// li r11,120
	r11.s64 = 120;
	// sth r11,164(r31)
	PPC_STORE_U16(r31.u32 + 164, r11.u16);
	// lis r11,-32235
	r11.s64 = -2112552960;
	// addi r26,r11,-28732
	r26.s64 = r11.s64 + -28732;
loc_8303A324:
	// cmplw cr6,r29,r25
	cr6.compare<uint32_t>(r29.u32, r25.u32, xer);
	// bge cr6,0x8303a4c0
	if (!cr6.lt) goto loc_8303A4C0;
	// mr r28,r29
	r28.u64 = r29.u64;
loc_8303A330:
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lhz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U16(r28.u32 + 0);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8303a360
	if (cr0.eq) goto loc_8303A360;
	// addi r28,r28,2
	r28.s64 = r28.s64 + 2;
	// cmplw cr6,r28,r25
	cr6.compare<uint32_t>(r28.u32, r25.u32, xer);
	// blt cr6,0x8303a330
	if (cr6.lt) goto loc_8303A330;
loc_8303A360:
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(r28.u32, r29.u32, xer);
	// ble cr6,0x8303a3f4
	if (!cr6.gt) goto loc_8303A3F4;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm. r11,r11,29,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8303a38c
	if (cr0.eq) goto loc_8303A38C;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// stw r11,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r11.u32);
	// bl 0x83087588
	sub_83087588(ctx, base);
loc_8303A38C:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83039c60
	sub_83039C60(ctx, base);
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// stw r27,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r27.u32);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// addi r4,r26,-20
	ctx.r4.s64 = r26.s64 + -20;
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// bl 0x83087588
	sub_83087588(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// subf r11,r29,r28
	r11.s64 = r28.s64 - r29.s64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// li r6,0
	ctx.r6.s64 = 0;
	// srawi r5,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r5.s64 = r11.s32 >> 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x830873c0
	sub_830873C0(ctx, base);
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// stw r27,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r27.u32);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// bl 0x83087588
	sub_83087588(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r28
	r29.u64 = r28.u64;
	// b 0x8303a324
	goto loc_8303A324;
loc_8303A3F4:
	// li r6,23
	ctx.r6.s64 = 23;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83039b20
	sub_83039B20(ctx, base);
loc_8303A408:
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r7,52(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// li r5,8
	ctx.r5.s64 = 8;
	// lhz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// addi r4,r31,166
	ctx.r4.s64 = r31.s64 + 166;
	// bl 0x82fd9bb8
	sub_82FD9BB8(ctx, base);
	// lhz r11,160(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 160);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8303a458
	if (cr0.eq) goto loc_8303A458;
	// lhz r10,162(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 162);
	// addi r11,r31,162
	r11.s64 = r31.s64 + 162;
	// b 0x8303a440
	goto loc_8303A440;
loc_8303A438:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
loc_8303A440:
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8303a438
	if (!cr0.eq) goto loc_8303A438;
	// addi r10,r31,160
	ctx.r10.s64 = r31.s64 + 160;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r10,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r10.s64 = r11.s32 >> 1;
	// b 0x8303a45c
	goto loc_8303A45C;
loc_8303A458:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_8303A45C:
	// rlwinm r11,r10,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// addi r9,r31,160
	ctx.r9.s64 = r31.s64 + 160;
	// li r8,59
	ctx.r8.s64 = 59;
	// addi r28,r31,162
	r28.s64 = r31.s64 + 162;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// sthx r8,r11,r9
	PPC_STORE_U16(r11.u32 + ctx.r9.u32, ctx.r8.u16);
	// sthx r27,r11,r28
	PPC_STORE_U16(r11.u32 + r28.u32, r27.u16);
	// bl 0x830873c0
	sub_830873C0(ctx, base);
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lhz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8303a324
	if (!cr0.eq) goto loc_8303A324;
	// cmplw cr6,r29,r25
	cr6.compare<uint32_t>(r29.u32, r25.u32, xer);
	// blt cr6,0x8303a408
	if (cr6.lt) goto loc_8303A408;
	// b 0x8303a324
	goto loc_8303A324;
loc_8303A4C0:
	// addi r1,r31,304
	ctx.r1.s64 = r31.s64 + 304;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_8303A4D0"))) PPC_WEAK_FUNC(sub_8303A4D0);
PPC_FUNC_IMPL(__imp__sub_8303A4D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-304
	r31.s64 = r12.s64 + -304;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,84(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,340(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 340);
	// lwz r3,324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 324);
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x83039a20
	sub_83039A20(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82fe13c8
	sub_82FE13C8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// addi r4,r11,-8012
	ctx.r4.s64 = r11.s64 + -8012;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r11,r11,-5200
	r11.s64 = r11.s64 + -5200;
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_8303A528"))) PPC_WEAK_FUNC(sub_8303A528);
PPC_FUNC_IMPL(__imp__sub_8303A528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-304
	r31.s64 = r12.s64 + -304;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,80(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,340(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 340);
	// lwz r3,324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 324);
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x83039a20
	sub_83039A20(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82fe13c8
	sub_82FE13C8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,-8012
	ctx.r4.s64 = r11.s64 + -8012;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r11,r11,-5200
	r11.s64 = r11.s64 + -5200;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_8303A580"))) PPC_WEAK_FUNC(sub_8303A580);
PPC_FUNC_IMPL(__imp__sub_8303A580) {
	PPC_FUNC_PROLOGUE();
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// lis r11,-32235
	r11.s64 = -2112552960;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// stw r4,52(r30)
	PPC_STORE_U32(r30.u32 + 52, ctx.r4.u32);
	// li r29,0
	r29.s64 = 0;
	// addi r11,r11,-28456
	r11.s64 = r11.s64 + -28456;
	// addi r10,r10,-28992
	ctx.r10.s64 = ctx.r10.s64 + -28992;
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r29,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r29.u32);
	// stw r29,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r29.u32);
	// stw r29,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r29.u32);
	// stw r10,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r10.u32);
	// stw r29,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r29.u32);
	// stw r29,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r29.u32);
	// stw r29,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r29.u32);
	// stw r29,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r29.u32);
	// stw r29,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r29.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// stw r29,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r29.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// beq 0x8303a61c
	if (cr0.eq) goto loc_8303A61C;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,52(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83039f18
	sub_83039F18(ctx, base);
	// lis r11,-32235
	r11.s64 = -2112552960;
	// mr r29,r28
	r29.u64 = r28.u64;
	// addi r11,r11,-27672
	r11.s64 = r11.s64 + -27672;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
loc_8303A61C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r10,339
	ctx.r10.s64 = 339;
	// stw r29,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r29.u32);
	// rlwimi r11,r10,1,22,31
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x3FF) | (r11.u64 & 0xFFFFFFFFFFFFFC00);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8303A63C"))) PPC_WEAK_FUNC(sub_8303A63C);
PPC_FUNC_IMPL(__imp__sub_8303A63C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// bl 0x83039330
	sub_83039330(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A664"))) PPC_WEAK_FUNC(sub_8303A664);
PPC_FUNC_IMPL(__imp__sub_8303A664) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// lwz r4,52(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A6A0"))) PPC_WEAK_FUNC(sub_8303A6A0);
PPC_FUNC_IMPL(__imp__sub_8303A6A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	uint32_t ea{};
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x831b0b08
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// stw r29,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r29.u32);
	// stw r21,260(r31)
	PPC_STORE_U32(r31.u32 + 260, r21.u32);
	// beq cr6,0x8303a70c
	if (cr6.eq) goto loc_8303A70C;
	// lhz r11,0(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8303a70c
	if (cr0.eq) goto loc_8303A70C;
	// addi r11,r28,2
	r11.s64 = r28.s64 + 2;
	// b 0x8303a6f0
	goto loc_8303A6F0;
loc_8303A6EC:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
loc_8303A6F0:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8303a6ec
	if (!cr0.eq) goto loc_8303A6EC;
	// subf r11,r28,r11
	r11.s64 = r11.s64 - r28.s64;
	// li r23,0
	r23.s64 = 0;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// b 0x8303a714
	goto loc_8303A714;
loc_8303A70C:
	// li r23,0
	r23.s64 = 0;
	// mr r11,r23
	r11.u64 = r23.u64;
loc_8303A714:
	// lis r27,-31942
	r27.s64 = -2093350912;
	// lwz r3,52(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// mr r24,r11
	r24.u64 = r11.u64;
	// lwz r10,-15712(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + -15712);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r10,1
	r11.s64 = ctx.r10.s64 + 1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82fd9eb0
	sub_82FD9EB0(ctx, base);
	// lis r11,-32235
	r11.s64 = -2112552960;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r26,r11,-28752
	r26.s64 = r11.s64 + -28752;
	// addi r4,r26,20
	ctx.r4.s64 = r26.s64 + 20;
	// bl 0x82fd9be0
	sub_82FD9BE0(ctx, base);
	// lwz r11,52(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// mr r25,r23
	r25.u64 = r23.u64;
	// li r22,1
	r22.s64 = 1;
loc_8303A774:
	// clrlwi. r11,r22,24
	r11.u64 = r22.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8303a878
	if (cr0.eq) goto loc_8303A878;
	// addi r4,r26,20
	ctx.r4.s64 = r26.s64 + 20;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fda038
	sub_82FDA038(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(r28.s32, -1, xer);
	// beq cr6,0x8303a7d8
	if (cr6.eq) goto loc_8303A7D8;
	// lwz r11,-15712(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -15712);
	// rlwinm r9,r28,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r28,r24
	cr6.compare<int32_t>(r28.s32, r24.s32, xer);
	// add r10,r11,r28
	ctx.r10.u64 = r11.u64 + r28.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r23,r9,r30
	PPC_STORE_U16(ctx.r9.u32 + r30.u32, r23.u16);
	// add r25,r10,r30
	r25.u64 = ctx.r10.u64 + r30.u64;
	// beq cr6,0x8303a7cc
	if (cr6.eq) goto loc_8303A7CC;
	// li r6,22
	ctx.r6.s64 = 22;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83039b20
	sub_83039B20(ctx, base);
	// lwz r11,-15712(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -15712);
loc_8303A7CC:
	// subf r11,r11,r24
	r11.s64 = r24.s64 - r11.s64;
	// subf r24,r28,r11
	r24.s64 = r11.s64 - r28.s64;
	// b 0x8303a7dc
	goto loc_8303A7DC;
loc_8303A7D8:
	// mr r22,r23
	r22.u64 = r23.u64;
loc_8303A7DC:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bne cr6,0x8303a840
	if (!cr6.eq) goto loc_8303A840;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// rlwinm. r11,r11,29,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8303a808
	if (cr0.eq) goto loc_8303A808;
	// lwz r11,44(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// lwz r4,32(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// stw r11,44(r29)
	PPC_STORE_U32(r29.u32 + 44, r11.u32);
	// bl 0x83087588
	sub_83087588(ctx, base);
loc_8303A808:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83039c60
	sub_83039C60(ctx, base);
	// lwz r11,36(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// stw r23,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r23.u32);
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r23.u32);
	// bl 0x83087588
	sub_83087588(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r4,r26,20
	ctx.r4.s64 = r26.s64 + 20;
	// bl 0x83087588
	sub_83087588(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8303a854
	goto loc_8303A854;
loc_8303A840:
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8303a288
	sub_8303A288(ctx, base);
loc_8303A854:
	// clrlwi. r11,r22,24
	r11.u64 = r22.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8303a774
	if (cr0.eq) goto loc_8303A774;
	// lwz r11,-15712(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -15712);
	// li r10,93
	ctx.r10.s64 = 93;
	// mr r30,r25
	r30.u64 = r25.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r11,r25
	r11.s64 = r25.s64 - r11.s64;
	// sth r10,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r10.u16);
	// b 0x8303a774
	goto loc_8303A774;
loc_8303A878:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82fdae08
	sub_82FDAE08(ctx, base);
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// b 0x831b0b58
	return;
}

__attribute__((alias("__imp__sub_8303A894"))) PPC_WEAK_FUNC(sub_8303A894);
PPC_FUNC_IMPL(__imp__sub_8303A894) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-224
	r31.s64 = r12.s64 + -224;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,80(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// lwz r3,244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x83039a20
	sub_83039A20(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82fe13c8
	sub_82FE13C8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,-8012
	ctx.r4.s64 = r11.s64 + -8012;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r11,r11,-5200
	r11.s64 = r11.s64 + -5200;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_8303A8E4"))) PPC_WEAK_FUNC(sub_8303A8E4);
PPC_FUNC_IMPL(__imp__sub_8303A8E4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-224
	r31.s64 = r12.s64 + -224;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82fdb1a0
	sub_82FDB1A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

