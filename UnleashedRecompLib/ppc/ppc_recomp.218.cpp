#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8307FA54"))) PPC_WEAK_FUNC(sub_8307FA54);
PPC_FUNC_IMPL(__imp__sub_8307FA54) {
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

__attribute__((alias("__imp__sub_8307FA80"))) PPC_WEAK_FUNC(sub_8307FA80);
PPC_FUNC_IMPL(__imp__sub_8307FA80) {
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

__attribute__((alias("__imp__sub_8307FAAC"))) PPC_WEAK_FUNC(sub_8307FAAC);
PPC_FUNC_IMPL(__imp__sub_8307FAAC) {
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

__attribute__((alias("__imp__sub_8307FAD8"))) PPC_WEAK_FUNC(sub_8307FAD8);
PPC_FUNC_IMPL(__imp__sub_8307FAD8) {
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

__attribute__((alias("__imp__sub_8307FB04"))) PPC_WEAK_FUNC(sub_8307FB04);
PPC_FUNC_IMPL(__imp__sub_8307FB04) {
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

__attribute__((alias("__imp__sub_8307FB30"))) PPC_WEAK_FUNC(sub_8307FB30);
PPC_FUNC_IMPL(__imp__sub_8307FB30) {
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

__attribute__((alias("__imp__sub_8307FB5C"))) PPC_WEAK_FUNC(sub_8307FB5C);
PPC_FUNC_IMPL(__imp__sub_8307FB5C) {
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

__attribute__((alias("__imp__sub_8307FB88"))) PPC_WEAK_FUNC(sub_8307FB88);
PPC_FUNC_IMPL(__imp__sub_8307FB88) {
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

__attribute__((alias("__imp__sub_8307FBB4"))) PPC_WEAK_FUNC(sub_8307FBB4);
PPC_FUNC_IMPL(__imp__sub_8307FBB4) {
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

__attribute__((alias("__imp__sub_8307FBE0"))) PPC_WEAK_FUNC(sub_8307FBE0);
PPC_FUNC_IMPL(__imp__sub_8307FBE0) {
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

__attribute__((alias("__imp__sub_8307FC10"))) PPC_WEAK_FUNC(sub_8307FC10);
PPC_FUNC_IMPL(__imp__sub_8307FC10) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83084fe0
	sub_83084FE0(ctx, base);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307fd3c
	if (cr0.eq) goto loc_8307FD3C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 28);
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
	// beq 0x8307fd3c
	if (cr0.eq) goto loc_8307FD3C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq 0x8307fc70
	if (cr0.eq) goto loc_8307FC70;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8307FC70:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// stw r11,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r11.u32);
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq 0x8307fc94
	if (cr0.eq) goto loc_8307FC94;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8307FC94:
	// lwz r10,148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// li r26,0
	r26.s64 = 0;
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
	// lwz r24,4(r10)
	r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi r24,0
	cr0.compare<uint32_t>(r24.u32, 0, xer);
	// beq 0x8307fd3c
	if (cr0.eq) goto loc_8307FD3C;
loc_8307FCAC:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// bl 0x8308ea58
	sub_8308EA58(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// lwz r25,0(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r28,0
	r28.s64 = 0;
	// beq 0x8307fce0
	if (cr0.eq) goto loc_8307FCE0;
	// lwz r28,0(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8307FCE0:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r29,4(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// bl 0x8308ea58
	sub_8308EA58(ctx, base);
	// lwz r27,0(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8307fd30
	if (cr6.eq) goto loc_8307FD30;
loc_8307FD00:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8308ea58
	sub_8308EA58(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8307df10
	sub_8307DF10(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// blt cr6,0x8307fd00
	if (cr6.lt) goto loc_8307FD00;
loc_8307FD30:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmplw cr6,r26,r24
	cr6.compare<uint32_t>(r26.u32, r24.u32, xer);
	// blt cr6,0x8307fcac
	if (cr6.lt) goto loc_8307FCAC;
loc_8307FD3C:
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lbz r11,26(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 26);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307fd98
	if (cr0.eq) goto loc_8307FD98;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x8307fd84
	if (cr0.eq) goto loc_8307FD84;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
loc_8307FD68:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8307fdac
	if (!cr6.eq) goto loc_8307FDAC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x8307fd68
	if (cr6.lt) goto loc_8307FD68;
loc_8307FD84:
	// li r11,1
	r11.s64 = 1;
loc_8307FD88:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8307fd98
	if (!cr0.eq) goto loc_8307FD98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8307f0e8
	sub_8307F0E8(ctx, base);
loc_8307FD98:
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r10.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
loc_8307FDAC:
	// li r11,0
	r11.s64 = 0;
	// b 0x8307fd88
	goto loc_8307FD88;
}

__attribute__((alias("__imp__sub_8307FDB8"))) PPC_WEAK_FUNC(sub_8307FDB8);
PPC_FUNC_IMPL(__imp__sub_8307FDB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307fe20
	if (cr0.eq) goto loc_8307FE20;
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x8307fe20
	if (cr0.eq) goto loc_8307FE20;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r29,120(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8306ffa8
	sub_8306FFA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// bl 0x8307fc10
	sub_8307FC10(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8306ffa8
	sub_8306FFA8(ctx, base);
loc_8307FE20:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8307FE30"))) PPC_WEAK_FUNC(sub_8307FE30);
PPC_FUNC_IMPL(__imp__sub_8307FE30) {
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
	// addi r31,r1,-256
	r31.s64 = ctx.r1.s64 + -256;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r5,292(r31)
	PPC_STORE_U32(r31.u32 + 292, ctx.r5.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,42
	ctx.r5.s64 = 42;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// lwz r8,160(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r30,276(r31)
	PPC_STORE_U32(r31.u32 + 276, r30.u32);
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
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lbz r11,25(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 25);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307fec4
	if (cr0.eq) goto loc_8307FEC4;
	// lwz r11,220(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8307fec4
	if (!cr6.eq) goto loc_8307FEC4;
	// lwz r5,160(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8307fec4
	if (cr0.eq) goto loc_8307FEC4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830771d8
	sub_830771D8(ctx, base);
	// stw r3,220(r30)
	PPC_STORE_U32(r30.u32 + 220, ctx.r3.u32);
loc_8307FEC4:
	// lwz r29,220(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// li r24,0
	r24.s64 = 0;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// mr r22,r24
	r22.u64 = r24.u64;
	// mr r23,r24
	r23.u64 = r24.u64;
	// li r26,1
	r26.s64 = 1;
	// stb r24,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r24.u8);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// addi r18,r11,-5208
	r18.s64 = r11.s64 + -5208;
	// beq cr6,0x8308019c
	if (cr6.eq) goto loc_8308019C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r20,r11,-28480
	r20.s64 = r11.s64 + -28480;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r17,r11,-8464
	r17.s64 = r11.s64 + -8464;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r16,r11,-7752
	r16.s64 = r11.s64 + -7752;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r15,r11,-8352
	r15.s64 = r11.s64 + -8352;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r19,r11,-28032
	r19.s64 = r11.s64 + -28032;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r14,r11,-8152
	r14.s64 = r11.s64 + -8152;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r21,r11,-8248
	r21.s64 = r11.s64 + -8248;
loc_8307FF28:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r27,r24
	r27.u64 = r24.u64;
	// mr r28,r24
	r28.u64 = r24.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8307ffa8
	if (cr0.eq) goto loc_8307FFA8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83084868
	sub_83084868(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x83080188
	if (cr0.eq) goto loc_83080188;
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8307ff98
	if (cr0.eq) goto loc_8307FF98;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,216(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x8306f680
	sub_8306F680(ctx, base);
	// b 0x8307ff9c
	goto loc_8307FF9C;
loc_8307FF98:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_8307FF9C:
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r26
	r28.u64 = r26.u64;
	// b 0x830800ec
	goto loc_830800EC;
loc_8307FFA8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83080058
	if (cr0.eq) goto loc_83080058;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8307d278
	sub_8307D278(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83080188
	if (cr0.eq) goto loc_83080188;
	// lwz r29,20(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x83080188
	if (cr0.eq) goto loc_83080188;
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8307fff4
	if (!cr6.eq) goto loc_8307FFF4;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
loc_8307FFF4:
	// addi r11,r11,-9
	r11.s64 = r11.s64 + -9;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83080024
	if (cr0.eq) goto loc_83080024;
	// li r6,118
	ctx.r6.s64 = 118;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
	// b 0x83080188
	goto loc_83080188;
loc_83080024:
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83080048
	if (cr0.eq) goto loc_83080048;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8308a8e8
	sub_8308A8E8(ctx, base);
	// b 0x8308004c
	goto loc_8308004C;
loc_83080048:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_8308004C:
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r26
	r28.u64 = r26.u64;
	// b 0x830800ec
	goto loc_830800EC;
loc_83080058:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8308007c
	if (cr0.eq) goto loc_8308007C;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8308009c
	goto loc_8308009C;
loc_8308007C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830800a4
	if (cr0.eq) goto loc_830800A4;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8308009C:
	// bl 0x8307fe30
	sub_8307FE30(ctx, base);
	// b 0x830800c4
	goto loc_830800C4;
loc_830800A4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq 0x830800d0
	if (cr0.eq) goto loc_830800D0;
	// bl 0x83078aa8
	sub_83078AA8(ctx, base);
loc_830800C4:
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r26
	r28.u64 = r26.u64;
	// b 0x830800ec
	goto loc_830800EC;
loc_830800D0:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r6,39
	ctx.r6.s64 = 39;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
loc_830800EC:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x830800f8
	if (cr6.eq) goto loc_830800F8;
	// stb r26,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r26.u8);
loc_830800F8:
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83080114
	if (cr0.eq) goto loc_83080114;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83071cd8
	sub_83071CD8(ctx, base);
loc_83080114:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// bne cr6,0x83080124
	if (!cr6.eq) goto loc_83080124;
	// mr r22,r27
	r22.u64 = r27.u64;
	// b 0x83080188
	goto loc_83080188;
loc_83080124:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x83080184
	if (cr6.eq) goto loc_83080184;
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8308017c
	if (cr0.eq) goto loc_8308017C;
	// lwz r10,292(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// lwz r11,216(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// stw r24,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r24.u32);
	// stw r18,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r18.u32);
	// stw r24,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r24.u32);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r22,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r22.u32);
	// stw r23,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r23.u32);
	// stb r26,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, r26.u8);
	// stb r26,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, r26.u8);
	// stw r26,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r26.u32);
	// stw r26,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r26.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x83080180
	goto loc_83080180;
loc_8308017C:
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
loc_83080180:
	// mr r22,r10
	r22.u64 = ctx.r10.u64;
loc_83080184:
	// mr r23,r27
	r23.u64 = r27.u64;
loc_83080188:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x830a7430
	sub_830A7430(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// bne 0x8307ff28
	if (!cr0.eq) goto loc_8307FF28;
	// lwz r29,84(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 84);
loc_8308019C:
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8308022c
	if (cr0.eq) goto loc_8308022C;
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83080208
	if (cr0.eq) goto loc_83080208;
	// lwz r11,292(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// li r10,36
	ctx.r10.s64 = 36;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x830801d0
	if (cr6.eq) goto loc_830801D0;
	// li r10,21
	ctx.r10.s64 = 21;
loc_830801D0:
	// lwz r11,216(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r24,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r24.u32);
	// stw r18,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r18.u32);
	// stw r24,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r24.u32);
	// stw r22,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r22.u32);
	// stw r23,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r23.u32);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stb r26,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, r26.u8);
	// stb r26,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, r26.u8);
	// stw r26,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r26.u32);
	// stw r26,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r26.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x8308020c
	goto loc_8308020C;
loc_83080208:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
loc_8308020C:
	// cntlzw r11,r29
	r11.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8308022c
	if (!cr0.eq) goto loc_8308022C;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// stw r24,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r24.u32);
	// bl 0x8305a0d0
	sub_8305A0D0(ctx, base);
loc_8308022C:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// addi r1,r31,256
	ctx.r1.s64 = r31.s64 + 256;
	// b 0x831b0b40
	return;
}

__attribute__((alias("__imp__sub_83080244"))) PPC_WEAK_FUNC(sub_83080244);
PPC_FUNC_IMPL(__imp__sub_83080244) {
	PPC_FUNC_PROLOGUE();
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

__attribute__((alias("__imp__sub_8308026C"))) PPC_WEAK_FUNC(sub_8308026C);
PPC_FUNC_IMPL(__imp__sub_8308026C) {
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

__attribute__((alias("__imp__sub_8308029C"))) PPC_WEAK_FUNC(sub_8308029C);
PPC_FUNC_IMPL(__imp__sub_8308029C) {
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

__attribute__((alias("__imp__sub_830802D8"))) PPC_WEAK_FUNC(sub_830802D8);
PPC_FUNC_IMPL(__imp__sub_830802D8) {
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
	PPCRegister temp{};
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
	// lis r11,-32236
	r11.s64 = -2112618496;
	// stw r5,308(r31)
	PPC_STORE_U32(r31.u32 + 308, ctx.r5.u32);
	// mr r14,r6
	r14.u64 = ctx.r6.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r16,r11,-7200
	r16.s64 = r11.s64 + -7200;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// stb r14,319(r31)
	PPC_STORE_U8(r31.u32 + 319, r14.u8);
	// stw r30,292(r31)
	PPC_STORE_U32(r31.u32 + 292, r30.u32);
	// stw r29,300(r31)
	PPC_STORE_U32(r31.u32 + 300, r29.u32);
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// addi r23,r11,-7108
	r23.s64 = r11.s64 + -7108;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r17,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r17.u32);
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(r17.u32, 0, xer);
	// beq cr6,0x83080360
	if (cr6.eq) goto loc_83080360;
	// lhz r11,0(r17)
	r11.u64 = PPC_LOAD_U16(r17.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// bne 0x83080364
	if (!cr0.eq) goto loc_83080364;
loc_83080360:
	// li r11,1
	r11.s64 = 1;
loc_83080364:
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x83080380
	if (cr6.eq) goto loc_83080380;
	// lhz r11,0(r21)
	r11.u64 = PPC_LOAD_U16(r21.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// bne 0x83080384
	if (!cr0.eq) goto loc_83080384;
loc_83080380:
	// li r11,1
	r11.s64 = 1;
loc_83080384:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// clrlwi r22,r11,24
	r22.u64 = r11.u32 & 0xFF;
	// beq 0x830803b4
	if (cr0.eq) goto loc_830803B4;
	// clrlwi. r11,r22,24
	r11.u64 = r22.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830803b4
	if (cr0.eq) goto loc_830803B4;
	// li r6,13
	ctx.r6.s64 = 13;
loc_8308039C:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
	// b 0x83080e40
	goto loc_83080E40;
loc_830803B4:
	// clrlwi. r20,r14,24
	r20.u64 = r14.u32 & 0xFF;
	cr0.compare<int32_t>(r20.s32, 0, xer);
	// beq 0x830803cc
	if (cr0.eq) goto loc_830803CC;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830803cc
	if (cr6.eq) goto loc_830803CC;
	// li r6,12
	ctx.r6.s64 = 12;
	// b 0x8308039c
	goto loc_8308039C;
loc_830803CC:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// beq cr6,0x830803dc
	if (cr6.eq) goto loc_830803DC;
	// li r11,5
	r11.s64 = 5;
	// b 0x830803ec
	goto loc_830803EC;
loc_830803DC:
	// clrlwi r11,r22,24
	r11.u64 = r22.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r11,r11,6
	r11.s64 = r11.s64 + 6;
loc_830803EC:
	// clrlwi r5,r11,16
	ctx.r5.u64 = r11.u32 & 0xFFFF;
	// lwz r8,160(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// mr r7,r14
	ctx.r7.u64 = r14.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x830a7f60
	sub_830A7F60(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-7404
	ctx.r5.s64 = r11.s64 + -7404;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// stw r3,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-7272
	ctx.r5.s64 = r11.s64 + -7272;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-6964
	ctx.r5.s64 = r11.s64 + -6964;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r15,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r15.u32);
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// addi r5,r11,-7260
	ctx.r5.s64 = r11.s64 + -7260;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r5,r11,-6976
	ctx.r5.s64 = r11.s64 + -6976;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
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
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// li r28,0
	r28.s64 = 0;
	// beq 0x83080520
	if (cr0.eq) goto loc_83080520;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r27,r11,-7732
	r27.s64 = r11.s64 + -7732;
loc_830804D0:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bne 0x83080510
	if (!cr0.eq) goto loc_83080510;
	// li r28,1
	r28.s64 = 1;
	// bl 0x830a7430
	sub_830A7430(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// bne 0x830804d0
	if (!cr0.eq) goto loc_830804D0;
	// b 0x83080520
	goto loc_83080520;
loc_83080510:
	// bl 0x830a7430
	sub_830A7430(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83080520
	if (cr0.eq) goto loc_83080520;
	// li r28,1
	r28.s64 = 1;
loc_83080520:
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83080570
	if (cr0.eq) goto loc_83080570;
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(r17.u32, 0, xer);
	// mr r8,r17
	ctx.r8.u64 = r17.u64;
	// bne cr6,0x8308053c
	if (!cr6.eq) goto loc_8308053C;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// beq cr6,0x83080544
	if (cr6.eq) goto loc_83080544;
loc_8308053C:
	// mr r7,r16
	ctx.r7.u64 = r16.u64;
	// b 0x83080548
	goto loc_83080548;
loc_83080544:
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
loc_83080548:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r19,r11,-28032
	r19.s64 = r11.s64 + -28032;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r6,93
	ctx.r6.s64 = 93;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// b 0x83080578
	goto loc_83080578;
loc_83080570:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r19,r11,-28032
	r19.s64 = r11.s64 + -28032;
loc_83080578:
	// lwz r28,108(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x830805ec
	if (cr6.eq) goto loc_830805EC;
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(r15.u32, 0, xer);
	// beq cr6,0x830805a8
	if (cr6.eq) goto loc_830805A8;
	// li r15,0
	r15.s64 = 0;
	// li r6,49
	ctx.r6.s64 = 49;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r15,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r15.u32);
	// bl 0x830702a0
	sub_830702A0(ctx, base);
loc_830805A8:
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(r18.u32, 0, xer);
	// beq cr6,0x830805ec
	if (cr6.eq) goto loc_830805EC;
	// lhz r11,0(r18)
	r11.u64 = PPC_LOAD_U16(r18.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830805ec
	if (cr0.eq) goto loc_830805EC;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// addi r4,r11,-6592
	ctx.r4.s64 = r11.s64 + -6592;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830805ec
	if (!cr0.eq) goto loc_830805EC;
	// li r6,50
	ctx.r6.s64 = 50;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r18,0
	r18.s64 = 0;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
loc_830805EC:
	// clrlwi. r11,r22,24
	r11.u64 = r22.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8308064c
	if (!cr0.eq) goto loc_8308064C;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// bne cr6,0x8308064c
	if (!cr6.eq) goto loc_8308064C;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// bne cr6,0x83080614
	if (!cr6.eq) goto loc_83080614;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// bne cr6,0x83080614
	if (!cr6.eq) goto loc_83080614;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x83080628
	if (cr6.eq) goto loc_83080628;
loc_83080614:
	// li r6,83
	ctx.r6.s64 = 83;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
loc_83080628:
	// mr r9,r15
	ctx.r9.u64 = r15.u64;
	// lwz r5,308(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 308);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83074260
	sub_83074260(ctx, base);
	// b 0x83080e34
	goto loc_83080E34;
loc_8308064C:
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// lbz r11,25(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 25);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83080694
	if (cr0.eq) goto loc_83080694;
	// lwz r11,220(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83080694
	if (!cr6.eq) goto loc_83080694;
	// lwz r5,160(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83080694
	if (cr0.eq) goto loc_83080694;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830771d8
	sub_830771D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// stw r4,220(r30)
	PPC_STORE_U32(r30.u32 + 220, ctx.r4.u32);
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
loc_83080694:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82fd97d8
	sub_82FD97D8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83080e0c
	if (cr0.eq) goto loc_83080E0C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// addi r4,r11,-28120
	ctx.r4.s64 = r11.s64 + -28120;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83080e0c
	if (!cr0.eq) goto loc_83080E0C;
	// lwz r22,8(r30)
	r22.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r28,28(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// stw r22,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r22.u32);
	// beq 0x83080728
	if (cr0.eq) goto loc_83080728;
	// lhz r11,0(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83080728
	if (cr0.eq) goto loc_83080728;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// bne cr6,0x83080720
	if (!cr6.eq) goto loc_83080720;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r4,r11,-6536
	ctx.r4.s64 = r11.s64 + -6536;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83080720
	if (!cr0.eq) goto loc_83080720;
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lhz r11,2(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83080728
	if (cr0.eq) goto loc_83080728;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x83080720
	if (cr6.eq) goto loc_83080720;
	// lhz r11,0(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83080728
	if (!cr0.eq) goto loc_83080728;
loc_83080720:
	// lwz r22,4(r30)
	r22.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r22,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r22.u32);
loc_83080728:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-8744
	ctx.r4.s64 = r11.s64 + -8744;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83080768
	if (cr0.eq) goto loc_83080768;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// li r6,167
	ctx.r6.s64 = 167;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// b 0x83080e34
	goto loc_83080E34;
loc_83080768:
	// lwz r11,308(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 308);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830807cc
	if (cr6.eq) goto loc_830807CC;
	// lwz r3,76(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830807cc
	if (cr0.eq) goto loc_830807CC;
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x82fea480
	sub_82FEA480(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830807cc
	if (cr0.eq) goto loc_830807CC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830807cc
	if (cr0.eq) goto loc_830807CC;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// li r6,53
	ctx.r6.s64 = 53;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// b 0x83080e34
	goto loc_83080E34;
loc_830807CC:
	// lwz r3,128(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 128);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83080814
	if (cr0.eq) goto loc_83080814;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x8309df28
	sub_8309DF28(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83080814
	if (cr0.eq) goto loc_83080814;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// li r6,53
	ctx.r6.s64 = 53;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// b 0x83080e34
	goto loc_83080E34;
loc_83080814:
	// li r28,10
	r28.s64 = 10;
	// lwz r23,120(r30)
	r23.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// stw r28,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r28.u32);
	// beq cr6,0x83080868
	if (cr6.eq) goto loc_83080868;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x83080850
	if (cr6.eq) goto loc_83080850;
	// lhz r11,0(r24)
	r11.u64 = PPC_LOAD_U16(r24.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83080850
	if (cr0.eq) goto loc_83080850;
	// li r6,54
	ctx.r6.s64 = 54;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
loc_83080850:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8307ce28
	sub_8307CE28(ctx, base);
	// b 0x83080a9c
	goto loc_83080A9C;
loc_83080868:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x83080a8c
	if (cr6.eq) goto loc_83080A8C;
	// lhz r11,0(r24)
	r11.u64 = PPC_LOAD_U16(r24.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83080a8c
	if (cr0.eq) goto loc_83080A8C;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83072030
	sub_83072030(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306f940
	sub_8306F940(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306f898
	sub_8306F898(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830714b0
	sub_830714B0(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r26,r11,-8608
	r26.s64 = r11.s64 + -8608;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830808f0
	if (cr0.eq) goto loc_830808F0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// bl 0x82feec20
	sub_82FEEC20(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r24,r28
	r24.u64 = r28.u64;
	// b 0x8308093c
	goto loc_8308093C;
loc_830808F0:
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8307e5c8
	sub_8307E5C8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// mr r24,r28
	r24.u64 = r28.u64;
	// beq 0x83080a4c
	if (cr0.eq) goto loc_83080A4C;
loc_83080910:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,52(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 52);
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83080930
	if (!cr0.eq) goto loc_83080930;
	// lwz r28,28(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// bne 0x83080910
	if (!cr0.eq) goto loc_83080910;
loc_83080930:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x83080a4c
	if (cr6.eq) goto loc_83080A4C;
	// lwz r27,48(r28)
	r27.u64 = PPC_LOAD_U32(r28.u32 + 48);
loc_8308093C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x83080a4c
	if (cr6.eq) goto loc_83080A4C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,-29484
	ctx.r4.s64 = r11.s64 + -29484;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83080964
	if (cr0.eq) goto loc_83080964;
	// li r28,1
	r28.s64 = 1;
	// b 0x83080a50
	goto loc_83080A50;
loc_83080964:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,-29476
	ctx.r4.s64 = r11.s64 + -29476;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83080984
	if (cr0.eq) goto loc_83080984;
	// li r28,2
	r28.s64 = 2;
	// b 0x83080a50
	goto loc_83080A50;
loc_83080984:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,-29464
	ctx.r4.s64 = r11.s64 + -29464;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830809a4
	if (cr0.eq) goto loc_830809A4;
	// li r28,3
	r28.s64 = 3;
	// b 0x83080a50
	goto loc_83080A50;
loc_830809A4:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,-29812
	ctx.r4.s64 = r11.s64 + -29812;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830809c4
	if (cr0.eq) goto loc_830809C4;
	// li r28,4
	r28.s64 = 4;
	// b 0x83080a50
	goto loc_83080A50;
loc_830809C4:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,-29796
	ctx.r4.s64 = r11.s64 + -29796;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830809e4
	if (cr0.eq) goto loc_830809E4;
	// li r28,5
	r28.s64 = 5;
	// b 0x83080a50
	goto loc_83080A50;
loc_830809E4:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,-29120
	ctx.r4.s64 = r11.s64 + -29120;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83080a04
	if (cr0.eq) goto loc_83080A04;
	// li r28,6
	r28.s64 = 6;
	// b 0x83080a50
	goto loc_83080A50;
loc_83080A04:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,-29104
	ctx.r4.s64 = r11.s64 + -29104;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83080a24
	if (cr0.eq) goto loc_83080A24;
	// li r28,7
	r28.s64 = 7;
	// b 0x83080a50
	goto loc_83080A50;
loc_83080A24:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,-29152
	ctx.r4.s64 = r11.s64 + -29152;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r28,r11,10
	r28.s64 = r11.s64 + 10;
	// b 0x83080a50
	goto loc_83080A50;
loc_83080A4C:
	// li r28,10
	r28.s64 = 10;
loc_83080A50:
	// mr r26,r24
	r26.u64 = r24.u64;
	// stw r28,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r28.u32);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// stw r26,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r26.u32);
	// bne cr6,0x83080aa4
	if (!cr6.eq) goto loc_83080AA4;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r17
	ctx.r9.u64 = r17.u64;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,55
	ctx.r6.s64 = 55;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// b 0x83080aa4
	goto loc_83080AA4;
loc_83080A8C:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// addi r4,r11,-5436
	ctx.r4.s64 = r11.s64 + -5436;
	// bl 0x82feec20
	sub_82FEEC20(ctx, base);
loc_83080A9C:
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r26,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r26.u32);
loc_83080AA4:
	// li r21,0
	r21.s64 = 0;
	// stw r23,120(r30)
	PPC_STORE_U32(r30.u32 + 120, r23.u32);
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(r18.u32, 0, xer);
	// stb r21,81(r31)
	PPC_STORE_U8(r31.u32 + 81, r21.u8);
	// stb r21,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r21.u8);
	// beq cr6,0x83080b0c
	if (cr6.eq) goto loc_83080B0C;
	// lhz r11,0(r18)
	r11.u64 = PPC_LOAD_U16(r18.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83080b0c
	if (cr0.eq) goto loc_83080B0C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// addi r4,r11,-6516
	ctx.r4.s64 = r11.s64 + -6516;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83080aec
	if (cr0.eq) goto loc_83080AEC;
	// li r11,1
	r11.s64 = 1;
	// stb r11,81(r31)
	PPC_STORE_U8(r31.u32 + 81, r11.u8);
	// b 0x83080b0c
	goto loc_83080B0C;
loc_83080AEC:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// addi r4,r11,-6572
	ctx.r4.s64 = r11.s64 + -6572;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83080b0c
	if (cr0.eq) goto loc_83080B0C;
	// li r11,1
	r11.s64 = 1;
	// stb r11,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r11.u8);
loc_83080B0C:
	// lwz r25,108(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// bne cr6,0x83080b1c
	if (!cr6.eq) goto loc_83080B1C;
	// mr r25,r15
	r25.u64 = r15.u64;
loc_83080B1C:
	// stw r25,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r25.u32);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x83080b38
	if (cr6.eq) goto loc_83080B38;
	// lwz r11,24(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// cmpwi cr6,r11,20
	cr6.compare<int32_t>(r11.s32, 20, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x83080b3c
	if (cr6.eq) goto loc_83080B3C;
loc_83080B38:
	// mr r11,r21
	r11.u64 = r21.u64;
loc_83080B3C:
	// stb r11,82(r31)
	PPC_STORE_U8(r31.u32 + 82, r11.u8);
	// cmpwi cr6,r28,10
	cr6.compare<int32_t>(r28.s32, 10, xer);
	// bne cr6,0x83080bc4
	if (!cr6.eq) goto loc_83080BC4;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x83080bc4
	if (cr6.eq) goto loc_83080BC4;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x83080bc4
	if (cr6.eq) goto loc_83080BC4;
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
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
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x83080bc4
	goto loc_83080BC4;
	// b 0x83080b90
	goto loc_83080B90;
loc_83080B90:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r25,96(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// lwz r26,92(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// li r21,0
	r21.s64 = 0;
	// addi r19,r11,-28032
	r19.s64 = r11.s64 + -28032;
	// lwz r22,104(r31)
	r22.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r15,100(r31)
	r15.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r17,112(r31)
	r17.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// lwz r29,300(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 300);
	// addi r16,r11,-7200
	r16.s64 = r11.s64 + -7200;
	// lbz r14,319(r31)
	r14.u64 = PPC_LOAD_U8(r31.u32 + 319);
	// lwz r30,292(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 292);
loc_83080BC4:
	// lbz r28,82(r31)
	r28.u64 = PPC_LOAD_U8(r31.u32 + 82);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// beq 0x83080bfc
	if (cr0.eq) goto loc_83080BFC;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x83080bfc
	if (cr6.eq) goto loc_83080BFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r17
	ctx.r8.u64 = r17.u64;
	// mr r7,r16
	ctx.r7.u64 = r16.u64;
	// li r6,152
	ctx.r6.s64 = 152;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
loc_83080BFC:
	// clrlwi. r27,r14,24
	r27.u64 = r14.u32 & 0xFF;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// bne 0x83080c9c
	if (!cr0.eq) goto loc_83080C9C;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x83080c9c
	if (cr6.eq) goto loc_83080C9C;
	// lwz r11,128(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 128);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83080c58
	if (cr0.eq) goto loc_83080C58;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x83080c4c
	if (cr0.eq) goto loc_83080C4C;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// li r6,154
	ctx.r6.s64 = 154;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// b 0x83080e34
	goto loc_83080E34;
loc_83080C4C:
	// li r24,1
	r24.s64 = 1;
	// stb r24,4(r11)
	PPC_STORE_U8(r11.u32 + 4, r24.u8);
	// b 0x83080ca0
	goto loc_83080CA0;
loc_83080C58:
	// lwz r28,308(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 308);
	// lbz r11,7(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 7);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83080c90
	if (cr0.eq) goto loc_83080C90;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// li r6,153
	ctx.r6.s64 = 153;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// b 0x83080e34
	goto loc_83080E34;
loc_83080C90:
	// li r24,1
	r24.s64 = 1;
	// stb r24,7(r28)
	PPC_STORE_U8(r28.u32 + 7, r24.u8);
	// b 0x83080ca4
	goto loc_83080CA4;
loc_83080C9C:
	// li r24,1
	r24.s64 = 1;
loc_83080CA0:
	// lwz r28,308(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 308);
loc_83080CA4:
	// li r3,76
	ctx.r3.s64 = 76;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83080ce4
	if (cr0.eq) goto loc_83080CE4;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r9,216(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r7,88(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// addi r4,r11,-27800
	ctx.r4.s64 = r11.s64 + -27800;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// bl 0x830899f8
	sub_830899F8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x83080ce8
	goto loc_83080CE8;
loc_83080CE4:
	// mr r29,r21
	r29.u64 = r21.u64;
loc_83080CE8:
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// stw r26,44(r29)
	PPC_STORE_U32(r29.u32 + 44, r26.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83080d00
	if (cr0.eq) goto loc_83080D00;
	// li r11,8
	r11.s64 = 8;
	// b 0x83080d1c
	goto loc_83080D1C;
loc_83080D00:
	// lbz r11,81(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 81);
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(r15.u32, 0, xer);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83080d24
	if (cr0.eq) goto loc_83080D24;
	// li r11,3
	r11.s64 = 3;
	// bne cr6,0x83080d1c
	if (!cr6.eq) goto loc_83080D1C;
	// li r11,2
	r11.s64 = 2;
loc_83080D1C:
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// b 0x83080d40
	goto loc_83080D40;
loc_83080D24:
	// beq cr6,0x83080d30
	if (cr6.eq) goto loc_83080D30;
	// stw r24,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r24.u32);
	// b 0x83080d40
	goto loc_83080D40;
loc_83080D30:
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83080d40
	if (cr6.eq) goto loc_83080D40;
	// stw r21,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r21.u32);
loc_83080D40:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x83080d54
	if (cr6.eq) goto loc_83080D54;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83066280
	sub_83066280(ctx, base);
loc_83080D54:
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cntlzw r11,r5
	r11.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83080d74
	if (!cr0.eq) goto loc_83080D74;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// stw r21,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r21.u32);
	// bl 0x8305a0d0
	sub_8305A0D0(ctx, base);
loc_83080D74:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x83080dc0
	if (cr6.eq) goto loc_83080DC0;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
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
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// bl 0x83054ec8
	sub_83054EC8(ctx, base);
	// stw r24,68(r29)
	PPC_STORE_U32(r29.u32 + 68, r24.u32);
	// b 0x83080e08
	goto loc_83080E08;
loc_83080DC0:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x83080de8
	if (cr6.eq) goto loc_83080DE8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83048620
	sub_83048620(ctx, base);
	// lwz r11,128(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83080de8
	if (!cr6.eq) goto loc_83080DE8;
	// li r11,2
	r11.s64 = 2;
	// stw r11,68(r29)
	PPC_STORE_U32(r29.u32 + 68, r11.u32);
loc_83080DE8:
	// lwz r3,128(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 128);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83080e08
	if (cr0.eq) goto loc_83080E08;
	// cntlzw r11,r28
	r11.u64 = r28.u32 == 0 ? 32 : __builtin_clz(r28.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r5,r11,1
	ctx.r5.u64 = r11.u64 ^ 1;
	// bl 0x83073758
	sub_83073758(ctx, base);
loc_83080E08:
	// b 0x83080e34
	goto loc_83080E34;
loc_83080E0C:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r11,-8404
	ctx.r7.s64 = r11.s64 + -8404;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r17
	ctx.r8.u64 = r17.u64;
	// li r6,59
	ctx.r6.s64 = 59;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
loc_83080E34:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
loc_83080E40:
	// addi r1,r31,272
	ctx.r1.s64 = r31.s64 + 272;
	// b 0x831b0b40
	return;
}

__attribute__((alias("__imp__sub_83080E50"))) PPC_WEAK_FUNC(sub_83080E50);
PPC_FUNC_IMPL(__imp__sub_83080E50) {
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
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
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
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31992
	ctx.r3.s64 = -2096627712;
	// addi r3,r3,2956
	ctx.r3.s64 = ctx.r3.s64 + 2956;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b40
	return;
}

__attribute__((alias("__imp__sub_83080EAC"))) PPC_WEAK_FUNC(sub_83080EAC);
PPC_FUNC_IMPL(__imp__sub_83080EAC) {
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

__attribute__((alias("__imp__sub_83080ECC"))) PPC_WEAK_FUNC(sub_83080ECC);
PPC_FUNC_IMPL(__imp__sub_83080ECC) {
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
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31992
	ctx.r3.s64 = -2096627712;
	// addi r3,r3,2960
	ctx.r3.s64 = ctx.r3.s64 + 2960;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b40
	return;
}

__attribute__((alias("__imp__sub_83080F1C"))) PPC_WEAK_FUNC(sub_83080F1C);
PPC_FUNC_IMPL(__imp__sub_83080F1C) {
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

__attribute__((alias("__imp__sub_83080F44"))) PPC_WEAK_FUNC(sub_83080F44);
PPC_FUNC_IMPL(__imp__sub_83080F44) {
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
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
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

__attribute__((alias("__imp__sub_83080F78"))) PPC_WEAK_FUNC(sub_83080F78);
PPC_FUNC_IMPL(__imp__sub_83080F78) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r30,188(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x83080fac
	if (cr0.eq) goto loc_83080FAC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8307cc88
	sub_8307CC88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_83080FAC:
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83080fc0
	if (cr0.eq) goto loc_83080FC0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82fdeaa8
	sub_82FDEAA8(ctx, base);
loc_83080FC0:
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83080fd4
	if (cr0.eq) goto loc_83080FD4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82fdeaa8
	sub_82FDEAA8(ctx, base);
loc_83080FD4:
	// li r30,0
	r30.s64 = 0;
loc_83080FD8:
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83080ff0
	if (cr0.eq) goto loc_83080FF0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82fdeaa8
	sub_82FDEAA8(ctx, base);
loc_83080FF0:
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(r30.u32, 24, xer);
	// blt cr6,0x83080fd8
	if (cr6.lt) goto loc_83080FD8;
	// lwz r3,212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// lwz r4,156(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83081028
	if (cr0.eq) goto loc_83081028;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82fdeaa8
	sub_82FDEAA8(ctx, base);
loc_83081028:
	// lwz r30,172(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x83081044
	if (cr0.eq) goto loc_83081044;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8307cbb8
	sub_8307CBB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_83081044:
	// lwz r30,176(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x83081060
	if (cr0.eq) goto loc_83081060;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8307cbb8
	sub_8307CBB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_83081060:
	// lwz r30,180(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x8308107c
	if (cr0.eq) goto loc_8308107C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8307cc20
	sub_8307CC20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_8308107C:
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83081090
	if (cr0.eq) goto loc_83081090;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82fdeaa8
	sub_82FDEAA8(ctx, base);
loc_83081090:
	// lwz r30,112(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x830810ac
	if (cr0.eq) goto loc_830810AC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83077878
	sub_83077878(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_830810AC:
	// lwz r30,168(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x830810c8
	if (cr0.eq) goto loc_830810C8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83077878
	sub_83077878(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_830810C8:
	// lwz r30,164(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x830810e4
	if (cr0.eq) goto loc_830810E4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83077878
	sub_83077878(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_830810E4:
	// lwz r30,116(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x83081100
	if (cr0.eq) goto loc_83081100;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83072b10
	sub_83072B10(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_83081100:
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 208);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83081120
	if (cr0.eq) goto loc_83081120;
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
loc_83081120:
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83081140
	if (cr0.eq) goto loc_83081140;
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
loc_83081140:
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

__attribute__((alias("__imp__sub_83081160"))) PPC_WEAK_FUNC(sub_83081160);
PPC_FUNC_IMPL(__imp__sub_83081160) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r28,252(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 252);
	// li r11,-1
	r11.s64 = -1;
	// li r29,0
	r29.s64 = 0;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// li r4,1023
	ctx.r4.s64 = 1023;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// addi r3,r30,60
	ctx.r3.s64 = r30.s64 + 60;
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// lwz r11,244(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// stb r29,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r29.u8);
	// stw r29,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r29.u32);
	// stw r29,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r29.u32);
	// stw r29,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r29.u32);
	// stw r29,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r29.u32);
	// stw r29,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r29.u32);
	// stw r6,40(r30)
	PPC_STORE_U32(r30.u32 + 40, ctx.r6.u32);
	// stw r10,44(r30)
	PPC_STORE_U32(r30.u32 + 44, ctx.r10.u32);
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
	// stw r29,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r29.u32);
	// stw r7,36(r30)
	PPC_STORE_U32(r30.u32 + 36, ctx.r7.u32);
	// stw r27,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r27.u32);
	// bl 0x82fe7278
	sub_82FE7278(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,196
	ctx.r3.s64 = r30.s64 + 196;
	// stw r26,88(r30)
	PPC_STORE_U32(r30.u32 + 88, r26.u32);
	// stw r29,92(r30)
	PPC_STORE_U32(r30.u32 + 92, r29.u32);
	// stw r29,96(r30)
	PPC_STORE_U32(r30.u32 + 96, r29.u32);
	// stw r29,100(r30)
	PPC_STORE_U32(r30.u32 + 100, r29.u32);
	// stw r29,104(r30)
	PPC_STORE_U32(r30.u32 + 104, r29.u32);
	// stw r29,108(r30)
	PPC_STORE_U32(r30.u32 + 108, r29.u32);
	// stw r29,112(r30)
	PPC_STORE_U32(r30.u32 + 112, r29.u32);
	// stw r29,116(r30)
	PPC_STORE_U32(r30.u32 + 116, r29.u32);
	// stw r29,120(r30)
	PPC_STORE_U32(r30.u32 + 120, r29.u32);
	// stw r29,124(r30)
	PPC_STORE_U32(r30.u32 + 124, r29.u32);
	// stw r29,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r29.u32);
	// stw r29,132(r30)
	PPC_STORE_U32(r30.u32 + 132, r29.u32);
	// stw r29,136(r30)
	PPC_STORE_U32(r30.u32 + 136, r29.u32);
	// stw r29,140(r30)
	PPC_STORE_U32(r30.u32 + 140, r29.u32);
	// stw r29,144(r30)
	PPC_STORE_U32(r30.u32 + 144, r29.u32);
	// stw r29,148(r30)
	PPC_STORE_U32(r30.u32 + 148, r29.u32);
	// stw r29,152(r30)
	PPC_STORE_U32(r30.u32 + 152, r29.u32);
	// stw r29,156(r30)
	PPC_STORE_U32(r30.u32 + 156, r29.u32);
	// stw r29,160(r30)
	PPC_STORE_U32(r30.u32 + 160, r29.u32);
	// stw r29,164(r30)
	PPC_STORE_U32(r30.u32 + 164, r29.u32);
	// stw r29,168(r30)
	PPC_STORE_U32(r30.u32 + 168, r29.u32);
	// stw r29,172(r30)
	PPC_STORE_U32(r30.u32 + 172, r29.u32);
	// stw r29,176(r30)
	PPC_STORE_U32(r30.u32 + 176, r29.u32);
	// stw r29,180(r30)
	PPC_STORE_U32(r30.u32 + 180, r29.u32);
	// stw r29,184(r30)
	PPC_STORE_U32(r30.u32 + 184, r29.u32);
	// stw r29,188(r30)
	PPC_STORE_U32(r30.u32 + 188, r29.u32);
	// stw r29,192(r30)
	PPC_STORE_U32(r30.u32 + 192, r29.u32);
	// bl 0x830a5ea8
	sub_830A5EA8(ctx, base);
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// stw r29,208(r30)
	PPC_STORE_U32(r30.u32 + 208, r29.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r28,212(r30)
	PPC_STORE_U32(r30.u32 + 212, r28.u32);
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r29,220(r30)
	PPC_STORE_U32(r30.u32 + 220, r29.u32);
	// stw r11,216(r30)
	PPC_STORE_U32(r30.u32 + 216, r11.u32);
	// bl 0x830a8678
	sub_830A8678(ctx, base);
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830812e8
	if (cr6.eq) goto loc_830812E8;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x830812e8
	if (cr6.eq) goto loc_830812E8;
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830812e8
	if (cr6.eq) goto loc_830812E8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83076d58
	sub_83076D58(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83077ab0
	sub_83077AB0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8307fc10
	sub_8307FC10(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_830812E8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_830812FC"))) PPC_WEAK_FUNC(sub_830812FC);
PPC_FUNC_IMPL(__imp__sub_830812FC) {
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

__attribute__((alias("__imp__sub_8308131C"))) PPC_WEAK_FUNC(sub_8308131C);
PPC_FUNC_IMPL(__imp__sub_8308131C) {
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
	// bl 0x83080f78
	sub_83080F78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_83081340"))) PPC_WEAK_FUNC(sub_83081340);
PPC_FUNC_IMPL(__imp__sub_83081340) {
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
	// addi r3,r11,60
	ctx.r3.s64 = r11.s64 + 60;
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

__attribute__((alias("__imp__sub_8308136C"))) PPC_WEAK_FUNC(sub_8308136C);
PPC_FUNC_IMPL(__imp__sub_8308136C) {
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
	// addi r3,r11,196
	ctx.r3.s64 = r11.s64 + 196;
	// bl 0x8305c930
	sub_8305C930(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83081398"))) PPC_WEAK_FUNC(sub_83081398);
PPC_FUNC_IMPL(__imp__sub_83081398) {
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
	// addi r3,r11,224
	ctx.r3.s64 = r11.s64 + 224;
	// bl 0x830a7580
	sub_830A7580(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830813D0"))) PPC_WEAK_FUNC(sub_830813D0);
PPC_FUNC_IMPL(__imp__sub_830813D0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// bl 0x83080f78
	sub_83080F78(ctx, base);
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x830a7580
	sub_830A7580(ctx, base);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// addi r11,r11,21776
	r11.s64 = r11.s64 + 21776;
	// stw r11,196(r30)
	PPC_STORE_U32(r30.u32 + 196, r11.u32);
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// lwz r4,84(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_83081438"))) PPC_WEAK_FUNC(sub_83081438);
PPC_FUNC_IMPL(__imp__sub_83081438) {
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
	// addi r3,r11,60
	ctx.r3.s64 = r11.s64 + 60;
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

__attribute__((alias("__imp__sub_83081464"))) PPC_WEAK_FUNC(sub_83081464);
PPC_FUNC_IMPL(__imp__sub_83081464) {
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
	// addi r3,r11,196
	ctx.r3.s64 = r11.s64 + 196;
	// bl 0x8305c930
	sub_8305C930(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83081490"))) PPC_WEAK_FUNC(sub_83081490);
PPC_FUNC_IMPL(__imp__sub_83081490) {
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
	// addi r3,r11,224
	ctx.r3.s64 = r11.s64 + 224;
	// bl 0x830a7580
	sub_830A7580(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830814C8"))) PPC_WEAK_FUNC(sub_830814C8);
PPC_FUNC_IMPL(__imp__sub_830814C8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// addi r5,r11,-7200
	ctx.r5.s64 = r11.s64 + -7200;
	// stw r30,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r24,220(r31)
	PPC_STORE_U32(r31.u32 + 220, r24.u32);
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r5,r11,-7108
	ctx.r5.s64 = r11.s64 + -7108;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r20,0
	r20.s64 = 0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8308153c
	if (cr6.eq) goto loc_8308153C;
	// lhz r11,0(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// mr r11,r20
	r11.u64 = r20.u64;
	// bne 0x83081540
	if (!cr0.eq) goto loc_83081540;
loc_8308153C:
	// li r11,1
	r11.s64 = 1;
loc_83081540:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x83081558
	if (cr6.eq) goto loc_83081558;
	// lhz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U16(r26.u32 + 0);
	// mr r25,r20
	r25.u64 = r20.u64;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8308155c
	if (!cr0.eq) goto loc_8308155C;
loc_83081558:
	// li r25,1
	r25.s64 = 1;
loc_8308155C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830815a0
	if (cr0.eq) goto loc_830815A0;
	// clrlwi. r10,r27,24
	ctx.r10.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x830815a0
	if (cr0.eq) goto loc_830815A0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,98
	ctx.r6.s64 = 98;
loc_83081574:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r11,-8384
	ctx.r7.s64 = r11.s64 + -8384;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
loc_83081598:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83081a84
	goto loc_83081A84;
loc_830815A0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830815cc
	if (cr6.eq) goto loc_830815CC;
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830815cc
	if (cr0.eq) goto loc_830815CC;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,17
	ctx.r6.s64 = 17;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
	// b 0x83081598
	goto loc_83081598;
loc_830815CC:
	// clrlwi r29,r27,24
	r29.u64 = r27.u32 & 0xFF;
	// lwz r8,160(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// cntlzw r11,r29
	r11.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// clrlwi r5,r11,16
	ctx.r5.u64 = r11.u32 & 0xFFFF;
	// bl 0x830a7f60
	sub_830A7F60(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x83081624
	if (!cr6.eq) goto loc_83081624;
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83081598
	if (!cr0.eq) goto loc_83081598;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8307c690
	sub_8307C690(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// b 0x830819b0
	goto loc_830819B0;
loc_83081624:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fd97d8
	sub_82FD97D8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83081640
	if (!cr0.eq) goto loc_83081640;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// li r6,59
	ctx.r6.s64 = 59;
	// b 0x83081574
	goto loc_83081574;
loc_83081640:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x830a72e0
	sub_830A72E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
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
	// beq 0x8308169c
	if (cr0.eq) goto loc_8308169C;
	// lwz r11,220(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8308169c
	if (!cr6.eq) goto loc_8308169C;
	// lwz r5,160(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8308169c
	if (cr0.eq) goto loc_8308169C;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830771d8
	sub_830771D8(ctx, base);
	// stw r3,220(r30)
	PPC_STORE_U32(r30.u32 + 220, ctx.r3.u32);
loc_8308169C:
	// lwz r21,220(r30)
	r21.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// stw r21,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r21.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// lwz r25,128(r30)
	r25.u64 = PPC_LOAD_U32(r30.u32 + 128);
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// stw r27,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r27.u32);
	// beq 0x830816fc
	if (cr0.eq) goto loc_830816FC;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r26,216(r30)
	r26.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// lwz r23,4(r30)
	r23.u64 = PPC_LOAD_U32(r30.u32 + 4);
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
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// bl 0x8309dc58
	sub_8309DC58(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// b 0x83081700
	goto loc_83081700;
loc_830816FC:
	// mr r26,r20
	r26.u64 = r20.u64;
loc_83081700:
	// addi r4,r31,220
	ctx.r4.s64 = r31.s64 + 220;
	// lwz r3,152(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 152);
	// bl 0x8305c228
	sub_8305C228(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r26,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r26.u32);
	// addi r23,r11,-8384
	r23.s64 = r11.s64 + -8384;
	// beq cr6,0x83081838
	if (cr6.eq) goto loc_83081838;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r27,r11,-8404
	r27.s64 = r11.s64 + -8404;
loc_83081728:
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
	// beq 0x83081764
	if (cr0.eq) goto loc_83081764;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830802d8
	sub_830802D8(ctx, base);
	// b 0x8308179c
	goto loc_8308179C;
loc_83081764:
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
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830817ac
	if (cr0.eq) goto loc_830817AC;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830814c8
	sub_830814C8(ctx, base);
loc_8308179C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830a7430
	sub_830A7430(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x83081728
	if (!cr0.eq) goto loc_83081728;
loc_830817AC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x83081838
	if (cr6.eq) goto loc_83081838;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r27,r11,-8448
	r27.s64 = r11.s64 + -8448;
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
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq 0x83081818
	if (cr0.eq) goto loc_83081818;
	// bl 0x8307b0b8
	sub_8307B0B8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x83081800
	if (cr0.eq) goto loc_83081800;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,128(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 128);
	// bl 0x83073898
	sub_83073898(ctx, base);
loc_83081800:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830a7430
	sub_830A7430(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83081838
	if (cr0.eq) goto loc_83081838;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_83081818:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r6,115
	ctx.r6.s64 = 115;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
loc_83081838:
	// lwz r3,152(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 152);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r11,-1
	ctx.r4.s64 = r11.s64 + -1;
	// bl 0x82fdea08
	sub_82FDEA08(ctx, base);
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r3,108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// bl 0x83054ec8
	sub_83054EC8(ctx, base);
	// addi r29,r30,60
	r29.s64 = r30.s64 + 60;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r25,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r25.u32);
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
	// lwz r11,176(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83081984
	if (cr0.eq) goto loc_83081984;
	// addi r6,r31,84
	ctx.r6.s64 = r31.s64 + 84;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82fea480
	sub_82FEA480(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83081984
	if (cr0.eq) goto loc_83081984;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83081984
	if (cr0.eq) goto loc_83081984;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r20,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r20.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-5404
	ctx.r4.s64 = r11.s64 + -5404;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r20,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r20.u16);
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r3,108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83081984
	if (cr0.eq) goto loc_83081984;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r5,0
	cr0.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq 0x83081984
	if (cr0.eq) goto loc_83081984;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83075c18
	sub_83075C18(ctx, base);
loc_83081984:
	// cntlzw r11,r21
	r11.u64 = r21.u32 == 0 ? 32 : __builtin_clz(r21.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830819a4
	if (!cr0.eq) goto loc_830819A4;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stw r20,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r20.u32);
	// bl 0x8305a0d0
	sub_8305A0D0(ctx, base);
loc_830819A4:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
loc_830819B0:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x83081a80
	if (cr6.eq) goto loc_83081A80;
	// lwz r11,20(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830819cc
	if (cr0.eq) goto loc_830819CC;
	// lwz r27,8(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x830819d0
	goto loc_830819D0;
loc_830819CC:
	// mr r27,r20
	r27.u64 = r20.u64;
loc_830819D0:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x83081a80
	if (cr6.eq) goto loc_83081A80;
	// lwz r11,24(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83081a80
	if (!cr0.eq) goto loc_83081A80;
	// li r3,76
	ctx.r3.s64 = 76;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// beq 0x83081a2c
	if (cr0.eq) goto loc_83081A2C;
	// lwz r3,20(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 20);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83081a18
	if (cr0.eq) goto loc_83081A18;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83081a1c
	goto loc_83081A1C;
loc_83081A18:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
loc_83081A1C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83089f98
	sub_83089F98(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x83081a30
	goto loc_83081A30;
loc_83081A2C:
	// mr r28,r20
	r28.u64 = r20.u64;
loc_83081A30:
	// li r29,1
	r29.s64 = 1;
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(r27.u32, 1, xer);
	// ble cr6,0x83081a74
	if (!cr6.gt) goto loc_83081A74;
loc_83081A3C:
	// lwz r3,20(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 20);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83081a58
	if (cr0.eq) goto loc_83081A58;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x83081a5c
	goto loc_83081A5C;
loc_83081A58:
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
loc_83081A5C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830753c0
	sub_830753C0(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(r29.u32, r27.u32, xer);
	// blt cr6,0x83081a3c
	if (cr6.lt) goto loc_83081A3C;
loc_83081A74:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8306fca0
	sub_8306FCA0(ctx, base);
loc_83081A80:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_83081A84:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x831b0b58
	return;
}

__attribute__((alias("__imp__sub_83081A8C"))) PPC_WEAK_FUNC(sub_83081A8C);
PPC_FUNC_IMPL(__imp__sub_83081A8C) {
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

__attribute__((alias("__imp__sub_83081AB4"))) PPC_WEAK_FUNC(sub_83081AB4);
PPC_FUNC_IMPL(__imp__sub_83081AB4) {
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

__attribute__((alias("__imp__sub_83081AE4"))) PPC_WEAK_FUNC(sub_83081AE4);
PPC_FUNC_IMPL(__imp__sub_83081AE4) {
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

__attribute__((alias("__imp__sub_83081B20"))) PPC_WEAK_FUNC(sub_83081B20);
PPC_FUNC_IMPL(__imp__sub_83081B20) {
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
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// mr r16,r4
	r16.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// stw r23,292(r31)
	PPC_STORE_U32(r31.u32 + 292, r23.u32);
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// beq cr6,0x83082128
	if (cr6.eq) goto loc_83082128;
	// li r19,0
	r19.s64 = 0;
	// mr r24,r19
	r24.u64 = r19.u64;
	// stw r19,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r19.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r5,216(r23)
	ctx.r5.u64 = PPC_LOAD_U32(r23.u32 + 216);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x83070930
	sub_83070930(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// addi r17,r11,-28032
	r17.s64 = r11.s64 + -28032;
	// beq cr6,0x83081c94
	if (cr6.eq) goto loc_83081C94;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r27,r11,-8448
	r27.s64 = r11.s64 + -8448;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r26,r11,-8384
	r26.s64 = r11.s64 + -8384;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r28,r11,-8404
	r28.s64 = r11.s64 + -8404;
loc_83081B98:
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
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83081bd8
	if (cr0.eq) goto loc_83081BD8;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x830802d8
	sub_830802D8(ctx, base);
	// b 0x83081c84
	goto loc_83081C84;
loc_83081BD8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83081c34
	if (cr0.eq) goto loc_83081C34;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x830814c8
	sub_830814C8(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83081c84
	if (cr0.eq) goto loc_83081C84;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,100
	ctx.r4.s64 = r31.s64 + 100;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x830708e0
	sub_830708E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83081c84
	if (!cr0.eq) goto loc_83081C84;
	// addi r4,r31,100
	ctx.r4.s64 = r31.s64 + 100;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x8305c228
	sub_8305C228(ctx, base);
	// b 0x83081c84
	goto loc_83081C84;
loc_83081C34:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// beq 0x83081c68
	if (cr0.eq) goto loc_83081C68;
	// bl 0x8307b0b8
	sub_8307B0B8(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// b 0x83081c84
	goto loc_83081C84;
loc_83081C68:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r6,41
	ctx.r6.s64 = 41;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
loc_83081C84:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830a7430
	sub_830A7430(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x83081b98
	if (!cr0.eq) goto loc_83081B98;
loc_83081C94:
	// lwz r26,116(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// lwz r22,56(r20)
	r22.u64 = PPC_LOAD_U32(r20.u32 + 56);
	// lwz r18,12(r20)
	r18.u64 = PPC_LOAD_U32(r20.u32 + 12);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x83081dd8
	if (cr6.eq) goto loc_83081DD8;
	// mr r29,r19
	r29.u64 = r19.u64;
	// stw r19,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r19.u32);
	// lwz r25,100(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// mr r28,r19
	r28.u64 = r19.u64;
	// mr r27,r19
	r27.u64 = r19.u64;
loc_83081CBC:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x8308ea58
	sub_8308EA58(ctx, base);
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83081ce4
	if (cr0.eq) goto loc_83081CE4;
	// rotlwi r11,r3,0
	r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x83081ce8
	goto loc_83081CE8;
loc_83081CE4:
	// mr r11,r19
	r11.u64 = r19.u64;
loc_83081CE8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83081d84
	if (cr6.eq) goto loc_83081D84;
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83081d2c
	if (!cr0.eq) goto loc_83081D2C;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x83081d08
	if (cr6.eq) goto loc_83081D08;
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// b 0x83081d24
	goto loc_83081D24;
loc_83081D08:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83081d1c
	if (cr6.eq) goto loc_83081D1C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83020000
	sub_83020000(ctx, base);
	// b 0x83081d20
	goto loc_83081D20;
loc_83081D1C:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
loc_83081D20:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_83081D24:
	// mr r25,r11
	r25.u64 = r11.u64;
	// li r28,1
	r28.s64 = 1;
loc_83081D2C:
	// lwz r30,24(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x83081d4c
	if (cr6.eq) goto loc_83081D4C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x830753c0
	sub_830753C0(ctx, base);
	// b 0x83081d84
	goto loc_83081D84;
loc_83081D4C:
	// li r3,76
	ctx.r3.s64 = 76;
	// lwz r4,216(r23)
	ctx.r4.u64 = PPC_LOAD_U32(r23.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83081d74
	if (cr0.eq) goto loc_83081D74;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83089f98
	sub_83089F98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83081d78
	goto loc_83081D78;
loc_83081D74:
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
loc_83081D78:
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
loc_83081D84:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmplw cr6,r27,r26
	cr6.compare<uint32_t>(r27.u32, r26.u32, xer);
	// blt cr6,0x83081cbc
	if (cr6.lt) goto loc_83081CBC;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x83081dcc
	if (cr6.eq) goto loc_83081DCC;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x83081db4
	if (cr6.eq) goto loc_83081DB4;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x830753c0
	sub_830753C0(ctx, base);
	// b 0x83081dc8
	goto loc_83081DC8;
loc_83081DB4:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r19,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r19.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// mr r24,r29
	r24.u64 = r29.u64;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
loc_83081DC8:
	// stw r25,4(r24)
	PPC_STORE_U32(r24.u32 + 4, r25.u32);
loc_83081DCC:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
loc_83081DD8:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x83081de8
	if (cr6.eq) goto loc_83081DE8;
	// lwz r11,64(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 64);
	// b 0x83081dec
	goto loc_83081DEC;
loc_83081DE8:
	// mr r11,r19
	r11.u64 = r19.u64;
loc_83081DEC:
	// mr r29,r11
	r29.u64 = r11.u64;
	// stw r19,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r19.u32);
	// cmpwi cr6,r18,2
	cr6.compare<int32_t>(r18.s32, 2, xer);
	// bne cr6,0x83081e7c
	if (!cr6.eq) goto loc_83081E7C;
	// clrlwi. r11,r21,24
	r11.u64 = r21.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83081e54
	if (cr0.eq) goto loc_83081E54;
	// li r3,76
	ctx.r3.s64 = 76;
	// lwz r4,216(r23)
	ctx.r4.u64 = PPC_LOAD_U32(r23.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83081e44
	if (cr0.eq) goto loc_83081E44;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r9,216(r23)
	ctx.r9.u64 = PPC_LOAD_U32(r23.u32 + 216);
	// li r8,6
	ctx.r8.s64 = 6;
	// lwz r6,8(r23)
	ctx.r6.u64 = PPC_LOAD_U32(r23.u32 + 8);
	// addi r5,r11,-27800
	ctx.r5.s64 = r11.s64 + -27800;
	// li r7,11
	ctx.r7.s64 = 11;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x830899f8
	sub_830899F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83081e48
	goto loc_83081E48;
loc_83081E44:
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
loc_83081E48:
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
loc_83081E54:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x83081e7c
	if (cr6.eq) goto loc_83081E7C;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x83081eb8
	if (cr6.eq) goto loc_83081EB8;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r30,4(r24)
	r30.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x830756d8
	sub_830756D8(ctx, base);
	// stw r30,4(r24)
	PPC_STORE_U32(r24.u32 + 4, r30.u32);
loc_83081E7C:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x83081eb8
	if (cr6.eq) goto loc_83081EB8;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x830464c8
	sub_830464C8(ctx, base);
	// lwz r11,8(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// stw r19,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r19.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x83081f18
	if (!cr6.eq) goto loc_83081F18;
	// li r6,123
	ctx.r6.s64 = 123;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
	// b 0x83081f18
	goto loc_83081F18;
loc_83081EB8:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x83081f18
	if (cr6.eq) goto loc_83081F18;
	// cmpwi cr6,r18,2
	cr6.compare<int32_t>(r18.s32, 2, xer);
	// bne cr6,0x83081f18
	if (!cr6.eq) goto loc_83081F18;
	// clrlwi. r11,r21,24
	r11.u64 = r21.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83081ee4
	if (cr0.eq) goto loc_83081EE4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x830464c8
	sub_830464C8(ctx, base);
	// stw r19,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r19.u32);
	// b 0x83081f18
	goto loc_83081F18;
loc_83081EE4:
	// li r3,76
	ctx.r3.s64 = 76;
	// lwz r4,216(r23)
	ctx.r4.u64 = PPC_LOAD_U32(r23.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83081f0c
	if (cr0.eq) goto loc_83081F0C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83089f98
	sub_83089F98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83081f10
	goto loc_83081F10;
loc_83081F0C:
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
loc_83081F10:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x830464c8
	sub_830464C8(ctx, base);
loc_83081F18:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x83081f34
	if (cr6.eq) goto loc_83081F34;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x830435b0
	sub_830435B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x83081f38
	if (!cr0.eq) goto loc_83081F38;
loc_83081F34:
	// mr r11,r19
	r11.u64 = r19.u64;
loc_83081F38:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// clrlwi r30,r11,24
	r30.u64 = r11.u32 & 0xFF;
	// bl 0x830435b0
	sub_830435B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83081f5c
	if (!cr0.eq) goto loc_83081F5C;
	// lwz r11,64(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 64);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// mr r11,r19
	r11.u64 = r19.u64;
	// beq 0x83081f60
	if (cr0.eq) goto loc_83081F60;
loc_83081F5C:
	// li r11,1
	r11.s64 = 1;
loc_83081F60:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmpwi cr6,r18,4
	cr6.compare<int32_t>(r18.s32, 4, xer);
	// bne cr6,0x83081fb0
	if (!cr6.eq) goto loc_83081FB0;
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83081fb0
	if (cr0.eq) goto loc_83081FB0;
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83081f9c
	if (!cr0.eq) goto loc_83081F9C;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x83081f9c
	if (!cr6.eq) goto loc_83081F9C;
	// li r6,124
	ctx.r6.s64 = 124;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
	// b 0x83081fb0
	goto loc_83081FB0;
loc_83081F9C:
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x830759c8
	sub_830759C8(ctx, base);
loc_83081FB0:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x830820f8
	if (cr6.eq) goto loc_830820F8;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x830435b0
	sub_830435B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830820f8
	if (cr0.eq) goto loc_830820F8;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x830486f8
	sub_830486F8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// b 0x830820dc
	goto loc_830820DC;
loc_83081FD8:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,76(r20)
	ctx.r3.u64 = PPC_LOAD_U32(r20.u32 + 76);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r29,40(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lwz r28,16(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lwz r5,32(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// beq 0x83082058
	if (cr0.eq) goto loc_83082058;
	// addi r6,r31,104
	ctx.r6.s64 = r31.s64 + 104;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82fea480
	sub_82FEA480(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83082058
	if (cr0.eq) goto loc_83082058;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83082058
	if (cr0.eq) goto loc_83082058;
	// cmpwi cr6,r18,2
	cr6.compare<int32_t>(r18.s32, 2, xer);
	// bne cr6,0x830820dc
	if (!cr6.eq) goto loc_830820DC;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r6,122
	ctx.r6.s64 = 122;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// b 0x830820dc
	goto loc_830820DC;
loc_83082058:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// beq cr6,0x830820dc
	if (cr6.eq) goto loc_830820DC;
	// li r3,76
	ctx.r3.s64 = 76;
	// lwz r4,216(r23)
	ctx.r4.u64 = PPC_LOAD_U32(r23.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830820ac
	if (cr0.eq) goto loc_830820AC;
	// lwz r11,216(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 216);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r7,24(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 24);
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
	// b 0x830820b0
	goto loc_830820B0;
loc_830820AC:
	// mr r29,r19
	r29.u64 = r19.u64;
loc_830820B0:
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// stw r11,44(r29)
	PPC_STORE_U32(r29.u32 + 44, r11.u32);
	// bl 0x83048620
	sub_83048620(ctx, base);
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830820d8
	if (cr0.eq) goto loc_830820D8;
	// stw r11,72(r29)
	PPC_STORE_U32(r29.u32 + 72, r11.u32);
	// b 0x830820dc
	goto loc_830820DC;
loc_830820D8:
	// stw r30,72(r29)
	PPC_STORE_U32(r29.u32 + 72, r30.u32);
loc_830820DC:
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
	// bne 0x83081fd8
	if (!cr0.eq) goto loc_83081FD8;
loc_830820F8:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
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
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
loc_83082128:
	// addi r1,r31,272
	ctx.r1.s64 = r31.s64 + 272;
	// b 0x831b0b48
	return;
}

__attribute__((alias("__imp__sub_83082130"))) PPC_WEAK_FUNC(sub_83082130);
PPC_FUNC_IMPL(__imp__sub_83082130) {
	PPC_FUNC_PROLOGUE();
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

__attribute__((alias("__imp__sub_83082158"))) PPC_WEAK_FUNC(sub_83082158);
PPC_FUNC_IMPL(__imp__sub_83082158) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x83034d68
	sub_83034D68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83082180"))) PPC_WEAK_FUNC(sub_83082180);
PPC_FUNC_IMPL(__imp__sub_83082180) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
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

__attribute__((alias("__imp__sub_830821A8"))) PPC_WEAK_FUNC(sub_830821A8);
PPC_FUNC_IMPL(__imp__sub_830821A8) {
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

__attribute__((alias("__imp__sub_830821D8"))) PPC_WEAK_FUNC(sub_830821D8);
PPC_FUNC_IMPL(__imp__sub_830821D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
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

__attribute__((alias("__imp__sub_83082200"))) PPC_WEAK_FUNC(sub_83082200);
PPC_FUNC_IMPL(__imp__sub_83082200) {
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

__attribute__((alias("__imp__sub_83082230"))) PPC_WEAK_FUNC(sub_83082230);
PPC_FUNC_IMPL(__imp__sub_83082230) {
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

__attribute__((alias("__imp__sub_83082260"))) PPC_WEAK_FUNC(sub_83082260);
PPC_FUNC_IMPL(__imp__sub_83082260) {
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

__attribute__((alias("__imp__sub_83082298"))) PPC_WEAK_FUNC(sub_83082298);
PPC_FUNC_IMPL(__imp__sub_83082298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x831b0af4
	// addi r31,r1,-400
	r31.s64 = ctx.r1.s64 + -400;
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r5,436(r31)
	PPC_STORE_U32(r31.u32 + 436, ctx.r5.u32);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r18,r7
	r18.u64 = ctx.r7.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// addi r28,r30,224
	r28.s64 = r30.s64 + 224;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r30,420(r31)
	PPC_STORE_U32(r31.u32 + 420, r30.u32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stw r26,428(r31)
	PPC_STORE_U32(r31.u32 + 428, r26.u32);
	// li r5,43
	ctx.r5.s64 = 43;
	// stw r18,452(r31)
	PPC_STORE_U32(r31.u32 + 452, r18.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// lwz r8,160(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// bl 0x830a7f60
	sub_830A7F60(ctx, base);
	// li r11,5
	r11.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,32(r18)
	PPC_STORE_U32(r18.u32 + 32, r11.u32);
	// bl 0x830a72e0
	sub_830A72E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x83071390
	sub_83071390(ctx, base);
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// lbz r11,25(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 25);
	// stw r15,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r15.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8308235c
	if (cr0.eq) goto loc_8308235C;
	// lwz r11,220(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8308235c
	if (!cr6.eq) goto loc_8308235C;
	// lwz r5,160(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8308235c
	if (cr0.eq) goto loc_8308235C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830771d8
	sub_830771D8(ctx, base);
	// stw r3,220(r30)
	PPC_STORE_U32(r30.u32 + 220, ctx.r3.u32);
loc_8308235C:
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x83082388
	if (cr0.eq) goto loc_83082388;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83082384
	if (cr0.eq) goto loc_83082384;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// b 0x83082388
	goto loc_83082388;
loc_83082384:
	// bl 0x83049068
	sub_83049068(ctx, base);
loc_83082388:
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(r15.u32, 0, xer);
	// bne cr6,0x830823c0
	if (!cr6.eq) goto loc_830823C0;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,29
	ctx.r6.s64 = 29;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// addi r4,r11,-7356
	ctx.r4.s64 = r11.s64 + -7356;
	// li r11,1
	r11.s64 = 1;
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830823C0:
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + 0);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r11,-6496
	ctx.r4.s64 = r11.s64 + -6496;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83082410
	if (cr0.eq) goto loc_83082410;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,160(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,39
	ctx.r5.s64 = 39;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830a7f60
	sub_830A7F60(ctx, base);
	// li r11,4
	r11.s64 = 4;
	// b 0x83082448
	goto loc_83082448;
loc_83082410:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-6728
	ctx.r4.s64 = r11.s64 + -6728;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83082e08
	if (cr0.eq) goto loc_83082E08;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,160(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,19
	ctx.r5.s64 = 19;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830a7f60
	sub_830A7F60(ctx, base);
	// li r11,2
	r11.s64 = 2;
loc_83082448:
	// stw r11,12(r18)
	PPC_STORE_U32(r18.u32 + 12, r11.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-7500
	ctx.r5.s64 = r11.s64 + -7500;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// beq 0x83082dd8
	if (cr0.eq) goto loc_83082DD8;
	// lhz r11,0(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83082dd8
	if (cr0.eq) goto loc_83082DD8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306f898
	sub_8306F898(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306f940
	sub_8306F940(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830714b0
	sub_830714B0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x83073c88
	sub_83073C88(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83082528
	if (cr0.eq) goto loc_83082528;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,12(r18)
	ctx.r10.u64 = PPC_LOAD_U32(r18.u32 + 12);
	// rlwinm r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x83082518
	if (!cr6.eq) goto loc_83082518;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,63
	ctx.r6.s64 = 63;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// addi r4,r11,-7356
	ctx.r4.s64 = r11.s64 + -7356;
	// li r11,1
	r11.s64 = 1;
	// stw r11,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r11.u32);
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_83082518:
	// li r17,0
	r17.s64 = 0;
	// stw r3,48(r18)
	PPC_STORE_U32(r18.u32 + 48, ctx.r3.u32);
	// stw r17,56(r18)
	PPC_STORE_U32(r18.u32 + 56, r17.u32);
	// b 0x830825b8
	goto loc_830825B8;
loc_83082528:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-8608
	ctx.r4.s64 = r11.s64 + -8608;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83082598
	if (cr0.eq) goto loc_83082598;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-6244
	ctx.r4.s64 = r11.s64 + -6244;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83082598
	if (cr0.eq) goto loc_83082598;
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
	// li r6,64
	ctx.r6.s64 = 64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,164
	ctx.r3.s64 = r31.s64 + 164;
	// addi r4,r11,-7356
	ctx.r4.s64 = r11.s64 + -7356;
	// li r11,1
	r11.s64 = 1;
	// stw r11,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r11.u32);
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_83082598:
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8307e748
	sub_8307E748(ctx, base);
	// li r17,0
	r17.s64 = 0;
loc_830825B8:
	// lwz r29,56(r18)
	r29.u64 = PPC_LOAD_U32(r18.u32 + 56);
	// mr r28,r17
	r28.u64 = r17.u64;
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x830826a0
	if (cr0.eq) goto loc_830826A0;
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// beq cr6,0x83082650
	if (cr6.eq) goto loc_83082650;
	// lwz r11,12(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 12);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x83082610
	if (!cr6.eq) goto loc_83082610;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// beq cr6,0x830825f0
	if (cr6.eq) goto loc_830825F0;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x83082610
	if (!cr6.eq) goto loc_83082610;
loc_830825F0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,60(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 60);
	// bl 0x83070068
	sub_83070068(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83082610
	if (cr0.eq) goto loc_83082610;
	// li r16,1
	r16.s64 = 1;
	// mr r28,r16
	r28.u64 = r16.u64;
	// b 0x83082654
	goto loc_83082654;
loc_83082610:
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
	// li r6,64
	ctx.r6.s64 = 64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// addi r4,r11,-7356
	ctx.r4.s64 = r11.s64 + -7356;
	// li r11,1
	r11.s64 = 1;
	// stw r11,176(r31)
	PPC_STORE_U32(r31.u32 + 176, r11.u32);
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_83082650:
	// li r16,1
	r16.s64 = 1;
loc_83082654:
	// lwz r11,12(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 12);
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// and. r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830826a4
	if (cr0.eq) goto loc_830826A4;
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
	// li r6,111
	ctx.r6.s64 = 111;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,132
	ctx.r3.s64 = r31.s64 + 132;
	// stw r16,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r16.u32);
	// addi r4,r11,-7356
	ctx.r4.s64 = r11.s64 + -7356;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830826A0:
	// li r16,1
	r16.s64 = 1;
loc_830826A4:
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x830a72e0
	sub_830A72E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x83071390
	sub_83071390(ctx, base);
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// lbz r11,25(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 25);
	// stw r19,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r19.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83082704
	if (cr0.eq) goto loc_83082704;
	// lwz r11,220(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83082704
	if (!cr6.eq) goto loc_83082704;
	// lwz r5,160(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83082704
	if (cr0.eq) goto loc_83082704;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830771d8
	sub_830771D8(ctx, base);
	// stw r3,220(r30)
	PPC_STORE_U32(r30.u32 + 220, ctx.r3.u32);
loc_83082704:
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x83082730
	if (cr0.eq) goto loc_83082730;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8308272c
	if (cr0.eq) goto loc_8308272C;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// b 0x83082730
	goto loc_83082730;
loc_8308272C:
	// bl 0x83049068
	sub_83049068(ctx, base);
loc_83082730:
	// lwz r11,12(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 12);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x83082d70
	if (!cr6.eq) goto loc_83082D70;
	// lwz r11,48(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 48);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83082784
	if (cr0.eq) goto loc_83082784;
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
	// li r6,65
	ctx.r6.s64 = 65;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,168
	ctx.r3.s64 = r31.s64 + 168;
	// stw r16,168(r31)
	PPC_STORE_U32(r31.u32 + 168, r16.u32);
	// addi r4,r11,-7356
	ctx.r4.s64 = r11.s64 + -7356;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_83082784:
	// lwz r11,52(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// stw r11,48(r18)
	PPC_STORE_U32(r18.u32 + 48, r11.u32);
	// beq cr6,0x83082d3c
	if (cr6.eq) goto loc_83082D3C;
	// lwz r10,0(r19)
	ctx.r10.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
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
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83082900
	if (cr0.eq) goto loc_83082900;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8307ce28
	sub_8307CE28(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x830828ec
	if (cr0.eq) goto loc_830828EC;
	// lwz r3,48(r18)
	ctx.r3.u64 = PPC_LOAD_U32(r18.u32 + 48);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83082830
	if (cr0.eq) goto loc_83082830;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83082830
	if (!cr0.eq) goto loc_83082830;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,110
	ctx.r6.s64 = 110;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,152
	ctx.r3.s64 = r31.s64 + 152;
	// stw r16,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r16.u32);
	// addi r4,r11,-7356
	ctx.r4.s64 = r11.s64 + -7356;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_83082830:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// stw r29,48(r18)
	PPC_STORE_U32(r18.u32 + 48, r29.u32);
	// bl 0x830a7430
	sub_830A7430(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// stw r19,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r19.u32);
loc_83082844:
	// mr r24,r17
	r24.u64 = r17.u64;
	// lwz r5,216(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// mr r20,r17
	r20.u64 = r17.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// stw r24,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r24.u32);
	// stw r20,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r20.u32);
	// bl 0x82fe7278
	sub_82FE7278(ctx, base);
	// lis r11,-32237
	r11.s64 = -2112684032;
	// stw r17,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r17.u32);
	// addi r25,r11,32376
	r25.s64 = r11.s64 + 32376;
	// sth r17,108(r31)
	PPC_STORE_U16(r31.u32 + 108, r17.u16);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// stb r16,96(r31)
	PPC_STORE_U8(r31.u32 + 96, r16.u8);
	// addi r27,r11,-15044
	r27.s64 = r11.s64 + -15044;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r23,r11,-7876
	r23.s64 = r11.s64 + -7876;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r22,r11,-8212
	r22.s64 = r11.s64 + -8212;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r26,r11,-6956
	r26.s64 = r11.s64 + -6956;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r21,r11,-28032
	r21.s64 = r11.s64 + -28032;
loc_830828A0:
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// beq cr6,0x83082bdc
	if (cr6.eq) goto loc_83082BDC;
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r17
	r28.u64 = r17.u64;
	// stw r29,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r29.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,212(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x8302e8f0
	sub_8302E8F0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// sth r11,108(r31)
	PPC_STORE_U16(r31.u32 + 108, r11.u16);
	// b 0x8308298c
	goto loc_8308298C;
loc_830828EC:
	// lis r11,-32219
	r11.s64 = -2111504384;
	// stw r16,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r16.u32);
	// addi r3,r31,172
	ctx.r3.s64 = r31.s64 + 172;
	// addi r4,r11,-7356
	ctx.r4.s64 = r11.s64 + -7356;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_83082900:
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83082844
	if (cr0.eq) goto loc_83082844;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,306
	ctx.r6.s64 = 306;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// stw r16,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r16.u32);
	// addi r4,r11,-7356
	ctx.r4.s64 = r11.s64 + -7356;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
	// lis r11,-32237
	r11.s64 = -2112684032;
	// lwz r30,420(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 420);
	// li r16,1
	r16.s64 = 1;
	// addi r25,r11,32376
	r25.s64 = r11.s64 + 32376;
	// lwz r18,452(r31)
	r18.u64 = PPC_LOAD_U32(r31.u32 + 452);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r15,104(r31)
	r15.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// lwz r19,100(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// li r17,0
	r17.s64 = 0;
	// addi r27,r11,-15044
	r27.s64 = r11.s64 + -15044;
	// lwz r24,120(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r20,116(r31)
	r20.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// lwz r29,112(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// addi r23,r11,-7876
	r23.s64 = r11.s64 + -7876;
	// lbz r28,97(r31)
	r28.u64 = PPC_LOAD_U8(r31.u32 + 97);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r22,r11,-8212
	r22.s64 = r11.s64 + -8212;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r26,r11,-6956
	r26.s64 = r11.s64 + -6956;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r21,r11,-28032
	r21.s64 = r11.s64 + -28032;
loc_8308298C:
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83082bdc
	if (!cr0.eq) goto loc_83082BDC;
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
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
	// bne cr6,0x83082bc8
	if (!cr6.eq) goto loc_83082BC8;
	// li r8,0
	ctx.r8.s64 = 0;
	// lhz r5,108(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 108);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x830a7f60
	sub_830A7F60(ctx, base);
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
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
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// bne cr6,0x83082a2c
	if (!cr6.eq) goto loc_83082A2C;
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
	// beq 0x83082a20
	if (cr0.eq) goto loc_83082A20;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,216(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x83054fb0
	sub_83054FB0(ctx, base);
	// b 0x83082a24
	goto loc_83082A24;
loc_83082A20:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
loc_83082A24:
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stw r24,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r24.u32);
loc_83082A2C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83082aa8
	if (cr0.eq) goto loc_83082AA8;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// bne cr6,0x83082a8c
	if (!cr6.eq) goto loc_83082A8C;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r29.u32);
	// beq 0x83082a80
	if (cr0.eq) goto loc_83082A80;
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
	// stw r25,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r25.u32);
	// b 0x83082a84
	goto loc_83082A84;
loc_83082A80:
	// mr r11,r17
	r11.u64 = r17.u64;
loc_83082A84:
	// mr r20,r11
	r20.u64 = r11.u64;
	// stw r20,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r20.u32);
loc_83082A8C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x83043678
	sub_83043678(ctx, base);
	// b 0x83082bc8
	goto loc_83082BC8;
loc_83082AA8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83082af4
	if (cr0.eq) goto loc_83082AF4;
	// lbz r11,96(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 96);
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83082ad8
	if (cr0.eq) goto loc_83082AD8;
	// stb r17,96(r31)
	PPC_STORE_U8(r31.u32 + 96, r17.u8);
	// stw r17,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r17.u32);
	// b 0x83082ae4
	goto loc_83082AE4;
loc_83082AD8:
	// li r4,124
	ctx.r4.s64 = 124;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
loc_83082AE4:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// b 0x83082bc8
	goto loc_83082BC8;
loc_83082AF4:
	// addi r5,r31,128
	ctx.r5.s64 = r31.s64 + 128;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
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
	// beq 0x83082b40
	if (cr0.eq) goto loc_83082B40;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r6,27
	ctx.r6.s64 = 27;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// b 0x83082bc8
	goto loc_83082BC8;
loc_83082B40:
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
	// stw r3,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83082ba0
	if (cr0.eq) goto loc_83082BA0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r6,216(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8304ddf8
	sub_8304DDF8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x83082ba4
	goto loc_83082BA4;
loc_83082BA0:
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
loc_83082BA4:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x83054ec8
	sub_83054EC8(ctx, base);
	// addi r7,r31,124
	ctx.r7.s64 = r31.s64 + 124;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r6,48(r18)
	ctx.r6.u64 = PPC_LOAD_U32(r18.u32 + 48);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830700b8
	sub_830700B8(ctx, base);
loc_83082BC8:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x830a7430
	sub_830A7430(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// stw r19,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r19.u32);
	// b 0x830828a0
	goto loc_830828A0;
loc_83082BDC:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x83082d18
	if (cr6.eq) goto loc_83082D18;
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83082c44
	if (!cr0.eq) goto loc_83082C44;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83082c34
	if (cr0.eq) goto loc_83082C34;
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r10,216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 216);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r17,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r17.u16);
	// lwz r5,216(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 216);
	// lwz r6,216(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x8304ddf8
	sub_8304DDF8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x83082c38
	goto loc_83082C38;
loc_83082C34:
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
loc_83082C38:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x83054ec8
	sub_83054EC8(ctx, base);
loc_83082C44:
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83082cb4
	if (cr6.eq) goto loc_83082CB4;
	// li r6,10
	ctx.r6.s64 = 10;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r4,r31,224
	ctx.r4.s64 = r31.s64 + 224;
	// bl 0x82fd9bb0
	sub_82FD9BB0(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83082c9c
	if (cr0.eq) goto loc_83082C9C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r6,216(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// addi r5,r31,224
	ctx.r5.s64 = r31.s64 + 224;
	// addi r29,r11,-7272
	r29.s64 = r11.s64 + -7272;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8304ddf8
	sub_8304DDF8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x83082ca8
	goto loc_83082CA8;
loc_83082C9C:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// addi r29,r11,-7272
	r29.s64 = r11.s64 + -7272;
loc_83082CA8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x83054ec8
	sub_83054EC8(ctx, base);
loc_83082CB4:
	// lwz r11,212(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r5,48(r18)
	ctx.r5.u64 = PPC_LOAD_U32(r18.u32 + 48);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,436(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 436);
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
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
	// stb r16,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r16.u8);
	// stw r3,52(r18)
	PPC_STORE_U32(r18.u32 + 52, ctx.r3.u32);
	// b 0x83082d20
	goto loc_83082D20;
	// b 0x83082cfc
	goto loc_83082CFC;
loc_83082CFC:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r30,420(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 420);
	// lwz r18,452(r31)
	r18.u64 = PPC_LOAD_U32(r31.u32 + 452);
	// lwz r15,104(r31)
	r15.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// addi r21,r11,-28032
	r21.s64 = r11.s64 + -28032;
	// lwz r19,100(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// b 0x83082d20
	goto loc_83082D20;
loc_83082D18:
	// lwz r11,48(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 48);
	// stw r11,52(r18)
	PPC_STORE_U32(r18.u32 + 52, r11.u32);
loc_83082D20:
	// lwz r3,204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// lwz r4,216(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 216);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83082d94
	goto loc_83082D94;
loc_83082D3C:
	// clrlwi. r10,r28,24
	ctx.r10.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83082d88
	if (cr0.eq) goto loc_83082D88;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,306
	ctx.r6.s64 = 306;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,140
	ctx.r3.s64 = r31.s64 + 140;
	// stw r16,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r16.u32);
	// addi r4,r11,-7356
	ctx.r4.s64 = r11.s64 + -7356;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_83082D70:
	// lwz r11,56(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 56);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83082d84
	if (cr0.eq) goto loc_83082D84;
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// stw r11,48(r18)
	PPC_STORE_U32(r18.u32 + 48, r11.u32);
loc_83082D84:
	// lwz r11,48(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 48);
loc_83082D88:
	// stw r11,52(r18)
	PPC_STORE_U32(r18.u32 + 52, r11.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r21,r11,-28032
	r21.s64 = r11.s64 + -28032;
loc_83082D94:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83081b20
	sub_83081B20(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x830a7430
	sub_830A7430(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83082dd0
	if (cr0.eq) goto loc_83082DD0;
	// li r6,66
	ctx.r6.s64 = 66;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
loc_83082DD0:
	// addi r1,r31,400
	ctx.r1.s64 = r31.s64 + 400;
	// b 0x831b0b44
	return;
loc_83082DD8:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,31
	ctx.r6.s64 = 31;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,148
	ctx.r3.s64 = r31.s64 + 148;
	// addi r4,r11,-7356
	ctx.r4.s64 = r11.s64 + -7356;
	// li r11,1
	r11.s64 = 1;
	// stw r11,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r11.u32);
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_83082E08:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,30
	ctx.r6.s64 = 30;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,156
	ctx.r3.s64 = r31.s64 + 156;
	// addi r4,r11,-7356
	ctx.r4.s64 = r11.s64 + -7356;
	// li r11,1
	r11.s64 = 1;
	// stw r11,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r11.u32);
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_83082E3C"))) PPC_WEAK_FUNC(sub_83082E3C);
PPC_FUNC_IMPL(__imp__sub_83082E3C) {
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

__attribute__((alias("__imp__sub_83082E5C"))) PPC_WEAK_FUNC(sub_83082E5C);
PPC_FUNC_IMPL(__imp__sub_83082E5C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-400
	r31.s64 = r12.s64 + -400;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	r11.s64 = 1;
	// lis r3,-31992
	ctx.r3.s64 = -2096627712;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// addi r3,r3,10548
	ctx.r3.s64 = ctx.r3.s64 + 10548;
	// stb r11,97(r31)
	PPC_STORE_U8(r31.u32 + 97, r11.u8);
	// b 0x831b0b44
	return;
}

__attribute__((alias("__imp__sub_83082E84"))) PPC_WEAK_FUNC(sub_83082E84);
PPC_FUNC_IMPL(__imp__sub_83082E84) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-400
	r31.s64 = r12.s64 + -400;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,220(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,420(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 420);
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
	// addi r3,r3,11512
	ctx.r3.s64 = ctx.r3.s64 + 11512;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b44
	return;
}

__attribute__((alias("__imp__sub_83082EE0"))) PPC_WEAK_FUNC(sub_83082EE0);
PPC_FUNC_IMPL(__imp__sub_83082EE0) {
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

__attribute__((alias("__imp__sub_83082F00"))) PPC_WEAK_FUNC(sub_83082F00);
PPC_FUNC_IMPL(__imp__sub_83082F00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-400
	r31.s64 = r12.s64 + -400;
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
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,420(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 420);
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
	// addi r3,r3,11516
	ctx.r3.s64 = ctx.r3.s64 + 11516;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b44
	return;
}

__attribute__((alias("__imp__sub_83082F50"))) PPC_WEAK_FUNC(sub_83082F50);
PPC_FUNC_IMPL(__imp__sub_83082F50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-400
	r31.s64 = r12.s64 + -400;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
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

__attribute__((alias("__imp__sub_83082F78"))) PPC_WEAK_FUNC(sub_83082F78);
PPC_FUNC_IMPL(__imp__sub_83082F78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-400
	r31.s64 = r12.s64 + -400;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,420(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 420);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
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

__attribute__((alias("__imp__sub_83082FA8"))) PPC_WEAK_FUNC(sub_83082FA8);
PPC_FUNC_IMPL(__imp__sub_83082FA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-400
	r31.s64 = r12.s64 + -400;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,420(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 420);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
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

__attribute__((alias("__imp__sub_83082FD8"))) PPC_WEAK_FUNC(sub_83082FD8);
PPC_FUNC_IMPL(__imp__sub_83082FD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-400
	r31.s64 = r12.s64 + -400;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,420(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 420);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
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

__attribute__((alias("__imp__sub_83083008"))) PPC_WEAK_FUNC(sub_83083008);
PPC_FUNC_IMPL(__imp__sub_83083008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-400
	r31.s64 = r12.s64 + -400;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,420(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 420);
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

__attribute__((alias("__imp__sub_83083038"))) PPC_WEAK_FUNC(sub_83083038);
PPC_FUNC_IMPL(__imp__sub_83083038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-400
	r31.s64 = r12.s64 + -400;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,420(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 420);
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

__attribute__((alias("__imp__sub_83083070"))) PPC_WEAK_FUNC(sub_83083070);
PPC_FUNC_IMPL(__imp__sub_83083070) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0af0
	// addi r31,r1,-240
	r31.s64 = ctx.r1.s64 + -240;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// stb r9,311(r31)
	PPC_STORE_U8(r31.u32 + 311, ctx.r9.u8);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stb r10,319(r31)
	PPC_STORE_U8(r31.u32 + 319, ctx.r10.u8);
	// li r21,0
	r21.s64 = 0;
	// mr r16,r4
	r16.u64 = ctx.r4.u64;
	// mr r15,r5
	r15.u64 = ctx.r5.u64;
	// lwz r17,56(r24)
	r17.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwz r20,12(r24)
	r20.u64 = PPC_LOAD_U32(r24.u32 + 12);
	// mr r18,r8
	r18.u64 = ctx.r8.u64;
	// stw r29,260(r31)
	PPC_STORE_U32(r31.u32 + 260, r29.u32);
	// mr r27,r21
	r27.u64 = r21.u64;
	// mr r19,r21
	r19.u64 = r21.u64;
	// cmplwi r17,0
	cr0.compare<uint32_t>(r17.u32, 0, xer);
	// beq 0x830830c8
	if (cr0.eq) goto loc_830830C8;
	// lwz r22,32(r17)
	r22.u64 = PPC_LOAD_U32(r17.u32 + 32);
	// b 0x830830cc
	goto loc_830830CC;
loc_830830C8:
	// mr r22,r21
	r22.u64 = r21.u64;
loc_830830CC:
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(r17.u32, 0, xer);
	// beq cr6,0x8308317c
	if (cr6.eq) goto loc_8308317C;
	// lwz r11,20(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 20);
	// cmpwi cr6,r20,4
	cr6.compare<int32_t>(r20.s32, 4, xer);
	// bne cr6,0x83083128
	if (!cr6.eq) goto loc_83083128;
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8308317c
	if (cr0.eq) goto loc_8308317C;
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
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// li r6,85
	ctx.r6.s64 = 85;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-7356
	ctx.r4.s64 = r11.s64 + -7356;
	// li r11,1
	r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_83083128:
	// and. r11,r11,r20
	r11.u64 = r11.u64 & r20.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// beq 0x83083170
	if (cr0.eq) goto loc_83083170;
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
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// li r6,86
	ctx.r6.s64 = 86;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-7356
	ctx.r4.s64 = r11.s64 + -7356;
	// li r11,1
	r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_83083170:
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// bl 0x83074d08
	sub_83074D08(ctx, base);
loc_8308317C:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r26,1
	r26.s64 = 1;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// addi r14,r11,-28032
	r14.s64 = r11.s64 + -28032;
	// beq cr6,0x83083338
	if (cr6.eq) goto loc_83083338;
	// lwz r11,136(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 136);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r11.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
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
	// addi r4,r11,-8152
	ctx.r4.s64 = r11.s64 + -8152;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83083260
	if (cr0.eq) goto loc_83083260;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8307d278
	sub_8307D278(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830832ec
	if (cr0.eq) goto loc_830832EC;
	// lwz r27,20(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi r27,0
	cr0.compare<uint32_t>(r27.u32, 0, xer);
	// beq 0x830832ec
	if (cr0.eq) goto loc_830832EC;
	// lwz r11,24(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83083200
	if (!cr6.eq) goto loc_83083200;
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
loc_83083200:
	// addi r11,r11,-9
	r11.s64 = r11.s64 + -9;
	// lwz r4,216(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 216);
	// li r3,40
	ctx.r3.s64 = 40;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r28,r11,0,30,30
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83083248
	if (cr0.eq) goto loc_83083248;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8308a8e8
	sub_8308A8E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8308324c
	goto loc_8308324C;
loc_83083248:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
loc_8308324C:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// b 0x830832e8
	goto loc_830832E8;
loc_83083260:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-7752
	ctx.r4.s64 = r11.s64 + -7752;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83083290
	if (cr0.eq) goto loc_83083290;
	// li r5,5
	ctx.r5.s64 = 5;
loc_8308327C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8307fe30
	sub_8307FE30(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x830832d8
	goto loc_830832D8;
loc_83083290:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-8352
	ctx.r4.s64 = r11.s64 + -8352;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830832b0
	if (cr0.eq) goto loc_830832B0;
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x8308327c
	goto loc_8308327C;
loc_830832B0:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-8496
	ctx.r4.s64 = r11.s64 + -8496;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// beq 0x830832fc
	if (cr0.eq) goto loc_830832FC;
	// bl 0x83079218
	sub_83079218(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
loc_830832D8:
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_830832E8:
	// bl 0x83071cd8
	sub_83071CD8(ctx, base);
loc_830832EC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830a7430
	sub_830A7430(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// b 0x83083338
	goto loc_83083338;
loc_830832FC:
	// bl 0x8306fb18
	sub_8306FB18(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83083314
	if (cr0.eq) goto loc_83083314;
	// mr r19,r30
	r19.u64 = r30.u64;
	// stw r26,32(r24)
	PPC_STORE_U32(r24.u32 + 32, r26.u32);
	// b 0x83083338
	goto loc_83083338;
loc_83083314:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r6,41
	ctx.r6.s64 = 41;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
loc_83083338:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x83046bf8
	sub_83046BF8(ctx, base);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(r17.u32, 0, xer);
	// stb r26,6(r24)
	PPC_STORE_U8(r24.u32 + 6, r26.u8);
	// addi r25,r11,-5208
	r25.s64 = r11.s64 + -5208;
	// li r23,21
	r23.s64 = 21;
	// beq cr6,0x83083564
	if (cr6.eq) goto loc_83083564;
	// lwz r28,60(r17)
	r28.u64 = PPC_LOAD_U32(r17.u32 + 60);
	// cmpwi cr6,r20,4
	cr6.compare<int32_t>(r20.s32, 4, xer);
	// bne cr6,0x830833a8
	if (!cr6.eq) goto loc_830833A8;
	// lwz r11,60(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 60);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83083568
	if (!cr0.eq) goto loc_83083568;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// beq cr6,0x83083568
	if (cr6.eq) goto loc_83083568;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83070068
	sub_83070068(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83083568
	if (!cr0.eq) goto loc_83083568;
	// li r6,108
	ctx.r6.s64 = 108;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
	// b 0x83083568
	goto loc_83083568;
loc_830833A8:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x830833f8
	if (!cr6.eq) goto loc_830833F8;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x83083568
	if (cr6.eq) goto loc_83083568;
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r4,216(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830833e0
	if (cr0.eq) goto loc_830833E0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8308a8e8
	sub_8308A8E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x830833e4
	goto loc_830833E4;
loc_830833E0:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
loc_830833E4:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
loc_830833EC:
	// bl 0x83046bf8
	sub_83046BF8(ctx, base);
	// stb r26,6(r24)
	PPC_STORE_U8(r24.u32 + 6, r26.u8);
	// b 0x83083568
	goto loc_83083568;
loc_830833F8:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x83083568
	if (cr6.eq) goto loc_83083568;
	// lwz r11,24(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83083414
	if (!cr6.eq) goto loc_83083414;
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
loc_83083414:
	// addi r11,r11,-9
	r11.s64 = r11.s64 + -9;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8308353c
	if (!cr0.eq) goto loc_8308353C;
	// lwz r11,24(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83083440
	if (!cr6.eq) goto loc_83083440;
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
loc_83083440:
	// addi r11,r11,-9
	r11.s64 = r11.s64 + -9;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8308353c
	if (!cr0.eq) goto loc_8308353C;
	// lbz r11,311(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 311);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8308346c
	if (cr0.eq) goto loc_8308346C;
	// cmpwi cr6,r22,4
	cr6.compare<int32_t>(r22.s32, 4, xer);
	// beq cr6,0x8308347c
	if (cr6.eq) goto loc_8308347C;
loc_8308346C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830834b4
	if (!cr6.eq) goto loc_830834B4;
	// cmpwi cr6,r22,4
	cr6.compare<int32_t>(r22.s32, 4, xer);
	// beq cr6,0x830834b4
	if (cr6.eq) goto loc_830834B4;
loc_8308347C:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r15
	ctx.r8.u64 = r15.u64;
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// li r6,109
	ctx.r6.s64 = 109;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// addi r4,r11,-7356
	ctx.r4.s64 = r11.s64 + -7356;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830834B4:
	// li r3,40
	ctx.r3.s64 = 40;
	// stb r21,6(r24)
	PPC_STORE_U8(r24.u32 + 6, r21.u8);
	// lwz r4,216(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// beq 0x83083530
	if (cr0.eq) goto loc_83083530;
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r4,216(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830834f4
	if (cr0.eq) goto loc_830834F4;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8308a8e8
	sub_8308A8E8(ctx, base);
	// b 0x830834f8
	goto loc_830834F8;
loc_830834F4:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
loc_830834F8:
	// lwz r11,216(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 216);
	// stw r21,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r21.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r25,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r25.u32);
	// stw r21,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r21.u32);
	// stw r3,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r3.u32);
	// stw r27,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r27.u32);
	// stw r23,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r23.u32);
	// stb r26,28(r30)
	PPC_STORE_U8(r30.u32 + 28, r26.u8);
	// stb r26,29(r30)
	PPC_STORE_U8(r30.u32 + 29, r26.u8);
	// stw r26,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r26.u32);
	// stw r26,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r26.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// b 0x83083534
	goto loc_83083534;
loc_83083530:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
loc_83083534:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// b 0x830833ec
	goto loc_830833EC;
loc_8308353C:
	// li r6,160
	ctx.r6.s64 = 160;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// addi r4,r11,-7356
	ctx.r4.s64 = r11.s64 + -7356;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_83083564:
	// stw r21,12(r24)
	PPC_STORE_U32(r24.u32 + 12, r21.u32);
loc_83083568:
	// lbz r22,319(r31)
	r22.u64 = PPC_LOAD_U8(r31.u32 + 319);
	// mr. r28,r22
	r28.u64 = r22.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x830836c8
	if (cr0.eq) goto loc_830836C8;
	// cmpwi cr6,r20,2
	cr6.compare<int32_t>(r20.s32, 2, xer);
	// bne cr6,0x830836c8
	if (!cr6.eq) goto loc_830836C8;
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r4,216(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// beq 0x830835e8
	if (cr0.eq) goto loc_830835E8;
	// li r3,36
	ctx.r3.s64 = 36;
	// lwz r4,216(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830835cc
	if (cr0.eq) goto loc_830835CC;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,216(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 216);
	// lwz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// addi r5,r11,-27800
	ctx.r5.s64 = r11.s64 + -27800;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82fe7048
	sub_82FE7048(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x830835d0
	goto loc_830835D0;
loc_830835CC:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
loc_830835D0:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r6,216(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 216);
	// bl 0x830465a8
	sub_830465A8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x830835ec
	goto loc_830835EC;
loc_830835E8:
	// mr r30,r21
	r30.u64 = r21.u64;
loc_830835EC:
	// li r11,22
	r11.s64 = 22;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r21,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r21.u32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// stw r10,36(r30)
	PPC_STORE_U32(r30.u32 + 36, ctx.r10.u32);
	// bne cr6,0x83083624
	if (!cr6.eq) goto loc_83083624;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x83046bf8
	sub_83046BF8(ctx, base);
	// li r11,2
	r11.s64 = 2;
	// stw r11,12(r24)
	PPC_STORE_U32(r24.u32 + 12, r11.u32);
loc_8308361C:
	// li r11,3
	r11.s64 = 3;
	// b 0x83083780
	goto loc_83083780;
loc_83083624:
	// li r3,40
	ctx.r3.s64 = 40;
	// stb r21,6(r24)
	PPC_STORE_U8(r24.u32 + 6, r21.u8);
	// lwz r4,216(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83083674
	if (cr0.eq) goto loc_83083674;
	// lwz r11,216(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 216);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r21,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r21.u32);
	// stw r25,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r25.u32);
	// stw r21,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r21.u32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r30.u32);
	// stw r27,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r27.u32);
	// stw r23,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r23.u32);
	// stb r26,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, r26.u8);
	// stb r26,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, r26.u8);
	// stw r26,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r26.u32);
	// stw r26,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r26.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x83083678
	goto loc_83083678;
loc_83083674:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
loc_83083678:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x83046bf8
	sub_83046BF8(ctx, base);
	// lbz r11,311(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 311);
	// stb r26,6(r24)
	PPC_STORE_U8(r24.u32 + 6, r26.u8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8308361c
	if (!cr0.eq) goto loc_8308361C;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r15
	ctx.r8.u64 = r15.u64;
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// li r6,109
	ctx.r6.s64 = 109;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// addi r4,r11,-7356
	ctx.r4.s64 = r11.s64 + -7356;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830836C8:
	// lbz r11,311(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 311);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83083768
	if (cr0.eq) goto loc_83083768;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x8308361c
	if (!cr6.eq) goto loc_8308361C;
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r4,216(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// beq 0x8308374c
	if (cr0.eq) goto loc_8308374C;
	// li r3,36
	ctx.r3.s64 = 36;
	// lwz r4,216(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83083730
	if (cr0.eq) goto loc_83083730;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,216(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 216);
	// addi r5,r11,-27800
	ctx.r5.s64 = r11.s64 + -27800;
	// lis r11,-32233
	r11.s64 = -2112421888;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r6,-22220(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + -22220);
	// bl 0x82fe7048
	sub_82FE7048(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83083734
	goto loc_83083734;
loc_83083730:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
loc_83083734:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r6,216(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 216);
	// bl 0x830465a8
	sub_830465A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83083750
	goto loc_83083750;
loc_8308374C:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
loc_83083750:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r21,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, r21.u32);
	// bl 0x83046bf8
	sub_83046BF8(ctx, base);
	// li r11,2
	r11.s64 = 2;
	// stb r26,6(r24)
	PPC_STORE_U8(r24.u32 + 6, r26.u8);
	// b 0x83083780
	goto loc_83083780;
loc_83083768:
	// lwz r11,60(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 60);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8308377c
	if (!cr6.eq) goto loc_8308377C;
	// stw r21,32(r24)
	PPC_STORE_U32(r24.u32 + 32, r21.u32);
	// b 0x83083784
	goto loc_83083784;
loc_8308377C:
	// li r11,4
	r11.s64 = 4;
loc_83083780:
	// stw r11,32(r24)
	PPC_STORE_U32(r24.u32 + 32, r11.u32);
loc_83083784:
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// beq cr6,0x830837e4
	if (cr6.eq) goto loc_830837E4;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8306fb18
	sub_8306FB18(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830837dc
	if (!cr0.eq) goto loc_830837DC;
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r6,41
	ctx.r6.s64 = 41;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// b 0x8308380c
	goto loc_8308380C;
loc_830837DC:
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// b 0x830837f8
	goto loc_830837F8;
loc_830837E4:
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(r17.u32, 0, xer);
	// bne cr6,0x830837f4
	if (!cr6.eq) goto loc_830837F4;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8308380c
	if (cr6.eq) goto loc_8308380C;
loc_830837F4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830837F8:
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83081b20
	sub_83081B20(ctx, base);
loc_8308380C:
	// addi r1,r31,240
	ctx.r1.s64 = r31.s64 + 240;
	// b 0x831b0b40
	return;
}

__attribute__((alias("__imp__sub_83083814"))) PPC_WEAK_FUNC(sub_83083814);
PPC_FUNC_IMPL(__imp__sub_83083814) {
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

__attribute__((alias("__imp__sub_83083844"))) PPC_WEAK_FUNC(sub_83083844);
PPC_FUNC_IMPL(__imp__sub_83083844) {
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

__attribute__((alias("__imp__sub_83083874"))) PPC_WEAK_FUNC(sub_83083874);
PPC_FUNC_IMPL(__imp__sub_83083874) {
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

__attribute__((alias("__imp__sub_830838A4"))) PPC_WEAK_FUNC(sub_830838A4);
PPC_FUNC_IMPL(__imp__sub_830838A4) {
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

__attribute__((alias("__imp__sub_830838D4"))) PPC_WEAK_FUNC(sub_830838D4);
PPC_FUNC_IMPL(__imp__sub_830838D4) {
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

__attribute__((alias("__imp__sub_83083904"))) PPC_WEAK_FUNC(sub_83083904);
PPC_FUNC_IMPL(__imp__sub_83083904) {
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

__attribute__((alias("__imp__sub_83083934"))) PPC_WEAK_FUNC(sub_83083934);
PPC_FUNC_IMPL(__imp__sub_83083934) {
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

__attribute__((alias("__imp__sub_83083964"))) PPC_WEAK_FUNC(sub_83083964);
PPC_FUNC_IMPL(__imp__sub_83083964) {
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

__attribute__((alias("__imp__sub_83083998"))) PPC_WEAK_FUNC(sub_83083998);
PPC_FUNC_IMPL(__imp__sub_83083998) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,11
	ctx.r5.s64 = 11;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// lwz r8,160(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// bl 0x830a7f60
	sub_830A7F60(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-6944
	ctx.r5.s64 = r11.s64 + -6944;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// li r25,0
	r25.s64 = 0;
	// li r22,1
	r22.s64 = 1;
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x83083a6c
	if (cr0.eq) goto loc_83083A6C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-6380
	ctx.r4.s64 = r11.s64 + -6380;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83083a68
	if (!cr0.eq) goto loc_83083A68;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r27,r11,32492
	r27.s64 = r11.s64 + 32492;
	// addi r4,r27,-4
	ctx.r4.s64 = r27.s64 + -4;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83083a68
	if (!cr0.eq) goto loc_83083A68;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-6708
	ctx.r4.s64 = r11.s64 + -6708;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83083a60
	if (!cr0.eq) goto loc_83083A60;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83083a6c
	if (cr0.eq) goto loc_83083A6C;
loc_83083A60:
	// mr r28,r25
	r28.u64 = r25.u64;
	// b 0x83083a6c
	goto loc_83083A6C;
loc_83083A68:
	// mr r28,r22
	r28.u64 = r22.u64;
loc_83083A6C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r25,52(r24)
	PPC_STORE_U32(r24.u32 + 52, r25.u32);
	// stw r25,48(r24)
	PPC_STORE_U32(r24.u32 + 48, r25.u32);
	// bl 0x830a72e0
	sub_830A72E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x83071390
	sub_83071390(ctx, base);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lbz r11,25(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 25);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83083ad0
	if (cr0.eq) goto loc_83083AD0;
	// lwz r11,220(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83083ad0
	if (!cr6.eq) goto loc_83083AD0;
	// lwz r5,160(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83083ad0
	if (cr6.eq) goto loc_83083AD0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830771d8
	sub_830771D8(ctx, base);
	// stw r3,220(r31)
	PPC_STORE_U32(r31.u32 + 220, ctx.r3.u32);
loc_83083AD0:
	// lwz r4,220(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x83083afc
	if (cr0.eq) goto loc_83083AFC;
	// lwz r3,0(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83083af8
	if (cr0.eq) goto loc_83083AF8;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// b 0x83083afc
	goto loc_83083AFC;
loc_83083AF8:
	// bl 0x83049068
	sub_83049068(ctx, base);
loc_83083AFC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x83083b18
	if (!cr6.eq) goto loc_83083B18;
	// lis r11,-32219
	r11.s64 = -2111504384;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r22.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7356
	ctx.r4.s64 = r11.s64 + -7356;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_83083B18:
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
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r11,-7608
	ctx.r4.s64 = r11.s64 + -7608;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// li r23,2
	r23.s64 = 2;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83083b54
	if (cr0.eq) goto loc_83083B54;
	// li r11,4
	r11.s64 = 4;
	// stw r11,12(r24)
	PPC_STORE_U32(r24.u32 + 12, r11.u32);
	// b 0x83083b70
	goto loc_83083B70;
loc_83083B54:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-7584
	ctx.r4.s64 = r11.s64 + -7584;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83083d40
	if (cr0.eq) goto loc_83083D40;
	// stw r23,12(r24)
	PPC_STORE_U32(r24.u32 + 12, r23.u32);
loc_83083B70:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-7500
	ctx.r5.s64 = r11.s64 + -7500;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x83083d14
	if (cr0.eq) goto loc_83083D14;
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83083d14
	if (cr0.eq) goto loc_83083D14;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8306f898
	sub_8306F898(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8306f940
	sub_8306F940(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830714b0
	sub_830714B0(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r4,r11,-8608
	ctx.r4.s64 = r11.s64 + -8608;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83083c20
	if (cr0.eq) goto loc_83083C20;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r4,r11,-6244
	ctx.r4.s64 = r11.s64 + -6244;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83083c20
	if (cr0.eq) goto loc_83083C20;
	// mr r25,r22
	r25.u64 = r22.u64;
loc_83083C00:
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83083c74
	if (cr6.eq) goto loc_83083C74;
	// lis r11,-32219
	r11.s64 = -2111504384;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r23.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7356
	ctx.r4.s64 = r11.s64 + -7356;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_83083C20:
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8307e748
	sub_8307E748(ctx, base);
	// lwz r11,56(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83083c00
	if (!cr6.eq) goto loc_83083C00;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,87
	ctx.r6.s64 = 87;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r22.u32);
	// addi r4,r11,-7356
	ctx.r4.s64 = r11.s64 + -7356;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_83083C74:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830a72e0
	sub_830A72E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x83071390
	sub_83071390(ctx, base);
	// lwz r4,220(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x83083cc0
	if (cr0.eq) goto loc_83083CC0;
	// lwz r3,0(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83083cbc
	if (cr0.eq) goto loc_83083CBC;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// b 0x83083cc0
	goto loc_83083CC0;
loc_83083CBC:
	// bl 0x83049068
	sub_83049068(ctx, base);
loc_83083CC0:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83083070
	sub_83083070(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830a7430
	sub_830A7430(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83083d0c
	if (cr0.eq) goto loc_83083D0C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,67
	ctx.r6.s64 = 67;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
loc_83083D0C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b58
	return;
loc_83083D14:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,31
	ctx.r6.s64 = 31;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r22.u32);
	// addi r4,r11,-7356
	ctx.r4.s64 = r11.s64 + -7356;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_83083D40:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r22.u32);
	// addi r4,r11,-7356
	ctx.r4.s64 = r11.s64 + -7356;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_83083D78"))) PPC_WEAK_FUNC(sub_83083D78);
PPC_FUNC_IMPL(__imp__sub_83083D78) {
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
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// addi r5,r11,-7200
	ctx.r5.s64 = r11.s64 + -7200;
	// stw r30,260(r31)
	PPC_STORE_U32(r31.u32 + 260, r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r23,268(r31)
	PPC_STORE_U32(r31.u32 + 268, r23.u32);
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// li r17,0
	r17.s64 = 0;
	// mr r26,r17
	r26.u64 = r17.u64;
	// mr. r22,r3
	r22.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r22.s32, 0, xer);
	// beq 0x83083dd4
	if (cr0.eq) goto loc_83083DD4;
	// lhz r11,0(r22)
	r11.u64 = PPC_LOAD_U16(r22.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83083e2c
	if (!cr0.eq) goto loc_83083E2C;
loc_83083DD4:
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83083dfc
	if (cr0.eq) goto loc_83083DFC;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,11
	ctx.r6.s64 = 11;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
loc_83083DF4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83084410
	goto loc_83084410;
loc_83083DFC:
	// lis r11,-32234
	r11.s64 = -2112487424;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// addi r18,r11,32488
	r18.s64 = r11.s64 + 32488;
	// beq cr6,0x83083e14
	if (cr6.eq) goto loc_83083E14;
	// mr r22,r27
	r22.u64 = r27.u64;
	// b 0x83083e34
	goto loc_83083E34;
loc_83083E14:
	// addi r4,r18,-60
	ctx.r4.s64 = r18.s64 + -60;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306fba0
	sub_8306FBA0(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// li r26,1
	r26.s64 = 1;
	// b 0x83083e34
	goto loc_83083E34;
loc_83083E2C:
	// lis r11,-32234
	r11.s64 = -2112487424;
	// addi r18,r11,32488
	r18.s64 = r11.s64 + 32488;
loc_83083E34:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82fd97d8
	sub_82FD97D8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83083e74
	if (!cr0.eq) goto loc_83083E74;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r11,-8336
	ctx.r7.s64 = r11.s64 + -8336;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// li r6,59
	ctx.r6.s64 = 59;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// b 0x83083df4
	goto loc_83083DF4;
loc_83083E74:
	// addi r29,r30,60
	r29.s64 = r30.s64 + 60;
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r17,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r17.u32);
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
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
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
	// sthx r17,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r17.u16);
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
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r19,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r19.u32);
	// lwz r11,36(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r24,r17
	r24.u64 = r17.u64;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// stw r24,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r24.u32);
	// clrlwi. r29,r28,24
	r29.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x83083f10
	if (!cr0.eq) goto loc_83083F10;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x83083f50
	if (cr6.eq) goto loc_83083F50;
loc_83083F10:
	// addi r5,r31,104
	ctx.r5.s64 = r31.s64 + 104;
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83083f34
	if (!cr0.eq) goto loc_83083F34;
	// mr r24,r17
	r24.u64 = r17.u64;
	// stw r24,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r24.u32);
	// b 0x83083f50
	goto loc_83083F50;
loc_83083F34:
	// lwz r24,0(r3)
	r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r24,0
	cr0.compare<uint32_t>(r24.u32, 0, xer);
	// stw r24,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r24.u32);
	// beq 0x83083f50
	if (cr0.eq) goto loc_83083F50;
	// lbz r11,8(r24)
	r11.u64 = PPC_LOAD_U8(r24.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8308440c
	if (cr0.eq) goto loc_8308440C;
loc_83083F50:
	// cntlzw r11,r29
	r11.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// lwz r8,160(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// clrlwi r5,r11,16
	ctx.r5.u64 = r11.u32 & 0xFFFF;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x830a7f60
	sub_830A7F60(ctx, base);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x83083f88
	if (cr6.eq) goto loc_83083F88;
	// lbz r11,8(r24)
	r11.u64 = PPC_LOAD_U8(r24.u32 + 8);
	// b 0x83083f8c
	goto loc_83083F8C;
loc_83083F88:
	// mr r11,r17
	r11.u64 = r17.u64;
loc_83083F8C:
	// mr r20,r11
	r20.u64 = r11.u64;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// stb r20,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r20.u8);
	// stw r10,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// clrlwi. r11,r20,24
	r11.u64 = r20.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83083fbc
	if (cr0.eq) goto loc_83083FBC;
	// lwz r11,24(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 24);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// stb r17,8(r24)
	PPC_STORE_U8(r24.u32 + 8, r17.u8);
	// b 0x830840c4
	goto loc_830840C4;
loc_83083FBC:
	// li r3,108
	ctx.r3.s64 = 108;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83083fe4
	if (cr0.eq) goto loc_83083FE4;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x83046b58
	sub_83046B58(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x83083fe8
	goto loc_83083FE8;
loc_83083FE4:
	// mr r29,r17
	r29.u64 = r17.u64;
loc_83083FE8:
	// mr r24,r29
	r24.u64 = r29.u64;
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r24,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r24.u32);
	// beq 0x83084000
	if (cr0.eq) goto loc_83084000;
	// li r11,1
	r11.s64 = 1;
	// stb r11,4(r29)
	PPC_STORE_U8(r29.u32 + 4, r11.u8);
loc_83084000:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// stw r10,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r10.u32);
	// bl 0x83054ec8
	sub_83054EC8(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83046380
	sub_83046380(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r11,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r11.u32);
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830840c4
	if (cr0.eq) goto loc_830840C4;
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
	// beq 0x83084064
	if (cr0.eq) goto loc_83084064;
	// bl 0x830a6a78
	sub_830A6A78(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// b 0x83084068
	goto loc_83084068;
loc_83084064:
	// mr r27,r17
	r27.u64 = r17.u64;
loc_83084068:
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lwz r26,68(r23)
	r26.u64 = PPC_LOAD_U32(r23.u32 + 68);
	// lwz r25,64(r23)
	r25.u64 = PPC_LOAD_U32(r23.u32 + 64);
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
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// bl 0x830a6ae8
	sub_830A6AE8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83046c68
	sub_83046C68(ctx, base);
loc_830840C4:
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 136);
	// stw r19,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r19.u32);
	// bl 0x8305c228
	sub_8305C228(ctx, base);
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// stw r24,132(r30)
	PPC_STORE_U32(r30.u32 + 132, r24.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// bl 0x830a72e0
	sub_830A72E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
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
	// beq 0x8308413c
	if (cr0.eq) goto loc_8308413C;
	// lwz r11,220(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8308413c
	if (!cr6.eq) goto loc_8308413C;
	// lwz r5,160(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8308413c
	if (cr0.eq) goto loc_8308413C;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830771d8
	sub_830771D8(ctx, base);
	// stw r3,220(r30)
	PPC_STORE_U32(r30.u32 + 220, ctx.r3.u32);
loc_8308413C:
	// lwz r11,220(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-6944
	ctx.r5.s64 = r11.s64 + -6944;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r27,r17
	r27.u64 = r17.u64;
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x830841b4
	if (cr0.eq) goto loc_830841B4;
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830841b4
	if (cr0.eq) goto loc_830841B4;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r26,r11,-6380
	r26.s64 = r11.s64 + -6380;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830841ac
	if (!cr0.eq) goto loc_830841AC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830841bc
	if (cr0.eq) goto loc_830841BC;
loc_830841AC:
	// li r27,1
	r27.s64 = 1;
	// b 0x830841bc
	goto loc_830841BC;
loc_830841B4:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r26,r11,-6380
	r26.s64 = r11.s64 + -6380;
loc_830841BC:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x830841cc
	if (!cr6.eq) goto loc_830841CC;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x830842bc
	goto loc_830842BC;
loc_830841CC:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r4,r11,-7636
	ctx.r4.s64 = r11.s64 + -7636;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8308424c
	if (cr0.eq) goto loc_8308424C;
	// addi r8,r31,88
	ctx.r8.s64 = r31.s64 + 88;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83082298
	sub_83082298(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830a7430
	sub_830A7430(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830842e0
	if (cr6.eq) goto loc_830842E0;
	// li r6,45
	ctx.r6.s64 = 45;
loc_83084234:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
	// b 0x830842dc
	goto loc_830842DC;
loc_8308424C:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-7668
	ctx.r4.s64 = r11.s64 + -7668;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830842a0
	if (cr0.eq) goto loc_830842A0;
	// addi r8,r31,88
	ctx.r8.s64 = r31.s64 + 88;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83083998
	sub_83083998(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830a7430
	sub_830A7430(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830842e0
	if (cr6.eq) goto loc_830842E0;
	// li r6,46
	ctx.r6.s64 = 46;
	// b 0x83084234
	goto loc_83084234;
loc_830842A0:
	// lwz r11,124(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830842b8
	if (cr6.eq) goto loc_830842B8;
	// li r11,1
	r11.s64 = 1;
	// stb r11,8(r24)
	PPC_STORE_U8(r24.u32 + 8, r11.u8);
	// b 0x830842e0
	goto loc_830842E0;
loc_830842B8:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
loc_830842BC:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83083070
	sub_83083070(ctx, base);
loc_830842DC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_830842E0:
	// b 0x8308430c
	goto loc_8308430C;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// lwz r30,260(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// li r17,0
	r17.s64 = 0;
	// addi r18,r11,32488
	r18.s64 = r11.s64 + 32488;
	// lwz r23,268(r31)
	r23.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r19,92(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// lwz r24,84(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lbz r20,80(r31)
	r20.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// addi r26,r11,-6380
	r26.s64 = r11.s64 + -6380;
loc_8308430C:
	// clrlwi. r11,r20,24
	r11.u64 = r20.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830843b0
	if (!cr0.eq) goto loc_830843B0;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-7564
	ctx.r5.s64 = r11.s64 + -7564;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83071608
	sub_83071608(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83071800
	sub_83071800(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r28,16(r24)
	PPC_STORE_U32(r24.u32 + 16, r28.u32);
	// stw r3,20(r24)
	PPC_STORE_U32(r24.u32 + 20, ctx.r3.u32);
	// beq cr6,0x830843ac
	if (cr6.eq) goto loc_830843AC;
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830843ac
	if (cr0.eq) goto loc_830843AC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830843a0
	if (!cr0.eq) goto loc_830843A0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830843ac
	if (cr0.eq) goto loc_830843AC;
loc_830843A0:
	// li r11,1
	r11.s64 = 1;
	// stb r11,5(r24)
	PPC_STORE_U8(r24.u32 + 5, r11.u8);
	// b 0x830843b0
	goto loc_830843B0;
loc_830843AC:
	// stb r17,5(r24)
	PPC_STORE_U8(r24.u32 + 5, r17.u8);
loc_830843B0:
	// lwz r5,88(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cntlzw r11,r5
	r11.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830843d0
	if (!cr0.eq) goto loc_830843D0;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// stw r17,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r17.u32);
	// bl 0x8305a0d0
	sub_8305A0D0(ctx, base);
loc_830843D0:
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 136);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830843e8
	if (cr0.eq) goto loc_830843E8;
	// addi r4,r11,-1
	ctx.r4.s64 = r11.s64 + -1;
	// bl 0x82fdea08
	sub_82FDEA08(ctx, base);
loc_830843E8:
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// stw r11,132(r30)
	PPC_STORE_U32(r30.u32 + 132, r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
loc_8308440C:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
loc_83084410:
	// addi r1,r31,240
	ctx.r1.s64 = r31.s64 + 240;
	// b 0x831b0b4c
	return;
}

__attribute__((alias("__imp__sub_83084420"))) PPC_WEAK_FUNC(sub_83084420);
PPC_FUNC_IMPL(__imp__sub_83084420) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8308444c
	if (!cr6.eq) goto loc_8308444C;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// bl 0x8306ff48
	sub_8306FF48(ctx, base);
	// b 0x83084460
	goto loc_83084460;
loc_8308444C:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x83084460
	if (!cr6.eq) goto loc_83084460;
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// li r11,1
	r11.s64 = 1;
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, r11.u8);
loc_83084460:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31992
	ctx.r3.s64 = -2096627712;
	// addi r3,r3,17124
	ctx.r3.s64 = ctx.r3.s64 + 17124;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b4c
	return;
}

__attribute__((alias("__imp__sub_83084478"))) PPC_WEAK_FUNC(sub_83084478);
PPC_FUNC_IMPL(__imp__sub_83084478) {
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

__attribute__((alias("__imp__sub_830844A8"))) PPC_WEAK_FUNC(sub_830844A8);
PPC_FUNC_IMPL(__imp__sub_830844A8) {
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

__attribute__((alias("__imp__sub_830844D8"))) PPC_WEAK_FUNC(sub_830844D8);
PPC_FUNC_IMPL(__imp__sub_830844D8) {
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

__attribute__((alias("__imp__sub_83084500"))) PPC_WEAK_FUNC(sub_83084500);
PPC_FUNC_IMPL(__imp__sub_83084500) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x83083d78
	sub_83083D78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x83084570
	if (cr6.eq) goto loc_83084570;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
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
	// beq 0x83084570
	if (cr0.eq) goto loc_83084570;
	// lwz r29,0(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// bne 0x830845b0
	if (!cr0.eq) goto loc_830845B0;
loc_83084570:
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
	// li r6,36
	ctx.r6.s64 = 36;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
loc_830845B0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830845C0"))) PPC_WEAK_FUNC(sub_830845C0);
PPC_FUNC_IMPL(__imp__sub_830845C0) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x8306f940
	sub_8306F940(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306f898
	sub_8306F898(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x83084608
	if (cr6.eq) goto loc_83084608;
	// mr r26,r29
	r26.u64 = r29.u64;
	// b 0x83084618
	goto loc_83084618;
loc_83084608:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830714b0
	sub_830714B0(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
loc_83084618:
	// addi r28,r30,120
	r28.s64 = r30.s64 + 120;
	// lwz r23,12(r30)
	r23.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r31,r30,60
	r31.s64 = r30.s64 + 60;
	// li r25,0
	r25.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r22,0(r28)
	r22.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r27,2
	r27.s64 = 2;
	// stw r25,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r25.u32);
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
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x83084760
	if (cr6.eq) goto loc_83084760;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830846a0
	if (!cr0.eq) goto loc_830846A0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// b 0x830846ac
	goto loc_830846AC;
loc_830846A0:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830709a8
	sub_830709A8(ctx, base);
loc_830846AC:
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830846bc
	if (!cr0.eq) goto loc_830846BC;
loc_830846B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83084858
	goto loc_83084858;
loc_830846BC:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// bl 0x82feeed8
	sub_82FEEED8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x830846b4
	if (cr0.eq) goto loc_830846B4;
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
	// bne cr6,0x830846b4
	if (!cr6.eq) goto loc_830846B4;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r25,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r25.u16);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r3,28(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8308471c
	if (!cr0.eq) goto loc_8308471C;
	// mr r29,r25
	r29.u64 = r25.u64;
	// b 0x83084728
	goto loc_83084728;
loc_8308471C:
	// lwz r29,0(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// bne 0x83084854
	if (!cr0.eq) goto loc_83084854;
loc_83084728:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x83070e50
	sub_83070E50(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x830846b4
	if (cr0.eq) goto loc_830846B4;
	// lbz r11,1(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830846b4
	if (!cr0.eq) goto loc_830846B4;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r27,1
	r27.s64 = 1;
	// bl 0x8306ffa8
	sub_8306FFA8(ctx, base);
	// b 0x8308479c
	goto loc_8308479C;
loc_83084760:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r25,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r25.u16);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83084790
	if (!cr0.eq) goto loc_83084790;
	// mr r29,r25
	r29.u64 = r25.u64;
	// b 0x8308479c
	goto loc_8308479C;
loc_83084790:
	// lwz r29,0(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// bne 0x83084840
	if (!cr0.eq) goto loc_83084840;
loc_8308479C:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r31,r11,-8608
	r31.s64 = r11.s64 + -8608;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830847cc
	if (cr0.eq) goto loc_830847CC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83084840
	if (cr0.eq) goto loc_83084840;
loc_830847CC:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// addi r5,r11,-8336
	ctx.r5.s64 = r11.s64 + -8336;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830a7240
	sub_830A7240(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x83084840
	if (cr0.eq) goto loc_83084840;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83083d78
	sub_83083D78(ctx, base);
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
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
	// lwz r11,100(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 100);
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
	// mr r29,r25
	r29.u64 = r25.u64;
	// beq 0x83084840
	if (cr0.eq) goto loc_83084840;
	// lwz r29,0(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83084840:
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306ffa8
	sub_8306FFA8(ctx, base);
loc_83084854:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_83084858:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_83084868"))) PPC_WEAK_FUNC(sub_83084868);
PPC_FUNC_IMPL(__imp__sub_83084868) {
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
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r30,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r30.u32);
	// clrlwi. r20,r26,24
	r20.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r20.s32, 0, xer);
	// bne 0x830848b8
	if (!cr0.eq) goto loc_830848B8;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-7108
	ctx.r5.s64 = r11.s64 + -7108;
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x830848b8
	if (cr0.eq) goto loc_830848B8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83073f98
	sub_83073F98(ctx, base);
	// b 0x83084f7c
	goto loc_83084F7C;
loc_830848B8:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r25,r11,-7200
	r25.s64 = r11.s64 + -7200;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// mr. r22,r3
	r22.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r22.s32, 0, xer);
	// beq 0x83084f60
	if (cr0.eq) goto loc_83084F60;
	// lhz r11,0(r22)
	r11.u64 = PPC_LOAD_U16(r22.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83084f60
	if (cr0.eq) goto loc_83084F60;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82fd97d8
	sub_82FD97D8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83084928
	if (!cr0.eq) goto loc_83084928;
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
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// li r6,59
	ctx.r6.s64 = 59;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// b 0x83084f78
	goto loc_83084F78;
loc_83084928:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// beq cr6,0x8308495c
	if (cr6.eq) goto loc_8308495C;
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
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
	// bne 0x83084f7c
	if (!cr0.eq) goto loc_83084F7C;
loc_8308495C:
	// cntlzw r11,r20
	r11.u64 = r20.u32 == 0 ? 32 : __builtin_clz(r20.u32);
	// lwz r8,160(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r11,r11,15
	r11.s64 = r11.s64 + 15;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// clrlwi r5,r11,16
	ctx.r5.u64 = r11.u32 & 0xFFFF;
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
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
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
	// beq 0x830849e0
	if (cr0.eq) goto loc_830849E0;
	// lwz r11,220(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830849e0
	if (!cr6.eq) goto loc_830849E0;
	// lwz r5,160(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830849e0
	if (cr0.eq) goto loc_830849E0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830771d8
	sub_830771D8(ctx, base);
	// stw r3,220(r30)
	PPC_STORE_U32(r30.u32 + 220, ctx.r3.u32);
loc_830849E0:
	// lwz r29,220(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// stw r29,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r29.u32);
	// li r21,0
	r21.s64 = 0;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// addi r7,r31,92
	ctx.r7.s64 = r31.s64 + 92;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stb r21,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r21.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r21,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r21.u32);
	// bl 0x830740d8
	sub_830740D8(ctx, base);
	// lbz r19,80(r31)
	r19.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// lwz r18,92(r31)
	r18.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmplwi r19,0
	cr0.compare<uint32_t>(r19.u32, 0, xer);
	// bne 0x83084ac8
	if (!cr0.eq) goto loc_83084AC8;
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(r18.u32, 0, xer);
	// beq cr6,0x83084a54
	if (cr6.eq) goto loc_83084A54;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8306f770
	sub_8306F770(ctx, base);
loc_83084A54:
	// cntlzw r11,r29
	r11.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83084a74
	if (!cr0.eq) goto loc_83084A74;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// stw r21,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r21.u32);
	// bl 0x8305a0d0
	sub_8305A0D0(ctx, base);
loc_83084A74:
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83084aa0
	if (cr0.eq) goto loc_83084AA0;
	// lwz r11,36(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 36);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x83084aa0
	if (!cr6.eq) goto loc_83084AA0;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x83072f80
	sub_83072F80(ctx, base);
	// li r11,2
	r11.s64 = 2;
	// stw r11,28(r23)
	PPC_STORE_U32(r23.u32 + 28, r11.u32);
loc_83084AA0:
	// lwz r3,124(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83084ac8
	if (cr0.eq) goto loc_83084AC8;
	// lwz r11,36(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 36);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x83084ac8
	if (!cr6.eq) goto loc_83084AC8;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x83073700
	sub_83073700(ctx, base);
	// stw r21,28(r23)
	PPC_STORE_U32(r23.u32 + 28, r21.u32);
loc_83084AC8:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// stw r21,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r21.u32);
	// mr r26,r21
	r26.u64 = r21.u64;
	// stw r21,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r21.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// addi r24,r11,-28032
	r24.s64 = r11.s64 + -28032;
	// beq cr6,0x83084c64
	if (cr6.eq) goto loc_83084C64;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r11,-8336
	ctx.r4.s64 = r11.s64 + -8336;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83084ba8
	if (cr0.eq) goto loc_83084BA8;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r11,160(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 160);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83084b44
	if (cr0.eq) goto loc_83084B44;
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83084b44
	if (cr0.eq) goto loc_83084B44;
	// li r6,18
	ctx.r6.s64 = 18;
	// b 0x83084bf0
	goto loc_83084BF0;
loc_83084B44:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83084500
	sub_83084500(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83084c28
	if (cr0.eq) goto loc_83084C28;
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bne cr6,0x83084c28
	if (!cr6.eq) goto loc_83084C28;
	// lbz r11,8(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83084c28
	if (cr0.eq) goto loc_83084C28;
	// lwz r29,36(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fda0f8
	sub_82FDA0F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,120(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r29
	ctx.r5.u64 = r11.u64 + r29.u64;
	// bl 0x830735d0
	sub_830735D0(ctx, base);
	// b 0x83084c28
	goto loc_83084C28;
loc_83084BA8:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-7732
	ctx.r4.s64 = r11.s64 + -7732;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83084c38
	if (cr0.eq) goto loc_83084C38;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r11,160(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 160);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83084c14
	if (cr0.eq) goto loc_83084C14;
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83084c14
	if (cr0.eq) goto loc_83084C14;
	// li r6,19
	ctx.r6.s64 = 19;
loc_83084BF0:
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// b 0x83084c28
	goto loc_83084C28;
loc_83084C14:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8307e330
	sub_8307E330(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
loc_83084C28:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r26,1
	r26.s64 = 1;
	// bl 0x830a7430
	sub_830A7430(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_83084C38:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x83084c64
	if (cr6.eq) goto loc_83084C64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83071a38
	sub_83071A38(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x83084c64
	if (cr0.eq) goto loc_83084C64;
	// li r6,20
	ctx.r6.s64 = 20;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
loc_83084C64:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-6976
	ctx.r5.s64 = r11.s64 + -6976;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r25,r11,-8608
	r25.s64 = r11.s64 + -8608;
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x83084d8c
	if (cr0.eq) goto loc_83084D8C;
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83084cbc
	if (cr0.eq) goto loc_83084CBC;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// li r6,61
	ctx.r6.s64 = 61;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// b 0x83084d8c
	goto loc_83084D8C;
loc_83084CBC:
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83084d8c
	if (cr0.eq) goto loc_83084D8C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306f940
	sub_8306F940(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306f898
	sub_8306F898(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830714b0
	sub_830714B0(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83084d1c
	if (cr0.eq) goto loc_83084D1C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-6244
	ctx.r4.s64 = r11.s64 + -6244;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83084d8c
	if (!cr0.eq) goto loc_83084D8C;
loc_83084D1C:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83072030
	sub_83072030(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83071ab0
	sub_83071AB0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// bl 0x830845c0
	sub_830845C0(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83084d70
	if (cr0.eq) goto loc_83084D70;
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// b 0x83084d8c
	goto loc_83084D8C;
loc_83084D70:
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8307e3a8
	sub_8307E3A8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
loc_83084D8C:
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// beq cr6,0x83084ddc
	if (cr6.eq) goto loc_83084DDC;
	// lwz r11,56(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 56);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r10,32(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 32);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x83084db4
	if (!cr6.eq) goto loc_83084DB4;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x83084e8c
	if (cr6.eq) goto loc_83084E8C;
loc_83084DB4:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// b 0x83084e8c
	goto loc_83084E8C;
loc_83084DDC:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stw r11,32(r23)
	PPC_STORE_U32(r23.u32 + 32, r11.u32);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// stw r11,56(r23)
	PPC_STORE_U32(r23.u32 + 56, r11.u32);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83084e00
	if (cr6.eq) goto loc_83084E00;
	// li r11,5
	r11.s64 = 5;
	// b 0x83084e10
	goto loc_83084E10;
loc_83084E00:
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83084e14
	if (cr6.eq) goto loc_83084E14;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
loc_83084E10:
	// stw r11,24(r23)
	PPC_STORE_U32(r23.u32 + 24, r11.u32);
loc_83084E14:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// beq cr6,0x83084e60
	if (cr6.eq) goto loc_83084E60;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-7348
	ctx.r5.s64 = r11.s64 + -7348;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// mr. r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x83084e60
	if (cr0.eq) goto loc_83084E60;
	// lhz r11,0(r8)
	r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83084e60
	if (cr0.eq) goto loc_83084E60;
	// addi r7,r31,84
	ctx.r7.s64 = r31.s64 + 84;
	// addi r6,r31,88
	ctx.r6.s64 = r31.s64 + 88;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83085940
	sub_83085940(ctx, base);
loc_83084E60:
	// lis r11,-31947
	r11.s64 = -2093678592;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r4,r11,15524
	ctx.r4.s64 = r11.s64 + 15524;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x830a7350
	sub_830A7350(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x83084e8c
	if (cr0.eq) goto loc_83084E8C;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8307ec40
	sub_8307EC40(ctx, base);
loc_83084E8C:
	// lwz r7,88(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x83084f04
	if (!cr6.eq) goto loc_83084F04;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83084f04
	if (!cr6.eq) goto loc_83084F04;
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// bne cr6,0x83084f4c
	if (!cr6.eq) goto loc_83084F4C;
	// li r11,1
	r11.s64 = 1;
	// li r3,76
	ctx.r3.s64 = 76;
	// stw r11,24(r23)
	PPC_STORE_U32(r23.u32 + 24, r11.u32);
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83084ef4
	if (cr0.eq) goto loc_83084EF4;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r9,216(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r8,6
	ctx.r8.s64 = 6;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r5,r11,-27800
	ctx.r5.s64 = r11.s64 + -27800;
	// li r7,11
	ctx.r7.s64 = 11;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x830899f8
	sub_830899F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83084ef8
	goto loc_83084EF8;
loc_83084EF4:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
loc_83084EF8:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8306f7d8
	sub_8306F7D8(ctx, base);
	// b 0x83084f4c
	goto loc_83084F4C;
loc_83084F04:
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(r18.u32, 0, xer);
	// beq cr6,0x83084f4c
	if (cr6.eq) goto loc_83084F4C;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83070370
	sub_83070370(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83084f4c
	if (!cr0.eq) goto loc_83084F4C;
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// bne cr6,0x83084f4c
	if (!cr6.eq) goto loc_83084F4C;
	// lwz r11,48(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 48);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// rlwinm r30,r11,0,30,28
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x8306f770
	sub_8306F770(ctx, base);
	// stw r30,48(r23)
	PPC_STORE_U32(r23.u32 + 48, r30.u32);
loc_83084F4C:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// b 0x83084f7c
	goto loc_83084F7C;
loc_83084F60:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,15
	ctx.r6.s64 = 15;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
loc_83084F78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83084F7C:
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// b 0x831b0b50
	return;
}

__attribute__((alias("__imp__sub_83084F84"))) PPC_WEAK_FUNC(sub_83084F84);
PPC_FUNC_IMPL(__imp__sub_83084F84) {
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

__attribute__((alias("__imp__sub_83084FAC"))) PPC_WEAK_FUNC(sub_83084FAC);
PPC_FUNC_IMPL(__imp__sub_83084FAC) {
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

__attribute__((alias("__imp__sub_83084FE0"))) PPC_WEAK_FUNC(sub_83084FE0);
PPC_FUNC_IMPL(__imp__sub_83084FE0) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r16,0
	r16.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r14,r16
	r14.u64 = r16.u64;
	// stw r25,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, r25.u32);
	// bl 0x830a72e0
	sub_830A72E0(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// beq 0x83085638
	if (cr0.eq) goto loc_83085638;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r29,r11,-8108
	r29.s64 = r11.s64 + -8108;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r28,r11,-8140
	r28.s64 = r11.s64 + -8140;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r27,r11,-8124
	r27.s64 = r11.s64 + -8124;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r15,r11,-8488
	r15.s64 = r11.s64 + -8488;
loc_83085030:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83085084
	if (cr0.eq) goto loc_83085084;
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,92(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// bl 0x83070f90
	sub_83070F90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// bl 0x8305a0d8
	sub_8305A0D8(ctx, base);
	// li r14,1
	r14.s64 = 1;
	// b 0x830850ec
	goto loc_830850EC;
loc_83085084:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830850a8
	if (cr0.eq) goto loc_830850A8;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83073b20
	sub_83073B20(ctx, base);
	// b 0x830850ec
	goto loc_830850EC;
loc_830850A8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830850cc
	if (cr0.eq) goto loc_830850CC;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8307fdb8
	sub_8307FDB8(ctx, base);
	// b 0x830850ec
	goto loc_830850EC;
loc_830850CC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830850fc
	if (cr0.eq) goto loc_830850FC;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83073b88
	sub_83073B88(ctx, base);
loc_830850EC:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x830a7430
	sub_830A7430(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// bne 0x83085030
	if (!cr0.eq) goto loc_83085030;
loc_830850FC:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x83085638
	if (cr6.eq) goto loc_83085638;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r18,r11,-7896
	r18.s64 = r11.s64 + -7896;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r22,r11,-8152
	r22.s64 = r11.s64 + -8152;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r17,r11,-8404
	r17.s64 = r11.s64 + -8404;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r21,r11,-8384
	r21.s64 = r11.s64 + -8384;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r20,r11,-8248
	r20.s64 = r11.s64 + -8248;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r25,r11,-28032
	r25.s64 = r11.s64 + -28032;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r24,r11,-8336
	r24.s64 = r11.s64 + -8336;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r23,r11,-7732
	r23.s64 = r11.s64 + -7732;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r19,r11,-7200
	r19.s64 = r11.s64 + -7200;
loc_8308514C:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// mr r30,r16
	r30.u64 = r16.u64;
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x830851e4
	if (cr0.eq) goto loc_830851E4;
	// addi r30,r31,60
	r30.s64 = r31.s64 + 60;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r16,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r16.u32);
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
	// sthx r16,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r16.u16);
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_830851E4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83085224
	if (cr0.eq) goto loc_83085224;
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,92(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// bl 0x83070f90
	sub_83070F90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// bl 0x8305a0d8
	sub_8305A0D8(ctx, base);
	// li r14,1
	r14.s64 = 1;
	// b 0x83085624
	goto loc_83085624;
loc_83085224:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830852dc
	if (cr0.eq) goto loc_830852DC;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8308529c
	if (cr6.eq) goto loc_8308529C;
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8308529c
	if (cr0.eq) goto loc_8308529C;
	// lwz r28,156(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// lwz r27,0(r28)
	r27.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x830708e0
	sub_830708E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830852b4
	if (!cr0.eq) goto loc_830852B4;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// bl 0x830708e0
	sub_830708E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830852b4
	if (!cr0.eq) goto loc_830852B4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8305c228
	sub_8305C228(ctx, base);
loc_8308529C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8307ce28
	sub_8307CE28(ctx, base);
	// b 0x83085624
	goto loc_83085624;
loc_830852B4:
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
loc_830852BC:
	// li r6,100
	ctx.r6.s64 = 100;
loc_830852C0:
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
loc_830852C4:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// b 0x83085624
	goto loc_83085624;
loc_830852DC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83085378
	if (cr0.eq) goto loc_83085378;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x83085354
	if (cr6.eq) goto loc_83085354;
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83085354
	if (cr0.eq) goto loc_83085354;
	// lwz r28,156(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x830708e0
	sub_830708E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8308536c
	if (!cr0.eq) goto loc_8308536C;
	// lwz r28,4(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830708e0
	sub_830708E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8308536c
	if (!cr0.eq) goto loc_8308536C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8305c228
	sub_8305C228(ctx, base);
loc_83085354:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83083d78
	sub_83083D78(ctx, base);
	// b 0x83085624
	goto loc_83085624;
loc_8308536C:
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// b 0x830852bc
	goto loc_830852BC;
loc_83085378:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830853f8
	if (cr0.eq) goto loc_830853F8;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x830853e4
	if (cr6.eq) goto loc_830853E4;
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830853e4
	if (cr0.eq) goto loc_830853E4;
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// lwz r28,8(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830708e0
	sub_830708E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830853d4
	if (cr0.eq) goto loc_830853D4;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
loc_830853C8:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r6,101
	ctx.r6.s64 = 101;
	// b 0x830852c0
	goto loc_830852C0;
loc_830853D4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8305c228
	sub_8305C228(ctx, base);
loc_830853E4:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83084868
	sub_83084868(ctx, base);
	// b 0x83085624
	goto loc_83085624;
loc_830853F8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83085498
	if (cr0.eq) goto loc_83085498;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x83085480
	if (cr6.eq) goto loc_83085480;
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8308545c
	if (cr0.eq) goto loc_8308545C;
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// lwz r28,16(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830708e0
	sub_830708E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8308544c
	if (cr0.eq) goto loc_8308544C;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// b 0x830853c8
	goto loc_830853C8;
loc_8308544C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8305c228
	sub_8305C228(ctx, base);
loc_8308545C:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
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
	// bne 0x83085624
	if (!cr0.eq) goto loc_83085624;
loc_83085480:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830814c8
	sub_830814C8(ctx, base);
	// b 0x83085624
	goto loc_83085624;
loc_83085498:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83085544
	if (cr0.eq) goto loc_83085544;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8308552c
	if (cr6.eq) goto loc_8308552C;
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83085508
	if (cr0.eq) goto loc_83085508;
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// lwz r28,12(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830708e0
	sub_830708E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830854f8
	if (cr0.eq) goto loc_830854F8;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r6,53
	ctx.r6.s64 = 53;
	// b 0x830852c4
	goto loc_830852C4;
loc_830854F8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8305c228
	sub_8305C228(ctx, base);
loc_83085508:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
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
	// bne 0x83085624
	if (!cr0.eq) goto loc_83085624;
loc_8308552C:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830802d8
	sub_830802D8(ctx, base);
	// b 0x83085624
	goto loc_83085624;
loc_83085544:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830855f4
	if (cr0.eq) goto loc_830855F4;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x830855e0
	if (cr6.eq) goto loc_830855E0;
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830855a8
	if (cr0.eq) goto loc_830855A8;
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// lwz r28,20(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830708e0
	sub_830708E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83085598
	if (cr0.eq) goto loc_83085598;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// b 0x830853c8
	goto loc_830853C8;
loc_83085598:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8305c228
	sub_8305C228(ctx, base);
loc_830855A8:
	// addi r11,r31,60
	r11.s64 = r31.s64 + 60;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r16,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, r16.u16);
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
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
	// bne 0x83085624
	if (!cr0.eq) goto loc_83085624;
loc_830855E0:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8307d278
	sub_8307D278(ctx, base);
	// b 0x83085624
	goto loc_83085624;
loc_830855F4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x83085618
	if (cr0.eq) goto loc_83085618;
	// bl 0x83079510
	sub_83079510(ctx, base);
	// b 0x83085624
	goto loc_83085624;
loc_83085618:
	// li r6,33
	ctx.r6.s64 = 33;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// bl 0x830702a0
	sub_830702A0(ctx, base);
loc_83085624:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x830a7430
	sub_830A7430(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// bne 0x8308514c
	if (!cr0.eq) goto loc_8308514C;
	// lwz r25,284(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
loc_83085638:
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lbz r11,25(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 25);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8308567c
	if (cr0.eq) goto loc_8308567C;
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// lwz r5,92(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8308567c
	if (cr6.eq) goto loc_8308567C;
	// clrlwi. r11,r14,24
	r11.u64 = r14.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8308567c
	if (!cr0.eq) goto loc_8308567C;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830771d8
	sub_830771D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// bl 0x8305a0d8
	sub_8305A0D8(ctx, base);
loc_8308567C:
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// lwz r29,56(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x830856e8
	if (cr0.eq) goto loc_830856E8;
	// lwz r28,4(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r30,r16
	r30.u64 = r16.u64;
	// lwz r27,60(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// beq 0x830856e0
	if (cr0.eq) goto loc_830856E0;
loc_830856A0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8308ea58
	sub_8308EA58(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8308ea58
	sub_8308EA58(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,0(r26)
	ctx.r6.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x83083d78
	sub_83083D78(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// blt cr6,0x830856a0
	if (cr6.lt) goto loc_830856A0;
loc_830856E0:
	// stw r16,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r16.u32);
	// stw r16,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r16.u32);
loc_830856E8:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831b0b40
	return;
}

__attribute__((alias("__imp__sub_830856F0"))) PPC_WEAK_FUNC(sub_830856F0);
PPC_FUNC_IMPL(__imp__sub_830856F0) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8306f898
	sub_8306F898(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830714b0
	sub_830714B0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8306f940
	sub_8306F940(ctx, base);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// addi r29,r31,120
	r29.s64 = r31.s64 + 120;
	// lwz r22,12(r31)
	r22.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r24,2
	r24.s64 = 2;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r23,0(r29)
	r23.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, r30.s32, xer);
	// beq cr6,0x8308587c
	if (cr6.eq) goto loc_8308587C;
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83085790
	if (cr0.eq) goto loc_83085790;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830709a8
	sub_830709A8(ctx, base);
loc_83085790:
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830857c8
	if (!cr0.eq) goto loc_830857C8;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,159
	ctx.r6.s64 = 159;
loc_830857A0:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
loc_830857A8:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8308592c
	goto loc_8308592C;
loc_830857C8:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// bl 0x82feeed8
	sub_82FEEED8(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// beq 0x83085868
	if (cr0.eq) goto loc_83085868;
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
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83085868
	if (!cr6.eq) goto loc_83085868;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// bne 0x83085908
	if (!cr0.eq) goto loc_83085908;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x83070e50
	sub_83070E50(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x8308585c
	if (cr0.eq) goto loc_8308585C;
	// lbz r11,1(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8308585c
	if (!cr0.eq) goto loc_8308585C;
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
	// b 0x830858a8
	goto loc_830858A8;
loc_8308585C:
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// li r6,39
	ctx.r6.s64 = 39;
	// b 0x830857a0
	goto loc_830857A0;
loc_83085868:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r11,-28480
	ctx.r5.s64 = r11.s64 + -28480;
	// li r6,72
	ctx.r6.s64 = 72;
	// b 0x830857a8
	goto loc_830857A8;
loc_8308587C:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// bne 0x83085908
	if (!cr0.eq) goto loc_83085908;
loc_830858A8:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r5,r11,-8248
	ctx.r5.s64 = r11.s64 + -8248;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x830a7240
	sub_830A7240(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x830858e0
	if (cr0.eq) goto loc_830858E0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83084868
	sub_83084868(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// bne 0x83085908
	if (!cr0.eq) goto loc_83085908;
loc_830858E0:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r6,39
	ctx.r6.s64 = 39;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
loc_83085908:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r23,r11
	cr6.compare<uint32_t>(r23.u32, r11.u32, xer);
	// beq cr6,0x83085928
	if (cr6.eq) goto loc_83085928;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8306ffa8
	sub_8306FFA8(ctx, base);
loc_83085928:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_8308592C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_83085940"))) PPC_WEAK_FUNC(sub_83085940);
PPC_FUNC_IMPL(__imp__sub_83085940) {
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
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// stw r24,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r24.u32);
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// stw r30,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r30.u32);
	// bl 0x830856f0
	sub_830856F0(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// beq 0x83085cb8
	if (cr0.eq) goto loc_83085CB8;
	// cmplw cr6,r24,r25
	cr6.compare<uint32_t>(r24.u32, r25.u32, xer);
	// bne cr6,0x8308598c
	if (!cr6.eq) goto loc_8308598C;
loc_83085984:
	// li r11,1
	r11.s64 = 1;
	// b 0x830859a8
	goto loc_830859A8;
loc_8308598C:
	// lwz r11,80(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 80);
	// b 0x830859a0
	goto loc_830859A0;
loc_83085994:
	// cmplw cr6,r11,r24
	cr6.compare<uint32_t>(r11.u32, r24.u32, xer);
	// beq cr6,0x83085984
	if (cr6.eq) goto loc_83085984;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
loc_830859A0:
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83085994
	if (!cr0.eq) goto loc_83085994;
loc_830859A8:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq 0x830859e0
	if (cr0.eq) goto loc_830859E0;
	// lwz r7,8(r24)
	ctx.r7.u64 = PPC_LOAD_U32(r24.u32 + 8);
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
	// li r6,164
	ctx.r6.s64 = 164;
	// lwz r7,16(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// b 0x83085cb8
	goto loc_83085CB8;
loc_830859E0:
	// lwz r11,8(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x83071b48
	sub_83071B48(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83085cb8
	if (cr0.eq) goto loc_83085CB8;
	// stw r25,80(r24)
	PPC_STORE_U32(r24.u32 + 80, r25.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83085a64
	if (!cr6.eq) goto loc_83085A64;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83085a64
	if (!cr6.eq) goto loc_83085A64;
	// lwz r11,56(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 56);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// lwz r11,32(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// beq 0x83085a48
	if (cr0.eq) goto loc_83085A48;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,32(r24)
	PPC_STORE_U32(r24.u32 + 32, r11.u32);
	// stw r10,24(r24)
	PPC_STORE_U32(r24.u32 + 24, ctx.r10.u32);
	// b 0x83085a64
	goto loc_83085A64;
loc_83085A48:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83085a64
	if (cr0.eq) goto loc_83085A64;
	// stw r11,56(r24)
	PPC_STORE_U32(r24.u32 + 56, r11.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// stw r11,24(r24)
	PPC_STORE_U32(r24.u32 + 24, r11.u32);
loc_83085A64:
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r3,184(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// lwz r26,16(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r29,32(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82fea480
	sub_82FEA480(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83085a98
	if (cr0.eq) goto loc_83085A98;
	// lwz r28,0(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// bne 0x83085be4
	if (!cr0.eq) goto loc_83085BE4;
loc_83085A98:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// beq cr6,0x83085b9c
	if (cr6.eq) goto loc_83085B9C;
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
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// beq 0x83085b9c
	if (cr0.eq) goto loc_83085B9C;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r3,44(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 44);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82fea480
	sub_82FEA480(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83085b34
	if (!cr0.eq) goto loc_83085B34;
	// li r28,0
	r28.s64 = 0;
loc_83085AF0:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,120(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// bl 0x83070eb8
	sub_83070EB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83085b9c
	if (cr0.eq) goto loc_83085B9C;
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
	// beq 0x83085b80
	if (cr0.eq) goto loc_83085B80;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,216(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x83070930
	sub_83070930(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x83085b84
	goto loc_83085B84;
loc_83085B34:
	// lwz r28,0(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// beq 0x83085af0
	if (cr0.eq) goto loc_83085AF0;
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
	// beq 0x83085b68
	if (cr0.eq) goto loc_83085B68;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x83070688
	sub_83070688(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x83085b6c
	goto loc_83085B6C;
loc_83085B68:
	// li r6,0
	ctx.r6.s64 = 0;
loc_83085B6C:
	// lwz r3,184(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// b 0x83085b90
	goto loc_83085B90;
loc_83085B80:
	// li r6,0
	ctx.r6.s64 = 0;
loc_83085B84:
	// lwz r3,44(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 44);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_83085B90:
	// bl 0x83057788
	sub_83057788(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x83085be4
	if (!cr6.eq) goto loc_83085BE4;
loc_83085B9C:
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
	// beq 0x83085bcc
	if (cr0.eq) goto loc_83085BCC;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,216(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x83070930
	sub_83070930(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x83085bd0
	goto loc_83085BD0;
loc_83085BCC:
	// li r6,0
	ctx.r6.s64 = 0;
loc_83085BD0:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,184(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x83057788
	sub_83057788(ctx, base);
loc_83085BE4:
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
loc_83085BFC:
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
	// beq 0x83085c88
	if (cr0.eq) goto loc_83085C88;
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
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82fea480
	sub_82FEA480(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83085bfc
	if (cr0.eq) goto loc_83085BFC;
	// lwz r28,0(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// beq 0x83085bfc
	if (cr0.eq) goto loc_83085BFC;
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
	// bne 0x83085bfc
	if (!cr0.eq) goto loc_83085BFC;
	// addi r4,r31,228
	ctx.r4.s64 = r31.s64 + 228;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8305c228
	sub_8305C228(ctx, base);
	// b 0x83085bfc
	goto loc_83085BFC;
loc_83085C88:
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8307bd90
	sub_8307BD90(ctx, base);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8307bff8
	sub_8307BFF8(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83070828
	sub_83070828(ctx, base);
loc_83085CB8:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_83085CC0"))) PPC_WEAK_FUNC(sub_83085CC0);
PPC_FUNC_IMPL(__imp__sub_83085CC0) {
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

__attribute__((alias("__imp__sub_83085CF0"))) PPC_WEAK_FUNC(sub_83085CF0);
PPC_FUNC_IMPL(__imp__sub_83085CF0) {
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

__attribute__((alias("__imp__sub_83085D20"))) PPC_WEAK_FUNC(sub_83085D20);
PPC_FUNC_IMPL(__imp__sub_83085D20) {
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

__attribute__((alias("__imp__sub_83085D50"))) PPC_WEAK_FUNC(sub_83085D50);
PPC_FUNC_IMPL(__imp__sub_83085D50) {
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

__attribute__((alias("__imp__sub_83085D78"))) PPC_WEAK_FUNC(sub_83085D78);
PPC_FUNC_IMPL(__imp__sub_83085D78) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x83085dac
	if (!cr6.eq) goto loc_83085DAC;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x83085db4
	if (!cr6.eq) goto loc_83085DB4;
loc_83085DA0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83085DA4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b70
	return;
loc_83085DAC:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x83085dbc
	if (!cr6.eq) goto loc_83085DBC;
loc_83085DB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83085da4
	goto loc_83085DA4;
loc_83085DBC:
	// lwz r4,16(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83085de0
	if (cr0.eq) goto loc_83085DE0;
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwz r10,32(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83085da0
	if (cr6.eq) goto loc_83085DA0;
loc_83085DE0:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83085f90
	if (cr6.eq) goto loc_83085F90;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83085f90
	if (cr6.eq) goto loc_83085F90;
	// lis r11,-32233
	r11.s64 = -2112421888;
	// lwz r31,32(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwz r11,-22320(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22320);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x83085db4
	if (cr6.eq) goto loc_83085DB4;
	// lis r11,-32233
	r11.s64 = -2112421888;
	// lwz r11,-22316(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22316);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x83085db4
	if (cr6.eq) goto loc_83085DB4;
	// lis r11,-32233
	r11.s64 = -2112421888;
	// lwz r11,-22220(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22220);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x83085db4
	if (cr6.eq) goto loc_83085DB4;
	// lis r11,-32233
	r11.s64 = -2112421888;
	// lwz r11,-22224(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22224);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x83085db4
	if (cr6.eq) goto loc_83085DB4;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r29,16(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x83085db4
	if (cr0.eq) goto loc_83085DB4;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x82feeed8
	sub_82FEEED8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x83085db4
	if (cr0.eq) goto loc_83085DB4;
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
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83085db4
	if (cr0.eq) goto loc_83085DB4;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x83085db4
	if (cr0.eq) goto loc_83085DB4;
	// lwz r31,80(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 80);
	// li r27,0
	r27.s64 = 0;
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x83085f14
	if (cr0.eq) goto loc_83085F14;
	// lwz r28,16(r26)
	r28.u64 = PPC_LOAD_U32(r26.u32 + 16);
loc_83085ECC:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83085ef4
	if (cr0.eq) goto loc_83085EF4;
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwz r10,32(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83085f04
	if (cr6.eq) goto loc_83085F04;
loc_83085EF4:
	// lwz r31,80(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// bne 0x83085ecc
	if (!cr0.eq) goto loc_83085ECC;
	// b 0x83085f14
	goto loc_83085F14;
loc_83085F04:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83085db4
	if (!cr0.eq) goto loc_83085DB4;
	// li r27,1
	r27.s64 = 1;
loc_83085F14:
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83085db4
	if (cr0.eq) goto loc_83085DB4;
	// lwz r11,56(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83085f5c
	if (!cr0.eq) goto loc_83085F5C;
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83085f50
	if (cr0.eq) goto loc_83085F50;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x83085f50
	if (cr6.eq) goto loc_83085F50;
	// rlwinm. r11,r10,0,29,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// bne 0x83085f54
	if (!cr0.eq) goto loc_83085F54;
loc_83085F50:
	// li r11,1
	r11.s64 = 1;
loc_83085F54:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// b 0x83085da4
	goto loc_83085DA4;
loc_83085F5C:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// and. r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x83085db4
	if (!cr0.eq) goto loc_83085DB4;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
loc_83085F6C:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83085da0
	if (cr6.eq) goto loc_83085DA0;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// and. r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 & ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x83085db4
	if (!cr0.eq) goto loc_83085DB4;
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83085f6c
	if (!cr0.eq) goto loc_83085F6C;
	// b 0x83085da0
	goto loc_83085DA0;
loc_83085F90:
	// lis r11,-32233
	r11.s64 = -2112421888;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,160
	ctx.r6.s64 = 160;
	// addi r4,r11,-22480
	ctx.r4.s64 = r11.s64 + -22480;
	// li r5,113
	ctx.r5.s64 = 113;
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

__attribute__((alias("__imp__sub_83085FC0"))) PPC_WEAK_FUNC(sub_83085FC0);
PPC_FUNC_IMPL(__imp__sub_83085FC0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// clrlwi. r28,r7,24
	r28.u64 = ctx.r7.u32 & 0xFF;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bne 0x83085fe4
	if (!cr0.eq) goto loc_83085FE4;
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(r11.u32, r23.u32, xer);
	// beq cr6,0x83086034
	if (cr6.eq) goto loc_83086034;
loc_83085FE4:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// lis r24,-32233
	r24.s64 = -2112421888;
	// lis r25,-32233
	r25.s64 = -2112421888;
	// lis r26,-32233
	r26.s64 = -2112421888;
	// lis r27,-32233
	r27.s64 = -2112421888;
	// beq cr6,0x8308603c
	if (cr6.eq) goto loc_8308603C;
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(r11.u32, r23.u32, xer);
	// beq cr6,0x8308603c
	if (cr6.eq) goto loc_8308603C;
	// lwz r10,-22320(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + -22320);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8308603c
	if (cr6.eq) goto loc_8308603C;
	// lwz r10,-22316(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + -22316);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8308603c
	if (cr6.eq) goto loc_8308603C;
	// lwz r10,-22220(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + -22220);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8308603c
	if (cr6.eq) goto loc_8308603C;
	// lwz r10,-22224(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + -22224);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8308603c
	if (cr6.eq) goto loc_8308603C;
loc_83086034:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830860f0
	goto loc_830860F0;
loc_8308603C:
	// lwz r3,44(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830860ec
	if (cr0.eq) goto loc_830860EC;
	// lwz r4,16(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x82fea480
	sub_82FEA480(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830860ec
	if (cr0.eq) goto loc_830860EC;
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x830860ec
	if (cr0.eq) goto loc_830860EC;
	// lwz r29,4(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r31,0
	r31.s64 = 0;
	// cmpwi r29,0
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// ble 0x830860ec
	if (!cr0.gt) goto loc_830860EC;
loc_8308607C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8308ea58
	sub_8308EA58(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// bne cr6,0x830860a8
	if (!cr6.eq) goto loc_830860A8;
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(r11.u32, r23.u32, xer);
	// beq cr6,0x83086034
	if (cr6.eq) goto loc_83086034;
	// b 0x830860e0
	goto loc_830860E0;
loc_830860A8:
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(r11.u32, r23.u32, xer);
	// beq cr6,0x830860e0
	if (cr6.eq) goto loc_830860E0;
	// lwz r10,-22320(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + -22320);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x830860e0
	if (cr6.eq) goto loc_830860E0;
	// lwz r10,-22316(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + -22316);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x830860e0
	if (cr6.eq) goto loc_830860E0;
	// lwz r10,-22220(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + -22220);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x830860e0
	if (cr6.eq) goto loc_830860E0;
	// lwz r10,-22224(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + -22224);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83086034
	if (!cr6.eq) goto loc_83086034;
loc_830860E0:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(r31.s32, r29.s32, xer);
	// blt cr6,0x8308607c
	if (cr6.lt) goto loc_8308607C;
loc_830860EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830860F0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_830860F8"))) PPC_WEAK_FUNC(sub_830860F8);
PPC_FUNC_IMPL(__imp__sub_830860F8) {
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

__attribute__((alias("__imp__sub_83086150"))) PPC_WEAK_FUNC(sub_83086150);
PPC_FUNC_IMPL(__imp__sub_83086150) {
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
	// rlwinm r29,r30,2,0,29
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
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
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830861B0"))) PPC_WEAK_FUNC(sub_830861B0);
PPC_FUNC_IMPL(__imp__sub_830861B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830861C8"))) PPC_WEAK_FUNC(sub_830861C8);
PPC_FUNC_IMPL(__imp__sub_830861C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x830860f8
	sub_830860F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830861D0"))) PPC_WEAK_FUNC(sub_830861D0);
PPC_FUNC_IMPL(__imp__sub_830861D0) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x830860f8
	sub_830860F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83086150
	sub_83086150(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x83086238
	if (cr6.eq) goto loc_83086238;
	// li r11,0
	r11.s64 = 0;
	// subf r8,r29,r28
	ctx.r8.s64 = r28.s64 - r29.s64;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_83086210:
	// add r9,r11,r29
	ctx.r9.u64 = r11.u64 + r29.u64;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwzx r6,r8,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stwx r6,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + r11.u32, ctx.r6.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stwx r9,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + r11.u32, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x83086210
	if (!cr0.eq) goto loc_83086210;
loc_83086238:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83086240"))) PPC_WEAK_FUNC(sub_83086240);
PPC_FUNC_IMPL(__imp__sub_83086240) {
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
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// blt cr6,0x83086284
	if (cr6.lt) goto loc_83086284;
	// lis r11,-32233
	r11.s64 = -2112421888;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,116
	ctx.r6.s64 = 116;
	// addi r4,r11,-22400
	ctx.r4.s64 = r11.s64 + -22400;
	// li r5,135
	ctx.r5.s64 = 135;
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
loc_83086284:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
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

__attribute__((alias("__imp__sub_830862A0"))) PPC_WEAK_FUNC(sub_830862A0);
PPC_FUNC_IMPL(__imp__sub_830862A0) {
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
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// blt cr6,0x830862e4
	if (cr6.lt) goto loc_830862E4;
	// lis r11,-32233
	r11.s64 = -2112421888;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,116
	ctx.r6.s64 = 116;
	// addi r4,r11,-22400
	ctx.r4.s64 = r11.s64 + -22400;
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
loc_830862E4:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
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

__attribute__((alias("__imp__sub_83086300"))) PPC_WEAK_FUNC(sub_83086300);
PPC_FUNC_IMPL(__imp__sub_83086300) {
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
	// bl 0x830a27e0
	sub_830A27E0(ctx, base);
	// lis r11,-32233
	r11.s64 = -2112421888;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-22312
	r11.s64 = r11.s64 + -22312;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_83086350"))) PPC_WEAK_FUNC(sub_83086350);
PPC_FUNC_IMPL(__imp__sub_83086350) {
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
	// lis r11,-32233
	r11.s64 = -2112421888;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-22312
	r11.s64 = r11.s64 + -22312;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// addi r11,r11,21456
	r11.s64 = r11.s64 + 21456;
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

__attribute__((alias("__imp__sub_830863B8"))) PPC_WEAK_FUNC(sub_830863B8);
PPC_FUNC_IMPL(__imp__sub_830863B8) {
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
	// bl 0x8305bf60
	sub_8305BF60(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830863E0"))) PPC_WEAK_FUNC(sub_830863E0);
PPC_FUNC_IMPL(__imp__sub_830863E0) {
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
	// bl 0x83086350
	sub_83086350(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83086410
	if (cr0.eq) goto loc_83086410;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_83086410:
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

__attribute__((alias("__imp__sub_83086430"))) PPC_WEAK_FUNC(sub_83086430);
PPC_FUNC_IMPL(__imp__sub_83086430) {
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r4,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r4.u32);
	// stw r5,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r5.u32);
	// stw r6,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r6.u32);
	// stw r7,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r7.u32);
	// stw r8,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r8.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// stb r10,32(r31)
	PPC_STORE_U8(r31.u32 + 32, ctx.r10.u8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r9,188(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// li r11,0
	r11.s64 = 0;
	// stw r10,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r9,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_830864A8"))) PPC_WEAK_FUNC(sub_830864A8);
PPC_FUNC_IMPL(__imp__sub_830864A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830864fc
	if (cr6.eq) goto loc_830864FC;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// stw r4,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r4.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830864fc
	if (cr0.eq) goto loc_830864FC;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x830864fc
	if (!cr6.eq) goto loc_830864FC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r3.u32);
loc_830864FC:
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

__attribute__((alias("__imp__sub_83086518"))) PPC_WEAK_FUNC(sub_83086518);
PPC_FUNC_IMPL(__imp__sub_83086518) {
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
	// lis r11,-32233
	r11.s64 = -2112421888;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-22200
	r11.s64 = r11.s64 + -22200;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83086564
	if (cr0.eq) goto loc_83086564;
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
loc_83086564:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r11,r11,-3652
	r11.s64 = r11.s64 + -3652;
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

__attribute__((alias("__imp__sub_83086588"))) PPC_WEAK_FUNC(sub_83086588);
PPC_FUNC_IMPL(__imp__sub_83086588) {
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
	// bl 0x830547b0
	sub_830547B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830865B0"))) PPC_WEAK_FUNC(sub_830865B0);
PPC_FUNC_IMPL(__imp__sub_830865B0) {
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
	// bl 0x83086518
	sub_83086518(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830865e0
	if (cr0.eq) goto loc_830865E0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_830865E0:
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

__attribute__((alias("__imp__sub_83086608"))) PPC_WEAK_FUNC(sub_83086608);
PPC_FUNC_IMPL(__imp__sub_83086608) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83086640
	if (cr0.eq) goto loc_83086640;
	// bl 0x82fe6e90
	sub_82FE6E90(ctx, base);
	// b 0x83086678
	goto loc_83086678;
loc_83086640:
	// li r3,36
	ctx.r3.s64 = 36;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83086670
	if (cr0.eq) goto loc_83086670;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82fe7048
	sub_82FE7048(ctx, base);
	// b 0x83086674
	goto loc_83086674;
loc_83086670:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83086674:
	// stw r3,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r3.u32);
loc_83086678:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83086680"))) PPC_WEAK_FUNC(sub_83086680);
PPC_FUNC_IMPL(__imp__sub_83086680) {
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
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
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

__attribute__((alias("__imp__sub_830866B8"))) PPC_WEAK_FUNC(sub_830866B8);
PPC_FUNC_IMPL(__imp__sub_830866B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830866ec
	if (cr0.eq) goto loc_830866EC;
	// bl 0x82fe6ed8
	sub_82FE6ED8(ctx, base);
	// b 0x83086720
	goto loc_83086720;
loc_830866EC:
	// li r3,36
	ctx.r3.s64 = 36;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83086718
	if (cr0.eq) goto loc_83086718;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82fe7170
	sub_82FE7170(ctx, base);
	// b 0x8308671c
	goto loc_8308671C;
loc_83086718:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8308671C:
	// stw r3,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r3.u32);
loc_83086720:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83086728"))) PPC_WEAK_FUNC(sub_83086728);
PPC_FUNC_IMPL(__imp__sub_83086728) {
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
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
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

__attribute__((alias("__imp__sub_83086758"))) PPC_WEAK_FUNC(sub_83086758);
PPC_FUNC_IMPL(__imp__sub_83086758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32233
	r11.s64 = -2112421888;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r9,-2
	ctx.r9.s64 = -2;
	// addi r10,r11,-22200
	ctx.r10.s64 = r11.s64 + -22200;
	// li r11,0
	r11.s64 = 0;
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83086788"))) PPC_WEAK_FUNC(sub_83086788);
PPC_FUNC_IMPL(__imp__sub_83086788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31947
	r11.s64 = -2093678592;
	// addi r3,r11,15640
	ctx.r3.s64 = r11.s64 + 15640;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83086798"))) PPC_WEAK_FUNC(sub_83086798);
PPC_FUNC_IMPL(__imp__sub_83086798) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lha r11,0(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 0));
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830867f8
	if (cr0.eq) goto loc_830867F8;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x83001d80
	sub_83001D80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x83001478
	sub_83001478(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x83001478
	sub_83001478(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U8(r30.u32 + 20);
	// bl 0x83001380
	sub_83001380(ctx, base);
	// b 0x83086838
	goto loc_83086838;
loc_830867F8:
	// lis r11,-31947
	r11.s64 = -2093678592;
	// addi r4,r11,13936
	ctx.r4.s64 = r11.s64 + 13936;
	// bl 0x83001e40
	sub_83001E40(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// addi r4,r30,20
	ctx.r4.s64 = r30.s64 + 20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83001600
	sub_83001600(ctx, base);
loc_83086838:
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

__attribute__((alias("__imp__sub_83086850"))) PPC_WEAK_FUNC(sub_83086850);
PPC_FUNC_IMPL(__imp__sub_83086850) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830868a4
	if (cr6.eq) goto loc_830868A4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83001478
	sub_83001478(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83001d80
	sub_83001D80(ctx, base);
	// b 0x830868b0
	goto loc_830868B0;
loc_830868A4:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83001478
	sub_83001478(ctx, base);
loc_830868B0:
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

__attribute__((alias("__imp__sub_830868C8"))) PPC_WEAK_FUNC(sub_830868C8);
PPC_FUNC_IMPL(__imp__sub_830868C8) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x83086908
	if (cr6.lt) goto loc_83086908;
	// beq cr6,0x830868fc
	if (cr6.eq) goto loc_830868FC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83086918
	goto loc_83086918;
loc_830868FC:
	// lis r11,-31947
	r11.s64 = -2093678592;
	// addi r4,r11,15508
	ctx.r4.s64 = r11.s64 + 15508;
	// b 0x83086910
	goto loc_83086910;
loc_83086908:
	// lis r11,-31947
	r11.s64 = -2093678592;
	// addi r4,r11,15516
	ctx.r4.s64 = r11.s64 + 15516;
loc_83086910:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83001e40
	sub_83001E40(ctx, base);
loc_83086918:
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

__attribute__((alias("__imp__sub_83086938"))) PPC_WEAK_FUNC(sub_83086938);
PPC_FUNC_IMPL(__imp__sub_83086938) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// bl 0x82fe6290
	sub_82FE6290(ctx, base);
	// lis r11,-32233
	r11.s64 = -2112421888;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stb r28,24(r30)
	PPC_STORE_U8(r30.u32 + 24, r28.u8);
	// addi r11,r11,-21896
	r11.s64 = r11.s64 + -21896;
	// stw r29,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r29.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bne cr6,0x830869a8
	if (!cr6.eq) goto loc_830869A8;
	// lis r11,-32233
	r11.s64 = -2112421888;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,15
	ctx.r6.s64 = 15;
	// addi r4,r11,-21960
	ctx.r4.s64 = r11.s64 + -21960;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82fe9310
	sub_82FE9310(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-8244
	ctx.r4.s64 = r11.s64 + -8244;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830869A8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830869B4"))) PPC_WEAK_FUNC(sub_830869B4);
PPC_FUNC_IMPL(__imp__sub_830869B4) {
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
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// bl 0x82fe60a0
	sub_82FE60A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830869E8"))) PPC_WEAK_FUNC(sub_830869E8);
PPC_FUNC_IMPL(__imp__sub_830869E8) {
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
	// lis r11,-32233
	r11.s64 = -2112421888;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-21896
	r11.s64 = r11.s64 + -21896;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lbz r11,24(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 24);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83086a40
	if (cr0.eq) goto loc_83086A40;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83086a40
	if (cr0.eq) goto loc_83086A40;
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
loc_83086A40:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe60a0
	sub_82FE60A0(ctx, base);
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

__attribute__((alias("__imp__sub_83086A60"))) PPC_WEAK_FUNC(sub_83086A60);
PPC_FUNC_IMPL(__imp__sub_83086A60) {
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
	// bl 0x82fe60a0
	sub_82FE60A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83086A88"))) PPC_WEAK_FUNC(sub_83086A88);
PPC_FUNC_IMPL(__imp__sub_83086A88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83086AA0"))) PPC_WEAK_FUNC(sub_83086AA0);
PPC_FUNC_IMPL(__imp__sub_83086AA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83086AB8"))) PPC_WEAK_FUNC(sub_83086AB8);
PPC_FUNC_IMPL(__imp__sub_83086AB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83086AD0"))) PPC_WEAK_FUNC(sub_83086AD0);
PPC_FUNC_IMPL(__imp__sub_83086AD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
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

__attribute__((alias("__imp__sub_83086AE8"))) PPC_WEAK_FUNC(sub_83086AE8);
PPC_FUNC_IMPL(__imp__sub_83086AE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83086B00"))) PPC_WEAK_FUNC(sub_83086B00);
PPC_FUNC_IMPL(__imp__sub_83086B00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83086B18"))) PPC_WEAK_FUNC(sub_83086B18);
PPC_FUNC_IMPL(__imp__sub_83086B18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83086B30"))) PPC_WEAK_FUNC(sub_83086B30);
PPC_FUNC_IMPL(__imp__sub_83086B30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83086B48"))) PPC_WEAK_FUNC(sub_83086B48);
PPC_FUNC_IMPL(__imp__sub_83086B48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
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

__attribute__((alias("__imp__sub_83086B60"))) PPC_WEAK_FUNC(sub_83086B60);
PPC_FUNC_IMPL(__imp__sub_83086B60) {
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
	// bl 0x830869e8
	sub_830869E8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83086b90
	if (cr0.eq) goto loc_83086B90;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_83086B90:
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

__attribute__((alias("__imp__sub_83086BB0"))) PPC_WEAK_FUNC(sub_83086BB0);
PPC_FUNC_IMPL(__imp__sub_83086BB0) {
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
	// lis r11,-32233
	r11.s64 = -2112421888;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-21736
	r11.s64 = r11.s64 + -21736;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x83086bdc
	if (cr0.eq) goto loc_83086BDC;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_83086BDC:
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

__attribute__((alias("__imp__sub_83086BF8"))) PPC_WEAK_FUNC(sub_83086BF8);
PPC_FUNC_IMPL(__imp__sub_83086BF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32233
	r11.s64 = -2112421888;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// addi r11,r11,-21692
	r11.s64 = r11.s64 + -21692;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83086C20"))) PPC_WEAK_FUNC(sub_83086C20);
PPC_FUNC_IMPL(__imp__sub_83086C20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32233
	r11.s64 = -2112421888;
	// addi r11,r11,-21736
	r11.s64 = r11.s64 + -21736;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83086C38"))) PPC_WEAK_FUNC(sub_83086C38);
PPC_FUNC_IMPL(__imp__sub_83086C38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// li r29,0
	r29.s64 = 0;
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// addi r10,r10,-21648
	ctx.r10.s64 = ctx.r10.s64 + -21648;
	// stw r5,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r5.u32);
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stw r29,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r29.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// stb r29,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r29.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83086CA0"))) PPC_WEAK_FUNC(sub_83086CA0);
PPC_FUNC_IMPL(__imp__sub_83086CA0) {
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
	// bl 0x82fe0728
	sub_82FE0728(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83086CD0"))) PPC_WEAK_FUNC(sub_83086CD0);
PPC_FUNC_IMPL(__imp__sub_83086CD0) {
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
	// lis r11,-32233
	r11.s64 = -2112421888;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-21648
	r11.s64 = r11.s64 + -21648;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
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
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r11,r11,-22132
	r11.s64 = r11.s64 + -22132;
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

__attribute__((alias("__imp__sub_83086D38"))) PPC_WEAK_FUNC(sub_83086D38);
PPC_FUNC_IMPL(__imp__sub_83086D38) {
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
	// bl 0x82fe0728
	sub_82FE0728(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83086D60"))) PPC_WEAK_FUNC(sub_83086D60);
PPC_FUNC_IMPL(__imp__sub_83086D60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	r11.s64 = 0;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stbx r11,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, r11.u8);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stb r11,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, r11.u8);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stb r11,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, r11.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stb r11,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, r11.u8);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83086DA8"))) PPC_WEAK_FUNC(sub_83086DA8);
PPC_FUNC_IMPL(__imp__sub_83086DA8) {
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
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83086e1c
	if (cr6.lt) goto loc_83086E1C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r5,r11,4
	ctx.r5.s64 = r11.s64 + 4;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
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
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
loc_83086E1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83086E28"))) PPC_WEAK_FUNC(sub_83086E28);
PPC_FUNC_IMPL(__imp__sub_83086E28) {
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
	// bl 0x83086cd0
	sub_83086CD0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83086e58
	if (cr0.eq) goto loc_83086E58;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_83086E58:
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

__attribute__((alias("__imp__sub_83086E78"))) PPC_WEAK_FUNC(sub_83086E78);
PPC_FUNC_IMPL(__imp__sub_83086E78) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x83086ec4
	if (cr6.eq) goto loc_83086EC4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83086da8
	sub_83086DA8(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_83086EC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83086ED0"))) PPC_WEAK_FUNC(sub_83086ED0);
PPC_FUNC_IMPL(__imp__sub_83086ED0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32233
	r11.s64 = -2112421888;
	// mulli r10,r4,12
	ctx.r10.s64 = ctx.r4.s64 * 12;
	// addi r11,r11,-21452
	r11.s64 = r11.s64 + -21452;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x83086f08
	if (cr0.eq) goto loc_83086F08;
	// clrlwi r9,r5,16
	ctx.r9.u64 = ctx.r5.u32 & 0xFFFF;
loc_83086EF0:
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// beq cr6,0x83086f40
	if (cr6.eq) goto loc_83086F40;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x83086ef0
	if (!cr0.eq) goto loc_83086EF0;
loc_83086F08:
	// lbz r11,16448(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16448);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83086f38
	if (cr0.eq) goto loc_83086F38;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// addi r11,r11,13880
	r11.s64 = r11.s64 + 13880;
	// lbzx r11,r10,r11
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83086f38
	if (cr0.eq) goto loc_83086F38;
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beqlr 
	if (cr0.eq) return;
loc_83086F38:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83086F40:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83086F48"))) PPC_WEAK_FUNC(sub_83086F48);
PPC_FUNC_IMPL(__imp__sub_83086F48) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// stw r11,16408(r31)
	PPC_STORE_U32(r31.u32 + 16408, r11.u32);
	// stw r11,16412(r31)
	PPC_STORE_U32(r31.u32 + 16412, r11.u32);
	// stw r11,16416(r31)
	PPC_STORE_U32(r31.u32 + 16416, r11.u32);
	// stw r11,16420(r31)
	PPC_STORE_U32(r31.u32 + 16420, r11.u32);
	// stw r11,16424(r31)
	PPC_STORE_U32(r31.u32 + 16424, r11.u32);
	// stw r11,16428(r31)
	PPC_STORE_U32(r31.u32 + 16428, r11.u32);
	// stw r11,16432(r31)
	PPC_STORE_U32(r31.u32 + 16432, r11.u32);
	// stw r11,16436(r31)
	PPC_STORE_U32(r31.u32 + 16436, r11.u32);
	// stw r11,16440(r31)
	PPC_STORE_U32(r31.u32 + 16440, r11.u32);
	// stw r11,16444(r31)
	PPC_STORE_U32(r31.u32 + 16444, r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stb r11,16448(r31)
	PPC_STORE_U8(r31.u32 + 16448, r11.u8);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// stw r6,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r6.u32);
	// li r6,16384
	ctx.r6.s64 = 16384;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// stw r9,16452(r31)
	PPC_STORE_U32(r31.u32 + 16452, ctx.r9.u32);
	// lwz r3,-16132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -16132);
	// bl 0x82ffe2b0
	sub_82FFE2B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// bne 0x8308700c
	if (!cr0.eq) goto loc_8308700C;
	// lwz r6,16452(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 16452);
	// lis r11,-32233
	r11.s64 = -2112421888;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,-21404
	ctx.r4.s64 = r11.s64 + -21404;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,98
	ctx.r6.s64 = 98;
	// li r5,237
	ctx.r5.s64 = 237;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82ff4c48
	sub_82FF4C48(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-8012
	ctx.r4.s64 = r11.s64 + -8012;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_8308700C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,16452(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16452);
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-28984
	ctx.r4.s64 = r11.s64 + -28984;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,16448(r31)
	PPC_STORE_U8(r31.u32 + 16448, r11.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83087048"))) PPC_WEAK_FUNC(sub_83087048);
PPC_FUNC_IMPL(__imp__sub_83087048) {
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
	// lwz r3,16452(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16452);
	// lwz r4,16408(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16408);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,16452(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16452);
	// lwz r4,16416(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16416);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,16452(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16452);
	// lwz r4,16424(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16424);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,16452(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16452);
	// lwz r4,16432(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16432);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,16452(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16452);
	// lwz r4,16440(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16440);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,16452(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16452);
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8308710c
	if (cr0.eq) goto loc_8308710C;
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
loc_8308710C:
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

__attribute__((alias("__imp__sub_83087120"))) PPC_WEAK_FUNC(sub_83087120);
PPC_FUNC_IMPL(__imp__sub_83087120) {
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
	// addi r11,r6,-2
	r11.s64 = ctx.r6.s64 + -2;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r25
	r28.u64 = r25.u64;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// rlwinm r26,r11,27,31,31
	r26.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// beq cr6,0x830871e4
	if (cr6.eq) goto loc_830871E4;
	// addi r30,r31,20
	r30.s64 = r31.s64 + 20;
	// li r27,0
	r27.s64 = 0;
loc_83087158:
	// cmplwi cr6,r28,16384
	cr6.compare<uint32_t>(r28.u32, 16384, xer);
	// li r5,16384
	ctx.r5.s64 = 16384;
	// bgt cr6,0x83087168
	if (cr6.gt) goto loc_83087168;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_83087168:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,16384
	ctx.r7.s64 = 16384;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x830871d0
	if (cr0.eq) goto loc_830871D0;
	// add r11,r5,r31
	r11.u64 = ctx.r5.u64 + r31.u64;
	// stbx r27,r30,r5
	PPC_STORE_U8(r30.u32 + ctx.r5.u32, r27.u8);
	// add r10,r5,r31
	ctx.r10.u64 = ctx.r5.u64 + r31.u64;
	// add r9,r5,r31
	ctx.r9.u64 = ctx.r5.u64 + r31.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stb r27,21(r11)
	PPC_STORE_U8(r11.u32 + 21, r27.u8);
	// stb r27,22(r10)
	PPC_STORE_U8(ctx.r10.u32 + 22, r27.u8);
	// stb r27,23(r9)
	PPC_STORE_U8(ctx.r9.u32 + 23, r27.u8);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830871D0:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf. r28,r11,r28
	r28.s64 = r28.s64 - r11.s64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r11,r29
	r29.u64 = r11.u64 + r29.u64;
	// bne 0x83087158
	if (!cr0.eq) goto loc_83087158;
loc_830871E4:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_830871F0"))) PPC_WEAK_FUNC(sub_830871F0);
PPC_FUNC_IMPL(__imp__sub_830871F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r3,8(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83087208"))) PPC_WEAK_FUNC(sub_83087208);
PPC_FUNC_IMPL(__imp__sub_83087208) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,38
	r11.s64 = 38;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lhz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,86
	ctx.r4.s64 = ctx.r1.s64 + 86;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, r11.u16);
	// li r11,35
	r11.s64 = 35;
	// lwz r7,16452(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 16452);
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, r11.u16);
	// li r11,120
	r11.s64 = 120;
	// sth r11,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, r11.u16);
	// bl 0x82fd9bb8
	sub_82FD9BB8(ctx, base);
	// lhz r11,80(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83087288
	if (cr0.eq) goto loc_83087288;
	// lhz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// b 0x83087270
	goto loc_83087270;
loc_83087268:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
loc_83087270:
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x83087268
	if (!cr0.eq) goto loc_83087268;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r10,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r10.s64 = r11.s32 >> 1;
	// b 0x8308728c
	goto loc_8308728C;
loc_83087288:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8308728C:
	// rlwinm r11,r10,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r8,59
	ctx.r8.s64 = 59;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r30,r1,82
	r30.s64 = ctx.r1.s64 + 82;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sthx r8,r11,r9
	PPC_STORE_U16(r11.u32 + ctx.r9.u32, ctx.r8.u16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// sthx r10,r11,r30
	PPC_STORE_U16(r11.u32 + r30.u32, ctx.r10.u16);
	// bl 0x830873c0
	sub_830873C0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

__attribute__((alias("__imp__sub_830872D8"))) PPC_WEAK_FUNC(sub_830872D8);
PPC_FUNC_IMPL(__imp__sub_830872D8) {
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
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830873b0
	if (!cr6.eq) goto loc_830873B0;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83087338
	if (cr6.eq) goto loc_83087338;
	// lhz r11,0(r6)
	r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83087338
	if (cr0.eq) goto loc_83087338;
	// addi r11,r6,2
	r11.s64 = ctx.r6.s64 + 2;
	// b 0x83087320
	goto loc_83087320;
loc_8308731C:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
loc_83087320:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8308731c
	if (!cr0.eq) goto loc_8308731C;
	// subf r11,r6,r11
	r11.s64 = r11.s64 - ctx.r6.s64;
	// srawi r5,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r5.s64 = r11.s32 >> 1;
	// b 0x8308733c
	goto loc_8308733C;
loc_83087338:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_8308733C:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r28,r30,20
	r28.s64 = r30.s64 + 20;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,16384
	ctx.r7.s64 = 16384;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// add r11,r31,r30
	r11.u64 = r31.u64 + r30.u64;
	// addi r27,r31,4
	r27.s64 = r31.s64 + 4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stb r29,20(r11)
	PPC_STORE_U8(r11.u32 + 20, r29.u8);
	// stb r29,21(r11)
	PPC_STORE_U8(r11.u32 + 21, r29.u8);
	// stb r29,22(r11)
	PPC_STORE_U8(r11.u32 + 22, r29.u8);
	// stb r29,23(r11)
	PPC_STORE_U8(r11.u32 + 23, r29.u8);
	// lwz r3,16452(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16452);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r3,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r3.u32);
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// stw r31,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r31.u32);
loc_830873B0:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_830873C0"))) PPC_WEAK_FUNC(sub_830873C0);
PPC_FUNC_IMPL(__imp__sub_830873C0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r6,999
	cr6.compare<int32_t>(ctx.r6.s32, 999, xer);
	// bne cr6,0x830873e0
	if (!cr6.eq) goto loc_830873E0;
	// lwz r26,0(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x830873e4
	goto loc_830873E4;
loc_830873E0:
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
loc_830873E4:
	// cmpwi cr6,r7,999
	cr6.compare<int32_t>(ctx.r7.s32, 999, xer);
	// bne cr6,0x830873f4
	if (!cr6.eq) goto loc_830873F4;
	// lwz r25,12(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// b 0x830873f8
	goto loc_830873F8;
loc_830873F4:
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
loc_830873F8:
	// cmpwi cr6,r25,1
	cr6.compare<int32_t>(r25.s32, 1, xer);
	// bne cr6,0x83087410
	if (!cr6.eq) goto loc_83087410;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83087720
	sub_83087720(ctx, base);
	// b 0x8308757c
	goto loc_8308757C;
loc_83087410:
	// rlwinm r11,r5,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// add r27,r11,r4
	r27.u64 = r11.u64 + ctx.r4.u64;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// bne cr6,0x83087444
	if (!cr6.eq) goto loc_83087444;
	// cmplw cr6,r4,r27
	cr6.compare<uint32_t>(ctx.r4.u32, r27.u32, xer);
	// bge cr6,0x8308757c
	if (!cr6.lt) goto loc_8308757C;
	// subf r11,r4,r27
	r11.s64 = r27.s64 - ctx.r4.s64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// srawi r5,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r5.s64 = r11.s32 >> 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83087120
	sub_83087120(ctx, base);
	// b 0x8308757c
	goto loc_8308757C;
loc_83087444:
	// cmplw cr6,r4,r27
	cr6.compare<uint32_t>(ctx.r4.u32, r27.u32, xer);
	// bge cr6,0x8308757c
	if (!cr6.lt) goto loc_8308757C;
	// lis r11,-32233
	r11.s64 = -2112421888;
	// addi r28,r11,-21520
	r28.s64 = r11.s64 + -21520;
loc_83087454:
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(r29.u32, r27.u32, xer);
	// bge cr6,0x8308757c
	if (!cr6.lt) goto loc_8308757C;
loc_83087460:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lhz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83086ed0
	sub_83086ED0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83087484
	if (!cr0.eq) goto loc_83087484;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// cmplw cr6,r8,r27
	cr6.compare<uint32_t>(ctx.r8.u32, r27.u32, xer);
	// blt cr6,0x83087460
	if (cr6.lt) goto loc_83087460;
loc_83087484:
	// cmplw cr6,r8,r29
	cr6.compare<uint32_t>(ctx.r8.u32, r29.u32, xer);
	// ble cr6,0x830874b0
	if (!cr6.gt) goto loc_830874B0;
	// subf r11,r29,r8
	r11.s64 = ctx.r8.s64 - r29.s64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// srawi r5,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r5.s64 = r11.s32 >> 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83087120
	sub_83087120(ctx, base);
	// rlwinm r11,r3,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r11,r29
	r29.u64 = r11.u64 + r29.u64;
	// b 0x83087574
	goto loc_83087574;
loc_830874B0:
	// cmplw cr6,r8,r27
	cr6.compare<uint32_t>(ctx.r8.u32, r27.u32, xer);
	// bge cr6,0x83087574
	if (!cr6.lt) goto loc_83087574;
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// cmpwi cr6,r11,34
	cr6.compare<int32_t>(r11.s32, 34, xer);
	// beq cr6,0x83087534
	if (cr6.eq) goto loc_83087534;
	// cmpwi cr6,r11,38
	cr6.compare<int32_t>(r11.s32, 38, xer);
	// beq cr6,0x83087524
	if (cr6.eq) goto loc_83087524;
	// cmpwi cr6,r11,39
	cr6.compare<int32_t>(r11.s32, 39, xer);
	// beq cr6,0x83087514
	if (cr6.eq) goto loc_83087514;
	// cmpwi cr6,r11,60
	cr6.compare<int32_t>(r11.s32, 60, xer);
	// beq cr6,0x83087504
	if (cr6.eq) goto loc_83087504;
	// cmpwi cr6,r11,62
	cr6.compare<int32_t>(r11.s32, 62, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x830874f4
	if (cr6.eq) goto loc_830874F4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83087208
	sub_83087208(ctx, base);
	// b 0x83087570
	goto loc_83087570;
loc_830874F4:
	// addi r30,r31,16428
	r30.s64 = r31.s64 + 16428;
	// addi r6,r28,28
	ctx.r6.s64 = r28.s64 + 28;
	// addi r5,r31,16424
	ctx.r5.s64 = r31.s64 + 16424;
	// b 0x83087544
	goto loc_83087544;
loc_83087504:
	// addi r30,r31,16436
	r30.s64 = r31.s64 + 16436;
	// addi r6,r28,40
	ctx.r6.s64 = r28.s64 + 40;
	// addi r5,r31,16432
	ctx.r5.s64 = r31.s64 + 16432;
	// b 0x83087540
	goto loc_83087540;
loc_83087514:
	// addi r30,r31,16412
	r30.s64 = r31.s64 + 16412;
	// addi r6,r28,12
	ctx.r6.s64 = r28.s64 + 12;
	// addi r5,r31,16408
	ctx.r5.s64 = r31.s64 + 16408;
	// b 0x83087540
	goto loc_83087540;
loc_83087524:
	// addi r30,r31,16420
	r30.s64 = r31.s64 + 16420;
	// addi r5,r31,16416
	ctx.r5.s64 = r31.s64 + 16416;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// b 0x83087540
	goto loc_83087540;
loc_83087534:
	// addi r30,r31,16444
	r30.s64 = r31.s64 + 16444;
	// addi r6,r28,52
	ctx.r6.s64 = r28.s64 + 52;
	// addi r5,r31,16440
	ctx.r5.s64 = r31.s64 + 16440;
loc_83087540:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_83087544:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x830872d8
	sub_830872D8(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83087570:
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
loc_83087574:
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(r29.u32, r27.u32, xer);
	// blt cr6,0x83087454
	if (cr6.lt) goto loc_83087454;
loc_8308757C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_83087588"))) PPC_WEAK_FUNC(sub_83087588);
PPC_FUNC_IMPL(__imp__sub_83087588) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830875d4
	if (cr6.eq) goto loc_830875D4;
	// lhz r11,0(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830875d4
	if (cr0.eq) goto loc_830875D4;
	// addi r11,r4,2
	r11.s64 = ctx.r4.s64 + 2;
	// b 0x830875bc
	goto loc_830875BC;
loc_830875B8:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
loc_830875BC:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x830875b8
	if (!cr0.eq) goto loc_830875B8;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r5,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r5.s64 = r11.s32 >> 1;
	// b 0x830875d8
	goto loc_830875D8;
loc_830875D4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830875D8:
	// li r7,999
	ctx.r7.s64 = 999;
	// li r6,999
	ctx.r6.s64 = 999;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830873c0
	sub_830873C0(ctx, base);
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

__attribute__((alias("__imp__sub_83087600"))) PPC_WEAK_FUNC(sub_83087600);
PPC_FUNC_IMPL(__imp__sub_83087600) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// li r7,999
	ctx.r7.s64 = 999;
	// li r6,999
	ctx.r6.s64 = 999;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, r11.u16);
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, r11.u16);
	// bl 0x830873c0
	sub_830873C0(ctx, base);
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

__attribute__((alias("__imp__sub_83087650"))) PPC_WEAK_FUNC(sub_83087650);
PPC_FUNC_IMPL(__imp__sub_83087650) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,38
	r11.s64 = 38;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,8
	ctx.r5.s64 = 8;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, r11.u16);
	// li r11,35
	r11.s64 = 35;
	// addi r4,r1,86
	ctx.r4.s64 = ctx.r1.s64 + 86;
	// lwz r7,16452(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 16452);
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, r11.u16);
	// li r11,120
	r11.s64 = 120;
	// sth r11,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, r11.u16);
	// bl 0x82fd99f0
	sub_82FD99F0(ctx, base);
	// lhz r11,80(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830876d0
	if (cr0.eq) goto loc_830876D0;
	// lhz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// b 0x830876b8
	goto loc_830876B8;
loc_830876B0:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
loc_830876B8:
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x830876b0
	if (!cr0.eq) goto loc_830876B0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r10,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r10.s64 = r11.s32 >> 1;
	// b 0x830876d4
	goto loc_830876D4;
loc_830876D0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_830876D4:
	// rlwinm r11,r10,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r8,59
	ctx.r8.s64 = 59;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r30,r1,82
	r30.s64 = ctx.r1.s64 + 82;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sthx r8,r11,r9
	PPC_STORE_U16(r11.u32 + ctx.r9.u32, ctx.r8.u16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// sthx r10,r11,r30
	PPC_STORE_U16(r11.u32 + r30.u32, ctx.r10.u16);
	// bl 0x830873c0
	sub_830873C0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

__attribute__((alias("__imp__sub_83087720"))) PPC_WEAK_FUNC(sub_83087720);
PPC_FUNC_IMPL(__imp__sub_83087720) {
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
	// rlwinm r11,r5,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// add r28,r11,r4
	r28.u64 = r11.u64 + ctx.r4.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r28
	cr6.compare<uint32_t>(ctx.r4.u32, r28.u32, xer);
	// bge cr6,0x8308781c
	if (!cr6.lt) goto loc_8308781C;
loc_83087748:
	// mr r30,r31
	r30.u64 = r31.u64;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// bge cr6,0x8308781c
	if (!cr6.lt) goto loc_8308781C;
loc_83087754:
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lhz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U16(r30.u32 + 0);
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
	// beq 0x83087780
	if (cr0.eq) goto loc_83087780;
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// blt cr6,0x83087754
	if (cr6.lt) goto loc_83087754;
loc_83087780:
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// ble cr6,0x830877ac
	if (!cr6.gt) goto loc_830877AC;
	// subf r11,r31,r30
	r11.s64 = r30.s64 - r31.s64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// srawi r5,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r5.s64 = r11.s32 >> 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830873c0
	sub_830873C0(ctx, base);
	// mr r31,r30
	r31.u64 = r30.u64;
	// b 0x83087814
	goto loc_83087814;
loc_830877AC:
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r10,r11,0,0,21
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFC00;
	// cmplwi cr6,r10,55296
	cr6.compare<uint32_t>(ctx.r10.u32, 55296, xer);
	// bne cr6,0x830877e0
	if (!cr6.eq) goto loc_830877E0;
	// addis r11,r11,-1
	r11.s64 = r11.s64 + -65536;
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// addi r11,r11,10249
	r11.s64 = r11.s64 + 10249;
	// rlwinm r11,r11,10,0,21
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0xFFFFFC00;
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x83087650
	sub_83087650(ctx, base);
	// b 0x830877e8
	goto loc_830877E8;
loc_830877E0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x83087208
	sub_83087208(ctx, base);
loc_830877E8:
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83087814
	if (!cr0.eq) goto loc_83087814;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// blt cr6,0x830877ac
	if (cr6.lt) goto loc_830877AC;
loc_83087814:
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// blt cr6,0x83087748
	if (cr6.lt) goto loc_83087748;
loc_8308781C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83087828"))) PPC_WEAK_FUNC(sub_83087828);
PPC_FUNC_IMPL(__imp__sub_83087828) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// rlwinm r4,r31,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82fe9dd8
	sub_82FE9DD8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// beq cr6,0x8308787c
	if (cr6.eq) goto loc_8308787C;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_83087868:
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stwx r9,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x83087868
	if (!cr0.eq) goto loc_83087868;
loc_8308787C:
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// stw r9,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_830878A0"))) PPC_WEAK_FUNC(sub_830878A0);
PPC_FUNC_IMPL(__imp__sub_830878A0) {
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
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83087938
	if (!cr6.eq) goto loc_83087938;
	// rlwinm r11,r10,31,1,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// bge cr6,0x830878d8
	if (!cr6.lt) goto loc_830878D8;
	// li r11,10
	r11.s64 = 10;
loc_830878D8:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + r11.u64;
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82fe9dd8
	sub_82FE9DD8(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x83087930
	if (!cr6.gt) goto loc_83087930;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83087910:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stwx r9,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83087910
	if (cr6.lt) goto loc_83087910;
loc_83087930:
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_83087938:
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

__attribute__((alias("__imp__sub_83087950"))) PPC_WEAK_FUNC(sub_83087950);
PPC_FUNC_IMPL(__imp__sub_83087950) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// blt cr6,0x83087964
	if (cr6.lt) goto loc_83087964;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83087964:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83087978"))) PPC_WEAK_FUNC(sub_83087978);
PPC_FUNC_IMPL(__imp__sub_83087978) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x830878a0
	sub_830878A0(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// ble cr6,0x830879c4
	if (!cr6.gt) goto loc_830879C4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
loc_830879A8:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// lwz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// bne 0x830879a8
	if (!cr0.eq) goto loc_830879A8;
loc_830879C4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r29.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830879E8"))) PPC_WEAK_FUNC(sub_830879E8);
PPC_FUNC_IMPL(__imp__sub_830879E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83087a28
	if (!cr6.lt) goto loc_83087A28;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_83087A00:
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83087a00
	if (cr6.lt) goto loc_83087A00;
loc_83087A28:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83087A38"))) PPC_WEAK_FUNC(sub_83087A38);
PPC_FUNC_IMPL(__imp__sub_83087A38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83087A48"))) PPC_WEAK_FUNC(sub_83087A48);
PPC_FUNC_IMPL(__imp__sub_83087A48) {
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
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83087828
	sub_83087828(ctx, base);
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

__attribute__((alias("__imp__sub_83087A80"))) PPC_WEAK_FUNC(sub_83087A80);
PPC_FUNC_IMPL(__imp__sub_83087A80) {
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
	// bl 0x83087828
	sub_83087828(ctx, base);
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

__attribute__((alias("__imp__sub_83087AB0"))) PPC_WEAK_FUNC(sub_83087AB0);
PPC_FUNC_IMPL(__imp__sub_83087AB0) {
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
	// bl 0x830878a0
	sub_830878A0(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r30.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
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

__attribute__((alias("__imp__sub_83087B08"))) PPC_WEAK_FUNC(sub_83087B08);
PPC_FUNC_IMPL(__imp__sub_83087B08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32233
	r11.s64 = -2112421888;
	// addi r11,r11,-21348
	r11.s64 = r11.s64 + -21348;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82ffd858
	sub_82FFD858(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83087B18"))) PPC_WEAK_FUNC(sub_83087B18);
PPC_FUNC_IMPL(__imp__sub_83087B18) {
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
	// lis r11,-32233
	r11.s64 = -2112421888;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-21348
	r11.s64 = r11.s64 + -21348;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82ffd858
	sub_82FFD858(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83087b54
	if (cr0.eq) goto loc_83087B54;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_83087B54:
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

__attribute__((alias("__imp__sub_83087B70"))) PPC_WEAK_FUNC(sub_83087B70);
PPC_FUNC_IMPL(__imp__sub_83087B70) {
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
	// cmplw cr6,r5,r7
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, xer);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// blt cr6,0x83087b90
	if (cr6.lt) goto loc_83087B90;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
loc_83087B90:
	// add r10,r31,r4
	ctx.r10.u64 = r31.u64 + ctx.r4.u64;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x83087bcc
	if (!cr6.lt) goto loc_83087BCC;
loc_83087BA0:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rotlwi r7,r7,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// lhzx r7,r7,r5
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r5.u32);
	// cmplwi cr6,r7,65535
	cr6.compare<uint32_t>(ctx.r7.u32, 65535, xer);
	// beq cr6,0x83087bc4
	if (cr6.eq) goto loc_83087BC4;
	// sth r7,0(r6)
	PPC_STORE_U16(ctx.r6.u32 + 0, ctx.r7.u16);
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
loc_83087BC4:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83087ba0
	if (cr6.lt) goto loc_83087BA0;
loc_83087BCC:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r31.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
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

__attribute__((alias("__imp__sub_83087BF8"))) PPC_WEAK_FUNC(sub_83087BF8);
PPC_FUNC_IMPL(__imp__sub_83087BF8) {
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
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// bl 0x82ffd8f0
	sub_82FFD8F0(ctx, base);
	// lis r11,-32233
	r11.s64 = -2112421888;
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r28,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r28.u32);
	// addi r11,r11,-21348
	r11.s64 = r11.s64 + -21348;
	// stw r29,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r29.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83087C40"))) PPC_WEAK_FUNC(sub_83087C40);
PPC_FUNC_IMPL(__imp__sub_83087C40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,24(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// clrlwi r7,r4,16
	ctx.r7.u64 = ctx.r4.u32 & 0xFFFF;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
loc_83087C54:
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r8,r8,r6
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r6.u32);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// ble cr6,0x83087c78
	if (!cr6.gt) goto loc_83087C78;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x83087c80
	goto loc_83087C80;
loc_83087C78:
	// bge cr6,0x83087ca8
	if (!cr6.lt) goto loc_83087CA8;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_83087C80:
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// blt cr6,0x83087c54
	if (cr6.lt) goto loc_83087C54;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r6
	r11.u64 = r11.u64 + ctx.r6.u64;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// beq cr6,0x83087cb0
	if (cr6.eq) goto loc_83087CB0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83087CA8:
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r6
	r11.u64 = r11.u64 + ctx.r6.u64;
loc_83087CB0:
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83087CB8"))) PPC_WEAK_FUNC(sub_83087CB8);
PPC_FUNC_IMPL(__imp__sub_83087CB8) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// cmplw cr6,r5,r7
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, xer);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// blt cr6,0x83087ce0
	if (cr6.lt) goto loc_83087CE0;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
loc_83087CE0:
	// rlwinm r11,r28,1,0,30
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// add r29,r11,r4
	r29.u64 = r11.u64 + ctx.r4.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// cmplw cr6,r4,r29
	cr6.compare<uint32_t>(ctx.r4.u32, r29.u32, xer);
	// bge cr6,0x83087d34
	if (!cr6.lt) goto loc_83087D34;
loc_83087CF8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lhz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// bl 0x83087c40
	sub_83087C40(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83087d14
	if (cr0.eq) goto loc_83087D14;
	// stb r3,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r3.u8);
	// b 0x83087d24
	goto loc_83087D24;
loc_83087D14:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// beq cr6,0x83087d44
	if (cr6.eq) goto loc_83087D44;
	// li r11,63
	r11.s64 = 63;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
loc_83087D24:
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r5,r29
	cr6.compare<uint32_t>(ctx.r5.u32, r29.u32, xer);
	// blt cr6,0x83087cf8
	if (cr6.lt) goto loc_83087CF8;
loc_83087D34:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r28,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r28.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831b0b70
	return;
loc_83087D44:
	// lhz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82fd9bb0
	sub_82FD9BB0(ctx, base);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lis r11,-32233
	r11.s64 = -2112421888;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,-21332
	ctx.r4.s64 = r11.s64 + -21332;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// li r6,92
	ctx.r6.s64 = 92;
	// li r5,145
	ctx.r5.s64 = 145;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ff4c48
	sub_82FF4C48(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-8012
	ctx.r4.s64 = r11.s64 + -8012;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_83087DA0"))) PPC_WEAK_FUNC(sub_83087DA0);
PPC_FUNC_IMPL(__imp__sub_83087DA0) {
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
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// bl 0x83087c40
	sub_83087C40(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_83087DD8"))) PPC_WEAK_FUNC(sub_83087DD8);
PPC_FUNC_IMPL(__imp__sub_83087DD8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83037908
	sub_83037908(ctx, base);
	// lis r11,-32233
	r11.s64 = -2112421888;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// addi r10,r11,-20528
	ctx.r10.s64 = r11.s64 + -20528;
	// li r11,0
	r11.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stb r11,20(r31)
	PPC_STORE_U8(r31.u32 + 20, r11.u8);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
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

__attribute__((alias("__imp__sub_83087E38"))) PPC_WEAK_FUNC(sub_83087E38);
PPC_FUNC_IMPL(__imp__sub_83087E38) {
	PPC_FUNC_PROLOGUE();
	// stb r4,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r4.u8);
	// stw r5,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// stw r6,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83087E50"))) PPC_WEAK_FUNC(sub_83087E50);
PPC_FUNC_IMPL(__imp__sub_83087E50) {
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
	// lis r11,-32233
	r11.s64 = -2112421888;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-21272
	r11.s64 = r11.s64 + -21272;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83087e9c
	if (cr0.eq) goto loc_83087E9C;
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
loc_83087E9C:
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83087ebc
	if (cr0.eq) goto loc_83087EBC;
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
loc_83087EBC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83037970
	sub_83037970(ctx, base);
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

__attribute__((alias("__imp__sub_83087EDC"))) PPC_WEAK_FUNC(sub_83087EDC);
PPC_FUNC_IMPL(__imp__sub_83087EDC) {
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
	// bl 0x83037970
	sub_83037970(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83087F08"))) PPC_WEAK_FUNC(sub_83087F08);
PPC_FUNC_IMPL(__imp__sub_83087F08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83087F18"))) PPC_WEAK_FUNC(sub_83087F18);
PPC_FUNC_IMPL(__imp__sub_83087F18) {
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
	// bl 0x83087e50
	sub_83087E50(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83087f48
	if (cr0.eq) goto loc_83087F48;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_83087F48:
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

__attribute__((alias("__imp__sub_83087F70"))) PPC_WEAK_FUNC(sub_83087F70);
PPC_FUNC_IMPL(__imp__sub_83087F70) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// stw r29,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r29.u32);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// bl 0x83037908
	sub_83037908(ctx, base);
	// lis r11,-32233
	r11.s64 = -2112421888;
	// stw r28,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r28.u32);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// addi r11,r11,-21272
	r11.s64 = r11.s64 + -21272;
	// stw r27,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r27.u32);
	// stw r26,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r26.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r11.u32);
	// beq cr6,0x8308803c
	if (cr6.eq) goto loc_8308803C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// beq 0x83088018
	if (cr0.eq) goto loc_83088018;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83043458
	sub_83043458(ctx, base);
	// lis r11,-32233
	r11.s64 = -2112421888;
	// addi r10,r11,2232
	ctx.r10.s64 = r11.s64 + 2232;
	// mr r11,r28
	r11.u64 = r28.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// b 0x8308801c
	goto loc_8308801C;
loc_83088018:
	// li r11,0
	r11.s64 = 0;
loc_8308801C:
	// stw r11,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r11.u32);
loc_83088020:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// bl 0x83043678
	sub_83043678(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82e812a8
	sub_82E812A8(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// bne 0x83088020
	if (!cr0.eq) goto loc_83088020;
loc_8308803C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_83088048"))) PPC_WEAK_FUNC(sub_83088048);
PPC_FUNC_IMPL(__imp__sub_83088048) {
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
	// bl 0x83037970
	sub_83037970(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83088070"))) PPC_WEAK_FUNC(sub_83088070);
PPC_FUNC_IMPL(__imp__sub_83088070) {
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
	// lwz r4,228(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 228);
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

__attribute__((alias("__imp__sub_830880A0"))) PPC_WEAK_FUNC(sub_830880A0);
PPC_FUNC_IMPL(__imp__sub_830880A0) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83037908
	sub_83037908(ctx, base);
	// lis r11,-32233
	r11.s64 = -2112421888;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// addi r11,r11,-21104
	r11.s64 = r11.s64 + -21104;
	// stw r29,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r29.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830880E8"))) PPC_WEAK_FUNC(sub_830880E8);
PPC_FUNC_IMPL(__imp__sub_830880E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830880F8"))) PPC_WEAK_FUNC(sub_830880F8);
PPC_FUNC_IMPL(__imp__sub_830880F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r3,124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 124);
	// lwz r4,24(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
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

__attribute__((alias("__imp__sub_83088118"))) PPC_WEAK_FUNC(sub_83088118);
PPC_FUNC_IMPL(__imp__sub_83088118) {
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
	// lis r11,-32233
	r11.s64 = -2112421888;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-21104
	r11.s64 = r11.s64 + -21104;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x83037970
	sub_83037970(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83088154
	if (cr0.eq) goto loc_83088154;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_83088154:
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

__attribute__((alias("__imp__sub_83088178"))) PPC_WEAK_FUNC(sub_83088178);
PPC_FUNC_IMPL(__imp__sub_83088178) {
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
	// lis r11,-32233
	r11.s64 = -2112421888;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-21084
	r11.s64 = r11.s64 + -21084;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830881c4
	if (cr0.eq) goto loc_830881C4;
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
loc_830881C4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83037970
	sub_83037970(ctx, base);
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

__attribute__((alias("__imp__sub_830881E4"))) PPC_WEAK_FUNC(sub_830881E4);
PPC_FUNC_IMPL(__imp__sub_830881E4) {
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
	// bl 0x83037970
	sub_83037970(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83088210"))) PPC_WEAK_FUNC(sub_83088210);
PPC_FUNC_IMPL(__imp__sub_83088210) {
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
	// bl 0x83088178
	sub_83088178(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83088240
	if (cr0.eq) goto loc_83088240;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_83088240:
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

__attribute__((alias("__imp__sub_83088268"))) PPC_WEAK_FUNC(sub_83088268);
PPC_FUNC_IMPL(__imp__sub_83088268) {
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
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// stw r29,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r29.u32);
	// li r4,9
	ctx.r4.s64 = 9;
	// stw r30,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r30.u32);
	// bl 0x83037908
	sub_83037908(ctx, base);
	// lis r11,-32233
	r11.s64 = -2112421888;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r28,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r28.u32);
	// addi r11,r11,-21084
	r11.s64 = r11.s64 + -21084;
	// li r22,2
	r22.s64 = 2;
	// li r21,3
	r21.s64 = 3;
	// stw r10,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r10.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r10,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r10.u32);
	// stw r11,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r11.u32);
	// lwz r11,8(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 8);
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// bne cr6,0x8308835c
	if (!cr6.eq) goto loc_8308835C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r22,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r22.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// beq 0x8308831c
	if (cr0.eq) goto loc_8308831C;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fdad88
	sub_82FDAD88(ctx, base);
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r10,r11,32376
	ctx.r10.s64 = r11.s64 + 32376;
	// mr r11,r28
	r11.u64 = r28.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// b 0x83088320
	goto loc_83088320;
loc_8308831C:
	// li r11,0
	r11.s64 = 0;
loc_83088320:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r11,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r11.u32);
	// lwz r11,40(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 40);
	// lwz r3,124(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// bl 0x83043678
	sub_83043678(ctx, base);
	// b 0x83088424
	goto loc_83088424;
loc_8308835C:
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// bne cr6,0x83088424
	if (!cr6.eq) goto loc_83088424;
	// stw r21,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r21.u32);
	// lwz r24,56(r23)
	r24.u64 = PPC_LOAD_U32(r23.u32 + 56);
	// cmplwi r24,0
	cr0.compare<uint32_t>(r24.u32, 0, xer);
	// beq 0x83088424
	if (cr0.eq) goto loc_83088424;
	// lwz r26,4(r24)
	r26.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// cmplwi r26,0
	cr0.compare<uint32_t>(r26.u32, 0, xer);
	// beq 0x83088424
	if (cr0.eq) goto loc_83088424;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// beq 0x830883c0
	if (cr0.eq) goto loc_830883C0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fdad88
	sub_82FDAD88(ctx, base);
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r10,r11,32376
	ctx.r10.s64 = r11.s64 + 32376;
	// mr r11,r28
	r11.u64 = r28.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// b 0x830883c4
	goto loc_830883C4;
loc_830883C0:
	// li r11,0
	r11.s64 = 0;
loc_830883C4:
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// stw r11,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r11.u32);
	// beq cr6,0x83088424
	if (cr6.eq) goto loc_83088424;
loc_830883D4:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r27,124(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 124);
	// lwz r25,0(r27)
	r25.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x8308ea58
	sub_8308EA58(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r10,36(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 36);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// bl 0x83043678
	sub_83043678(ctx, base);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(r28.u32, r26.u32, xer);
	// blt cr6,0x830883d4
	if (cr6.lt) goto loc_830883D4;
loc_83088424:
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bne cr6,0x83088438
	if (!cr6.eq) goto loc_83088438;
	// stw r22,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r22.u32);
	// b 0x83088444
	goto loc_83088444;
loc_83088438:
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// bne cr6,0x83088444
	if (!cr6.eq) goto loc_83088444;
	// stw r21,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r21.u32);
loc_83088444:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_83088450"))) PPC_WEAK_FUNC(sub_83088450);
PPC_FUNC_IMPL(__imp__sub_83088450) {
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
	// lwz r3,212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// bl 0x83037970
	sub_83037970(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83088478"))) PPC_WEAK_FUNC(sub_83088478);
PPC_FUNC_IMPL(__imp__sub_83088478) {
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
	// lwz r4,244(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 244);
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

__attribute__((alias("__imp__sub_830884A4"))) PPC_WEAK_FUNC(sub_830884A4);
PPC_FUNC_IMPL(__imp__sub_830884A4) {
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
	// lwz r4,244(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 244);
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

__attribute__((alias("__imp__sub_830884D0"))) PPC_WEAK_FUNC(sub_830884D0);
PPC_FUNC_IMPL(__imp__sub_830884D0) {
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
	// b 0x83088500
	goto loc_83088500;
loc_830884F0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x830884d0
	sub_830884D0(ctx, base);
	// lwz r31,20(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 20);
loc_83088500:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,20
	cr6.compare<int32_t>(r11.s32, 20, xer);
	// beq cr6,0x830884f0
	if (cr6.eq) goto loc_830884F0;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r31,12(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r3,124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 124);
	// lwz r4,32(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// bl 0x83043678
	sub_83043678(ctx, base);
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

__attribute__((alias("__imp__sub_83088568"))) PPC_WEAK_FUNC(sub_83088568);
PPC_FUNC_IMPL(__imp__sub_83088568) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// stw r28,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r28.u32);
	// li r4,9
	ctx.r4.s64 = 9;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// bl 0x83037908
	sub_83037908(ctx, base);
	// lis r11,-32233
	r11.s64 = -2112421888;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r29.u32);
	// addi r11,r11,-21084
	r11.s64 = r11.s64 + -21084;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r26,r9,32376
	r26.s64 = ctx.r9.s64 + 32376;
	// stw r10,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r10.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r10,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r10.u32);
	// stw r11,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r11.u32);
	// lwz r11,24(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// clrlwi r10,r11,28
	ctx.r10.u64 = r11.u32 & 0xF;
	// cmpwi cr6,r10,7
	cr6.compare<int32_t>(ctx.r10.s32, 7, xer);
	// bne cr6,0x83088604
	if (!cr6.eq) goto loc_83088604;
	// li r10,2
	ctx.r10.s64 = 2;
	// cmpwi cr6,r11,23
	cr6.compare<int32_t>(r11.s32, 23, xer);
	// stw r10,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r10.u32);
	// bne cr6,0x830885f4
	if (!cr6.eq) goto loc_830885F4;
	// li r11,3
	r11.s64 = 3;
	// b 0x83088628
	goto loc_83088628;
loc_830885F4:
	// cmpwi cr6,r11,39
	cr6.compare<int32_t>(r11.s32, 39, xer);
	// bne cr6,0x830886d8
	if (!cr6.eq) goto loc_830886D8;
loc_830885FC:
	// stw r10,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r10.u32);
	// b 0x830886d8
	goto loc_830886D8;
loc_83088604:
	// cmpwi cr6,r10,8
	cr6.compare<int32_t>(ctx.r10.s32, 8, xer);
	// bne cr6,0x83088630
	if (!cr6.eq) goto loc_83088630;
	// li r10,3
	ctx.r10.s64 = 3;
	// cmpwi cr6,r11,24
	cr6.compare<int32_t>(r11.s32, 24, xer);
	// stw r10,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r10.u32);
	// beq cr6,0x830885fc
	if (cr6.eq) goto loc_830885FC;
	// cmpwi cr6,r11,40
	cr6.compare<int32_t>(r11.s32, 40, xer);
	// bne cr6,0x830886d8
	if (!cr6.eq) goto loc_830886D8;
	// li r11,2
	r11.s64 = 2;
loc_83088628:
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// b 0x830886d8
	goto loc_830886D8;
loc_83088630:
	// cmpwi cr6,r11,20
	cr6.compare<int32_t>(r11.s32, 20, xer);
	// bne cr6,0x830886b8
	if (!cr6.eq) goto loc_830886B8;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r10.u32);
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmpwi cr6,r11,24
	cr6.compare<int32_t>(r11.s32, 24, xer);
	// bne cr6,0x83088658
	if (!cr6.eq) goto loc_83088658;
	// stw r10,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r10.u32);
	// b 0x83088668
	goto loc_83088668;
loc_83088658:
	// cmpwi cr6,r11,40
	cr6.compare<int32_t>(r11.s32, 40, xer);
	// bne cr6,0x83088668
	if (!cr6.eq) goto loc_83088668;
	// li r11,2
	r11.s64 = 2;
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
loc_83088668:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq 0x830886a0
	if (cr0.eq) goto loc_830886A0;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fdad88
	sub_82FDAD88(ctx, base);
	// mr r11,r29
	r11.u64 = r29.u64;
	// stw r26,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r26.u32);
	// b 0x830886a4
	goto loc_830886A4;
loc_830886A0:
	// li r11,0
	r11.s64 = 0;
loc_830886A4:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r11.u32);
	// bl 0x830884d0
	sub_830884D0(ctx, base);
	// b 0x830886d8
	goto loc_830886D8;
loc_830886B8:
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(r11.s32, 22, xer);
	// bne cr6,0x830886c8
	if (!cr6.eq) goto loc_830886C8;
	// li r11,3
	r11.s64 = 3;
	// b 0x830886d4
	goto loc_830886D4;
loc_830886C8:
	// cmpwi cr6,r11,38
	cr6.compare<int32_t>(r11.s32, 38, xer);
	// bne cr6,0x830886d8
	if (!cr6.eq) goto loc_830886D8;
	// li r11,2
	r11.s64 = 2;
loc_830886D4:
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
loc_830886D8:
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x830886f8
	if (cr6.eq) goto loc_830886F8;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x8308876c
	if (!cr6.eq) goto loc_8308876C;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8308876c
	if (!cr6.eq) goto loc_8308876C;
loc_830886F8:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq 0x83088730
	if (cr0.eq) goto loc_83088730;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fdad88
	sub_82FDAD88(ctx, base);
	// mr r11,r29
	r11.u64 = r29.u64;
	// stw r26,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r26.u32);
	// b 0x83088734
	goto loc_83088734;
loc_83088730:
	// li r11,0
	r11.s64 = 0;
loc_83088734:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r11,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r11.u32);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// lwz r3,124(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// bl 0x83043678
	sub_83043678(ctx, base);
loc_8308876C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83088778"))) PPC_WEAK_FUNC(sub_83088778);
PPC_FUNC_IMPL(__imp__sub_83088778) {
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
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// bl 0x83037970
	sub_83037970(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830887A0"))) PPC_WEAK_FUNC(sub_830887A0);
PPC_FUNC_IMPL(__imp__sub_830887A0) {
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
	// lwz r4,196(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 196);
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

__attribute__((alias("__imp__sub_830887CC"))) PPC_WEAK_FUNC(sub_830887CC);
PPC_FUNC_IMPL(__imp__sub_830887CC) {
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
	// lwz r4,196(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 196);
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

__attribute__((alias("__imp__sub_830887F8"))) PPC_WEAK_FUNC(sub_830887F8);
PPC_FUNC_IMPL(__imp__sub_830887F8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// bl 0x83037908
	sub_83037908(ctx, base);
	// lis r11,-32233
	r11.s64 = -2112421888;
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r28,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r28.u32);
	// addi r11,r11,-20792
	r11.s64 = r11.s64 + -20792;
	// stw r27,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r27.u32);
	// stw r29,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r29.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83088858"))) PPC_WEAK_FUNC(sub_83088858);
PPC_FUNC_IMPL(__imp__sub_83088858) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32233
	r11.s64 = -2112421888;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-20792
	r11.s64 = r11.s64 + -20792;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830888b0
	if (cr0.eq) goto loc_830888B0;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// bne cr6,0x830888b0
	if (!cr6.eq) goto loc_830888B0;
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
loc_830888B0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83037970
	sub_83037970(ctx, base);
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

__attribute__((alias("__imp__sub_830888D0"))) PPC_WEAK_FUNC(sub_830888D0);
PPC_FUNC_IMPL(__imp__sub_830888D0) {
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
	// bl 0x83037970
	sub_83037970(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830888F8"))) PPC_WEAK_FUNC(sub_830888F8);
PPC_FUNC_IMPL(__imp__sub_830888F8) {
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
	// bl 0x83088858
	sub_83088858(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83088928
	if (cr0.eq) goto loc_83088928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_83088928:
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

__attribute__((alias("__imp__sub_83088950"))) PPC_WEAK_FUNC(sub_83088950);
PPC_FUNC_IMPL(__imp__sub_83088950) {
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
	// lis r11,-32233
	r11.s64 = -2112421888;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-20704
	r11.s64 = r11.s64 + -20704;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8308899c
	if (cr0.eq) goto loc_8308899C;
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
loc_8308899C:
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830889bc
	if (cr0.eq) goto loc_830889BC;
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
loc_830889BC:
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830889dc
	if (cr0.eq) goto loc_830889DC;
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
loc_830889DC:
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830889fc
	if (cr0.eq) goto loc_830889FC;
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
loc_830889FC:
	// lwz r3,68(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83088a1c
	if (cr0.eq) goto loc_83088A1C;
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
loc_83088A1C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830a9f00
	sub_830A9F00(ctx, base);
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

__attribute__((alias("__imp__sub_83088A3C"))) PPC_WEAK_FUNC(sub_83088A3C);
PPC_FUNC_IMPL(__imp__sub_83088A3C) {
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
	// bl 0x830a9f00
	sub_830A9F00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83088A68"))) PPC_WEAK_FUNC(sub_83088A68);
PPC_FUNC_IMPL(__imp__sub_83088A68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83088A78"))) PPC_WEAK_FUNC(sub_83088A78);
PPC_FUNC_IMPL(__imp__sub_83088A78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83088A88"))) PPC_WEAK_FUNC(sub_83088A88);
PPC_FUNC_IMPL(__imp__sub_83088A88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lbz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83088A98"))) PPC_WEAK_FUNC(sub_83088A98);
PPC_FUNC_IMPL(__imp__sub_83088A98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83088abc
	if (!cr6.eq) goto loc_83088ABC;
loc_83088AB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83088b00
	goto loc_83088B00;
loc_83088ABC:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,15
	cr6.compare<int32_t>(r11.s32, 15, xer);
	// beq cr6,0x83088ab4
	if (cr6.eq) goto loc_83088AB4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83088af0
	if (cr6.eq) goto loc_83088AF0;
loc_83088AD0:
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, r31.u32, xer);
	// beq cr6,0x83088af0
	if (cr6.eq) goto loc_83088AF0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83088ad0
	if (!cr0.eq) goto loc_83088AD0;
loc_83088AF0:
	// subf r11,r3,r31
	r11.s64 = r31.s64 - ctx.r3.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
loc_83088B00:
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

__attribute__((alias("__imp__sub_83088B18"))) PPC_WEAK_FUNC(sub_83088B18);
PPC_FUNC_IMPL(__imp__sub_83088B18) {
	PPC_FUNC_PROLOGUE();
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// stw r5,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r5.u32);
	// stw r6,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r6.u32);
	// stw r7,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r7.u32);
	// stw r8,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83088B30"))) PPC_WEAK_FUNC(sub_83088B30);
PPC_FUNC_IMPL(__imp__sub_83088B30) {
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
	// bl 0x83088950
	sub_83088950(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83088b60
	if (cr0.eq) goto loc_83088B60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_83088B60:
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

__attribute__((alias("__imp__sub_83088B88"))) PPC_WEAK_FUNC(sub_83088B88);
PPC_FUNC_IMPL(__imp__sub_83088B88) {
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
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r24,260(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// stw r30,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r30.u32);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// bl 0x830a9eb0
	sub_830A9EB0(ctx, base);
	// lis r11,-32233
	r11.s64 = -2112421888;
	// li r29,0
	r29.s64 = 0;
	// stw r27,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r27.u32);
	// addi r11,r11,-20704
	r11.s64 = r11.s64 + -20704;
	// stw r28,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r28.u32);
	// stw r26,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r26.u32);
	// stw r25,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r25.u32);
	// stw r29,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r29.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r29,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r29.u32);
	// stw r29,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r29.u32);
	// stw r29,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r29.u32);
	// stw r29,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r29.u32);
	// stw r29,68(r30)
	PPC_STORE_U32(r30.u32 + 68, r29.u32);
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83088c60
	if (cr0.eq) goto loc_83088C60;
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83088c24
	if (cr0.eq) goto loc_83088C24;
	// lhz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 24);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// sth r10,24(r30)
	PPC_STORE_U16(r30.u32 + 24, ctx.r10.u16);
loc_83088C24:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83088c38
	if (cr0.eq) goto loc_83088C38;
	// lhz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 24);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// sth r10,24(r30)
	PPC_STORE_U16(r30.u32 + 24, ctx.r10.u16);
loc_83088C38:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83088c4c
	if (cr0.eq) goto loc_83088C4C;
	// lhz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 24);
	// ori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 16;
	// sth r10,24(r30)
	PPC_STORE_U16(r30.u32 + 24, ctx.r10.u16);
loc_83088C4C:
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83088c60
	if (cr0.eq) goto loc_83088C60;
	// lhz r11,24(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 24);
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// sth r11,24(r30)
	PPC_STORE_U16(r30.u32 + 24, r11.u16);
loc_83088C60:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x83088cc4
	if (cr6.eq) goto loc_83088CC4;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// beq 0x83088ca4
	if (cr0.eq) goto loc_83088CA4;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83043458
	sub_83043458(ctx, base);
	// lis r11,-32233
	r11.s64 = -2112421888;
	// mr r29,r28
	r29.u64 = r28.u64;
	// addi r11,r11,2232
	r11.s64 = r11.s64 + 2232;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
loc_83088CA4:
	// stw r29,68(r30)
	PPC_STORE_U32(r30.u32 + 68, r29.u32);
loc_83088CA8:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r3,68(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// bl 0x83043678
	sub_83043678(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82e812a8
	sub_82E812A8(ctx, base);
	// mr. r23,r3
	r23.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r23.s32, 0, xer);
	// bne 0x83088ca8
	if (!cr0.eq) goto loc_83088CA8;
loc_83088CC4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_83088CD0"))) PPC_WEAK_FUNC(sub_83088CD0);
PPC_FUNC_IMPL(__imp__sub_83088CD0) {
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
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// bl 0x830a9f00
	sub_830A9F00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83088CF8"))) PPC_WEAK_FUNC(sub_83088CF8);
PPC_FUNC_IMPL(__imp__sub_83088CF8) {
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
	// lwz r4,260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 260);
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

__attribute__((alias("__imp__sub_83088D28"))) PPC_WEAK_FUNC(sub_83088D28);
PPC_FUNC_IMPL(__imp__sub_83088D28) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x83037908
	sub_83037908(ctx, base);
	// lis r11,-32233
	r11.s64 = -2112421888;
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r28,24(r31)
	PPC_STORE_U8(r31.u32 + 24, r28.u8);
	// addi r11,r11,-20528
	r11.s64 = r11.s64 + -20528;
	// stw r29,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r29.u32);
	// stw r27,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r27.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83088D80"))) PPC_WEAK_FUNC(sub_83088D80);
PPC_FUNC_IMPL(__imp__sub_83088D80) {
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
	// lis r11,-32233
	r11.s64 = -2112421888;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-20528
	r11.s64 = r11.s64 + -20528;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x83037970
	sub_83037970(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83088dbc
	if (cr0.eq) goto loc_83088DBC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_83088DBC:
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

__attribute__((alias("__imp__sub_83088DE0"))) PPC_WEAK_FUNC(sub_83088DE0);
PPC_FUNC_IMPL(__imp__sub_83088DE0) {
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
	// lis r11,-32233
	r11.s64 = -2112421888;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-20508
	r11.s64 = r11.s64 + -20508;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83088e2c
	if (cr0.eq) goto loc_83088E2C;
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
loc_83088E2C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83037970
	sub_83037970(ctx, base);
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

__attribute__((alias("__imp__sub_83088E4C"))) PPC_WEAK_FUNC(sub_83088E4C);
PPC_FUNC_IMPL(__imp__sub_83088E4C) {
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
	// bl 0x83037970
	sub_83037970(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83088E78"))) PPC_WEAK_FUNC(sub_83088E78);
PPC_FUNC_IMPL(__imp__sub_83088E78) {
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
	// bl 0x83088de0
	sub_83088DE0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83088ea8
	if (cr0.eq) goto loc_83088EA8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_83088EA8:
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

__attribute__((alias("__imp__sub_83088ED0"))) PPC_WEAK_FUNC(sub_83088ED0);
PPC_FUNC_IMPL(__imp__sub_83088ED0) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// stw r29,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r29.u32);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// bl 0x83037908
	sub_83037908(ctx, base);
	// lis r11,-32233
	r11.s64 = -2112421888;
	// stw r28,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r28.u32);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// addi r11,r11,-20508
	r11.s64 = r11.s64 + -20508;
	// stb r26,24(r30)
	PPC_STORE_U8(r30.u32 + 24, r26.u8);
	// stw r27,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r27.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r11.u32);
	// beq cr6,0x83088f9c
	if (cr6.eq) goto loc_83088F9C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// beq 0x83088f78
	if (cr0.eq) goto loc_83088F78;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83043458
	sub_83043458(ctx, base);
	// lis r11,-32233
	r11.s64 = -2112421888;
	// addi r10,r11,2232
	ctx.r10.s64 = r11.s64 + 2232;
	// mr r11,r28
	r11.u64 = r28.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// b 0x83088f7c
	goto loc_83088F7C;
loc_83088F78:
	// li r11,0
	r11.s64 = 0;
loc_83088F7C:
	// stw r11,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r11.u32);
loc_83088F80:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// bl 0x83043678
	sub_83043678(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82e812a8
	sub_82E812A8(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// bne 0x83088f80
	if (!cr0.eq) goto loc_83088F80;
loc_83088F9C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_83088FA8"))) PPC_WEAK_FUNC(sub_83088FA8);
PPC_FUNC_IMPL(__imp__sub_83088FA8) {
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
	// bl 0x83037970
	sub_83037970(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83088FD0"))) PPC_WEAK_FUNC(sub_83088FD0);
PPC_FUNC_IMPL(__imp__sub_83088FD0) {
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
	// lwz r4,228(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 228);
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

__attribute__((alias("__imp__sub_83089000"))) PPC_WEAK_FUNC(sub_83089000);
PPC_FUNC_IMPL(__imp__sub_83089000) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// bl 0x83037908
	sub_83037908(ctx, base);
	// lis r11,-32233
	r11.s64 = -2112421888;
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r29.u32);
	// addi r11,r11,-20344
	r11.s64 = r11.s64 + -20344;
	// stw r28,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r28.u32);
	// stw r27,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r27.u32);
	// stw r26,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r26.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83089060"))) PPC_WEAK_FUNC(sub_83089060);
PPC_FUNC_IMPL(__imp__sub_83089060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83089070"))) PPC_WEAK_FUNC(sub_83089070);
PPC_FUNC_IMPL(__imp__sub_83089070) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r3,124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 124);
	// lwz r11,40(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 32);
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

__attribute__((alias("__imp__sub_83089098"))) PPC_WEAK_FUNC(sub_83089098);
PPC_FUNC_IMPL(__imp__sub_83089098) {
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
	// lis r11,-32233
	r11.s64 = -2112421888;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-20344
	r11.s64 = r11.s64 + -20344;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x83037970
	sub_83037970(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830890d4
	if (cr0.eq) goto loc_830890D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_830890D4:
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

__attribute__((alias("__imp__sub_830890F8"))) PPC_WEAK_FUNC(sub_830890F8);
PPC_FUNC_IMPL(__imp__sub_830890F8) {
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
	// lis r11,-32233
	r11.s64 = -2112421888;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-20324
	r11.s64 = r11.s64 + -20324;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83089144
	if (cr0.eq) goto loc_83089144;
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
loc_83089144:
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83089164
	if (cr0.eq) goto loc_83089164;
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
loc_83089164:
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83089184
	if (cr0.eq) goto loc_83089184;
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
loc_83089184:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830a9f00
	sub_830A9F00(ctx, base);
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

__attribute__((alias("__imp__sub_830891A4"))) PPC_WEAK_FUNC(sub_830891A4);
PPC_FUNC_IMPL(__imp__sub_830891A4) {
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
	// bl 0x830a9f00
	sub_830A9F00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830891D0"))) PPC_WEAK_FUNC(sub_830891D0);
PPC_FUNC_IMPL(__imp__sub_830891D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83089208
	if (cr0.eq) goto loc_83089208;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x83089200
	if (cr6.eq) goto loc_83089200;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// beq cr6,0x830891f8
	if (cr6.eq) goto loc_830891F8;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_830891F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83089200:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_83089208:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83089210"))) PPC_WEAK_FUNC(sub_83089210);
PPC_FUNC_IMPL(__imp__sub_83089210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83089220"))) PPC_WEAK_FUNC(sub_83089220);
PPC_FUNC_IMPL(__imp__sub_83089220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r3,44(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83089230"))) PPC_WEAK_FUNC(sub_83089230);
PPC_FUNC_IMPL(__imp__sub_83089230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lbz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83089240"))) PPC_WEAK_FUNC(sub_83089240);
PPC_FUNC_IMPL(__imp__sub_83089240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83089264
	if (!cr6.eq) goto loc_83089264;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8308929c
	goto loc_8308929C;
loc_83089264:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8308928c
	if (cr6.eq) goto loc_8308928C;
loc_8308926C:
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, r31.u32, xer);
	// beq cr6,0x8308928c
	if (cr6.eq) goto loc_8308928C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8308926c
	if (!cr0.eq) goto loc_8308926C;
loc_8308928C:
	// subf r11,r3,r31
	r11.s64 = r31.s64 - ctx.r3.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
loc_8308929C:
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

__attribute__((alias("__imp__sub_830892B0"))) PPC_WEAK_FUNC(sub_830892B0);
PPC_FUNC_IMPL(__imp__sub_830892B0) {
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
	// bl 0x830890f8
	sub_830890F8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830892e0
	if (cr0.eq) goto loc_830892E0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_830892E0:
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

__attribute__((alias("__imp__sub_83089308"))) PPC_WEAK_FUNC(sub_83089308);
PPC_FUNC_IMPL(__imp__sub_83089308) {
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
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r23,268(r31)
	r23.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// stw r30,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r30.u32);
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r6,260(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// mr r22,r10
	r22.u64 = ctx.r10.u64;
	// bl 0x830a9eb0
	sub_830A9EB0(ctx, base);
	// lis r11,-32233
	r11.s64 = -2112421888;
	// li r24,0
	r24.s64 = 0;
	// stw r29,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r29.u32);
	// addi r11,r11,-20324
	r11.s64 = r11.s64 + -20324;
	// stw r28,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r28.u32);
	// stw r26,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r26.u32);
	// stw r27,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r27.u32);
	// stw r25,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r25.u32);
	// stw r24,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r24.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// sth r24,56(r30)
	PPC_STORE_U16(r30.u32 + 56, r24.u16);
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830893ac
	if (cr0.eq) goto loc_830893AC;
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83089398
	if (cr0.eq) goto loc_83089398;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r10,56(r30)
	PPC_STORE_U16(r30.u32 + 56, ctx.r10.u16);
loc_83089398:
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830893ac
	if (cr0.eq) goto loc_830893AC;
	// lhz r11,56(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 56);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// sth r11,56(r30)
	PPC_STORE_U16(r30.u32 + 56, r11.u16);
loc_830893AC:
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830893e0
	if (cr0.eq) goto loc_830893E0;
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x830893cc
	if (cr0.eq) goto loc_830893CC;
	// lhz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 24);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// sth r10,24(r30)
	PPC_STORE_U16(r30.u32 + 24, ctx.r10.u16);
loc_830893CC:
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830893e0
	if (cr0.eq) goto loc_830893E0;
	// lhz r11,24(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 24);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// sth r11,24(r30)
	PPC_STORE_U16(r30.u32 + 24, r11.u16);
loc_830893E0:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x83089448
	if (cr6.eq) goto loc_83089448;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq 0x83089424
	if (cr0.eq) goto loc_83089424;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83043458
	sub_83043458(ctx, base);
	// lis r11,-32233
	r11.s64 = -2112421888;
	// mr r24,r29
	r24.u64 = r29.u64;
	// addi r11,r11,2232
	r11.s64 = r11.s64 + 2232;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_83089424:
	// mr r29,r22
	r29.u64 = r22.u64;
	// stw r24,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r24.u32);
loc_8308942C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x83043678
	sub_83043678(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e812a8
	sub_82E812A8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x8308942c
	if (!cr0.eq) goto loc_8308942C;
loc_83089448:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_83089454"))) PPC_WEAK_FUNC(sub_83089454);
PPC_FUNC_IMPL(__imp__sub_83089454) {
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
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// bl 0x830a9f00
	sub_830A9F00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8308947C"))) PPC_WEAK_FUNC(sub_8308947C);
PPC_FUNC_IMPL(__imp__sub_8308947C) {
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
	// lwz r4,268(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 268);
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

__attribute__((alias("__imp__sub_830894A8"))) PPC_WEAK_FUNC(sub_830894A8);
PPC_FUNC_IMPL(__imp__sub_830894A8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x83037908
	sub_83037908(ctx, base);
	// lis r11,-32233
	r11.s64 = -2112421888;
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r29.u32);
	// addi r11,r11,-20144
	r11.s64 = r11.s64 + -20144;
	// stw r28,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r28.u32);
	// stw r27,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r27.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83089508"))) PPC_WEAK_FUNC(sub_83089508);
PPC_FUNC_IMPL(__imp__sub_83089508) {
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
	// lis r11,-32233
	r11.s64 = -2112421888;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-20144
	r11.s64 = r11.s64 + -20144;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83089554
	if (cr0.eq) goto loc_83089554;
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
loc_83089554:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83037970
	sub_83037970(ctx, base);
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

__attribute__((alias("__imp__sub_83089574"))) PPC_WEAK_FUNC(sub_83089574);
PPC_FUNC_IMPL(__imp__sub_83089574) {
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
	// bl 0x83037970
	sub_83037970(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830895A0"))) PPC_WEAK_FUNC(sub_830895A0);
PPC_FUNC_IMPL(__imp__sub_830895A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r3,124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 124);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
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

__attribute__((alias("__imp__sub_830895C0"))) PPC_WEAK_FUNC(sub_830895C0);
PPC_FUNC_IMPL(__imp__sub_830895C0) {
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x83015c18
	sub_83015C18(ctx, base);
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

__attribute__((alias("__imp__sub_83089608"))) PPC_WEAK_FUNC(sub_83089608);
PPC_FUNC_IMPL(__imp__sub_83089608) {
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
	// bl 0x83089508
	sub_83089508(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83089638
	if (cr0.eq) goto loc_83089638;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_83089638:
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

__attribute__((alias("__imp__sub_83089658"))) PPC_WEAK_FUNC(sub_83089658);
PPC_FUNC_IMPL(__imp__sub_83089658) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83037908
	sub_83037908(ctx, base);
	// lis r11,-32233
	r11.s64 = -2112421888;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// addi r11,r11,-20056
	r11.s64 = r11.s64 + -20056;
	// stw r29,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r29.u32);
	// stw r28,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r28.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830896B0"))) PPC_WEAK_FUNC(sub_830896B0);
PPC_FUNC_IMPL(__imp__sub_830896B0) {
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
	// lis r11,-32233
	r11.s64 = -2112421888;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-20056
	r11.s64 = r11.s64 + -20056;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830896fc
	if (cr0.eq) goto loc_830896FC;
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
loc_830896FC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83037970
	sub_83037970(ctx, base);
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

__attribute__((alias("__imp__sub_8308971C"))) PPC_WEAK_FUNC(sub_8308971C);
PPC_FUNC_IMPL(__imp__sub_8308971C) {
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
	// bl 0x83037970
	sub_83037970(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83089748"))) PPC_WEAK_FUNC(sub_83089748);
PPC_FUNC_IMPL(__imp__sub_83089748) {
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
	// bl 0x830896b0
	sub_830896B0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83089778
	if (cr0.eq) goto loc_83089778;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_83089778:
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

__attribute__((alias("__imp__sub_83089798"))) PPC_WEAK_FUNC(sub_83089798);
PPC_FUNC_IMPL(__imp__sub_83089798) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83037908
	sub_83037908(ctx, base);
	// lis r11,-32233
	r11.s64 = -2112421888;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// addi r11,r11,-19968
	r11.s64 = r11.s64 + -19968;
	// stw r29,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r29.u32);
	// stw r28,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r28.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830897F0"))) PPC_WEAK_FUNC(sub_830897F0);
PPC_FUNC_IMPL(__imp__sub_830897F0) {
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
	// lis r11,-32233
	r11.s64 = -2112421888;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-19968
	r11.s64 = r11.s64 + -19968;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8308983c
	if (cr0.eq) goto loc_8308983C;
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
loc_8308983C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83037970
	sub_83037970(ctx, base);
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

__attribute__((alias("__imp__sub_8308985C"))) PPC_WEAK_FUNC(sub_8308985C);
PPC_FUNC_IMPL(__imp__sub_8308985C) {
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
	// bl 0x83037970
	sub_83037970(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83089888"))) PPC_WEAK_FUNC(sub_83089888);
PPC_FUNC_IMPL(__imp__sub_83089888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r3,124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 124);
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
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

__attribute__((alias("__imp__sub_830898A8"))) PPC_WEAK_FUNC(sub_830898A8);
PPC_FUNC_IMPL(__imp__sub_830898A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r3,124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 124);
	// lwz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
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

__attribute__((alias("__imp__sub_830898C8"))) PPC_WEAK_FUNC(sub_830898C8);
PPC_FUNC_IMPL(__imp__sub_830898C8) {
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
	// bl 0x830897f0
	sub_830897F0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830898f8
	if (cr0.eq) goto loc_830898F8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_830898F8:
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

__attribute__((alias("__imp__sub_83089918"))) PPC_WEAK_FUNC(sub_83089918);
PPC_FUNC_IMPL(__imp__sub_83089918) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// b 0x82fe6788
	sub_82FE6788(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83089920"))) PPC_WEAK_FUNC(sub_83089920);
PPC_FUNC_IMPL(__imp__sub_83089920) {
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
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x830a2320
	sub_830A2320(ctx, base);
	// lis r11,-32233
	r11.s64 = -2112421888;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,-19864
	ctx.r10.s64 = r11.s64 + -19864;
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lwz r10,-22224(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -22224);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r9,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r9.u32);
	// stw r9,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
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

__attribute__((alias("__imp__sub_830899A0"))) PPC_WEAK_FUNC(sub_830899A0);
PPC_FUNC_IMPL(__imp__sub_830899A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830899bc
	if (cr0.eq) goto loc_830899BC;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmpwi cr6,r9,25
	cr6.compare<int32_t>(ctx.r9.s32, 25, xer);
	// beq cr6,0x830899d4
	if (cr6.eq) goto loc_830899D4;
loc_830899BC:
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830899d8
	if (cr0.eq) goto loc_830899D8;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmpwi cr6,r9,25
	cr6.compare<int32_t>(ctx.r9.s32, 25, xer);
	// bne cr6,0x830899d8
	if (!cr6.eq) goto loc_830899D8;
loc_830899D4:
	// stw r10,76(r11)
	PPC_STORE_U32(r11.u32 + 76, ctx.r10.u32);
loc_830899D8:
	// li r11,1
	r11.s64 = 1;
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// stw r10,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830899F8"))) PPC_WEAK_FUNC(sub_830899F8);
PPC_FUNC_IMPL(__imp__sub_830899F8) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// stw r28,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r28.u32);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// bl 0x830a2320
	sub_830A2320(ctx, base);
	// lis r11,-32233
	r11.s64 = -2112421888;
	// li r29,0
	r29.s64 = 0;
	// addi r11,r11,-19864
	r11.s64 = r11.s64 + -19864;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,36
	ctx.r3.s64 = 36;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lis r11,-32233
	r11.s64 = -2112421888;
	// lwz r11,-22224(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22224);
	// stw r29,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r29.u32);
	// stw r29,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r29.u32);
	// stw r29,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r29.u32);
	// stw r29,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r29.u32);
	// stw r11,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r11.u32);
	// stw r10,60(r30)
	PPC_STORE_U32(r30.u32 + 60, ctx.r10.u32);
	// stw r10,64(r30)
	PPC_STORE_U32(r30.u32 + 64, ctx.r10.u32);
	// stw r29,68(r30)
	PPC_STORE_U32(r30.u32 + 68, r29.u32);
	// stw r29,72(r30)
	PPC_STORE_U32(r30.u32 + 72, r29.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83089aa4
	if (cr0.eq) goto loc_83089AA4;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82fe7048
	sub_82FE7048(ctx, base);
	// b 0x83089aa8
	goto loc_83089AA8;
loc_83089AA4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_83089AA8:
	// stw r3,40(r30)
	PPC_STORE_U32(r30.u32 + 40, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_83089AB8"))) PPC_WEAK_FUNC(sub_83089AB8);
PPC_FUNC_IMPL(__imp__sub_83089AB8) {
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
	// bl 0x830a2528
	sub_830A2528(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83089AE0"))) PPC_WEAK_FUNC(sub_83089AE0);
PPC_FUNC_IMPL(__imp__sub_83089AE0) {
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
	// lwz r4,228(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 228);
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

__attribute__((alias("__imp__sub_83089B18"))) PPC_WEAK_FUNC(sub_83089B18);
PPC_FUNC_IMPL(__imp__sub_83089B18) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r28,244(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// bl 0x830a2600
	sub_830A2600(ctx, base);
	// lis r11,-32233
	r11.s64 = -2112421888;
	// li r29,0
	r29.s64 = 0;
	// addi r11,r11,-19864
	r11.s64 = r11.s64 + -19864;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,36
	ctx.r3.s64 = 36;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lis r11,-32233
	r11.s64 = -2112421888;
	// lwz r11,-22224(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22224);
	// stw r29,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r29.u32);
	// stw r29,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r29.u32);
	// stw r29,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r29.u32);
	// stw r29,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r29.u32);
	// stw r11,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r11.u32);
	// stw r10,60(r30)
	PPC_STORE_U32(r30.u32 + 60, ctx.r10.u32);
	// stw r10,64(r30)
	PPC_STORE_U32(r30.u32 + 64, ctx.r10.u32);
	// stw r29,68(r30)
	PPC_STORE_U32(r30.u32 + 68, r29.u32);
	// stw r29,72(r30)
	PPC_STORE_U32(r30.u32 + 72, r29.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83089bc8
	if (cr0.eq) goto loc_83089BC8;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82fe7048
	sub_82FE7048(ctx, base);
	// b 0x83089bcc
	goto loc_83089BCC;
loc_83089BC8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_83089BCC:
	// stw r3,40(r30)
	PPC_STORE_U32(r30.u32 + 40, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_83089BDC"))) PPC_WEAK_FUNC(sub_83089BDC);
PPC_FUNC_IMPL(__imp__sub_83089BDC) {
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
	// bl 0x830a2528
	sub_830A2528(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83089C04"))) PPC_WEAK_FUNC(sub_83089C04);
PPC_FUNC_IMPL(__imp__sub_83089C04) {
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
	// lwz r4,244(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 244);
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

__attribute__((alias("__imp__sub_83089C38"))) PPC_WEAK_FUNC(sub_83089C38);
PPC_FUNC_IMPL(__imp__sub_83089C38) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,76
	ctx.r3.s64 = 76;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83089c7c
	if (cr0.eq) goto loc_83089C7C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83089920
	sub_83089920(ctx, base);
	// b 0x83089c80
	goto loc_83089C80;
loc_83089C7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83089C80:
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

__attribute__((alias("__imp__sub_83089C98"))) PPC_WEAK_FUNC(sub_83089C98);
PPC_FUNC_IMPL(__imp__sub_83089C98) {
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
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 132);
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

__attribute__((alias("__imp__sub_83089CC8"))) PPC_WEAK_FUNC(sub_83089CC8);
PPC_FUNC_IMPL(__imp__sub_83089CC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31947
	r11.s64 = -2093678592;
	// addi r3,r11,15648
	ctx.r3.s64 = r11.s64 + 15648;
	// blr 
	return;
}

