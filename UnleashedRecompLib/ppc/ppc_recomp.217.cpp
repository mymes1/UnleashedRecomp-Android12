#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83070C40"))) PPC_WEAK_FUNC(sub_83070C40);
PPC_FUNC_IMPL(__imp__sub_83070C40) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r26,12(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r26,1,0,30
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r24,8(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r25,0
	r25.s64 = 0;
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// mr r11,r25
	r11.u64 = r25.u64;
	// ble cr6,0x83070cb0
	if (!cr6.gt) goto loc_83070CB0;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_83070C94:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwx r25,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r25.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83070c94
	if (cr6.lt) goto loc_83070C94;
loc_83070CB0:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x83070d34
	if (cr6.eq) goto loc_83070D34;
	// mr r27,r24
	r27.u64 = r24.u64;
loc_83070CBC:
	// lwz r30,0(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x83070d24
	if (cr0.eq) goto loc_83070D24;
loc_83070CC8:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r28,0(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bgt cr6,0x83070d54
	if (cr6.gt) goto loc_83070D54;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stwx r9,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// bne cr6,0x83070cc8
	if (!cr6.eq) goto loc_83070CC8;
loc_83070D24:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmplw cr6,r25,r26
	cr6.compare<uint32_t>(r25.u32, r26.u32, xer);
	// blt cr6,0x83070cbc
	if (cr6.lt) goto loc_83070CBC;
loc_83070D34:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b68
	return;
loc_83070D54:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,49
	ctx.r6.s64 = 49;
	// addi r4,r11,-13408
	ctx.r4.s64 = r11.s64 + -13408;
	// li r5,480
	ctx.r5.s64 = 480;
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
}

__attribute__((alias("__imp__sub_83070D88"))) PPC_WEAK_FUNC(sub_83070D88);
PPC_FUNC_IMPL(__imp__sub_83070D88) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x83070dfc
	if (cr6.eq) goto loc_83070DFC;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83070dfc
	if (cr0.eq) goto loc_83070DFC;
	// lwz r3,56(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83070dc8
	if (cr0.eq) goto loc_83070DC8;
	// bl 0x83070750
	sub_83070750(ctx, base);
	// b 0x83070e1c
	goto loc_83070E1C;
loc_83070DC8:
	// lwz r4,32(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r4,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r4.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83070df0
	if (cr0.eq) goto loc_83070DF0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83070688
	sub_83070688(ctx, base);
	// b 0x83070df4
	goto loc_83070DF4;
loc_83070DF0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83070DF4:
	// stw r3,56(r29)
	PPC_STORE_U32(r29.u32 + 56, ctx.r3.u32);
	// b 0x83070e1c
	goto loc_83070E1C;
loc_83070DFC:
	// lwz r11,56(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83070e1c
	if (cr0.eq) goto loc_83070E1C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83070e1c
	if (cr6.eq) goto loc_83070E1C;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_83070E1C:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83070E24"))) PPC_WEAK_FUNC(sub_83070E24);
PPC_FUNC_IMPL(__imp__sub_83070E24) {
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

__attribute__((alias("__imp__sub_83070E50"))) PPC_WEAK_FUNC(sub_83070E50);
PPC_FUNC_IMPL(__imp__sub_83070E50) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r11,40(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83070e78
	if (cr0.eq) goto loc_83070E78;
	// lwz r30,8(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x83070e7c
	goto loc_83070E7C;
loc_83070E78:
	// li r30,0
	r30.s64 = 0;
loc_83070E7C:
	// li r3,0
	ctx.r3.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x83070eb0
	if (cr0.eq) goto loc_83070EB0;
loc_83070E8C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// bl 0x83020000
	sub_83020000(ctx, base);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// beq cr6,0x83070eb0
	if (cr6.eq) goto loc_83070EB0;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// blt cr6,0x83070e8c
	if (cr6.lt) goto loc_83070E8C;
loc_83070EB0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83070EB8"))) PPC_WEAK_FUNC(sub_83070EB8);
PPC_FUNC_IMPL(__imp__sub_83070EB8) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwz r28,8(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// beq 0x83070f04
	if (cr0.eq) goto loc_83070F04;
loc_83070EE0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x83020000
	sub_83020000(ctx, base);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// beq cr6,0x83070f10
	if (cr6.eq) goto loc_83070F10;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// blt cr6,0x83070ee0
	if (cr6.lt) goto loc_83070EE0;
loc_83070F04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83070F08:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_83070F10:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83070f08
	goto loc_83070F08;
}

__attribute__((alias("__imp__sub_83070F18"))) PPC_WEAK_FUNC(sub_83070F18);
PPC_FUNC_IMPL(__imp__sub_83070F18) {
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
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-7008
	ctx.r5.s64 = r11.s64 + -7008;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83070f70
	if (cr0.eq) goto loc_83070F70;
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83070f70
	if (!cr0.eq) goto loc_83070F70;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,155
	ctx.r6.s64 = 155;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
loc_83070F70:
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

__attribute__((alias("__imp__sub_83070F90"))) PPC_WEAK_FUNC(sub_83070F90);
PPC_FUNC_IMPL(__imp__sub_83070F90) {
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
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// addi r27,r28,224
	r27.s64 = r28.s64 + 224;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// stw r28,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r28.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// bl 0x830a7f60
	sub_830A7F60(ctx, base);
	// li r19,0
	r19.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// mr r22,r19
	r22.u64 = r19.u64;
	// bl 0x830a72e0
	sub_830A72E0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x83071324
	if (cr0.eq) goto loc_83071324;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r26,r11,-28032
	r26.s64 = r11.s64 + -28032;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r24,r11,-8296
	r24.s64 = r11.s64 + -8296;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r25,r11,-8420
	r25.s64 = r11.s64 + -8420;
loc_83070FFC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
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
	// beq 0x83071080
	if (cr0.eq) goto loc_83071080;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x83071078
	if (cr0.eq) goto loc_83071078;
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
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x83071078
	if (!cr6.eq) goto loc_83071078;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,156(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 156);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
loc_83071078:
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x830710ec
	goto loc_830710EC;
loc_83071080:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83071108
	if (cr0.eq) goto loc_83071108;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x830710e8
	if (cr0.eq) goto loc_830710E8;
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
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x830710e8
	if (!cr6.eq) goto loc_830710E8;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,156(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 156);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
loc_830710E8:
	// li r5,14
	ctx.r5.s64 = 14;
loc_830710EC:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x830a7f60
	sub_830A7F60(ctx, base);
	// b 0x8307111c
	goto loc_8307111C;
loc_83071108:
	// li r6,161
	ctx.r6.s64 = 161;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
loc_8307111C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830a7430
	sub_830A7430(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x83070ffc
	if (!cr0.eq) goto loc_83070FFC;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x83071324
	if (cr6.eq) goto loc_83071324;
	// lwz r23,4(r20)
	r23.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// cmplwi r23,0
	cr0.compare<uint32_t>(r23.u32, 0, xer);
	// beq 0x830712cc
	if (cr0.eq) goto loc_830712CC;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// addi r4,r11,-8488
	ctx.r4.s64 = r11.s64 + -8488;
	// bl 0x82fda038
	sub_82FDA038(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x83071324
	if (cr6.eq) goto loc_83071324;
	// addi r30,r28,60
	r30.s64 = r28.s64 + 60;
	// addi r25,r3,10
	r25.s64 = ctx.r3.s64 + 10;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r19,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r19.u32);
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// mr r27,r19
	r27.u64 = r19.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x83071274
	if (cr6.eq) goto loc_83071274;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r24,r11,-27800
	r24.s64 = r11.s64 + -27800;
loc_83071188:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8308ea58
	sub_8308EA58(ctx, base);
	// lwz r29,0(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r26,0(r21)
	r26.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,188(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 188);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83071268
	if (cr0.eq) goto loc_83071268;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// li r4,61
	ctx.r4.s64 = 61;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x830705c8
	sub_830705C8(ctx, base);
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
loc_83071268:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmplw cr6,r27,r23
	cr6.compare<uint32_t>(r27.u32, r23.u32, xer);
	// blt cr6,0x83071188
	if (cr6.lt) goto loc_83071188;
loc_83071274:
	// rlwinm r11,r25,1,0,30
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r4,r11,r22
	ctx.r4.u64 = r11.u64 + r22.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// li r3,44
	ctx.r3.s64 = 44;
	// lwz r4,216(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830712c0
	if (cr0.eq) goto loc_830712C0;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r19,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r19.u16);
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r5,216(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 216);
	// bl 0x83048dc0
	sub_83048DC0(ctx, base);
	// b 0x830712c4
	goto loc_830712C4;
loc_830712C0:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
loc_830712C4:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x830712fc
	goto loc_830712FC;
loc_830712CC:
	// li r3,44
	ctx.r3.s64 = 44;
	// lwz r4,216(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830712f4
	if (cr0.eq) goto loc_830712F4;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r5,216(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 216);
	// bl 0x83048dc0
	sub_83048DC0(ctx, base);
	// b 0x830712f8
	goto loc_830712F8;
loc_830712F4:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
loc_830712F8:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_830712FC:
	// lwz r11,68(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 68);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,64(r21)
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + 64);
	// stw r11,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r11.u32);
	// stw r10,36(r30)
	PPC_STORE_U32(r30.u32 + 36, ctx.r10.u32);
	// lwz r11,120(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 120);
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// bl 0x83049088
	sub_83049088(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x83071328
	goto loc_83071328;
loc_83071324:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83071328:
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x831b0b50
	return;
}

__attribute__((alias("__imp__sub_83071330"))) PPC_WEAK_FUNC(sub_83071330);
PPC_FUNC_IMPL(__imp__sub_83071330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
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

__attribute__((alias("__imp__sub_83071360"))) PPC_WEAK_FUNC(sub_83071360);
PPC_FUNC_IMPL(__imp__sub_83071360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
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

__attribute__((alias("__imp__sub_83071390"))) PPC_WEAK_FUNC(sub_83071390);
PPC_FUNC_IMPL(__imp__sub_83071390) {
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
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// addi r5,r11,-7200
	ctx.r5.s64 = r11.s64 + -7200;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r30
	r29.u64 = r30.u64;
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r11,220(r31)
	PPC_STORE_U32(r31.u32 + 220, r11.u32);
	// bne cr6,0x8307140c
	if (!cr6.eq) goto loc_8307140C;
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83071404
	if (!cr0.eq) goto loc_83071404;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_830713E0:
	// li r6,34
	ctx.r6.s64 = 34;
loc_830713E4:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
loc_83071404:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830714a8
	goto loc_830714A8;
loc_8307140C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r28,r11,-8488
	r28.s64 = r11.s64 + -8488;
	// lwz r11,92(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830714a4
	if (cr0.eq) goto loc_830714A4;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,160(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83070f90
	sub_83070F90(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,220(r31)
	PPC_STORE_U32(r31.u32 + 220, r11.u32);
	// bl 0x830a7430
	sub_830A7430(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x83071474
	if (!cr0.eq) goto loc_83071474;
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83071404
	if (!cr0.eq) goto loc_83071404;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// b 0x830713e0
	goto loc_830713E0;
loc_83071474:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830714a4
	if (cr0.eq) goto loc_830714A4;
	// li r6,68
	ctx.r6.s64 = 68;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// b 0x830713e4
	goto loc_830713E4;
loc_830714A4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_830714A8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_830714B0"))) PPC_WEAK_FUNC(sub_830714B0);
PPC_FUNC_IMPL(__imp__sub_830714B0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// bl 0x830a1df8
	sub_830A1DF8(ctx, base);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,36(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307150c
	if (cr0.eq) goto loc_8307150C;
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83071550
	if (!cr0.eq) goto loc_83071550;
loc_8307150C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x83071550
	if (cr6.eq) goto loc_83071550;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83071550
	if (cr0.eq) goto loc_83071550;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,37
	ctx.r6.s64 = 37;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r3,r11,-27800
	ctx.r3.s64 = r11.s64 + -27800;
loc_83071550:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83071558"))) PPC_WEAK_FUNC(sub_83071558);
PPC_FUNC_IMPL(__imp__sub_83071558) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// bl 0x830a1df8
	sub_830A1DF8(ctx, base);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,36(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830715b0
	if (cr0.eq) goto loc_830715B0;
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830715f4
	if (!cr0.eq) goto loc_830715F4;
loc_830715B0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x830715f4
	if (cr6.eq) goto loc_830715F4;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830715f4
	if (cr0.eq) goto loc_830715F4;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,37
	ctx.r6.s64 = 37;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r3,r11,-27800
	ctx.r3.s64 = r11.s64 + -27800;
loc_830715F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83071608"))) PPC_WEAK_FUNC(sub_83071608);
PPC_FUNC_IMPL(__imp__sub_83071608) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi. r11,r6,24
	r11.u64 = ctx.r6.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// beq 0x8307163c
	if (cr0.eq) goto loc_8307163C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r5,r11,-7432
	ctx.r5.s64 = r11.s64 + -7432;
	// b 0x83071644
	goto loc_83071644;
loc_8307163C:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r5,r11,-7444
	ctx.r5.s64 = r11.s64 + -7444;
loc_83071644:
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x830717c0
	if (cr6.eq) goto loc_830717C0;
	// lhz r11,0(r26)
	r11.u64 = PPC_LOAD_U16(r26.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830717c0
	if (cr0.eq) goto loc_830717C0;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r25,0
	r25.s64 = 0;
	// addi r4,r11,-6824
	ctx.r4.s64 = r11.s64 + -6824;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83071680
	if (cr0.eq) goto loc_83071680;
	// li r3,7
	ctx.r3.s64 = 7;
	// b 0x830717c8
	goto loc_830717C8;
loc_83071680:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r5,216(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 216);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8303c918
	sub_8303C918(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8303c8e0
	sub_8303C8E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830717a0
	if (cr0.eq) goto loc_830717A0;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r24,r11,-6496
	r24.s64 = r11.s64 + -6496;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r23,r11,-6728
	r23.s64 = r11.s64 + -6728;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r30,r11,-28032
	r30.s64 = r11.s64 + -28032;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r22,r11,-6272
	r22.s64 = r11.s64 + -6272;
loc_830716C0:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8303cc60
	sub_8303CC60(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830716fc
	if (cr0.eq) goto loc_830716FC;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// bne cr6,0x830716fc
	if (!cr6.eq) goto loc_830716FC;
	// clrlwi. r11,r25,31
	r11.u64 = r25.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830716f4
	if (!cr0.eq) goto loc_830716F4;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// b 0x83071788
	goto loc_83071788;
loc_830716F4:
	// li r6,70
	ctx.r6.s64 = 70;
	// b 0x83071750
	goto loc_83071750;
loc_830716FC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83071728
	if (cr0.eq) goto loc_83071728;
	// rlwinm. r11,r25,0,30,30
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83071720
	if (!cr0.eq) goto loc_83071720;
	// addi r25,r25,2
	r25.s64 = r25.s64 + 2;
	// b 0x83071788
	goto loc_83071788;
loc_83071720:
	// li r6,72
	ctx.r6.s64 = 72;
	// b 0x83071750
	goto loc_83071750;
loc_83071728:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83071764
	if (cr0.eq) goto loc_83071764;
	// rlwinm. r11,r25,0,29,29
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8307174c
	if (!cr0.eq) goto loc_8307174C;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// b 0x83071788
	goto loc_83071788;
loc_8307174C:
	// li r6,74
	ctx.r6.s64 = 74;
loc_83071750:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
	// b 0x83071788
	goto loc_83071788;
loc_83071764:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,75
	ctx.r6.s64 = 75;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
loc_83071788:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8303c8e0
	sub_8303C8E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830716c0
	if (!cr0.eq) goto loc_830716C0;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// bne cr6,0x830717ac
	if (!cr6.eq) goto loc_830717AC;
loc_830717A0:
	// lwz r11,120(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 120);
	// lwz r30,4(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x830717b0
	goto loc_830717B0;
loc_830717AC:
	// mr r30,r25
	r30.u64 = r25.u64;
loc_830717B0:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8303c8d8
	sub_8303C8D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x830717c8
	goto loc_830717C8;
loc_830717C0:
	// lwz r11,120(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 120);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
loc_830717C8:
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_830717D0"))) PPC_WEAK_FUNC(sub_830717D0);
PPC_FUNC_IMPL(__imp__sub_830717D0) {
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
	// bl 0x8303c8d8
	sub_8303C8D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071800"))) PPC_WEAK_FUNC(sub_83071800);
PPC_FUNC_IMPL(__imp__sub_83071800) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b08
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi. r11,r6,24
	r11.u64 = ctx.r6.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// beq 0x83071834
	if (cr0.eq) goto loc_83071834;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r5,r11,-7300
	ctx.r5.s64 = r11.s64 + -7300;
	// b 0x8307183c
	goto loc_8307183C;
loc_83071834:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r5,r11,-7312
	ctx.r5.s64 = r11.s64 + -7312;
loc_8307183C:
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x830719fc
	if (cr6.eq) goto loc_830719FC;
	// lhz r11,0(r26)
	r11.u64 = PPC_LOAD_U16(r26.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830719fc
	if (cr0.eq) goto loc_830719FC;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r25,0
	r25.s64 = 0;
	// addi r4,r11,-6824
	ctx.r4.s64 = r11.s64 + -6824;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83071878
	if (cr0.eq) goto loc_83071878;
	// li r3,30
	ctx.r3.s64 = 30;
	// b 0x83071a04
	goto loc_83071A04;
loc_83071878:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r5,216(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 216);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8303c918
	sub_8303C918(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8303c8e0
	sub_8303C8E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830719dc
	if (cr0.eq) goto loc_830719DC;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r24,r11,-6496
	r24.s64 = r11.s64 + -6496;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r23,r11,-7696
	r23.s64 = r11.s64 + -7696;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r22,r11,-6728
	r22.s64 = r11.s64 + -6728;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r29,r11,-28032
	r29.s64 = r11.s64 + -28032;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r21,r11,-7708
	r21.s64 = r11.s64 + -7708;
loc_830718C0:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8303cc60
	sub_8303CC60(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830718fc
	if (cr0.eq) goto loc_830718FC;
	// cmpwi cr6,r20,2
	cr6.compare<int32_t>(r20.s32, 2, xer);
	// bne cr6,0x830718fc
	if (!cr6.eq) goto loc_830718FC;
	// rlwinm. r11,r25,0,27,27
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830718f4
	if (!cr0.eq) goto loc_830718F4;
	// addi r25,r25,16
	r25.s64 = r25.s64 + 16;
	// b 0x830719c4
	goto loc_830719C4;
loc_830718F4:
	// li r6,71
	ctx.r6.s64 = 71;
	// b 0x8307198c
	goto loc_8307198C;
loc_830718FC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83071930
	if (cr0.eq) goto loc_83071930;
	// cmpwi cr6,r20,2
	cr6.compare<int32_t>(r20.s32, 2, xer);
	// beq cr6,0x83071930
	if (cr6.eq) goto loc_83071930;
	// rlwinm. r11,r25,0,30,30
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83071928
	if (!cr0.eq) goto loc_83071928;
	// addi r25,r25,2
	r25.s64 = r25.s64 + 2;
	// b 0x830719c4
	goto loc_830719C4;
loc_83071928:
	// li r6,72
	ctx.r6.s64 = 72;
	// b 0x8307198c
	goto loc_8307198C;
loc_83071930:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83071964
	if (cr0.eq) goto loc_83071964;
	// cmpwi cr6,r20,2
	cr6.compare<int32_t>(r20.s32, 2, xer);
	// bne cr6,0x83071964
	if (!cr6.eq) goto loc_83071964;
	// rlwinm. r11,r25,0,28,28
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8307195c
	if (!cr0.eq) goto loc_8307195C;
	// addi r25,r25,8
	r25.s64 = r25.s64 + 8;
	// b 0x830719c4
	goto loc_830719C4;
loc_8307195C:
	// li r6,73
	ctx.r6.s64 = 73;
	// b 0x8307198c
	goto loc_8307198C;
loc_83071964:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830719a0
	if (cr0.eq) goto loc_830719A0;
	// rlwinm. r11,r25,0,29,29
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83071988
	if (!cr0.eq) goto loc_83071988;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// b 0x830719c4
	goto loc_830719C4;
loc_83071988:
	// li r6,74
	ctx.r6.s64 = 74;
loc_8307198C:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
	// b 0x830719c4
	goto loc_830719C4;
loc_830719A0:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,76
	ctx.r6.s64 = 76;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
loc_830719C4:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8303c8e0
	sub_8303C8E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830718c0
	if (!cr0.eq) goto loc_830718C0;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// bne cr6,0x830719e8
	if (!cr6.eq) goto loc_830719E8;
loc_830719DC:
	// lwz r11,120(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 120);
	// lwz r30,8(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x830719ec
	goto loc_830719EC;
loc_830719E8:
	// mr r30,r25
	r30.u64 = r25.u64;
loc_830719EC:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8303c8d8
	sub_8303C8D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x83071a04
	goto loc_83071A04;
loc_830719FC:
	// lwz r11,120(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 120);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
loc_83071A04:
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x831b0b58
	return;
}

__attribute__((alias("__imp__sub_83071A0C"))) PPC_WEAK_FUNC(sub_83071A0C);
PPC_FUNC_IMPL(__imp__sub_83071A0C) {
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
	// bl 0x8303c8d8
	sub_8303C8D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071A38"))) PPC_WEAK_FUNC(sub_83071A38);
PPC_FUNC_IMPL(__imp__sub_83071A38) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83071a94
	if (cr6.eq) goto loc_83071A94;
loc_83071A5C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306fec8
	sub_8306FEC8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83071a94
	if (cr0.eq) goto loc_83071A94;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830a7430
	sub_830A7430(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x83071a5c
	if (!cr0.eq) goto loc_83071A5C;
loc_83071A94:
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

__attribute__((alias("__imp__sub_83071AB0"))) PPC_WEAK_FUNC(sub_83071AB0);
PPC_FUNC_IMPL(__imp__sub_83071AB0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8306f898
	sub_8306F898(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830714b0
	sub_830714B0(ctx, base);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83071b28
	if (!cr0.eq) goto loc_83071B28;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-8608
	ctx.r4.s64 = r11.s64 + -8608;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83071b28
	if (!cr0.eq) goto loc_83071B28;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x83071b28
	if (cr6.eq) goto loc_83071B28;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83071b2c
	if (!cr0.eq) goto loc_83071B2C;
loc_83071B28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83071B2C:
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

__attribute__((alias("__imp__sub_83071B48"))) PPC_WEAK_FUNC(sub_83071B48);
PPC_FUNC_IMPL(__imp__sub_83071B48) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// li r29,0
	r29.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83071b80
	if (cr0.eq) goto loc_83071B80;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// b 0x83071b84
	goto loc_83071B84;
loc_83071B80:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
loc_83071B84:
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x83071bb4
	if (!cr6.eq) goto loc_83071BB4;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83071ba8
	if (cr0.eq) goto loc_83071BA8;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x83071c34
	if (!cr6.eq) goto loc_83071C34;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x83071c34
	if (!cr6.eq) goto loc_83071C34;
loc_83071BA8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83071BAC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
loc_83071BB4:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83071c3c
	if (cr6.eq) goto loc_83071C3C;
	// lwz r10,32(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// lwz r30,12(r6)
	r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// bne cr6,0x83071c00
	if (!cr6.eq) goto loc_83071C00;
	// lwz r4,52(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 52);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplw cr6,r4,r3
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, xer);
	// beq cr6,0x83071ba8
	if (cr6.eq) goto loc_83071BA8;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83071c80
	if (cr6.eq) goto loc_83071C80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83071c80
	if (cr0.eq) goto loc_83071C80;
	// b 0x83071c28
	goto loc_83071C28;
loc_83071C00:
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, r11.u32, xer);
	// bne cr6,0x83071c14
	if (!cr6.eq) goto loc_83071C14;
	// b 0x83071ba8
	goto loc_83071BA8;
loc_83071C0C:
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, r11.u32, xer);
	// beq cr6,0x83071c20
	if (cr6.eq) goto loc_83071C20;
loc_83071C14:
	// lwz r6,56(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 56);
	// cmplwi r6,0
	cr0.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne 0x83071c0c
	if (!cr0.eq) goto loc_83071C0C;
loc_83071C20:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83071c80
	if (cr6.eq) goto loc_83071C80;
loc_83071C28:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// and. r11,r11,r30
	r11.u64 = r11.u64 & r30.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83071ba8
	if (cr0.eq) goto loc_83071BA8;
loc_83071C34:
	// li r29,1
	r29.s64 = 1;
	// b 0x83071c80
	goto loc_83071C80;
loc_83071C3C:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83071ba8
	if (cr6.eq) goto loc_83071BA8;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplw cr6,r3,r7
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, xer);
	// beq cr6,0x83071ba8
	if (cr6.eq) goto loc_83071BA8;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83071c80
	if (cr6.eq) goto loc_83071C80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83071c80
	if (cr0.eq) goto loc_83071C80;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83071ba8
	if (cr0.eq) goto loc_83071BA8;
loc_83071C80:
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83071cc8
	if (cr0.eq) goto loc_83071CC8;
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// beq 0x83071cbc
	if (cr0.eq) goto loc_83071CBC;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r6,77
	ctx.r6.s64 = 77;
	// lwz r8,16(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// b 0x83071cc4
	goto loc_83071CC4;
loc_83071CBC:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,78
	ctx.r6.s64 = 78;
loc_83071CC4:
	// bl 0x830702f0
	sub_830702F0(ctx, base);
loc_83071CC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83071bac
	goto loc_83071BAC;
}

__attribute__((alias("__imp__sub_83071CD8"))) PPC_WEAK_FUNC(sub_83071CD8);
PPC_FUNC_IMPL(__imp__sub_83071CD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x831b0b10
	// addi r31,r1,-704
	r31.s64 = ctx.r1.s64 + -704;
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// li r23,1
	r23.s64 = 1;
	// li r24,1
	r24.s64 = 1;
	// stw r28,724(r31)
	PPC_STORE_U32(r31.u32 + 724, r28.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// stw r25,740(r31)
	PPC_STORE_U32(r31.u32 + 740, r25.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r29,732(r31)
	PPC_STORE_U32(r31.u32 + 732, r29.u32);
	// addi r5,r11,-7220
	ctx.r5.s64 = r11.s64 + -7220;
	// stw r22,748(r31)
	PPC_STORE_U32(r31.u32 + 748, r22.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// stw r23,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r23.u32);
	// stw r24,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r24.u32);
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r27,r11,-7240
	r27.s64 = r11.s64 + -7240;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r26,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r26.u32);
	// beq cr6,0x83071dc4
	if (cr6.eq) goto loc_83071DC4;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83071dc4
	if (cr0.eq) goto loc_83071DC4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,212(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 212);
	// bl 0x82fdb910
	sub_82FDB910(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// stw r23,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r23.u32);
	// b 0x83071db4
	goto loc_83071DB4;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r28,724(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 724);
	// lwz r22,748(r31)
	r22.u64 = PPC_LOAD_U32(r31.u32 + 748);
	// addi r27,r11,-7240
	r27.s64 = r11.s64 + -7240;
	// lwz r25,740(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 740);
	// lwz r29,732(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 732);
	// lwz r23,84(r31)
	r23.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r24,88(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r26,92(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 92);
loc_83071DB4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x83071dd4
	if (cr6.eq) goto loc_83071DD4;
	// stw r23,32(r29)
	PPC_STORE_U32(r29.u32 + 32, r23.u32);
	// b 0x83071dd4
	goto loc_83071DD4;
loc_83071DC4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x83071dd4
	if (cr6.eq) goto loc_83071DD4;
	// lwz r23,32(r29)
	r23.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// stw r23,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r23.u32);
loc_83071DD4:
	// lis r11,-32234
	r11.s64 = -2112487424;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r4,r11,32432
	ctx.r4.s64 = r11.s64 + 32432;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stb r30,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r30.u8);
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83071e08
	if (cr0.eq) goto loc_83071E08;
	// li r24,-1
	r24.s64 = -1;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x83071e78
	if (cr6.eq) goto loc_83071E78;
	// stw r24,36(r29)
	PPC_STORE_U32(r29.u32 + 36, r24.u32);
	// b 0x83071e78
	goto loc_83071E78;
loc_83071E08:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x83071e6c
	if (cr6.eq) goto loc_83071E6C;
	// lhz r11,0(r26)
	r11.u64 = PPC_LOAD_U16(r26.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83071e6c
	if (cr0.eq) goto loc_83071E6C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,212(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 212);
	// bl 0x82fdb910
	sub_82FDB910(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// b 0x83071e5c
	goto loc_83071E5C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r28,724(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 724);
	// lwz r22,748(r31)
	r22.u64 = PPC_LOAD_U32(r31.u32 + 748);
	// addi r27,r11,-7240
	r27.s64 = r11.s64 + -7240;
	// lwz r25,740(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 740);
	// lwz r29,732(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 732);
	// lwz r23,84(r31)
	r23.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r24,88(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lbz r30,80(r31)
	r30.u64 = PPC_LOAD_U8(r31.u32 + 80);
loc_83071E5C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x83071e78
	if (cr6.eq) goto loc_83071E78;
	// stw r24,36(r29)
	PPC_STORE_U32(r29.u32 + 36, r24.u32);
	// b 0x83071e78
	goto loc_83071E78;
loc_83071E6C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x83071e78
	if (cr6.eq) goto loc_83071E78;
	// lwz r24,36(r29)
	r24.u64 = PPC_LOAD_U32(r29.u32 + 36);
loc_83071E78:
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// bne cr6,0x83071e88
	if (!cr6.eq) goto loc_83071E88;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// beq cr6,0x83071f98
	if (cr6.eq) goto loc_83071F98;
loc_83071E88:
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83071f1c
	if (!cr0.eq) goto loc_83071F1C;
	// li r6,10
	ctx.r6.s64 = 10;
	// lwz r7,212(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + 212);
	// li r5,127
	ctx.r5.s64 = 127;
	// addi r4,r31,352
	ctx.r4.s64 = r31.s64 + 352;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82fd9bb8
	sub_82FD9BB8(ctx, base);
	// li r6,10
	ctx.r6.s64 = 10;
	// li r5,127
	ctx.r5.s64 = 127;
	// lwz r7,212(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + 212);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82fd9bb8
	sub_82FD9BB8(ctx, base);
	// cmpwi cr6,r24,1
	cr6.compare<int32_t>(r24.s32, 1, xer);
	// bge cr6,0x83071f04
	if (!cr6.lt) goto loc_83071F04;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// addi r7,r31,96
	ctx.r7.s64 = r31.s64 + 96;
	// li r6,82
	ctx.r6.s64 = 82;
loc_83071ED4:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r30,r11,-28032
	r30.s64 = r11.s64 + -28032;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x83071f24
	if (cr6.eq) goto loc_83071F24;
	// stw r23,36(r29)
	PPC_STORE_U32(r29.u32 + 36, r23.u32);
	// b 0x83071f24
	goto loc_83071F24;
loc_83071F04:
	// cmpw cr6,r24,r23
	cr6.compare<int32_t>(r24.s32, r23.s32, xer);
	// bge cr6,0x83071f1c
	if (!cr6.lt) goto loc_83071F1C;
	// addi r8,r31,96
	ctx.r8.s64 = r31.s64 + 96;
	// addi r7,r31,352
	ctx.r7.s64 = r31.s64 + 352;
	// li r6,96
	ctx.r6.s64 = 96;
	// b 0x83071ed4
	goto loc_83071ED4;
loc_83071F1C:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r30,r11,-28032
	r30.s64 = r11.s64 + -28032;
loc_83071F24:
	// addi r11,r22,-1
	r11.s64 = r22.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83071f54
	if (!cr0.eq) goto loc_83071F54;
	// addi r10,r22,-4
	ctx.r10.s64 = r22.s64 + -4;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x83071f54
	if (!cr0.eq) goto loc_83071F54;
	// addi r10,r22,-2
	ctx.r10.s64 = r22.s64 + -2;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83071f98
	if (cr0.eq) goto loc_83071F98;
loc_83071F54:
	// cmpwi cr6,r24,1
	cr6.compare<int32_t>(r24.s32, 1, xer);
	// beq cr6,0x83071f98
	if (cr6.eq) goto loc_83071F98;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x83071f78
	if (cr6.eq) goto loc_83071F78;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r23,1
	cr6.compare<int32_t>(r23.s32, 1, xer);
	// stw r10,36(r29)
	PPC_STORE_U32(r29.u32 + 36, ctx.r10.u32);
	// ble cr6,0x83071f78
	if (!cr6.gt) goto loc_83071F78;
	// stw r10,32(r29)
	PPC_STORE_U32(r29.u32 + 32, ctx.r10.u32);
loc_83071F78:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r6,120
	ctx.r6.s64 = 120;
	// bne cr6,0x83071f94
	if (!cr6.eq) goto loc_83071F94;
	// li r6,119
	ctx.r6.s64 = 119;
loc_83071F94:
	// bl 0x830702a0
	sub_830702A0(ctx, base);
loc_83071F98:
	// addi r1,r31,704
	ctx.r1.s64 = r31.s64 + 704;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_83071FA8"))) PPC_WEAK_FUNC(sub_83071FA8);
PPC_FUNC_IMPL(__imp__sub_83071FA8) {
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

__attribute__((alias("__imp__sub_83071FC8"))) PPC_WEAK_FUNC(sub_83071FC8);
PPC_FUNC_IMPL(__imp__sub_83071FC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-704
	r31.s64 = r12.s64 + -704;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	r11.s64 = 1;
	// lis r3,-31993
	ctx.r3.s64 = -2096693248;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,7568
	ctx.r3.s64 = ctx.r3.s64 + 7568;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_83071FF0"))) PPC_WEAK_FUNC(sub_83071FF0);
PPC_FUNC_IMPL(__imp__sub_83071FF0) {
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

__attribute__((alias("__imp__sub_83072010"))) PPC_WEAK_FUNC(sub_83072010);
PPC_FUNC_IMPL(__imp__sub_83072010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-704
	r31.s64 = r12.s64 + -704;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lis r3,-31993
	ctx.r3.s64 = -2096693248;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,7736
	ctx.r3.s64 = ctx.r3.s64 + 7736;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_83072030"))) PPC_WEAK_FUNC(sub_83072030);
PPC_FUNC_IMPL(__imp__sub_83072030) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8306f940
	sub_8306F940(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r4,r11,-7896
	ctx.r4.s64 = r11.s64 + -7896;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8307208c
	if (cr0.eq) goto loc_8307208C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r6,106
	ctx.r6.s64 = 106;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
loc_8307208C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83072098"))) PPC_WEAK_FUNC(sub_83072098);
PPC_FUNC_IMPL(__imp__sub_83072098) {
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
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(r11.s32, 11, xer);
	// bne cr6,0x830720c0
	if (!cr6.eq) goto loc_830720C0;
loc_830720B8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83072110
	goto loc_83072110;
loc_830720C0:
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// bne cr6,0x830720e8
	if (!cr6.eq) goto loc_830720E8;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, r11.s32, xer);
	// beq cr6,0x8307210c
	if (cr6.eq) goto loc_8307210C;
	// lwz r11,40(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// beq cr6,0x8307210c
	if (cr6.eq) goto loc_8307210C;
	// b 0x830720b8
	goto loc_830720B8;
loc_830720E8:
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// bne cr6,0x8307210c
	if (!cr6.eq) goto loc_8307210C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,56(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// bl 0x830708e0
	sub_830708E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x83072110
	if (!cr0.eq) goto loc_83072110;
loc_8307210C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83072110:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83072120"))) PPC_WEAK_FUNC(sub_83072120);
PPC_FUNC_IMPL(__imp__sub_83072120) {
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
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x8307221c
	if (cr6.eq) goto loc_8307221C;
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x8307221c
	if (cr6.eq) goto loc_8307221C;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(r11.s32, 11, xer);
	// bne cr6,0x83072154
	if (!cr6.eq) goto loc_83072154;
loc_8307214C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83072220
	goto loc_83072220;
loc_83072154:
	// cmpwi cr6,r10,12
	cr6.compare<int32_t>(ctx.r10.s32, 12, xer);
	// bne cr6,0x83072180
	if (!cr6.eq) goto loc_83072180;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// bne cr6,0x8307221c
	if (!cr6.eq) goto loc_8307221C;
	// lwz r11,40(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// lwz r10,40(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x8307221c
	if (!cr6.eq) goto loc_8307221C;
	// b 0x8307214c
	goto loc_8307214C;
loc_83072180:
	// cmpwi cr6,r10,13
	cr6.compare<int32_t>(ctx.r10.s32, 13, xer);
	// bne cr6,0x8307221c
	if (!cr6.eq) goto loc_8307221C;
	// lwz r29,56(r5)
	r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// bne cr6,0x830721ec
	if (!cr6.eq) goto loc_830721EC;
	// lwz r28,56(r4)
	r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x830721a8
	if (cr6.eq) goto loc_830721A8;
	// lwz r30,4(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// b 0x830721ac
	goto loc_830721AC;
loc_830721A8:
	// li r30,0
	r30.s64 = 0;
loc_830721AC:
	// li r31,0
	r31.s64 = 0;
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x8307214c
	if (cr0.eq) goto loc_8307214C;
loc_830721B8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8308ea58
	sub_8308EA58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x830708e0
	sub_830708E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8307221c
	if (cr0.eq) goto loc_8307221C;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// blt cr6,0x830721b8
	if (cr6.lt) goto loc_830721B8;
	// b 0x8307214c
	goto loc_8307214C;
loc_830721EC:
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// bne cr6,0x8307221c
	if (!cr6.eq) goto loc_8307221C;
	// lwz r11,40(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x830708e0
	sub_830708E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq 0x83072220
	if (cr0.eq) goto loc_83072220;
loc_8307221C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83072220:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83072228"))) PPC_WEAK_FUNC(sub_83072228);
PPC_FUNC_IMPL(__imp__sub_83072228) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r19,r6
	r19.u64 = ctx.r6.u64;
	// mr r20,r7
	r20.u64 = ctx.r7.u64;
	// li r26,0
	r26.s64 = 0;
	// bl 0x830a72e0
	sub_830A72E0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x830724b0
	if (cr0.eq) goto loc_830724B0;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// addi r18,r11,32488
	r18.s64 = r11.s64 + 32488;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r17,r11,-28032
	r17.s64 = r11.s64 + -28032;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r22,r11,-7240
	r22.s64 = r11.s64 + -7240;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r21,r11,-7220
	r21.s64 = r11.s64 + -7220;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r24,r11,-8152
	r24.s64 = r11.s64 + -8152;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r25,r11,-7108
	r25.s64 = r11.s64 + -7108;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r16,r11,-8488
	r16.s64 = r11.s64 + -8488;
loc_83072290:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830724a0
	if (!cr0.eq) goto loc_830724A0;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne 0x830722ec
	if (!cr0.eq) goto loc_830722EC;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// bl 0x83072228
	sub_83072228(ctx, base);
	// add r26,r3,r26
	r26.u64 = ctx.r3.u64 + r26.u64;
	// b 0x830724a0
	goto loc_830724A0;
loc_830722EC:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x830724a0
	if (cr0.eq) goto loc_830724A0;
	// lhz r11,0(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830724a0
	if (cr0.eq) goto loc_830724A0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8306f898
	sub_8306F898(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8306f940
	sub_8306F940(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830714b0
	sub_830714B0(ctx, base);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// bne cr6,0x830724a0
	if (!cr6.eq) goto loc_830724A0;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r3,r15
	cr6.compare<uint32_t>(ctx.r3.u32, r15.u32, xer);
	// bne cr6,0x830724a0
	if (!cr6.eq) goto loc_830724A0;
	// addi r30,r31,60
	r30.s64 = r31.s64 + 60;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x8306fc48
	sub_8306FC48(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// sthx r9,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, ctx.r9.u16);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r11,172(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 172);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830724a0
	if (cr0.eq) goto loc_830724A0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83072454
	if (cr0.eq) goto loc_83072454;
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83072454
	if (cr0.eq) goto loc_83072454;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8307247c
	if (cr0.eq) goto loc_8307247C;
loc_83072454:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x830724a0
	if (cr6.eq) goto loc_830724A0;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830724a0
	if (cr0.eq) goto loc_830724A0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830724a0
	if (!cr0.eq) goto loc_830724A0;
loc_8307247C:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// li r6,139
	ctx.r6.s64 = 139;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
loc_830724A0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830a7430
	sub_830A7430(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x83072290
	if (!cr0.eq) goto loc_83072290;
loc_830724B0:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831b0b44
	return;
}

__attribute__((alias("__imp__sub_830724C0"))) PPC_WEAK_FUNC(sub_830724C0);
PPC_FUNC_IMPL(__imp__sub_830724C0) {
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
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// addi r5,r11,-7272
	ctx.r5.s64 = r11.s64 + -7272;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// li r24,0
	r24.s64 = 0;
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r5,r11,-7160
	ctx.r5.s64 = r11.s64 + -7160;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r5,r11,-7404
	ctx.r5.s64 = r11.s64 + -7404;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// beq cr6,0x83072560
	if (cr6.eq) goto loc_83072560;
	// li r24,4
	r24.s64 = 4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8307255c
	if (cr6.eq) goto loc_8307255C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,56
	ctx.r6.s64 = 56;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
loc_8307255C:
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
loc_83072560:
	// lis r11,-32234
	r11.s64 = -2112487424;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// addi r25,r11,32488
	r25.s64 = r11.s64 + 32488;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r28,r11,-6380
	r28.s64 = r11.s64 + -6380;
	// beq cr6,0x830725b0
	if (cr6.eq) goto loc_830725B0;
	// lhz r11,0(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830725b0
	if (cr0.eq) goto loc_830725B0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830725ac
	if (!cr0.eq) goto loc_830725AC;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830725b0
	if (cr0.eq) goto loc_830725B0;
loc_830725AC:
	// ori r24,r24,1
	r24.u64 = r24.u64 | 1;
loc_830725B0:
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83072628
	if (cr0.eq) goto loc_83072628;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-7564
	ctx.r5.s64 = r11.s64 + -7564;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x83072610
	if (cr0.eq) goto loc_83072610;
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83072610
	if (cr0.eq) goto loc_83072610;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8307260c
	if (!cr0.eq) goto loc_8307260C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83072610
	if (cr0.eq) goto loc_83072610;
loc_8307260C:
	// ori r24,r24,2
	r24.u64 = r24.u64 | 2;
loc_83072610:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83071800
	sub_83071800(ctx, base);
	// stw r3,40(r23)
	PPC_STORE_U32(r23.u32 + 40, ctx.r3.u32);
loc_83072628:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83071608
	sub_83071608(ctx, base);
	// stw r3,44(r23)
	PPC_STORE_U32(r23.u32 + 44, ctx.r3.u32);
	// stw r24,48(r23)
	PPC_STORE_U32(r23.u32 + 48, r24.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_83072658"))) PPC_WEAK_FUNC(sub_83072658);
PPC_FUNC_IMPL(__imp__sub_83072658) {
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
	// li r11,1
	r11.s64 = 1;
	// li r29,0
	r29.s64 = 0;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r5,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r5.u32);
	// stb r11,4(r30)
	PPC_STORE_U8(r30.u32 + 4, r11.u8);
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// stw r4,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r4.u32);
	// stw r29,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r29.u32);
	// bl 0x830548b8
	sub_830548B8(ctx, base);
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
	// beq 0x830726b0
	if (cr0.eq) goto loc_830726B0;
	// bl 0x83017920
	sub_83017920(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_830726B0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r29.u32);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830726C0"))) PPC_WEAK_FUNC(sub_830726C0);
PPC_FUNC_IMPL(__imp__sub_830726C0) {
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

__attribute__((alias("__imp__sub_830726F0"))) PPC_WEAK_FUNC(sub_830726F0);
PPC_FUNC_IMPL(__imp__sub_830726F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= r11.u32;
	r11.s64 = ctx.r10.s64 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83072710"))) PPC_WEAK_FUNC(sub_83072710);
PPC_FUNC_IMPL(__imp__sub_83072710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// b 0x83020000
	sub_83020000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83072730"))) PPC_WEAK_FUNC(sub_83072730);
PPC_FUNC_IMPL(__imp__sub_83072730) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32233
	r11.s64 = -2112421888;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-31992
	r11.s64 = r11.s64 + -31992;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lbz r11,4(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830727a8
	if (cr0.eq) goto loc_830727A8;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x830727a8
	if (!cr6.gt) goto loc_830727A8;
	// li r29,0
	r29.s64 = 0;
loc_83072774:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwzx r28,r11,r29
	r28.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// beq 0x83072794
	if (cr0.eq) goto loc_83072794;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830a6ce0
	sub_830A6CE0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_83072794:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x83072774
	if (cr6.lt) goto loc_83072774;
loc_830727A8:
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32233
	r11.s64 = -2112421888;
	// addi r11,r11,-32640
	r11.s64 = r11.s64 + -32640;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_830727D4"))) PPC_WEAK_FUNC(sub_830727D4);
PPC_FUNC_IMPL(__imp__sub_830727D4) {
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
	// bl 0x830709f8
	sub_830709F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83072800"))) PPC_WEAK_FUNC(sub_83072800);
PPC_FUNC_IMPL(__imp__sub_83072800) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x83072850
	if (cr6.lt) goto loc_83072850;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r6,116
	ctx.r6.s64 = 116;
	// addi r4,r11,32144
	ctx.r4.s64 = r11.s64 + 32144;
	// li r5,67
	ctx.r5.s64 = 67;
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
loc_83072850:
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83072880
	if (cr0.eq) goto loc_83072880;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r10,r11
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x83072880
	if (cr0.eq) goto loc_83072880;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830a6ce0
	sub_830A6CE0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_83072880:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83072898"))) PPC_WEAK_FUNC(sub_83072898);
PPC_FUNC_IMPL(__imp__sub_83072898) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// mr r29,r27
	r29.u64 = r27.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x83072908
	if (!cr6.gt) goto loc_83072908;
	// mr r30,r27
	r30.u64 = r27.u64;
loc_830728C0:
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830728ec
	if (cr0.eq) goto loc_830728EC;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwzx r28,r11,r30
	r28.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// beq 0x830728ec
	if (cr0.eq) goto loc_830728EC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830a6ce0
	sub_830A6CE0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_830728EC:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stwx r27,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, r27.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x830728c0
	if (cr6.lt) goto loc_830728C0;
loc_83072908:
	// stw r27,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83072918"))) PPC_WEAK_FUNC(sub_83072918);
PPC_FUNC_IMPL(__imp__sub_83072918) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x83072964
	if (cr6.lt) goto loc_83072964;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r6,116
	ctx.r6.s64 = 116;
	// addi r4,r11,32144
	ctx.r4.s64 = r11.s64 + 32144;
	// li r5,144
	ctx.r5.s64 = 144;
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
loc_83072964:
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83072994
	if (cr0.eq) goto loc_83072994;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r10,r11
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x83072994
	if (cr0.eq) goto loc_83072994;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830a6ce0
	sub_830A6CE0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_83072994:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x830729b8
	if (!cr6.eq) goto loc_830729B8;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r9.u32);
	// b 0x83072a08
	goto loc_83072A08;
loc_830729B8:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x830729f0
	if (!cr6.lt) goto loc_830729F0;
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_830729C8:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x830729c8
	if (cr6.lt) goto loc_830729C8;
loc_830729F0:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r9,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, ctx.r9.u32);
loc_83072A08:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83072A20"))) PPC_WEAK_FUNC(sub_83072A20);
PPC_FUNC_IMPL(__imp__sub_83072A20) {
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83072a74
	if (cr0.eq) goto loc_83072A74;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// lbz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// beq 0x83072a74
	if (cr0.eq) goto loc_83072A74;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	r31.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x83072a74
	if (cr0.eq) goto loc_83072A74;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830a6ce0
	sub_830A6CE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_83072A74:
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

__attribute__((alias("__imp__sub_83072A88"))) PPC_WEAK_FUNC(sub_83072A88);
PPC_FUNC_IMPL(__imp__sub_83072A88) {
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
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83072aec
	if (cr0.eq) goto loc_83072AEC;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x83072aec
	if (!cr6.gt) goto loc_83072AEC;
	// li r30,0
	r30.s64 = 0;
loc_83072AB8:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwzx r29,r11,r30
	r29.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x83072ad8
	if (cr0.eq) goto loc_83072AD8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830a6ce0
	sub_830A6CE0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_83072AD8:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x83072ab8
	if (cr6.lt) goto loc_83072AB8;
loc_83072AEC:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83072B10"))) PPC_WEAK_FUNC(sub_83072B10);
PPC_FUNC_IMPL(__imp__sub_83072B10) {
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
	// bl 0x83070ba0
	sub_83070BA0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
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
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83072b60
	if (cr0.eq) goto loc_83072B60;
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
loc_83072B60:
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

__attribute__((alias("__imp__sub_83072B78"))) PPC_WEAK_FUNC(sub_83072B78);
PPC_FUNC_IMPL(__imp__sub_83072B78) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mulli r11,r11,3
	r11.s64 = r11.s64 * 3;
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x83072bac
	if (cr6.lt) goto loc_83072BAC;
	// bl 0x83070c40
	sub_83070C40(ctx, base);
loc_83072BAC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x83072bf8
	if (cr0.eq) goto loc_83072BF8;
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83072bec
	if (cr0.eq) goto loc_83072BEC;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x83072bec
	if (cr0.eq) goto loc_83072BEC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830a6ce0
	sub_830A6CE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_83072BEC:
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// b 0x83072c4c
	goto loc_83072C4C;
loc_83072BF8:
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
	// beq 0x83072c30
	if (cr0.eq) goto loc_83072C30;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwzx r11,r8,r11
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r29.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x83072c34
	goto loc_83072C34;
loc_83072C30:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83072C34:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, ctx.r10.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
loc_83072C4C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83072C58"))) PPC_WEAK_FUNC(sub_83072C58);
PPC_FUNC_IMPL(__imp__sub_83072C58) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mulli r11,r11,3
	r11.s64 = r11.s64 * 3;
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x83072c8c
	if (cr6.lt) goto loc_83072C8C;
	// bl 0x83070c40
	sub_83070C40(ctx, base);
loc_83072C8C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x83072cd0
	if (cr0.eq) goto loc_83072CD0;
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83072cc4
	if (cr0.eq) goto loc_83072CC4;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83072cc4
	if (cr0.eq) goto loc_83072CC4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82fdeaa8
	sub_82FDEAA8(ctx, base);
loc_83072CC4:
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// b 0x83072d24
	goto loc_83072D24;
loc_83072CD0:
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
	// beq 0x83072d08
	if (cr0.eq) goto loc_83072D08;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwzx r11,r8,r11
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r29.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x83072d0c
	goto loc_83072D0C;
loc_83072D08:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83072D0C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, ctx.r10.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
loc_83072D24:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83072D30"))) PPC_WEAK_FUNC(sub_83072D30);
PPC_FUNC_IMPL(__imp__sub_83072D30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x82fea480
	sub_82FEA480(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x83072d80
	if (cr0.eq) goto loc_83072D80;
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83072d70
	if (cr0.eq) goto loc_83072D70;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_83072D70:
	// stw r27,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r27.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// stw r28,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r28.u32);
	// b 0x83072dcc
	goto loc_83072DCC;
loc_83072D80:
	// li r3,16
	ctx.r3.s64 = 16;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83072dbc
	if (cr0.eq) goto loc_83072DBC;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwzx r11,r8,r11
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r29.u32);
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r28.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x83072dc0
	goto loc_83072DC0;
loc_83072DBC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83072DC0:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, ctx.r10.u32);
loc_83072DCC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83072DD8"))) PPC_WEAK_FUNC(sub_83072DD8);
PPC_FUNC_IMPL(__imp__sub_83072DD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x82fea480
	sub_82FEA480(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x83072e3c
	if (cr0.eq) goto loc_83072E3C;
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83072e2c
	if (cr0.eq) goto loc_83072E2C;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x83072e2c
	if (cr0.eq) goto loc_83072E2C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830a6ce0
	sub_830A6CE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_83072E2C:
	// stw r27,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r27.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// stw r28,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r28.u32);
	// b 0x83072e88
	goto loc_83072E88;
loc_83072E3C:
	// li r3,16
	ctx.r3.s64 = 16;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83072e78
	if (cr0.eq) goto loc_83072E78;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwzx r11,r8,r11
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r29.u32);
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r28.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x83072e7c
	goto loc_83072E7C;
loc_83072E78:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83072E7C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, ctx.r10.u32);
loc_83072E88:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83072E90"))) PPC_WEAK_FUNC(sub_83072E90);
PPC_FUNC_IMPL(__imp__sub_83072E90) {
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
	// bl 0x83072730
	sub_83072730(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83072ec0
	if (cr0.eq) goto loc_83072EC0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_83072EC0:
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

__attribute__((alias("__imp__sub_83072EE0"))) PPC_WEAK_FUNC(sub_83072EE0);
PPC_FUNC_IMPL(__imp__sub_83072EE0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// mr r27,r26
	r27.u64 = r26.u64;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x83072f6c
	if (!cr6.gt) goto loc_83072F6C;
	// mr r29,r26
	r29.u64 = r26.u64;
loc_83072F08:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwzx r30,r11,r29
	r30.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x83072f50
	if (cr0.eq) goto loc_83072F50;
loc_83072F18:
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// lwz r28,4(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83072f3c
	if (cr0.eq) goto loc_83072F3C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83072f3c
	if (cr0.eq) goto loc_83072F3C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82fdeaa8
	sub_82FDEAA8(ctx, base);
loc_83072F3C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// mr r30,r28
	r30.u64 = r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x83072f18
	if (!cr6.eq) goto loc_83072F18;
loc_83072F50:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// stwx r26,r11,r29
	PPC_STORE_U32(r11.u32 + r29.u32, r26.u32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x83072f08
	if (cr6.lt) goto loc_83072F08;
loc_83072F6C:
	// stw r26,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83072F80"))) PPC_WEAK_FUNC(sub_83072F80);
PPC_FUNC_IMPL(__imp__sub_83072F80) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r11,72(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 72);
	// stw r29,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r29.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83072ff4
	if (!cr0.eq) goto loc_83072FF4;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,104(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 104);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// beq 0x83072fe8
	if (cr0.eq) goto loc_83072FE8;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,104(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 104);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83043458
	sub_83043458(ctx, base);
	// lis r11,-32233
	r11.s64 = -2112421888;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r11,r11,2232
	r11.s64 = r11.s64 + 2232;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x83072fec
	goto loc_83072FEC;
loc_83072FE8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83072FEC:
	// stw r10,72(r29)
	PPC_STORE_U32(r29.u32 + 72, ctx.r10.u32);
	// b 0x83073030
	goto loc_83073030;
loc_83072FF4:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x83073024
	if (cr0.eq) goto loc_83073024;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
loc_83073008:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r8,r28
	cr6.compare<uint32_t>(ctx.r8.u32, r28.u32, xer);
	// beq cr6,0x83073044
	if (cr6.eq) goto loc_83073044;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x83073008
	if (cr6.lt) goto loc_83073008;
loc_83073024:
	// li r11,0
	r11.s64 = 0;
loc_83073028:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8307303c
	if (!cr0.eq) goto loc_8307303C;
loc_83073030:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,72(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 72);
	// bl 0x83043678
	sub_83043678(ctx, base);
loc_8307303C:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b78
	return;
loc_83073044:
	// li r11,1
	r11.s64 = 1;
	// b 0x83073028
	goto loc_83073028;
}

__attribute__((alias("__imp__sub_8307304C"))) PPC_WEAK_FUNC(sub_8307304C);
PPC_FUNC_IMPL(__imp__sub_8307304C) {
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
	// lwz r4,104(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 104);
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

__attribute__((alias("__imp__sub_83073088"))) PPC_WEAK_FUNC(sub_83073088);
PPC_FUNC_IMPL(__imp__sub_83073088) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// stw r29,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830730f8
	if (!cr6.eq) goto loc_830730F8;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,20(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// beq 0x830730f0
	if (cr0.eq) goto loc_830730F0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,20(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83043458
	sub_83043458(ctx, base);
	// lis r11,-32233
	r11.s64 = -2112421888;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r11,r11,2232
	r11.s64 = r11.s64 + 2232;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x830730f4
	goto loc_830730F4;
loc_830730F0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_830730F4:
	// stw r10,16(r29)
	PPC_STORE_U32(r29.u32 + 16, ctx.r10.u32);
loc_830730F8:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// bl 0x83043678
	sub_83043678(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8307310C"))) PPC_WEAK_FUNC(sub_8307310C);
PPC_FUNC_IMPL(__imp__sub_8307310C) {
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
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 20);
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

__attribute__((alias("__imp__sub_83073148"))) PPC_WEAK_FUNC(sub_83073148);
PPC_FUNC_IMPL(__imp__sub_83073148) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r11,72(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 72);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830731b8
	if (!cr6.eq) goto loc_830731B8;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r4,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r4.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// beq 0x830731b0
	if (cr0.eq) goto loc_830731B0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83043458
	sub_83043458(ctx, base);
	// lis r11,-32233
	r11.s64 = -2112421888;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r11,r11,2232
	r11.s64 = r11.s64 + 2232;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x830731b4
	goto loc_830731B4;
loc_830731B0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_830731B4:
	// stw r10,72(r29)
	PPC_STORE_U32(r29.u32 + 72, ctx.r10.u32);
loc_830731B8:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,72(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 72);
	// bl 0x83043678
	sub_83043678(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830731CC"))) PPC_WEAK_FUNC(sub_830731CC);
PPC_FUNC_IMPL(__imp__sub_830731CC) {
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

__attribute__((alias("__imp__sub_830731F8"))) PPC_WEAK_FUNC(sub_830731F8);
PPC_FUNC_IMPL(__imp__sub_830731F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32233
	r11.s64 = -2112421888;
	// lwz r9,44(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// addi r10,r11,-32712
	ctx.r10.s64 = r11.s64 + -32712;
	// li r11,0
	r11.s64 = 0;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, r11.u32);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, r11.u8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83073228"))) PPC_WEAK_FUNC(sub_83073228);
PPC_FUNC_IMPL(__imp__sub_83073228) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r4,140(r31)
	PPC_STORE_U32(r31.u32 + 140, ctx.r4.u32);
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8307328c
	if (!cr6.eq) goto loc_8307328C;
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,100(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83073284
	if (cr0.eq) goto loc_83073284;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,100(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x83070930
	sub_83070930(ctx, base);
	// b 0x83073288
	goto loc_83073288;
loc_83073284:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83073288:
	// stw r3,52(r30)
	PPC_STORE_U32(r30.u32 + 52, ctx.r3.u32);
loc_8307328C:
	// lwz r30,52(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,140
	ctx.r4.s64 = r31.s64 + 140;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830709a8
	sub_830709A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830732b4
	if (!cr0.eq) goto loc_830732B4;
	// addi r4,r31,140
	ctx.r4.s64 = r31.s64 + 140;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8305c228
	sub_8305C228(ctx, base);
loc_830732B4:
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

__attribute__((alias("__imp__sub_830732CC"))) PPC_WEAK_FUNC(sub_830732CC);
PPC_FUNC_IMPL(__imp__sub_830732CC) {
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
	// lwz r4,100(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 100);
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

__attribute__((alias("__imp__sub_83073308"))) PPC_WEAK_FUNC(sub_83073308);
PPC_FUNC_IMPL(__imp__sub_83073308) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// bne cr6,0x830733ec
	if (!cr6.eq) goto loc_830733EC;
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83073380
	if (!cr6.eq) goto loc_83073380;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,100(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq 0x83073378
	if (cr0.eq) goto loc_83073378;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,100(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83070b20
	sub_83070B20(ctx, base);
	// lis r11,-32233
	r11.s64 = -2112421888;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// addi r11,r11,-31992
	r11.s64 = r11.s64 + -31992;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x8307337c
	goto loc_8307337C;
loc_83073378:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8307337C:
	// stw r10,40(r30)
	PPC_STORE_U32(r30.u32 + 40, ctx.r10.u32);
loc_83073380:
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// li r11,0
	r11.s64 = 0;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x830733b4
	if (cr0.eq) goto loc_830733B4;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
loc_83073398:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r28
	cr6.compare<uint32_t>(ctx.r8.u32, r28.u32, xer);
	// beq cr6,0x830733e4
	if (cr6.eq) goto loc_830733E4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83073398
	if (cr6.lt) goto loc_83073398;
loc_830733B4:
	// li r11,0
	r11.s64 = 0;
loc_830733B8:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83073498
	if (!cr0.eq) goto loc_83073498;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x83043678
	sub_83043678(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// bl 0x83073228
	sub_83073228(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830a7148
	sub_830A7148(ctx, base);
	// b 0x83073498
	goto loc_83073498;
loc_830733E4:
	// li r11,1
	r11.s64 = 1;
	// b 0x830733b8
	goto loc_830733B8;
loc_830733EC:
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83073448
	if (!cr6.eq) goto loc_83073448;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,100(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq 0x83073438
	if (cr0.eq) goto loc_83073438;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,100(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83070b20
	sub_83070B20(ctx, base);
	// lis r11,-32233
	r11.s64 = -2112421888;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// addi r11,r11,-31992
	r11.s64 = r11.s64 + -31992;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x8307343c
	goto loc_8307343C;
loc_83073438:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8307343C:
	// li r11,1
	r11.s64 = 1;
	// stw r10,36(r30)
	PPC_STORE_U32(r30.u32 + 36, ctx.r10.u32);
	// stb r11,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r11.u8);
loc_83073448:
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// li r11,0
	r11.s64 = 0;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x8307347c
	if (cr0.eq) goto loc_8307347C;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
loc_83073460:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r28
	cr6.compare<uint32_t>(ctx.r8.u32, r28.u32, xer);
	// beq cr6,0x830734a0
	if (cr6.eq) goto loc_830734A0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83073460
	if (cr6.lt) goto loc_83073460;
loc_8307347C:
	// li r11,0
	r11.s64 = 0;
loc_83073480:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83073498
	if (!cr0.eq) goto loc_83073498;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x83043678
	sub_83043678(ctx, base);
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// stw r11,36(r28)
	PPC_STORE_U32(r28.u32 + 36, r11.u32);
loc_83073498:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b78
	return;
loc_830734A0:
	// li r11,1
	r11.s64 = 1;
	// b 0x83073480
	goto loc_83073480;
}

__attribute__((alias("__imp__sub_830734A8"))) PPC_WEAK_FUNC(sub_830734A8);
PPC_FUNC_IMPL(__imp__sub_830734A8) {
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
	// lwz r4,100(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 100);
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

__attribute__((alias("__imp__sub_830734D8"))) PPC_WEAK_FUNC(sub_830734D8);
PPC_FUNC_IMPL(__imp__sub_830734D8) {
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
	// lwz r4,100(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 100);
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

__attribute__((alias("__imp__sub_83073510"))) PPC_WEAK_FUNC(sub_83073510);
PPC_FUNC_IMPL(__imp__sub_83073510) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r4,140(r31)
	PPC_STORE_U32(r31.u32 + 140, ctx.r4.u32);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83073574
	if (!cr6.eq) goto loc_83073574;
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,100(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307356c
	if (cr0.eq) goto loc_8307356C;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,100(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x83070930
	sub_83070930(ctx, base);
	// b 0x83073570
	goto loc_83073570;
loc_8307356C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83073570:
	// stw r3,48(r30)
	PPC_STORE_U32(r30.u32 + 48, ctx.r3.u32);
loc_83073574:
	// addi r4,r31,140
	ctx.r4.s64 = r31.s64 + 140;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x8305c228
	sub_8305C228(ctx, base);
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

__attribute__((alias("__imp__sub_83073598"))) PPC_WEAK_FUNC(sub_83073598);
PPC_FUNC_IMPL(__imp__sub_83073598) {
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
	// lwz r4,100(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 100);
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

__attribute__((alias("__imp__sub_830735D0"))) PPC_WEAK_FUNC(sub_830735D0);
PPC_FUNC_IMPL(__imp__sub_830735D0) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r4,140(r31)
	PPC_STORE_U32(r31.u32 + 140, ctx.r4.u32);
	// stw r5,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r5.u32);
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83073670
	if (!cr6.eq) goto loc_83073670;
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,100(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83073634
	if (cr0.eq) goto loc_83073634;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,100(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x83070930
	sub_83070930(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x83073638
	goto loc_83073638;
loc_83073634:
	// li r11,0
	r11.s64 = 0;
loc_83073638:
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,100(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// stw r11,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r11.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83073668
	if (cr0.eq) goto loc_83073668;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,100(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x83070930
	sub_83070930(ctx, base);
	// b 0x8307366c
	goto loc_8307366C;
loc_83073668:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8307366C:
	// stw r3,60(r30)
	PPC_STORE_U32(r30.u32 + 60, ctx.r3.u32);
loc_83073670:
	// addi r4,r31,140
	ctx.r4.s64 = r31.s64 + 140;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// bl 0x8305c228
	sub_8305C228(ctx, base);
	// addi r4,r31,148
	ctx.r4.s64 = r31.s64 + 148;
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// bl 0x8305c228
	sub_8305C228(ctx, base);
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

__attribute__((alias("__imp__sub_830736A0"))) PPC_WEAK_FUNC(sub_830736A0);
PPC_FUNC_IMPL(__imp__sub_830736A0) {
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
	// lwz r4,100(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 100);
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

__attribute__((alias("__imp__sub_830736D0"))) PPC_WEAK_FUNC(sub_830736D0);
PPC_FUNC_IMPL(__imp__sub_830736D0) {
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
	// lwz r4,100(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 100);
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

__attribute__((alias("__imp__sub_83073700"))) PPC_WEAK_FUNC(sub_83073700);
PPC_FUNC_IMPL(__imp__sub_83073700) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r11,0
	r11.s64 = 0;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x83073734
	if (cr0.eq) goto loc_83073734;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
loc_83073718:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x83073744
	if (cr6.eq) goto loc_83073744;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83073718
	if (cr6.lt) goto loc_83073718;
loc_83073734:
	// li r11,0
	r11.s64 = 0;
loc_83073738:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
	// b 0x83043678
	sub_83043678(ctx, base);
	return;
loc_83073744:
	// li r11,1
	r11.s64 = 1;
	// b 0x83073738
	goto loc_83073738;
}

__attribute__((alias("__imp__sub_8307374C"))) PPC_WEAK_FUNC(sub_8307374C);
PPC_FUNC_IMPL(__imp__sub_8307374C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83073758"))) PPC_WEAK_FUNC(sub_83073758);
PPC_FUNC_IMPL(__imp__sub_83073758) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// stw r29,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830737cc
	if (!cr6.eq) goto loc_830737CC;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,28(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// beq 0x830737c4
	if (cr0.eq) goto loc_830737C4;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,28(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83043458
	sub_83043458(ctx, base);
	// lis r11,-32233
	r11.s64 = -2112421888;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r11,r11,2232
	r11.s64 = r11.s64 + 2232;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x830737c8
	goto loc_830737C8;
loc_830737C4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_830737C8:
	// stw r10,16(r29)
	PPC_STORE_U32(r29.u32 + 16, ctx.r10.u32);
loc_830737CC:
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83073818
	if (cr0.eq) goto loc_83073818;
	// li r3,76
	ctx.r3.s64 = 76;
	// lwz r4,28(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830737fc
	if (cr0.eq) goto loc_830737FC;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x83089f98
	sub_83089F98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83073800
	goto loc_83073800;
loc_830737FC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_83073800:
	// lwz r11,72(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83073810
	if (!cr6.eq) goto loc_83073810;
	// stw r28,72(r4)
	PPC_STORE_U32(ctx.r4.u32 + 72, r28.u32);
loc_83073810:
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// b 0x83073820
	goto loc_83073820;
loc_83073818:
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_83073820:
	// bl 0x83043678
	sub_83043678(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8307382C"))) PPC_WEAK_FUNC(sub_8307382C);
PPC_FUNC_IMPL(__imp__sub_8307382C) {
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
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 28);
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

__attribute__((alias("__imp__sub_8307385C"))) PPC_WEAK_FUNC(sub_8307385C);
PPC_FUNC_IMPL(__imp__sub_8307385C) {
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
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 28);
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

__attribute__((alias("__imp__sub_83073898"))) PPC_WEAK_FUNC(sub_83073898);
PPC_FUNC_IMPL(__imp__sub_83073898) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// stw r29,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8307390c
	if (!cr6.eq) goto loc_8307390C;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,28(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// beq 0x83073904
	if (cr0.eq) goto loc_83073904;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,28(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83043458
	sub_83043458(ctx, base);
	// lis r11,-32233
	r11.s64 = -2112421888;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r11,r11,2232
	r11.s64 = r11.s64 + 2232;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x83073908
	goto loc_83073908;
loc_83073904:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83073908:
	// stw r10,20(r29)
	PPC_STORE_U32(r29.u32 + 20, ctx.r10.u32);
loc_8307390C:
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83073958
	if (cr0.eq) goto loc_83073958;
	// li r3,76
	ctx.r3.s64 = 76;
	// lwz r4,28(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307393c
	if (cr0.eq) goto loc_8307393C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x83089f98
	sub_83089F98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83073940
	goto loc_83073940;
loc_8307393C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_83073940:
	// lwz r11,72(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83073950
	if (!cr6.eq) goto loc_83073950;
	// stw r28,72(r4)
	PPC_STORE_U32(ctx.r4.u32 + 72, r28.u32);
loc_83073950:
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// b 0x83073960
	goto loc_83073960;
loc_83073958:
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_83073960:
	// bl 0x83043678
	sub_83043678(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8307396C"))) PPC_WEAK_FUNC(sub_8307396C);
PPC_FUNC_IMPL(__imp__sub_8307396C) {
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
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 28);
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

__attribute__((alias("__imp__sub_8307399C"))) PPC_WEAK_FUNC(sub_8307399C);
PPC_FUNC_IMPL(__imp__sub_8307399C) {
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
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 28);
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

__attribute__((alias("__imp__sub_830739D0"))) PPC_WEAK_FUNC(sub_830739D0);
PPC_FUNC_IMPL(__imp__sub_830739D0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r29,r11,-7788
	r29.s64 = r11.s64 + -7788;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,92(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83073a28
	if (!cr0.eq) goto loc_83073A28;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,163
	ctx.r6.s64 = 163;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
loc_83073A28:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83070f18
	sub_83070F18(ctx, base);
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// lwz r8,92(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// bl 0x830a7f60
	sub_830A7F60(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306fcf8
	sub_8306FCF8(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r28,0
	r28.s64 = 0;
	// addi r29,r11,-6536
	r29.s64 = r11.s64 + -6536;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-7388
	ctx.r4.s64 = r11.s64 + -7388;
	// lwz r11,160(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 160);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83073a9c
	if (cr0.eq) goto loc_83073A9C;
	// li r28,1
	r28.s64 = 1;
loc_83073A9C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-7544
	ctx.r4.s64 = r11.s64 + -7544;
	// lwz r11,160(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 160);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83073ad0
	if (cr0.eq) goto loc_83073AD0;
	// clrlwi r11,r28,16
	r11.u64 = r28.u32 & 0xFFFF;
	// ori r28,r11,2
	r28.u64 = r11.u64 | 2;
loc_83073AD0:
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// sth r28,2(r11)
	PPC_STORE_U16(r11.u32 + 2, r28.u16);
	// bl 0x83071608
	sub_83071608(ctx, base);
	// lwz r10,120(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// bl 0x83071800
	sub_83071800(ctx, base);
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// stw r3,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83073B20"))) PPC_WEAK_FUNC(sub_83073B20);
PPC_FUNC_IMPL(__imp__sub_83073B20) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83073b70
	if (cr0.eq) goto loc_83073B70;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83073b70
	if (cr0.eq) goto loc_83073B70;
	// lwz r30,120(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// bl 0x83084fe0
	sub_83084FE0(ctx, base);
	// stw r30,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r30.u32);
loc_83073B70:
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

__attribute__((alias("__imp__sub_83073B88"))) PPC_WEAK_FUNC(sub_83073B88);
PPC_FUNC_IMPL(__imp__sub_83073B88) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// lwz r29,120(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83073be0
	if (cr0.eq) goto loc_83073BE0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83073be0
	if (cr0.eq) goto loc_83073BE0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// bl 0x83084fe0
	sub_83084FE0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r29.u32);
	// bl 0x83084fe0
	sub_83084FE0(ctx, base);
loc_83073BE0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83073BE8"))) PPC_WEAK_FUNC(sub_83073BE8);
PPC_FUNC_IMPL(__imp__sub_83073BE8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// bl 0x82feeed8
	sub_82FEEED8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x83073c54
	if (cr0.eq) goto loc_83073C54;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83073c54
	if (!cr6.eq) goto loc_83073C54;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83073c7c
	if (cr0.eq) goto loc_83073C7C;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x83073c80
	goto loc_83073C80;
loc_83073C54:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,-28480
	ctx.r5.s64 = r11.s64 + -28480;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r6,72
	ctx.r6.s64 = 72;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
loc_83073C7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83073C80:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83073C88"))) PPC_WEAK_FUNC(sub_83073C88);
PPC_FUNC_IMPL(__imp__sub_83073C88) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r11,-8608
	ctx.r4.s64 = r11.s64 + -8608;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r27,0
	r27.s64 = 0;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83073cc4
	if (cr0.eq) goto loc_83073CC4;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// b 0x83073d80
	goto loc_83073D80;
loc_83073CC4:
	// addi r31,r29,60
	r31.s64 = r29.s64 + 60;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r27,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r27.u32);
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x83073d6c
	if (cr6.eq) goto loc_83073D6C;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83073d6c
	if (cr0.eq) goto loc_83073D6C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,28(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83073d6c
	if (!cr0.eq) goto loc_83073D6C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// bl 0x82feeed8
	sub_82FEEED8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x83073d8c
	if (cr0.eq) goto loc_83073D8C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83073d8c
	if (!cr6.eq) goto loc_83073D8C;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r3,r30,60
	ctx.r3.s64 = r30.s64 + 60;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r27,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r27.u16);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// b 0x83073d84
	goto loc_83073D84;
loc_83073D6C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r27,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r27.u16);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
loc_83073D80:
	// lwz r3,32(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 32);
loc_83073D84:
	// bl 0x82feec20
	sub_82FEEC20(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_83073D8C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83073D98"))) PPC_WEAK_FUNC(sub_83073D98);
PPC_FUNC_IMPL(__imp__sub_83073D98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x831b0b04
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// mr r19,r7
	r19.u64 = ctx.r7.u64;
	// bl 0x8306f898
	sub_8306F898(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8306f940
	sub_8306F940(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830714b0
	sub_830714B0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83073c88
	sub_83073C88(ctx, base);
	// mr. r22,r3
	r22.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r22.s32, 0, xer);
	// bne 0x83073f74
	if (!cr0.eq) goto loc_83073F74;
	// addi r29,r31,120
	r29.s64 = r31.s64 + 120;
	// lwz r21,12(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// li r28,2
	r28.s64 = 2;
	// lwz r23,0(r29)
	r23.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83073ee0
	if (!cr0.eq) goto loc_83073EE0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x83073ee0
	if (cr6.eq) goto loc_83073EE0;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83073ee0
	if (cr0.eq) goto loc_83073EE0;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r28,0(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r3,52(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 52);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83073e74
	if (cr0.eq) goto loc_83073E74;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830709a8
	sub_830709A8(ctx, base);
loc_83073E74:
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83073eac
	if (!cr0.eq) goto loc_83073EAC;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,159
	ctx.r6.s64 = 159;
loc_83073E84:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
loc_83073EA4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83073f6c
	goto loc_83073F6C;
loc_83073EAC:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83070e50
	sub_83070E50(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x83073ea4
	if (cr0.eq) goto loc_83073EA4;
	// lbz r11,1(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83073ea4
	if (!cr0.eq) goto loc_83073EA4;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r28,1
	r28.s64 = 1;
	// bl 0x8306ffa8
	sub_8306FFA8(ctx, base);
loc_83073EE0:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r5,r11,-7732
	ctx.r5.s64 = r11.s64 + -7732;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x830a7240
	sub_830A7240(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x83073f40
	if (cr0.eq) goto loc_83073F40;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8307ce28
	sub_8307CE28(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// cmplw cr6,r23,r11
	cr6.compare<uint32_t>(r23.u32, r11.u32, xer);
	// beq cr6,0x83073f38
	if (cr6.eq) goto loc_83073F38;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8306ffa8
	sub_8306FFA8(ctx, base);
loc_83073F38:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// bne cr6,0x83073f74
	if (!cr6.eq) goto loc_83073F74;
loc_83073F40:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,-28480
	ctx.r5.s64 = r11.s64 + -28480;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r20
	ctx.r8.u64 = r20.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,40
	ctx.r6.s64 = 40;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
loc_83073F68:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_83073F6C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b54
	return;
loc_83073F74:
	// lwz r11,12(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 12);
	// and. r11,r11,r19
	r11.u64 = r11.u64 & r19.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83073f68
	if (cr0.eq) goto loc_83073F68;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,69
	ctx.r6.s64 = 69;
	// b 0x83073e84
	goto loc_83073E84;
}

__attribute__((alias("__imp__sub_83073F98"))) PPC_WEAK_FUNC(sub_83073F98);
PPC_FUNC_IMPL(__imp__sub_83073F98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,17
	ctx.r5.s64 = 17;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// lwz r8,160(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x830a7f60
	sub_830A7F60(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830a72e0
	sub_830A72E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x83071390
	sub_83071390(ctx, base);
	// lwz r11,220(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83074024
	if (cr0.eq) goto loc_83074024;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r11,-8248
	ctx.r7.s64 = r11.s64 + -8248;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r5,r11,-28480
	ctx.r5.s64 = r11.s64 + -28480;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,42
	ctx.r6.s64 = 42;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
loc_83074024:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830856f0
	sub_830856F0(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// bne 0x83074068
	if (!cr0.eq) goto loc_83074068;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r6,38
	ctx.r6.s64 = 38;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// b 0x83074090
	goto loc_83074090;
loc_83074068:
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307407c
	if (cr0.eq) goto loc_8307407C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x83072f80
	sub_83072F80(ctx, base);
loc_8307407C:
	// lwz r3,124(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83074090
	if (cr0.eq) goto loc_83074090;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x83073700
	sub_83073700(ctx, base);
loc_83074090:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_830740A8"))) PPC_WEAK_FUNC(sub_830740A8);
PPC_FUNC_IMPL(__imp__sub_830740A8) {
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

__attribute__((alias("__imp__sub_830740D8"))) PPC_WEAK_FUNC(sub_830740D8);
PPC_FUNC_IMPL(__imp__sub_830740D8) {
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
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// lwz r28,12(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r29,8(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r30,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r30.u32);
	// clrlwi. r25,r23,24
	r25.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// beq 0x8307415c
	if (cr0.eq) goto loc_8307415C;
	// lwz r29,4(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r28,-1
	r28.s64 = -1;
loc_8307411C:
	// li r3,96
	ctx.r3.s64 = 96;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830741e8
	if (cr0.eq) goto loc_830741E8;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r9,216(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// addi r4,r11,-27800
	ctx.r4.s64 = r11.s64 + -27800;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x8306dbe0
	sub_8306DBE0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x830741ec
	goto loc_830741EC;
loc_8307415C:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-7260
	ctx.r5.s64 = r11.s64 + -7260;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83074188
	if (cr0.eq) goto loc_83074188;
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83074198
	if (!cr0.eq) goto loc_83074198;
loc_83074188:
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lhz r11,2(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830741ac
	if (!cr0.eq) goto loc_830741AC;
loc_83074198:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r4,r11,-6536
	ctx.r4.s64 = r11.s64 + -6536;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830741b0
	if (cr0.eq) goto loc_830741B0;
loc_830741AC:
	// lwz r29,4(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 4);
loc_830741B0:
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307411c
	if (cr0.eq) goto loc_8307411C;
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r26)
	PPC_STORE_U8(r26.u32 + 0, r11.u8);
	// b 0x8307421c
	goto loc_8307421C;
loc_830741E8:
	// li r29,0
	r29.s64 = 0;
loc_830741EC:
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// stw r11,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r11.u32);
	// beq cr6,0x83074200
	if (cr6.eq) goto loc_83074200;
	// stw r11,28(r29)
	PPC_STORE_U32(r29.u32 + 28, r11.u32);
loc_83074200:
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830724c0
	sub_830724C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_8307421C:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_83074224"))) PPC_WEAK_FUNC(sub_83074224);
PPC_FUNC_IMPL(__imp__sub_83074224) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-176
	r31.s64 = r12.s64 + -176;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
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

__attribute__((alias("__imp__sub_83074260"))) PPC_WEAK_FUNC(sub_83074260);
PPC_FUNC_IMPL(__imp__sub_83074260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x831b0af0
	// addi r31,r1,-272
	r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r16,r5
	r16.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// mr r18,r6
	r18.u64 = ctx.r6.u64;
	// mr r19,r7
	r19.u64 = ctx.r7.u64;
	// stw r16,308(r31)
	PPC_STORE_U32(r31.u32 + 308, r16.u32);
	// mr r15,r8
	r15.u64 = ctx.r8.u64;
	// stw r30,292(r31)
	PPC_STORE_U32(r31.u32 + 292, r30.u32);
	// mr r17,r9
	r17.u64 = ctx.r9.u64;
	// stw r20,300(r31)
	PPC_STORE_U32(r31.u32 + 300, r20.u32);
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// bne cr6,0x830742b4
	if (!cr6.eq) goto loc_830742B4;
	// lwz r11,128(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83074814
	if (cr6.eq) goto loc_83074814;
loc_830742B4:
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306f898
	sub_8306F898(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306f940
	sub_8306F940(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830714b0
	sub_830714B0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
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
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// beq cr6,0x83074368
	if (cr6.eq) goto loc_83074368;
	// lwz r3,76(r16)
	ctx.r3.u64 = PPC_LOAD_U32(r16.u32 + 76);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83074368
	if (cr0.eq) goto loc_83074368;
	// addi r6,r31,104
	ctx.r6.s64 = r31.s64 + 104;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82fea480
	sub_82FEA480(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83074368
	if (cr0.eq) goto loc_83074368;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83074368
	if (cr0.eq) goto loc_83074368;
loc_8307433C:
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// li r6,84
	ctx.r6.s64 = 84;
loc_83074344:
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
loc_83074348:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
loc_83074350:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// b 0x83074814
	goto loc_83074814;
loc_83074368:
	// lwz r3,128(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 128);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83074388
	if (cr0.eq) goto loc_83074388;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8309df28
	sub_8309DF28(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8307433c
	if (!cr0.eq) goto loc_8307433C;
loc_83074388:
	// addi r26,r30,120
	r26.s64 = r30.s64 + 120;
	// lwz r22,12(r30)
	r22.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// li r24,2
	r24.s64 = 2;
	// lwz r23,0(r26)
	r23.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83074480
	if (!cr0.eq) goto loc_83074480;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
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
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// stw r3,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830743e4
	if (cr0.eq) goto loc_830743E4;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// bl 0x830709a8
	sub_830709A8(ctx, base);
loc_830743E4:
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830743f8
	if (!cr0.eq) goto loc_830743F8;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,159
	ctx.r6.s64 = 159;
	// b 0x83074344
	goto loc_83074344;
loc_830743F8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// bl 0x82feeed8
	sub_82FEEED8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x830745a0
	if (cr0.eq) goto loc_830745A0;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x830745a0
	if (!cr6.eq) goto loc_830745A0;
	// addi r5,r31,104
	ctx.r5.s64 = r31.s64 + 104;
	// lwz r3,24(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307444c
	if (cr0.eq) goto loc_8307444C;
	// lwz r28,0(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// bne 0x830744f8
	if (!cr0.eq) goto loc_830744F8;
loc_8307444C:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// bl 0x83070e50
	sub_83070E50(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x83074590
	if (cr0.eq) goto loc_83074590;
	// lbz r11,1(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83074590
	if (!cr0.eq) goto loc_83074590;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r24,1
	r24.s64 = 1;
	// bl 0x8306ffa8
	sub_8306FFA8(ctx, base);
loc_83074480:
	// addi r5,r31,104
	ctx.r5.s64 = r31.s64 + 104;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x83070a58
	sub_83070A58(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830744d8
	if (!cr0.eq) goto loc_830744D8;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// addi r5,r11,-8404
	ctx.r5.s64 = r11.s64 + -8404;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x830a7240
	sub_830A7240(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x830744d8
	if (cr0.eq) goto loc_830744D8;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830802d8
	sub_830802D8(ctx, base);
loc_830744D8:
	// addi r5,r31,104
	ctx.r5.s64 = r31.s64 + 104;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r28,0
	r28.s64 = 0;
	// beq 0x830744f8
	if (cr0.eq) goto loc_830744F8;
	// lwz r28,0(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_830744F8:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(r11.u32, r23.u32, xer);
	// beq cr6,0x83074518
	if (cr6.eq) goto loc_83074518;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306ffa8
	sub_8306FFA8(ctx, base);
loc_83074518:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x83074590
	if (cr6.eq) goto loc_83074590;
	// lwz r25,4(r28)
	r25.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// li r22,0
	r22.s64 = 0;
	// lwz r24,24(r28)
	r24.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// cmpwi cr6,r25,1
	cr6.compare<int32_t>(r25.s32, 1, xer);
	// bne cr6,0x830745b8
	if (!cr6.eq) goto loc_830745B8;
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(r15.u32, 0, xer);
	// bne cr6,0x83074558
	if (!cr6.eq) goto loc_83074558;
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(r17.u32, 0, xer);
	// beq cr6,0x830745b8
	if (cr6.eq) goto loc_830745B8;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830745b8
	if (!cr0.eq) goto loc_830745B8;
loc_83074558:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r14,1
	r14.s64 = 1;
	// addi r23,r11,-28032
	r23.s64 = r11.s64 + -28032;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// li r6,151
	ctx.r6.s64 = 151;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r22,r14
	r22.u64 = r14.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// b 0x830745c4
	goto loc_830745C4;
loc_83074590:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// li r6,40
	ctx.r6.s64 = 40;
	// b 0x83074348
	goto loc_83074348;
loc_830745A0:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r11,-28480
	ctx.r5.s64 = r11.s64 + -28480;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r6,72
	ctx.r6.s64 = 72;
	// b 0x83074350
	goto loc_83074350;
loc_830745B8:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r14,1
	r14.s64 = 1;
	// addi r23,r11,-28032
	r23.s64 = r11.s64 + -28032;
loc_830745C4:
	// lwz r21,44(r28)
	r21.u64 = PPC_LOAD_U32(r28.u32 + 44);
	// cmplwi r21,0
	cr0.compare<uint32_t>(r21.u32, 0, xer);
	// stw r21,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r21.u32);
	// beq 0x8307462c
	if (cr0.eq) goto loc_8307462C;
	// lwz r11,24(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 24);
	// cmpwi cr6,r11,20
	cr6.compare<int32_t>(r11.s32, 20, xer);
	// bne cr6,0x8307462c
	if (!cr6.eq) goto loc_8307462C;
	// lwz r11,128(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 128);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83074614
	if (cr0.eq) goto loc_83074614;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8307460c
	if (cr0.eq) goto loc_8307460C;
	// li r6,154
	ctx.r6.s64 = 154;
loc_830745FC:
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// b 0x83074350
	goto loc_83074350;
loc_8307460C:
	// stb r14,4(r11)
	PPC_STORE_U8(r11.u32 + 4, r14.u8);
	// b 0x8307462c
	goto loc_8307462C;
loc_83074614:
	// lbz r11,7(r16)
	r11.u64 = PPC_LOAD_U8(r16.u32 + 7);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83074628
	if (cr0.eq) goto loc_83074628;
	// li r6,153
	ctx.r6.s64 = 153;
	// b 0x830745fc
	goto loc_830745FC;
loc_83074628:
	// stb r14,7(r16)
	PPC_STORE_U8(r16.u32 + 7, r14.u8);
loc_8307462C:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// addi r4,r11,-6516
	ctx.r4.s64 = r11.s64 + -6516;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r4,r11,-6572
	ctx.r4.s64 = r11.s64 + -6572;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r3,76
	ctx.r3.s64 = 76;
	// lwz r29,40(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830746a0
	if (cr0.eq) goto loc_830746A0;
	// lwz r11,216(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// lwz r8,8(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// lwz r6,32(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x83089b18
	sub_83089B18(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x830746a4
	goto loc_830746A4;
loc_830746A0:
	// li r29,0
	r29.s64 = 0;
loc_830746A4:
	// stw r29,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r29.u32);
	// cmpwi cr6,r25,1
	cr6.compare<int32_t>(r25.s32, 1, xer);
	// stw r28,72(r29)
	PPC_STORE_U32(r29.u32 + 72, r28.u32);
	// stw r14,68(r29)
	PPC_STORE_U32(r29.u32 + 68, r14.u32);
	// bne cr6,0x830746d0
	if (!cr6.eq) goto loc_830746D0;
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830747dc
	if (cr0.eq) goto loc_830747DC;
	// clrlwi. r11,r22,24
	r11.u64 = r22.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830747dc
	if (!cr0.eq) goto loc_830747DC;
	// li r11,3
	r11.s64 = 3;
	// b 0x830746dc
	goto loc_830746DC;
loc_830746D0:
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830746e4
	if (cr0.eq) goto loc_830746E4;
	// li r11,8
	r11.s64 = 8;
loc_830746DC:
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// b 0x830747dc
	goto loc_830747DC;
loc_830746E4:
	// mr r28,r15
	r28.u64 = r15.u64;
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(r17.u32, 0, xer);
	// stw r28,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r28.u32);
	// beq 0x83074714
	if (cr0.eq) goto loc_83074714;
	// beq cr6,0x8307470c
	if (cr6.eq) goto loc_8307470C;
	// mr r28,r17
	r28.u64 = r17.u64;
	// li r11,3
	r11.s64 = 3;
	// stw r28,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r28.u32);
	// b 0x83074734
	goto loc_83074734;
loc_8307470C:
	// li r11,2
	r11.s64 = 2;
	// b 0x83074734
	goto loc_83074734;
loc_83074714:
	// beq cr6,0x83074728
	if (cr6.eq) goto loc_83074728;
	// mr r28,r17
	r28.u64 = r17.u64;
	// stw r14,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r14.u32);
	// stw r28,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r28.u32);
	// b 0x83074738
	goto loc_83074738;
loc_83074728:
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(r15.u32, 0, xer);
	// beq cr6,0x830747dc
	if (cr6.eq) goto loc_830747DC;
	// li r11,0
	r11.s64 = 0;
loc_83074734:
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_83074738:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x830747dc
	if (cr6.eq) goto loc_830747DC;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x830747cc
	if (cr6.eq) goto loc_830747CC;
	// lwz r11,24(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 24);
	// cmpwi cr6,r11,20
	cr6.compare<int32_t>(r11.s32, 20, xer);
	// bne cr6,0x83074780
	if (!cr6.eq) goto loc_83074780;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r11,-7108
	ctx.r7.s64 = r11.s64 + -7108;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
	// li r6,152
	ctx.r6.s64 = 152;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// b 0x830747cc
	goto loc_830747CC;
loc_83074780:
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r6,212(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// lwz r11,28(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
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
	// b 0x830747cc
	goto loc_830747CC;
	// b 0x830747b8
	goto loc_830747B8;
loc_830747B8:
	// lwz r28,96(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// lwz r29,100(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r21,104(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// lwz r16,308(r31)
	r16.u64 = PPC_LOAD_U32(r31.u32 + 308);
	// lwz r30,292(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 292);
loc_830747CC:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83066280
	sub_83066280(ctx, base);
	// li r14,1
	r14.s64 = 1;
loc_830747DC:
	// li r28,0
	r28.s64 = 0;
	// stw r21,44(r29)
	PPC_STORE_U32(r29.u32 + 44, r21.u32);
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// beq cr6,0x830747fc
	if (cr6.eq) goto loc_830747FC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// mr r28,r14
	r28.u64 = r14.u64;
	// bl 0x83048620
	sub_83048620(ctx, base);
loc_830747FC:
	// lwz r3,128(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 128);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83074814
	if (cr0.eq) goto loc_83074814;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83073758
	sub_83073758(ctx, base);
loc_83074814:
	// addi r1,r31,272
	ctx.r1.s64 = r31.s64 + 272;
	// b 0x831b0b40
	return;
}

__attribute__((alias("__imp__sub_83074824"))) PPC_WEAK_FUNC(sub_83074824);
PPC_FUNC_IMPL(__imp__sub_83074824) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-272
	r31.s64 = r12.s64 + -272;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,300(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 300);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,73
	ctx.r6.s64 = 73;
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r5,r11,-28480
	ctx.r5.s64 = r11.s64 + -28480;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lis r3,-31993
	ctx.r3.s64 = -2096693248;
	// addi r3,r3,18356
	ctx.r3.s64 = ctx.r3.s64 + 18356;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b40
	return;
}

__attribute__((alias("__imp__sub_83074880"))) PPC_WEAK_FUNC(sub_83074880);
PPC_FUNC_IMPL(__imp__sub_83074880) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_830748A0"))) PPC_WEAK_FUNC(sub_830748A0);
PPC_FUNC_IMPL(__imp__sub_830748A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-272
	r31.s64 = r12.s64 + -272;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,96(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// addi r5,r11,-28480
	ctx.r5.s64 = r11.s64 + -28480;
	// lwz r4,300(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 300);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,87
	ctx.r6.s64 = 87;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lis r3,-31993
	ctx.r3.s64 = -2096693248;
	// addi r3,r3,18360
	ctx.r3.s64 = ctx.r3.s64 + 18360;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b40
	return;
}

__attribute__((alias("__imp__sub_830748F0"))) PPC_WEAK_FUNC(sub_830748F0);
PPC_FUNC_IMPL(__imp__sub_830748F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-272
	r31.s64 = r12.s64 + -272;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,292(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
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

__attribute__((alias("__imp__sub_83074920"))) PPC_WEAK_FUNC(sub_83074920);
PPC_FUNC_IMPL(__imp__sub_83074920) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// bl 0x82feeed8
	sub_82FEEED8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x830749dc
	if (cr0.eq) goto loc_830749DC;
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
	// bne cr6,0x830749dc
	if (!cr6.eq) goto loc_830749DC;
	// addi r31,r31,60
	r31.s64 = r31.s64 + 60;
	// li r28,0
	r28.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r28,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r28.u32);
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r28,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r28.u16);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r3,28(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830749d4
	if (!cr0.eq) goto loc_830749D4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// b 0x83074a08
	goto loc_83074A08;
loc_830749D4:
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x83074a08
	goto loc_83074A08;
loc_830749DC:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,-28480
	ctx.r5.s64 = r11.s64 + -28480;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,72
	ctx.r6.s64 = 72;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83074A08:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83074A18"))) PPC_WEAK_FUNC(sub_83074A18);
PPC_FUNC_IMPL(__imp__sub_83074A18) {
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
	// addi r31,r1,-288
	r31.s64 = ctx.r1.s64 + -288;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r24,0
	r24.s64 = 0;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// stw r30,308(r31)
	PPC_STORE_U32(r31.u32 + 308, r30.u32);
	// mr r28,r24
	r28.u64 = r24.u64;
	// mr r29,r24
	r29.u64 = r24.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x83074a80
	if (cr6.eq) goto loc_83074A80;
	// li r11,-1
	r11.s64 = -1;
	// addi r29,r30,60
	r29.s64 = r30.s64 + 60;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// sth r11,80(r31)
	PPC_STORE_U16(r31.u32 + 80, r11.u16);
	// bl 0x82fda7f0
	sub_82FDA7F0(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r24,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r24.u16);
	// lwz r29,24(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 24);
loc_83074A80:
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83074ac8
	if (cr6.eq) goto loc_83074AC8;
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// stw r26,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r26.u32);
	// stw r24,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r24.u32);
	// stw r29,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r29.u32);
	// stw r25,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r25.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bne 0x83074c1c
	if (!cr0.eq) goto loc_83074C1C;
loc_83074AC8:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x83074c1c
	if (cr6.eq) goto loc_83074C1C;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// lwz r4,212(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// bl 0x8301c3d8
	sub_8301C3D8(ctx, base);
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// addi r6,r31,160
	ctx.r6.s64 = r31.s64 + 160;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// bl 0x8301d860
	sub_8301D860(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83074b8c
	if (cr0.eq) goto loc_83074B8C;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x8301c488
	sub_8301C488(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83074b8c
	if (!cr0.eq) goto loc_83074B8C;
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// lbz r11,8(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83074b58
	if (cr0.eq) goto loc_83074B58;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x8301c4c0
	sub_8301C4C0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83074b58
	if (cr0.eq) goto loc_83074B58;
	// lis r11,-32233
	r11.s64 = -2112421888;
	// lwz r7,212(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// li r6,99
	ctx.r6.s64 = 99;
	// addi r4,r11,-30784
	ctx.r4.s64 = r11.s64 + -30784;
	// li r5,6633
	ctx.r5.s64 = 6633;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82fe1f38
	sub_82FE1F38(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// addi r4,r11,-8356
	ctx.r4.s64 = r11.s64 + -8356;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_83074B58:
	// li r3,72
	ctx.r3.s64 = 72;
	// lwz r4,212(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83074b80
	if (cr0.eq) goto loc_83074B80;
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// lwz r5,212(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// bl 0x8301c1d0
	sub_8301C1D0(ctx, base);
	// b 0x83074b84
	goto loc_83074B84;
loc_83074B80:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_83074B84:
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x83074c14
	goto loc_83074C14;
loc_83074B8C:
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// lbz r11,8(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83074c28
	if (!cr0.eq) goto loc_83074C28;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,212(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// lwz r11,212(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// addi r29,r30,60
	r29.s64 = r30.s64 + 60;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82fe39e0
	sub_82FE39E0(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,212(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83074c00
	if (cr0.eq) goto loc_83074C00;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r24,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r24.u16);
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r6,212(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// bl 0x82fe0ed0
	sub_82FE0ED0(ctx, base);
	// b 0x83074c04
	goto loc_83074C04;
loc_83074C00:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_83074C04:
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82fdae08
	sub_82FDAE08(ctx, base);
loc_83074C14:
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x8301cf70
	sub_8301CF70(ctx, base);
loc_83074C1C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r31,288
	ctx.r1.s64 = r31.s64 + 288;
	// b 0x831b0b68
	return;
loc_83074C28:
	// lis r11,-32233
	r11.s64 = -2112421888;
	// lwz r7,212(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// li r6,99
	ctx.r6.s64 = 99;
	// addi r4,r11,-30784
	ctx.r4.s64 = r11.s64 + -30784;
	// li r5,6628
	ctx.r5.s64 = 6628;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82fe1f38
	sub_82FE1F38(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// addi r4,r11,-8356
	ctx.r4.s64 = r11.s64 + -8356;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_83074C54"))) PPC_WEAK_FUNC(sub_83074C54);
PPC_FUNC_IMPL(__imp__sub_83074C54) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-288
	r31.s64 = r12.s64 + -288;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x8301cf70
	sub_8301CF70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83074C7C"))) PPC_WEAK_FUNC(sub_83074C7C);
PPC_FUNC_IMPL(__imp__sub_83074C7C) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,308(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 308);
	// lwz r4,212(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 212);
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

__attribute__((alias("__imp__sub_83074CAC"))) PPC_WEAK_FUNC(sub_83074CAC);
PPC_FUNC_IMPL(__imp__sub_83074CAC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-288
	r31.s64 = r12.s64 + -288;
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

__attribute__((alias("__imp__sub_83074CD4"))) PPC_WEAK_FUNC(sub_83074CD4);
PPC_FUNC_IMPL(__imp__sub_83074CD4) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,308(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 308);
	// lwz r4,212(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 212);
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

__attribute__((alias("__imp__sub_83074D08"))) PPC_WEAK_FUNC(sub_83074D08);
PPC_FUNC_IMPL(__imp__sub_83074D08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x831b0b04
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r19,r4
	r19.u64 = ctx.r4.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// lwz r11,72(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 72);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83074d38
	if (cr0.eq) goto loc_83074D38;
	// lwz r24,8(r11)
	r24.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x83074d3c
	goto loc_83074D3C;
loc_83074D38:
	// li r24,0
	r24.s64 = 0;
loc_83074D3C:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x83074ed0
	if (cr6.eq) goto loc_83074ED0;
	// lwz r3,52(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 52);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r26,24(r23)
	r26.u64 = PPC_LOAD_U32(r23.u32 + 24);
	// addi r4,r11,-8608
	ctx.r4.s64 = r11.s64 + -8608;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// li r25,0
	r25.s64 = 0;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x83074ed0
	if (cr6.eq) goto loc_83074ED0;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r21,r11,-28032
	r21.s64 = r11.s64 + -28032;
loc_83074D7C:
	// lwz r3,72(r20)
	ctx.r3.u64 = PPC_LOAD_U32(r20.u32 + 72);
	// lwz r29,40(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83074d94
	if (!cr0.eq) goto loc_83074D94;
	// li r31,0
	r31.s64 = 0;
	// b 0x83074da0
	goto loc_83074DA0;
loc_83074D94:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_83074DA0:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r27,36(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r27,-1
	cr6.compare<int32_t>(r27.s32, -1, xer);
	// lwz r30,32(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// beq cr6,0x83074eb8
	if (cr6.eq) goto loc_83074EB8;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// beq cr6,0x83074e18
	if (cr6.eq) goto loc_83074E18;
	// cmpw cr6,r30,r22
	cr6.compare<int32_t>(r30.s32, r22.s32, xer);
	// beq cr6,0x83074e18
	if (cr6.eq) goto loc_83074E18;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// beq cr6,0x83074e18
	if (cr6.eq) goto loc_83074E18;
	// lwz r3,52(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 52);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,36(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 36);
	// bl 0x82feeed8
	sub_82FEEED8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83074ec4
	if (cr0.eq) goto loc_83074EC4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83074ec4
	if (!cr6.eq) goto loc_83074EC4;
loc_83074E18:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r30,16(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r11,44(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83074e94
	if (cr0.eq) goto loc_83074E94;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x83074e6c
	if (!cr6.eq) goto loc_83074E6C;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x83074ec4
	if (cr6.eq) goto loc_83074EC4;
loc_83074E6C:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// b 0x83074ec4
	goto loc_83074EC4;
loc_83074E94:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// stw r26,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r26.u32);
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lwz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x83020790
	sub_83020790(ctx, base);
	// stw r27,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r27.u32);
loc_83074EB8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x83072f80
	sub_83072F80(ctx, base);
loc_83074EC4:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// cmplw cr6,r25,r24
	cr6.compare<uint32_t>(r25.u32, r24.u32, xer);
	// blt cr6,0x83074d7c
	if (cr6.lt) goto loc_83074D7C;
loc_83074ED0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b54
	return;
}

__attribute__((alias("__imp__sub_83074ED8"))) PPC_WEAK_FUNC(sub_83074ED8);
PPC_FUNC_IMPL(__imp__sub_83074ED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// li r25,0
	r25.s64 = 0;
	// lwz r11,24(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 24);
	// lwz r28,24(r26)
	r28.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// lwz r23,8(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi r23,0
	cr0.compare<uint32_t>(r23.u32, 0, xer);
	// beq 0x83074fec
	if (cr0.eq) goto loc_83074FEC;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r21,r11,-28032
	r21.s64 = r11.s64 + -28032;
loc_83074F14:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,24(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 24);
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r27,36(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r27,-1
	cr6.compare<int32_t>(r27.s32, -1, xer);
	// beq cr6,0x83074fe0
	if (cr6.eq) goto loc_83074FE0;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r3,40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r30,16(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83074fac
	if (cr0.eq) goto loc_83074FAC;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x83074f84
	if (!cr6.eq) goto loc_83074F84;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x83074fe0
	if (cr6.eq) goto loc_83074FE0;
loc_83074F84:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// b 0x83074fe0
	goto loc_83074FE0;
loc_83074FAC:
	// stw r28,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r28.u32);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// lwz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x83020790
	sub_83020790(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r27,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r27.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x83072f80
	sub_83072F80(ctx, base);
loc_83074FE0:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// cmplw cr6,r25,r23
	cr6.compare<uint32_t>(r25.u32, r23.u32, xer);
	// blt cr6,0x83074f14
	if (cr6.lt) goto loc_83074F14;
loc_83074FEC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_83074FF8"))) PPC_WEAK_FUNC(sub_83074FF8);
PPC_FUNC_IMPL(__imp__sub_83074FF8) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// lwz r11,24(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 24);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// li r26,0
	r26.s64 = 0;
	// lwz r22,8(r11)
	r22.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// beq cr6,0x83075034
	if (cr6.eq) goto loc_83075034;
	// lwz r24,24(r27)
	r24.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// b 0x83075038
	goto loc_83075038;
loc_83075034:
	// mr r24,r26
	r24.u64 = r26.u64;
loc_83075038:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x83075044
	if (cr6.eq) goto loc_83075044;
	// stb r26,4(r25)
	PPC_STORE_U8(r25.u32 + 4, r26.u8);
loc_83075044:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x83075148
	if (cr6.eq) goto loc_83075148;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r23,r11,-28032
	r23.s64 = r11.s64 + -28032;
loc_83075054:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,24(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 24);
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x83075128
	if (cr6.eq) goto loc_83075128;
	// lwz r29,36(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(r29.s32, -1, xer);
	// beq cr6,0x8307511c
	if (cr6.eq) goto loc_8307511C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,40(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// lwz r7,12(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// lwz r30,16(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830750f4
	if (cr0.eq) goto loc_830750F4;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x830750cc
	if (!cr6.eq) goto loc_830750CC;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x8307513c
	if (cr6.eq) goto loc_8307513C;
loc_830750CC:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// b 0x8307513c
	goto loc_8307513C;
loc_830750F4:
	// stw r24,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r24.u32);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// lwz r10,40(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// lwz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x83020790
	sub_83020790(ctx, base);
	// stw r29,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r29.u32);
loc_8307511C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x83072f80
	sub_83072F80(ctx, base);
loc_83075128:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// beq cr6,0x8307513c
	if (cr6.eq) goto loc_8307513C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x83073700
	sub_83073700(ctx, base);
loc_8307513C:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmplw cr6,r26,r22
	cr6.compare<uint32_t>(r26.u32, r22.u32, xer);
	// blt cr6,0x83075054
	if (cr6.lt) goto loc_83075054;
loc_83075148:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b58
	return;
}

__attribute__((alias("__imp__sub_83075158"))) PPC_WEAK_FUNC(sub_83075158);
PPC_FUNC_IMPL(__imp__sub_83075158) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x831b0b04
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r5
	r19.u64 = ctx.r5.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// lwz r11,16(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 16);
	// stw r26,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r26.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83075194
	if (cr0.eq) goto loc_83075194;
	// lwz r21,8(r11)
	r21.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x83075198
	goto loc_83075198;
loc_83075194:
	// li r21,0
	r21.s64 = 0;
loc_83075198:
	// li r23,0
	r23.s64 = 0;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x83075318
	if (cr6.eq) goto loc_83075318;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r20,1
	r20.s64 = 1;
	// addi r27,r11,-28032
	r27.s64 = r11.s64 + -28032;
loc_830751B0:
	// lwz r3,16(r19)
	ctx.r3.u64 = PPC_LOAD_U32(r19.u32 + 16);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830751cc
	if (cr0.eq) goto loc_830751CC;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x830751d0
	goto loc_830751D0;
loc_830751CC:
	// li r28,0
	r28.s64 = 0;
loc_830751D0:
	// lwz r11,40(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// lwz r29,44(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 44);
	// lwz r30,16(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// beq cr6,0x830752bc
	if (cr6.eq) goto loc_830752BC;
	// lwz r3,76(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 76);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307523c
	if (cr0.eq) goto loc_8307523C;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82fea480
	sub_82FEA480(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307523c
	if (cr0.eq) goto loc_8307523C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307523c
	if (cr0.eq) goto loc_8307523C;
loc_83075214:
	// li r6,53
	ctx.r6.s64 = 53;
loc_83075218:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// b 0x8307530c
	goto loc_8307530C;
loc_8307523C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x83075268
	if (cr6.eq) goto loc_83075268;
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// cmpwi cr6,r11,20
	cr6.compare<int32_t>(r11.s32, 20, xer);
	// bne cr6,0x83075268
	if (!cr6.eq) goto loc_83075268;
	// lbz r11,7(r24)
	r11.u64 = PPC_LOAD_U8(r24.u32 + 7);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83075264
	if (cr0.eq) goto loc_83075264;
	// li r6,153
	ctx.r6.s64 = 153;
	// b 0x83075218
	goto loc_83075218;
loc_83075264:
	// stb r20,7(r24)
	PPC_STORE_U8(r24.u32 + 7, r20.u8);
loc_83075268:
	// li r3,76
	ctx.r3.s64 = 76;
	// lwz r4,216(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83075290
	if (cr0.eq) goto loc_83075290;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x83089f98
	sub_83089F98(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x83075294
	goto loc_83075294;
loc_83075290:
	// li r30,0
	r30.s64 = 0;
loc_83075294:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x83048620
	sub_83048620(ctx, base);
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x830752b0
	if (!cr6.eq) goto loc_830752B0;
	// stw r28,72(r30)
	PPC_STORE_U32(r30.u32 + 72, r28.u32);
loc_830752B0:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x8307530c
	if (cr6.eq) goto loc_8307530C;
	// b 0x830752fc
	goto loc_830752FC;
loc_830752BC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8309df28
	sub_8309DF28(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83075214
	if (!cr0.eq) goto loc_83075214;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x830752fc
	if (cr6.eq) goto loc_830752FC;
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// cmpwi cr6,r11,20
	cr6.compare<int32_t>(r11.s32, 20, xer);
	// bne cr6,0x830752fc
	if (!cr6.eq) goto loc_830752FC;
	// lbz r11,4(r22)
	r11.u64 = PPC_LOAD_U8(r22.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830752f8
	if (cr0.eq) goto loc_830752F8;
	// li r6,154
	ctx.r6.s64 = 154;
	// b 0x83075218
	goto loc_83075218;
loc_830752F8:
	// stb r20,4(r22)
	PPC_STORE_U8(r22.u32 + 4, r20.u8);
loc_830752FC:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x83073758
	sub_83073758(ctx, base);
loc_8307530C:
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// cmplw cr6,r23,r21
	cr6.compare<uint32_t>(r23.u32, r21.u32, xer);
	// blt cr6,0x830751b0
	if (cr6.lt) goto loc_830751B0;
loc_83075318:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x8307537c
	if (cr6.eq) goto loc_8307537C;
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83075334
	if (cr0.eq) goto loc_83075334;
	// lwz r29,8(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x83075338
	goto loc_83075338;
loc_83075334:
	// li r29,0
	r29.s64 = 0;
loc_83075338:
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8307537c
	if (cr6.eq) goto loc_8307537C;
loc_83075344:
	// lwz r3,20(r19)
	ctx.r3.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83075360
	if (cr0.eq) goto loc_83075360;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83075364
	goto loc_83075364;
loc_83075360:
	// li r4,0
	ctx.r4.s64 = 0;
loc_83075364:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x83073898
	sub_83073898(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// blt cr6,0x83075344
	if (cr6.lt) goto loc_83075344;
loc_8307537C:
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x831b0b54
	return;
}

__attribute__((alias("__imp__sub_83075384"))) PPC_WEAK_FUNC(sub_83075384);
PPC_FUNC_IMPL(__imp__sub_83075384) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
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

__attribute__((alias("__imp__sub_830753C0"))) PPC_WEAK_FUNC(sub_830753C0);
PPC_FUNC_IMPL(__imp__sub_830753C0) {
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
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// lwz r23,8(r26)
	r23.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// lwz r11,8(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// cmpwi cr6,r23,11
	cr6.compare<int32_t>(r23.s32, 11, xer);
	// beq cr6,0x83075678
	if (cr6.eq) goto loc_83075678;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x83075678
	if (cr6.eq) goto loc_83075678;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(r11.s32, 11, xer);
	// beq cr6,0x83075638
	if (cr6.eq) goto loc_83075638;
	// cmpwi cr6,r23,-1
	cr6.compare<int32_t>(r23.s32, -1, xer);
	// beq cr6,0x83075638
	if (cr6.eq) goto loc_83075638;
	// cmpwi cr6,r23,12
	cr6.compare<int32_t>(r23.s32, 12, xer);
	// bne cr6,0x83075414
	if (!cr6.eq) goto loc_83075414;
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// beq cr6,0x83075430
	if (cr6.eq) goto loc_83075430;
loc_83075414:
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// bne cr6,0x83075504
	if (!cr6.eq) goto loc_83075504;
	// cmpwi cr6,r23,13
	cr6.compare<int32_t>(r23.s32, 13, xer);
	// bne cr6,0x830755ec
	if (!cr6.eq) goto loc_830755EC;
	// lwz r11,40(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 40);
	// lwz r28,56(r26)
	r28.u64 = PPC_LOAD_U32(r26.u32 + 56);
	// b 0x83075438
	goto loc_83075438;
loc_83075430:
	// lwz r11,40(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 40);
	// lwz r28,56(r24)
	r28.u64 = PPC_LOAD_U32(r24.u32 + 56);
loc_83075438:
	// lwz r25,32(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8307544c
	if (cr6.eq) goto loc_8307544C;
	// lwz r29,4(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// b 0x83075450
	goto loc_83075450;
loc_8307544C:
	// li r29,0
	r29.s64 = 0;
loc_83075450:
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x830754f8
	if (cr0.eq) goto loc_830754F8;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,216(r22)
	ctx.r5.u64 = PPC_LOAD_U32(r22.u32 + 216);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// li r27,0
	r27.s64 = 0;
	// bl 0x83070930
	sub_83070930(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x830754c4
	if (cr6.eq) goto loc_830754C4;
loc_8307547C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8308ea58
	sub_8308EA58(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(r11.u32, r25.u32, xer);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// beq cr6,0x830754b4
	if (cr6.eq) goto loc_830754B4;
	// lwz r10,8(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x830754b4
	if (cr6.eq) goto loc_830754B4;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8305c228
	sub_8305C228(ctx, base);
	// b 0x830754b8
	goto loc_830754B8;
loc_830754B4:
	// li r27,1
	r27.s64 = 1;
loc_830754B8:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// blt cr6,0x8307547c
	if (cr6.lt) goto loc_8307547C;
loc_830754C4:
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830754d4
	if (!cr0.eq) goto loc_830754D4;
	// cmpwi cr6,r23,13
	cr6.compare<int32_t>(r23.s32, 13, xer);
	// bne cr6,0x830754e0
	if (!cr6.eq) goto loc_830754E0;
loc_830754D4:
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x83070d88
	sub_83070D88(ctx, base);
loc_830754E0:
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830754F8:
	// cmpwi cr6,r23,13
	cr6.compare<int32_t>(r23.s32, 13, xer);
	// bne cr6,0x83075678
	if (!cr6.eq) goto loc_83075678;
	// b 0x83075658
	goto loc_83075658;
loc_83075504:
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// bne cr6,0x83075678
	if (!cr6.eq) goto loc_83075678;
	// cmpwi cr6,r23,13
	cr6.compare<int32_t>(r23.s32, 13, xer);
	// bne cr6,0x83075678
	if (!cr6.eq) goto loc_83075678;
	// lwz r28,56(r26)
	r28.u64 = PPC_LOAD_U32(r26.u32 + 56);
	// lwz r27,56(r24)
	r27.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// beq 0x8307552c
	if (cr0.eq) goto loc_8307552C;
	// lwz r29,4(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// b 0x83075530
	goto loc_83075530;
loc_8307552C:
	// li r29,0
	r29.s64 = 0;
loc_83075530:
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x830755cc
	if (cr0.eq) goto loc_830755CC;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,216(r22)
	ctx.r5.u64 = PPC_LOAD_U32(r22.u32 + 216);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83070930
	sub_83070930(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x830755a4
	if (cr6.eq) goto loc_830755A4;
loc_83075558:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8308ea58
	sub_8308EA58(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// beq cr6,0x83075598
	if (cr6.eq) goto loc_83075598;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x830708e0
	sub_830708E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83075598
	if (cr0.eq) goto loc_83075598;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8305c228
	sub_8305C228(ctx, base);
loc_83075598:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// blt cr6,0x83075558
	if (cr6.lt) goto loc_83075558;
loc_830755A4:
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x83070d88
	sub_83070D88(ctx, base);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83075678
	goto loc_83075678;
loc_830755CC:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x83075678
	if (cr6.eq) goto loc_83075678;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83075678
	if (cr6.eq) goto loc_83075678;
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r11.u32);
	// b 0x83075678
	goto loc_83075678;
loc_830755EC:
	// cmpwi cr6,r23,12
	cr6.compare<int32_t>(r23.s32, 12, xer);
	// bne cr6,0x83075678
	if (!cr6.eq) goto loc_83075678;
	// lwz r11,40(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 40);
	// lwz r8,40(r24)
	ctx.r8.u64 = PPC_LOAD_U32(r24.u32 + 40);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r11,32(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x83075678
	if (cr6.eq) goto loc_83075678;
	// lwz r10,8(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83075620
	if (!cr6.eq) goto loc_83075620;
	// stw r9,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, ctx.r9.u32);
	// b 0x83075678
	goto loc_83075678;
loc_83075620:
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x83075678
	if (cr6.eq) goto loc_83075678;
	// li r11,-1
	r11.s64 = -1;
	// stw r10,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, ctx.r10.u32);
	// stw r11,8(r24)
	PPC_STORE_U32(r24.u32 + 8, r11.u32);
	// b 0x83075678
	goto loc_83075678;
loc_83075638:
	// lwz r11,56(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83075658
	if (cr0.eq) goto loc_83075658;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83075658
	if (cr6.eq) goto loc_83075658;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_83075658:
	// lwz r11,40(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 40);
	// lwz r10,40(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 40);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, r11.u32);
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// stw r11,8(r24)
	PPC_STORE_U32(r24.u32 + 8, r11.u32);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// stw r11,4(r24)
	PPC_STORE_U32(r24.u32 + 4, r11.u32);
loc_83075678:
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_83075680"))) PPC_WEAK_FUNC(sub_83075680);
PPC_FUNC_IMPL(__imp__sub_83075680) {
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
	// bl 0x83034d68
	sub_83034D68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830756A8"))) PPC_WEAK_FUNC(sub_830756A8);
PPC_FUNC_IMPL(__imp__sub_830756A8) {
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
	// bl 0x83034d68
	sub_83034D68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830756D8"))) PPC_WEAK_FUNC(sub_830756D8);
PPC_FUNC_IMPL(__imp__sub_830756D8) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b14
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r23,8(r29)
	r23.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmpwi cr6,r23,11
	cr6.compare<int32_t>(r23.s32, 11, xer);
	// beq cr6,0x83075998
	if (cr6.eq) goto loc_83075998;
	// cmpwi cr6,r23,-1
	cr6.compare<int32_t>(r23.s32, -1, xer);
	// beq cr6,0x83075998
	if (cr6.eq) goto loc_83075998;
	// cmpwi cr6,r10,11
	cr6.compare<int32_t>(ctx.r10.s32, 11, xer);
	// beq cr6,0x83075958
	if (cr6.eq) goto loc_83075958;
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x83075958
	if (cr6.eq) goto loc_83075958;
	// li r24,12
	r24.s64 = 12;
	// cmpwi cr6,r23,13
	cr6.compare<int32_t>(r23.s32, 13, xer);
	// bne cr6,0x830757fc
	if (!cr6.eq) goto loc_830757FC;
	// cmpwi cr6,r10,13
	cr6.compare<int32_t>(ctx.r10.s32, 13, xer);
	// bne cr6,0x83075830
	if (!cr6.eq) goto loc_83075830;
	// lwz r27,56(r5)
	r27.u64 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	// lwz r28,56(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// cmplwi r27,0
	cr0.compare<uint32_t>(r27.u32, 0, xer);
	// beq 0x83075744
	if (cr0.eq) goto loc_83075744;
	// lwz r26,4(r27)
	r26.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// b 0x83075748
	goto loc_83075748;
loc_83075744:
	// li r26,0
	r26.s64 = 0;
loc_83075748:
	// cmplwi r26,0
	cr0.compare<uint32_t>(r26.u32, 0, xer);
	// beq 0x83075998
	if (cr0.eq) goto loc_83075998;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x830757ec
	if (cr6.eq) goto loc_830757EC;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830757ec
	if (cr0.eq) goto loc_830757EC;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83070688
	sub_83070688(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x830757c4
	if (cr6.eq) goto loc_830757C4;
loc_8307577C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8308ea58
	sub_8308EA58(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x830708e0
	sub_830708E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830757b8
	if (!cr0.eq) goto loc_830757B8;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8305c228
	sub_8305C228(ctx, base);
loc_830757B8:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(r30.u32, r26.u32, xer);
	// blt cr6,0x8307577c
	if (cr6.lt) goto loc_8307577C;
loc_830757C4:
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83070d88
	sub_83070D88(ctx, base);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83075998
	goto loc_83075998;
loc_830757EC:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83070d88
	sub_83070D88(ctx, base);
	// b 0x83075998
	goto loc_83075998;
loc_830757FC:
	// cmpwi cr6,r23,12
	cr6.compare<int32_t>(r23.s32, 12, xer);
	// bne cr6,0x83075830
	if (!cr6.eq) goto loc_83075830;
	// cmpwi cr6,r10,12
	cr6.compare<int32_t>(ctx.r10.s32, 12, xer);
	// bne cr6,0x83075848
	if (!cr6.eq) goto loc_83075848;
	// lwz r11,40(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// lwz r9,40(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r9,32(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x83075998
	if (cr6.eq) goto loc_83075998;
	// lwz r9,8(r25)
	ctx.r9.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// stw r9,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r9.u32);
	// stw r24,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r24.u32);
loc_83075830:
	// cmpwi cr6,r10,12
	cr6.compare<int32_t>(ctx.r10.s32, 12, xer);
	// bne cr6,0x83075840
	if (!cr6.eq) goto loc_83075840;
	// cmpwi cr6,r23,13
	cr6.compare<int32_t>(r23.s32, 13, xer);
	// beq cr6,0x83075850
	if (cr6.eq) goto loc_83075850;
loc_83075840:
	// cmpwi cr6,r23,12
	cr6.compare<int32_t>(r23.s32, 12, xer);
	// bne cr6,0x83075998
	if (!cr6.eq) goto loc_83075998;
loc_83075848:
	// cmpwi cr6,r10,13
	cr6.compare<int32_t>(ctx.r10.s32, 13, xer);
	// bne cr6,0x83075998
	if (!cr6.eq) goto loc_83075998;
loc_83075850:
	// lwz r28,40(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// cmpwi cr6,r10,13
	cr6.compare<int32_t>(ctx.r10.s32, 13, xer);
	// bne cr6,0x83075868
	if (!cr6.eq) goto loc_83075868;
	// lwz r30,56(r5)
	r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	// lwz r26,32(r28)
	r26.u64 = PPC_LOAD_U32(r28.u32 + 32);
	// b 0x83075874
	goto loc_83075874;
loc_83075868:
	// lwz r11,40(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	// lwz r30,56(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// lwz r26,32(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 32);
loc_83075874:
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// bne cr6,0x830758b0
	if (!cr6.eq) goto loc_830758B0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x830758a4
	if (cr6.eq) goto loc_830758A4;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830708e0
	sub_830708E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830758f0
	if (!cr0.eq) goto loc_830758F0;
loc_830758A4:
	// cmpwi cr6,r23,13
	cr6.compare<int32_t>(r23.s32, 13, xer);
	// bne cr6,0x83075934
	if (!cr6.eq) goto loc_83075934;
	// b 0x83075900
	goto loc_83075900;
loc_830758B0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x83075910
	if (cr6.eq) goto loc_83075910;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830708e0
	sub_830708E0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830708e0
	sub_830708E0(ctx, base);
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830758f8
	if (cr0.eq) goto loc_830758F8;
	// clrlwi. r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x830758f8
	if (cr0.eq) goto loc_830758F8;
loc_830758F0:
	// li r11,11
	r11.s64 = 11;
	// b 0x83075914
	goto loc_83075914;
loc_830758F8:
	// clrlwi. r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83075908
	if (cr0.eq) goto loc_83075908;
loc_83075900:
	// stw r24,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r24.u32);
	// b 0x83075918
	goto loc_83075918;
loc_83075908:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83075924
	if (cr6.eq) goto loc_83075924;
loc_83075910:
	// li r11,-1
	r11.s64 = -1;
loc_83075914:
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
loc_83075918:
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// stw r11,32(r28)
	PPC_STORE_U32(r28.u32 + 32, r11.u32);
	// b 0x83075934
	goto loc_83075934;
loc_83075924:
	// cmpwi cr6,r23,13
	cr6.compare<int32_t>(r23.s32, 13, xer);
	// bne cr6,0x83075934
	if (!cr6.eq) goto loc_83075934;
	// stw r24,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r24.u32);
	// stw r26,32(r28)
	PPC_STORE_U32(r28.u32 + 32, r26.u32);
loc_83075934:
	// lwz r11,56(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83075998
	if (cr0.eq) goto loc_83075998;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83075998
	if (cr6.eq) goto loc_83075998;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// b 0x83075998
	goto loc_83075998;
loc_83075958:
	// lwz r11,56(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83075978
	if (cr0.eq) goto loc_83075978;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83075978
	if (cr6.eq) goto loc_83075978;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_83075978:
	// lwz r11,40(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, r11.u32);
	// lwz r11,8(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_83075998:
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_830759A0"))) PPC_WEAK_FUNC(sub_830759A0);
PPC_FUNC_IMPL(__imp__sub_830759A0) {
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
	// bl 0x83034d68
	sub_83034D68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830759C8"))) PPC_WEAK_FUNC(sub_830759C8);
PPC_FUNC_IMPL(__imp__sub_830759C8) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// bl 0x830486f8
	sub_830486F8(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// lwz r21,64(r22)
	r21.u64 = PPC_LOAD_U32(r22.u32 + 64);
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r25,r11,-28032
	r25.s64 = r11.s64 + -28032;
	// beq 0x83075bac
	if (cr0.eq) goto loc_83075BAC;
loc_83075A14:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,76(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 76);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r31,40(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// lwz r30,16(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// beq 0x83075b4c
	if (cr0.eq) goto loc_83075B4C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82fea480
	sub_82FEA480(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83075b4c
	if (cr0.eq) goto loc_83075B4C;
	// lwz r27,0(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r27,0
	cr0.compare<uint32_t>(r27.u32, 0, xer);
	// beq 0x83075b4c
	if (cr0.eq) goto loc_83075B4C;
	// lwz r31,4(r27)
	r31.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r23,4(r28)
	r23.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmpwi cr6,r31,8
	cr6.compare<int32_t>(r31.s32, 8, xer);
	// bne cr6,0x83075aa0
	if (!cr6.eq) goto loc_83075AA0;
	// cmpwi cr6,r23,8
	cr6.compare<int32_t>(r23.s32, 8, xer);
	// beq cr6,0x83075aa0
	if (cr6.eq) goto loc_83075AA0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,131
	ctx.r6.s64 = 131;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
loc_83075AA0:
	// rlwinm. r11,r31,0,30,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83075ad4
	if (cr0.eq) goto loc_83075AD4;
	// rlwinm. r11,r23,0,30,30
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83075ad4
	if (!cr0.eq) goto loc_83075AD4;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,125
	ctx.r6.s64 = 125;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
loc_83075AD4:
	// lwz r3,44(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 44);
	// lwz r4,44(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 44);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83075afc
	if (cr0.eq) goto loc_83075AFC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83075b20
	if (!cr0.eq) goto loc_83075B20;
loc_83075AFC:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,126
	ctx.r6.s64 = 126;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
loc_83075B20:
	// clrlwi. r11,r31,31
	r11.u64 = r31.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83075b90
	if (cr0.eq) goto loc_83075B90;
	// clrlwi. r11,r23,31
	r11.u64 = r23.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83075b44
	if (cr0.eq) goto loc_83075B44;
	// lwz r4,24(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lwz r3,24(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83075b90
	if (!cr0.eq) goto loc_83075B90;
loc_83075B44:
	// li r6,127
	ctx.r6.s64 = 127;
	// b 0x83075b70
	goto loc_83075B70;
loc_83075B4C:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x83075b6c
	if (cr6.eq) goto loc_83075B6C;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83072098
	sub_83072098(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83075b90
	if (!cr0.eq) goto loc_83075B90;
loc_83075B6C:
	// li r6,128
	ctx.r6.s64 = 128;
loc_83075B70:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
loc_83075B90:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83075a14
	if (!cr0.eq) goto loc_83075A14;
loc_83075BAC:
	// lwz r31,64(r20)
	r31.u64 = PPC_LOAD_U32(r20.u32 + 64);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x83075c0c
	if (cr0.eq) goto loc_83075C0C;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bne cr6,0x83075bcc
	if (!cr6.eq) goto loc_83075BCC;
	// li r6,129
	ctx.r6.s64 = 129;
	// b 0x83075c00
	goto loc_83075C00;
loc_83075BCC:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x83072120
	sub_83072120(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83075be8
	if (!cr0.eq) goto loc_83075BE8;
	// li r6,130
	ctx.r6.s64 = 130;
	// b 0x83075bfc
	goto loc_83075BFC;
loc_83075BE8:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,4(r21)
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x83075c0c
	if (!cr6.lt) goto loc_83075C0C;
	// li r6,132
	ctx.r6.s64 = 132;
loc_83075BFC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_83075C00:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
loc_83075C0C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b58
	return;
}

__attribute__((alias("__imp__sub_83075C18"))) PPC_WEAK_FUNC(sub_83075C18);
PPC_FUNC_IMPL(__imp__sub_83075C18) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r18,r6
	r18.u64 = ctx.r6.u64;
	// lwz r11,16(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83075c48
	if (cr0.eq) goto loc_83075C48;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x83075c4c
	goto loc_83075C4C;
loc_83075C48:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83075C4C:
	// lwz r11,20(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83075c60
	if (cr0.eq) goto loc_83075C60;
	// lwz r31,8(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x83075c64
	goto loc_83075C64;
loc_83075C60:
	// li r31,0
	r31.s64 = 0;
loc_83075C64:
	// lwz r11,16(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83075c78
	if (cr0.eq) goto loc_83075C78;
	// lwz r21,8(r11)
	r21.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x83075c7c
	goto loc_83075C7C;
loc_83075C78:
	// li r21,0
	r21.s64 = 0;
loc_83075C7C:
	// lwz r11,20(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83075c90
	if (cr0.eq) goto loc_83075C90;
	// lwz r19,8(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x83075c94
	goto loc_83075C94;
loc_83075C90:
	// li r19,0
	r19.s64 = 0;
loc_83075C94:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// addi r26,r11,-28032
	r26.s64 = r11.s64 + -28032;
	// bne cr6,0x83075cac
	if (!cr6.eq) goto loc_83075CAC;
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// beq cr6,0x83075cd0
	if (cr6.eq) goto loc_83075CD0;
loc_83075CAC:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83075cd0
	if (!cr6.eq) goto loc_83075CD0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83075cd8
	if (!cr6.eq) goto loc_83075CD8;
	// li r6,124
	ctx.r6.s64 = 124;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
loc_83075CD0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83075cf4
	if (cr6.eq) goto loc_83075CF4;
loc_83075CD8:
	// lwz r3,20(r20)
	ctx.r3.u64 = PPC_LOAD_U32(r20.u32 + 20);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83075cf4
	if (cr0.eq) goto loc_83075CF4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// b 0x83075cf8
	goto loc_83075CF8;
loc_83075CF4:
	// li r23,0
	r23.s64 = 0;
loc_83075CF8:
	// li r25,0
	r25.s64 = 0;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x83075e7c
	if (cr6.eq) goto loc_83075E7C;
loc_83075D04:
	// lwz r3,16(r18)
	ctx.r3.u64 = PPC_LOAD_U32(r18.u32 + 16);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83075d20
	if (cr0.eq) goto loc_83075D20;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x83075d24
	goto loc_83075D24;
loc_83075D20:
	// li r28,0
	r28.s64 = 0;
loc_83075D24:
	// lwz r31,40(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r30,16(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8309dfb8
	sub_8309DFB8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x83075e2c
	if (cr0.eq) goto loc_83075E2C;
	// lwz r31,4(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r27,4(r28)
	r27.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmpwi cr6,r31,8
	cr6.compare<int32_t>(r31.s32, 8, xer);
	// bne cr6,0x83075d80
	if (!cr6.eq) goto loc_83075D80;
	// cmpwi cr6,r27,8
	cr6.compare<int32_t>(r27.s32, 8, xer);
	// beq cr6,0x83075d80
	if (cr6.eq) goto loc_83075D80;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,131
	ctx.r6.s64 = 131;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
loc_83075D80:
	// rlwinm. r11,r31,0,30,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83075db4
	if (cr0.eq) goto loc_83075DB4;
	// rlwinm. r11,r27,0,30,30
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83075db4
	if (!cr0.eq) goto loc_83075DB4;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,125
	ctx.r6.s64 = 125;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
loc_83075DB4:
	// lwz r3,44(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// lwz r4,44(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 44);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83075ddc
	if (cr0.eq) goto loc_83075DDC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83075e00
	if (!cr0.eq) goto loc_83075E00;
loc_83075DDC:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,126
	ctx.r6.s64 = 126;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
loc_83075E00:
	// clrlwi. r11,r31,31
	r11.u64 = r31.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83075e70
	if (cr0.eq) goto loc_83075E70;
	// clrlwi. r11,r27,31
	r11.u64 = r27.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83075e24
	if (cr0.eq) goto loc_83075E24;
	// lwz r4,24(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83075e70
	if (!cr0.eq) goto loc_83075E70;
loc_83075E24:
	// li r6,127
	ctx.r6.s64 = 127;
	// b 0x83075e50
	goto loc_83075E50;
loc_83075E2C:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x83075e4c
	if (cr6.eq) goto loc_83075E4C;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x83072098
	sub_83072098(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83075e70
	if (!cr0.eq) goto loc_83075E70;
loc_83075E4C:
	// li r6,128
	ctx.r6.s64 = 128;
loc_83075E50:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
loc_83075E70:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// cmplw cr6,r25,r21
	cr6.compare<uint32_t>(r25.u32, r21.u32, xer);
	// blt cr6,0x83075d04
	if (cr6.lt) goto loc_83075D04;
loc_83075E7C:
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// beq cr6,0x83075ea0
	if (cr6.eq) goto loc_83075EA0;
	// lwz r3,20(r18)
	ctx.r3.u64 = PPC_LOAD_U32(r18.u32 + 20);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83075ea0
	if (cr0.eq) goto loc_83075EA0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x83075ea4
	goto loc_83075EA4;
loc_83075EA0:
	// li r31,0
	r31.s64 = 0;
loc_83075EA4:
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x83075f00
	if (cr0.eq) goto loc_83075F00;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bne cr6,0x83075ec0
	if (!cr6.eq) goto loc_83075EC0;
	// li r6,129
	ctx.r6.s64 = 129;
	// b 0x83075ef4
	goto loc_83075EF4;
loc_83075EC0:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x83072120
	sub_83072120(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83075edc
	if (!cr0.eq) goto loc_83075EDC;
	// li r6,130
	ctx.r6.s64 = 130;
	// b 0x83075ef0
	goto loc_83075EF0;
loc_83075EDC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x83075f00
	if (!cr6.lt) goto loc_83075F00;
	// li r6,132
	ctx.r6.s64 = 132;
loc_83075EF0:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_83075EF4:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
loc_83075F00:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b50
	return;
}

__attribute__((alias("__imp__sub_83075F10"))) PPC_WEAK_FUNC(sub_83075F10);
PPC_FUNC_IMPL(__imp__sub_83075F10) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b14
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r5,r31,112
	ctx.r5.s64 = r31.s64 + 112;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 116);
	// stw r30,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r30.u32);
	// bl 0x83070a58
	sub_83070A58(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83075f78
	if (cr0.eq) goto loc_83075F78;
	// addi r5,r31,112
	ctx.r5.s64 = r31.s64 + 112;
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 116);
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq 0x83075f6c
	if (cr0.eq) goto loc_83075F6C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83075F6C:
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,120(r30)
	PPC_STORE_U32(r30.u32 + 120, r11.u32);
	// b 0x8307634c
	goto loc_8307634C;
loc_83075F78:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-7088
	ctx.r5.s64 = r11.s64 + -7088;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// mr. r24,r3
	r24.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// beq 0x8307631c
	if (cr0.eq) goto loc_8307631C;
	// lhz r11,0(r24)
	r11.u64 = PPC_LOAD_U16(r24.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307631c
	if (cr0.eq) goto loc_8307631C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83074a18
	sub_83074A18(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r29.u32);
	// bne 0x83075fd0
	if (!cr0.eq) goto loc_83075FD0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
loc_83075FC8:
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// b 0x83076348
	goto loc_83076348;
loc_83075FD0:
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
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83076008
	if (cr0.eq) goto loc_83076008;
loc_83075FFC:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// b 0x83075fc8
	goto loc_83075FC8;
loc_83076008:
	// addi r6,r31,116
	ctx.r6.s64 = r31.s64 + 116;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,188(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 188);
	// bl 0x82fea480
	sub_82FEA480(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307605c
	if (cr0.eq) goto loc_8307605C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307605c
	if (cr0.eq) goto loc_8307605C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,158
	ctx.r6.s64 = 158;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// b 0x83075ffc
	goto loc_83075FFC;
loc_8307605C:
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8307609c
	if (!cr6.eq) goto loc_8307609C;
	// li r3,204
	ctx.r3.s64 = 204;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83076094
	if (cr0.eq) goto loc_83076094;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,216(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8306e810
	sub_8306E810(ctx, base);
	// b 0x83076098
	goto loc_83076098;
loc_83076094:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83076098:
	// stw r3,192(r30)
	PPC_STORE_U32(r30.u32 + 192, ctx.r3.u32);
loc_8307609C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,192(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// bl 0x82fdc818
	sub_82FDC818(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,192(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// bl 0x82fdc7e8
	sub_82FDC7E8(ctx, base);
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwz r3,192(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// bl 0x8306e538
	sub_8306E538(ctx, base);
	// lwz r4,48(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r3,192(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 192);
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
	// lwz r3,192(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 192);
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
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// lbz r11,116(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 116);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r26,r11,-28032
	r26.s64 = r11.s64 + -28032;
	// beq 0x8307615c
	if (cr0.eq) goto loc_8307615C;
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// lbz r11,11(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 11);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307615c
	if (cr0.eq) goto loc_8307615C;
	// li r6,297
	ctx.r6.s64 = 297;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
loc_8307615C:
	// lwz r3,192(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// bl 0x83159448
	sub_83159448(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83076170
	if (!cr0.eq) goto loc_83076170;
	// b 0x83075ffc
	goto loc_83075FFC;
loc_83076170:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x8307618c
	if (!cr0.eq) goto loc_8307618C;
	// b 0x83075ffc
	goto loc_83075FFC;
loc_8307618C:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-7008
	ctx.r4.s64 = r11.s64 + -7008;
	// lwz r11,160(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 160);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lhz r27,0(r28)
	r27.u64 = PPC_LOAD_U16(r28.u32 + 0);
	// cmplwi r27,0
	cr0.compare<uint32_t>(r27.u32, 0, xer);
	// beq 0x830761f0
	if (cr0.eq) goto loc_830761F0;
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830761f0
	if (!cr0.eq) goto loc_830761F0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// li r6,134
	ctx.r6.s64 = 134;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// b 0x83075ffc
	goto loc_83075FFC;
loc_830761F0:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x8307624c
	if (!cr6.eq) goto loc_8307624C;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r28,r11,-28120
	r28.s64 = r11.s64 + -28120;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,164(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 164);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8307624c
	if (!cr0.eq) goto loc_8307624C;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x8307624c
	if (cr6.eq) goto loc_8307624C;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,28(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,172(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 172);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8307624C:
	// li r3,104
	ctx.r3.s64 = 104;
	// lwz r26,120(r30)
	r26.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lwz r4,212(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// stw r27,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r27.u32);
	// beq 0x830762c0
	if (cr0.eq) goto loc_830762C0;
	// lwz r28,216(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r25,28(r30)
	r25.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// bl 0x830a2070
	sub_830A2070(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// bl 0x830a6b08
	sub_830A6B08(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x830762c4
	goto loc_830762C4;
loc_830762C0:
	// li r11,0
	r11.s64 = 0;
loc_830762C4:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,120(r30)
	PPC_STORE_U32(r30.u32 + 120, r11.u32);
	// bl 0x830739d0
	sub_830739D0(ctx, base);
	// lwz r6,120(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lwz r3,188(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 188);
	// lwz r5,12(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// lwz r4,24(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// bl 0x83072dd8
	sub_83072DD8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,120(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x83073308
	sub_83073308(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r5,120(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 116);
	// bl 0x83072b78
	sub_83072B78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8307634c
	goto loc_8307634C;
loc_8307631C:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r11,-8108
	ctx.r7.s64 = r11.s64 + -8108;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,90
	ctx.r6.s64 = 90;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
loc_83076348:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8307634C:
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_83076354"))) PPC_WEAK_FUNC(sub_83076354);
PPC_FUNC_IMPL(__imp__sub_83076354) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-208
	r31.s64 = r12.s64 + -208;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x83094688
	sub_83094688(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307637C"))) PPC_WEAK_FUNC(sub_8307637C);
PPC_FUNC_IMPL(__imp__sub_8307637C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-208
	r31.s64 = r12.s64 + -208;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830763AC"))) PPC_WEAK_FUNC(sub_830763AC);
PPC_FUNC_IMPL(__imp__sub_830763AC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-208
	r31.s64 = r12.s64 + -208;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// lwz r4,212(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 212);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830763E0"))) PPC_WEAK_FUNC(sub_830763E0);
PPC_FUNC_IMPL(__imp__sub_830763E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x831b0b04
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r20,r7
	r20.u64 = ctx.r7.u64;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
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
	// addi r30,r31,60
	r30.s64 = r31.s64 + 60;
	// li r23,0
	r23.s64 = 0;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r23,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r23.u32);
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r23,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r23.u16);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,36(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stw r27,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r27.u32);
	// addi r25,r11,-7732
	r25.s64 = r11.s64 + -7732;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83076678
	if (cr0.eq) goto loc_83076678;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x82feec20
	sub_82FEEC20(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830769c8
	if (!cr0.eq) goto loc_830769C8;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x830a72e0
	sub_830A72E0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x83076528
	if (cr0.eq) goto loc_83076528;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r28,r11,-8488
	r28.s64 = r11.s64 + -8488;
	// lwz r11,92(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83076520
	if (cr0.eq) goto loc_83076520;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830a7430
	sub_830A7430(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_83076520:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x83076544
	if (!cr6.eq) goto loc_83076544;
loc_83076528:
	// li r6,135
	ctx.r6.s64 = 135;
loc_8307652C:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_83076530:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_83076534:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
	// b 0x830769c8
	goto loc_830769C8;
loc_83076544:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r28,r11,-7608
	r28.s64 = r11.s64 + -7608;
	// lwz r11,92(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne 0x83076580
	if (!cr0.eq) goto loc_83076580;
	// li r6,135
	ctx.r6.s64 = 135;
	// b 0x83076534
	goto loc_83076534;
loc_83076580:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r27,r11,-7500
	r27.s64 = r11.s64 + -7500;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8306f898
	sub_8306F898(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8306f940
	sub_8306F940(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830714b0
	sub_830714B0(ctx, base);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// bne cr6,0x8307666c
	if (!cr6.eq) goto loc_8307666C;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r3,r19
	cr6.compare<uint32_t>(ctx.r3.u32, r19.u32, xer);
	// bne cr6,0x8307666c
	if (!cr6.eq) goto loc_8307666C;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8306fc48
	sub_8306FC48(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// sthx r23,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r23.u16);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r11,172(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 172);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
loc_83076654:
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
loc_8307665C:
	// li r6,0
	ctx.r6.s64 = 0;
loc_83076660:
	// bl 0x83072d30
	sub_83072D30(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830769cc
	goto loc_830769CC;
loc_8307666C:
	// li r6,136
	ctx.r6.s64 = 136;
loc_83076670:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// b 0x83076530
	goto loc_83076530;
loc_83076678:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r22,r11,-8336
	r22.s64 = r11.s64 + -8336;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83076898
	if (cr0.eq) goto loc_83076898;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x83070a58
	sub_83070A58(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830769c8
	if (!cr0.eq) goto loc_830769C8;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x830a72e0
	sub_830A72E0(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x83076708
	if (cr0.eq) goto loc_83076708;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r27,r11,-8488
	r27.s64 = r11.s64 + -8488;
	// lwz r11,92(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83076700
	if (cr0.eq) goto loc_83076700;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830a7430
	sub_830A7430(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_83076700:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x83076710
	if (!cr6.eq) goto loc_83076710;
loc_83076708:
	// li r6,137
	ctx.r6.s64 = 137;
	// b 0x8307652c
	goto loc_8307652C;
loc_83076710:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830a72e0
	sub_830A72E0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x83076758
	if (cr0.eq) goto loc_83076758;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83076750
	if (cr0.eq) goto loc_83076750;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830a7430
	sub_830A7430(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_83076750:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x83076764
	if (!cr6.eq) goto loc_83076764;
loc_83076758:
	// li r6,137
	ctx.r6.s64 = 137;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// b 0x83076530
	goto loc_83076530;
loc_83076764:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r11,-7608
	ctx.r4.s64 = r11.s64 + -7608;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830767b0
	if (!cr0.eq) goto loc_830767B0;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-7584
	ctx.r4.s64 = r11.s64 + -7584;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830767b0
	if (!cr0.eq) goto loc_830767B0;
	// li r6,137
	ctx.r6.s64 = 137;
	// b 0x83076670
	goto loc_83076670;
loc_830767B0:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r27,r11,-7500
	r27.s64 = r11.s64 + -7500;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8306f898
	sub_8306F898(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8306f940
	sub_8306F940(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830714b0
	sub_830714B0(ctx, base);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// bne cr6,0x83076890
	if (!cr6.eq) goto loc_83076890;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r3,r19
	cr6.compare<uint32_t>(ctx.r3.u32, r19.u32, xer);
	// bne cr6,0x83076890
	if (!cr6.eq) goto loc_83076890;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8306fc48
	sub_8306FC48(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// sthx r23,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r23.u16);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r11,172(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 172);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// b 0x83076654
	goto loc_83076654;
loc_83076890:
	// li r6,138
	ctx.r6.s64 = 138;
	// b 0x83076670
	goto loc_83076670;
loc_83076898:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r30,r11,-8152
	r30.s64 = r11.s64 + -8152;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83076920
	if (cr0.eq) goto loc_83076920;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x83070a58
	sub_83070A58(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830769c8
	if (!cr0.eq) goto loc_830769C8;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83072228
	sub_83072228(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// ble cr6,0x83076900
	if (!cr6.gt) goto loc_83076900;
	// li r6,141
	ctx.r6.s64 = 141;
	// b 0x8307652c
	goto loc_8307652C;
loc_83076900:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bne cr6,0x8307665c
	if (!cr6.eq) goto loc_8307665C;
loc_83076914:
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// lwz r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// b 0x83076660
	goto loc_83076660;
loc_83076920:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r30,r11,-8384
	r30.s64 = r11.s64 + -8384;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830769a0
	if (cr0.eq) goto loc_830769A0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83070a58
	sub_83070A58(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830769c8
	if (!cr0.eq) goto loc_830769C8;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83072228
	sub_83072228(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// ble cr6,0x83076988
	if (!cr6.gt) goto loc_83076988;
	// li r6,142
	ctx.r6.s64 = 142;
	// b 0x8307652c
	goto loc_8307652C;
loc_83076988:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bne cr6,0x83076654
	if (!cr6.eq) goto loc_83076654;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// b 0x83076914
	goto loc_83076914;
loc_830769A0:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r6,143
	ctx.r6.s64 = 143;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
loc_830769C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830769CC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b54
	return;
}

__attribute__((alias("__imp__sub_830769D8"))) PPC_WEAK_FUNC(sub_830769D8);
PPC_FUNC_IMPL(__imp__sub_830769D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// li r24,0
	r24.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r17,r4
	r17.u64 = ctx.r4.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r3,32(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 32);
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// mr r19,r24
	r19.u64 = r24.u64;
	// bl 0x830a72e0
	sub_830A72E0(ctx, base);
	// stw r22,120(r30)
	PPC_STORE_U32(r30.u32 + 120, r22.u32);
	// mr. r21,r3
	r21.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r21.s32, 0, xer);
	// beq 0x83076ac0
	if (cr0.eq) goto loc_83076AC0;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r18,r11,-8108
	r18.s64 = r11.s64 + -8108;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r20,r11,-7200
	r20.s64 = r11.s64 + -7200;
loc_83076A28:
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83076af8
	if (cr0.eq) goto loc_83076AF8;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83076d2c
	if (cr0.eq) goto loc_83076D2C;
	// addi r31,r30,60
	r31.s64 = r30.s64 + 60;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r19,1
	r19.s64 = 1;
	// bl 0x8306fc48
	sub_8306FC48(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// sthx r24,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r24.u16);
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,172(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 172);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83076AC0:
	// clrlwi. r11,r19,24
	r11.u64 = r19.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83076af0
	if (!cr0.eq) goto loc_83076AF0;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,140
	ctx.r6.s64 = 140;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
loc_83076AF0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831b0b4c
	return;
loc_83076AF8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83076d2c
	if (cr0.eq) goto loc_83076D2C;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x830a72e0
	sub_830A72E0(ctx, base);
	// b 0x83076b6c
	goto loc_83076B6C;
loc_83076B18:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83076b64
	if (cr0.eq) goto loc_83076B64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83076b78
	if (!cr0.eq) goto loc_83076B78;
loc_83076B64:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830a7430
	sub_830A7430(ctx, base);
loc_83076B6C:
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x83076b18
	if (!cr0.eq) goto loc_83076B18;
	// b 0x83076d24
	goto loc_83076D24;
loc_83076B78:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83075f10
	sub_83075F10(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83076d40
	if (cr0.eq) goto loc_83076D40;
	// addi r28,r23,1
	r28.s64 = r23.s64 + 1;
	// lwz r31,120(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r19,1
	r19.s64 = 1;
	// bl 0x830763e0
	sub_830763E0(ctx, base);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq 0x83076c74
	if (cr0.eq) goto loc_83076C74;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// bl 0x830769d8
	sub_830769D8(ctx, base);
	// addi r31,r30,60
	r31.s64 = r30.s64 + 60;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// bl 0x8306fc48
	sub_8306FC48(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r24,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r24.u16);
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r28,0(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lwz r11,36(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r11,172(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 172);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// stw r24,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r24.u32);
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// b 0x83076cb0
	goto loc_83076CB0;
loc_83076C74:
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// bl 0x830769d8
	sub_830769D8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x83073510
	sub_83073510(ctx, base);
	// addi r31,r30,60
	r31.s64 = r30.s64 + 60;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r24,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r24.u32);
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_83076CB0:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r24,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r24.u16);
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,176(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
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
	// bne 0x83076d24
	if (!cr0.eq) goto loc_83076D24;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,176(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x83072d30
	sub_83072D30(ctx, base);
loc_83076D24:
	// clrlwi. r11,r19,24
	r11.u64 = r19.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83076ac0
	if (!cr0.eq) goto loc_83076AC0;
loc_83076D2C:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x830a7430
	sub_830A7430(ctx, base);
	// mr. r21,r3
	r21.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r21.s32, 0, xer);
	// bne 0x83076a28
	if (!cr0.eq) goto loc_83076A28;
	// b 0x83076ac0
	goto loc_83076AC0;
loc_83076D40:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x83073510
	sub_83073510(ctx, base);
	// b 0x83076af0
	goto loc_83076AF0;
}

__attribute__((alias("__imp__sub_83076D58"))) PPC_WEAK_FUNC(sub_83076D58);
PPC_FUNC_IMPL(__imp__sub_83076D58) {
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
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// lwz r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lwz r8,36(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// addi r9,r9,60
	ctx.r9.s64 = ctx.r9.s64 + 60;
	// lwz r4,212(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// stw r10,204(r30)
	PPC_STORE_U32(r30.u32 + 204, ctx.r10.u32);
	// lbz r10,11(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 11);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stb r10,200(r30)
	PPC_STORE_U8(r30.u32 + 200, ctx.r10.u8);
	// lbz r10,19(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 19);
	// stw r9,32(r30)
	PPC_STORE_U32(r30.u32 + 32, ctx.r9.u32);
	// stb r10,0(r30)
	PPC_STORE_U8(r30.u32 + 0, ctx.r10.u8);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r10,56(r30)
	PPC_STORE_U32(r30.u32 + 56, ctx.r10.u32);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83076ddc
	if (cr0.eq) goto loc_83076DDC;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,212(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x83070930
	sub_83070930(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x83076de0
	goto loc_83076DE0;
loc_83076DDC:
	// li r11,0
	r11.s64 = 0;
loc_83076DE0:
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,212(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// stw r11,136(r30)
	PPC_STORE_U32(r30.u32 + 136, r11.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83076e10
	if (cr0.eq) goto loc_83076E10;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,212(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x83070930
	sub_83070930(ctx, base);
	// b 0x83076e14
	goto loc_83076E14;
loc_83076E10:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83076E14:
	// lwz r11,212(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// stw r3,140(r30)
	PPC_STORE_U32(r30.u32 + 140, ctx.r3.u32);
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r29,0
	r29.s64 = 0;
	// stw r3,156(r30)
	PPC_STORE_U32(r30.u32 + 156, ctx.r3.u32);
loc_83076E3C:
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,212(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83076e68
	if (cr0.eq) goto loc_83076E68;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,212(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x83070930
	sub_83070930(ctx, base);
	// b 0x83076e6c
	goto loc_83076E6C;
loc_83076E68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83076E6C:
	// lwz r11,156(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 156);
	// stwx r3,r11,r29
	PPC_STORE_U32(r11.u32 + r29.u32, ctx.r3.u32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplwi cr6,r29,24
	cr6.compare<uint32_t>(r29.u32, 24, xer);
	// blt cr6,0x83076e3c
	if (cr6.lt) goto loc_83076E3C;
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,212(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83076eb0
	if (cr0.eq) goto loc_83076EB0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,212(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x83070930
	sub_83070930(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x83076eb4
	goto loc_83076EB4;
loc_83076EB0:
	// li r11,0
	r11.s64 = 0;
loc_83076EB4:
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,212(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// stw r11,160(r30)
	PPC_STORE_U32(r30.u32 + 160, r11.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83076ee8
	if (cr0.eq) goto loc_83076EE8;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,212(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x83055058
	sub_83055058(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x83076eec
	goto loc_83076EEC;
loc_83076EE8:
	// li r11,0
	r11.s64 = 0;
loc_83076EEC:
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,212(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// stw r11,172(r30)
	PPC_STORE_U32(r30.u32 + 172, r11.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83076f1c
	if (cr0.eq) goto loc_83076F1C;
	// li r4,29
	ctx.r4.s64 = 29;
	// lwz r5,212(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// bl 0x83072658
	sub_83072658(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x83076f20
	goto loc_83076F20;
loc_83076F1C:
	// li r11,0
	r11.s64 = 0;
loc_83076F20:
	// li r3,28
	ctx.r3.s64 = 28;
	// lwz r4,212(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// stw r11,188(r30)
	PPC_STORE_U32(r30.u32 + 188, r11.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq 0x83076f80
	if (cr0.eq) goto loc_83076F80;
	// li r3,4
	ctx.r3.s64 = 4;
	// lwz r4,212(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83076f60
	if (cr0.eq) goto loc_83076F60;
	// bl 0x83007488
	sub_83007488(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x83076f64
	goto loc_83076F64;
loc_83076F60:
	// li r6,0
	ctx.r6.s64 = 0;
loc_83076F64:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,29
	ctx.r4.s64 = 29;
	// lwz r7,212(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83043618
	sub_83043618(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x83076f84
	goto loc_83076F84;
loc_83076F80:
	// li r11,0
	r11.s64 = 0;
loc_83076F84:
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,212(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// stw r11,116(r30)
	PPC_STORE_U32(r30.u32 + 116, r11.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83076fac
	if (cr0.eq) goto loc_83076FAC;
	// bl 0x830a6a78
	sub_830A6A78(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x83076fb0
	goto loc_83076FB0;
loc_83076FAC:
	// li r11,0
	r11.s64 = 0;
loc_83076FB0:
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,212(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// stw r11,208(r30)
	PPC_STORE_U32(r30.u32 + 208, r11.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83076fe0
	if (cr0.eq) goto loc_83076FE0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,212(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x83070930
	sub_83070930(ctx, base);
	// b 0x83076fe4
	goto loc_83076FE4;
loc_83076FE0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83076FE4:
	// stw r3,152(r30)
	PPC_STORE_U32(r30.u32 + 152, ctx.r3.u32);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83076FF0"))) PPC_WEAK_FUNC(sub_83076FF0);
PPC_FUNC_IMPL(__imp__sub_83076FF0) {
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
	// lwz r4,212(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 212);
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

__attribute__((alias("__imp__sub_83077020"))) PPC_WEAK_FUNC(sub_83077020);
PPC_FUNC_IMPL(__imp__sub_83077020) {
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
	// lwz r4,212(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 212);
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

__attribute__((alias("__imp__sub_83077050"))) PPC_WEAK_FUNC(sub_83077050);
PPC_FUNC_IMPL(__imp__sub_83077050) {
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
	// lwz r4,212(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 212);
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

__attribute__((alias("__imp__sub_83077080"))) PPC_WEAK_FUNC(sub_83077080);
PPC_FUNC_IMPL(__imp__sub_83077080) {
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
	// lwz r4,212(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 212);
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

__attribute__((alias("__imp__sub_830770B0"))) PPC_WEAK_FUNC(sub_830770B0);
PPC_FUNC_IMPL(__imp__sub_830770B0) {
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
	// lwz r4,212(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 212);
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

__attribute__((alias("__imp__sub_830770E0"))) PPC_WEAK_FUNC(sub_830770E0);
PPC_FUNC_IMPL(__imp__sub_830770E0) {
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
	// lwz r4,212(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 212);
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

__attribute__((alias("__imp__sub_83077110"))) PPC_WEAK_FUNC(sub_83077110);
PPC_FUNC_IMPL(__imp__sub_83077110) {
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
	// lwz r4,212(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 212);
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

__attribute__((alias("__imp__sub_83077140"))) PPC_WEAK_FUNC(sub_83077140);
PPC_FUNC_IMPL(__imp__sub_83077140) {
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
	// lwz r4,212(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 212);
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

__attribute__((alias("__imp__sub_83077170"))) PPC_WEAK_FUNC(sub_83077170);
PPC_FUNC_IMPL(__imp__sub_83077170) {
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
	// lwz r4,212(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 212);
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

__attribute__((alias("__imp__sub_830771A0"))) PPC_WEAK_FUNC(sub_830771A0);
PPC_FUNC_IMPL(__imp__sub_830771A0) {
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
	// lwz r4,212(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 212);
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

__attribute__((alias("__imp__sub_830771D8"))) PPC_WEAK_FUNC(sub_830771D8);
PPC_FUNC_IMPL(__imp__sub_830771D8) {
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
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r4
	r18.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// stw r27,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r27.u32);
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,212(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 212);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// li r17,0
	r17.s64 = 0;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83077244
	if (cr0.eq) goto loc_83077244;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,212(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 212);
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x83070930
	sub_83070930(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// b 0x83077248
	goto loc_83077248;
loc_83077244:
	// mr r20,r17
	r20.u64 = r17.u64;
loc_83077248:
	// addi r30,r27,60
	r30.s64 = r27.s64 + 60;
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r19,r17
	r19.u64 = r17.u64;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// stw r17,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r17.u32);
	// sth r17,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r17.u16);
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x8307728c
	if (cr6.eq) goto loc_8307728C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// li r4,58
	ctx.r4.s64 = 58;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
loc_8307728C:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r16,r11,-8488
	r16.s64 = r11.s64 + -8488;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// lwz r26,4(r25)
	r26.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// mr r28,r17
	r28.u64 = r17.u64;
	// cmplwi r26,0
	cr0.compare<uint32_t>(r26.u32, 0, xer);
	// beq 0x8307734c
	if (cr0.eq) goto loc_8307734C;
loc_830772B4:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8308ea58
	sub_8308EA58(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// li r4,61
	ctx.r4.s64 = 61;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x830705c8
	sub_830705C8(ctx, base);
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(r28.u32, r26.u32, xer);
	// blt cr6,0x830772b4
	if (cr6.lt) goto loc_830772B4;
loc_8307734C:
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r25,r17
	r25.u64 = r17.u64;
	// addi r22,r11,-28120
	r22.s64 = r11.s64 + -28120;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r23,r11,-28108
	r23.s64 = r11.s64 + -28108;
	// mr. r24,r3
	r24.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// ble 0x83077504
	if (!cr0.gt) goto loc_83077504;
loc_83077390:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82fe2190
	sub_82FE2190(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8307747c
	if (cr0.eq) goto loc_8307747C;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// li r4,61
	ctx.r4.s64 = 61;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x830705c8
	sub_830705C8(ctx, base);
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// li r4,58
	ctx.r4.s64 = 58;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fda0f8
	sub_82FDA0F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r10,120(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 120);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r3,92(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 92);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
	// lwz r5,20(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x830a1df8
	sub_830A1DF8(ctx, base);
	// mr. r11,r3
	r11.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830774f8
	if (cr0.eq) goto loc_830774F8;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8305c228
	sub_8305C228(ctx, base);
	// b 0x830774f8
	goto loc_830774F8;
loc_8307747C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830774f8
	if (cr0.eq) goto loc_830774F8;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// li r4,61
	ctx.r4.s64 = 61;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x830705c8
	sub_830705C8(ctx, base);
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// li r19,1
	r19.s64 = 1;
loc_830774F8:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// cmpw cr6,r25,r24
	cr6.compare<int32_t>(r25.s32, r24.s32, xer);
	// blt cr6,0x83077390
	if (cr6.lt) goto loc_83077390;
loc_83077504:
	// lwz r11,120(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 120);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r25,r17
	r25.u64 = r17.u64;
	// mr. r24,r3
	r24.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// ble 0x8307765c
	if (!cr0.gt) goto loc_8307765C;
loc_8307753C:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x8307765c
	if (cr0.eq) goto loc_8307765C;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82fe2190
	sub_82FE2190(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830775d0
	if (cr0.eq) goto loc_830775D0;
	// li r4,58
	ctx.r4.s64 = 58;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fda0f8
	sub_82FDA0F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r10,120(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 120);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r3,92(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 92);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
	// lwz r5,20(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x830a1df8
	sub_830A1DF8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x830708e0
	sub_830708E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83077650
	if (!cr0.eq) goto loc_83077650;
	// b 0x830775ec
	goto loc_830775EC;
loc_830775D0:
	// clrlwi. r11,r19,24
	r11.u64 = r19.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83077650
	if (!cr0.eq) goto loc_83077650;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83077650
	if (cr0.eq) goto loc_83077650;
loc_830775EC:
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// li r4,61
	ctx.r4.s64 = 61;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x830705c8
	sub_830705C8(ctx, base);
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
loc_83077650:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// cmpw cr6,r25,r24
	cr6.compare<int32_t>(r25.s32, r24.s32, xer);
	// blt cr6,0x8307753c
	if (cr6.lt) goto loc_8307753C;
loc_8307765C:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// beq cr6,0x83077670
	if (cr6.eq) goto loc_83077670;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82fdeaa8
	sub_82FDEAA8(ctx, base);
loc_83077670:
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x830776b8
	if (cr6.eq) goto loc_830776B8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// li r4,58
	ctx.r4.s64 = 58;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
loc_830776B8:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r29,r11,-8296
	r29.s64 = r11.s64 + -8296;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,32512
	ctx.r4.s64 = r11.s64 + 32512;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x8307772c
	if (cr6.eq) goto loc_8307772C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// li r4,58
	ctx.r4.s64 = 58;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
loc_8307772C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x83077790
	if (cr6.eq) goto loc_83077790;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// li r4,58
	ctx.r4.s64 = 58;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
loc_83077790:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// li r3,44
	ctx.r3.s64 = 44;
	// lwz r4,216(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830777e8
	if (cr0.eq) goto loc_830777E8;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r17,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r17.u16);
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r5,216(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 216);
	// bl 0x83048dc0
	sub_83048DC0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x830777ec
	goto loc_830777EC;
loc_830777E8:
	// mr r30,r17
	r30.u64 = r17.u64;
loc_830777EC:
	// lwz r11,68(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 68);
	// lwz r10,64(r18)
	ctx.r10.u64 = PPC_LOAD_U32(r18.u32 + 64);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r11.u32);
	// stw r10,36(r30)
	PPC_STORE_U32(r30.u32 + 36, ctx.r10.u32);
	// lwz r11,120(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 120);
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// bl 0x83049088
	sub_83049088(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// b 0x831b0b48
	return;
}

__attribute__((alias("__imp__sub_83077818"))) PPC_WEAK_FUNC(sub_83077818);
PPC_FUNC_IMPL(__imp__sub_83077818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,244(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// lwz r4,212(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 212);
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

__attribute__((alias("__imp__sub_83077848"))) PPC_WEAK_FUNC(sub_83077848);
PPC_FUNC_IMPL(__imp__sub_83077848) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,244(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 244);
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

__attribute__((alias("__imp__sub_83077878"))) PPC_WEAK_FUNC(sub_83077878);
PPC_FUNC_IMPL(__imp__sub_83077878) {
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
	// bl 0x83072ee0
	sub_83072EE0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
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
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830778c8
	if (cr0.eq) goto loc_830778C8;
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
loc_830778C8:
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

__attribute__((alias("__imp__sub_830778E0"))) PPC_WEAK_FUNC(sub_830778E0);
PPC_FUNC_IMPL(__imp__sub_830778E0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x83077960
	if (!cr6.gt) goto loc_83077960;
	// li r29,0
	r29.s64 = 0;
loc_83077904:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwzx r30,r11,r29
	r30.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x83077940
	if (cr0.eq) goto loc_83077940;
loc_83077914:
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// lwz r28,4(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307792c
	if (cr0.eq) goto loc_8307792C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_8307792C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// mr r30,r28
	r30.u64 = r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x83077914
	if (!cr6.eq) goto loc_83077914;
loc_83077940:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// stwx r10,r11,r29
	PPC_STORE_U32(r11.u32 + r29.u32, ctx.r10.u32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x83077904
	if (cr6.lt) goto loc_83077904;
loc_83077960:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83077968"))) PPC_WEAK_FUNC(sub_83077968);
PPC_FUNC_IMPL(__imp__sub_83077968) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x83077a00
	if (!cr6.gt) goto loc_83077A00;
	// li r29,0
	r29.s64 = 0;
loc_8307798C:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwzx r31,r11,r29
	r31.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x830779e0
	if (cr0.eq) goto loc_830779E0;
loc_8307799C:
	// lbz r11,4(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// lwz r28,4(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830779cc
	if (cr0.eq) goto loc_830779CC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830779cc
	if (cr0.eq) goto loc_830779CC;
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
loc_830779CC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// mr r31,r28
	r31.u64 = r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x8307799c
	if (!cr6.eq) goto loc_8307799C;
loc_830779E0:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// stwx r10,r11,r29
	PPC_STORE_U32(r11.u32 + r29.u32, ctx.r10.u32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x8307798c
	if (cr6.lt) goto loc_8307798C;
loc_83077A00:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83077A08"))) PPC_WEAK_FUNC(sub_83077A08);
PPC_FUNC_IMPL(__imp__sub_83077A08) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x83077a9c
	if (!cr6.gt) goto loc_83077A9C;
	// li r29,0
	r29.s64 = 0;
loc_83077A2C:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwzx r31,r11,r29
	r31.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x83077a7c
	if (cr0.eq) goto loc_83077A7C;
loc_83077A3C:
	// lbz r11,4(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// lwz r27,4(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83077a68
	if (cr0.eq) goto loc_83077A68;
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// beq 0x83077a68
	if (cr0.eq) goto loc_83077A68;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830a6ce0
	sub_830A6CE0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_83077A68:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// mr r31,r27
	r31.u64 = r27.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x83077a3c
	if (!cr6.eq) goto loc_83077A3C;
loc_83077A7C:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// stwx r10,r11,r29
	PPC_STORE_U32(r11.u32 + r29.u32, ctx.r10.u32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// blt cr6,0x83077a2c
	if (cr6.lt) goto loc_83077A2C;
loc_83077A9C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83077AB0"))) PPC_WEAK_FUNC(sub_83077AB0);
PPC_FUNC_IMPL(__imp__sub_83077AB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// stw r30,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r30.u32);
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83077af8
	if (cr0.eq) goto loc_83077AF8;
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83077b4c
	if (!cr0.eq) goto loc_83077B4C;
loc_83077AF8:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r29,r11,-28120
	r29.s64 = r11.s64 + -28120;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,160(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 160);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83077b2c
	if (cr0.eq) goto loc_83077B2C;
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83077b4c
	if (!cr0.eq) goto loc_83077B4C;
loc_83077B2C:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r11,-8608
	ctx.r5.s64 = r11.s64 + -8608;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,172(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 172);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83077B4C:
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,100(r30)
	PPC_STORE_U32(r30.u32 + 100, r11.u32);
	// bne 0x83077b98
	if (!cr0.eq) goto loc_83077B98;
	// li r3,28
	ctx.r3.s64 = 28;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83077b88
	if (cr0.eq) goto loc_83077B88;
	// li r4,29
	ctx.r4.s64 = 29;
	// lwz r5,216(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82ffe210
	sub_82FFE210(ctx, base);
	// b 0x83077b8c
	goto loc_83077B8C;
loc_83077B88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83077B8C:
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// stw r3,100(r30)
	PPC_STORE_U32(r30.u32 + 100, ctx.r3.u32);
	// stw r3,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r3.u32);
loc_83077B98:
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,104(r30)
	PPC_STORE_U32(r30.u32 + 104, r11.u32);
	// bne 0x83077be4
	if (!cr0.eq) goto loc_83077BE4;
	// li r3,28
	ctx.r3.s64 = 28;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83077bd4
	if (cr0.eq) goto loc_83077BD4;
	// li r4,13
	ctx.r4.s64 = 13;
	// lwz r5,216(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82ffe210
	sub_82FFE210(ctx, base);
	// b 0x83077bd8
	goto loc_83077BD8;
loc_83077BD4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83077BD8:
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// stw r3,104(r30)
	PPC_STORE_U32(r30.u32 + 104, ctx.r3.u32);
	// stw r3,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r3.u32);
loc_83077BE4:
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,108(r30)
	PPC_STORE_U32(r30.u32 + 108, r11.u32);
	// bne 0x83077c30
	if (!cr0.eq) goto loc_83077C30;
	// li r3,28
	ctx.r3.s64 = 28;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83077c20
	if (cr0.eq) goto loc_83077C20;
	// li r4,13
	ctx.r4.s64 = 13;
	// lwz r5,216(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82ffe210
	sub_82FFE210(ctx, base);
	// b 0x83077c24
	goto loc_83077C24;
loc_83077C20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83077C24:
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// stw r3,108(r30)
	PPC_STORE_U32(r30.u32 + 108, ctx.r3.u32);
	// stw r3,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r3.u32);
loc_83077C30:
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,96(r30)
	PPC_STORE_U32(r30.u32 + 96, r11.u32);
	// bne 0x83077c7c
	if (!cr0.eq) goto loc_83077C7C;
	// li r3,28
	ctx.r3.s64 = 28;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83077c6c
	if (cr0.eq) goto loc_83077C6C;
	// li r4,29
	ctx.r4.s64 = 29;
	// lwz r5,216(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82ffe210
	sub_82FFE210(ctx, base);
	// b 0x83077c70
	goto loc_83077C70;
loc_83077C6C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83077C70:
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// stw r3,96(r30)
	PPC_STORE_U32(r30.u32 + 96, ctx.r3.u32);
	// stw r3,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r3.u32);
loc_83077C7C:
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,92(r30)
	PPC_STORE_U32(r30.u32 + 92, r11.u32);
	// bne 0x83077cd0
	if (!cr0.eq) goto loc_83077CD0;
	// li r3,44
	ctx.r3.s64 = 44;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83077cb4
	if (cr0.eq) goto loc_83077CB4;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x830a1c70
	sub_830A1C70(ctx, base);
	// b 0x83077cb8
	goto loc_83077CB8;
loc_83077CB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83077CB8:
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r3,92(r30)
	PPC_STORE_U32(r30.u32 + 92, ctx.r3.u32);
	// bl 0x830a1ec0
	sub_830A1EC0(ctx, base);
	// lwz r11,92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// stw r11,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, r11.u32);
loc_83077CD0:
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,184(r30)
	PPC_STORE_U32(r30.u32 + 184, r11.u32);
	// bne 0x83077d1c
	if (!cr0.eq) goto loc_83077D1C;
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83077d0c
	if (cr0.eq) goto loc_83077D0C;
	// li r4,29
	ctx.r4.s64 = 29;
	// lwz r5,216(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x83072658
	sub_83072658(ctx, base);
	// b 0x83077d10
	goto loc_83077D10;
loc_83077D0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83077D10:
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// stw r3,184(r30)
	PPC_STORE_U32(r30.u32 + 184, ctx.r3.u32);
	// stw r3,44(r11)
	PPC_STORE_U32(r11.u32 + 44, ctx.r3.u32);
loc_83077D1C:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,-7008
	ctx.r4.s64 = r11.s64 + -7008;
	// lwz r11,160(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 160);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// bl 0x8306f830
	sub_8306F830(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// stw r4,28(r30)
	PPC_STORE_U32(r30.u32 + 28, ctx.r4.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,84(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// bl 0x82fef120
	sub_82FEF120(ctx, base);
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// li r3,104
	ctx.r3.s64 = 104;
	// lwz r4,212(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stw r11,228(r30)
	PPC_STORE_U32(r30.u32 + 228, r11.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r29.u32);
	// beq 0x83077e3c
	if (cr0.eq) goto loc_83077E3C;
	// lwz r28,216(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r26,28(r30)
	r26.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// bl 0x830a2070
	sub_830A2070(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// bl 0x830a6b08
	sub_830A6B08(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x83077e40
	goto loc_83077E40;
loc_83077E3C:
	// li r29,0
	r29.s64 = 0;
loc_83077E40:
	// lwz r3,120(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83077e58
	if (cr0.eq) goto loc_83077E58;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83073308
	sub_83073308(ctx, base);
loc_83077E58:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// stw r29,120(r30)
	PPC_STORE_U32(r30.u32 + 120, r29.u32);
	// lwz r3,188(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 188);
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// bl 0x83072dd8
	sub_83072DD8(ctx, base);
	// lwz r4,120(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x83073308
	sub_83073308(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830739d0
	sub_830739D0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8307e248
	sub_8307E248(ctx, base);
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_83077EA0"))) PPC_WEAK_FUNC(sub_83077EA0);
PPC_FUNC_IMPL(__imp__sub_83077EA0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83077ED0"))) PPC_WEAK_FUNC(sub_83077ED0);
PPC_FUNC_IMPL(__imp__sub_83077ED0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83077F00"))) PPC_WEAK_FUNC(sub_83077F00);
PPC_FUNC_IMPL(__imp__sub_83077F00) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83077F30"))) PPC_WEAK_FUNC(sub_83077F30);
PPC_FUNC_IMPL(__imp__sub_83077F30) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83077F60"))) PPC_WEAK_FUNC(sub_83077F60);
PPC_FUNC_IMPL(__imp__sub_83077F60) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83077F90"))) PPC_WEAK_FUNC(sub_83077F90);
PPC_FUNC_IMPL(__imp__sub_83077F90) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83077FC0"))) PPC_WEAK_FUNC(sub_83077FC0);
PPC_FUNC_IMPL(__imp__sub_83077FC0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// lwz r4,212(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 212);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83077FF8"))) PPC_WEAK_FUNC(sub_83077FF8);
PPC_FUNC_IMPL(__imp__sub_83077FF8) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b14
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,25
	ctx.r5.s64 = 25;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// lwz r8,160(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// stw r30,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r30.u32);
	// bl 0x830a7f60
	sub_830A7F60(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x830a72e0
	sub_830A72E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x83071390
	sub_83071390(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r23,r11,-28032
	r23.s64 = r11.s64 + -28032;
	// beq 0x8307806c
	if (cr0.eq) goto loc_8307806C;
	// li r6,92
	ctx.r6.s64 = 92;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
loc_8307806C:
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne 0x830780ac
	if (!cr0.eq) goto loc_830780AC;
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// lbz r11,25(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 25);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830780b4
	if (cr0.eq) goto loc_830780B4;
	// lwz r5,160(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830780b4
	if (cr0.eq) goto loc_830780B4;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830771d8
	sub_830771D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,220(r30)
	PPC_STORE_U32(r30.u32 + 220, ctx.r4.u32);
loc_830780AC:
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// bl 0x8305a0d8
	sub_8305A0D8(ctx, base);
loc_830780B4:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-7088
	ctx.r5.s64 = r11.s64 + -7088;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// beq 0x83078414
	if (cr0.eq) goto loc_83078414;
	// lhz r11,0(r26)
	r11.u64 = PPC_LOAD_U16(r26.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83078414
	if (cr0.eq) goto loc_83078414;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83074a18
	sub_83074A18(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r29.u32);
	// bne 0x83078110
	if (!cr0.eq) goto loc_83078110;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
loc_83078108:
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// b 0x8307843c
	goto loc_8307843C;
loc_83078110:
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
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r6,r31,116
	ctx.r6.s64 = r31.s64 + 116;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r3,188(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 188);
	// bl 0x82fea480
	sub_82FEA480(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83078168
	if (cr0.eq) goto loc_83078168;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x83078168
	if (cr0.eq) goto loc_83078168;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,120(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// bl 0x83073308
	sub_83073308(ctx, base);
loc_8307815C:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// b 0x83078108
	goto loc_83078108;
loc_83078168:
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830781a8
	if (!cr6.eq) goto loc_830781A8;
	// li r3,204
	ctx.r3.s64 = 204;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830781a0
	if (cr0.eq) goto loc_830781A0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,216(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8306e810
	sub_8306E810(ctx, base);
	// b 0x830781a4
	goto loc_830781A4;
loc_830781A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830781A4:
	// stw r3,192(r30)
	PPC_STORE_U32(r30.u32 + 192, ctx.r3.u32);
loc_830781A8:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,192(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// bl 0x82fdc818
	sub_82FDC818(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,192(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// bl 0x82fdc7e8
	sub_82FDC7E8(ctx, base);
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwz r3,192(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// bl 0x8306e538
	sub_8306E538(ctx, base);
	// lwz r4,48(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r3,192(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 192);
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
	// lwz r3,192(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 192);
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
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// lbz r11,116(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 116);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83078260
	if (cr0.eq) goto loc_83078260;
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// lbz r11,11(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 11);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83078260
	if (cr0.eq) goto loc_83078260;
	// li r6,297
	ctx.r6.s64 = 297;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
loc_83078260:
	// lwz r3,192(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// bl 0x83159448
	sub_83159448(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83078410
	if (cr0.eq) goto loc_83078410;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x83078410
	if (cr0.eq) goto loc_83078410;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-7008
	ctx.r4.s64 = r11.s64 + -7008;
	// lwz r11,160(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 160);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lhz r27,0(r28)
	r27.u64 = PPC_LOAD_U16(r28.u32 + 0);
	// cmplwi r27,0
	cr0.compare<uint32_t>(r27.u32, 0, xer);
	// beq 0x830782ec
	if (cr0.eq) goto loc_830782EC;
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830782ec
	if (!cr0.eq) goto loc_830782EC;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,91
	ctx.r6.s64 = 91;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// b 0x8307815c
	goto loc_8307815C;
loc_830782EC:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x83078348
	if (!cr6.eq) goto loc_83078348;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r28,r11,-28120
	r28.s64 = r11.s64 + -28120;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,164(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 164);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83078348
	if (!cr0.eq) goto loc_83078348;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x83078348
	if (cr6.eq) goto loc_83078348;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,28(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,172(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 172);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83078348:
	// li r3,104
	ctx.r3.s64 = 104;
	// lwz r4,212(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// lwz r26,120(r30)
	r26.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// stw r27,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r27.u32);
	// beq 0x830783bc
	if (cr0.eq) goto loc_830783BC;
	// lwz r28,216(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r24,28(r30)
	r24.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// bl 0x830a2070
	sub_830A2070(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// bl 0x830a6b08
	sub_830A6B08(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x830783c0
	goto loc_830783C0;
loc_830783BC:
	// li r6,0
	ctx.r6.s64 = 0;
loc_830783C0:
	// stw r6,120(r30)
	PPC_STORE_U32(r30.u32 + 120, ctx.r6.u32);
	// lwz r3,188(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 188);
	// lwz r5,12(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// lwz r4,24(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// bl 0x83072dd8
	sub_83072DD8(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r5,120(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 116);
	// bl 0x83072b78
	sub_83072B78(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,120(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// bl 0x83073308
	sub_83073308(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830739d0
	sub_830739D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8307e248
	sub_8307E248(ctx, base);
	// stw r26,120(r30)
	PPC_STORE_U32(r30.u32 + 120, r26.u32);
loc_83078410:
	// b 0x8307815c
	goto loc_8307815C;
loc_83078414:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r11,-8124
	ctx.r7.s64 = r11.s64 + -8124;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,90
	ctx.r6.s64 = 90;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
loc_8307843C:
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_83078444"))) PPC_WEAK_FUNC(sub_83078444);
PPC_FUNC_IMPL(__imp__sub_83078444) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-208
	r31.s64 = r12.s64 + -208;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x83094688
	sub_83094688(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307846C"))) PPC_WEAK_FUNC(sub_8307846C);
PPC_FUNC_IMPL(__imp__sub_8307846C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-208
	r31.s64 = r12.s64 + -208;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307849C"))) PPC_WEAK_FUNC(sub_8307849C);
PPC_FUNC_IMPL(__imp__sub_8307849C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-208
	r31.s64 = r12.s64 + -208;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// lwz r4,212(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 212);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830784D8"))) PPC_WEAK_FUNC(sub_830784D8);
PPC_FUNC_IMPL(__imp__sub_830784D8) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b14
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// lwz r8,160(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// stw r30,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r30.u32);
	// bl 0x830a7f60
	sub_830A7F60(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x830a72e0
	sub_830A72E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x83071390
	sub_83071390(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r23,r11,-28032
	r23.s64 = r11.s64 + -28032;
	// beq 0x8307854c
	if (cr0.eq) goto loc_8307854C;
	// li r6,92
	ctx.r6.s64 = 92;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
loc_8307854C:
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne 0x8307858c
	if (!cr0.eq) goto loc_8307858C;
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// lbz r11,25(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 25);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83078594
	if (cr0.eq) goto loc_83078594;
	// lwz r5,160(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83078594
	if (cr0.eq) goto loc_83078594;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830771d8
	sub_830771D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,220(r30)
	PPC_STORE_U32(r30.u32 + 220, ctx.r4.u32);
loc_8307858C:
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// bl 0x8305a0d8
	sub_8305A0D8(ctx, base);
loc_83078594:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-7188
	ctx.r5.s64 = r11.s64 + -7188;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830785d8
	if (cr0.eq) goto loc_830785D8;
	// li r6,103
	ctx.r6.s64 = 103;
loc_830785C4:
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
	// b 0x830789e4
	goto loc_830789E4;
loc_830785D8:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x830785ec
	if (cr6.eq) goto loc_830785EC;
	// lhz r11,0(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83078604
	if (!cr0.eq) goto loc_83078604;
loc_830785EC:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x83078604
	if (!cr6.eq) goto loc_83078604;
	// li r6,104
	ctx.r6.s64 = 104;
	// b 0x830785c4
	goto loc_830785C4;
loc_83078604:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// addi r26,r11,-7088
	r26.s64 = r11.s64 + -7088;
	// beq cr6,0x830786bc
	if (cr6.eq) goto loc_830786BC;
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r28,0(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,56(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 56);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// bl 0x82fef000
	sub_82FEF000(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x830786bc
	if (cr6.eq) goto loc_830786BC;
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
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x830786c0
	if (cr6.eq) goto loc_830786C0;
loc_830786BC:
	// li r11,0
	r11.s64 = 0;
loc_830786C0:
	// clrlwi. r28,r11,24
	r28.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x830786ec
	if (cr0.eq) goto loc_830786EC;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,120(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// bl 0x83073228
	sub_83073228(ctx, base);
loc_830786EC:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x83074a18
	sub_83074A18(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x830789e4
	if (cr0.eq) goto loc_830789E4;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
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
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8307876c
	if (cr6.eq) goto loc_8307876C;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
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
	// lwz r11,188(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 188);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// b 0x83078774
	goto loc_83078774;
loc_8307876C:
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r3,188(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 188);
loc_83078774:
	// addi r6,r31,84
	ctx.r6.s64 = r31.s64 + 84;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82fea480
	sub_82FEA480(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830787a4
	if (cr0.eq) goto loc_830787A4;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830787a4
	if (cr6.eq) goto loc_830787A4;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,120(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// bl 0x83073308
	sub_83073308(ctx, base);
	// b 0x830789d8
	goto loc_830789D8;
loc_830787A4:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x830787b8
	if (cr6.eq) goto loc_830787B8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// b 0x830789e0
	goto loc_830789E0;
loc_830787B8:
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830787f8
	if (!cr6.eq) goto loc_830787F8;
	// li r3,204
	ctx.r3.s64 = 204;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830787f0
	if (cr0.eq) goto loc_830787F0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,216(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8306e810
	sub_8306E810(ctx, base);
	// b 0x830787f4
	goto loc_830787F4;
loc_830787F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830787F4:
	// stw r3,192(r30)
	PPC_STORE_U32(r30.u32 + 192, ctx.r3.u32);
loc_830787F8:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,192(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// bl 0x82fdc818
	sub_82FDC818(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,192(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// bl 0x82fdc7e8
	sub_82FDC7E8(ctx, base);
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwz r3,192(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// bl 0x8306e538
	sub_8306E538(ctx, base);
	// lwz r4,48(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r3,192(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 192);
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
	// lwz r3,192(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 192);
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
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// lbz r11,116(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 116);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830788b0
	if (cr0.eq) goto loc_830788B0;
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// lbz r11,11(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 11);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830788b0
	if (cr0.eq) goto loc_830788B0;
	// li r6,297
	ctx.r6.s64 = 297;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
loc_830788B0:
	// lwz r3,192(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// bl 0x83159448
	sub_83159448(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830789d8
	if (cr0.eq) goto loc_830789D8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bne 0x830788dc
	if (!cr0.eq) goto loc_830788DC;
	// b 0x830789d8
	goto loc_830789D8;
loc_830788DC:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-7008
	ctx.r4.s64 = r11.s64 + -7008;
	// lwz r11,160(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 160);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83078934
	if (!cr0.eq) goto loc_83078934;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// li r6,88
	ctx.r6.s64 = 88;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// b 0x830789d8
	goto loc_830789D8;
loc_83078934:
	// li r3,80
	ctx.r3.s64 = 80;
	// lwz r27,120(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307895c
	if (cr0.eq) goto loc_8307895C;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x8305a378
	sub_8305A378(ctx, base);
	// b 0x83078960
	goto loc_83078960;
loc_8307895C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83078960:
	// stw r3,40(r30)
	PPC_STORE_U32(r30.u32 + 40, ctx.r3.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83077ab0
	sub_83077AB0(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r5,120(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 116);
	// bl 0x83072b78
	sub_83072B78(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306ffa8
	sub_8306FFA8(ctx, base);
loc_830789D8:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
loc_830789E0:
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
loc_830789E4:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_830789EC"))) PPC_WEAK_FUNC(sub_830789EC);
PPC_FUNC_IMPL(__imp__sub_830789EC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-176
	r31.s64 = r12.s64 + -176;
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

__attribute__((alias("__imp__sub_83078A14"))) PPC_WEAK_FUNC(sub_83078A14);
PPC_FUNC_IMPL(__imp__sub_83078A14) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-176
	r31.s64 = r12.s64 + -176;
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

__attribute__((alias("__imp__sub_83078A3C"))) PPC_WEAK_FUNC(sub_83078A3C);
PPC_FUNC_IMPL(__imp__sub_83078A3C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-176
	r31.s64 = r12.s64 + -176;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
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

__attribute__((alias("__imp__sub_83078A6C"))) PPC_WEAK_FUNC(sub_83078A6C);
PPC_FUNC_IMPL(__imp__sub_83078A6C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-176
	r31.s64 = r12.s64 + -176;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
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

__attribute__((alias("__imp__sub_83078AA8"))) PPC_WEAK_FUNC(sub_83078AA8);
PPC_FUNC_IMPL(__imp__sub_83078AA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x831b0b00
	// addi r31,r1,-272
	r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// lwz r8,160(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// stw r30,292(r31)
	PPC_STORE_U32(r31.u32 + 292, r30.u32);
	// stw r29,300(r31)
	PPC_STORE_U32(r31.u32 + 300, r29.u32);
	// bl 0x830a7f60
	sub_830A7F60(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830a72e0
	sub_830A72E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x83071390
	sub_83071390(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83078b24
	if (cr0.eq) goto loc_83078B24;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,92
	ctx.r6.s64 = 92;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
loc_83078B24:
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// lbz r11,25(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 25);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83078b60
	if (cr0.eq) goto loc_83078B60;
	// lwz r11,220(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83078b60
	if (!cr6.eq) goto loc_83078B60;
	// lwz r5,160(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83078b60
	if (cr0.eq) goto loc_83078B60;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830771d8
	sub_830771D8(ctx, base);
	// stw r3,220(r30)
	PPC_STORE_U32(r30.u32 + 220, ctx.r3.u32);
loc_83078B60:
	// lwz r18,220(r30)
	r18.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// stw r18,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r18.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-7140
	ctx.r5.s64 = r11.s64 + -7140;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r5,r11,-7188
	ctx.r5.s64 = r11.s64 + -7188;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// li r11,8
	r11.s64 = 8;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r26,6
	r26.s64 = 6;
	// li r25,7
	r25.s64 = 7;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// beq cr6,0x83078c28
	if (cr6.eq) goto loc_83078C28;
	// lhz r11,0(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83078c28
	if (cr0.eq) goto loc_83078C28;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r27,r11,32452
	r27.s64 = r11.s64 + 32452;
	// addi r4,r27,20
	ctx.r4.s64 = r27.s64 + 20;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83078c28
	if (!cr0.eq) goto loc_83078C28;
	// addi r4,r27,12
	ctx.r4.s64 = r27.s64 + 12;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83078c04
	if (cr0.eq) goto loc_83078C04;
	// li r26,22
	r26.s64 = 22;
	// li r25,23
	r25.s64 = 23;
	// li r11,24
	r11.s64 = 24;
	// b 0x83078c24
	goto loc_83078C24;
loc_83078C04:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83078c28
	if (cr0.eq) goto loc_83078C28;
	// li r26,38
	r26.s64 = 38;
	// li r25,39
	r25.s64 = 39;
	// li r11,40
	r11.s64 = 40;
loc_83078C24:
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_83078C28:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x83078f8c
	if (cr6.eq) goto loc_83078F8C;
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83078f8c
	if (cr0.eq) goto loc_83078F8C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-6904
	ctx.r4.s64 = r11.s64 + -6904;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83078f8c
	if (!cr0.eq) goto loc_83078F8C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-6876
	ctx.r4.s64 = r11.s64 + -6876;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83078ce4
	if (cr0.eq) goto loc_83078CE4;
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r29.u32);
	// beq 0x83078cd4
	if (cr0.eq) goto loc_83078CD4;
	// li r3,36
	ctx.r3.s64 = 36;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83078cbc
	if (cr0.eq) goto loc_83078CBC;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r5,r11,-27800
	ctx.r5.s64 = r11.s64 + -27800;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82fe7048
	sub_82FE7048(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83078cc0
	goto loc_83078CC0;
loc_83078CBC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_83078CC0:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r6,216(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x830465a8
	sub_830465A8(ctx, base);
	// b 0x83078cd8
	goto loc_83078CD8;
loc_83078CD4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83078CD8:
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r25,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r25.u32);
	// b 0x83079000
	goto loc_83079000;
loc_83078CE4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,212(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// bl 0x82fdbb28
	sub_82FDBB28(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,216(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// stw r25,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r25.u32);
	// bl 0x83070930
	sub_83070930(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r27,0
	r27.s64 = 0;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// addi r4,r11,-5500
	ctx.r4.s64 = r11.s64 + -5500;
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// stw r27,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r27.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// bl 0x82feec20
	sub_82FEEC20(ctx, base);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// addi r26,r11,-5208
	r26.s64 = r11.s64 + -5208;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r20,0
	r20.s64 = 0;
	// addi r21,r11,-6860
	r21.s64 = r11.s64 + -6860;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// stw r19,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r19.u32);
	// li r22,1
	r22.s64 = 1;
	// addi r23,r11,-6892
	r23.s64 = r11.s64 + -6892;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r24,r11,-27800
	r24.s64 = r11.s64 + -27800;
loc_83078D5C:
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// stw r20,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r20.u32);
	// cmplw cr6,r20,r11
	cr6.compare<uint32_t>(r20.u32, r11.u32, xer);
	// bge cr6,0x83078f4c
	if (!cr6.lt) goto loc_83078F4C;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r28,8(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r29,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r29.u32);
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83078e38
	if (!cr0.eq) goto loc_83078E38;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83078db0
	if (cr0.eq) goto loc_83078DB0;
	// lwz r28,4(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// b 0x83078e38
	goto loc_83078E38;
loc_83078DB0:
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lwz r10,0(r19)
	ctx.r10.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,212(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// lwz r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// lwz r11,28(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x83078e1c
	goto loc_83078E1C;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// lwz r30,292(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// li r22,1
	r22.s64 = 1;
	// addi r26,r11,-5208
	r26.s64 = r11.s64 + -5208;
	// lwz r18,88(r31)
	r18.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r25,100(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r27,84(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r21,r11,-6860
	r21.s64 = r11.s64 + -6860;
	// lwz r19,104(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r20,92(r31)
	r20.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// lwz r29,108(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// addi r23,r11,-6892
	r23.s64 = r11.s64 + -6892;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r24,r11,-27800
	r24.s64 = r11.s64 + -27800;
loc_83078E1C:
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_83078E38:
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r28,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r28.u32);
	// addi r4,r31,108
	ctx.r4.s64 = r31.s64 + 108;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x830708e0
	sub_830708E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83078f44
	if (!cr0.eq) goto loc_83078F44;
	// addi r4,r31,108
	ctx.r4.s64 = r31.s64 + 108;
	// stw r28,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r28.u32);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x8305c228
	sub_8305C228(ctx, base);
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r29.u32);
	// beq 0x83078ecc
	if (cr0.eq) goto loc_83078ECC;
	// li r3,36
	ctx.r3.s64 = 36;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83078eb0
	if (cr0.eq) goto loc_83078EB0;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82fe7048
	sub_82FE7048(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83078eb4
	goto loc_83078EB4;
loc_83078EB0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_83078EB4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r6,216(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x830465a8
	sub_830465A8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x83078ed0
	goto loc_83078ED0;
loc_83078ECC:
	// li r29,0
	r29.s64 = 0;
loc_83078ED0:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// stw r11,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r11.u32);
	// bne cr6,0x83078eec
	if (!cr6.eq) goto loc_83078EEC;
	// mr r27,r29
	r27.u64 = r29.u64;
	// stw r27,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r27.u32);
	// b 0x83078f44
	goto loc_83078F44;
loc_83078EEC:
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq 0x83078f3c
	if (cr0.eq) goto loc_83078F3C;
	// lwz r11,216(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r9,20
	ctx.r9.s64 = 20;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r26.u32);
	// stw r27,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r27.u32);
	// stw r29,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r29.u32);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// stb r22,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, r22.u8);
	// stb r22,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, r22.u8);
	// stw r22,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r22.u32);
	// stw r22,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r22.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
loc_83078F3C:
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// stw r27,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r27.u32);
loc_83078F44:
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// b 0x83078d5c
	goto loc_83078D5C;
loc_83078F4C:
	// mr r29,r27
	r29.u64 = r27.u64;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x83078f70
	if (cr6.eq) goto loc_83078F70;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83078F70:
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// lwz r4,140(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83079000
	goto loc_83079000;
loc_83078F8C:
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r29.u32);
	// beq 0x83078ff4
	if (cr0.eq) goto loc_83078FF4;
	// li r3,36
	ctx.r3.s64 = 36;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83078fdc
	if (cr0.eq) goto loc_83078FDC;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r5,r11,-27800
	ctx.r5.s64 = r11.s64 + -27800;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82fe7048
	sub_82FE7048(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83078fe0
	goto loc_83078FE0;
loc_83078FDC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_83078FE0:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r6,216(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x830465a8
	sub_830465A8(ctx, base);
	// b 0x83078ff8
	goto loc_83078FF8;
loc_83078FF4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83078FF8:
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r26,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r26.u32);
loc_83079000:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8307902c
	if (cr6.eq) goto loc_8307902C;
	// cntlzw r11,r18
	r11.u64 = r18.u32 == 0 ? 32 : __builtin_clz(r18.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8307902c
	if (!cr0.eq) goto loc_8307902C;
	// li r11,0
	r11.s64 = 0;
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// bl 0x8305a0d0
	sub_8305A0D0(ctx, base);
loc_8307902C:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,272
	ctx.r1.s64 = r31.s64 + 272;
	// b 0x831b0b50
	return;
}

__attribute__((alias("__imp__sub_8307904C"))) PPC_WEAK_FUNC(sub_8307904C);
PPC_FUNC_IMPL(__imp__sub_8307904C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,300(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 300);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,156
	ctx.r6.s64 = 156;
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31992
	ctx.r3.s64 = -2096627712;
	// addi r3,r3,-29220
	ctx.r3.s64 = ctx.r3.s64 + -29220;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b50
	return;
}

__attribute__((alias("__imp__sub_830790A0"))) PPC_WEAK_FUNC(sub_830790A0);
PPC_FUNC_IMPL(__imp__sub_830790A0) {
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

__attribute__((alias("__imp__sub_830790C8"))) PPC_WEAK_FUNC(sub_830790C8);
PPC_FUNC_IMPL(__imp__sub_830790C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,292(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
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

__attribute__((alias("__imp__sub_830790F8"))) PPC_WEAK_FUNC(sub_830790F8);
PPC_FUNC_IMPL(__imp__sub_830790F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,292(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
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

__attribute__((alias("__imp__sub_83079128"))) PPC_WEAK_FUNC(sub_83079128);
PPC_FUNC_IMPL(__imp__sub_83079128) {
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
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x83034d68
	sub_83034D68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83079150"))) PPC_WEAK_FUNC(sub_83079150);
PPC_FUNC_IMPL(__imp__sub_83079150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,292(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
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

__attribute__((alias("__imp__sub_83079180"))) PPC_WEAK_FUNC(sub_83079180);
PPC_FUNC_IMPL(__imp__sub_83079180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,292(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
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

__attribute__((alias("__imp__sub_830791B0"))) PPC_WEAK_FUNC(sub_830791B0);
PPC_FUNC_IMPL(__imp__sub_830791B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,292(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
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

__attribute__((alias("__imp__sub_830791E0"))) PPC_WEAK_FUNC(sub_830791E0);
PPC_FUNC_IMPL(__imp__sub_830791E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,292(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
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

__attribute__((alias("__imp__sub_83079218"))) PPC_WEAK_FUNC(sub_83079218);
PPC_FUNC_IMPL(__imp__sub_83079218) {
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
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// lwz r8,160(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r30,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r30.u32);
	// bl 0x830a7f60
	sub_830A7F60(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830a72e0
	sub_830A72E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x83071390
	sub_83071390(ctx, base);
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// lbz r11,25(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 25);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830792a8
	if (cr0.eq) goto loc_830792A8;
	// lwz r11,220(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830792a8
	if (!cr6.eq) goto loc_830792A8;
	// lwz r5,160(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830792a8
	if (cr0.eq) goto loc_830792A8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830771d8
	sub_830771D8(ctx, base);
	// stw r3,220(r30)
	PPC_STORE_U32(r30.u32 + 220, ctx.r3.u32);
loc_830792A8:
	// lwz r18,220(r30)
	r18.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// stw r18,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r18.u32);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// bne cr6,0x830792d4
	if (!cr6.eq) goto loc_830792D4;
	// li r30,0
	r30.s64 = 0;
loc_830792BC:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x831b0b50
	return;
loc_830792D4:
	// lis r11,-32234
	r11.s64 = -2112487424;
	// li r26,0
	r26.s64 = 0;
	// addi r24,r11,-5208
	r24.s64 = r11.s64 + -5208;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r27,r26
	r27.u64 = r26.u64;
	// addi r20,r11,-28032
	r20.s64 = r11.s64 + -28032;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r25,r26
	r25.u64 = r26.u64;
	// mr r21,r26
	r21.u64 = r26.u64;
	// addi r19,r11,-8248
	r19.s64 = r11.s64 + -8248;
	// li r29,1
	r29.s64 = 1;
	// li r22,9
	r22.s64 = 9;
loc_83079304:
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq 0x83079400
	if (cr0.eq) goto loc_83079400;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x83084868
	sub_83084868(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x8307941c
	if (cr0.eq) goto loc_8307941C;
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83079370
	if (cr0.eq) goto loc_83079370;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r5,216(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x8306f680
	sub_8306F680(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x83079374
	goto loc_83079374;
loc_83079370:
	// mr r28,r26
	r28.u64 = r26.u64;
loc_83079374:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83071cd8
	sub_83071CD8(ctx, base);
	// mr r21,r29
	r21.u64 = r29.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x8307939c
	if (!cr6.eq) goto loc_8307939C;
	// mr r27,r28
	r27.u64 = r28.u64;
	// b 0x8307941c
	goto loc_8307941C;
loc_8307939C:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x830793f8
	if (cr6.eq) goto loc_830793F8;
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830793f0
	if (cr0.eq) goto loc_830793F0;
	// lwz r11,216(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r26,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// stw r24,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r24.u32);
	// stw r26,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// stw r27,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r27.u32);
	// stw r25,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r25.u32);
	// stw r22,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r22.u32);
	// stb r29,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, r29.u8);
	// stb r29,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, r29.u8);
	// stw r29,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r29.u32);
	// stw r29,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r29.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x830793f4
	goto loc_830793F4;
loc_830793F0:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_830793F4:
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
loc_830793F8:
	// mr r25,r28
	r25.u64 = r28.u64;
	// b 0x8307941c
	goto loc_8307941C;
loc_83079400:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r6,133
	ctx.r6.s64 = 133;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
loc_8307941C:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x830a7430
	sub_830A7430(ctx, base);
	// mr. r23,r3
	r23.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r23.s32, 0, xer);
	// bne 0x83079304
	if (!cr0.eq) goto loc_83079304;
	// clrlwi. r11,r21,24
	r11.u64 = r21.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830794a4
	if (cr0.eq) goto loc_830794A4;
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83079480
	if (cr0.eq) goto loc_83079480;
	// lwz r11,216(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r26,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// stw r24,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r24.u32);
	// stw r26,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// stw r27,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r27.u32);
	// stw r25,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r25.u32);
	// stw r22,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r22.u32);
	// stb r29,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, r29.u8);
	// stb r29,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, r29.u8);
	// stw r29,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r29.u32);
	// stw r29,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r29.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x83079484
	goto loc_83079484;
loc_83079480:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_83079484:
	// cntlzw r11,r18
	r11.u64 = r18.u32 == 0 ? 32 : __builtin_clz(r18.u32);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830794a4
	if (!cr0.eq) goto loc_830794A4;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// bl 0x8305a0d0
	sub_8305A0D0(ctx, base);
loc_830794A4:
	// mr r30,r27
	r30.u64 = r27.u64;
	// b 0x830792bc
	goto loc_830792BC;
}

__attribute__((alias("__imp__sub_830794AC"))) PPC_WEAK_FUNC(sub_830794AC);
PPC_FUNC_IMPL(__imp__sub_830794AC) {
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

__attribute__((alias("__imp__sub_830794D4"))) PPC_WEAK_FUNC(sub_830794D4);
PPC_FUNC_IMPL(__imp__sub_830794D4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
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

__attribute__((alias("__imp__sub_83079510"))) PPC_WEAK_FUNC(sub_83079510);
PPC_FUNC_IMPL(__imp__sub_83079510) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,36
	ctx.r5.s64 = 36;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// lwz r8,160(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// bl 0x830a7f60
	sub_830A7F60(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-7200
	ctx.r5.s64 = r11.s64 + -7200;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// beq 0x83079574
	if (cr0.eq) goto loc_83079574;
	// lhz r11,0(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// bne 0x83079578
	if (!cr0.eq) goto loc_83079578;
loc_83079574:
	// li r11,1
	r11.s64 = 1;
loc_83079578:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830795b4
	if (cr0.eq) goto loc_830795B4;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r11,-7896
	ctx.r7.s64 = r11.s64 + -7896;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,98
	ctx.r6.s64 = 98;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83079720
	goto loc_83079720;
loc_830795B4:
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 172);
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
	// bne 0x8307971c
	if (!cr0.eq) goto loc_8307971C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-7024
	ctx.r5.s64 = r11.s64 + -7024;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r5,r11,-7040
	ctx.r5.s64 = r11.s64 + -7040;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r24,4(r30)
	r24.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r28,0(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lwz r11,36(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 172);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x83072d30
	sub_83072D30(ctx, base);
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
	// beq 0x83079690
	if (cr0.eq) goto loc_83079690;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,216(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x830a1a38
	sub_830A1A38(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x83079694
	goto loc_83079694;
loc_83079690:
	// li r28,0
	r28.s64 = 0;
loc_83079694:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r11,24(r28)
	PPC_STORE_U32(r28.u32 + 24, r11.u32);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830a72e0
	sub_830A72E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x83071390
	sub_83071390(ctx, base);
	// lwz r5,220(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// cmplwi r5,0
	cr0.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne 0x83079710
	if (!cr0.eq) goto loc_83079710;
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// lbz r11,25(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 25);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307971c
	if (cr0.eq) goto loc_8307971C;
	// lwz r5,160(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8307971c
	if (cr6.eq) goto loc_8307971C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830771d8
	sub_830771D8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r5,220(r30)
	PPC_STORE_U32(r30.u32 + 220, ctx.r5.u32);
loc_83079710:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// bl 0x8305a0d0
	sub_8305A0D0(ctx, base);
loc_8307971C:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_83079720:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_83079728"))) PPC_WEAK_FUNC(sub_83079728);
PPC_FUNC_IMPL(__imp__sub_83079728) {
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

__attribute__((alias("__imp__sub_83079758"))) PPC_WEAK_FUNC(sub_83079758);
PPC_FUNC_IMPL(__imp__sub_83079758) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r31,120
	r30.s64 = r31.s64 + 120;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r10,r3
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, xer);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r25,r11
	r25.u64 = r11.u64;
	// beq cr6,0x83079870
	if (cr6.eq) goto loc_83079870;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
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
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830797e0
	if (cr0.eq) goto loc_830797E0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830709a8
	sub_830709A8(ctx, base);
loc_830797E0:
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83079818
	if (!cr0.eq) goto loc_83079818;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,159
	ctx.r6.s64 = 159;
loc_830797F0:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
loc_830797F8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_830797FC:
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830798dc
	goto loc_830798DC;
loc_83079818:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// bl 0x82feeed8
	sub_82FEEED8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830798b8
	if (cr0.eq) goto loc_830798B8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x830798b8
	if (!cr6.eq) goto loc_830798B8;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x83070e50
	sub_83070E50(ctx, base);
	// mr. r11,r3
	r11.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830798ac
	if (cr0.eq) goto loc_830798AC;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x830798ac
	if (!cr0.eq) goto loc_830798AC;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_83079870:
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// addi r5,r10,-7896
	ctx.r5.s64 = ctx.r10.s64 + -7896;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x830a7240
	sub_830A7240(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne 0x830798cc
	if (!cr0.eq) goto loc_830798CC;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// li r6,145
	ctx.r6.s64 = 145;
	// b 0x830797fc
	goto loc_830797FC;
loc_830798AC:
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// li r6,39
	ctx.r6.s64 = 39;
	// b 0x830797f0
	goto loc_830797F0;
loc_830798B8:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r11,-28480
	ctx.r5.s64 = r11.s64 + -28480;
	// li r6,72
	ctx.r6.s64 = 72;
	// b 0x830797f8
	goto loc_830797F8;
loc_830798CC:
	// bl 0x83079510
	sub_83079510(ctx, base);
	// stw r25,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r25.u32);
	// lwz r11,12(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 12);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_830798DC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_830798F0"))) PPC_WEAK_FUNC(sub_830798F0);
PPC_FUNC_IMPL(__imp__sub_830798F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x831b0b0c
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r5,r11,-7488
	ctx.r5.s64 = r11.s64 + -7488;
	// stw r29,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r26,252(r31)
	PPC_STORE_U32(r31.u32 + 252, r26.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r30,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r30.u32);
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// lwz r8,160(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,29
	ctx.r5.s64 = 29;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x830a7f60
	sub_830A7F60(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830a7430
	sub_830A7430(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r24,r11,-28032
	r24.s64 = r11.s64 + -28032;
	// beq 0x83079990
	if (cr0.eq) goto loc_83079990;
	// li r6,22
	ctx.r6.s64 = 22;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
loc_83079990:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x83079a4c
	if (cr6.eq) goto loc_83079A4C;
	// lhz r11,0(r23)
	r11.u64 = PPC_LOAD_U16(r23.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83079a4c
	if (cr0.eq) goto loc_83079A4C;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83073d98
	sub_83073D98(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830a72e0
	sub_830A72E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x83071390
	sub_83071390(ctx, base);
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lbz r11,25(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 25);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83079a1c
	if (cr0.eq) goto loc_83079A1C;
	// lwz r11,220(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83079a1c
	if (!cr6.eq) goto loc_83079A1C;
	// lwz r5,160(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83079a1c
	if (cr0.eq) goto loc_83079A1C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830771d8
	sub_830771D8(ctx, base);
	// stw r3,220(r30)
	PPC_STORE_U32(r30.u32 + 220, ctx.r3.u32);
loc_83079A1C:
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x83079b34
	if (cr0.eq) goto loc_83079B34;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83079a44
	if (cr0.eq) goto loc_83079A44;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// b 0x83079b34
	goto loc_83079B34;
loc_83079A44:
	// bl 0x83049068
	sub_83049068(ctx, base);
	// b 0x83079b34
	goto loc_83079B34;
loc_83079A4C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830a72e0
	sub_830A72E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x83071390
	sub_83071390(ctx, base);
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lbz r11,25(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 25);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83079aa8
	if (cr0.eq) goto loc_83079AA8;
	// lwz r11,220(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83079aa8
	if (!cr6.eq) goto loc_83079AA8;
	// lwz r5,160(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83079aa8
	if (cr0.eq) goto loc_83079AA8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830771d8
	sub_830771D8(ctx, base);
	// stw r3,220(r30)
	PPC_STORE_U32(r30.u32 + 220, ctx.r3.u32);
loc_83079AA8:
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x83079ad4
	if (cr0.eq) goto loc_83079AD4;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83079ad0
	if (cr0.eq) goto loc_83079AD0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// b 0x83079ad4
	goto loc_83079AD4;
loc_83079AD0:
	// bl 0x83049068
	sub_83049068(ctx, base);
loc_83079AD4:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x83079ae8
	if (!cr6.eq) goto loc_83079AE8;
	// li r6,23
	ctx.r6.s64 = 23;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// b 0x83079c20
	goto loc_83079C20;
loc_83079AE8:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r27,r11,-7732
	r27.s64 = r11.s64 + -7732;
	// lwz r11,92(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83079c1c
	if (cr0.eq) goto loc_83079C1C;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8307e330
	sub_8307E330(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830a7430
	sub_830A7430(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_83079B34:
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// beq cr6,0x83079bfc
	if (cr6.eq) goto loc_83079BFC;
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
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83079b88
	if (!cr0.eq) goto loc_83079B88;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// li r6,112
	ctx.r6.s64 = 112;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// b 0x83079bfc
	goto loc_83079BFC;
loc_83079B88:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x83079bb4
	if (cr6.eq) goto loc_83079BB4;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,25
	ctx.r6.s64 = 25;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
loc_83079BB4:
	// lwz r11,212(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x83018b38
	sub_83018B38(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// b 0x83079bfc
	goto loc_83079BFC;
	// b 0x83079bf8
	goto loc_83079BF8;
loc_83079BF8:
	// lwz r30,228(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 228);
loc_83079BFC:
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 136);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83079c14
	if (cr0.eq) goto loc_83079C14;
	// addi r4,r11,-1
	ctx.r4.s64 = r11.s64 + -1;
	// bl 0x82fdea08
	sub_82FDEA08(ctx, base);
loc_83079C14:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x83079c58
	goto loc_83079C58;
loc_83079C1C:
	// li r6,24
	ctx.r6.s64 = 24;
loc_83079C20:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 136);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83079c54
	if (cr0.eq) goto loc_83079C54;
	// addi r4,r11,-1
	ctx.r4.s64 = r11.s64 + -1;
	// bl 0x82fdea08
	sub_82FDEA08(ctx, base);
loc_83079C54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83079C58:
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_83079C68"))) PPC_WEAK_FUNC(sub_83079C68);
PPC_FUNC_IMPL(__imp__sub_83079C68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-208
	r31.s64 = r12.s64 + -208;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,244(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,73
	ctx.r6.s64 = 73;
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r5,r11,-28480
	ctx.r5.s64 = r11.s64 + -28480;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lis r3,-31992
	ctx.r3.s64 = -2096627712;
	// addi r3,r3,-25612
	ctx.r3.s64 = ctx.r3.s64 + -25612;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_83079CC4"))) PPC_WEAK_FUNC(sub_83079CC4);
PPC_FUNC_IMPL(__imp__sub_83079CC4) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_83079CE4"))) PPC_WEAK_FUNC(sub_83079CE4);
PPC_FUNC_IMPL(__imp__sub_83079CE4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-208
	r31.s64 = r12.s64 + -208;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,252(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 252);
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// lwz r4,244(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,44
	ctx.r6.s64 = 44;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lis r3,-31992
	ctx.r3.s64 = -2096627712;
	// addi r3,r3,-25608
	ctx.r3.s64 = ctx.r3.s64 + -25608;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_83079D40"))) PPC_WEAK_FUNC(sub_83079D40);
PPC_FUNC_IMPL(__imp__sub_83079D40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x831b0af0
	// addi r31,r1,-384
	r31.s64 = ctx.r1.s64 + -384;
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r7,436(r31)
	PPC_STORE_U32(r31.u32 + 436, ctx.r7.u32);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// stw r8,444(r31)
	PPC_STORE_U32(r31.u32 + 444, ctx.r8.u32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r14,0
	r14.s64 = 0;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// stw r29,420(r31)
	PPC_STORE_U32(r31.u32 + 420, r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r25,412(r31)
	PPC_STORE_U32(r31.u32 + 412, r25.u32);
	// addi r5,r11,-7500
	ctx.r5.s64 = r11.s64 + -7500;
	// stw r27,428(r31)
	PPC_STORE_U32(r31.u32 + 428, r27.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r30,404(r31)
	PPC_STORE_U32(r31.u32 + 404, r30.u32);
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// stw r14,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r14.u32);
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,160(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,39
	ctx.r5.s64 = 39;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x830a7f60
	sub_830A7F60(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830a7430
	sub_830A7430(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r24,r11,-28032
	r24.s64 = r11.s64 + -28032;
	// stw r24,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r24.u32);
	// beq 0x83079df0
	if (cr0.eq) goto loc_83079DF0;
	// li r6,22
	ctx.r6.s64 = 22;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
loc_83079DF0:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x83079eb4
	if (cr6.eq) goto loc_83079EB4;
	// lhz r11,0(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83079eb4
	if (cr0.eq) goto loc_83079EB4;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83073d98
	sub_83073D98(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r27,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r27.u32);
	// bl 0x830a72e0
	sub_830A72E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x83071390
	sub_83071390(ctx, base);
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lbz r11,25(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 25);
	// stw r25,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r25.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83079e84
	if (cr0.eq) goto loc_83079E84;
	// lwz r11,220(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83079e84
	if (!cr6.eq) goto loc_83079E84;
	// lwz r5,160(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83079e84
	if (cr0.eq) goto loc_83079E84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830771d8
	sub_830771D8(ctx, base);
	// stw r3,220(r30)
	PPC_STORE_U32(r30.u32 + 220, ctx.r3.u32);
loc_83079E84:
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x83079fb0
	if (cr0.eq) goto loc_83079FB0;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83079eac
	if (cr0.eq) goto loc_83079EAC;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// b 0x83079fb0
	goto loc_83079FB0;
loc_83079EAC:
	// bl 0x83049068
	sub_83049068(ctx, base);
	// b 0x83079fb0
	goto loc_83079FB0;
loc_83079EB4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830a72e0
	sub_830A72E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x83071390
	sub_83071390(ctx, base);
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lbz r11,25(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 25);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83079f10
	if (cr0.eq) goto loc_83079F10;
	// lwz r11,220(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83079f10
	if (!cr6.eq) goto loc_83079F10;
	// lwz r5,160(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83079f10
	if (cr0.eq) goto loc_83079F10;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830771d8
	sub_830771D8(ctx, base);
	// stw r3,220(r30)
	PPC_STORE_U32(r30.u32 + 220, ctx.r3.u32);
loc_83079F10:
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x83079f3c
	if (cr0.eq) goto loc_83079F3C;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83079f38
	if (cr0.eq) goto loc_83079F38;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// b 0x83079f3c
	goto loc_83079F3C;
loc_83079F38:
	// bl 0x83049068
	sub_83049068(ctx, base);
loc_83079F3C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x83079f5c
	if (!cr6.eq) goto loc_83079F5C;
	// li r6,26
	ctx.r6.s64 = 26;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
	// b 0x8307a7e8
	goto loc_8307A7E8;
loc_83079F5C:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r29,r11,-7732
	r29.s64 = r11.s64 + -7732;
	// lwz r11,92(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq 0x8307a7cc
	if (cr0.eq) goto loc_8307A7CC;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8307e330
	sub_8307E330(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r27,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r27.u32);
	// bl 0x830a7430
	sub_830A7430(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// stw r25,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r25.u32);
loc_83079FB0:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8307a7ac
	if (cr6.eq) goto loc_8307A7AC;
	// mr r18,r14
	r18.u64 = r14.u64;
	// lwz r5,216(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// mr r17,r14
	r17.u64 = r14.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// stw r18,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r18.u32);
	// stw r17,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r17.u32);
	// bl 0x82fe7278
	sub_82FE7278(ctx, base);
	// mr r15,r14
	r15.u64 = r14.u64;
	// stw r15,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r15.u32);
	// mr r16,r14
	r16.u64 = r14.u64;
	// stw r16,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r16.u32);
	// li r11,1
	r11.s64 = 1;
	// lwz r27,112(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// stw r14,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r14.u32);
	// sth r14,98(r31)
	PPC_STORE_U16(r31.u32 + 98, r14.u16);
	// stb r11,96(r31)
	PPC_STORE_U8(r31.u32 + 96, r11.u8);
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r23,r11,32376
	r23.s64 = r11.s64 + 32376;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r24,r11,-15044
	r24.s64 = r11.s64 + -15044;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r22,r11,-6208
	r22.s64 = r11.s64 + -6208;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r21,r11,-8176
	r21.s64 = r11.s64 + -8176;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r19,r11,-7876
	r19.s64 = r11.s64 + -7876;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r20,r11,-8212
	r20.s64 = r11.s64 + -8212;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r26,r11,-6956
	r26.s64 = r11.s64 + -6956;
loc_8307A034:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x8307a618
	if (cr6.eq) goto loc_8307A618;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsh r11,r3
	r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8307a604
	if (!cr6.eq) goto loc_8307A604;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r14
	r28.u64 = r14.u64;
	// stw r29,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r29.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,212(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// bl 0x8302e8f0
	sub_8302E8F0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// sth r11,98(r31)
	PPC_STORE_U16(r31.u32 + 98, r11.u16);
	// b 0x8307a10c
	goto loc_8307A10C;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// lwz r30,404(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 404);
	// li r14,0
	r14.s64 = 0;
	// addi r23,r11,32376
	r23.s64 = r11.s64 + 32376;
	// lwz r25,100(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r18,124(r31)
	r18.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// lwz r17,128(r31)
	r17.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// addi r24,r11,-15044
	r24.s64 = r11.s64 + -15044;
	// lwz r15,108(r31)
	r15.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r16,104(r31)
	r16.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// lwz r29,120(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// addi r22,r11,-6208
	r22.s64 = r11.s64 + -6208;
	// lbz r28,97(r31)
	r28.u64 = PPC_LOAD_U8(r31.u32 + 97);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r27,112(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// addi r21,r11,-8176
	r21.s64 = r11.s64 + -8176;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r19,r11,-7876
	r19.s64 = r11.s64 + -7876;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r20,r11,-8212
	r20.s64 = r11.s64 + -8212;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r26,r11,-6956
	r26.s64 = r11.s64 + -6956;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r11,r11,-28032
	r11.s64 = r11.s64 + -28032;
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
loc_8307A10C:
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8307a034
	if (!cr0.eq) goto loc_8307A034;
	// li r7,0
	ctx.r7.s64 = 0;
	// lhz r5,98(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 98);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r8,160(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x830a7f60
	sub_830A7F60(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x830a72e0
	sub_830A72E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,412(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 412);
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x83071390
	sub_83071390(ctx, base);
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r11,160(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 160);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(r18.u32, 0, xer);
	// bne cr6,0x8307a1a8
	if (!cr6.eq) goto loc_8307A1A8;
	// li r3,28
	ctx.r3.s64 = 28;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,124(r31)
	PPC_STORE_U32(r31.u32 + 124, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307a19c
	if (cr0.eq) goto loc_8307A19C;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,216(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x83054fb0
	sub_83054FB0(ctx, base);
	// b 0x8307a1a0
	goto loc_8307A1A0;
loc_8307A19C:
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
loc_8307A1A0:
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// stw r18,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r18.u32);
loc_8307A1A8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8307a3a0
	if (cr0.eq) goto loc_8307A3A0;
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// lbz r11,25(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 25);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307a1f8
	if (cr0.eq) goto loc_8307A1F8;
	// lwz r11,220(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8307a1f8
	if (!cr6.eq) goto loc_8307A1F8;
	// lwz r5,160(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307a1f8
	if (cr0.eq) goto loc_8307A1F8;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830771d8
	sub_830771D8(ctx, base);
	// stw r3,220(r30)
	PPC_STORE_U32(r30.u32 + 220, ctx.r3.u32);
loc_8307A1F8:
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8307a228
	if (cr0.eq) goto loc_8307A228;
	// cntlzw r11,r15
	r11.u64 = r15.u32 == 0 ? 32 : __builtin_clz(r15.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8307a220
	if (cr0.eq) goto loc_8307A220;
	// addi r3,r31,108
	ctx.r3.s64 = r31.s64 + 108;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// lwz r15,108(r31)
	r15.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// b 0x8307a228
	goto loc_8307A228;
loc_8307A220:
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x83049068
	sub_83049068(ctx, base);
loc_8307A228:
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(r17.u32, 0, xer);
	// bne cr6,0x8307a274
	if (!cr6.eq) goto loc_8307A274;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r29.u32);
	// beq 0x8307a268
	if (cr0.eq) goto loc_8307A268;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,216(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fdad88
	sub_82FDAD88(ctx, base);
	// mr r11,r29
	r11.u64 = r29.u64;
	// stw r23,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r23.u32);
	// b 0x8307a26c
	goto loc_8307A26C;
loc_8307A268:
	// mr r11,r14
	r11.u64 = r14.u64;
loc_8307A26C:
	// mr r17,r11
	r17.u64 = r11.u64;
	// stw r17,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r17.u32);
loc_8307A274:
	// lwz r11,24(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// cmpwi cr6,r11,23
	cr6.compare<int32_t>(r11.s32, 23, xer);
	// bne cr6,0x8307a384
	if (!cr6.eq) goto loc_8307A384;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306f940
	sub_8306F940(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306f898
	sub_8306F898(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x8307a2c4
	if (cr0.eq) goto loc_8307A2C4;
	// lhz r11,0(r5)
	r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307a2c4
	if (cr0.eq) goto loc_8307A2C4;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830714b0
	sub_830714B0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x8307a2c8
	goto loc_8307A2C8;
loc_8307A2C4:
	// lwz r28,28(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 28);
loc_8307A2C8:
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,172(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 172);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r6,r31,140
	ctx.r6.s64 = r31.s64 + 140;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
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
	// bne 0x8307a320
	if (!cr0.eq) goto loc_8307A320;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83079758
	sub_83079758(ctx, base);
loc_8307A320:
	// addi r29,r30,60
	r29.s64 = r30.s64 + 60;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r14,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r14.u32);
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// li r4,58
	ctx.r4.s64 = 58;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r14,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r14.u16);
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x83043678
	sub_83043678(ctx, base);
	// lwz r27,112(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x8307a604
	goto loc_8307A604;
loc_8307A384:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x83043678
	sub_83043678(ctx, base);
	// b 0x8307a604
	goto loc_8307A604;
loc_8307A3A0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8307a458
	if (cr0.eq) goto loc_8307A458;
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// lbz r11,25(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 25);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307a3f0
	if (cr0.eq) goto loc_8307A3F0;
	// lwz r11,220(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8307a3f0
	if (!cr6.eq) goto loc_8307A3F0;
	// lwz r5,160(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8307a3f0
	if (cr6.eq) goto loc_8307A3F0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830771d8
	sub_830771D8(ctx, base);
	// stw r3,220(r30)
	PPC_STORE_U32(r30.u32 + 220, ctx.r3.u32);
loc_8307A3F0:
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8307a420
	if (cr0.eq) goto loc_8307A420;
	// cntlzw r11,r16
	r11.u64 = r16.u32 == 0 ? 32 : __builtin_clz(r16.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8307a418
	if (cr0.eq) goto loc_8307A418;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// lwz r16,104(r31)
	r16.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x8307a420
	goto loc_8307A420;
loc_8307A418:
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x83049068
	sub_83049068(ctx, base);
loc_8307A420:
	// lbz r11,96(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 96);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307a43c
	if (cr0.eq) goto loc_8307A43C;
	// stb r14,96(r31)
	PPC_STORE_U8(r31.u32 + 96, r14.u8);
	// stw r14,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r14.u32);
	// b 0x8307a448
	goto loc_8307A448;
loc_8307A43C:
	// li r4,124
	ctx.r4.s64 = 124;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
loc_8307A448:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// b 0x8307a604
	goto loc_8307A604;
loc_8307A458:
	// addi r5,r31,144
	ctx.r5.s64 = r31.s64 + 144;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x83070a58
	sub_83070A58(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307a4a8
	if (cr0.eq) goto loc_8307A4A8;
	// lwz r3,220(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307a49c
	if (cr0.eq) goto loc_8307A49C;
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
loc_8307A49C:
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r6,27
	ctx.r6.s64 = 27;
	// b 0x8307a504
	goto loc_8307A504;
loc_8307A4A8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8307a524
	if (cr0.eq) goto loc_8307A524;
	// lwz r11,24(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8307a524
	if (cr0.eq) goto loc_8307A524;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8307a524
	if (!cr0.eq) goto loc_8307A524;
	// lwz r3,220(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307a4fc
	if (cr0.eq) goto loc_8307A4FC;
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
loc_8307A4FC:
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r6,102
	ctx.r6.s64 = 102;
loc_8307A504:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,116(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// b 0x8307a604
	goto loc_8307A604;
loc_8307A524:
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r29,0(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lwz r11,36(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,120(r31)
	PPC_STORE_U32(r31.u32 + 120, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307a584
	if (cr0.eq) goto loc_8307A584;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r6,216(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8304ddf8
	sub_8304DDF8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x8307a588
	goto loc_8307A588;
loc_8307A584:
	// mr r28,r14
	r28.u64 = r14.u64;
loc_8307A588:
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// lbz r11,25(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 25);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307a5c4
	if (cr0.eq) goto loc_8307A5C4;
	// lwz r11,220(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8307a5c4
	if (!cr6.eq) goto loc_8307A5C4;
	// lwz r5,160(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8307a5c4
	if (cr6.eq) goto loc_8307A5C4;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830771d8
	sub_830771D8(ctx, base);
	// stw r3,220(r30)
	PPC_STORE_U32(r30.u32 + 220, ctx.r3.u32);
loc_8307A5C4:
	// lwz r5,220(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// cmplwi r5,0
	cr0.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq 0x8307a5dc
	if (cr0.eq) goto loc_8307A5DC;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// bl 0x8305a0d0
	sub_8305A0D0(ctx, base);
loc_8307A5DC:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x83054ec8
	sub_83054EC8(ctx, base);
	// addi r7,r31,132
	ctx.r7.s64 = r31.s64 + 132;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830700b8
	sub_830700B8(ctx, base);
loc_8307A604:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x830a7430
	sub_830A7430(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// stw r25,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r25.u32);
	// b 0x8307a034
	goto loc_8307A034;
loc_8307A618:
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8307a69c
	if (!cr0.eq) goto loc_8307A69C;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,144(r31)
	PPC_STORE_U32(r31.u32 + 144, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307a668
	if (cr0.eq) goto loc_8307A668;
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// lwz r10,184(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r14,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r14.u16);
	// lwz r5,184(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// lwz r6,216(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x8304ddf8
	sub_8304DDF8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8307a66c
	goto loc_8307A66C;
loc_8307A668:
	// mr r29,r14
	r29.u64 = r14.u64;
loc_8307A66C:
	// cntlzw r11,r16
	r11.u64 = r16.u32 == 0 ? 32 : __builtin_clz(r16.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8307a68c
	if (!cr0.eq) goto loc_8307A68C;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r14,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r14.u32);
	// bl 0x8305a0d0
	sub_8305A0D0(ctx, base);
loc_8307A68C:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x83054ec8
	sub_83054EC8(ctx, base);
loc_8307A69C:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8307a70c
	if (cr6.eq) goto loc_8307A70C;
	// li r6,10
	ctx.r6.s64 = 10;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r4,r31,192
	ctx.r4.s64 = r31.s64 + 192;
	// bl 0x82fd9bb0
	sub_82FD9BB0(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,144(r31)
	PPC_STORE_U32(r31.u32 + 144, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307a6f4
	if (cr0.eq) goto loc_8307A6F4;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r6,216(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// addi r5,r31,192
	ctx.r5.s64 = r31.s64 + 192;
	// addi r29,r11,-7272
	r29.s64 = r11.s64 + -7272;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8304ddf8
	sub_8304DDF8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x8307a700
	goto loc_8307A700;
loc_8307A6F4:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// addi r29,r11,-7272
	r29.s64 = r11.s64 + -7272;
loc_8307A700:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x83054ec8
	sub_83054EC8(ctx, base);
loc_8307A70C:
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(r17.u32, 0, xer);
	// beq cr6,0x8307a734
	if (cr6.eq) goto loc_8307A734;
	// cntlzw r11,r15
	r11.u64 = r15.u32 == 0 ? 32 : __builtin_clz(r15.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8307a734
	if (!cr0.eq) goto loc_8307A734;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// stw r14,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r14.u32);
	// bl 0x8305a0d0
	sub_8305A0D0(ctx, base);
loc_8307A734:
	// lwz r11,212(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r9,444(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 444);
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// lwz r4,436(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 436);
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x83018b38
	sub_83018B38(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,136(r31)
	PPC_STORE_U32(r31.u32 + 136, ctx.r3.u32);
	// b 0x8307a77c
	goto loc_8307A77C;
	// b 0x8307a778
	goto loc_8307A778;
loc_8307A778:
	// lwz r30,404(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 404);
loc_8307A77C:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,108
	ctx.r3.s64 = r31.s64 + 108;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// lwz r4,184(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8307A7AC:
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 136);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307a7c4
	if (cr0.eq) goto loc_8307A7C4;
	// addi r4,r11,-1
	ctx.r4.s64 = r11.s64 + -1;
	// bl 0x82fdea08
	sub_82FDEA08(ctx, base);
loc_8307A7C4:
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// b 0x8307a804
	goto loc_8307A804;
loc_8307A7CC:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,24
	ctx.r6.s64 = 24;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
loc_8307A7E8:
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 136);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307a800
	if (cr0.eq) goto loc_8307A800;
	// addi r4,r11,-1
	ctx.r4.s64 = r11.s64 + -1;
	// bl 0x82fdea08
	sub_82FDEA08(ctx, base);
loc_8307A800:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8307A804:
	// addi r1,r31,384
	ctx.r1.s64 = r31.s64 + 384;
	// b 0x831b0b40
	return;
}

__attribute__((alias("__imp__sub_8307A814"))) PPC_WEAK_FUNC(sub_8307A814);
PPC_FUNC_IMPL(__imp__sub_8307A814) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_8307A834"))) PPC_WEAK_FUNC(sub_8307A834);
PPC_FUNC_IMPL(__imp__sub_8307A834) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-384
	r31.s64 = r12.s64 + -384;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,100(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,120(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,404(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 404);
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,162
	ctx.r6.s64 = 162;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830a7430
	sub_830A7430(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// lis r3,-31992
	ctx.r3.s64 = -2096627712;
	// addi r3,r3,-24416
	ctx.r3.s64 = ctx.r3.s64 + -24416;
	// stb r11,97(r31)
	PPC_STORE_U8(r31.u32 + 97, r11.u8);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b40
	return;
}

__attribute__((alias("__imp__sub_8307A8A4"))) PPC_WEAK_FUNC(sub_8307A8A4);
PPC_FUNC_IMPL(__imp__sub_8307A8A4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-384
	r31.s64 = r12.s64 + -384;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,420(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 420);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,404(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 404);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,73
	ctx.r6.s64 = 73;
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r5,r11,-28480
	ctx.r5.s64 = r11.s64 + -28480;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lis r3,-31992
	ctx.r3.s64 = -2096627712;
	// addi r3,r3,-22668
	ctx.r3.s64 = ctx.r3.s64 + -22668;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b40
	return;
}

__attribute__((alias("__imp__sub_8307A900"))) PPC_WEAK_FUNC(sub_8307A900);
PPC_FUNC_IMPL(__imp__sub_8307A900) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_8307A920"))) PPC_WEAK_FUNC(sub_8307A920);
PPC_FUNC_IMPL(__imp__sub_8307A920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-384
	r31.s64 = r12.s64 + -384;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,428(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// lwz r4,420(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 420);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,404(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 404);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,44
	ctx.r6.s64 = 44;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lis r3,-31992
	ctx.r3.s64 = -2096627712;
	// addi r3,r3,-22664
	ctx.r3.s64 = ctx.r3.s64 + -22664;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b40
	return;
}

__attribute__((alias("__imp__sub_8307A970"))) PPC_WEAK_FUNC(sub_8307A970);
PPC_FUNC_IMPL(__imp__sub_8307A970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-384
	r31.s64 = r12.s64 + -384;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x82fe72f8
	sub_82FE72F8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307A998"))) PPC_WEAK_FUNC(sub_8307A998);
PPC_FUNC_IMPL(__imp__sub_8307A998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-384
	r31.s64 = r12.s64 + -384;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,108
	ctx.r3.s64 = r31.s64 + 108;
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

__attribute__((alias("__imp__sub_8307A9C0"))) PPC_WEAK_FUNC(sub_8307A9C0);
PPC_FUNC_IMPL(__imp__sub_8307A9C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-384
	r31.s64 = r12.s64 + -384;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
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

__attribute__((alias("__imp__sub_8307A9E8"))) PPC_WEAK_FUNC(sub_8307A9E8);
PPC_FUNC_IMPL(__imp__sub_8307A9E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-384
	r31.s64 = r12.s64 + -384;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,404(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 404);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 124);
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

__attribute__((alias("__imp__sub_8307AA18"))) PPC_WEAK_FUNC(sub_8307AA18);
PPC_FUNC_IMPL(__imp__sub_8307AA18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-384
	r31.s64 = r12.s64 + -384;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,404(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 404);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
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

__attribute__((alias("__imp__sub_8307AA48"))) PPC_WEAK_FUNC(sub_8307AA48);
PPC_FUNC_IMPL(__imp__sub_8307AA48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-384
	r31.s64 = r12.s64 + -384;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,404(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 404);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
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

__attribute__((alias("__imp__sub_8307AA78"))) PPC_WEAK_FUNC(sub_8307AA78);
PPC_FUNC_IMPL(__imp__sub_8307AA78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-384
	r31.s64 = r12.s64 + -384;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,404(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 404);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 144);
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

__attribute__((alias("__imp__sub_8307AAA8"))) PPC_WEAK_FUNC(sub_8307AAA8);
PPC_FUNC_IMPL(__imp__sub_8307AAA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-384
	r31.s64 = r12.s64 + -384;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,404(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 404);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 144);
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

__attribute__((alias("__imp__sub_8307AAE0"))) PPC_WEAK_FUNC(sub_8307AAE0);
PPC_FUNC_IMPL(__imp__sub_8307AAE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
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
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x831b0b04
	// addi r31,r1,-240
	r31.s64 = ctx.r1.s64 + -240;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r20,r7
	r20.u64 = ctx.r7.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r30,260(r31)
	PPC_STORE_U32(r31.u32 + 260, r30.u32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stw r28,276(r31)
	PPC_STORE_U32(r31.u32 + 276, r28.u32);
	// li r5,47
	ctx.r5.s64 = 47;
	// stw r23,284(r31)
	PPC_STORE_U32(r31.u32 + 284, r23.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// mr r19,r8
	r19.u64 = ctx.r8.u64;
	// lwz r8,160(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// mr r21,r9
	r21.u64 = ctx.r9.u64;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// bl 0x830a7f60
	sub_830A7F60(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830a7430
	sub_830A7430(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r22,r11,-28032
	r22.s64 = r11.s64 + -28032;
	// beq 0x8307ab6c
	if (cr0.eq) goto loc_8307AB6C;
	// li r6,22
	ctx.r6.s64 = 22;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
loc_8307AB6C:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-7468
	ctx.r5.s64 = r11.s64 + -7468;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// beq 0x8307abc8
	if (cr0.eq) goto loc_8307ABC8;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,216(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83043458
	sub_83043458(ctx, base);
	// lis r11,-32233
	r11.s64 = -2112421888;
	// mr r25,r29
	r25.u64 = r29.u64;
	// addi r11,r11,2232
	r11.s64 = r11.s64 + 2232;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x8307abcc
	goto loc_8307ABCC;
loc_8307ABC8:
	// li r25,0
	r25.s64 = 0;
loc_8307ABCC:
	// stw r25,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r25.u32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8307ad60
	if (cr6.eq) goto loc_8307AD60;
	// lhz r11,0(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307ad60
	if (cr0.eq) goto loc_8307AD60;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r5,216(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8303c918
	sub_8303C918(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8303c848
	sub_8303C848(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// ble 0x8307ac44
	if (!cr0.gt) goto loc_8307AC44;
loc_8307AC08:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8303cc60
	sub_8303CC60(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83073d98
	sub_83073D98(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x8307acc8
	if (cr0.eq) goto loc_8307ACC8;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x83043678
	sub_83043678(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r27
	cr6.compare<int32_t>(r29.s32, r27.s32, xer);
	// blt cr6,0x8307ac08
	if (cr6.lt) goto loc_8307AC08;
loc_8307AC44:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830a72e0
	sub_830A72E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x83071390
	sub_83071390(ctx, base);
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lbz r11,25(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 25);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307aca0
	if (cr0.eq) goto loc_8307ACA0;
	// lwz r11,220(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8307aca0
	if (!cr6.eq) goto loc_8307ACA0;
	// lwz r5,160(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307aca0
	if (cr0.eq) goto loc_8307ACA0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830771d8
	sub_830771D8(ctx, base);
	// stw r3,220(r30)
	PPC_STORE_U32(r30.u32 + 220, ctx.r3.u32);
loc_8307ACA0:
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8307ad00
	if (cr0.eq) goto loc_8307AD00;
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8307acfc
	if (cr0.eq) goto loc_8307ACFC;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// b 0x8307ad00
	goto loc_8307AD00;
loc_8307ACC8:
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 136);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307ace0
	if (cr0.eq) goto loc_8307ACE0;
	// addi r4,r11,-1
	ctx.r4.s64 = r11.s64 + -1;
	// bl 0x82fdea08
	sub_82FDEA08(ctx, base);
loc_8307ACE0:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8303c8d8
	sub_8303C8D8(ctx, base);
loc_8307ACE8:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8307af50
	goto loc_8307AF50;
loc_8307ACFC:
	// bl 0x83049068
	sub_83049068(ctx, base);
loc_8307AD00:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8303c8d8
	sub_8303C8D8(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r28,r11,-7732
	r28.s64 = r11.s64 + -7732;
loc_8307AD10:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8307aec8
	if (cr6.eq) goto loc_8307AEC8;
loc_8307AD18:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq 0x8307ae9c
	if (cr0.eq) goto loc_8307AE9C;
	// ori r5,r21,16
	ctx.r5.u64 = r21.u64 | 16;
	// bl 0x8307e330
	sub_8307E330(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x8307af04
	if (cr0.eq) goto loc_8307AF04;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x83043678
	sub_83043678(ctx, base);
	// b 0x8307aeb8
	goto loc_8307AEB8;
loc_8307AD60:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830a72e0
	sub_830A72E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x83071390
	sub_83071390(ctx, base);
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lbz r11,25(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 25);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307adbc
	if (cr0.eq) goto loc_8307ADBC;
	// lwz r11,220(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8307adbc
	if (!cr6.eq) goto loc_8307ADBC;
	// lwz r5,160(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307adbc
	if (cr0.eq) goto loc_8307ADBC;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830771d8
	sub_830771D8(ctx, base);
	// stw r3,220(r30)
	PPC_STORE_U32(r30.u32 + 220, ctx.r3.u32);
loc_8307ADBC:
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8307ade8
	if (cr0.eq) goto loc_8307ADE8;
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8307ade4
	if (cr0.eq) goto loc_8307ADE4;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// b 0x8307ade8
	goto loc_8307ADE8;
loc_8307ADE4:
	// bl 0x83049068
	sub_83049068(ctx, base);
loc_8307ADE8:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x8307ae30
	if (!cr6.eq) goto loc_8307AE30;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// li r6,28
	ctx.r6.s64 = 28;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 136);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307ae2c
	if (cr0.eq) goto loc_8307AE2C;
	// addi r4,r11,-1
	ctx.r4.s64 = r11.s64 + -1;
	// bl 0x82fdea08
	sub_82FDEA08(ctx, base);
loc_8307AE2C:
	// b 0x8307ace8
	goto loc_8307ACE8;
loc_8307AE30:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r28,r11,-7732
	r28.s64 = r11.s64 + -7732;
	// lwz r11,92(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8307ad10
	if (!cr0.eq) goto loc_8307AD10;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// li r6,24
	ctx.r6.s64 = 24;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 136);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307ae98
	if (cr0.eq) goto loc_8307AE98;
	// addi r4,r11,-1
	ctx.r4.s64 = r11.s64 + -1;
	// bl 0x82fdea08
	sub_82FDEA08(ctx, base);
loc_8307AE98:
	// b 0x8307ace8
	goto loc_8307ACE8;
loc_8307AE9C:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// li r6,24
	ctx.r6.s64 = 24;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
loc_8307AEB8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830a7430
	sub_830A7430(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x8307ad18
	if (!cr0.eq) goto loc_8307AD18;
loc_8307AEC8:
	// li r11,0
	r11.s64 = 0;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r8,212(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x83018588
	sub_83018588(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// b 0x8307af28
	goto loc_8307AF28;
loc_8307AF04:
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 136);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307af1c
	if (cr0.eq) goto loc_8307AF1C;
	// addi r4,r11,-1
	ctx.r4.s64 = r11.s64 + -1;
	// bl 0x82fdea08
	sub_82FDEA08(ctx, base);
loc_8307AF1C:
	// b 0x8307ace8
	goto loc_8307ACE8;
	// b 0x8307af24
	goto loc_8307AF24;
loc_8307AF24:
	// lwz r30,260(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 260);
loc_8307AF28:
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 136);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307af40
	if (cr0.eq) goto loc_8307AF40;
	// addi r4,r11,-1
	ctx.r4.s64 = r11.s64 + -1;
	// bl 0x82fdea08
	sub_82FDEA08(ctx, base);
loc_8307AF40:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
loc_8307AF50:
	// addi r1,r31,240
	ctx.r1.s64 = r31.s64 + 240;
	// b 0x831b0b54
	return;
}

__attribute__((alias("__imp__sub_8307AF60"))) PPC_WEAK_FUNC(sub_8307AF60);
PPC_FUNC_IMPL(__imp__sub_8307AF60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,276(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,73
	ctx.r6.s64 = 73;
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r5,r11,-28480
	ctx.r5.s64 = r11.s64 + -28480;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31992
	ctx.r3.s64 = -2096627712;
	// addi r3,r3,-20704
	ctx.r3.s64 = ctx.r3.s64 + -20704;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b54
	return;
}

__attribute__((alias("__imp__sub_8307AFBC"))) PPC_WEAK_FUNC(sub_8307AFBC);
PPC_FUNC_IMPL(__imp__sub_8307AFBC) {
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

__attribute__((alias("__imp__sub_8307AFDC"))) PPC_WEAK_FUNC(sub_8307AFDC);
PPC_FUNC_IMPL(__imp__sub_8307AFDC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,284(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 284);
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// lwz r4,276(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,44
	ctx.r6.s64 = 44;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31992
	ctx.r3.s64 = -2096627712;
	// addi r3,r3,-20700
	ctx.r3.s64 = ctx.r3.s64 + -20700;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b54
	return;
}

__attribute__((alias("__imp__sub_8307B02C"))) PPC_WEAK_FUNC(sub_8307B02C);
PPC_FUNC_IMPL(__imp__sub_8307B02C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,260(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 260);
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

__attribute__((alias("__imp__sub_8307B05C"))) PPC_WEAK_FUNC(sub_8307B05C);
PPC_FUNC_IMPL(__imp__sub_8307B05C) {
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

__attribute__((alias("__imp__sub_8307B084"))) PPC_WEAK_FUNC(sub_8307B084);
PPC_FUNC_IMPL(__imp__sub_8307B084) {
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
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8303c8d8
	sub_8303C8D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307B0B8"))) PPC_WEAK_FUNC(sub_8307B0B8);
PPC_FUNC_IMPL(__imp__sub_8307B0B8) {
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
	// addi r31,r1,-240
	r31.s64 = ctx.r1.s64 + -240;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// lwz r8,160(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// stw r30,260(r31)
	PPC_STORE_U32(r31.u32 + 260, r30.u32);
	// stw r28,268(r31)
	PPC_STORE_U32(r31.u32 + 268, r28.u32);
	// bl 0x830a7f60
	sub_830A7F60(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830a72e0
	sub_830A72E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x83071390
	sub_83071390(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307b134
	if (cr0.eq) goto loc_8307B134;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,97
	ctx.r6.s64 = 97;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
loc_8307B134:
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// lbz r11,25(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 25);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307b170
	if (cr0.eq) goto loc_8307B170;
	// lwz r11,220(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8307b170
	if (!cr6.eq) goto loc_8307B170;
	// lwz r5,160(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307b170
	if (cr0.eq) goto loc_8307B170;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830771d8
	sub_830771D8(ctx, base);
	// stw r3,220(r30)
	PPC_STORE_U32(r30.u32 + 220, ctx.r3.u32);
loc_8307B170:
	// lwz r24,220(r30)
	r24.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// stw r24,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r24.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-7140
	ctx.r5.s64 = r11.s64 + -7140;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r5,r11,-7188
	ctx.r5.s64 = r11.s64 + -7188;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// li r11,7
	r11.s64 = 7;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// beq cr6,0x8307b224
	if (cr6.eq) goto loc_8307B224;
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307b224
	if (cr0.eq) goto loc_8307B224;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-6460
	ctx.r4.s64 = r11.s64 + -6460;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8307b224
	if (!cr0.eq) goto loc_8307B224;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-6472
	ctx.r4.s64 = r11.s64 + -6472;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8307b204
	if (cr0.eq) goto loc_8307B204;
	// li r11,5
	r11.s64 = 5;
	// b 0x8307b220
	goto loc_8307B220;
loc_8307B204:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-6668
	ctx.r4.s64 = r11.s64 + -6668;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8307b224
	if (cr0.eq) goto loc_8307B224;
	// li r11,6
	r11.s64 = 6;
loc_8307B220:
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_8307B224:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r29,8(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,216(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// li r25,11
	r25.s64 = 11;
	// bl 0x83070930
	sub_83070930(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8307b3cc
	if (cr6.eq) goto loc_8307B3CC;
	// lhz r11,0(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307b3cc
	if (cr0.eq) goto loc_8307B3CC;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-6904
	ctx.r4.s64 = r11.s64 + -6904;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8307b3cc
	if (!cr0.eq) goto loc_8307B3CC;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-6876
	ctx.r4.s64 = r11.s64 + -6876;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8307b290
	if (cr0.eq) goto loc_8307B290;
	// lwz r29,4(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r25,12
	r25.s64 = 12;
	// b 0x8307b3cc
	goto loc_8307B3CC;
loc_8307B290:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r5,216(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x8303c918
	sub_8303C918(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// addi r4,r11,-5500
	ctx.r4.s64 = r11.s64 + -5500;
	// bl 0x82feec20
	sub_82FEEC20(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r25,13
	r25.s64 = 13;
	// addi r28,r11,-6860
	r28.s64 = r11.s64 + -6860;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// stw r26,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r26.u32);
	// addi r27,r11,-6892
	r27.s64 = r11.s64 + -6892;
	// stw r25,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r25.u32);
loc_8307B2D0:
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x8303c8e0
	sub_8303C8E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8307b3c0
	if (cr0.eq) goto loc_8307B3C0;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x8303cc60
	sub_8303CC60(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r29,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r29.u32);
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8307b308
	if (cr0.eq) goto loc_8307B308;
	// lwz r29,8(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// b 0x8307b390
	goto loc_8307B390;
loc_8307B308:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8307b324
	if (cr0.eq) goto loc_8307B324;
	// lwz r29,4(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// b 0x8307b390
	goto loc_8307B390;
loc_8307B324:
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,212(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// lwz r11,28(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8307b374
	goto loc_8307B374;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r30,260(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// addi r28,r11,-6860
	r28.s64 = r11.s64 + -6860;
	// lwz r24,84(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r25,88(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r26,92(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// lwz r29,96(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// addi r27,r11,-6892
	r27.s64 = r11.s64 + -6892;
loc_8307B374:
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8307B390:
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r29.u32);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x830708e0
	sub_830708E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8307b2d0
	if (!cr0.eq) goto loc_8307B2D0;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// stw r29,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r29.u32);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x8305c228
	sub_8305C228(ctx, base);
	// b 0x8307b2d0
	goto loc_8307B2D0;
loc_8307B3C0:
	// lwz r29,8(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x8303c8d8
	sub_8303C8D8(ctx, base);
loc_8307B3CC:
	// li r3,76
	ctx.r3.s64 = 76;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307b40c
	if (cr0.eq) goto loc_8307B40C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r9,216(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r5,r11,-27800
	ctx.r5.s64 = r11.s64 + -27800;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x830899f8
	sub_830899F8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8307b410
	goto loc_8307B410;
loc_8307B40C:
	// li r29,0
	r29.s64 = 0;
loc_8307B410:
	// cntlzw r11,r24
	r11.u64 = r24.u32 == 0 ? 32 : __builtin_clz(r24.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8307b434
	if (!cr0.eq) goto loc_8307B434;
	// li r11,0
	r11.s64 = 0;
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bl 0x8305a0d0
	sub_8305A0D0(ctx, base);
loc_8307B434:
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8307b44c
	if (cr6.eq) goto loc_8307B44C;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83070d88
	sub_83070D88(ctx, base);
loc_8307B44C:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// lwz r4,124(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,240
	ctx.r1.s64 = r31.s64 + 240;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_8307B484"))) PPC_WEAK_FUNC(sub_8307B484);
PPC_FUNC_IMPL(__imp__sub_8307B484) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,268(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,156
	ctx.r6.s64 = 156;
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31992
	ctx.r3.s64 = -2096627712;
	// addi r3,r3,-19632
	ctx.r3.s64 = ctx.r3.s64 + -19632;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_8307B4D8"))) PPC_WEAK_FUNC(sub_8307B4D8);
PPC_FUNC_IMPL(__imp__sub_8307B4D8) {
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
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
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

__attribute__((alias("__imp__sub_8307B500"))) PPC_WEAK_FUNC(sub_8307B500);
PPC_FUNC_IMPL(__imp__sub_8307B500) {
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
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x83034d68
	sub_83034D68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307B528"))) PPC_WEAK_FUNC(sub_8307B528);
PPC_FUNC_IMPL(__imp__sub_8307B528) {
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
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x8303c8d8
	sub_8303C8D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307B550"))) PPC_WEAK_FUNC(sub_8307B550);
PPC_FUNC_IMPL(__imp__sub_8307B550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,260(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
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

__attribute__((alias("__imp__sub_8307B588"))) PPC_WEAK_FUNC(sub_8307B588);
PPC_FUNC_IMPL(__imp__sub_8307B588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x831b0afc
	// addi r31,r1,-240
	r31.s64 = ctx.r1.s64 + -240;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r19,r5
	r19.u64 = ctx.r5.u64;
	// mr r17,r4
	r17.u64 = ctx.r4.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// stw r30,260(r31)
	PPC_STORE_U32(r31.u32 + 260, r30.u32);
	// bl 0x830a72e0
	sub_830A72E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x83071390
	sub_83071390(ctx, base);
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// lbz r11,25(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 25);
	// stw r23,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r23.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307b610
	if (cr0.eq) goto loc_8307B610;
	// lwz r11,220(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8307b610
	if (!cr6.eq) goto loc_8307B610;
	// lwz r5,160(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307b610
	if (cr0.eq) goto loc_8307B610;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830771d8
	sub_830771D8(ctx, base);
	// stw r3,220(r30)
	PPC_STORE_U32(r30.u32 + 220, ctx.r3.u32);
loc_8307B610:
	// lwz r18,220(r30)
	r18.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// stw r18,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r18.u32);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// bne cr6,0x8307b62c
	if (!cr6.eq) goto loc_8307B62C;
loc_8307B620:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// b 0x8307bbd4
	goto loc_8307BBD4;
loc_8307B62C:
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r29,r11,-7772
	r29.s64 = r11.s64 + -7772;
	// lwz r11,92(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8307b674
	if (!cr0.eq) goto loc_8307B674;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,147
	ctx.r6.s64 = 147;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
	// b 0x8307bbcc
	goto loc_8307BBCC;
loc_8307B674:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,160(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,41
	ctx.r5.s64 = 41;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x830a7f60
	sub_830A7F60(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x830a72e0
	sub_830A72E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x83071390
	sub_83071390(ctx, base);
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// lbz r11,25(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 25);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307b6e8
	if (cr0.eq) goto loc_8307B6E8;
	// lwz r11,220(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8307b6e8
	if (!cr6.eq) goto loc_8307B6E8;
	// lwz r5,160(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307b6e8
	if (cr0.eq) goto loc_8307B6E8;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830771d8
	sub_830771D8(ctx, base);
	// stw r3,220(r30)
	PPC_STORE_U32(r30.u32 + 220, ctx.r3.u32);
loc_8307B6E8:
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8307b718
	if (cr0.eq) goto loc_8307B718;
	// cntlzw r11,r18
	r11.u64 = r18.u32 == 0 ? 32 : __builtin_clz(r18.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8307b710
	if (cr0.eq) goto loc_8307B710;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// lwz r18,80(r31)
	r18.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// b 0x8307b718
	goto loc_8307B718;
loc_8307B710:
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x83049068
	sub_83049068(ctx, base);
loc_8307B718:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r20,r11,-6916
	r20.s64 = r11.s64 + -6916;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// beq 0x8307b770
	if (cr0.eq) goto loc_8307B770;
	// lhz r11,0(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307b770
	if (cr0.eq) goto loc_8307B770;
	// addi r11,r25,2
	r11.s64 = r25.s64 + 2;
	// b 0x8307b754
	goto loc_8307B754;
loc_8307B750:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
loc_8307B754:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8307b750
	if (!cr0.eq) goto loc_8307B750;
	// subf r11,r25,r11
	r11.s64 = r11.s64 - r25.s64;
	// li r22,0
	r22.s64 = 0;
	// srawi r24,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r24.s64 = r11.s32 >> 1;
	// b 0x8307b778
	goto loc_8307B778;
loc_8307B770:
	// li r22,0
	r22.s64 = 0;
	// mr r24,r22
	r24.u64 = r22.u64;
loc_8307B778:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x8307bbb4
	if (cr6.eq) goto loc_8307BBB4;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x8307bbb4
	if (cr6.eq) goto loc_8307BBB4;
	// addi r28,r30,60
	r28.s64 = r30.s64 + 60;
	// mr r29,r22
	r29.u64 = r22.u64;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// lwz r11,24(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// stw r22,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r22.u32);
	// sth r22,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r22.u16);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// addi r21,r11,32504
	r21.s64 = r11.s64 + 32504;
	// beq cr6,0x8307b848
	if (cr6.eq) goto loc_8307B848;
loc_8307B7AC:
	// rlwinm r11,r29,1,0,30
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r21,-8
	ctx.r4.s64 = r21.s64 + -8;
	// add r26,r11,r25
	r26.u64 = r11.u64 + r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82fe2190
	sub_82FE2190(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8307b7ec
	if (!cr0.eq) goto loc_8307B7EC;
	// addi r4,r21,-4
	ctx.r4.s64 = r21.s64 + -4;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82fe2190
	sub_82FE2190(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8307b7ec
	if (!cr0.eq) goto loc_8307B7EC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
loc_8307B7EC:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r6,212(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// li r4,124
	ctx.r4.s64 = 124;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82fda140
	sub_82FDA140(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,-1
	cr6.compare<int32_t>(r27.s32, -1, xer);
	// beq cr6,0x8307b82c
	if (cr6.eq) goto loc_8307B82C;
	// subf r11,r29,r27
	r11.s64 = r27.s64 - r29.s64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// addi r29,r27,1
	r29.s64 = r27.s64 + 1;
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(r29.u32, r24.u32, xer);
	// blt cr6,0x8307b7ac
	if (cr6.lt) goto loc_8307B7AC;
loc_8307B82C:
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(r29.u32, r24.u32, xer);
	// bge cr6,0x8307b848
	if (!cr6.lt) goto loc_8307B848;
	// rlwinm r11,r29,1,0,30
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r4,r11,r25
	ctx.r4.u64 = r11.u64 + r25.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
loc_8307B848:
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307b89c
	if (cr0.eq) goto loc_8307B89C;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r22,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r22.u16);
	// lwz r4,24(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lwz r9,216(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r6,92(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// lwz r5,56(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// bl 0x830a0fb0
	sub_830A0FB0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8307b8a0
	goto loc_8307B8A0;
loc_8307B89C:
	// mr r29,r22
	r29.u64 = r22.u64;
loc_8307B8A0:
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307b8d4
	if (cr0.eq) goto loc_8307B8D4;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x830a5a80
	sub_830A5A80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8307b8d8
	goto loc_8307B8D8;
loc_8307B8D4:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
loc_8307B8D8:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x830a10c8
	sub_830A10C8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x830a7430
	sub_830A7430(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// stw r27,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r27.u32);
	// bne 0x8307b914
	if (!cr0.eq) goto loc_8307B914;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,147
	ctx.r6.s64 = 147;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
	// b 0x8307bbcc
	goto loc_8307BBCC;
loc_8307B914:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r25,r11,-8188
	r25.s64 = r11.s64 + -8188;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r26,r11,-28032
	r26.s64 = r11.s64 + -28032;
loc_8307B924:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8307bb58
	if (cr6.eq) goto loc_8307BB58;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8307b968
	if (!cr0.eq) goto loc_8307B968;
	// li r6,147
	ctx.r6.s64 = 147;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
	// b 0x8307bb28
	goto loc_8307BB28;
loc_8307B968:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,160(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x830a7f60
	sub_830A7F60(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x830a72e0
	sub_830A72E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x83071390
	sub_83071390(ctx, base);
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// lbz r11,25(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 25);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307b9d8
	if (cr0.eq) goto loc_8307B9D8;
	// lwz r11,220(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8307b9d8
	if (!cr6.eq) goto loc_8307B9D8;
	// lwz r5,160(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307b9d8
	if (cr0.eq) goto loc_8307B9D8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830771d8
	sub_830771D8(ctx, base);
	// stw r3,220(r30)
	PPC_STORE_U32(r30.u32 + 220, ctx.r3.u32);
loc_8307B9D8:
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8307ba08
	if (cr0.eq) goto loc_8307BA08;
	// cntlzw r11,r18
	r11.u64 = r18.u32 == 0 ? 32 : __builtin_clz(r18.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8307ba00
	if (cr0.eq) goto loc_8307BA00;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// lwz r18,80(r31)
	r18.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// b 0x8307ba08
	goto loc_8307BA08;
loc_8307BA00:
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x83049068
	sub_83049068(ctx, base);
loc_8307BA08:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x8307bb40
	if (cr0.eq) goto loc_8307BB40;
	// lhz r11,0(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307bb40
	if (cr0.eq) goto loc_8307BB40;
	// addi r4,r21,-8
	ctx.r4.s64 = r21.s64 + -8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fe2190
	sub_82FE2190(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8307ba74
	if (!cr0.eq) goto loc_8307BA74;
	// addi r4,r21,-4
	ctx.r4.s64 = r21.s64 + -4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fe2190
	sub_82FE2190(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8307ba74
	if (!cr0.eq) goto loc_8307BA74;
	// addi r29,r30,60
	r29.s64 = r30.s64 + 60;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r22,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r22.u32);
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// b 0x8307ba7c
	goto loc_8307BA7C;
loc_8307BA74:
	// addi r29,r30,60
	r29.s64 = r30.s64 + 60;
	// stw r22,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r22.u32);
loc_8307BA7C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307bae0
	if (cr0.eq) goto loc_8307BAE0;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r22,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r22.u16);
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r9,216(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r6,92(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// lwz r5,56(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// bl 0x830a0fb0
	sub_830A0FB0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8307bae4
	goto loc_8307BAE4;
loc_8307BAE0:
	// mr r29,r22
	r29.u64 = r22.u64;
loc_8307BAE4:
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307bb18
	if (cr0.eq) goto loc_8307BB18;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8309d458
	sub_8309D458(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8307bb1c
	goto loc_8307BB1C;
loc_8307BB18:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
loc_8307BB1C:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x83073088
	sub_83073088(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8307BB28:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x830a7430
	sub_830A7430(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r27,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r27.u32);
	// b 0x8307b924
	goto loc_8307B924;
	// b 0x8307bbcc
	goto loc_8307BBCC;
loc_8307BB40:
	// li r6,150
	ctx.r6.s64 = 150;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
	// b 0x8307bbcc
	goto loc_8307BBCC;
loc_8307BB58:
	// cntlzw r11,r18
	r11.u64 = r18.u32 == 0 ? 32 : __builtin_clz(r18.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8307bb78
	if (!cr0.eq) goto loc_8307BB78;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// stw r22,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r22.u32);
	// bl 0x8305a0d0
	sub_8305A0D0(ctx, base);
loc_8307BB78:
	// lwz r11,16(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307bb8c
	if (cr0.eq) goto loc_8307BB8C;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x8307bb90
	goto loc_8307BB90;
loc_8307BB8C:
	// mr r11,r22
	r11.u64 = r22.u64;
loc_8307BB90:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8307bb9c
	if (!cr6.eq) goto loc_8307BB9C;
	// b 0x8307bbcc
	goto loc_8307BBCC;
loc_8307BB9C:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8307bbdc
	goto loc_8307BBDC;
	// b 0x8307b620
	goto loc_8307B620;
loc_8307BBB4:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,150
	ctx.r6.s64 = 150;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
loc_8307BBCC:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8307BBD4:
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8307BBDC:
	// addi r1,r31,240
	ctx.r1.s64 = r31.s64 + 240;
	// b 0x831b0b4c
	return;
}

__attribute__((alias("__imp__sub_8307BBEC"))) PPC_WEAK_FUNC(sub_8307BBEC);
PPC_FUNC_IMPL(__imp__sub_8307BBEC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,156
	ctx.r6.s64 = 156;
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31992
	ctx.r3.s64 = -2096627712;
	// addi r3,r3,-17488
	ctx.r3.s64 = ctx.r3.s64 + -17488;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b4c
	return;
}

__attribute__((alias("__imp__sub_8307BC48"))) PPC_WEAK_FUNC(sub_8307BC48);
PPC_FUNC_IMPL(__imp__sub_8307BC48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,156
	ctx.r6.s64 = 156;
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31992
	ctx.r3.s64 = -2096627712;
	// addi r3,r3,-17604
	ctx.r3.s64 = ctx.r3.s64 + -17604;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b4c
	return;
}

__attribute__((alias("__imp__sub_8307BC9C"))) PPC_WEAK_FUNC(sub_8307BC9C);
PPC_FUNC_IMPL(__imp__sub_8307BC9C) {
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

__attribute__((alias("__imp__sub_8307BCC4"))) PPC_WEAK_FUNC(sub_8307BCC4);
PPC_FUNC_IMPL(__imp__sub_8307BCC4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,260(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
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

__attribute__((alias("__imp__sub_8307BCF4"))) PPC_WEAK_FUNC(sub_8307BCF4);
PPC_FUNC_IMPL(__imp__sub_8307BCF4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,260(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
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

__attribute__((alias("__imp__sub_8307BD24"))) PPC_WEAK_FUNC(sub_8307BD24);
PPC_FUNC_IMPL(__imp__sub_8307BD24) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,260(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
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

__attribute__((alias("__imp__sub_8307BD54"))) PPC_WEAK_FUNC(sub_8307BD54);
PPC_FUNC_IMPL(__imp__sub_8307BD54) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,260(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
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

__attribute__((alias("__imp__sub_8307BD90"))) PPC_WEAK_FUNC(sub_8307BD90);
PPC_FUNC_IMPL(__imp__sub_8307BD90) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r26,80(r6)
	r26.u64 = PPC_LOAD_U32(ctx.r6.u32 + 80);
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// cmplwi r26,0
	cr0.compare<uint32_t>(r26.u32, 0, xer);
	// stw r30,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r30.u32);
	// stw r25,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r25.u32);
	// beq 0x8307bf8c
	if (cr0.eq) goto loc_8307BF8C;
loc_8307BDC0:
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r3,184(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// lwz r29,32(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r27,16(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82fea480
	sub_82FEA480(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307bdf4
	if (cr0.eq) goto loc_8307BDF4;
	// lwz r28,0(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// bne 0x8307be94
	if (!cr0.eq) goto loc_8307BE94;
loc_8307BDF4:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// beq cr6,0x8307bf8c
	if (cr6.eq) goto loc_8307BF8C;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// bl 0x82feeed8
	sub_82FEEED8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307bf8c
	if (cr0.eq) goto loc_8307BF8C;
	// addi r6,r31,84
	ctx.r6.s64 = r31.s64 + 84;
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82fea480
	sub_82FEA480(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307bf8c
	if (cr0.eq) goto loc_8307BF8C;
	// lwz r28,0(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// beq 0x8307bf8c
	if (cr0.eq) goto loc_8307BF8C;
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307be7c
	if (cr0.eq) goto loc_8307BE7C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x83070688
	sub_83070688(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x8307be80
	goto loc_8307BE80;
loc_8307BE7C:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8307BE80:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,184(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x83057788
	sub_83057788(ctx, base);
loc_8307BE94:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,228
	ctx.r4.s64 = r31.s64 + 228;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830708e0
	sub_830708E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8307bf8c
	if (!cr0.eq) goto loc_8307BF8C;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,32(r25)
	ctx.r7.u64 = PPC_LOAD_U32(r25.u32 + 32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,56(r25)
	ctx.r6.u64 = PPC_LOAD_U32(r25.u32 + 56);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83071b48
	sub_83071B48(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8307bf8c
	if (cr0.eq) goto loc_8307BF8C;
	// addi r4,r31,228
	ctx.r4.s64 = r31.s64 + 228;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8305c228
	sub_8305C228(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r4,120(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// bl 0x830731f8
	sub_830731F8(ctx, base);
loc_8307BEEC:
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subfc r10,r10,r11
	xer.ca = r11.u32 >= ctx.r10.u32;
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8307bf78
	if (cr0.eq) goto loc_8307BF78;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// bl 0x82feeed8
	sub_82FEEED8(ctx, base);
	// addi r6,r31,92
	ctx.r6.s64 = r31.s64 + 92;
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82fea480
	sub_82FEA480(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307beec
	if (cr0.eq) goto loc_8307BEEC;
	// lwz r28,0(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// beq 0x8307beec
	if (cr0.eq) goto loc_8307BEEC;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,228
	ctx.r4.s64 = r31.s64 + 228;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830708e0
	sub_830708E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8307beec
	if (!cr0.eq) goto loc_8307BEEC;
	// addi r4,r31,228
	ctx.r4.s64 = r31.s64 + 228;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8305c228
	sub_8305C228(ctx, base);
	// b 0x8307beec
	goto loc_8307BEEC;
loc_8307BF78:
	// lwz r26,80(r26)
	r26.u64 = PPC_LOAD_U32(r26.u32 + 80);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83070828
	sub_83070828(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x8307bdc0
	if (!cr6.eq) goto loc_8307BDC0;
loc_8307BF8C:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_8307BF94"))) PPC_WEAK_FUNC(sub_8307BF94);
PPC_FUNC_IMPL(__imp__sub_8307BF94) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
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

__attribute__((alias("__imp__sub_8307BFC4"))) PPC_WEAK_FUNC(sub_8307BFC4);
PPC_FUNC_IMPL(__imp__sub_8307BFC4) {
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
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83070828
	sub_83070828(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307BFF8"))) PPC_WEAK_FUNC(sub_8307BFF8);
PPC_FUNC_IMPL(__imp__sub_8307BFF8) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b14
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// lwz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r3,184(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// stw r30,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r30.u32);
	// bl 0x82fea480
	sub_82FEA480(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307c1ac
	if (cr0.eq) goto loc_8307C1AC;
	// lwz r23,0(r3)
	r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r23,0
	cr0.compare<uint32_t>(r23.u32, 0, xer);
	// beq 0x8307c1ac
	if (cr0.eq) goto loc_8307C1AC;
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r3,184(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// lwz r29,32(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r28,16(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82fea480
	sub_82FEA480(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307c078
	if (cr0.eq) goto loc_8307C078;
	// lwz r27,0(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r27,0
	cr0.compare<uint32_t>(r27.u32, 0, xer);
	// bne 0x8307c118
	if (!cr0.eq) goto loc_8307C118;
loc_8307C078:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// beq cr6,0x8307c1ac
	if (cr6.eq) goto loc_8307C1AC;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// bl 0x82feeed8
	sub_82FEEED8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307c1ac
	if (cr0.eq) goto loc_8307C1AC;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82fea480
	sub_82FEA480(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307c1ac
	if (cr0.eq) goto loc_8307C1AC;
	// lwz r27,0(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r27,0
	cr0.compare<uint32_t>(r27.u32, 0, xer);
	// beq 0x8307c1ac
	if (cr0.eq) goto loc_8307C1AC;
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307c100
	if (cr0.eq) goto loc_8307C100;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x83070688
	sub_83070688(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x8307c104
	goto loc_8307C104;
loc_8307C100:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8307C104:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,184(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x83057788
	sub_83057788(ctx, base);
loc_8307C118:
	// lwz r26,4(r23)
	r26.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// li r28,0
	r28.s64 = 0;
	// cmplwi r26,0
	cr0.compare<uint32_t>(r26.u32, 0, xer);
	// beq 0x8307c1ac
	if (cr0.eq) goto loc_8307C1AC;
loc_8307C128:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8308ea58
	sub_8308EA58(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// bl 0x830708e0
	sub_830708E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8307c1a0
	if (!cr0.eq) goto loc_8307C1A0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,32(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,56(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83071b48
	sub_83071B48(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8307c1a0
	if (cr0.eq) goto loc_8307C1A0;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8305c228
	sub_8305C228(ctx, base);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8307bd90
	sub_8307BD90(ctx, base);
loc_8307C1A0:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(r28.u32, r26.u32, xer);
	// blt cr6,0x8307c128
	if (cr6.lt) goto loc_8307C128;
loc_8307C1AC:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_8307C1B4"))) PPC_WEAK_FUNC(sub_8307C1B4);
PPC_FUNC_IMPL(__imp__sub_8307C1B4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-176
	r31.s64 = r12.s64 + -176;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
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

__attribute__((alias("__imp__sub_8307C1F0"))) PPC_WEAK_FUNC(sub_8307C1F0);
PPC_FUNC_IMPL(__imp__sub_8307C1F0) {
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
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x830a72e0
	sub_830A72E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x83071390
	sub_83071390(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r22,r11,-28480
	r22.s64 = r11.s64 + -28480;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r19,r11,-8152
	r19.s64 = r11.s64 + -8152;
	// beq 0x8307c264
	if (cr0.eq) goto loc_8307C264;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// li r6,42
	ctx.r6.s64 = 42;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
loc_8307C264:
	// lwz r11,220(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306f898
	sub_8306F898(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306f940
	sub_8306F940(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830714b0
	sub_830714B0(ctx, base);
	// addi r29,r30,60
	r29.s64 = r30.s64 + 60;
	// li r20,0
	r20.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r20,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r20.u32);
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r20,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r20.u16);
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,140(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 140);
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// stw r25,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r25.u32);
	// bl 0x830708e0
	sub_830708E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8307c360
	if (cr0.eq) goto loc_8307C360;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// li r6,99
	ctx.r6.s64 = 99;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
loc_8307C348:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8307C358:
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x831b0b50
	return;
loc_8307C360:
	// addi r26,r30,120
	r26.s64 = r30.s64 + 120;
	// lwz r18,12(r30)
	r18.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// li r23,2
	r23.s64 = 2;
	// lwz r21,0(r26)
	r21.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8307c528
	if (!cr0.eq) goto loc_8307C528;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8307c3b8
	if (!cr0.eq) goto loc_8307C3B8;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// b 0x8307c3c4
	goto loc_8307C3C4;
loc_8307C3B8:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// bl 0x830709a8
	sub_830709A8(ctx, base);
loc_8307C3C4:
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8307c3f8
	if (!cr0.eq) goto loc_8307C3F8;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r6,159
	ctx.r6.s64 = 159;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// b 0x8307c348
	goto loc_8307C348;
loc_8307C3F8:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// bl 0x82feeed8
	sub_82FEEED8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x8307c500
	if (cr0.eq) goto loc_8307C500;
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
	// bne cr6,0x8307c500
	if (!cr6.eq) goto loc_8307C500;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r29,32(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8307c464
	if (!cr0.eq) goto loc_8307C464;
	// mr r29,r20
	r29.u64 = r20.u64;
	// b 0x8307c470
	goto loc_8307C470;
loc_8307C464:
	// lwz r29,0(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// bne 0x8307c644
	if (!cr0.eq) goto loc_8307C644;
loc_8307C470:
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// bl 0x83070e50
	sub_83070E50(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x8307c4c0
	if (cr0.eq) goto loc_8307C4C0;
	// lbz r11,1(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8307c4c0
	if (!cr0.eq) goto loc_8307C4C0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r23,1
	r23.s64 = 1;
	// bl 0x8306ffa8
	sub_8306FFA8(ctx, base);
	// b 0x8307c570
	goto loc_8307C570;
loc_8307C4C0:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// li r6,117
	ctx.r6.s64 = 117;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// mr r30,r20
	r30.u64 = r20.u64;
loc_8307C4EC:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8307c358
	goto loc_8307C358;
loc_8307C500:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r6,72
	ctx.r6.s64 = 72;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// b 0x8307c348
	goto loc_8307C348;
loc_8307C528:
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
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
	// lwz r11,104(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8307c564
	if (!cr0.eq) goto loc_8307C564;
	// mr r29,r20
	r29.u64 = r20.u64;
	// b 0x8307c570
	goto loc_8307C570;
loc_8307C564:
	// lwz r29,0(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// bne 0x8307c644
	if (!cr0.eq) goto loc_8307C644;
loc_8307C570:
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x830a7240
	sub_830A7240(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq 0x8307c5fc
	if (cr0.eq) goto loc_8307C5FC;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8307d278
	sub_8307D278(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306ffa8
	sub_8306FFA8(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8307c5f4
	if (cr6.eq) goto loc_8307C5F4;
	// lwz r6,124(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// cmplwi r6,0
	cr0.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne 0x8307c5d0
	if (!cr0.eq) goto loc_8307C5D0;
	// cmpwi cr6,r23,1
	cr6.compare<int32_t>(r23.s32, 1, xer);
	// bne cr6,0x8307c5f4
	if (!cr6.eq) goto loc_8307C5F4;
loc_8307C5D0:
	// cmpwi cr6,r23,1
	cr6.compare<int32_t>(r23.s32, 1, xer);
	// bne cr6,0x8307c5e0
	if (!cr6.eq) goto loc_8307C5E0;
	// lwz r7,132(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// b 0x8307c5e4
	goto loc_8307C5E4;
loc_8307C5E0:
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
loc_8307C5E4:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83074ff8
	sub_83074FF8(ctx, base);
loc_8307C5F4:
	// mr r30,r29
	r30.u64 = r29.u64;
	// b 0x8307c4ec
	goto loc_8307C4EC;
loc_8307C5FC:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// li r6,117
	ctx.r6.s64 = 117;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplw cr6,r21,r11
	cr6.compare<uint32_t>(r21.u32, r11.u32, xer);
	// beq cr6,0x8307c65c
	if (cr6.eq) goto loc_8307C65C;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306ffa8
	sub_8306FFA8(ctx, base);
	// b 0x8307c65c
	goto loc_8307C65C;
loc_8307C644:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r7,132(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r6,124(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83074ff8
	sub_83074FF8(ctx, base);
loc_8307C65C:
	// b 0x8307c5f4
	goto loc_8307C5F4;
}

__attribute__((alias("__imp__sub_8307C660"))) PPC_WEAK_FUNC(sub_8307C660);
PPC_FUNC_IMPL(__imp__sub_8307C660) {
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

__attribute__((alias("__imp__sub_8307C690"))) PPC_WEAK_FUNC(sub_8307C690);
PPC_FUNC_IMPL(__imp__sub_8307C690) {
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
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r18,r6
	r18.u64 = ctx.r6.u64;
	// bl 0x830a72e0
	sub_830A72E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x83071390
	sub_83071390(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r22,r11,-8384
	r22.s64 = r11.s64 + -8384;
	// beq 0x8307c704
	if (cr0.eq) goto loc_8307C704;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,-28480
	ctx.r5.s64 = r11.s64 + -28480;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// li r6,42
	ctx.r6.s64 = 42;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
loc_8307C704:
	// lwz r11,220(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306f898
	sub_8306F898(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306f940
	sub_8306F940(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830714b0
	sub_830714B0(ctx, base);
	// addi r25,r30,120
	r25.s64 = r30.s64 + 120;
	// lwz r20,12(r30)
	r20.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// li r21,2
	r21.s64 = 2;
	// lwz r19,0(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8307c878
	if (!cr0.eq) goto loc_8307C878;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
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
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307c798
	if (cr0.eq) goto loc_8307C798;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// bl 0x830709a8
	sub_830709A8(ctx, base);
loc_8307C798:
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8307c7e0
	if (!cr0.eq) goto loc_8307C7E0;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r6,159
	ctx.r6.s64 = 159;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
loc_8307C7C8:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8307C7D8:
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x831b0b50
	return;
loc_8307C7E0:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83073be8
	sub_83073BE8(ctx, base);
	// mr. r24,r3
	r24.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// bne 0x8307c9b0
	if (!cr0.eq) goto loc_8307C9B0;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// bl 0x83070e50
	sub_83070E50(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x8307c84c
	if (cr0.eq) goto loc_8307C84C;
	// lbz r11,1(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8307c84c
	if (!cr0.eq) goto loc_8307C84C;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r21,1
	r21.s64 = 1;
	// bl 0x8306ffa8
	sub_8306FFA8(ctx, base);
	// b 0x8307c8a4
	goto loc_8307C8A4;
loc_8307C84C:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// li r6,117
	ctx.r6.s64 = 117;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// b 0x8307c7c8
	goto loc_8307C7C8;
loc_8307C878:
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// lwz r3,108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8307c898
	if (!cr0.eq) goto loc_8307C898;
	// li r24,0
	r24.s64 = 0;
	// b 0x8307c8a4
	goto loc_8307C8A4;
loc_8307C898:
	// lwz r24,0(r3)
	r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r24,0
	cr0.compare<uint32_t>(r24.u32, 0, xer);
	// bne 0x8307c9b0
	if (!cr0.eq) goto loc_8307C9B0;
loc_8307C8A4:
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x830a7240
	sub_830A7240(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// stw r26,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r26.u32);
	// beq 0x8307c984
	if (cr0.eq) goto loc_8307C984;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,152(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 152);
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// bl 0x830708e0
	sub_830708E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8307c920
	if (cr0.eq) goto loc_8307C920;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// li r6,99
	ctx.r6.s64 = 99;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// li r30,0
	r30.s64 = 0;
loc_8307C90C:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8307c7d8
	goto loc_8307C7D8;
loc_8307C920:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830814c8
	sub_830814C8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x8307c95c
	if (cr0.eq) goto loc_8307C95C;
	// lwz r6,128(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 128);
	// cmplwi r6,0
	cr0.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq 0x8307c95c
	if (cr0.eq) goto loc_8307C95C;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83075158
	sub_83075158(ctx, base);
loc_8307C95C:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// cmplw cr6,r19,r11
	cr6.compare<uint32_t>(r19.u32, r11.u32, xer);
	// beq cr6,0x8307c97c
	if (cr6.eq) goto loc_8307C97C;
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306ffa8
	sub_8306FFA8(ctx, base);
loc_8307C97C:
	// mr r30,r29
	r30.u64 = r29.u64;
	// b 0x8307c90c
	goto loc_8307C90C;
loc_8307C984:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// li r6,117
	ctx.r6.s64 = 117;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// b 0x8307c9c8
	goto loc_8307C9C8;
loc_8307C9B0:
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// lwz r6,128(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 128);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83075158
	sub_83075158(ctx, base);
loc_8307C9C8:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// cmplw cr6,r19,r11
	cr6.compare<uint32_t>(r19.u32, r11.u32, xer);
	// beq cr6,0x8307c9e8
	if (cr6.eq) goto loc_8307C9E8;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306ffa8
	sub_8306FFA8(ctx, base);
loc_8307C9E8:
	// mr r30,r24
	r30.u64 = r24.u64;
	// b 0x8307c90c
	goto loc_8307C90C;
}

__attribute__((alias("__imp__sub_8307C9F0"))) PPC_WEAK_FUNC(sub_8307C9F0);
PPC_FUNC_IMPL(__imp__sub_8307C9F0) {
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

__attribute__((alias("__imp__sub_8307CA18"))) PPC_WEAK_FUNC(sub_8307CA18);
PPC_FUNC_IMPL(__imp__sub_8307CA18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// bl 0x830a72e0
	sub_830A72E0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x8307cbb0
	if (cr0.eq) goto loc_8307CBB0;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r26,0
	r26.s64 = 0;
	// addi r25,r11,-7200
	r25.s64 = r11.s64 + -7200;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r23,r11,-8488
	r23.s64 = r11.s64 + -8488;
loc_8307CA54:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8307cba0
	if (!cr0.eq) goto loc_8307CBA0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// addi r31,r30,60
	r31.s64 = r30.s64 + 60;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r26,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r26.u32);
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r26,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r26.u16);
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,176(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
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
	// bne 0x8307cba0
	if (!cr0.eq) goto loc_8307CBA0;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x830763e0
	sub_830763E0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8307cb98
	if (cr0.eq) goto loc_8307CB98;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830769d8
	sub_830769D8(ctx, base);
	// b 0x8307cba0
	goto loc_8307CBA0;
loc_8307CB98:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x83073510
	sub_83073510(ctx, base);
loc_8307CBA0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830a7430
	sub_830A7430(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x8307ca54
	if (!cr0.eq) goto loc_8307CA54;
loc_8307CBB0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_8307CBB8"))) PPC_WEAK_FUNC(sub_8307CBB8);
PPC_FUNC_IMPL(__imp__sub_8307CBB8) {
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
	// bl 0x830778e0
	sub_830778E0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307cc08
	if (cr0.eq) goto loc_8307CC08;
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
loc_8307CC08:
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

__attribute__((alias("__imp__sub_8307CC20"))) PPC_WEAK_FUNC(sub_8307CC20);
PPC_FUNC_IMPL(__imp__sub_8307CC20) {
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
	// bl 0x83077968
	sub_83077968(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307cc70
	if (cr0.eq) goto loc_8307CC70;
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
loc_8307CC70:
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

__attribute__((alias("__imp__sub_8307CC88"))) PPC_WEAK_FUNC(sub_8307CC88);
PPC_FUNC_IMPL(__imp__sub_8307CC88) {
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
	// bl 0x83077a08
	sub_83077A08(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307ccd8
	if (cr0.eq) goto loc_8307CCD8;
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
loc_8307CCD8:
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

__attribute__((alias("__imp__sub_8307CCF8"))) PPC_WEAK_FUNC(sub_8307CCF8);
PPC_FUNC_IMPL(__imp__sub_8307CCF8) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,38
	ctx.r5.s64 = 38;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// bl 0x830a7f60
	sub_830A7F60(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r27,120(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// bl 0x83075f10
	sub_83075F10(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8307cd54
	if (!cr0.eq) goto loc_8307CD54;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x83073510
	sub_83073510(ctx, base);
	// b 0x8307cde4
	goto loc_8307CDE4;
loc_8307CD54:
	// lwz r11,176(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8307cd94
	if (!cr6.eq) goto loc_8307CD94;
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,212(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307cd8c
	if (cr0.eq) goto loc_8307CD8C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,212(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x83055058
	sub_83055058(ctx, base);
	// b 0x8307cd90
	goto loc_8307CD90;
loc_8307CD8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8307CD90:
	// stw r3,176(r30)
	PPC_STORE_U32(r30.u32 + 176, ctx.r3.u32);
loc_8307CD94:
	// lwz r29,120(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// bl 0x8307ca18
	sub_8307CA18(ctx, base);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 116);
	// bl 0x83070a58
	sub_83070A58(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307cde0
	if (cr0.eq) goto loc_8307CDE0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,120(r30)
	PPC_STORE_U32(r30.u32 + 120, r29.u32);
	// lwz r4,32(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// bl 0x8307e248
	sub_8307E248(ctx, base);
loc_8307CDE0:
	// stw r27,120(r30)
	PPC_STORE_U32(r30.u32 + 120, r27.u32);
loc_8307CDE4:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8307CDEC"))) PPC_WEAK_FUNC(sub_8307CDEC);
PPC_FUNC_IMPL(__imp__sub_8307CDEC) {
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
	// lwz r4,212(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 212);
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

__attribute__((alias("__imp__sub_8307CE28"))) PPC_WEAK_FUNC(sub_8307CE28);
PPC_FUNC_IMPL(__imp__sub_8307CE28) {
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
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// addi r5,r11,-7200
	ctx.r5.s64 = r11.s64 + -7200;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// li r21,0
	r21.s64 = 0;
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// beq 0x8307ce74
	if (cr0.eq) goto loc_8307CE74;
	// lhz r11,0(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// mr r11,r21
	r11.u64 = r21.u64;
	// bne 0x8307ce78
	if (!cr0.eq) goto loc_8307CE78;
loc_8307CE74:
	// li r11,1
	r11.s64 = 1;
loc_8307CE78:
	// clrlwi. r26,r23,24
	r26.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// beq 0x8307cec0
	if (cr0.eq) goto loc_8307CEC0;
	// clrlwi. r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8307cec0
	if (cr0.eq) goto loc_8307CEC0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,98
	ctx.r6.s64 = 98;
loc_8307CE94:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r7,r11,-7732
	ctx.r7.s64 = r11.s64 + -7732;
loc_8307CE9C:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
loc_8307CEB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8307d240
	goto loc_8307D240;
loc_8307CEC0:
	// clrlwi. r20,r11,24
	r20.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r20.s32, 0, xer);
	// beq 0x8307cfc4
	if (cr0.eq) goto loc_8307CFC4;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,32424
	ctx.r4.s64 = r11.s64 + 32424;
	// bl 0x8306fba0
	sub_8306FBA0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_8307CEDC:
	// addi r29,r30,60
	r29.s64 = r30.s64 + 60;
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r21,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r21.u32);
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r21,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r21.u16);
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r4,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r4.u32);
	// lwz r11,36(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82feec20
	sub_82FEEC20(ctx, base);
	// mr. r24,r3
	r24.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// bne 0x8307d23c
	if (!cr0.eq) goto loc_8307D23C;
	// cntlzw r11,r26
	r11.u64 = r26.u32 == 0 ? 32 : __builtin_clz(r26.u32);
	// lwz r8,160(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r11,r11,44
	r11.s64 = r11.s64 + 44;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// clrlwi r5,r11,16
	ctx.r5.u64 = r11.u32 & 0xFFFF;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x830a7f60
	sub_830A7F60(ctx, base);
	// lwz r29,136(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 136);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830708e0
	sub_830708E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8307cfe0
	if (cr0.eq) goto loc_8307CFE0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,99
	ctx.r6.s64 = 99;
	// b 0x8307ce9c
	goto loc_8307CE9C;
loc_8307CFC4:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82fd97d8
	sub_82FD97D8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8307cedc
	if (!cr0.eq) goto loc_8307CEDC;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// li r6,59
	ctx.r6.s64 = 59;
	// b 0x8307ce94
	goto loc_8307CE94;
loc_8307CFE0:
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8305c228
	sub_8305C228(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83071800
	sub_83071800(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830a72e0
	sub_830A72E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x83071390
	sub_83071390(ctx, base);
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lbz r11,25(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 25);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307d060
	if (cr0.eq) goto loc_8307D060;
	// lwz r11,220(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8307d060
	if (!cr6.eq) goto loc_8307D060;
	// lwz r5,160(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307d060
	if (cr0.eq) goto loc_8307D060;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830771d8
	sub_830771D8(ctx, base);
	// stw r3,220(r30)
	PPC_STORE_U32(r30.u32 + 220, ctx.r3.u32);
loc_8307D060:
	// lwz r11,220(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x8307d0b0
	if (!cr6.eq) goto loc_8307D0B0;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,29
	ctx.r6.s64 = 29;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 136);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307d0a0
	if (cr0.eq) goto loc_8307D0A0;
	// addi r4,r11,-1
	ctx.r4.s64 = r11.s64 + -1;
	// bl 0x82fdea08
	sub_82FDEA08(ctx, base);
loc_8307D0A0:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// b 0x8307ceb8
	goto loc_8307CEB8;
loc_8307D0B0:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r4,r11,-7696
	ctx.r4.s64 = r11.s64 + -7696;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8307d13c
	if (cr0.eq) goto loc_8307D13C;
	// rlwinm. r11,r22,0,28,28
	r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8307d118
	if (cr0.eq) goto loc_8307D118;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,112
	ctx.r6.s64 = 112;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 136);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307d114
	if (cr0.eq) goto loc_8307D114;
	// addi r4,r11,-1
	ctx.r4.s64 = r11.s64 + -1;
	// bl 0x82fdea08
	sub_82FDEA08(ctx, base);
loc_8307D114:
	// b 0x8307d0a0
	goto loc_8307D0A0;
loc_8307D118:
	// addi r9,r31,80
	ctx.r9.s64 = r31.s64 + 80;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830798f0
	sub_830798F0(ctx, base);
	// b 0x8307d1b4
	goto loc_8307D1B4;
loc_8307D13C:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r4,r11,-7608
	ctx.r4.s64 = r11.s64 + -7608;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8307d178
	if (cr0.eq) goto loc_8307D178;
	// addi r9,r31,80
	ctx.r9.s64 = r31.s64 + 80;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83079d40
	sub_83079D40(ctx, base);
	// b 0x8307d1b4
	goto loc_8307D1B4;
loc_8307D178:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r4,r11,-7708
	ctx.r4.s64 = r11.s64 + -7708;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq 0x8307d1bc
	if (cr0.eq) goto loc_8307D1BC;
	// addi r10,r31,80
	ctx.r10.s64 = r31.s64 + 80;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8307aae0
	sub_8307AAE0(ctx, base);
loc_8307D1B4:
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// b 0x8307d1f8
	goto loc_8307D1F8;
loc_8307D1BC:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,10
	ctx.r6.s64 = 10;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 136);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307d230
	if (cr0.eq) goto loc_8307D230;
	// addi r4,r11,-1
	ctx.r4.s64 = r11.s64 + -1;
	// bl 0x82fdea08
	sub_82FDEA08(ctx, base);
loc_8307D1F8:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x8307d230
	if (cr6.eq) goto loc_8307D230;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// beq cr6,0x8307d210
	if (cr6.eq) goto loc_8307D210;
	// li r11,1
	r11.s64 = 1;
	// stb r11,8(r24)
	PPC_STORE_U8(r24.u32 + 8, r11.u8);
loc_8307D210:
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cntlzw r11,r5
	r11.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8307d230
	if (!cr0.eq) goto loc_8307D230;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// stw r21,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r21.u32);
	// bl 0x8305a0d0
	sub_8305A0D0(ctx, base);
loc_8307D230:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
loc_8307D23C:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_8307D240:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x831b0b58
	return;
}

__attribute__((alias("__imp__sub_8307D248"))) PPC_WEAK_FUNC(sub_8307D248);
PPC_FUNC_IMPL(__imp__sub_8307D248) {
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

__attribute__((alias("__imp__sub_8307D278"))) PPC_WEAK_FUNC(sub_8307D278);
PPC_FUNC_IMPL(__imp__sub_8307D278) {
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
	// addi r31,r1,-256
	r31.s64 = ctx.r1.s64 + -256;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// addi r5,r11,-7200
	ctx.r5.s64 = r11.s64 + -7200;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,276(r31)
	PPC_STORE_U32(r31.u32 + 276, r30.u32);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// addi r5,r11,-7108
	ctx.r5.s64 = r11.s64 + -7108;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r22,0
	r22.s64 = 0;
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// beq cr6,0x8307d2e4
	if (cr6.eq) goto loc_8307D2E4;
	// lhz r11,0(r16)
	r11.u64 = PPC_LOAD_U16(r16.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// mr r11,r22
	r11.u64 = r22.u64;
	// bne 0x8307d2e8
	if (!cr0.eq) goto loc_8307D2E8;
loc_8307D2E4:
	// li r11,1
	r11.s64 = 1;
loc_8307D2E8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8307d304
	if (cr6.eq) goto loc_8307D304;
	// lhz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U16(r26.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// bne 0x8307d308
	if (!cr0.eq) goto loc_8307D308;
loc_8307D304:
	// li r10,1
	ctx.r10.s64 = 1;
loc_8307D308:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// clrlwi r27,r10,24
	r27.u64 = ctx.r10.u32 & 0xFF;
	// beq 0x8307d350
	if (cr0.eq) goto loc_8307D350;
	// clrlwi. r10,r28,24
	ctx.r10.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8307d350
	if (cr0.eq) goto loc_8307D350;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,98
	ctx.r6.s64 = 98;
loc_8307D324:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r11,-8152
	ctx.r7.s64 = r11.s64 + -8152;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
loc_8307D348:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8307d9c4
	goto loc_8307D9C4;
loc_8307D350:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8307d37c
	if (cr6.eq) goto loc_8307D37C;
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8307d37c
	if (cr0.eq) goto loc_8307D37C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
	// b 0x8307d348
	goto loc_8307D348;
loc_8307D37C:
	// clrlwi r29,r28,24
	r29.u64 = r28.u32 & 0xFF;
	// lwz r8,160(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// cntlzw r11,r29
	r11.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r11,r11,22
	r11.s64 = r11.s64 + 22;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// clrlwi r5,r11,16
	ctx.r5.u64 = r11.u32 & 0xFFFF;
	// bl 0x830a7f60
	sub_830A7F60(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x8307d3cc
	if (!cr6.eq) goto loc_8307D3CC;
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8307d348
	if (!cr0.eq) goto loc_8307D348;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8307c1f0
	sub_8307C1F0(ctx, base);
	// b 0x8307d9c4
	goto loc_8307D9C4;
loc_8307D3CC:
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82fd97d8
	sub_82FD97D8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8307d3e8
	if (!cr0.eq) goto loc_8307D3E8;
	// mr r8,r16
	ctx.r8.u64 = r16.u64;
	// li r6,59
	ctx.r6.s64 = 59;
	// b 0x8307d324
	goto loc_8307D324;
loc_8307D3E8:
	// addi r29,r30,60
	r29.s64 = r30.s64 + 60;
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r22,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r22.u32);
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r22,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r22.u16);
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r15,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r15.u32);
	// lwz r11,36(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307d490
	if (cr0.eq) goto loc_8307D490;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8307d9c4
	if (!cr0.eq) goto loc_8307D9C4;
loc_8307D490:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x830a72e0
	sub_830A72E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x83071390
	sub_83071390(ctx, base);
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lbz r11,25(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 25);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307d4ec
	if (cr0.eq) goto loc_8307D4EC;
	// lwz r11,220(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8307d4ec
	if (!cr6.eq) goto loc_8307D4EC;
	// lwz r5,160(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307d4ec
	if (cr0.eq) goto loc_8307D4EC;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830771d8
	sub_830771D8(ctx, base);
	// stw r3,220(r30)
	PPC_STORE_U32(r30.u32 + 220, ctx.r3.u32);
loc_8307D4EC:
	// lwz r23,220(r30)
	r23.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// stw r23,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r23.u32);
	// li r3,36
	ctx.r3.s64 = 36;
	// lwz r21,12(r30)
	r21.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r24,r22
	r24.u64 = r22.u64;
	// lwz r20,124(r30)
	r20.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// stw r27,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r27.u32);
	// beq 0x8307d554
	if (cr0.eq) goto loc_8307D554;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// lwz r26,216(r30)
	r26.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// lwz r19,4(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// bl 0x8309dac8
	sub_8309DAC8(ctx, base);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// b 0x8307d558
	goto loc_8307D558;
loc_8307D554:
	// mr r18,r22
	r18.u64 = r22.u64;
loc_8307D558:
	// addi r4,r31,100
	ctx.r4.s64 = r31.s64 + 100;
	// lwz r3,140(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 140);
	// bl 0x8305c228
	sub_8305C228(ctx, base);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stw r18,124(r30)
	PPC_STORE_U32(r30.u32 + 124, r18.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r10,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r10.u32);
	// stw r11,8(r18)
	PPC_STORE_U32(r18.u32 + 8, r11.u32);
	// bne cr6,0x8307d5b8
	if (!cr6.eq) goto loc_8307D5B8;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r19,r11,-28032
	r19.s64 = r11.s64 + -28032;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r16
	ctx.r7.u64 = r16.u64;
	// li r6,114
	ctx.r6.s64 = 114;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// b 0x8307d708
	goto loc_8307D708;
loc_8307D5B8:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-7220
	ctx.r4.s64 = r11.s64 + -7220;
	// lwz r11,164(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 164);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r19,r11,-28032
	r19.s64 = r11.s64 + -28032;
	// bne 0x8307d608
	if (!cr0.eq) goto loc_8307D608;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-7240
	ctx.r4.s64 = r11.s64 + -7240;
	// lwz r11,164(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 164);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307d61c
	if (cr0.eq) goto loc_8307D61C;
loc_8307D608:
	// li r6,116
	ctx.r6.s64 = 116;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
loc_8307D61C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r26,r22
	r26.u64 = r22.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r4,r11,-7752
	ctx.r4.s64 = r11.s64 + -7752;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8307d654
	if (cr0.eq) goto loc_8307D654;
	// li r5,5
	ctx.r5.s64 = 5;
	// b 0x8307d670
	goto loc_8307D670;
loc_8307D654:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,-8352
	ctx.r4.s64 = r11.s64 + -8352;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8307d680
	if (cr0.eq) goto loc_8307D680;
	// li r5,4
	ctx.r5.s64 = 4;
loc_8307D670:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8307fe30
	sub_8307FE30(ctx, base);
	// b 0x8307d6a4
	goto loc_8307D6A4;
loc_8307D680:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,-8496
	ctx.r4.s64 = r11.s64 + -8496;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8307d6ac
	if (cr0.eq) goto loc_8307D6AC;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83079218
	sub_83079218(ctx, base);
loc_8307D6A4:
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// b 0x8307d6b0
	goto loc_8307D6B0;
loc_8307D6AC:
	// li r26,1
	r26.s64 = 1;
loc_8307D6B0:
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8307d6c8
	if (!cr0.eq) goto loc_8307D6C8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830a7430
	sub_830A7430(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307d6ec
	if (cr0.eq) goto loc_8307D6EC;
loc_8307D6C8:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r16
	ctx.r7.u64 = r16.u64;
	// li r6,114
	ctx.r6.s64 = 114;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
loc_8307D6EC:
	// lwz r6,132(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// cmplwi r6,0
	cr0.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq 0x8307d708
	if (cr0.eq) goto loc_8307D708;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r5,124(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83074ed8
	sub_83074ED8(ctx, base);
loc_8307D708:
	// lwz r3,140(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 140);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307d720
	if (cr0.eq) goto loc_8307D720;
	// addi r4,r11,-1
	ctx.r4.s64 = r11.s64 + -1;
	// bl 0x82fdea08
	sub_82FDEA08(ctx, base);
loc_8307D720:
	// lwz r11,124(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// stw r24,20(r11)
	PPC_STORE_U32(r11.u32 + 20, r24.u32);
	// lwz r5,124(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// bl 0x83054ec8
	sub_83054EC8(ctx, base);
	// cntlzw r11,r23
	r11.u64 = r23.u32 == 0 ? 32 : __builtin_clz(r23.u32);
	// stw r20,124(r30)
	PPC_STORE_U32(r30.u32 + 124, r20.u32);
	// stw r21,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r21.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8307d760
	if (!cr0.eq) goto loc_8307D760;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// stw r22,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r22.u32);
	// bl 0x8305a0d0
	sub_8305A0D0(ctx, base);
loc_8307D760:
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307d9b4
	if (cr0.eq) goto loc_8307D9B4;
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307d790
	if (cr0.eq) goto loc_8307D790;
	// bl 0x830a6a78
	sub_830A6A78(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// b 0x8307d794
	goto loc_8307D794;
loc_8307D790:
	// mr r24,r22
	r24.u64 = r22.u64;
loc_8307D794:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8309d7f8
	sub_8309D7F8(ctx, base);
	// addi r27,r30,120
	r27.s64 = r30.s64 + 120;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lwz r26,68(r25)
	r26.u64 = PPC_LOAD_U32(r25.u32 + 68);
	// lwz r25,64(r25)
	r25.u64 = PPC_LOAD_U32(r25.u32 + 64);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r28,0(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lwz r11,36(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// bl 0x830a6ae8
	sub_830A6AE8(ctx, base);
	// lwz r3,176(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307d9b4
	if (cr0.eq) goto loc_8307D9B4;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r6,r31,104
	ctx.r6.s64 = r31.s64 + 104;
	// addi r26,r11,-8152
	r26.s64 = r11.s64 + -8152;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82fea480
	sub_82FEA480(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307d9b4
	if (cr0.eq) goto loc_8307D9B4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307d9b4
	if (cr0.eq) goto loc_8307D9B4;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r22,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r22.u32);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r28,r11,-5404
	r28.s64 = r11.s64 + -5404;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r22,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r22.u16);
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,100
	ctx.r4.s64 = r31.s64 + 100;
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// lwz r3,140(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 140);
	// bl 0x830708e0
	sub_830708E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8307d8cc
	if (cr0.eq) goto loc_8307D8CC;
	// lwz r11,212(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r16
	ctx.r7.u64 = r16.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r4,99
	ctx.r4.s64 = 99;
	// addi r3,r30,196
	ctx.r3.s64 = r30.s64 + 196;
	// bl 0x830a6370
	sub_830A6370(ctx, base);
	// b 0x8307d9b4
	goto loc_8307D9B4;
loc_8307D8CC:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r5,r31,104
	ctx.r5.s64 = r31.s64 + 104;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r22,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r22.u16);
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307d908
	if (cr0.eq) goto loc_8307D908;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307d908
	if (cr0.eq) goto loc_8307D908;
	// stw r11,28(r18)
	PPC_STORE_U32(r18.u32 + 28, r11.u32);
	// b 0x8307d9b4
	goto loc_8307D9B4;
loc_8307D908:
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r22,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r22.u32);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r28,0(r27)
	r28.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// sthx r22,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r22.u16);
	// lwz r6,24(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x830a7240
	sub_830A7240(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x8307d978
	if (cr0.eq) goto loc_8307D978;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8307d278
	sub_8307D278(ctx, base);
	// stw r3,28(r18)
	PPC_STORE_U32(r18.u32 + 28, ctx.r3.u32);
	// stw r28,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r28.u32);
	// b 0x8307d9b4
	goto loc_8307D9B4;
loc_8307D978:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r4,117
	ctx.r4.s64 = 117;
	// addi r3,r30,196
	ctx.r3.s64 = r30.s64 + 196;
	// sthx r22,r11,r9
	PPC_STORE_U16(r11.u32 + ctx.r9.u32, r22.u16);
	// lwz r11,212(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r8,28(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x830a6370
	sub_830A6370(ctx, base);
loc_8307D9B4:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
loc_8307D9C4:
	// addi r1,r31,256
	ctx.r1.s64 = r31.s64 + 256;
	// b 0x831b0b44
	return;
}

__attribute__((alias("__imp__sub_8307D9CC"))) PPC_WEAK_FUNC(sub_8307D9CC);
PPC_FUNC_IMPL(__imp__sub_8307D9CC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-256
	r31.s64 = r12.s64 + -256;
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

__attribute__((alias("__imp__sub_8307D9F4"))) PPC_WEAK_FUNC(sub_8307D9F4);
PPC_FUNC_IMPL(__imp__sub_8307D9F4) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,276(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 276);
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

__attribute__((alias("__imp__sub_8307DA24"))) PPC_WEAK_FUNC(sub_8307DA24);
PPC_FUNC_IMPL(__imp__sub_8307DA24) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,276(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 276);
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

__attribute__((alias("__imp__sub_8307DA60"))) PPC_WEAK_FUNC(sub_8307DA60);
PPC_FUNC_IMPL(__imp__sub_8307DA60) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,26
	ctx.r5.s64 = 26;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// lwz r8,160(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// bl 0x830a7f60
	sub_830A7F60(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-7200
	ctx.r5.s64 = r11.s64 + -7200;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x8307dc20
	if (cr0.eq) goto loc_8307DC20;
	// lhz r11,0(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307dc20
	if (cr0.eq) goto loc_8307DC20;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fd97d8
	sub_82FD97D8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8307db04
	if (!cr0.eq) goto loc_8307DB04;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// addi r7,r11,-8088
	ctx.r7.s64 = r11.s64 + -8088;
	// li r6,59
	ctx.r6.s64 = 59;
loc_8307DAE4:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// b 0x8307dc20
	goto loc_8307DC20;
loc_8307DB04:
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8307db78
	if (!cr0.eq) goto loc_8307DB78;
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,212(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307db3c
	if (cr0.eq) goto loc_8307DB3C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,212(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x83055058
	sub_83055058(ctx, base);
	// b 0x8307db40
	goto loc_8307DB40;
loc_8307DB3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8307DB40:
	// stw r3,180(r30)
	PPC_STORE_U32(r30.u32 + 180, ctx.r3.u32);
loc_8307DB44:
	// li r3,28
	ctx.r3.s64 = 28;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307dbac
	if (cr0.eq) goto loc_8307DBAC;
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r6,216(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x830a8700
	sub_830A8700(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8307dbb0
	goto loc_8307DBB0;
loc_8307DB78:
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
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
	// beq 0x8307db44
	if (cr0.eq) goto loc_8307DB44;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r6,146
	ctx.r6.s64 = 146;
	// b 0x8307dae4
	goto loc_8307DAE4;
loc_8307DBAC:
	// li r29,0
	r29.s64 = 0;
loc_8307DBB0:
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x830436d0
	sub_830436D0(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8307b588
	sub_8307B588(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8307dbf8
	if (!cr0.eq) goto loc_8307DBF8;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// bl 0x830436d0
	sub_830436D0(ctx, base);
	// b 0x8307dc14
	goto loc_8307DC14;
loc_8307DBF8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x83073148
	sub_83073148(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
loc_8307DC14:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
loc_8307DC20:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_8307DC28"))) PPC_WEAK_FUNC(sub_8307DC28);
PPC_FUNC_IMPL(__imp__sub_8307DC28) {
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
	// lwz r4,212(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 212);
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

__attribute__((alias("__imp__sub_8307DC58"))) PPC_WEAK_FUNC(sub_8307DC58);
PPC_FUNC_IMPL(__imp__sub_8307DC58) {
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

__attribute__((alias("__imp__sub_8307DC88"))) PPC_WEAK_FUNC(sub_8307DC88);
PPC_FUNC_IMPL(__imp__sub_8307DC88) {
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

__attribute__((alias("__imp__sub_8307DCB8"))) PPC_WEAK_FUNC(sub_8307DCB8);
PPC_FUNC_IMPL(__imp__sub_8307DCB8) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// lwz r8,160(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// bl 0x830a7f60
	sub_830A7F60(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-7200
	ctx.r5.s64 = r11.s64 + -7200;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x8307de78
	if (cr0.eq) goto loc_8307DE78;
	// lhz r11,0(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307de78
	if (cr0.eq) goto loc_8307DE78;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fd97d8
	sub_82FD97D8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8307dd5c
	if (!cr0.eq) goto loc_8307DD5C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// addi r7,r11,-7684
	ctx.r7.s64 = r11.s64 + -7684;
	// li r6,59
	ctx.r6.s64 = 59;
loc_8307DD3C:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// b 0x8307de78
	goto loc_8307DE78;
loc_8307DD5C:
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8307ddd0
	if (!cr0.eq) goto loc_8307DDD0;
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307dd94
	if (cr0.eq) goto loc_8307DD94;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,216(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x83055058
	sub_83055058(ctx, base);
	// b 0x8307dd98
	goto loc_8307DD98;
loc_8307DD94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8307DD98:
	// stw r3,180(r30)
	PPC_STORE_U32(r30.u32 + 180, ctx.r3.u32);
loc_8307DD9C:
	// li r3,28
	ctx.r3.s64 = 28;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307de04
	if (cr0.eq) goto loc_8307DE04;
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r6,216(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x830a8890
	sub_830A8890(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8307de08
	goto loc_8307DE08;
loc_8307DDD0:
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
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
	// beq 0x8307dd9c
	if (cr0.eq) goto loc_8307DD9C;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r6,146
	ctx.r6.s64 = 146;
	// b 0x8307dd3c
	goto loc_8307DD3C;
loc_8307DE04:
	// li r29,0
	r29.s64 = 0;
loc_8307DE08:
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x830436d0
	sub_830436D0(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8307b588
	sub_8307B588(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8307de50
	if (!cr0.eq) goto loc_8307DE50;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// bl 0x830436d0
	sub_830436D0(ctx, base);
	// b 0x8307de6c
	goto loc_8307DE6C;
loc_8307DE50:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x83073148
	sub_83073148(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
loc_8307DE6C:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
loc_8307DE78:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_8307DE80"))) PPC_WEAK_FUNC(sub_8307DE80);
PPC_FUNC_IMPL(__imp__sub_8307DE80) {
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

__attribute__((alias("__imp__sub_8307DEB0"))) PPC_WEAK_FUNC(sub_8307DEB0);
PPC_FUNC_IMPL(__imp__sub_8307DEB0) {
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

__attribute__((alias("__imp__sub_8307DEE0"))) PPC_WEAK_FUNC(sub_8307DEE0);
PPC_FUNC_IMPL(__imp__sub_8307DEE0) {
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

__attribute__((alias("__imp__sub_8307DF10"))) PPC_WEAK_FUNC(sub_8307DF10);
PPC_FUNC_IMPL(__imp__sub_8307DF10) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,27
	ctx.r5.s64 = 27;
	// lwz r8,160(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// bl 0x830a7f60
	sub_830A7F60(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-7200
	ctx.r5.s64 = r11.s64 + -7200;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r5,r11,-7100
	ctx.r5.s64 = r11.s64 + -7100;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8307e1e4
	if (cr6.eq) goto loc_8307E1E4;
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307e1e4
	if (cr0.eq) goto loc_8307E1E4;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8307e1e4
	if (cr6.eq) goto loc_8307E1E4;
	// lhz r11,0(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307e1e4
	if (cr0.eq) goto loc_8307E1E4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fd97d8
	sub_82FD97D8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bne 0x8307dfec
	if (!cr0.eq) goto loc_8307DFEC;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// addi r7,r11,-8080
	ctx.r7.s64 = r11.s64 + -8080;
	// li r6,59
	ctx.r6.s64 = 59;
loc_8307DFD0:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// b 0x8307e1e4
	goto loc_8307E1E4;
loc_8307DFEC:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8306f898
	sub_8306F898(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306f940
	sub_8306F940(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83071558
	sub_83071558(ctx, base);
	// lwz r11,180(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8307e06c
	if (cr6.eq) goto loc_8307E06C;
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,180(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82fea480
	sub_82FEA480(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307e06c
	if (cr0.eq) goto loc_8307E06C;
	// lwz r26,0(r3)
	r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8307e070
	goto loc_8307E070;
loc_8307E06C:
	// li r26,0
	r26.s64 = 0;
loc_8307E070:
	// cmplwi r26,0
	cr0.compare<uint32_t>(r26.u32, 0, xer);
	// bne 0x8307e08c
	if (!cr0.eq) goto loc_8307E08C;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// li r6,148
	ctx.r6.s64 = 148;
loc_8307E080:
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8307dfd0
	goto loc_8307DFD0;
loc_8307E08C:
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
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
	// beq 0x8307e0c0
	if (cr0.eq) goto loc_8307E0C0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,146
	ctx.r6.s64 = 146;
	// b 0x8307e080
	goto loc_8307E080;
loc_8307E0C0:
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
	// beq 0x8307e0f8
	if (cr0.eq) goto loc_8307E0F8;
	// lwz r11,8(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x830a8a18
	sub_830A8A18(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// b 0x8307e0fc
	goto loc_8307E0FC;
loc_8307E0F8:
	// li r27,0
	r27.s64 = 0;
loc_8307E0FC:
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// bl 0x830436d0
	sub_830436D0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8307b588
	sub_8307B588(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8307e144
	if (!cr0.eq) goto loc_8307E144;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// bl 0x830436d0
	sub_830436D0(ctx, base);
	// b 0x8307e1d8
	goto loc_8307E1D8;
loc_8307E144:
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307e158
	if (cr0.eq) goto loc_8307E158;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x8307e15c
	goto loc_8307E15C;
loc_8307E158:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8307E15C:
	// lwz r11,16(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307e170
	if (cr0.eq) goto loc_8307E170;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x8307e174
	goto loc_8307E174;
loc_8307E170:
	// li r11,0
	r11.s64 = 0;
loc_8307E174:
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// beq cr6,0x8307e1bc
	if (cr6.eq) goto loc_8307E1BC;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// bl 0x830436d0
	sub_830436D0(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,4(r26)
	ctx.r8.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r6,149
	ctx.r6.s64 = 149;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// b 0x8307e1d8
	goto loc_8307E1D8;
loc_8307E1BC:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x83073148
	sub_83073148(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,24(r27)
	PPC_STORE_U32(r27.u32 + 24, r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
loc_8307E1D8:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
loc_8307E1E4:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_8307E1EC"))) PPC_WEAK_FUNC(sub_8307E1EC);
PPC_FUNC_IMPL(__imp__sub_8307E1EC) {
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

__attribute__((alias("__imp__sub_8307E21C"))) PPC_WEAK_FUNC(sub_8307E21C);
PPC_FUNC_IMPL(__imp__sub_8307E21C) {
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

__attribute__((alias("__imp__sub_8307E248"))) PPC_WEAK_FUNC(sub_8307E248);
PPC_FUNC_IMPL(__imp__sub_8307E248) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x830a72e0
	sub_830A72E0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8307e328
	if (cr0.eq) goto loc_8307E328;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r28,r11,-8108
	r28.s64 = r11.s64 + -8108;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r27,r11,-8140
	r27.s64 = r11.s64 + -8140;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r26,r11,-8124
	r26.s64 = r11.s64 + -8124;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r29,r11,-8488
	r29.s64 = r11.s64 + -8488;
loc_8307E288:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8307e318
	if (!cr0.eq) goto loc_8307E318;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8307e2d4
	if (cr0.eq) goto loc_8307E2D4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x83077ff8
	sub_83077FF8(ctx, base);
	// b 0x8307e318
	goto loc_8307E318;
loc_8307E2D4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8307e2f8
	if (cr0.eq) goto loc_8307E2F8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x830784d8
	sub_830784D8(ctx, base);
	// b 0x8307e318
	goto loc_8307E318;
loc_8307E2F8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8307e328
	if (cr0.eq) goto loc_8307E328;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8307ccf8
	sub_8307CCF8(ctx, base);
loc_8307E318:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830a7430
	sub_830A7430(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x8307e288
	if (!cr0.eq) goto loc_8307E288;
loc_8307E328:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_8307E330"))) PPC_WEAK_FUNC(sub_8307E330);
PPC_FUNC_IMPL(__imp__sub_8307E330) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8307ce28
	sub_8307CE28(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x8307e398
	if (!cr0.eq) goto loc_8307E398;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-7200
	ctx.r5.s64 = r11.s64 + -7200;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,35
	ctx.r6.s64 = 35;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
loc_8307E398:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8307E3A8"))) PPC_WEAK_FUNC(sub_8307E3A8);
PPC_FUNC_IMPL(__imp__sub_8307E3A8) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// bl 0x8306f940
	sub_8306F940(ctx, base);
	// addi r28,r31,120
	r28.s64 = r31.s64 + 120;
	// lwz r21,12(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r25,r30
	r25.u64 = r30.u64;
	// li r24,2
	r24.s64 = 2;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// lwz r22,0(r28)
	r22.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// beq cr6,0x8307e4c0
	if (cr6.eq) goto loc_8307E4C0;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307e42c
	if (cr0.eq) goto loc_8307E42C;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830709a8
	sub_830709A8(ctx, base);
loc_8307E42C:
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne 0x8307e464
	if (!cr0.eq) goto loc_8307E464;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,159
	ctx.r6.s64 = 159;
loc_8307E440:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8307e5bc
	goto loc_8307E5BC;
loc_8307E464:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83073c88
	sub_83073C88(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// bne 0x8307e5b8
	if (!cr0.eq) goto loc_8307E5B8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x83070e50
	sub_83070E50(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x8307e4b0
	if (cr0.eq) goto loc_8307E4B0;
	// lbz r11,1(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8307e4b0
	if (!cr0.eq) goto loc_8307E4B0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r24,1
	r24.s64 = 1;
	// bl 0x8306ffa8
	sub_8306FFA8(ctx, base);
	// b 0x8307e4f8
	goto loc_8307E4F8;
loc_8307E4B0:
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// li r6,39
	ctx.r6.s64 = 39;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8307e440
	goto loc_8307E440;
loc_8307E4C0:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8306f898
	sub_8306F898(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830714b0
	sub_830714B0(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x83073c88
	sub_83073C88(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// bne 0x8307e5b8
	if (!cr0.eq) goto loc_8307E5B8;
loc_8307E4F8:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r30,r11,-8608
	r30.s64 = r11.s64 + -8608;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8307e528
	if (cr0.eq) goto loc_8307E528;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8307e560
	if (cr0.eq) goto loc_8307E560;
loc_8307E528:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// addi r5,r11,-7732
	ctx.r5.s64 = r11.s64 + -7732;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x830a7240
	sub_830A7240(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x8307e560
	if (cr0.eq) goto loc_8307E560;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8307ce28
	sub_8307CE28(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
loc_8307E560:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r22,r11
	cr6.compare<uint32_t>(r22.u32, r11.u32, xer);
	// beq cr6,0x8307e580
	if (cr6.eq) goto loc_8307E580;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8306ffa8
	sub_8306FFA8(ctx, base);
loc_8307E580:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x8307e5b8
	if (!cr6.eq) goto loc_8307E5B8;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// li r11,0
	r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,39
	ctx.r6.s64 = 39;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// stb r11,0(r20)
	PPC_STORE_U8(r20.u32 + 0, r11.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
loc_8307E5B8:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_8307E5BC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b58
	return;
}

__attribute__((alias("__imp__sub_8307E5C8"))) PPC_WEAK_FUNC(sub_8307E5C8);
PPC_FUNC_IMPL(__imp__sub_8307E5C8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// bl 0x83073c88
	sub_83073C88(ctx, base);
	// addi r29,r31,120
	r29.s64 = r31.s64 + 120;
	// lwz r22,12(r31)
	r22.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r28,2
	r28.s64 = 2;
	// lwz r24,0(r29)
	r24.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8307e6dc
	if (!cr0.eq) goto loc_8307E6DC;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8307e6dc
	if (cr6.eq) goto loc_8307E6DC;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307e6dc
	if (cr0.eq) goto loc_8307E6DC;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r28,0(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r3,52(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 52);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307e664
	if (cr0.eq) goto loc_8307E664;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830709a8
	sub_830709A8(ctx, base);
loc_8307E664:
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8307e69c
	if (!cr0.eq) goto loc_8307E69C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,159
	ctx.r6.s64 = 159;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
loc_8307E694:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8307e740
	goto loc_8307E740;
loc_8307E69C:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// bne cr6,0x8307e73c
	if (!cr6.eq) goto loc_8307E73C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83070e50
	sub_83070E50(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x8307e694
	if (cr0.eq) goto loc_8307E694;
	// lbz r11,1(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8307e694
	if (!cr0.eq) goto loc_8307E694;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r28,1
	r28.s64 = 1;
	// bl 0x8306ffa8
	sub_8306FFA8(ctx, base);
	// b 0x8307e6e4
	goto loc_8307E6E4;
loc_8307E6DC:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// bne cr6,0x8307e73c
	if (!cr6.eq) goto loc_8307E73C;
loc_8307E6E4:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r5,r11,-7732
	ctx.r5.s64 = r11.s64 + -7732;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x830a7240
	sub_830A7240(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x8307e71c
	if (cr0.eq) goto loc_8307E71C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8307ce28
	sub_8307CE28(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
loc_8307E71C:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// beq cr6,0x8307e73c
	if (cr6.eq) goto loc_8307E73C;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8306ffa8
	sub_8306FFA8(ctx, base);
loc_8307E73C:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
loc_8307E740:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_8307E748"))) PPC_WEAK_FUNC(sub_8307E748);
PPC_FUNC_IMPL(__imp__sub_8307E748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// addi r27,r31,120
	r27.s64 = r31.s64 + 120;
	// li r23,0
	r23.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// lwz r18,12(r31)
	r18.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// lwz r20,0(r27)
	r20.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r17,r8
	r17.u64 = ctx.r8.u64;
	// mr r26,r23
	r26.u64 = r23.u64;
	// mr r24,r23
	r24.u64 = r23.u64;
	// li r21,2
	r21.s64 = 2;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// li r19,1
	r19.s64 = 1;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8307e938
	if (!cr0.eq) goto loc_8307E938;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-8608
	ctx.r4.s64 = r11.s64 + -8608;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8307e810
	if (cr0.eq) goto loc_8307E810;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83073c88
	sub_83073C88(ctx, base);
	// mr. r24,r3
	r24.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// bne 0x8307eb0c
	if (!cr0.eq) goto loc_8307EB0C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r6,159
	ctx.r6.s64 = 159;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7356
	ctx.r4.s64 = r11.s64 + -7356;
	// li r11,1
	r11.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_8307E810:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8307e840
	if (!cr0.eq) goto loc_8307E840;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// b 0x8307e84c
	goto loc_8307E84C;
loc_8307E840:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830709a8
	sub_830709A8(ctx, base);
loc_8307E84C:
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne 0x8307e894
	if (!cr0.eq) goto loc_8307E894;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r6,159
	ctx.r6.s64 = 159;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7356
	ctx.r4.s64 = r11.s64 + -7356;
	// li r11,1
	r11.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_8307E894:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x83074920
	sub_83074920(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// bne 0x8307eb0c
	if (!cr0.eq) goto loc_8307EB0C;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x83070e50
	sub_83070E50(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x8307e8f8
	if (cr0.eq) goto loc_8307E8F8;
	// lbz r11,1(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8307e8f8
	if (!cr0.eq) goto loc_8307E8F8;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r21,r19
	r21.u64 = r19.u64;
	// bl 0x8306ffa8
	sub_8306FFA8(ctx, base);
	// b 0x8307ea7c
	goto loc_8307EA7C;
loc_8307E8F8:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// li r6,42
	ctx.r6.s64 = 42;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7356
	ctx.r4.s64 = r11.s64 + -7356;
	// li r11,1
	r11.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_8307E938:
	// addi r30,r31,60
	r30.s64 = r31.s64 + 60;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r23,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r23.u32);
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r23,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r23.u16);
	// lwz r30,24(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8307e9a0
	if (!cr0.eq) goto loc_8307E9A0;
	// mr r26,r23
	r26.u64 = r23.u64;
	// b 0x8307ea84
	goto loc_8307EA84;
loc_8307E9A0:
	// lwz r26,0(r3)
	r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r26,0
	cr0.compare<uint32_t>(r26.u32, 0, xer);
	// beq 0x8307ea84
	if (cr0.eq) goto loc_8307EA84;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// bl 0x830708e0
	sub_830708E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8307ea20
	if (cr0.eq) goto loc_8307EA20;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,99
	ctx.r6.s64 = 99;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7356
	ctx.r4.s64 = r11.s64 + -7356;
	// li r11,1
	r11.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_8307EA20:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// bl 0x830708e0
	sub_830708E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8307ea6c
	if (cr0.eq) goto loc_8307EA6C;
	// lis r11,-32219
	r11.s64 = -2111504384;
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r21.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r26,56(r17)
	PPC_STORE_U32(r17.u32 + 56, r26.u32);
	// addi r4,r11,-7356
	ctx.r4.s64 = r11.s64 + -7356;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_8307EA6C:
	// lbz r11,8(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307ea7c
	if (cr0.eq) goto loc_8307EA7C;
	// mr r26,r23
	r26.u64 = r23.u64;
loc_8307EA7C:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x8307eb0c
	if (!cr6.eq) goto loc_8307EB0C;
loc_8307EA84:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83073c88
	sub_83073C88(ctx, base);
	// mr. r24,r3
	r24.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// bne 0x8307eb0c
	if (!cr0.eq) goto loc_8307EB0C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// addi r5,r11,-8336
	ctx.r5.s64 = r11.s64 + -8336;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830a7240
	sub_830A7240(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x8307eb44
	if (cr0.eq) goto loc_8307EB44;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83083d78
	sub_83083D78(ctx, base);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,36(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8307eb3c
	if (!cr0.eq) goto loc_8307EB3C;
	// mr r26,r23
	r26.u64 = r23.u64;
loc_8307EB0C:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmplw cr6,r20,r11
	cr6.compare<uint32_t>(r20.u32, r11.u32, xer);
	// beq cr6,0x8307eb2c
	if (cr6.eq) goto loc_8307EB2C;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8306ffa8
	sub_8306FFA8(ctx, base);
loc_8307EB2C:
	// stw r26,56(r17)
	PPC_STORE_U32(r17.u32 + 56, r26.u32);
	// stw r24,48(r17)
	PPC_STORE_U32(r17.u32 + 48, r24.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831b0b4c
	return;
loc_8307EB3C:
	// lwz r26,0(r3)
	r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8307eb0c
	goto loc_8307EB0C;
loc_8307EB44:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// addi r5,r11,-7732
	ctx.r5.s64 = r11.s64 + -7732;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x830a7240
	sub_830A7240(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x8307ebdc
	if (cr0.eq) goto loc_8307EBDC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8307ce28
	sub_8307CE28(ctx, base);
	// mr. r24,r3
	r24.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// bne 0x8307eb0c
	if (!cr0.eq) goto loc_8307EB0C;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmplw cr6,r20,r11
	cr6.compare<uint32_t>(r20.u32, r11.u32, xer);
	// beq cr6,0x8307eba0
	if (cr6.eq) goto loc_8307EBA0;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8306ffa8
	sub_8306FFA8(ctx, base);
loc_8307EBA0:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r6,39
	ctx.r6.s64 = 39;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r19.u32);
	// addi r4,r11,-7356
	ctx.r4.s64 = r11.s64 + -7356;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_8307EBDC:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmplw cr6,r20,r11
	cr6.compare<uint32_t>(r20.u32, r11.u32, xer);
	// beq cr6,0x8307ebfc
	if (cr6.eq) goto loc_8307EBFC;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8306ffa8
	sub_8306FFA8(ctx, base);
loc_8307EBFC:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// li r6,42
	ctx.r6.s64 = 42;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r19.u32);
	// addi r4,r11,-7356
	ctx.r4.s64 = r11.s64 + -7356;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_8307EC40"))) PPC_WEAK_FUNC(sub_8307EC40);
PPC_FUNC_IMPL(__imp__sub_8307EC40) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b14
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r24,0
	r24.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r30,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r30.u32);
	// stw r23,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r23.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq cr6,0x8307ef84
	if (cr6.eq) goto loc_8307EF84;
	// lis r11,-31947
	r11.s64 = -2093678592;
	// addi r28,r11,15524
	r28.s64 = r11.s64 + 15524;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r27,r11,-8608
	r27.s64 = r11.s64 + -8608;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r26,r11,-7684
	r26.s64 = r11.s64 + -7684;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r25,r11,-8088
	r25.s64 = r11.s64 + -8088;
loc_8307EC94:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8307eccc
	if (cr0.eq) goto loc_8307ECCC;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8307da60
	sub_8307DA60(ctx, base);
	// b 0x8307ed4c
	goto loc_8307ED4C;
loc_8307ECCC:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8307ed04
	if (cr0.eq) goto loc_8307ED04;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8307dcb8
	sub_8307DCB8(ctx, base);
	// b 0x8307ed4c
	goto loc_8307ED4C;
loc_8307ED04:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// bne cr6,0x8307ed40
	if (!cr6.eq) goto loc_8307ED40;
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307ed38
	if (cr0.eq) goto loc_8307ED38;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,216(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x83070930
	sub_83070930(ctx, base);
	// b 0x8307ed3c
	goto loc_8307ED3C;
loc_8307ED38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8307ED3C:
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
loc_8307ED40:
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8305c228
	sub_8305C228(ctx, base);
loc_8307ED4C:
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830a74a0
	sub_830A74A0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// bne 0x8307ec94
	if (!cr0.eq) goto loc_8307EC94;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x8307ef84
	if (cr6.eq) goto loc_8307EF84;
	// lwz r11,112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8307ee48
	if (!cr6.eq) goto loc_8307EE48;
	// li r3,28
	ctx.r3.s64 = 28;
	// lwz r4,212(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307edac
	if (cr0.eq) goto loc_8307EDAC;
	// li r4,13
	ctx.r4.s64 = 13;
	// lwz r5,212(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// bl 0x82ffe210
	sub_82FFE210(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x8307edb0
	goto loc_8307EDB0;
loc_8307EDAC:
	// li r11,0
	r11.s64 = 0;
loc_8307EDB0:
	// li r3,28
	ctx.r3.s64 = 28;
	// lwz r4,212(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// stw r11,112(r30)
	PPC_STORE_U32(r30.u32 + 112, r11.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307ede0
	if (cr0.eq) goto loc_8307EDE0;
	// li r4,13
	ctx.r4.s64 = 13;
	// lwz r5,212(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// bl 0x82ffe210
	sub_82FFE210(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x8307ede4
	goto loc_8307EDE4;
loc_8307EDE0:
	// li r11,0
	r11.s64 = 0;
loc_8307EDE4:
	// li r3,28
	ctx.r3.s64 = 28;
	// lwz r4,212(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// stw r11,168(r30)
	PPC_STORE_U32(r30.u32 + 168, r11.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// beq 0x8307ee40
	if (cr0.eq) goto loc_8307EE40;
	// li r3,4
	ctx.r3.s64 = 4;
	// lwz r4,212(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307ee24
	if (cr0.eq) goto loc_8307EE24;
	// bl 0x83007488
	sub_83007488(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x8307ee28
	goto loc_8307EE28;
loc_8307EE24:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8307EE28:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,29
	ctx.r4.s64 = 29;
	// lwz r7,212(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83043618
	sub_83043618(ctx, base);
	// b 0x8307ee44
	goto loc_8307EE44;
loc_8307EE40:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8307EE44:
	// stw r3,164(r30)
	PPC_STORE_U32(r30.u32 + 164, ctx.r3.u32);
loc_8307EE48:
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// bl 0x83070a58
	sub_83070A58(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307eeb4
	if (cr0.eq) goto loc_8307EEB4;
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq 0x8307ee8c
	if (cr0.eq) goto loc_8307EE8C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8307EE8C:
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// stw r11,148(r30)
	PPC_STORE_U32(r30.u32 + 148, r11.u32);
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq 0x8307eeb0
	if (cr0.eq) goto loc_8307EEB0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8307EEB0:
	// stw r11,144(r30)
	PPC_STORE_U32(r30.u32 + 144, r11.u32);
loc_8307EEB4:
	// lwz r11,148(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 148);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8307ef50
	if (!cr6.eq) goto loc_8307EF50;
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,212(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307eef0
	if (cr0.eq) goto loc_8307EEF0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,212(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x83070930
	sub_83070930(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x8307eef4
	goto loc_8307EEF4;
loc_8307EEF0:
	// li r11,0
	r11.s64 = 0;
loc_8307EEF4:
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,212(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// stw r11,148(r30)
	PPC_STORE_U32(r30.u32 + 148, r11.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307ef28
	if (cr0.eq) goto loc_8307EF28;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,212(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x83070930
	sub_83070930(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x8307ef2c
	goto loc_8307EF2C;
loc_8307EF28:
	// li r11,0
	r11.s64 = 0;
loc_8307EF2C:
	// lwz r5,148(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 148);
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// stw r11,144(r30)
	PPC_STORE_U32(r30.u32 + 144, r11.u32);
	// bl 0x83072c58
	sub_83072C58(ctx, base);
	// lwz r5,144(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// bl 0x83072c58
	sub_83072C58(ctx, base);
loc_8307EF50:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r3,164(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 164);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x83072c58
	sub_83072C58(ctx, base);
	// addi r4,r31,212
	ctx.r4.s64 = r31.s64 + 212;
	// lwz r3,148(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 148);
	// bl 0x8305c228
	sub_8305C228(ctx, base);
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// lwz r3,144(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x8305c228
	sub_8305C228(ctx, base);
loc_8307EF84:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_8307EF8C"))) PPC_WEAK_FUNC(sub_8307EF8C);
PPC_FUNC_IMPL(__imp__sub_8307EF8C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-176
	r31.s64 = r12.s64 + -176;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
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

__attribute__((alias("__imp__sub_8307EFBC"))) PPC_WEAK_FUNC(sub_8307EFBC);
PPC_FUNC_IMPL(__imp__sub_8307EFBC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-176
	r31.s64 = r12.s64 + -176;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// lwz r4,212(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 212);
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

__attribute__((alias("__imp__sub_8307EFEC"))) PPC_WEAK_FUNC(sub_8307EFEC);
PPC_FUNC_IMPL(__imp__sub_8307EFEC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-176
	r31.s64 = r12.s64 + -176;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// lwz r4,212(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 212);
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

__attribute__((alias("__imp__sub_8307F01C"))) PPC_WEAK_FUNC(sub_8307F01C);
PPC_FUNC_IMPL(__imp__sub_8307F01C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-176
	r31.s64 = r12.s64 + -176;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// lwz r4,212(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 212);
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

__attribute__((alias("__imp__sub_8307F04C"))) PPC_WEAK_FUNC(sub_8307F04C);
PPC_FUNC_IMPL(__imp__sub_8307F04C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-176
	r31.s64 = r12.s64 + -176;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// lwz r4,212(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 212);
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

__attribute__((alias("__imp__sub_8307F07C"))) PPC_WEAK_FUNC(sub_8307F07C);
PPC_FUNC_IMPL(__imp__sub_8307F07C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-176
	r31.s64 = r12.s64 + -176;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// lwz r4,212(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 212);
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

__attribute__((alias("__imp__sub_8307F0AC"))) PPC_WEAK_FUNC(sub_8307F0AC);
PPC_FUNC_IMPL(__imp__sub_8307F0AC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-176
	r31.s64 = r12.s64 + -176;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// lwz r4,212(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 212);
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

__attribute__((alias("__imp__sub_8307F0E8"))) PPC_WEAK_FUNC(sub_8307F0E8);
PPC_FUNC_IMPL(__imp__sub_8307F0E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x831b0b04
	// addi r31,r1,-240
	r31.s64 = ctx.r1.s64 + -240;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r30,212(r24)
	r30.u64 = PPC_LOAD_U32(r24.u32 + 212);
	// lwz r11,40(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 40);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// lwz r4,76(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// bl 0x83015918
	sub_83015918(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x830159e0
	sub_830159E0(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// li r20,0
	r20.s64 = 0;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307f154
	if (cr0.eq) goto loc_8307F154;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8305a378
	sub_8305A378(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// b 0x8307f158
	goto loc_8307F158;
loc_8307F154:
	// mr r23,r20
	r23.u64 = r20.u64;
loc_8307F158:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307f184
	if (cr0.eq) goto loc_8307F184;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x82ffe210
	sub_82FFE210(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x8307f188
	goto loc_8307F188;
loc_8307F184:
	// mr r11,r20
	r11.u64 = r20.u64;
loc_8307F188:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// stw r11,28(r23)
	PPC_STORE_U32(r23.u32 + 28, r11.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307f1b8
	if (cr0.eq) goto loc_8307F1B8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x82ffe210
	sub_82FFE210(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x8307f1bc
	goto loc_8307F1BC;
loc_8307F1B8:
	// mr r11,r20
	r11.u64 = r20.u64;
loc_8307F1BC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// stw r11,32(r23)
	PPC_STORE_U32(r23.u32 + 32, r11.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307f1ec
	if (cr0.eq) goto loc_8307F1EC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x82ffe210
	sub_82FFE210(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x8307f1f0
	goto loc_8307F1F0;
loc_8307F1EC:
	// mr r11,r20
	r11.u64 = r20.u64;
loc_8307F1F0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// stw r11,36(r23)
	PPC_STORE_U32(r23.u32 + 36, r11.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307f220
	if (cr0.eq) goto loc_8307F220;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x82ffe210
	sub_82FFE210(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x8307f224
	goto loc_8307F224;
loc_8307F220:
	// mr r11,r20
	r11.u64 = r20.u64;
loc_8307F224:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,44
	ctx.r3.s64 = 44;
	// stw r11,24(r23)
	PPC_STORE_U32(r23.u32 + 24, r11.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307f250
	if (cr0.eq) goto loc_8307F250;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x830a1c70
	sub_830A1C70(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8307f254
	goto loc_8307F254;
loc_8307F250:
	// mr r29,r20
	r29.u64 = r20.u64;
loc_8307F254:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,8(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// bl 0x830a1ec0
	sub_830A1EC0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r29,40(r23)
	PPC_STORE_U32(r23.u32 + 40, r29.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307f290
	if (cr0.eq) goto loc_8307F290;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x83072658
	sub_83072658(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8307f294
	goto loc_8307F294;
loc_8307F290:
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
loc_8307F294:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// stw r10,44(r23)
	PPC_STORE_U32(r23.u32 + 44, ctx.r10.u32);
	// addi r28,r11,-8608
	r28.s64 = r11.s64 + -8608;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8306f830
	sub_8306F830(ctx, base);
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r25,r11,-27800
	r25.s64 = r11.s64 + -27800;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r21,r11,-8488
	r21.s64 = r11.s64 + -8488;
	// beq 0x8307f33c
	if (cr0.eq) goto loc_8307F33C;
	// lwz r3,52(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 52);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r8,-1
	ctx.r8.s64 = -1;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// bl 0x8306dbe0
	sub_8306DBE0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// b 0x8307f340
	goto loc_8307F340;
loc_8307F33C:
	// mr r27,r20
	r27.u64 = r20.u64;
loc_8307F340:
	// li r22,1
	r22.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// stw r22,12(r27)
	PPC_STORE_U32(r27.u32 + 12, r22.u32);
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307f38c
	if (cr0.eq) goto loc_8307F38C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83046b58
	sub_83046B58(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// b 0x8307f390
	goto loc_8307F390;
loc_8307F38C:
	// mr r26,r20
	r26.u64 = r20.u64;
loc_8307F390:
	// li r11,3
	r11.s64 = 3;
	// addi r29,r24,60
	r29.s64 = r24.s64 + 60;
	// stb r22,4(r26)
	PPC_STORE_U8(r26.u32 + 4, r22.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,32(r26)
	PPC_STORE_U32(r26.u32 + 32, r11.u32);
	// stw r26,56(r27)
	PPC_STORE_U32(r27.u32 + 56, r26.u32);
	// stw r20,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r20.u32);
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// li r4,67
	ctx.r4.s64 = 67;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r20,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r20.u16);
	// lwz r3,56(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,56(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// lwz r11,36(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,28(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 28);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83054ec8
	sub_83054EC8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x83046380
	sub_83046380(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307f480
	if (cr0.eq) goto loc_8307F480;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// lwz r6,8(r24)
	ctx.r6.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// li r8,6
	ctx.r8.s64 = 6;
	// li r7,11
	ctx.r7.s64 = 11;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x830899f8
	sub_830899F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8307f484
	goto loc_8307F484;
loc_8307F480:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
loc_8307F484:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x830464c8
	sub_830464C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// beq 0x8307f4e8
	if (cr0.eq) goto loc_8307F4E8;
	// lwz r3,52(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 52);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,-8420
	ctx.r5.s64 = r11.s64 + -8420;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,-1
	ctx.r8.s64 = -1;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// bl 0x8306dbe0
	sub_8306DBE0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// b 0x8307f4ec
	goto loc_8307F4EC;
loc_8307F4E8:
	// mr r27,r20
	r27.u64 = r20.u64;
loc_8307F4EC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,76
	ctx.r3.s64 = 76;
	// stw r22,12(r27)
	PPC_STORE_U32(r27.u32 + 12, r22.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307f52c
	if (cr0.eq) goto loc_8307F52C;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// lwz r6,8(r24)
	ctx.r6.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// li r8,6
	ctx.r8.s64 = 6;
	// li r7,11
	ctx.r7.s64 = 11;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x830899f8
	sub_830899F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8307f530
	goto loc_8307F530;
loc_8307F52C:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
loc_8307F530:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8306f7d8
	sub_8306F7D8(ctx, base);
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x83072f80
	sub_83072F80(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// beq 0x8307f5bc
	if (cr0.eq) goto loc_8307F5BC;
	// lwz r3,52(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 52);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,-8296
	ctx.r5.s64 = r11.s64 + -8296;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,-1
	ctx.r8.s64 = -1;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// bl 0x8306dbe0
	sub_8306DBE0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8307f5c0
	goto loc_8307F5C0;
loc_8307F5BC:
	// mr r29,r20
	r29.u64 = r20.u64;
loc_8307F5C0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,76
	ctx.r3.s64 = 76;
	// stw r22,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r22.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307f600
	if (cr0.eq) goto loc_8307F600;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// lwz r6,8(r24)
	ctx.r6.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// li r8,6
	ctx.r8.s64 = 6;
	// li r7,11
	ctx.r7.s64 = 11;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x830899f8
	sub_830899F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8307f604
	goto loc_8307F604;
loc_8307F600:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
loc_8307F604:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8306f7d8
	sub_8306F7D8(ctx, base);
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x83072f80
	sub_83072F80(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307f660
	if (cr0.eq) goto loc_8307F660;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8306f680
	sub_8306F680(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x8307f664
	goto loc_8307F664;
loc_8307F660:
	// mr r28,r20
	r28.u64 = r20.u64;
loc_8307F664:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307f690
	if (cr0.eq) goto loc_8307F690;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8306f680
	sub_8306F680(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8307f694
	goto loc_8307F694;
loc_8307F690:
	// mr r29,r20
	r29.u64 = r20.u64;
loc_8307F694:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307f6e8
	if (cr0.eq) goto loc_8307F6E8;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// li r10,36
	ctx.r10.s64 = 36;
	// stw r20,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r20.u32);
	// addi r11,r11,-5208
	r11.s64 = r11.s64 + -5208;
	// stw r20,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r20.u32);
	// stw r28,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r28.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r29,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r29.u32);
	// stb r22,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, r22.u8);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stb r22,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, r22.u8);
	// stw r22,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r22.u32);
	// stw r22,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r22.u32);
	// b 0x8307f6ec
	goto loc_8307F6EC;
loc_8307F6E8:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
loc_8307F6EC:
	// li r11,-1
	r11.s64 = -1;
	// stw r20,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, r20.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r11,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, r11.u32);
	// bl 0x83046bf8
	sub_83046BF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307f774
	if (cr0.eq) goto loc_8307F774;
	// lwz r4,24(r19)
	ctx.r4.u64 = PPC_LOAD_U32(r19.u32 + 24);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8307f754
	if (cr0.eq) goto loc_8307F754;
	// lhz r11,0(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307f754
	if (cr0.eq) goto loc_8307F754;
	// addi r11,r4,2
	r11.s64 = ctx.r4.s64 + 2;
	// b 0x8307f73c
	goto loc_8307F73C;
loc_8307F738:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
loc_8307F73C:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8307f738
	if (!cr0.eq) goto loc_8307F738;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// b 0x8307f758
	goto loc_8307F758;
loc_8307F754:
	// mr r11,r20
	r11.u64 = r20.u64;
loc_8307F758:
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82fdbd28
	sub_82FDBD28(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8307f778
	goto loc_8307F778;
loc_8307F774:
	// mr r29,r20
	r29.u64 = r20.u64;
loc_8307F778:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-28392
	ctx.r4.s64 = r11.s64 + -28392;
	// lwz r11,24(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,596
	ctx.r3.s64 = 596;
	// stb r20,32(r29)
	PPC_STORE_U8(r29.u32 + 32, r20.u8);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307f7cc
	if (cr0.eq) goto loc_8307F7CC;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r5,52(r24)
	ctx.r5.u64 = PPC_LOAD_U32(r24.u32 + 52);
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// lwz r4,36(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 36);
	// bl 0x830a8c20
	sub_830A8C20(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8307f7d0
	goto loc_8307F7D0;
loc_8307F7CC:
	// mr r30,r20
	r30.u64 = r20.u64;
loc_8307F7D0:
	// lwz r11,48(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 48);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,104(r30)
	PPC_STORE_U32(r30.u32 + 104, r11.u32);
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8307F7EC:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8307f814
	if (!cr6.eq) goto loc_8307F814;
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// mr r11,r20
	r11.u64 = r20.u64;
	// beq cr6,0x8307f818
	if (cr6.eq) goto loc_8307F818;
loc_8307F814:
	// mr r11,r22
	r11.u64 = r22.u64;
loc_8307F818:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8307f88c
	if (cr0.eq) goto loc_8307F88C;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x830159e0
	sub_830159E0(ctx, base);
	// lwz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8307f864
	if (cr0.eq) goto loc_8307F864;
	// lhz r11,0(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307f864
	if (cr0.eq) goto loc_8307F864;
	// addi r11,r4,2
	r11.s64 = ctx.r4.s64 + 2;
	// b 0x8307f84c
	goto loc_8307F84C;
loc_8307F848:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
loc_8307F84C:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8307f848
	if (!cr0.eq) goto loc_8307F848;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// b 0x8307f868
	goto loc_8307F868;
loc_8307F864:
	// mr r11,r20
	r11.u64 = r20.u64;
loc_8307F868:
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fdbe70
	sub_82FDBE70(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x8307f7ec
	goto loc_8307F7EC;
loc_8307F88C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83016120
	sub_83016120(ctx, base);
	// addi r1,r31,240
	ctx.r1.s64 = r31.s64 + 240;
	// b 0x831b0b54
	return;
}

__attribute__((alias("__imp__sub_8307F8CC"))) PPC_WEAK_FUNC(sub_8307F8CC);
PPC_FUNC_IMPL(__imp__sub_8307F8CC) {
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
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83016120
	sub_83016120(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307F8F4"))) PPC_WEAK_FUNC(sub_8307F8F4);
PPC_FUNC_IMPL(__imp__sub_8307F8F4) {
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

__attribute__((alias("__imp__sub_8307F920"))) PPC_WEAK_FUNC(sub_8307F920);
PPC_FUNC_IMPL(__imp__sub_8307F920) {
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

__attribute__((alias("__imp__sub_8307F94C"))) PPC_WEAK_FUNC(sub_8307F94C);
PPC_FUNC_IMPL(__imp__sub_8307F94C) {
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

__attribute__((alias("__imp__sub_8307F978"))) PPC_WEAK_FUNC(sub_8307F978);
PPC_FUNC_IMPL(__imp__sub_8307F978) {
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

__attribute__((alias("__imp__sub_8307F9A4"))) PPC_WEAK_FUNC(sub_8307F9A4);
PPC_FUNC_IMPL(__imp__sub_8307F9A4) {
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

__attribute__((alias("__imp__sub_8307F9D0"))) PPC_WEAK_FUNC(sub_8307F9D0);
PPC_FUNC_IMPL(__imp__sub_8307F9D0) {
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

__attribute__((alias("__imp__sub_8307F9FC"))) PPC_WEAK_FUNC(sub_8307F9FC);
PPC_FUNC_IMPL(__imp__sub_8307F9FC) {
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

__attribute__((alias("__imp__sub_8307FA28"))) PPC_WEAK_FUNC(sub_8307FA28);
PPC_FUNC_IMPL(__imp__sub_8307FA28) {
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

