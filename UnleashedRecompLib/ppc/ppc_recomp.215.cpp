#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8305947C"))) PPC_WEAK_FUNC(sub_8305947C);
PPC_FUNC_IMPL(__imp__sub_8305947C) {
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

__attribute__((alias("__imp__sub_830594A4"))) PPC_WEAK_FUNC(sub_830594A4);
PPC_FUNC_IMPL(__imp__sub_830594A4) {
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

__attribute__((alias("__imp__sub_830594CC"))) PPC_WEAK_FUNC(sub_830594CC);
PPC_FUNC_IMPL(__imp__sub_830594CC) {
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

__attribute__((alias("__imp__sub_830594F4"))) PPC_WEAK_FUNC(sub_830594F4);
PPC_FUNC_IMPL(__imp__sub_830594F4) {
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

__attribute__((alias("__imp__sub_8305951C"))) PPC_WEAK_FUNC(sub_8305951C);
PPC_FUNC_IMPL(__imp__sub_8305951C) {
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

__attribute__((alias("__imp__sub_83059550"))) PPC_WEAK_FUNC(sub_83059550);
PPC_FUNC_IMPL(__imp__sub_83059550) {
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
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// li r29,0
	r29.s64 = 0;
	// stw r4,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r4.u32);
	// addi r11,r11,18856
	r11.s64 = r11.s64 + 18856;
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r29,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r29.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r29,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r29.u32);
	// stb r29,28(r30)
	PPC_STORE_U8(r30.u32 + 28, r29.u8);
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// stw r29,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r29.u32);
	// stw r29,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r29.u32);
	// stw r29,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r29.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830595c4
	if (cr0.eq) goto loc_830595C4;
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r4,109
	ctx.r4.s64 = 109;
	// bl 0x8301fe60
	sub_8301FE60(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x830595c8
	goto loc_830595C8;
loc_830595C4:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_830595C8:
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830595fc
	if (cr0.eq) goto loc_830595FC;
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r4,109
	ctx.r4.s64 = 109;
	// bl 0x8301fe60
	sub_8301FE60(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x83059600
	goto loc_83059600;
loc_830595FC:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_83059600:
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83059634
	if (cr0.eq) goto loc_83059634;
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r4,109
	ctx.r4.s64 = 109;
	// bl 0x8301fe60
	sub_8301FE60(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x83059638
	goto loc_83059638;
loc_83059634:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_83059638:
	// li r3,16
	ctx.r3.s64 = 16;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83059668
	if (cr0.eq) goto loc_83059668;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r4,r11,-27796
	ctx.r4.s64 = r11.s64 + -27796;
	// bl 0x8305acb8
	sub_8305ACB8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_83059668:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r29.u32);
	// bl 0x83059148
	sub_83059148(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83059680"))) PPC_WEAK_FUNC(sub_83059680);
PPC_FUNC_IMPL(__imp__sub_83059680) {
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

__attribute__((alias("__imp__sub_830596A8"))) PPC_WEAK_FUNC(sub_830596A8);
PPC_FUNC_IMPL(__imp__sub_830596A8) {
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

__attribute__((alias("__imp__sub_830596D8"))) PPC_WEAK_FUNC(sub_830596D8);
PPC_FUNC_IMPL(__imp__sub_830596D8) {
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

__attribute__((alias("__imp__sub_83059708"))) PPC_WEAK_FUNC(sub_83059708);
PPC_FUNC_IMPL(__imp__sub_83059708) {
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

__attribute__((alias("__imp__sub_83059738"))) PPC_WEAK_FUNC(sub_83059738);
PPC_FUNC_IMPL(__imp__sub_83059738) {
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

__attribute__((alias("__imp__sub_83059768"))) PPC_WEAK_FUNC(sub_83059768);
PPC_FUNC_IMPL(__imp__sub_83059768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r3,r11,-27800
	ctx.r3.s64 = r11.s64 + -27800;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83059778"))) PPC_WEAK_FUNC(sub_83059778);
PPC_FUNC_IMPL(__imp__sub_83059778) {
	PPC_FUNC_PROLOGUE();
	// stb r4,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83059780"))) PPC_WEAK_FUNC(sub_83059780);
PPC_FUNC_IMPL(__imp__sub_83059780) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830597bc
	if (cr6.eq) goto loc_830597BC;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bgt cr6,0x830597bc
	if (cr6.gt) goto loc_830597BC;
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
loc_830597BC:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,67
	ctx.r6.s64 = 67;
	// addi r4,r11,13768
	ctx.r4.s64 = r11.s64 + 13768;
	// li r5,213
	ctx.r5.s64 = 213;
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
}

__attribute__((alias("__imp__sub_830597E8"))) PPC_WEAK_FUNC(sub_830597E8);
PPC_FUNC_IMPL(__imp__sub_830597E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x83059780
	sub_83059780(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830597F0"))) PPC_WEAK_FUNC(sub_830597F0);
PPC_FUNC_IMPL(__imp__sub_830597F0) {
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
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83020060
	sub_83020060(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83059820
	if (cr0.eq) goto loc_83059820;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8305982c
	if (!cr0.eq) goto loc_8305982C;
loc_83059820:
	// lis r11,-32233
	r11.s64 = -2112421888;
	// lwz r3,-22224(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -22224);
	// b 0x83059830
	goto loc_83059830;
loc_8305982C:
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
loc_83059830:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83059840"))) PPC_WEAK_FUNC(sub_83059840);
PPC_FUNC_IMPL(__imp__sub_83059840) {
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
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x83020060
	sub_83020060(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8305987c
	if (!cr0.eq) goto loc_8305987C;
	// li r11,0
	r11.s64 = 0;
	// b 0x83059888
	goto loc_83059888;
loc_8305987C:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830598b0
	if (!cr0.eq) goto loc_830598B0;
loc_83059888:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830598b0
	if (cr0.eq) goto loc_830598B0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83020060
	sub_83020060(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq 0x830598b0
	if (cr0.eq) goto loc_830598B0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_830598B0:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
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

__attribute__((alias("__imp__sub_830598D8"))) PPC_WEAK_FUNC(sub_830598D8);
PPC_FUNC_IMPL(__imp__sub_830598D8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// clrlwi. r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// beq 0x83059948
	if (cr0.eq) goto loc_83059948;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8305993c
	if (!cr6.eq) goto loc_8305993C;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83059934
	if (cr0.eq) goto loc_83059934;
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x8301fe60
	sub_8301FE60(ctx, base);
	// b 0x83059938
	goto loc_83059938;
loc_83059934:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83059938:
	// stw r3,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r3.u32);
loc_8305993C:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// b 0x83059950
	goto loc_83059950;
loc_83059948:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_83059950:
	// bl 0x83020538
	sub_83020538(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8305995C"))) PPC_WEAK_FUNC(sub_8305995C);
PPC_FUNC_IMPL(__imp__sub_8305995C) {
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

__attribute__((alias("__imp__sub_83059998"))) PPC_WEAK_FUNC(sub_83059998);
PPC_FUNC_IMPL(__imp__sub_83059998) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,18856
	r11.s64 = r11.s64 + 18856;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r29,8(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x830599d8
	if (cr0.eq) goto loc_830599D8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830251c0
	sub_830251C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_830599D8:
	// lwz r29,12(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x830599f4
	if (cr0.eq) goto loc_830599F4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830251c0
	sub_830251C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_830599F4:
	// lwz r29,16(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x83059a10
	if (cr0.eq) goto loc_83059A10;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830251c0
	sub_830251C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_83059A10:
	// lwz r29,20(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x83059a2c
	if (cr0.eq) goto loc_83059A2C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830251c0
	sub_830251C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_83059A2C:
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83059a4c
	if (cr0.eq) goto loc_83059A4C;
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
loc_83059A4C:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r11,r11,-3652
	r11.s64 = r11.s64 + -3652;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83059A60"))) PPC_WEAK_FUNC(sub_83059A60);
PPC_FUNC_IMPL(__imp__sub_83059A60) {
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

__attribute__((alias("__imp__sub_83059A90"))) PPC_WEAK_FUNC(sub_83059A90);
PPC_FUNC_IMPL(__imp__sub_83059A90) {
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
	// li r3,36
	ctx.r3.s64 = 36;
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
	// beq 0x83059ad4
	if (cr0.eq) goto loc_83059AD4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83059550
	sub_83059550(ctx, base);
	// b 0x83059ad8
	goto loc_83059AD8;
loc_83059AD4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83059AD8:
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

__attribute__((alias("__imp__sub_83059AF0"))) PPC_WEAK_FUNC(sub_83059AF0);
PPC_FUNC_IMPL(__imp__sub_83059AF0) {
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

__attribute__((alias("__imp__sub_83059B20"))) PPC_WEAK_FUNC(sub_83059B20);
PPC_FUNC_IMPL(__imp__sub_83059B20) {
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
	// bl 0x83059998
	sub_83059998(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83059b50
	if (cr0.eq) goto loc_83059B50;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_83059B50:
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

__attribute__((alias("__imp__sub_83059B70"))) PPC_WEAK_FUNC(sub_83059B70);
PPC_FUNC_IMPL(__imp__sub_83059B70) {
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
	// beq cr6,0x83059bd4
	if (cr6.eq) goto loc_83059BD4;
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
	// bne cr6,0x83059bd4
	if (!cr6.eq) goto loc_83059BD4;
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83059bd0
	if (cr0.eq) goto loc_83059BD0;
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
loc_83059BD0:
	// stw r31,72(r30)
	PPC_STORE_U32(r30.u32 + 72, r31.u32);
loc_83059BD4:
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

__attribute__((alias("__imp__sub_83059BF0"))) PPC_WEAK_FUNC(sub_83059BF0);
PPC_FUNC_IMPL(__imp__sub_83059BF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31947
	r11.s64 = -2093678592;
	// addi r3,r11,15460
	ctx.r3.s64 = r11.s64 + 15460;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83059C00"))) PPC_WEAK_FUNC(sub_83059C00);
PPC_FUNC_IMPL(__imp__sub_83059C00) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// addi r3,r30,60
	ctx.r3.s64 = r30.s64 + 60;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lha r11,0(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 0));
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// beq 0x83059cd8
	if (cr0.eq) goto loc_83059CD8;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x830582f0
	sub_830582F0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x830582f0
	sub_830582F0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// bl 0x830574a8
	sub_830574A8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// bl 0x83057c80
	sub_83057C80(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// bl 0x83057c80
	sub_83057C80(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// bl 0x83057dd8
	sub_83057DD8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// bl 0x83057c80
	sub_83057C80(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x830586a0
	sub_830586A0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// bl 0x830580b8
	sub_830580B8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83001a80
	sub_83001A80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U8(r30.u32 + 56);
	// bl 0x83001380
	sub_83001380(ctx, base);
	// b 0x83059dbc
	goto loc_83059DBC;
loc_83059CD8:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,109
	ctx.r4.s64 = 109;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x83056ff8
	sub_83056FF8(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,109
	ctx.r4.s64 = 109;
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// bl 0x83056ff8
	sub_83056FF8(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,109
	ctx.r4.s64 = 109;
	// addi r3,r30,20
	ctx.r3.s64 = r30.s64 + 20;
	// bl 0x830575e8
	sub_830575E8(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,29
	ctx.r4.s64 = 29;
	// addi r3,r30,24
	ctx.r3.s64 = r30.s64 + 24;
	// bl 0x830562b0
	sub_830562B0(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,29
	ctx.r4.s64 = 29;
	// addi r3,r30,28
	ctx.r3.s64 = r30.s64 + 28;
	// bl 0x83056530
	sub_83056530(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,13
	ctx.r4.s64 = 13;
	// addi r3,r30,32
	ctx.r3.s64 = r30.s64 + 32;
	// bl 0x83056668
	sub_83056668(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,13
	ctx.r4.s64 = 13;
	// addi r3,r30,36
	ctx.r3.s64 = r30.s64 + 36;
	// bl 0x830567c8
	sub_830567C8(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,29
	ctx.r4.s64 = 29;
	// addi r3,r30,44
	ctx.r3.s64 = r30.s64 + 44;
	// bl 0x83057a30
	sub_83057A30(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,29
	ctx.r4.s64 = 29;
	// addi r3,r30,76
	ctx.r3.s64 = r30.s64 + 76;
	// bl 0x83056d00
	sub_83056D00(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83001ca8
	sub_83001CA8(ctx, base);
	// addi r4,r30,56
	ctx.r4.s64 = r30.s64 + 56;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83001600
	sub_83001600(ctx, base);
loc_83059DBC:
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_83059DF8"))) PPC_WEAK_FUNC(sub_83059DF8);
PPC_FUNC_IMPL(__imp__sub_83059DF8) {
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
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// bne 0x83059ef4
	if (!cr0.eq) goto loc_83059EF4;
	// li r3,96
	ctx.r3.s64 = 96;
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83059e80
	if (cr0.eq) goto loc_83059E80;
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r9,52(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8306dbe0
	sub_8306DBE0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x83059e84
	goto loc_83059E84;
loc_83059E80:
	// li r29,0
	r29.s64 = 0;
loc_83059E84:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r26,r29
	r26.u64 = r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83059ecc
	if (!cr6.eq) goto loc_83059ECC;
	// li r3,32
	ctx.r3.s64 = 32;
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83059ec4
	if (cr0.eq) goto loc_83059EC4;
	// li r6,128
	ctx.r6.s64 = 128;
	// lwz r7,52(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x830206b0
	sub_830206B0(ctx, base);
	// b 0x83059ec8
	goto loc_83059EC8;
loc_83059EC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83059EC8:
	// stw r3,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r3.u32);
loc_83059ECC:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x83020790
	sub_83020790(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r3,16(r29)
	PPC_STORE_U32(r29.u32 + 16, ctx.r3.u32);
	// b 0x83059ef8
	goto loc_83059EF8;
loc_83059EF4:
	// li r11,0
	r11.s64 = 0;
loc_83059EF8:
	// stb r11,0(r24)
	PPC_STORE_U8(r24.u32 + 0, r11.u8);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_83059F08"))) PPC_WEAK_FUNC(sub_83059F08);
PPC_FUNC_IMPL(__imp__sub_83059F08) {
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

__attribute__((alias("__imp__sub_83059F38"))) PPC_WEAK_FUNC(sub_83059F38);
PPC_FUNC_IMPL(__imp__sub_83059F38) {
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

__attribute__((alias("__imp__sub_83059F70"))) PPC_WEAK_FUNC(sub_83059F70);
PPC_FUNC_IMPL(__imp__sub_83059F70) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,96
	ctx.r3.s64 = 96;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83059fd8
	if (cr0.eq) goto loc_83059FD8;
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r9,52(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8306dbe0
	sub_8306DBE0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x83059fdc
	goto loc_83059FDC;
loc_83059FD8:
	// li r29,0
	r29.s64 = 0;
loc_83059FDC:
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8305a044
	if (cr0.eq) goto loc_8305A044;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8305a028
	if (!cr6.eq) goto loc_8305A028;
	// li r3,32
	ctx.r3.s64 = 32;
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8305a020
	if (cr0.eq) goto loc_8305A020;
	// li r6,128
	ctx.r6.s64 = 128;
	// lwz r7,52(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x830206b0
	sub_830206B0(ctx, base);
	// b 0x8305a024
	goto loc_8305A024;
loc_8305A020:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8305A024:
	// stw r3,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r3.u32);
loc_8305A028:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// b 0x8305a05c
	goto loc_8305A05C;
loc_8305A044:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
loc_8305A05C:
	// bl 0x83020790
	sub_83020790(ctx, base);
	// stw r3,16(r29)
	PPC_STORE_U32(r29.u32 + 16, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_8305A070"))) PPC_WEAK_FUNC(sub_8305A070);
PPC_FUNC_IMPL(__imp__sub_8305A070) {
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

__attribute__((alias("__imp__sub_8305A0A0"))) PPC_WEAK_FUNC(sub_8305A0A0);
PPC_FUNC_IMPL(__imp__sub_8305A0A0) {
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

__attribute__((alias("__imp__sub_8305A0D0"))) PPC_WEAK_FUNC(sub_8305A0D0);
PPC_FUNC_IMPL(__imp__sub_8305A0D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,76(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// b 0x83054ec8
	sub_83054EC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8305A0D8"))) PPC_WEAK_FUNC(sub_8305A0D8);
PPC_FUNC_IMPL(__imp__sub_8305A0D8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8305a124
	if (cr0.eq) goto loc_8305A124;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8305a124
	if (cr0.eq) goto loc_8305A124;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83049068
	sub_83049068(ctx, base);
	// b 0x8305a134
	goto loc_8305A134;
loc_8305A124:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x83054ec8
	sub_83054EC8(ctx, base);
loc_8305A134:
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

__attribute__((alias("__imp__sub_8305A150"))) PPC_WEAK_FUNC(sub_8305A150);
PPC_FUNC_IMPL(__imp__sub_8305A150) {
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
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x83015320
	sub_83015320(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8305a17c
	if (cr0.eq) goto loc_8305A17C;
	// bl 0x83015320
	sub_83015320(ctx, base);
loc_8305A17C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x83015320
	sub_83015320(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x83022d30
	sub_83022D30(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// bl 0x83015278
	sub_83015278(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,56(r31)
	PPC_STORE_U8(r31.u32 + 56, r11.u8);
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

__attribute__((alias("__imp__sub_8305A1B0"))) PPC_WEAK_FUNC(sub_8305A1B0);
PPC_FUNC_IMPL(__imp__sub_8305A1B0) {
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
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x8305a1e4
	if (cr0.eq) goto loc_8305A1E4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83015b18
	sub_83015B18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_8305A1E4:
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x8305a200
	if (cr0.eq) goto loc_8305A200;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83015b18
	sub_83015B18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_8305A200:
	// lwz r30,16(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x8305a21c
	if (cr0.eq) goto loc_8305A21C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83015b18
	sub_83015B18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_8305A21C:
	// lwz r30,20(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x8305a238
	if (cr0.eq) goto loc_8305A238;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830251c0
	sub_830251C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_8305A238:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
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
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x8305a26c
	if (cr0.eq) goto loc_8305A26C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83015ab0
	sub_83015AB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_8305A26C:
	// lwz r30,28(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x8305a288
	if (cr0.eq) goto loc_8305A288;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83015ab0
	sub_83015AB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_8305A288:
	// lwz r30,32(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x8305a2a4
	if (cr0.eq) goto loc_8305A2A4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83015ab0
	sub_83015AB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_8305A2A4:
	// lwz r30,36(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x8305a2c0
	if (cr0.eq) goto loc_8305A2C0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83015ab0
	sub_83015AB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_8305A2C0:
	// lwz r30,40(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x8305a2dc
	if (cr0.eq) goto loc_8305A2DC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830a1d28
	sub_830A1D28(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_8305A2DC:
	// lwz r30,44(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x8305a2f8
	if (cr0.eq) goto loc_8305A2F8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83057c10
	sub_83057C10(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_8305A2F8:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8305a318
	if (cr0.eq) goto loc_8305A318;
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
loc_8305A318:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8305a338
	if (cr0.eq) goto loc_8305A338;
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
loc_8305A338:
	// lwz r31,76(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x8305a354
	if (cr0.eq) goto loc_8305A354;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83015ab0
	sub_83015AB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_8305A354:
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

__attribute__((alias("__imp__sub_8305A378"))) PPC_WEAK_FUNC(sub_8305A378);
PPC_FUNC_IMPL(__imp__sub_8305A378) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32234
	r11.s64 = -2112487424;
	// li r29,0
	r29.s64 = 0;
	// stw r4,52(r30)
	PPC_STORE_U32(r30.u32 + 52, ctx.r4.u32);
	// addi r11,r11,19512
	r11.s64 = r11.s64 + 19512;
	// addi r28,r30,60
	r28.s64 = r30.s64 + 60;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r29,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r29.u32);
	// stw r29,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r29.u32);
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
	// stb r29,56(r30)
	PPC_STORE_U8(r30.u32 + 56, r29.u8);
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// stw r29,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r29.u32);
	// stw r29,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r29.u32);
	// stw r29,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r29.u32);
	// bl 0x83017aa0
	sub_83017AA0(ctx, base);
	// li r3,32
	ctx.r3.s64 = 32;
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// stw r29,72(r30)
	PPC_STORE_U32(r30.u32 + 72, r29.u32);
	// stw r29,76(r30)
	PPC_STORE_U32(r30.u32 + 76, r29.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8305a424
	if (cr0.eq) goto loc_8305A424;
	// li r6,128
	ctx.r6.s64 = 128;
	// lwz r7,52(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,109
	ctx.r4.s64 = 109;
	// bl 0x830206b0
	sub_830206B0(ctx, base);
	// b 0x8305a428
	goto loc_8305A428;
loc_8305A424:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_8305A428:
	// stw r3,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8305a470
	if (cr0.eq) goto loc_8305A470;
	// li r6,128
	ctx.r6.s64 = 128;
	// lwz r7,52(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,109
	ctx.r4.s64 = 109;
	// bl 0x830206b0
	sub_830206B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8305a474
	goto loc_8305A474;
loc_8305A470:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8305A474:
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8305a4b8
	if (cr0.eq) goto loc_8305A4B8;
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r6,52(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// li r4,109
	ctx.r4.s64 = 109;
	// bl 0x8301fe60
	sub_8301FE60(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8305a4bc
	goto loc_8305A4BC;
loc_8305A4B8:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8305A4BC:
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8305a4f8
	if (cr0.eq) goto loc_8305A4F8;
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// bl 0x8301de58
	sub_8301DE58(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8305a4fc
	goto loc_8305A4FC;
loc_8305A4F8:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8305A4FC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
	// bl 0x83018fd0
	sub_83018FD0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8305a550
	if (cr0.eq) goto loc_8305A550;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r5,52(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// addi r4,r11,-28092
	ctx.r4.s64 = r11.s64 + -28092;
	// bl 0x8305b610
	sub_8305B610(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8305a554
	goto loc_8305A554;
loc_8305A550:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8305A554:
	// li r3,28
	ctx.r3.s64 = 28;
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// stw r11,72(r30)
	PPC_STORE_U32(r30.u32 + 72, r11.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// beq 0x8305a5d0
	if (cr0.eq) goto loc_8305A5D0;
	// li r3,4
	ctx.r3.s64 = 4;
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8305a5ac
	if (cr0.eq) goto loc_8305A5AC;
	// bl 0x83007488
	sub_83007488(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8305a5b0
	goto loc_8305A5B0;
loc_8305A5AC:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
loc_8305A5B0:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,29
	ctx.r4.s64 = 29;
	// lwz r7,52(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83043618
	sub_83043618(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8305A5D0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,76(r30)
	PPC_STORE_U32(r30.u32 + 76, r29.u32);
	// bl 0x8305a150
	sub_8305A150(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8305A5F8"))) PPC_WEAK_FUNC(sub_8305A5F8);
PPC_FUNC_IMPL(__imp__sub_8305A5F8) {
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

__attribute__((alias("__imp__sub_8305A618"))) PPC_WEAK_FUNC(sub_8305A618);
PPC_FUNC_IMPL(__imp__sub_8305A618) {
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
	// bl 0x8305a1b0
	sub_8305A1B0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_8305A63C"))) PPC_WEAK_FUNC(sub_8305A63C);
PPC_FUNC_IMPL(__imp__sub_8305A63C) {
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

__attribute__((alias("__imp__sub_8305A664"))) PPC_WEAK_FUNC(sub_8305A664);
PPC_FUNC_IMPL(__imp__sub_8305A664) {
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
	// addi r3,r11,60
	ctx.r3.s64 = r11.s64 + 60;
	// bl 0x83018958
	sub_83018958(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305A690"))) PPC_WEAK_FUNC(sub_8305A690);
PPC_FUNC_IMPL(__imp__sub_8305A690) {
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

__attribute__((alias("__imp__sub_8305A6C0"))) PPC_WEAK_FUNC(sub_8305A6C0);
PPC_FUNC_IMPL(__imp__sub_8305A6C0) {
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

__attribute__((alias("__imp__sub_8305A6F0"))) PPC_WEAK_FUNC(sub_8305A6F0);
PPC_FUNC_IMPL(__imp__sub_8305A6F0) {
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

__attribute__((alias("__imp__sub_8305A720"))) PPC_WEAK_FUNC(sub_8305A720);
PPC_FUNC_IMPL(__imp__sub_8305A720) {
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

__attribute__((alias("__imp__sub_8305A750"))) PPC_WEAK_FUNC(sub_8305A750);
PPC_FUNC_IMPL(__imp__sub_8305A750) {
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

__attribute__((alias("__imp__sub_8305A780"))) PPC_WEAK_FUNC(sub_8305A780);
PPC_FUNC_IMPL(__imp__sub_8305A780) {
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

__attribute__((alias("__imp__sub_8305A7B0"))) PPC_WEAK_FUNC(sub_8305A7B0);
PPC_FUNC_IMPL(__imp__sub_8305A7B0) {
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

__attribute__((alias("__imp__sub_8305A7E0"))) PPC_WEAK_FUNC(sub_8305A7E0);
PPC_FUNC_IMPL(__imp__sub_8305A7E0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 56);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305A7E8"))) PPC_WEAK_FUNC(sub_8305A7E8);
PPC_FUNC_IMPL(__imp__sub_8305A7E8) {
	PPC_FUNC_PROLOGUE();
	// stb r4,56(r3)
	PPC_STORE_U8(ctx.r3.u32 + 56, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305A7F0"))) PPC_WEAK_FUNC(sub_8305A7F0);
PPC_FUNC_IMPL(__imp__sub_8305A7F0) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8305a82c
	if (cr6.eq) goto loc_8305A82C;
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bgt cr6,0x8305a82c
	if (cr6.gt) goto loc_8305A82C;
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
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
loc_8305A82C:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,67
	ctx.r6.s64 = 67;
	// addi r4,r11,13712
	ctx.r4.s64 = r11.s64 + 13712;
	// li r5,291
	ctx.r5.s64 = 291;
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
}

__attribute__((alias("__imp__sub_8305A858"))) PPC_WEAK_FUNC(sub_8305A858);
PPC_FUNC_IMPL(__imp__sub_8305A858) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x8305a7f0
	sub_8305A7F0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8305a890
	if (!cr0.eq) goto loc_8305A890;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x8305a7f0
	sub_8305A7F0(ctx, base);
loc_8305A890:
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

__attribute__((alias("__imp__sub_8305A8A8"))) PPC_WEAK_FUNC(sub_8305A8A8);
PPC_FUNC_IMPL(__imp__sub_8305A8A8) {
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
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83020118
	sub_83020118(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8305a8f0
	if (cr0.eq) goto loc_8305A8F0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8305a928
	if (!cr0.eq) goto loc_8305A928;
loc_8305A8F0:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83020118
	sub_83020118(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8305a91c
	if (cr0.eq) goto loc_8305A91C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8305a928
	if (!cr0.eq) goto loc_8305A928;
loc_8305A91C:
	// lis r11,-32233
	r11.s64 = -2112421888;
	// lwz r3,-22224(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -22224);
	// b 0x8305a92c
	goto loc_8305A92C;
loc_8305A928:
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
loc_8305A92C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8305A938"))) PPC_WEAK_FUNC(sub_8305A938);
PPC_FUNC_IMPL(__imp__sub_8305A938) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83020118
	sub_83020118(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8305a980
	if (cr0.eq) goto loc_8305A980;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8305a9e4
	if (!cr0.eq) goto loc_8305A9E4;
loc_8305A980:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83020118
	sub_83020118(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8305a9a8
	if (!cr0.eq) goto loc_8305A9A8;
	// li r11,0
	r11.s64 = 0;
	// b 0x8305a9b4
	goto loc_8305A9B4;
loc_8305A9A8:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8305a9e4
	if (!cr0.eq) goto loc_8305A9E4;
loc_8305A9B4:
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8305a9e4
	if (cr0.eq) goto loc_8305A9E4;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83020118
	sub_83020118(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq 0x8305a9e4
	if (cr0.eq) goto loc_8305A9E4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8305A9E4:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8305A9F8"))) PPC_WEAK_FUNC(sub_8305A9F8);
PPC_FUNC_IMPL(__imp__sub_8305A9F8) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// clrlwi. r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r29,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r29.u32);
	// beq 0x8305aa7c
	if (cr0.eq) goto loc_8305AA7C;
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8305aa60
	if (!cr6.eq) goto loc_8305AA60;
	// li r3,32
	ctx.r3.s64 = 32;
	// lwz r4,52(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8305aa58
	if (cr0.eq) goto loc_8305AA58;
	// li r6,128
	ctx.r6.s64 = 128;
	// lwz r7,52(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x830206b0
	sub_830206B0(ctx, base);
	// b 0x8305aa5c
	goto loc_8305AA5C;
loc_8305AA58:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8305AA5C:
	// stw r3,12(r29)
	PPC_STORE_U32(r29.u32 + 12, ctx.r3.u32);
loc_8305AA60:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r6,36(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// b 0x8305aa94
	goto loc_8305AA94;
loc_8305AA7C:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r6,36(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
loc_8305AA94:
	// bl 0x83020790
	sub_83020790(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8305AAA0"))) PPC_WEAK_FUNC(sub_8305AAA0);
PPC_FUNC_IMPL(__imp__sub_8305AAA0) {
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

__attribute__((alias("__imp__sub_8305AAD0"))) PPC_WEAK_FUNC(sub_8305AAD0);
PPC_FUNC_IMPL(__imp__sub_8305AAD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// bl 0x83054968
	sub_83054968(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8305aaf4
	if (cr0.eq) goto loc_8305AAF4;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8305AAF4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305AB08"))) PPC_WEAK_FUNC(sub_8305AB08);
PPC_FUNC_IMPL(__imp__sub_8305AB08) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// b 0x830550f0
	sub_830550F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8305AB18"))) PPC_WEAK_FUNC(sub_8305AB18);
PPC_FUNC_IMPL(__imp__sub_8305AB18) {
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
	// lis r11,-32234
	r11.s64 = -2112487424;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,19512
	r11.s64 = r11.s64 + 19512;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x8305a1b0
	sub_8305A1B0(ctx, base);
	// addi r3,r30,60
	ctx.r3.s64 = r30.s64 + 60;
	// bl 0x83018958
	sub_83018958(ctx, base);
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

__attribute__((alias("__imp__sub_8305AB74"))) PPC_WEAK_FUNC(sub_8305AB74);
PPC_FUNC_IMPL(__imp__sub_8305AB74) {
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

__attribute__((alias("__imp__sub_8305AB9C"))) PPC_WEAK_FUNC(sub_8305AB9C);
PPC_FUNC_IMPL(__imp__sub_8305AB9C) {
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
	// bl 0x83018958
	sub_83018958(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305ABD0"))) PPC_WEAK_FUNC(sub_8305ABD0);
PPC_FUNC_IMPL(__imp__sub_8305ABD0) {
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
	// li r3,80
	ctx.r3.s64 = 80;
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
	// beq 0x8305ac14
	if (cr0.eq) goto loc_8305AC14;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8305a378
	sub_8305A378(ctx, base);
	// b 0x8305ac18
	goto loc_8305AC18;
loc_8305AC14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8305AC18:
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

__attribute__((alias("__imp__sub_8305AC30"))) PPC_WEAK_FUNC(sub_8305AC30);
PPC_FUNC_IMPL(__imp__sub_8305AC30) {
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

__attribute__((alias("__imp__sub_8305AC60"))) PPC_WEAK_FUNC(sub_8305AC60);
PPC_FUNC_IMPL(__imp__sub_8305AC60) {
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
	// bl 0x8305ab18
	sub_8305AB18(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8305ac90
	if (cr0.eq) goto loc_8305AC90;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_8305AC90:
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

__attribute__((alias("__imp__sub_8305ACB8"))) PPC_WEAK_FUNC(sub_8305ACB8);
PPC_FUNC_IMPL(__imp__sub_8305ACB8) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// bl 0x830a2268
	sub_830A2268(ctx, base);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,20376
	r11.s64 = r11.s64 + 20376;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r10,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r10.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// beq cr6,0x8305ad10
	if (cr6.eq) goto loc_8305AD10;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r3.u32);
loc_8305AD10:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8305AD1C"))) PPC_WEAK_FUNC(sub_8305AD1C);
PPC_FUNC_IMPL(__imp__sub_8305AD1C) {
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
	// bl 0x830a2200
	sub_830A2200(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305AD50"))) PPC_WEAK_FUNC(sub_8305AD50);
PPC_FUNC_IMPL(__imp__sub_8305AD50) {
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
	// lis r11,-32234
	r11.s64 = -2112487424;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,20376
	r11.s64 = r11.s64 + 20376;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8305ad9c
	if (cr0.eq) goto loc_8305AD9C;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8305AD9C:
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8305adbc
	if (cr0.eq) goto loc_8305ADBC;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8305ADBC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830a2200
	sub_830A2200(ctx, base);
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

__attribute__((alias("__imp__sub_8305ADDC"))) PPC_WEAK_FUNC(sub_8305ADDC);
PPC_FUNC_IMPL(__imp__sub_8305ADDC) {
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
	// bl 0x830a2200
	sub_830A2200(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305AE08"))) PPC_WEAK_FUNC(sub_8305AE08);
PPC_FUNC_IMPL(__imp__sub_8305AE08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
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

__attribute__((alias("__imp__sub_8305AE18"))) PPC_WEAK_FUNC(sub_8305AE18);
PPC_FUNC_IMPL(__imp__sub_8305AE18) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8305ae5c
	if (cr0.eq) goto loc_8305AE5C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_8305AE5C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8305ae74
	if (cr6.eq) goto loc_8305AE74;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
loc_8305AE74:
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

__attribute__((alias("__imp__sub_8305AE90"))) PPC_WEAK_FUNC(sub_8305AE90);
PPC_FUNC_IMPL(__imp__sub_8305AE90) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8305aed4
	if (cr0.eq) goto loc_8305AED4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_8305AED4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8305aeec
	if (cr6.eq) goto loc_8305AEEC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
loc_8305AEEC:
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

__attribute__((alias("__imp__sub_8305AF08"))) PPC_WEAK_FUNC(sub_8305AF08);
PPC_FUNC_IMPL(__imp__sub_8305AF08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31947
	r11.s64 = -2093678592;
	// addi r3,r11,15468
	ctx.r3.s64 = r11.s64 + 15468;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305AF18"))) PPC_WEAK_FUNC(sub_8305AF18);
PPC_FUNC_IMPL(__imp__sub_8305AF18) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x830a22b8
	sub_830A22B8(ctx, base);
	// lha r11,0(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 0));
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8305af58
	if (cr0.eq) goto loc_8305AF58;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83001a80
	sub_83001A80(ctx, base);
	// b 0x8305af94
	goto loc_8305AF94;
loc_8305AF58:
	// addi r30,r31,12
	r30.s64 = r31.s64 + 12;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8305af7c
	if (cr0.eq) goto loc_8305AF7C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8305AF7C:
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83001ca8
	sub_83001CA8(ctx, base);
loc_8305AF94:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8305AFA0"))) PPC_WEAK_FUNC(sub_8305AFA0);
PPC_FUNC_IMPL(__imp__sub_8305AFA0) {
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
	// bl 0x830a2268
	sub_830A2268(ctx, base);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,20376
	r11.s64 = r11.s64 + 20376;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8305AFE8"))) PPC_WEAK_FUNC(sub_8305AFE8);
PPC_FUNC_IMPL(__imp__sub_8305AFE8) {
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
	// bl 0x8305ad50
	sub_8305AD50(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8305b018
	if (cr0.eq) goto loc_8305B018;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_8305B018:
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

__attribute__((alias("__imp__sub_8305B040"))) PPC_WEAK_FUNC(sub_8305B040);
PPC_FUNC_IMPL(__imp__sub_8305B040) {
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
	// li r3,16
	ctx.r3.s64 = 16;
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
	// beq 0x8305b084
	if (cr0.eq) goto loc_8305B084;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8305afa0
	sub_8305AFA0(ctx, base);
	// b 0x8305b088
	goto loc_8305B088;
loc_8305B084:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8305B088:
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

__attribute__((alias("__imp__sub_8305B0A0"))) PPC_WEAK_FUNC(sub_8305B0A0);
PPC_FUNC_IMPL(__imp__sub_8305B0A0) {
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

__attribute__((alias("__imp__sub_8305B0D8"))) PPC_WEAK_FUNC(sub_8305B0D8);
PPC_FUNC_IMPL(__imp__sub_8305B0D8) {
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
	// lis r11,-32234
	r11.s64 = -2112487424;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,20624
	r11.s64 = r11.s64 + 20624;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8305b124
	if (cr0.eq) goto loc_8305B124;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8305B124:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8305b144
	if (cr0.eq) goto loc_8305B144;
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
loc_8305B144:
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8305b164
	if (cr0.eq) goto loc_8305B164;
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
loc_8305B164:
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8305b184
	if (cr0.eq) goto loc_8305B184;
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
loc_8305B184:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830a2728
	sub_830A2728(ctx, base);
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

__attribute__((alias("__imp__sub_8305B1A4"))) PPC_WEAK_FUNC(sub_8305B1A4);
PPC_FUNC_IMPL(__imp__sub_8305B1A4) {
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
	// bl 0x830a2728
	sub_830A2728(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305B1D0"))) PPC_WEAK_FUNC(sub_8305B1D0);
PPC_FUNC_IMPL(__imp__sub_8305B1D0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8305b20c
	if (cr0.eq) goto loc_8305B20C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8305B20C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
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

__attribute__((alias("__imp__sub_8305B240"))) PPC_WEAK_FUNC(sub_8305B240);
PPC_FUNC_IMPL(__imp__sub_8305B240) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8305b278
	if (cr0.eq) goto loc_8305B278;
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
loc_8305B278:
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r3,36
	ctx.r3.s64 = 36;
	// stw r4,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r4.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8305b2a0
	if (cr0.eq) goto loc_8305B2A0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82fe6610
	sub_82FE6610(ctx, base);
	// b 0x8305b2a4
	goto loc_8305B2A4;
loc_8305B2A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8305B2A4:
	// stw r3,20(r29)
	PPC_STORE_U32(r29.u32 + 20, ctx.r3.u32);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8305B2B0"))) PPC_WEAK_FUNC(sub_8305B2B0);
PPC_FUNC_IMPL(__imp__sub_8305B2B0) {
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

__attribute__((alias("__imp__sub_8305B2E8"))) PPC_WEAK_FUNC(sub_8305B2E8);
PPC_FUNC_IMPL(__imp__sub_8305B2E8) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8305b320
	if (cr0.eq) goto loc_8305B320;
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
loc_8305B320:
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r3,36
	ctx.r3.s64 = 36;
	// stw r4,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r4.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8305b348
	if (cr0.eq) goto loc_8305B348;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82fe6610
	sub_82FE6610(ctx, base);
	// b 0x8305b34c
	goto loc_8305B34C;
loc_8305B348:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8305B34C:
	// stw r3,24(r29)
	PPC_STORE_U32(r29.u32 + 24, ctx.r3.u32);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8305B358"))) PPC_WEAK_FUNC(sub_8305B358);
PPC_FUNC_IMPL(__imp__sub_8305B358) {
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

__attribute__((alias("__imp__sub_8305B388"))) PPC_WEAK_FUNC(sub_8305B388);
PPC_FUNC_IMPL(__imp__sub_8305B388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31947
	r11.s64 = -2093678592;
	// addi r3,r11,15476
	ctx.r3.s64 = r11.s64 + 15476;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305B398"))) PPC_WEAK_FUNC(sub_8305B398);
PPC_FUNC_IMPL(__imp__sub_8305B398) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x830a22b8
	sub_830A22B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lha r11,0(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 0));
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8305b414
	if (cr0.eq) goto loc_8305B414;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x83001478
	sub_83001478(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83001a80
	sub_83001A80(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x83054b08
	sub_83054B08(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x83001d80
	sub_83001D80(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x83001d80
	sub_83001D80(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x83001d80
	sub_83001D80(ctx, base);
	// b 0x8305b4b8
	goto loc_8305B4B8;
loc_8305B414:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// addi r29,r31,12
	r29.s64 = r31.s64 + 12;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8305b448
	if (cr0.eq) goto loc_8305B448;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8305B448:
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83001ca8
	sub_83001CA8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x83055618
	sub_83055618(ctx, base);
	// lis r11,-31947
	r11.s64 = -2093678592;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r11,13936
	r29.s64 = r11.s64 + 13936;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83001e40
	sub_83001E40(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// bl 0x83001e40
	sub_83001E40(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31947
	r11.s64 = -2093678592;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,15952
	ctx.r4.s64 = r11.s64 + 15952;
	// stw r10,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// bl 0x83001e40
	sub_83001E40(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
loc_8305B4B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8305B4C0"))) PPC_WEAK_FUNC(sub_8305B4C0);
PPC_FUNC_IMPL(__imp__sub_8305B4C0) {
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
	// bl 0x830a2790
	sub_830A2790(ctx, base);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r11,20624
	ctx.r10.s64 = r11.s64 + 20624;
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
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

__attribute__((alias("__imp__sub_8305B520"))) PPC_WEAK_FUNC(sub_8305B520);
PPC_FUNC_IMPL(__imp__sub_8305B520) {
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
	// bl 0x8305b0d8
	sub_8305B0D8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8305b550
	if (cr0.eq) goto loc_8305B550;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_8305B550:
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

__attribute__((alias("__imp__sub_8305B578"))) PPC_WEAK_FUNC(sub_8305B578);
PPC_FUNC_IMPL(__imp__sub_8305B578) {
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
	// li r3,32
	ctx.r3.s64 = 32;
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
	// beq 0x8305b5bc
	if (cr0.eq) goto loc_8305B5BC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8305b4c0
	sub_8305B4C0(ctx, base);
	// b 0x8305b5c0
	goto loc_8305B5C0;
loc_8305B5BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8305B5C0:
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

__attribute__((alias("__imp__sub_8305B5D8"))) PPC_WEAK_FUNC(sub_8305B5D8);
PPC_FUNC_IMPL(__imp__sub_8305B5D8) {
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

__attribute__((alias("__imp__sub_8305B610"))) PPC_WEAK_FUNC(sub_8305B610);
PPC_FUNC_IMPL(__imp__sub_8305B610) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r28,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r28.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// bl 0x830a2790
	sub_830A2790(ctx, base);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// li r29,0
	r29.s64 = 0;
	// addi r11,r11,20624
	r11.s64 = r11.s64 + 20624;
	// li r10,8
	ctx.r10.s64 = 8;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// stw r29,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r29.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// stw r29,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r29.u32);
	// stw r29,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r29.u32);
	// stw r29,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r29.u32);
	// stw r29,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r29.u32);
	// beq cr6,0x8305b680
	if (cr6.eq) goto loc_8305B680;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r3.u32);
loc_8305B680:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
	// beq 0x8305b6bc
	if (cr0.eq) goto loc_8305B6BC;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82fdad88
	sub_82FDAD88(ctx, base);
	// lis r11,-32237
	r11.s64 = -2112684032;
	// mr r29,r27
	r29.u64 = r27.u64;
	// addi r11,r11,32376
	r11.s64 = r11.s64 + 32376;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
loc_8305B6BC:
	// stw r29,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8305B6CC"))) PPC_WEAK_FUNC(sub_8305B6CC);
PPC_FUNC_IMPL(__imp__sub_8305B6CC) {
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
	// bl 0x830a2728
	sub_830A2728(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305B6F4"))) PPC_WEAK_FUNC(sub_8305B6F4);
PPC_FUNC_IMPL(__imp__sub_8305B6F4) {
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
	// lwz r4,180(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 180);
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

__attribute__((alias("__imp__sub_8305B720"))) PPC_WEAK_FUNC(sub_8305B720);
PPC_FUNC_IMPL(__imp__sub_8305B720) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x83043678
	sub_83043678(ctx, base);
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

__attribute__((alias("__imp__sub_8305B760"))) PPC_WEAK_FUNC(sub_8305B760);
PPC_FUNC_IMPL(__imp__sub_8305B760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31947
	r11.s64 = -2093678592;
	// addi r3,r11,15484
	ctx.r3.s64 = r11.s64 + 15484;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305B770"))) PPC_WEAK_FUNC(sub_8305B770);
PPC_FUNC_IMPL(__imp__sub_8305B770) {
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
	// beq 0x8305b7cc
	if (cr0.eq) goto loc_8305B7CC;
	// lbz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// bl 0x83001380
	sub_83001380(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r4,5(r30)
	ctx.r4.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// bl 0x83001380
	sub_83001380(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83001a80
	sub_83001A80(ctx, base);
	// b 0x8305b7f8
	goto loc_8305B7F8;
loc_8305B7CC:
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// bl 0x83001600
	sub_83001600(ctx, base);
	// addi r4,r30,5
	ctx.r4.s64 = r30.s64 + 5;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83001600
	sub_83001600(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r30,8
	ctx.r4.s64 = r30.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83001ca8
	sub_83001CA8(ctx, base);
loc_8305B7F8:
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

__attribute__((alias("__imp__sub_8305B810"))) PPC_WEAK_FUNC(sub_8305B810);
PPC_FUNC_IMPL(__imp__sub_8305B810) {
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
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8305b85c
	if (cr0.eq) goto loc_8305B85C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// addi r10,r11,19784
	ctx.r10.s64 = r11.s64 + 19784;
	// li r11,0
	r11.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, r11.u8);
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, r11.u8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// b 0x8305b860
	goto loc_8305B860;
loc_8305B85C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8305B860:
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

__attribute__((alias("__imp__sub_8305B878"))) PPC_WEAK_FUNC(sub_8305B878);
PPC_FUNC_IMPL(__imp__sub_8305B878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32234
	r11.s64 = -2112487424;
	// stw r4,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r4.u32);
	// addi r10,r11,21060
	ctx.r10.s64 = r11.s64 + 21060;
	// li r11,0
	r11.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
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
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305B8B8"))) PPC_WEAK_FUNC(sub_8305B8B8);
PPC_FUNC_IMPL(__imp__sub_8305B8B8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r5,36(r30)
	PPC_STORE_U32(r30.u32 + 36, ctx.r5.u32);
	// addi r10,r11,21060
	ctx.r10.s64 = r11.s64 + 21060;
	// li r11,0
	r11.s64 = 0;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// stw r11,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r11.u32);
	// stw r11,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r11.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// stw r3,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8305B938"))) PPC_WEAK_FUNC(sub_8305B938);
PPC_FUNC_IMPL(__imp__sub_8305B938) {
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

__attribute__((alias("__imp__sub_8305B960"))) PPC_WEAK_FUNC(sub_8305B960);
PPC_FUNC_IMPL(__imp__sub_8305B960) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8305b99c
	if (cr0.eq) goto loc_8305B99C;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8305B99C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8305B9C8"))) PPC_WEAK_FUNC(sub_8305B9C8);
PPC_FUNC_IMPL(__imp__sub_8305B9C8) {
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
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
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
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
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
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
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

__attribute__((alias("__imp__sub_8305BA80"))) PPC_WEAK_FUNC(sub_8305BA80);
PPC_FUNC_IMPL(__imp__sub_8305BA80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31947
	r11.s64 = -2093678592;
	// addi r3,r11,15492
	ctx.r3.s64 = r11.s64 + 15492;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305BA90"))) PPC_WEAK_FUNC(sub_8305BA90);
PPC_FUNC_IMPL(__imp__sub_8305BA90) {
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
	// beq 0x8305bb50
	if (cr0.eq) goto loc_8305BB50;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x83001478
	sub_83001478(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x83001478
	sub_83001478(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83001a80
	sub_83001A80(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83001a80
	sub_83001A80(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83001a80
	sub_83001A80(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83001a80
	sub_83001A80(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83001a80
	sub_83001A80(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83001a80
	sub_83001A80(ctx, base);
	// b 0x8305bbf4
	goto loc_8305BBF4;
loc_8305BB50:
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// addi r4,r30,8
	ctx.r4.s64 = r30.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r30,12
	ctx.r4.s64 = r30.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83001ca8
	sub_83001CA8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83001ca8
	sub_83001CA8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r30,20
	ctx.r4.s64 = r30.s64 + 20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83001ca8
	sub_83001CA8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r30,24
	ctx.r4.s64 = r30.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83001ca8
	sub_83001CA8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r30,28
	ctx.r4.s64 = r30.s64 + 28;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83001ca8
	sub_83001CA8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r30,32
	ctx.r4.s64 = r30.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83001ca8
	sub_83001CA8(ctx, base);
loc_8305BBF4:
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

__attribute__((alias("__imp__sub_8305BC18"))) PPC_WEAK_FUNC(sub_8305BC18);
PPC_FUNC_IMPL(__imp__sub_8305BC18) {
	PPC_FUNC_PROLOGUE();
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r6,36(r30)
	PPC_STORE_U32(r30.u32 + 36, ctx.r6.u32);
	// addi r10,r11,21060
	ctx.r10.s64 = r11.s64 + 21060;
	// li r11,0
	r11.s64 = 0;
	// stw r9,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r9.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// stw r11,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r11.u32);
	// stw r11,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r11.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// sth r11,82(r31)
	PPC_STORE_U16(r31.u32 + 82, r11.u16);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// sth r5,80(r31)
	PPC_STORE_U16(r31.u32 + 80, ctx.r5.u16);
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r3.u32);
	// b 0x8305bcb8
	goto loc_8305BCB8;
	// lwz r30,148(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 148);
loc_8305BCB8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8305BCCC"))) PPC_WEAK_FUNC(sub_8305BCCC);
PPC_FUNC_IMPL(__imp__sub_8305BCCC) {
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

__attribute__((alias("__imp__sub_8305BCEC"))) PPC_WEAK_FUNC(sub_8305BCEC);
PPC_FUNC_IMPL(__imp__sub_8305BCEC) {
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
	// bl 0x8305b9c8
	sub_8305B9C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31994
	ctx.r3.s64 = -2096758784;
	// addi r3,r3,-17228
	ctx.r3.s64 = ctx.r3.s64 + -17228;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8305BD1C"))) PPC_WEAK_FUNC(sub_8305BD1C);
PPC_FUNC_IMPL(__imp__sub_8305BD1C) {
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

__attribute__((alias("__imp__sub_8305BD50"))) PPC_WEAK_FUNC(sub_8305BD50);
PPC_FUNC_IMPL(__imp__sub_8305BD50) {
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
	// lis r11,-32234
	r11.s64 = -2112487424;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,21060
	r11.s64 = r11.s64 + 21060;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x8305b9c8
	sub_8305B9C8(ctx, base);
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

__attribute__((alias("__imp__sub_8305BDA4"))) PPC_WEAK_FUNC(sub_8305BDA4);
PPC_FUNC_IMPL(__imp__sub_8305BDA4) {
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

__attribute__((alias("__imp__sub_8305BDD0"))) PPC_WEAK_FUNC(sub_8305BDD0);
PPC_FUNC_IMPL(__imp__sub_8305BDD0) {
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
	// bl 0x8305bd50
	sub_8305BD50(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8305be00
	if (cr0.eq) goto loc_8305BE00;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_8305BE00:
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

__attribute__((alias("__imp__sub_8305BE28"))) PPC_WEAK_FUNC(sub_8305BE28);
PPC_FUNC_IMPL(__imp__sub_8305BE28) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r3,44
	ctx.r3.s64 = 44;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r29,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r29.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// beq 0x8305be88
	if (cr0.eq) goto loc_8305BE88;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8305b878
	sub_8305B878(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r10,r11,20984
	ctx.r10.s64 = r11.s64 + 20984;
	// li r11,0
	r11.s64 = 0;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stb r11,40(r30)
	PPC_STORE_U8(r30.u32 + 40, r11.u8);
	// stb r11,41(r30)
	PPC_STORE_U8(r30.u32 + 41, r11.u8);
	// stb r11,42(r30)
	PPC_STORE_U8(r30.u32 + 42, r11.u8);
	// b 0x8305be8c
	goto loc_8305BE8C;
loc_8305BE88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8305BE8C:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8305BE94"))) PPC_WEAK_FUNC(sub_8305BE94);
PPC_FUNC_IMPL(__imp__sub_8305BE94) {
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
	// lwz r4,148(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 148);
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

__attribute__((alias("__imp__sub_8305BEC0"))) PPC_WEAK_FUNC(sub_8305BEC0);
PPC_FUNC_IMPL(__imp__sub_8305BEC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31947
	r11.s64 = -2093678592;
	// addi r3,r11,15500
	ctx.r3.s64 = r11.s64 + 15500;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305BED0"))) PPC_WEAK_FUNC(sub_8305BED0);
PPC_FUNC_IMPL(__imp__sub_8305BED0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x8305ba90
	sub_8305BA90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lha r11,0(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 0));
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8305bf28
	if (cr0.eq) goto loc_8305BF28;
	// lbz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U8(r30.u32 + 40);
	// bl 0x83001380
	sub_83001380(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r4,41(r30)
	ctx.r4.u64 = PPC_LOAD_U8(r30.u32 + 41);
	// bl 0x83001380
	sub_83001380(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r4,42(r30)
	ctx.r4.u64 = PPC_LOAD_U8(r30.u32 + 42);
	// bl 0x83001380
	sub_83001380(ctx, base);
	// b 0x8305bf48
	goto loc_8305BF48;
loc_8305BF28:
	// addi r4,r30,40
	ctx.r4.s64 = r30.s64 + 40;
	// bl 0x83001600
	sub_83001600(ctx, base);
	// addi r4,r30,41
	ctx.r4.s64 = r30.s64 + 41;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83001600
	sub_83001600(ctx, base);
	// addi r4,r30,42
	ctx.r4.s64 = r30.s64 + 42;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83001600
	sub_83001600(ctx, base);
loc_8305BF48:
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

__attribute__((alias("__imp__sub_8305BF60"))) PPC_WEAK_FUNC(sub_8305BF60);
PPC_FUNC_IMPL(__imp__sub_8305BF60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32234
	r11.s64 = -2112487424;
	// addi r11,r11,21456
	r11.s64 = r11.s64 + 21456;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305BF70"))) PPC_WEAK_FUNC(sub_8305BF70);
PPC_FUNC_IMPL(__imp__sub_8305BF70) {
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
	// lis r11,-32234
	r11.s64 = -2112487424;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,21456
	r11.s64 = r11.s64 + 21456;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x8305bf9c
	if (cr0.eq) goto loc_8305BF9C;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_8305BF9C:
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

__attribute__((alias("__imp__sub_8305BFB8"))) PPC_WEAK_FUNC(sub_8305BFB8);
PPC_FUNC_IMPL(__imp__sub_8305BFB8) {
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
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,-22312
	ctx.r10.s64 = r11.s64 + -22312;
	// li r11,0
	r11.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
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

__attribute__((alias("__imp__sub_8305C008"))) PPC_WEAK_FUNC(sub_8305C008);
PPC_FUNC_IMPL(__imp__sub_8305C008) {
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
	// lwz r11,212(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// stw r6,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r6.u32);
	// stb r7,32(r31)
	PPC_STORE_U8(r31.u32 + 32, ctx.r7.u8);
	// stw r9,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// lwz r6,180(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r7,188(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r9,196(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r4,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r4.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r5,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r5.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// stw r8,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r8.u32);
	// stw r6,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r6.u32);
	// stw r7,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r7.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
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
	// lwz r11,204(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
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

__attribute__((alias("__imp__sub_8305C090"))) PPC_WEAK_FUNC(sub_8305C090);
PPC_FUNC_IMPL(__imp__sub_8305C090) {
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x830a37a8
	sub_830A37A8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x830a2950
	sub_830A2950(ctx, base);
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

__attribute__((alias("__imp__sub_8305C0C8"))) PPC_WEAK_FUNC(sub_8305C0C8);
PPC_FUNC_IMPL(__imp__sub_8305C0C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r30,r11,r4
	r30.u64 = r11.u64 + ctx.r4.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// blt cr6,0x8305c194
	if (cr6.lt) goto loc_8305C194;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lfd f0,-31328(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -31328);
	// fmul f0,f13,f0
	f0.f64 = ctx.f13.f64 * f0.f64;
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x8305c124
	if (!cr6.lt) goto loc_8305C124;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_8305C124:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8305c174
	if (!cr6.gt) goto loc_8305C174;
	// li r11,0
	r11.s64 = 0;
loc_8305C154:
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// stwx r9,r11,r29
	PPC_STORE_U32(r11.u32 + r29.u32, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x8305c154
	if (cr6.lt) goto loc_8305C154;
loc_8305C174:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
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
	// stw r29,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r29.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
loc_8305C194:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8305C1A0"))) PPC_WEAK_FUNC(sub_8305C1A0);
PPC_FUNC_IMPL(__imp__sub_8305C1A0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r31,12(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x8305c1d4
	if (cr0.eq) goto loc_8305C1D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830a28f0
	sub_830A28F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_8305C1D4:
	// lwz r31,16(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x8305c1f0
	if (cr0.eq) goto loc_8305C1F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830a43a8
	sub_830A43A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_8305C1F0:
	// lwz r31,20(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x8305c20c
	if (cr0.eq) goto loc_8305C20C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830a4688
	sub_830A4688(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_8305C20C:
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

__attribute__((alias("__imp__sub_8305C228"))) PPC_WEAK_FUNC(sub_8305C228);
PPC_FUNC_IMPL(__imp__sub_8305C228) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8305c0c8
	sub_8305C0C8(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r11.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
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

__attribute__((alias("__imp__sub_8305C288"))) PPC_WEAK_FUNC(sub_8305C288);
PPC_FUNC_IMPL(__imp__sub_8305C288) {
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
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// bne cr6,0x8305c2c4
	if (!cr6.eq) goto loc_8305C2C4;
	// bl 0x83043678
	sub_83043678(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x8305c2dc
	goto loc_8305C2DC;
loc_8305C2C4:
	// addi r11,r5,1
	r11.s64 = ctx.r5.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8305C2DC:
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

__attribute__((alias("__imp__sub_8305C2F8"))) PPC_WEAK_FUNC(sub_8305C2F8);
PPC_FUNC_IMPL(__imp__sub_8305C2F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r11,r11,21496
	r11.s64 = r11.s64 + 21496;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r5,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r5.u32);
	// stw r28,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r28.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r29,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r29.u32);
	// stw r29,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r29.u32);
	// stw r29,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r29.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8305c378
	if (cr0.eq) goto loc_8305C378;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x830a29b0
	sub_830A29B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8305c37c
	goto loc_8305C37C;
loc_8305C378:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8305C37C:
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8305c3b8
	if (cr0.eq) goto loc_8305C3B8;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x830a42f0
	sub_830A42F0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8305c3bc
	goto loc_8305C3BC;
loc_8305C3B8:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8305C3BC:
	// li r3,16
	ctx.r3.s64 = 16;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8305c400
	if (cr0.eq) goto loc_8305C400;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x830a4410
	sub_830A4410(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8305c404
	goto loc_8305C404;
loc_8305C400:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_8305C404:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stw r10,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r10.u32);
	// stw r28,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r28.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8305C424"))) PPC_WEAK_FUNC(sub_8305C424);
PPC_FUNC_IMPL(__imp__sub_8305C424) {
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

__attribute__((alias("__imp__sub_8305C444"))) PPC_WEAK_FUNC(sub_8305C444);
PPC_FUNC_IMPL(__imp__sub_8305C444) {
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
	// bl 0x8305c1a0
	sub_8305C1A0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_8305C468"))) PPC_WEAK_FUNC(sub_8305C468);
PPC_FUNC_IMPL(__imp__sub_8305C468) {
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
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
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

__attribute__((alias("__imp__sub_8305C498"))) PPC_WEAK_FUNC(sub_8305C498);
PPC_FUNC_IMPL(__imp__sub_8305C498) {
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
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
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

__attribute__((alias("__imp__sub_8305C4C8"))) PPC_WEAK_FUNC(sub_8305C4C8);
PPC_FUNC_IMPL(__imp__sub_8305C4C8) {
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
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
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

__attribute__((alias("__imp__sub_8305C4F8"))) PPC_WEAK_FUNC(sub_8305C4F8);
PPC_FUNC_IMPL(__imp__sub_8305C4F8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8305c540
	if (!cr0.eq) goto loc_8305C540;
	// lwz r11,72(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 72);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8305c534
	if (cr0.eq) goto loc_8305C534;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x8305c538
	goto loc_8305C538;
loc_8305C534:
	// li r11,0
	r11.s64 = 0;
loc_8305C538:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8305c6c0
	if (cr6.eq) goto loc_8305C6C0;
loc_8305C540:
	// addi r27,r10,-1
	r27.s64 = ctx.r10.s64 + -1;
	// mr. r31,r27
	r31.u64 = r27.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x8305c57c
	if (cr0.lt) goto loc_8305C57C;
loc_8305C54C:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x83020000
	sub_83020000(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bge 0x8305c54c
	if (!cr0.lt) goto loc_8305C54C;
loc_8305C57C:
	// lwz r31,12(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8305c59c
	if (!cr6.gt) goto loc_8305C59C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8305d5b8
	sub_8305D5B8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_8305C59C:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r31,r27
	r31.u64 = r27.u64;
	// lwz r26,0(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8305c614
	goto loc_8305C614;
loc_8305C5AC:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r28,28(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// beq 0x8305c610
	if (cr0.eq) goto loc_8305C610;
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
	// extsh r11,r3
	r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x8305c610
	if (cr6.eq) goto loc_8305C610;
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x830a3578
	sub_830A3578(ctx, base);
loc_8305C610:
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
loc_8305C614:
	// cmpw cr6,r31,r26
	cr6.compare<int32_t>(r31.s32, r26.s32, xer);
	// bge cr6,0x8305c5ac
	if (!cr6.lt) goto loc_8305C5AC;
	// mr r28,r27
	r28.u64 = r27.u64;
	// b 0x8305c6b0
	goto loc_8305C6B0;
loc_8305C624:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r29,28(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x8305c6ac
	if (cr0.eq) goto loc_8305C6AC;
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
	// extsh r11,r3
	r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x8305c6ac
	if (!cr6.eq) goto loc_8305C6AC;
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
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82fea480
	sub_82FEA480(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8305c6ac
	if (cr0.eq) goto loc_8305C6AC;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8305c6ac
	if (cr0.eq) goto loc_8305C6AC;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x830a5808
	sub_830A5808(ctx, base);
loc_8305C6AC:
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
loc_8305C6B0:
	// cmpw cr6,r28,r26
	cr6.compare<int32_t>(r28.s32, r26.s32, xer);
	// bge cr6,0x8305c624
	if (!cr6.lt) goto loc_8305C624;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x830a3e88
	sub_830A3E88(ctx, base);
loc_8305C6C0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_8305C6C8"))) PPC_WEAK_FUNC(sub_8305C6C8);
PPC_FUNC_IMPL(__imp__sub_8305C6C8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8305c71c
	if (cr0.eq) goto loc_8305C71C;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// bl 0x830a5b40
	sub_830A5B40(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8305c288
	sub_8305C288(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8305C71C:
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

__attribute__((alias("__imp__sub_8305C738"))) PPC_WEAK_FUNC(sub_8305C738);
PPC_FUNC_IMPL(__imp__sub_8305C738) {
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
	// lis r11,-32234
	r11.s64 = -2112487424;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,21496
	r11.s64 = r11.s64 + 21496;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x8305c1a0
	sub_8305C1A0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8305c774
	if (cr0.eq) goto loc_8305C774;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_8305C774:
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

__attribute__((alias("__imp__sub_8305C790"))) PPC_WEAK_FUNC(sub_8305C790);
PPC_FUNC_IMPL(__imp__sub_8305C790) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// lwz r11,72(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 72);
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8305c7cc
	if (cr0.eq) goto loc_8305C7CC;
	// lwz r29,8(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x8305c7d0
	goto loc_8305C7D0;
loc_8305C7CC:
	// li r29,0
	r29.s64 = 0;
loc_8305C7D0:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x8305c7e8
	if (!cr6.eq) goto loc_8305C7E8;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8305c8b0
	if (cr6.eq) goto loc_8305C8B0;
loc_8305C7E8:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x830a3810
	sub_830A3810(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x8305c228
	sub_8305C228(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x830a3470
	sub_830A3470(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8305c85c
	if (cr6.eq) goto loc_8305C85C;
loc_8305C824:
	// lwz r3,72(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 72);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8305c840
	if (cr0.eq) goto loc_8305C840;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8305c844
	goto loc_8305C844;
loc_8305C840:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8305C844:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8305c6c8
	sub_8305C6C8(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// blt cr6,0x8305c824
	if (cr6.lt) goto loc_8305C824;
loc_8305C85C:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// li r31,0
	r31.s64 = 0;
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x8305c8b0
	if (cr0.eq) goto loc_8305C8B0;
loc_8305C870:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x83020000
	sub_83020000(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// blt cr6,0x8305c870
	if (cr6.lt) goto loc_8305C870;
loc_8305C8B0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_8305C8B8"))) PPC_WEAK_FUNC(sub_8305C8B8);
PPC_FUNC_IMPL(__imp__sub_8305C8B8) {
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
	// lbz r11,120(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 120);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8305c910
	if (!cr0.eq) goto loc_8305C910;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r30,0(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,1
	r11.s64 = 1;
	// stb r11,120(r31)
	PPC_STORE_U8(r31.u32 + 120, r11.u8);
loc_8305C910:
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 116);
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

__attribute__((alias("__imp__sub_8305C930"))) PPC_WEAK_FUNC(sub_8305C930);
PPC_FUNC_IMPL(__imp__sub_8305C930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32234
	r11.s64 = -2112487424;
	// addi r11,r11,21776
	r11.s64 = r11.s64 + 21776;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305C940"))) PPC_WEAK_FUNC(sub_8305C940);
PPC_FUNC_IMPL(__imp__sub_8305C940) {
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
	// lis r11,-32234
	r11.s64 = -2112487424;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,21776
	r11.s64 = r11.s64 + 21776;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x8305c96c
	if (cr0.eq) goto loc_8305C96C;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_8305C96C:
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

__attribute__((alias("__imp__sub_8305C988"))) PPC_WEAK_FUNC(sub_8305C988);
PPC_FUNC_IMPL(__imp__sub_8305C988) {
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
	// lwz r11,40(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r30,8(r5)
	r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r29,24(r5)
	r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r6,32(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82fe6e90
	sub_82FE6E90(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ff9c08
	sub_82FF9C08(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stb r11,28(r31)
	PPC_STORE_U8(r31.u32 + 28, r11.u8);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8305C9E0"))) PPC_WEAK_FUNC(sub_8305C9E0);
PPC_FUNC_IMPL(__imp__sub_8305C9E0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// lhz r11,10(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 10);
	// li r22,0
	r22.s64 = 0;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// lwz r10,24(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 24);
	// stw r22,4(r24)
	PPC_STORE_U32(r24.u32 + 4, r22.u32);
	// sth r22,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r22.u16);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8305caf0
	if (cr0.eq) goto loc_8305CAF0;
	// extsh r26,r11
	r26.s64 = r11.s16;
	// lwz r11,12(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 12);
	// li r27,1
	r27.s64 = 1;
	// mr r25,r22
	r25.u64 = r22.u64;
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(r26.s32, 2, xer);
	// lwz r28,8(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bne cr6,0x8305ca4c
	if (!cr6.eq) goto loc_8305CA4C;
	// lbz r11,76(r23)
	r11.u64 = PPC_LOAD_U8(r23.u32 + 76);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8305ca4c
	if (cr0.eq) goto loc_8305CA4C;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
loc_8305CA4C:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r29,r10,32852
	r29.u64 = ctx.r10.u64 | 32852;
	// b 0x8305cac8
	goto loc_8305CAC8;
loc_8305CA58:
	// lhz r30,0(r31)
	r30.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(r26.s32, 1, xer);
	// bne cr6,0x8305ca80
	if (!cr6.eq) goto loc_8305CA80;
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// clrlwi r11,r30,16
	r11.u64 = r30.u32 & 0xFFFF;
	// lbzx r11,r10,r11
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8305cab8
	if (cr0.eq) goto loc_8305CAB8;
	// li r30,32
	r30.s64 = 32;
	// b 0x8305cab8
	goto loc_8305CAB8;
loc_8305CA80:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bne cr6,0x8305caf8
	if (!cr6.eq) goto loc_8305CAF8;
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// clrlwi r11,r30,16
	r11.u64 = r30.u32 & 0xFFFF;
	// lbzx r11,r10,r11
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8305cac4
	if (!cr0.eq) goto loc_8305CAC4;
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8305cab0
	if (cr0.eq) goto loc_8305CAB0;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
loc_8305CAB0:
	// li r27,1
	r27.s64 = 1;
loc_8305CAB4:
	// li r25,1
	r25.s64 = 1;
loc_8305CAB8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
loc_8305CAC4:
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
loc_8305CAC8:
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8305ca58
	if (!cr0.eq) goto loc_8305CA58;
	// lhz r11,-2(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + -2);
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8305caf0
	if (cr0.eq) goto loc_8305CAF0;
	// li r11,1
	r11.s64 = 1;
	// stb r11,76(r23)
	PPC_STORE_U8(r23.u32 + 76, r11.u8);
loc_8305CAF0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b60
	return;
loc_8305CAF8:
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(r27.s32, 1, xer);
	// bne cr6,0x8305cab8
	if (!cr6.eq) goto loc_8305CAB8;
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// clrlwi r11,r30,16
	r11.u64 = r30.u32 & 0xFFFF;
	// lbzx r11,r10,r11
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8305cab4
	if (cr0.eq) goto loc_8305CAB4;
	// mr r27,r22
	r27.u64 = r22.u64;
	// b 0x8305cac4
	goto loc_8305CAC4;
}

__attribute__((alias("__imp__sub_8305CB20"))) PPC_WEAK_FUNC(sub_8305CB20);
PPC_FUNC_IMPL(__imp__sub_8305CB20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x8305cb74
	goto loc_8305CB74;
loc_8305CB28:
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
loc_8305CB74:
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// clrlwi. r11,r11,28
	r11.u64 = r11.u32 & 0xF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8305cb28
	if (!cr0.eq) goto loc_8305CB28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305CB88"))) PPC_WEAK_FUNC(sub_8305CB88);
PPC_FUNC_IMPL(__imp__sub_8305CB88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,24(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// clrlwi r11,r11,28
	r11.u64 = r11.u32 & 0xF;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// bne cr6,0x8305cba0
	if (!cr6.eq) goto loc_8305CBA0;
loc_8305CB98:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8305CBA0:
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// lwz r11,32(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// bne cr6,0x8305cbbc
	if (!cr6.eq) goto loc_8305CBBC;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// bne cr6,0x8305cbd8
	if (!cr6.eq) goto loc_8305CBD8;
	// b 0x8305cb98
	goto loc_8305CB98;
loc_8305CBBC:
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// beq cr6,0x8305cbd8
	if (cr6.eq) goto loc_8305CBD8;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_8305CBD8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305CBE0"))) PPC_WEAK_FUNC(sub_8305CBE0);
PPC_FUNC_IMPL(__imp__sub_8305CBE0) {
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
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8305cc94
	if (!cr0.eq) goto loc_8305CC94;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8305cc94
	if (!cr0.eq) goto loc_8305CC94;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8305cc94
	if (cr6.eq) goto loc_8305CC94;
loc_8305CC5C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r7,24(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8305cc94
	if (!cr0.eq) goto loc_8305CC94;
	// lwz r28,56(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + 56);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// bne 0x8305cc5c
	if (!cr0.eq) goto loc_8305CC5C;
loc_8305CC94:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8305CCA0"))) PPC_WEAK_FUNC(sub_8305CCA0);
PPC_FUNC_IMPL(__imp__sub_8305CCA0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,56(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x8305ccd0
	if (cr0.eq) goto loc_8305CCD0;
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// b 0x8305ccd4
	goto loc_8305CCD4;
loc_8305CCD0:
	// lwz r8,24(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
loc_8305CCD4:
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// beq cr6,0x8305ce3c
	if (cr6.eq) goto loc_8305CE3C;
	// lwz r11,56(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8305ccf0
	if (cr0.eq) goto loc_8305CCF0;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// b 0x8305ccf4
	goto loc_8305CCF4;
loc_8305CCF0:
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
loc_8305CCF4:
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// bne cr6,0x8305cdbc
	if (!cr6.eq) goto loc_8305CDBC;
	// cmpwi cr6,r8,5
	cr6.compare<int32_t>(ctx.r8.s32, 5, xer);
	// beq cr6,0x8305cd44
	if (cr6.eq) goto loc_8305CD44;
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,21784
	ctx.r4.s64 = r11.s64 + 21784;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,360
	ctx.r6.s64 = 360;
	// li r5,1816
	ctx.r5.s64 = 1816;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
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
loc_8305CD44:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8305cdbc
	if (!cr6.eq) goto loc_8305CDBC;
	// lwz r3,32(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8305cd7c
	if (!cr6.eq) goto loc_8305CD7C;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305cd7c
	if (cr6.eq) goto loc_8305CD7C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,32(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8305ce3c
	if (!cr0.eq) goto loc_8305CE3C;
loc_8305CD7C:
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,21784
	ctx.r4.s64 = r11.s64 + 21784;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,360
	ctx.r6.s64 = 360;
	// li r5,1825
	ctx.r5.s64 = 1825;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
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
loc_8305CDBC:
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x8305ce3c
	if (cr6.eq) goto loc_8305CE3C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8305cdfc
	if (cr6.eq) goto loc_8305CDFC;
loc_8305CDCC:
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x8305cdf4
	if (cr6.eq) goto loc_8305CDF4;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// bne cr6,0x8305cdf0
	if (!cr6.eq) goto loc_8305CDF0;
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8305cdcc
	if (!cr0.eq) goto loc_8305CDCC;
	// b 0x8305cdfc
	goto loc_8305CDFC;
loc_8305CDF0:
	// li r11,0
	r11.s64 = 0;
loc_8305CDF4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8305ce3c
	if (!cr6.eq) goto loc_8305CE3C;
loc_8305CDFC:
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,21784
	ctx.r4.s64 = r11.s64 + 21784;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,360
	ctx.r6.s64 = 360;
	// li r5,1844
	ctx.r5.s64 = 1844;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
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
loc_8305CE3C:
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

__attribute__((alias("__imp__sub_8305CE58"))) PPC_WEAK_FUNC(sub_8305CE58);
PPC_FUNC_IMPL(__imp__sub_8305CE58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,24(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// clrlwi r8,r11,28
	ctx.r8.u64 = r11.u32 & 0xF;
	// cmpwi cr6,r8,6
	cr6.compare<int32_t>(ctx.r8.s32, 6, xer);
	// bne cr6,0x8305ce70
	if (!cr6.eq) goto loc_8305CE70;
loc_8305CE68:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8305CE70:
	// lwz r11,24(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// clrlwi r11,r11,28
	r11.u64 = r11.u32 & 0xF;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r9,32(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// bne cr6,0x8305cea0
	if (!cr6.eq) goto loc_8305CEA0;
	// cmpwi cr6,r8,7
	cr6.compare<int32_t>(ctx.r8.s32, 7, xer);
	// bne cr6,0x8305cea0
	if (!cr6.eq) goto loc_8305CEA0;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x8305ce68
	if (cr6.eq) goto loc_8305CE68;
loc_8305CEA0:
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// bne cr6,0x8305cecc
	if (!cr6.eq) goto loc_8305CECC;
	// cmpwi cr6,r8,8
	cr6.compare<int32_t>(ctx.r8.s32, 8, xer);
	// bne cr6,0x8305ceb8
	if (!cr6.eq) goto loc_8305CEB8;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x8305ce68
	if (cr6.eq) goto loc_8305CE68;
loc_8305CEB8:
	// cmpwi cr6,r8,7
	cr6.compare<int32_t>(ctx.r8.s32, 7, xer);
	// bne cr6,0x8305cecc
	if (!cr6.eq) goto loc_8305CECC;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bnelr cr6
	if (!cr6.eq) return;
loc_8305CECC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305CED8"))) PPC_WEAK_FUNC(sub_8305CED8);
PPC_FUNC_IMPL(__imp__sub_8305CED8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// clrlwi. r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8305cf7c
	if (cr0.eq) goto loc_8305CF7C;
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r6,32(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// lwz r10,36(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// cmpw cr6,r7,r6
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, xer);
	// blt cr6,0x8305cf2c
	if (cr6.lt) goto loc_8305CF2C;
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x8305cf24
	if (cr6.eq) goto loc_8305CF24;
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// beq cr6,0x8305cf2c
	if (cr6.eq) goto loc_8305CF2C;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bgt cr6,0x8305cf2c
	if (cr6.gt) goto loc_8305CF2C;
loc_8305CF24:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x8305cf30
	goto loc_8305CF30;
loc_8305CF2C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8305CF30:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8305cf7c
	if (!cr0.eq) goto loc_8305CF7C;
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r11,21784
	ctx.r4.s64 = r11.s64 + 21784;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r6,355
	ctx.r6.s64 = 355;
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,1611
	ctx.r5.s64 = 1611;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
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
loc_8305CF7C:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// lwz r5,32(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// bl 0x8305cb88
	sub_8305CB88(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8305cfd8
	if (!cr0.eq) goto loc_8305CFD8;
	// lwz r5,20(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// lwz r7,16(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,21784
	ctx.r4.s64 = r11.s64 + 21784;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r6,354
	ctx.r6.s64 = 354;
	// li r5,1617
	ctx.r5.s64 = 1617;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
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
loc_8305CFD8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305CFE8"))) PPC_WEAK_FUNC(sub_8305CFE8);
PPC_FUNC_IMPL(__imp__sub_8305CFE8) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// lwz r11,72(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 72);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8305d01c
	if (cr0.eq) goto loc_8305D01C;
	// lwz r26,8(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x8305d020
	goto loc_8305D020;
loc_8305D01C:
	// li r26,0
	r26.s64 = 0;
loc_8305D020:
	// lwz r11,72(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 72);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8305d034
	if (cr0.eq) goto loc_8305D034;
	// lwz r27,8(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x8305d038
	goto loc_8305D038;
loc_8305D034:
	// li r27,0
	r27.s64 = 0;
loc_8305D038:
	// cmplw cr6,r26,r27
	cr6.compare<uint32_t>(r26.u32, r27.u32, xer);
	// ble cr6,0x8305d080
	if (!cr6.gt) goto loc_8305D080;
	// lwz r6,20(r24)
	ctx.r6.u64 = PPC_LOAD_U32(r24.u32 + 20);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,21784
	ctx.r4.s64 = r11.s64 + 21784;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// li r6,361
	ctx.r6.s64 = 361;
	// li r5,1777
	ctx.r5.s64 = 1777;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
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
loc_8305D080:
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8305d114
	if (cr6.eq) goto loc_8305D114;
loc_8305D08C:
	// lwz r3,72(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 72);
	// li r28,0
	r28.s64 = 0;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8305d0ac
	if (cr0.eq) goto loc_8305D0AC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8305d0b0
	goto loc_8305D0B0;
loc_8305D0AC:
	// li r30,0
	r30.s64 = 0;
loc_8305D0B0:
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8305d100
	if (cr6.eq) goto loc_8305D100;
loc_8305D0BC:
	// lwz r3,72(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + 72);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8305d0d8
	if (cr0.eq) goto loc_8305D0D8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8305d0dc
	goto loc_8305D0DC;
loc_8305D0D8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8305D0DC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830a1550
	sub_830A1550(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8305d0fc
	if (!cr0.eq) goto loc_8305D0FC;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(r31.u32, r27.u32, xer);
	// blt cr6,0x8305d0bc
	if (cr6.lt) goto loc_8305D0BC;
	// b 0x8305d100
	goto loc_8305D100;
loc_8305D0FC:
	// li r28,1
	r28.s64 = 1;
loc_8305D100:
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8305d11c
	if (cr0.eq) goto loc_8305D11C;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r26
	cr6.compare<uint32_t>(r29.u32, r26.u32, xer);
	// blt cr6,0x8305d08c
	if (cr6.lt) goto loc_8305D08C;
loc_8305D114:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831b0b5c
	return;
loc_8305D11C:
	// lwz r5,20(r24)
	ctx.r5.u64 = PPC_LOAD_U32(r24.u32 + 20);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,21784
	ctx.r4.s64 = r11.s64 + 21784;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// li r6,362
	ctx.r6.s64 = 362;
	// li r5,1794
	ctx.r5.s64 = 1794;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
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
}

__attribute__((alias("__imp__sub_8305D168"))) PPC_WEAK_FUNC(sub_8305D168);
PPC_FUNC_IMPL(__imp__sub_8305D168) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r22{};
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
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// lwz r11,32(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// lwz r10,32(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// stw r9,308(r31)
	PPC_STORE_U32(r31.u32 + 308, ctx.r9.u32);
	// lwz r9,36(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// lwz r8,36(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	// stw r4,268(r31)
	PPC_STORE_U32(r31.u32 + 268, ctx.r4.u32);
	// stw r24,260(r31)
	PPC_STORE_U32(r31.u32 + 260, r24.u32);
	// stw r6,284(r31)
	PPC_STORE_U32(r31.u32 + 284, ctx.r6.u32);
	// stw r7,292(r31)
	PPC_STORE_U32(r31.u32 + 292, ctx.r7.u32);
	// stw r26,316(r31)
	PPC_STORE_U32(r31.u32 + 316, r26.u32);
	// blt cr6,0x8305d1d8
	if (cr6.lt) goto loc_8305D1D8;
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// beq cr6,0x8305d1d0
	if (cr6.eq) goto loc_8305D1D0;
	// cmpwi cr6,r8,-1
	cr6.compare<int32_t>(ctx.r8.s32, -1, xer);
	// beq cr6,0x8305d1d8
	if (cr6.eq) goto loc_8305D1D8;
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// bgt cr6,0x8305d1d8
	if (cr6.gt) goto loc_8305D1D8;
loc_8305D1D0:
	// li r11,1
	r11.s64 = 1;
	// b 0x8305d1dc
	goto loc_8305D1DC;
loc_8305D1D8:
	// li r11,0
	r11.s64 = 0;
loc_8305D1DC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8305d210
	if (!cr0.eq) goto loc_8305D210;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// lwz r7,20(r24)
	ctx.r7.u64 = PPC_LOAD_U32(r24.u32 + 20);
	// li r6,364
	ctx.r6.s64 = 364;
	// addi r4,r11,21784
	ctx.r4.s64 = r11.s64 + 21784;
	// li r5,1887
	ctx.r5.s64 = 1887;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82fd93a0
	sub_82FD93A0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// addi r4,r11,-8860
	ctx.r4.s64 = r11.s64 + -8860;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_8305D210:
	// lwz r11,4(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// li r27,0
	r27.s64 = 0;
	// lwz r25,4(r26)
	r25.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// li r28,0
	r28.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// stw r27,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r27.u32);
	// stw r25,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r25.u32);
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
loc_8305D234:
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bge cr6,0x8305d2c8
	if (!cr6.lt) goto loc_8305D2C8;
	// li r11,0
	r11.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stb r11,81(r31)
	PPC_STORE_U8(r31.u32 + 81, r11.u8);
	// stw r4,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r4.u32);
loc_8305D250:
	// cmplw cr6,r4,r25
	cr6.compare<uint32_t>(ctx.r4.u32, r25.u32, xer);
	// bge cr6,0x8305d2b8
	if (!cr6.lt) goto loc_8305D2B8;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8308ea58
	sub_8308EA58(ctx, base);
	// lwz r29,0(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// li r11,0
	r11.s64 = 0;
	// stw r29,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r29.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r30.u32);
	// stb r11,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r11.u8);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// bl 0x8308ea58
	sub_8308EA58(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r9,324(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 324);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r8,308(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 308);
	// lwz r6,284(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 284);
	// lwz r4,268(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x8305f5f8
	sub_8305F5F8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r11,1
	r11.s64 = 1;
	// stb r11,81(r31)
	PPC_STORE_U8(r31.u32 + 81, r11.u8);
loc_8305D2B8:
	// lbz r11,81(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 81);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8305d348
	if (!cr0.eq) goto loc_8305D348;
	// li r27,365
	r27.s64 = 365;
loc_8305D2C8:
	// lbz r11,335(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 335);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8305d358
	if (!cr0.eq) goto loc_8305D358;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bne cr6,0x8305d360
	if (!cr6.eq) goto loc_8305D360;
	// cmplw cr6,r30,r25
	cr6.compare<uint32_t>(r30.u32, r25.u32, xer);
	// bge cr6,0x8305d30c
	if (!cr6.lt) goto loc_8305D30C;
loc_8305D2E4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8308ea58
	sub_8308EA58(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8308ad88
	sub_8308AD88(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8305d354
	if (!cr0.eq) goto loc_8305D354;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r25
	cr6.compare<uint32_t>(r30.u32, r25.u32, xer);
	// blt cr6,0x8305d2e4
	if (cr6.lt) goto loc_8305D2E4;
loc_8305D30C:
	// addi r1,r31,240
	ctx.r1.s64 = r31.s64 + 240;
	// b 0x831b0b68
	return;
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// lwz r24,260(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// lwz r26,316(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r27,92(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// lwz r25,96(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// lwz r30,100(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r28,84(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bne 0x8305d2b8
	if (!cr0.eq) goto loc_8305D2B8;
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// stw r4,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r4.u32);
	// b 0x8305d250
	goto loc_8305D250;
loc_8305D348:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
	// b 0x8305d234
	goto loc_8305D234;
loc_8305D354:
	// li r27,365
	r27.s64 = 365;
loc_8305D358:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x8305d30c
	if (cr6.eq) goto loc_8305D30C;
loc_8305D360:
	// lis r11,-32234
	r11.s64 = -2112487424;
	// lwz r7,20(r24)
	ctx.r7.u64 = PPC_LOAD_U32(r24.u32 + 20);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r4,r11,21784
	ctx.r4.s64 = r11.s64 + 21784;
	// li r5,1943
	ctx.r5.s64 = 1943;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82fd93a0
	sub_82FD93A0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// addi r4,r11,-8860
	ctx.r4.s64 = r11.s64 + -8860;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
	// lwz r24,7312(r27)
	r24.u64 = PPC_LOAD_U32(r27.u32 + 7312);
	// lwz r16,21908(r22)
	r16.u64 = PPC_LOAD_U32(r22.u32 + 21908);
	// addi r31,r12,-240
	r31.s64 = r12.s64 + -240;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,335(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 335);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8305d3c8
	if (!cr0.eq) goto loc_8305D3C8;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// bl 0x8308ad88
	sub_8308AD88(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8305d3c8
	if (cr0.eq) goto loc_8305D3C8;
	// li r11,1
	r11.s64 = 1;
	// stb r11,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r11.u8);
loc_8305D3C8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31994
	ctx.r3.s64 = -2096758784;
	// addi r3,r3,-11500
	ctx.r3.s64 = ctx.r3.s64 + -11500;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_8305D394"))) PPC_WEAK_FUNC(sub_8305D394);
PPC_FUNC_IMPL(__imp__sub_8305D394) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lbz r11,335(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 335);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8305d3c8
	if (!cr0.eq) goto loc_8305D3C8;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// bl 0x8308ad88
	sub_8308AD88(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8305d3c8
	if (cr0.eq) goto loc_8305D3C8;
	// li r11,1
	r11.s64 = 1;
	// stb r11,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r11.u8);
loc_8305D3C8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31994
	ctx.r3.s64 = -2096758784;
	// addi r3,r3,-11500
	ctx.r3.s64 = ctx.r3.s64 + -11500;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_8305D3E0"))) PPC_WEAK_FUNC(sub_8305D3E0);
PPC_FUNC_IMPL(__imp__sub_8305D3E0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,32(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r8,32(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// lwz r11,36(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	// lwz r10,36(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// blt cr6,0x8305d428
	if (cr6.lt) goto loc_8305D428;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x8305d420
	if (cr6.eq) goto loc_8305D420;
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x8305d428
	if (cr6.eq) goto loc_8305D428;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bgt cr6,0x8305d428
	if (cr6.gt) goto loc_8305D428;
loc_8305D420:
	// li r11,1
	r11.s64 = 1;
	// b 0x8305d42c
	goto loc_8305D42C;
loc_8305D428:
	// li r11,0
	r11.s64 = 0;
loc_8305D42C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8305d460
	if (!cr0.eq) goto loc_8305D460;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// lwz r7,20(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// li r6,370
	ctx.r6.s64 = 370;
	// addi r4,r11,21784
	ctx.r4.s64 = r11.s64 + 21784;
	// li r5,1953
	ctx.r5.s64 = 1953;
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
loc_8305D460:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x8305ce58
	sub_8305CE58(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8305d49c
	if (!cr0.eq) goto loc_8305D49C;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// lwz r7,20(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// li r6,371
	ctx.r6.s64 = 371;
	// addi r4,r11,21784
	ctx.r4.s64 = r11.s64 + 21784;
	// li r5,1957
	ctx.r5.s64 = 1957;
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
loc_8305D49C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305D4B0"))) PPC_WEAK_FUNC(sub_8305D4B0);
PPC_FUNC_IMPL(__imp__sub_8305D4B0) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// bl 0x8308ad88
	sub_8308AD88(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8308ae20
	sub_8308AE20(ctx, base);
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8305d55c
	if (cr0.eq) goto loc_8305D55C;
	// lwz r10,32(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 32);
	// lwz r11,36(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 36);
	// cmpw cr6,r29,r10
	cr6.compare<int32_t>(r29.s32, ctx.r10.s32, xer);
	// blt cr6,0x8305d524
	if (cr6.lt) goto loc_8305D524;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x8305d51c
	if (cr6.eq) goto loc_8305D51C;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8305d524
	if (cr6.eq) goto loc_8305D524;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bgt cr6,0x8305d524
	if (cr6.gt) goto loc_8305D524;
loc_8305D51C:
	// li r11,1
	r11.s64 = 1;
	// b 0x8305d528
	goto loc_8305D528;
loc_8305D524:
	// li r11,0
	r11.s64 = 0;
loc_8305D528:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8305d55c
	if (!cr0.eq) goto loc_8305D55C;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// lwz r7,20(r26)
	ctx.r7.u64 = PPC_LOAD_U32(r26.u32 + 20);
	// li r6,372
	ctx.r6.s64 = 372;
	// addi r4,r11,21784
	ctx.r4.s64 = r11.s64 + 21784;
	// li r5,2013
	ctx.r5.s64 = 2013;
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
loc_8305D55C:
	// lwz r30,4(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// li r31,0
	r31.s64 = 0;
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x8305d5ac
	if (cr0.eq) goto loc_8305D5AC;
loc_8305D56C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8308ea58
	sub_8308EA58(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8305f5f8
	sub_8305F5F8(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// blt cr6,0x8305d56c
	if (cr6.lt) goto loc_8305D56C;
loc_8305D5AC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_8305D5B8"))) PPC_WEAK_FUNC(sub_8305D5B8);
PPC_FUNC_IMPL(__imp__sub_8305D5B8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8305d608
	if (!cr0.eq) goto loc_8305D608;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r6,80
	ctx.r6.s64 = 80;
	// addi r4,r11,-31320
	ctx.r4.s64 = r11.s64 + -31320;
	// li r5,102
	ctx.r5.s64 = 102;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fdc0b0
	sub_82FDC0B0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-8504
	ctx.r4.s64 = r11.s64 + -8504;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_8305D608:
	// addi r30,r11,-1
	r30.s64 = r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8308ea58
	sub_8308EA58(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82fdea08
	sub_82FDEA08(ctx, base);
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

__attribute__((alias("__imp__sub_8305D650"))) PPC_WEAK_FUNC(sub_8305D650);
PPC_FUNC_IMPL(__imp__sub_8305D650) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// bl 0x8301f0f8
	sub_8301F0F8(ctx, base);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// li r29,0
	r29.s64 = 0;
	// stw r28,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r28.u32);
	// addi r11,r11,21992
	r11.s64 = r11.s64 + 21992;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,1023
	ctx.r4.s64 = 1023;
	// addi r3,r30,48
	ctx.r3.s64 = r30.s64 + 48;
	// stw r29,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r29.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r29,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r29.u32);
	// stw r29,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r29.u32);
	// stb r29,36(r30)
	PPC_STORE_U8(r30.u32 + 36, r29.u8);
	// stw r29,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r29.u32);
	// stw r29,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r29.u32);
	// bl 0x82fe7278
	sub_82FE7278(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,80
	ctx.r3.s64 = r30.s64 + 80;
	// stb r29,76(r30)
	PPC_STORE_U8(r30.u32 + 76, r29.u8);
	// stb r29,77(r30)
	PPC_STORE_U8(r30.u32 + 77, r29.u8);
	// bl 0x830a5ea8
	sub_830A5EA8(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// stw r29,96(r30)
	PPC_STORE_U32(r30.u32 + 96, r29.u32);
	// stb r29,100(r30)
	PPC_STORE_U8(r30.u32 + 100, r29.u8);
	// stb r29,101(r30)
	PPC_STORE_U8(r30.u32 + 101, r29.u8);
	// stw r29,92(r30)
	PPC_STORE_U32(r30.u32 + 92, r29.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// beq 0x8305d700
	if (cr0.eq) goto loc_8305D700;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83070930
	sub_83070930(ctx, base);
	// mr r29,r28
	r29.u64 = r28.u64;
loc_8305D700:
	// stw r29,92(r30)
	PPC_STORE_U32(r30.u32 + 92, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8305D710"))) PPC_WEAK_FUNC(sub_8305D710);
PPC_FUNC_IMPL(__imp__sub_8305D710) {
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
	// bl 0x8301f120
	sub_8301F120(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305D738"))) PPC_WEAK_FUNC(sub_8305D738);
PPC_FUNC_IMPL(__imp__sub_8305D738) {
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
	// addi r3,r11,48
	ctx.r3.s64 = r11.s64 + 48;
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

__attribute__((alias("__imp__sub_8305D764"))) PPC_WEAK_FUNC(sub_8305D764);
PPC_FUNC_IMPL(__imp__sub_8305D764) {
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
	// addi r3,r11,80
	ctx.r3.s64 = r11.s64 + 80;
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

__attribute__((alias("__imp__sub_8305D790"))) PPC_WEAK_FUNC(sub_8305D790);
PPC_FUNC_IMPL(__imp__sub_8305D790) {
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

__attribute__((alias("__imp__sub_8305D7C0"))) PPC_WEAK_FUNC(sub_8305D7C0);
PPC_FUNC_IMPL(__imp__sub_8305D7C0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305D7D0"))) PPC_WEAK_FUNC(sub_8305D7D0);
PPC_FUNC_IMPL(__imp__sub_8305D7D0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r24,0
	r24.s64 = 0;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// stw r30,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r30.u32);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// stb r24,100(r30)
	PPC_STORE_U8(r30.u32 + 100, r24.u8);
	// stb r24,101(r30)
	PPC_STORE_U8(r30.u32 + 101, r24.u8);
	// bne cr6,0x8305d83c
	if (!cr6.eq) goto loc_8305D83C;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// li r6,117
	ctx.r6.s64 = 117;
	// addi r4,r11,21784
	ctx.r4.s64 = r11.s64 + 21784;
	// li r5,352
	ctx.r5.s64 = 352;
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
loc_8305D83C:
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// bl 0x8305d5b8
	sub_8305D5B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x8305d854
	if (cr0.eq) goto loc_8305D854;
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// b 0x8305d86c
	goto loc_8305D86C;
loc_8305D854:
	// lwz r11,56(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 56);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8305d868
	if (cr0.eq) goto loc_8305D868;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// b 0x8305d86c
	goto loc_8305D86C;
loc_8305D868:
	// lwz r11,24(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 24);
loc_8305D86C:
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8305d884
	if (!cr0.eq) goto loc_8305D884;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8305dc64
	if (cr6.eq) goto loc_8305DC64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8305dd04
	goto loc_8305DD04;
loc_8305D884:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x8305dbf8
	if (cr6.eq) goto loc_8305DBF8;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x8305dbf8
	if (cr6.eq) goto loc_8305DBF8;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x8305dbf8
	if (cr6.eq) goto loc_8305DBF8;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// beq cr6,0x8305d8d8
	if (cr6.eq) goto loc_8305D8D8;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8305d8f0
	if (cr6.eq) goto loc_8305D8F0;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// li r6,21
	ctx.r6.s64 = 21;
	// addi r4,r11,21784
	ctx.r4.s64 = r11.s64 + 21784;
	// li r5,533
	ctx.r5.s64 = 533;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82fd93a0
	sub_82FD93A0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// addi r4,r11,-8860
	ctx.r4.s64 = r11.s64 + -8860;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_8305D8D8:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8305d8f0
	if (cr6.eq) goto loc_8305D8F0;
	// lwz r3,8(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// li r4,70
	ctx.r4.s64 = 70;
	// b 0x8305dc44
	goto loc_8305DC44;
loc_8305D8F0:
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8305dbe0
	if (cr6.eq) goto loc_8305DBE0;
	// addi r11,r30,48
	r11.s64 = r30.s64 + 48;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r24,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, r24.u16);
	// lbz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 36);
	// lwz r29,24(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lwz r28,52(r25)
	r28.u64 = PPC_LOAD_U32(r25.u32 + 52);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8305d948
	if (cr0.eq) goto loc_8305D948;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-27800
	ctx.r4.s64 = r11.s64 + -27800;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8305dc38
	if (cr0.eq) goto loc_8305DC38;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8305dc64
	if (cr6.eq) goto loc_8305DC64;
	// b 0x8305dc38
	goto loc_8305DC38;
loc_8305D948:
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmpwi cr6,r11,23
	cr6.compare<int32_t>(r11.s32, 23, xer);
	// bne cr6,0x8305da28
	if (!cr6.eq) goto loc_8305DA28;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8305d994
	if (!cr6.eq) goto loc_8305D994;
	// li r3,28
	ctx.r3.s64 = 28;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8305d98c
	if (cr0.eq) goto loc_8305D98C;
	// li r4,1023
	ctx.r4.s64 = 1023;
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// bl 0x82fe7278
	sub_82FE7278(ctx, base);
	// b 0x8305d990
	goto loc_8305D990;
loc_8305D98C:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_8305D990:
	// stw r3,44(r30)
	PPC_STORE_U32(r30.u32 + 44, ctx.r3.u32);
loc_8305D994:
	// li r11,-1
	r11.s64 = -1;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r5,44(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82ff0008
	sub_82FF0008(ctx, base);
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// stw r24,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r24.u32);
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// li r4,58
	ctx.r4.s64 = 58;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r24,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, r24.u16);
	// lwz r29,24(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 24);
loc_8305DA28:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-27800
	ctx.r4.s64 = r11.s64 + -27800;
	// beq cr6,0x8305db5c
	if (cr6.eq) goto loc_8305DB5C;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8305daf8
	if (cr0.eq) goto loc_8305DAF8;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stb r10,101(r30)
	PPC_STORE_U8(r30.u32 + 101, ctx.r10.u8);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8305dab0
	if (cr0.eq) goto loc_8305DAB0;
	// lhz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U16(r28.u32 + 0);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8305da94
	if (cr0.eq) goto loc_8305DA94;
	// addi r11,r28,2
	r11.s64 = r28.s64 + 2;
	// b 0x8305da7c
	goto loc_8305DA7C;
loc_8305DA78:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
loc_8305DA7C:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8305da78
	if (!cr0.eq) goto loc_8305DA78;
	// subf r11,r28,r11
	r11.s64 = r11.s64 - r28.s64;
	// srawi r5,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r5.s64 = r11.s32 >> 1;
	// b 0x8305da98
	goto loc_8305DA98;
loc_8305DA94:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
loc_8305DA98:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8305DAB0:
	// lwz r11,32(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 32);
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x8305db74
	if (cr6.eq) goto loc_8305DB74;
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// bl 0x83020b18
	sub_83020B18(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8305daf0
	if (cr6.eq) goto loc_8305DAF0;
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// bl 0x83020b18
	sub_83020B18(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x8305db74
	if (cr6.eq) goto loc_8305DB74;
loc_8305DAF0:
	// mr r29,r28
	r29.u64 = r28.u64;
	// b 0x8305db78
	goto loc_8305DB78;
loc_8305DAF8:
	// lwz r11,48(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 48);
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8305db78
	if (cr0.eq) goto loc_8305DB78;
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r6,20(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 20);
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
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8305db78
	if (cr0.eq) goto loc_8305DB78;
	// lwz r3,8(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,76
	ctx.r4.s64 = 76;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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
	// stb r11,100(r30)
	PPC_STORE_U8(r30.u32 + 100, r11.u8);
	// b 0x8305db78
	goto loc_8305DB78;
loc_8305DB5C:
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8305db78
	if (cr0.eq) goto loc_8305DB78;
	// lwz r11,48(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 48);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8305db78
	if (cr0.eq) goto loc_8305DB78;
loc_8305DB74:
	// mr r29,r24
	r29.u64 = r24.u64;
loc_8305DB78:
	// lbz r11,100(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 100);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8305dc64
	if (!cr0.eq) goto loc_8305DC64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8305dc64
	if (cr6.eq) goto loc_8305DC64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x8305c8b8
	sub_8305C8B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,20(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
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
	// b 0x8305dc64
	goto loc_8305DC64;
	// lwz r30,244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// li r24,0
	r24.s64 = 0;
	// b 0x8305dc64
	goto loc_8305DC64;
loc_8305DBE0:
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bne cr6,0x8305dc64
	if (!cr6.eq) goto loc_8305DC64;
	// lwz r3,8(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// li r4,71
	ctx.r4.s64 = 71;
	// b 0x8305dc44
	goto loc_8305DC44;
loc_8305DBF8:
	// lbz r11,36(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 36);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8305dc78
	if (cr0.eq) goto loc_8305DC78;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x8305dc38
	if (!cr6.eq) goto loc_8305DC38;
	// addi r11,r30,48
	r11.s64 = r30.s64 + 48;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r4,r10,-27800
	ctx.r4.s64 = ctx.r10.s64 + -27800;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r24,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, r24.u16);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8305dc64
	if (!cr0.eq) goto loc_8305DC64;
loc_8305DC38:
	// lwz r3,8(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// li r4,75
	ctx.r4.s64 = 75;
loc_8305DC44:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,100(r30)
	PPC_STORE_U8(r30.u32 + 100, r11.u8);
loc_8305DC64:
	// li r3,-1
	ctx.r3.s64 = -1;
	// stb r24,36(r30)
	PPC_STORE_U8(r30.u32 + 36, r24.u8);
	// stb r24,76(r30)
	PPC_STORE_U8(r30.u32 + 76, r24.u8);
	// stw r24,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r24.u32);
	// b 0x8305dd0c
	goto loc_8305DD0C;
loc_8305DC78:
	// lwz r11,80(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8305dca0
	if (!cr6.eq) goto loc_8305DCA0;
	// lwz r11,60(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8305dca0
	if (cr6.eq) goto loc_8305DCA0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83048528
	sub_83048528(ctx, base);
	// stw r3,80(r29)
	PPC_STORE_U32(r29.u32 + 80, ctx.r3.u32);
loc_8305DCA0:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r29,80(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 80);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r28,40(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8305dd0c
	if (cr6.eq) goto loc_8305DD0C;
	// lwz r7,28(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r8,4(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8305dd0c
	if (cr6.eq) goto loc_8305DD0C;
loc_8305DD04:
	// li r11,1
	r11.s64 = 1;
	// stb r11,100(r30)
	PPC_STORE_U8(r30.u32 + 100, r11.u8);
loc_8305DD0C:
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_8305DD1C"))) PPC_WEAK_FUNC(sub_8305DD1C);
PPC_FUNC_IMPL(__imp__sub_8305DD1C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r29{};
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
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,16(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r29,244(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31994
	ctx.r3.s64 = -2096758784;
	// addi r3,r3,-9260
	ctx.r3.s64 = ctx.r3.s64 + -9260;
	// stb r11,100(r29)
	PPC_STORE_U8(r29.u32 + 100, r11.u8);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_8305DD8C"))) PPC_WEAK_FUNC(sub_8305DD8C);
PPC_FUNC_IMPL(__imp__sub_8305DD8C) {
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

__attribute__((alias("__imp__sub_8305DDAC"))) PPC_WEAK_FUNC(sub_8305DDAC);
PPC_FUNC_IMPL(__imp__sub_8305DDAC) {
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
	// li r4,78
	ctx.r4.s64 = 78;
	// lwz r3,244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// bl 0x8301f3f0
	sub_8301F3F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_8305DDD4"))) PPC_WEAK_FUNC(sub_8305DDD4);
PPC_FUNC_IMPL(__imp__sub_8305DDD4) {
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
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 20);
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

__attribute__((alias("__imp__sub_8305DE08"))) PPC_WEAK_FUNC(sub_8305DE08);
PPC_FUNC_IMPL(__imp__sub_8305DE08) {
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
	// li r30,0
	r30.s64 = 0;
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// stb r30,76(r31)
	PPC_STORE_U8(r31.u32 + 76, r30.u8);
	// stb r30,77(r31)
	PPC_STORE_U8(r31.u32 + 77, r30.u8);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8305de54
	if (cr0.eq) goto loc_8305DE54;
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
loc_8305DE54:
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// stb r30,36(r31)
	PPC_STORE_U8(r31.u32 + 36, r30.u8);
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
	// sth r30,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r30.u16);
	// stb r30,100(r31)
	PPC_STORE_U8(r31.u32 + 100, r30.u8);
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

__attribute__((alias("__imp__sub_8305DE90"))) PPC_WEAK_FUNC(sub_8305DE90);
PPC_FUNC_IMPL(__imp__sub_8305DE90) {
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
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r7,276(r31)
	PPC_STORE_U32(r31.u32 + 276, ctx.r7.u32);
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// li r23,0
	r23.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stw r30,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r30.u32);
	// stb r25,271(r31)
	PPC_STORE_U8(r31.u32 + 271, r25.u8);
	// stb r23,100(r30)
	PPC_STORE_U8(r30.u32 + 100, r23.u8);
	// bl 0x8305c8b8
	sub_8305C8B8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r26,8(r29)
	r26.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8305df00
	if (cr6.eq) goto loc_8305DF00;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x8305df5c
	if (!cr6.eq) goto loc_8305DF5C;
loc_8305DF00:
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8305df5c
	if (!cr0.eq) goto loc_8305DF5C;
	// lwz r28,24(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8305df5c
	if (!cr0.eq) goto loc_8305DF5C;
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
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
	// li r24,1
	r24.s64 = 1;
	// stb r24,100(r30)
	PPC_STORE_U8(r30.u32 + 100, r24.u8);
	// b 0x8305df60
	goto loc_8305DF60;
loc_8305DF5C:
	// li r24,1
	r24.s64 = 1;
loc_8305DF60:
	// lhz r11,0(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8305dfd8
	if (!cr0.eq) goto loc_8305DFD8;
	// cmpwi cr6,r26,10
	cr6.compare<int32_t>(r26.s32, 10, xer);
	// beq cr6,0x8305dfd8
	if (cr6.eq) goto loc_8305DFD8;
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
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r5,r31,92
	ctx.r5.s64 = r31.s64 + 92;
	// addi r4,r11,-5436
	ctx.r4.s64 = r11.s64 + -5436;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r3,-15772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -15772);
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r11,r23
	r11.u64 = r23.u64;
	// beq 0x8305dfcc
	if (cr0.eq) goto loc_8305DFCC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8305DFCC:
	// stw r11,96(r30)
	PPC_STORE_U32(r30.u32 + 96, r11.u32);
	// stb r24,100(r30)
	PPC_STORE_U8(r30.u32 + 100, r24.u8);
	// b 0x8305e2b0
	goto loc_8305E2B0;
loc_8305DFD8:
	// lwz r28,44(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
	// bne 0x8305e004
	if (!cr0.eq) goto loc_8305E004;
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
	// li r4,77
	ctx.r4.s64 = 77;
	// b 0x8305e250
	goto loc_8305E250;
loc_8305E004:
	// lwz r26,24(r28)
	r26.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stw r26,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r26.u32);
	// bl 0x8305c8b8
	sub_8305C8B8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r29,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r29.u32);
	// cmpwi cr6,r26,23
	cr6.compare<int32_t>(r26.s32, 23, xer);
	// bne cr6,0x8305e148
	if (!cr6.eq) goto loc_8305E148;
	// li r4,1023
	ctx.r4.s64 = 1023;
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82fe7278
	sub_82FE7278(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r11,-1
	r11.s64 = -1;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r31,112
	ctx.r5.s64 = r31.s64 + 112;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
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
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x82ff0008
	sub_82FF0008(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r23,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r23.u32);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r4,58
	ctx.r4.s64 = 58;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r27
	ctx.r4.u64 = r11.u64 + r27.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r23,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r23.u16);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r4,136(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// lwz r6,20(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
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
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// lwz r4,136(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8305e168
	goto loc_8305E168;
loc_8305E148:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r6,20(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8305E168:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8305e194
	goto loc_8305E194;
	// lwz r30,244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// lbz r25,271(r31)
	r25.u64 = PPC_LOAD_U8(r31.u32 + 271);
	// li r23,0
	r23.s64 = 0;
	// lwz r28,84(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// li r24,1
	r24.s64 = 1;
	// lwz r26,88(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r29,92(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 92);
loc_8305E194:
	// mr r27,r23
	r27.u64 = r23.u64;
	// stw r28,96(r30)
	PPC_STORE_U32(r30.u32 + 96, r28.u32);
	// cmpwi cr6,r26,24
	cr6.compare<int32_t>(r26.s32, 24, xer);
	// bne cr6,0x8305e1b8
	if (!cr6.eq) goto loc_8305E1B8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8304bb58
	sub_8304BB58(ctx, base);
	// b 0x8305e1e0
	goto loc_8305E1E0;
loc_8305E1B0:
	// cmpwi cr6,r11,21
	cr6.compare<int32_t>(r11.s32, 21, xer);
	// b 0x8305e204
	goto loc_8305E204;
loc_8305E1B8:
	// cmpwi cr6,r26,25
	cr6.compare<int32_t>(r26.s32, 25, xer);
	// bne cr6,0x8305e1f0
	if (!cr6.eq) goto loc_8305E1F0;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,96(r30)
	PPC_STORE_U32(r30.u32 + 96, ctx.r3.u32);
	// beq 0x8305e22c
	if (cr0.eq) goto loc_8305E22C;
loc_8305E1E0:
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,20
	cr6.compare<int32_t>(r11.s32, 20, xer);
	// bne cr6,0x8305e1b0
	if (!cr6.eq) goto loc_8305E1B0;
	// b 0x8305e1f8
	goto loc_8305E1F8;
loc_8305E1F0:
	// cmpwi cr6,r26,20
	cr6.compare<int32_t>(r26.s32, 20, xer);
	// bne cr6,0x8305e200
	if (!cr6.eq) goto loc_8305E200;
loc_8305E1F8:
	// mr r27,r24
	r27.u64 = r24.u64;
	// b 0x8305e22c
	goto loc_8305E22C;
loc_8305E200:
	// cmpwi cr6,r26,21
	cr6.compare<int32_t>(r26.s32, 21, xer);
loc_8305E204:
	// bne cr6,0x8305e22c
	if (!cr6.eq) goto loc_8305E22C;
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8305e22c
	if (cr0.eq) goto loc_8305E22C;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x8305c8b8
	sub_8305C8B8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8305E22C:
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8305e274
	if (cr0.eq) goto loc_8305E274;
	// lbz r11,77(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 77);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8305e270
	if (cr0.eq) goto loc_8305E270;
	// lwz r11,276(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// li r4,11
	ctx.r4.s64 = 11;
loc_8305E250:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
	// stb r24,100(r30)
	PPC_STORE_U8(r30.u32 + 100, r24.u8);
	// b 0x8305e274
	goto loc_8305E274;
loc_8305E270:
	// stb r24,77(r30)
	PPC_STORE_U8(r30.u32 + 77, r24.u8);
loc_8305E274:
	// lbz r11,100(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 100);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8305e2ac
	if (cr0.eq) goto loc_8305E2AC;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r5,r31,92
	ctx.r5.s64 = r31.s64 + 92;
	// addi r4,r11,-5436
	ctx.r4.s64 = r11.s64 + -5436;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r3,-15772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -15772);
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r11,r23
	r11.u64 = r23.u64;
	// beq 0x8305e2a8
	if (cr0.eq) goto loc_8305E2A8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8305E2A8:
	// stw r11,96(r30)
	PPC_STORE_U32(r30.u32 + 96, r11.u32);
loc_8305E2AC:
	// stb r23,76(r30)
	PPC_STORE_U8(r30.u32 + 76, r23.u8);
loc_8305E2B0:
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_8305E2C0"))) PPC_WEAK_FUNC(sub_8305E2C0);
PPC_FUNC_IMPL(__imp__sub_8305E2C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r29{};
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
	// lwz r30,244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// li r11,1
	r11.s64 = 1;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// stb r11,100(r30)
	PPC_STORE_U8(r30.u32 + 100, r11.u8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r29,16(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31994
	ctx.r3.s64 = -2096758784;
	// addi r3,r3,-7816
	ctx.r3.s64 = ctx.r3.s64 + -7816;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_8305E330"))) PPC_WEAK_FUNC(sub_8305E330);
PPC_FUNC_IMPL(__imp__sub_8305E330) {
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

__attribute__((alias("__imp__sub_8305E350"))) PPC_WEAK_FUNC(sub_8305E350);
PPC_FUNC_IMPL(__imp__sub_8305E350) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r30,244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// li r4,78
	ctx.r4.s64 = 78;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8301f3f0
	sub_8301F3F0(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r5,r31,92
	ctx.r5.s64 = r31.s64 + 92;
	// addi r4,r11,-5436
	ctx.r4.s64 = r11.s64 + -5436;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r3,-15772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -15772);
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq 0x8305e398
	if (cr0.eq) goto loc_8305E398;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8305E398:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,96(r30)
	PPC_STORE_U32(r30.u32 + 96, r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r10,100(r30)
	PPC_STORE_U8(r30.u32 + 100, ctx.r10.u8);
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_8305E3B0"))) PPC_WEAK_FUNC(sub_8305E3B0);
PPC_FUNC_IMPL(__imp__sub_8305E3B0) {
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
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
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

__attribute__((alias("__imp__sub_8305E3D8"))) PPC_WEAK_FUNC(sub_8305E3D8);
PPC_FUNC_IMPL(__imp__sub_8305E3D8) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r18,r6
	r18.u64 = ctx.r6.u64;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x8305e410
	if (cr6.eq) goto loc_8305E410;
	// lwz r11,72(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 72);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8305e414
	if (!cr0.eq) goto loc_8305E414;
	// li r19,0
	r19.s64 = 0;
	// b 0x8305e418
	goto loc_8305E418;
loc_8305E410:
	// lwz r11,24(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 24);
loc_8305E414:
	// lwz r19,8(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 8);
loc_8305E418:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x8305e428
	if (cr6.eq) goto loc_8305E428;
	// lwz r25,24(r21)
	r25.u64 = PPC_LOAD_U32(r21.u32 + 24);
	// b 0x8305e42c
	goto loc_8305E42C;
loc_8305E428:
	// lwz r25,8(r18)
	r25.u64 = PPC_LOAD_U32(r18.u32 + 8);
loc_8305E42C:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x8305e43c
	if (cr6.eq) goto loc_8305E43C;
	// lwz r22,100(r21)
	r22.u64 = PPC_LOAD_U32(r21.u32 + 100);
	// b 0x8305e440
	goto loc_8305E440;
loc_8305E43C:
	// lwz r22,32(r18)
	r22.u64 = PPC_LOAD_U32(r18.u32 + 32);
loc_8305E440:
	// li r24,0
	r24.s64 = 0;
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// beq cr6,0x8305e604
	if (cr6.eq) goto loc_8305E604;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r23,r11,-28032
	r23.s64 = r11.s64 + -28032;
loc_8305E454:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x8305e470
	if (cr6.eq) goto loc_8305E470;
	// lwz r3,72(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + 72);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8305e474
	if (!cr0.eq) goto loc_8305E474;
	// li r31,0
	r31.s64 = 0;
	// b 0x8305e480
	goto loc_8305E480;
loc_8305E470:
	// lwz r3,24(r18)
	ctx.r3.u64 = PPC_LOAD_U32(r18.u32 + 24);
loc_8305E474:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8305E480:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8305e5f8
	if (cr0.eq) goto loc_8305E5F8;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r30,32(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r28,16(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8305e524
	if (cr0.eq) goto loc_8305E524;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x8305e4f4
	if (!cr6.eq) goto loc_8305E4F4;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x8305e524
	if (cr6.eq) goto loc_8305E524;
loc_8305E4F4:
	// lwz r11,20(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r4,79
	ctx.r4.s64 = 79;
	// addi r3,r20,80
	ctx.r3.s64 = r20.s64 + 80;
	// bl 0x830a6370
	sub_830A6370(ctx, base);
	// b 0x8305e5f8
	goto loc_8305E5F8;
loc_8305E524:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r3,44(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 44);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82fea480
	sub_82FEA480(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8305e5f8
	if (cr0.eq) goto loc_8305E5F8;
	// lwz r29,0(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x8305e5f8
	if (cr0.eq) goto loc_8305E5F8;
	// lwz r27,4(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r30,0
	r30.s64 = 0;
	// cmplwi r27,0
	cr0.compare<uint32_t>(r27.u32, 0, xer);
	// beq 0x8305e5f8
	if (cr0.eq) goto loc_8305E5F8;
loc_8305E55C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8308ea58
	sub_8308EA58(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8305e5ec
	if (cr0.eq) goto loc_8305E5EC;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x8305e5c0
	if (!cr6.eq) goto loc_8305E5C0;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x8305e5ec
	if (cr6.eq) goto loc_8305E5EC;
loc_8305E5C0:
	// lwz r11,20(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r4,79
	ctx.r4.s64 = 79;
	// addi r3,r20,80
	ctx.r3.s64 = r20.s64 + 80;
	// bl 0x830a6370
	sub_830A6370(ctx, base);
loc_8305E5EC:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(r30.u32, r27.u32, xer);
	// blt cr6,0x8305e55c
	if (cr6.lt) goto loc_8305E55C;
loc_8305E5F8:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// cmplw cr6,r24,r19
	cr6.compare<uint32_t>(r24.u32, r19.u32, xer);
	// blt cr6,0x8305e454
	if (cr6.lt) goto loc_8305E454;
loc_8305E604:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831b0b50
	return;
}

__attribute__((alias("__imp__sub_8305E610"))) PPC_WEAK_FUNC(sub_8305E610);
PPC_FUNC_IMPL(__imp__sub_8305E610) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// b 0x8305e6a4
	goto loc_8305E6A4;
loc_8305E628:
	// lwz r31,24(r5)
	r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// lwz r30,20(r5)
	r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// cmpwi r31,0
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8305e6b4
	if (cr0.eq) goto loc_8305E6B4;
	// clrlwi r11,r31,28
	r11.u64 = r31.u32 & 0xF;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8305e6b4
	if (cr6.eq) goto loc_8305E6B4;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// beq cr6,0x8305e6b4
	if (cr6.eq) goto loc_8305E6B4;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// beq cr6,0x8305e6b4
	if (cr6.eq) goto loc_8305E6B4;
	// lwz r10,32(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x8305e6b4
	if (!cr6.eq) goto loc_8305E6B4;
	// lwz r10,36(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x8305e6b4
	if (!cr6.eq) goto loc_8305E6B4;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8305e67c
	if (!cr6.eq) goto loc_8305E67C;
	// lwz r5,16(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// b 0x8305e6a0
	goto loc_8305E6A0;
loc_8305E67C:
	// clrlwi r10,r4,28
	ctx.r10.u64 = ctx.r4.u32 & 0xF;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x8305e6b4
	if (!cr6.eq) goto loc_8305E6B4;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r5,16(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8305e610
	sub_8305E610(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
loc_8305E6A0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_8305E6A4:
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8305e628
	if (!cr6.eq) goto loc_8305E628;
	// b 0x8305e6c0
	goto loc_8305E6C0;
loc_8305E6B4:
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8305c228
	sub_8305C228(ctx, base);
loc_8305E6C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8305E6C8"))) PPC_WEAK_FUNC(sub_8305E6C8);
PPC_FUNC_IMPL(__imp__sub_8305E6C8) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r21,r9
	r21.u64 = ctx.r9.u64;
	// lwz r27,16(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r24,16(r10)
	r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r28,32(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r23,32(r10)
	r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8305e994
	if (cr0.eq) goto loc_8305E994;
	// cmplw cr6,r28,r23
	cr6.compare<uint32_t>(r28.u32, r23.u32, xer);
	// bne cr6,0x8305e994
	if (!cr6.eq) goto loc_8305E994;
	// lis r11,-32233
	r11.s64 = -2112421888;
	// lwz r11,-22220(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22220);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// beq cr6,0x8305e98c
	if (cr6.eq) goto loc_8305E98C;
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwz r8,32(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// lwz r11,36(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// blt cr6,0x8305e76c
	if (cr6.lt) goto loc_8305E76C;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x8305e764
	if (cr6.eq) goto loc_8305E764;
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x8305e76c
	if (cr6.eq) goto loc_8305E76C;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bgt cr6,0x8305e76c
	if (cr6.gt) goto loc_8305E76C;
loc_8305E764:
	// li r11,1
	r11.s64 = 1;
	// b 0x8305e770
	goto loc_8305E770;
loc_8305E76C:
	// li r11,0
	r11.s64 = 0;
loc_8305E770:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8305e7b8
	if (!cr0.eq) goto loc_8305E7B8;
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,21784
	ctx.r4.s64 = r11.s64 + 21784;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,355
	ctx.r6.s64 = 355;
	// li r5,1671
	ctx.r5.s64 = 1671;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
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
loc_8305E7B8:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r30,r26
	r30.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// beq cr6,0x8305e7f8
	if (cr6.eq) goto loc_8305E7F8;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x82feeed8
	sub_82FEEED8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8305E7F8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8305e98c
	if (cr6.eq) goto loc_8305E98C;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8305cbe0
	sub_8305CBE0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x8305e98c
	if (cr0.eq) goto loc_8305E98C;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8305cbe0
	sub_8305CBE0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8305e98c
	if (cr0.eq) goto loc_8305E98C;
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8305e8a0
	if (!cr0.eq) goto loc_8305E8A0;
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8305e8a0
	if (cr0.eq) goto loc_8305E8A0;
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,21784
	ctx.r4.s64 = r11.s64 + 21784;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,357
	ctx.r6.s64 = 357;
	// li r5,1703
	ctx.r5.s64 = 1703;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
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
loc_8305E8A0:
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8305e90c
	if (cr0.eq) goto loc_8305E90C;
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8305e90c
	if (cr0.eq) goto loc_8305E90C;
	// rlwinm. r11,r10,0,29,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8305e8cc
	if (cr0.eq) goto loc_8305E8CC;
	// lwz r3,52(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8305e90c
	if (!cr0.eq) goto loc_8305E90C;
loc_8305E8CC:
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,21784
	ctx.r4.s64 = r11.s64 + 21784;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,358
	ctx.r6.s64 = 358;
	// li r5,1712
	ctx.r5.s64 = 1712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
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
loc_8305E90C:
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwz r10,44(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & r11.u64;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// beq cr6,0x8305e960
	if (cr6.eq) goto loc_8305E960;
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,21784
	ctx.r4.s64 = r11.s64 + 21784;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,359
	ctx.r6.s64 = 359;
	// li r5,1719
	ctx.r5.s64 = 1719;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
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
loc_8305E960:
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8305cfe8
	sub_8305CFE8(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8305cca0
	sub_8305CCA0(ctx, base);
loc_8305E98C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831b0b5c
	return;
loc_8305E994:
	// lis r11,-32234
	r11.s64 = -2112487424;
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r6,356
	ctx.r6.s64 = 356;
	// addi r4,r11,21784
	ctx.r4.s64 = r11.s64 + 21784;
	// li r5,1661
	ctx.r5.s64 = 1661;
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
}

__attribute__((alias("__imp__sub_8305E9C8"))) PPC_WEAK_FUNC(sub_8305E9C8);
PPC_FUNC_IMPL(__imp__sub_8305E9C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// addi r31,r1,-272
	r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r28,308(r31)
	PPC_STORE_U32(r31.u32 + 308, r28.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r27,24(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// mr r22,r9
	r22.u64 = ctx.r9.u64;
	// mr r21,r10
	r21.u64 = ctx.r10.u64;
	// bl 0x83070930
	sub_83070930(ctx, base);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// stw r28,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r28.u32);
	// li r28,1
	r28.s64 = 1;
	// addi r9,r11,-5208
	ctx.r9.s64 = r11.s64 + -5208;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// li r11,0
	r11.s64 = 0;
	// stw r27,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r27.u32);
	// mr r26,r11
	r26.u64 = r11.u64;
	// stb r28,157(r31)
	PPC_STORE_U8(r31.u32 + 157, r28.u8);
	// stw r9,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r9.u32);
	// stw r11,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r11.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r11.u32);
	// stw r11,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r11.u32);
	// stb r11,156(r31)
	PPC_STORE_U8(r31.u32 + 156, r11.u8);
	// stw r28,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r28.u32);
	// stw r28,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r28.u32);
	// stw r10,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r10.u32);
	// addi r4,r31,308
	ctx.r4.s64 = r31.s64 + 308;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8305c228
	sub_8305C228(ctx, base);
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// clrlwi r11,r11,28
	r11.u64 = r11.u32 & 0xF;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x8305ea78
	if (!cr6.eq) goto loc_8305EA78;
	// mr r26,r28
	r26.u64 = r28.u64;
loc_8305EA78:
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// stb r26,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, r26.u8);
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r21.u32);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// addi r7,r31,96
	ctx.r7.s64 = r31.s64 + 96;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// addi r5,r31,128
	ctx.r5.s64 = r31.s64 + 128;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8305d168
	sub_8305D168(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x830466b0
	sub_830466B0(ctx, base);
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
	// addi r1,r31,272
	ctx.r1.s64 = r31.s64 + 272;
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_8305EACC"))) PPC_WEAK_FUNC(sub_8305EACC);
PPC_FUNC_IMPL(__imp__sub_8305EACC) {
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

__attribute__((alias("__imp__sub_8305EAF4"))) PPC_WEAK_FUNC(sub_8305EAF4);
PPC_FUNC_IMPL(__imp__sub_8305EAF4) {
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
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x830466b0
	sub_830466B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305EB28"))) PPC_WEAK_FUNC(sub_8305EB28);
PPC_FUNC_IMPL(__imp__sub_8305EB28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// addi r31,r1,-272
	r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r9
	r22.u64 = ctx.r9.u64;
	// stw r10,348(r31)
	PPC_STORE_U32(r31.u32 + 348, ctx.r10.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r11,32(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// lwz r10,32(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// lwz r9,36(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// lwz r8,36(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// stw r4,300(r31)
	PPC_STORE_U32(r31.u32 + 300, ctx.r4.u32);
	// stw r25,292(r31)
	PPC_STORE_U32(r31.u32 + 292, r25.u32);
	// stw r24,316(r31)
	PPC_STORE_U32(r31.u32 + 316, r24.u32);
	// stw r7,324(r31)
	PPC_STORE_U32(r31.u32 + 324, ctx.r7.u32);
	// stw r22,340(r31)
	PPC_STORE_U32(r31.u32 + 340, r22.u32);
	// blt cr6,0x8305eb9c
	if (cr6.lt) goto loc_8305EB9C;
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// beq cr6,0x8305eb94
	if (cr6.eq) goto loc_8305EB94;
	// cmpwi cr6,r8,-1
	cr6.compare<int32_t>(ctx.r8.s32, -1, xer);
	// beq cr6,0x8305eb9c
	if (cr6.eq) goto loc_8305EB9C;
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// bgt cr6,0x8305eb9c
	if (cr6.gt) goto loc_8305EB9C;
loc_8305EB94:
	// li r11,1
	r11.s64 = 1;
	// b 0x8305eba0
	goto loc_8305EBA0;
loc_8305EB9C:
	// li r11,0
	r11.s64 = 0;
loc_8305EBA0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8305ebd4
	if (!cr0.eq) goto loc_8305EBD4;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// lwz r7,20(r25)
	ctx.r7.u64 = PPC_LOAD_U32(r25.u32 + 20);
	// li r6,364
	ctx.r6.s64 = 364;
	// addi r4,r11,21784
	ctx.r4.s64 = r11.s64 + 21784;
	// li r5,2037
	ctx.r5.s64 = 2037;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82fd93a0
	sub_82FD93A0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// addi r4,r11,-8860
	ctx.r4.s64 = r11.s64 + -8860;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_8305EBD4:
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// li r23,0
	r23.s64 = 0;
	// lwz r3,20(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 20);
	// lwz r29,4(r22)
	r29.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r29,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r29.u32);
	// stw r23,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r23.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,20(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 20);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// stw r26,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r26.u32);
	// stw r26,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r26.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8305ec40
	if (cr6.eq) goto loc_8305EC40;
	// mr r11,r26
	r11.u64 = r26.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x8305ec40
	if (cr0.eq) goto loc_8305EC40;
	// mtctr r29
	ctr.u64 = r29.u64;
loc_8305EC34:
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x8305ec34
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8305EC34;
loc_8305EC40:
	// li r27,0
	r27.s64 = 0;
	// stw r27,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r27.u32);
loc_8305EC48:
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// bge cr6,0x8305ed1c
	if (!cr6.lt) goto loc_8305ED1C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8308ea58
	sub_8308EA58(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r28,0
	r28.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// stb r28,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r28.u8);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
loc_8305EC78:
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// bge cr6,0x8305ecc4
	if (!cr6.lt) goto loc_8305ECC4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8308ea58
	sub_8308EA58(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r9,356(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 356);
	// lwz r8,348(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 348);
	// lwz r6,324(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 324);
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// lwz r4,300(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 300);
	// bl 0x8305f5f8
	sub_8305F5F8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lbzx r11,r30,r26
	r11.u64 = PPC_LOAD_U8(r30.u32 + r26.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8305ecd4
	if (cr0.eq) goto loc_8305ECD4;
loc_8305ECC4:
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8305ed10
	if (!cr0.eq) goto loc_8305ED10;
	// li r23,373
	r23.s64 = 373;
	// b 0x8305ed7c
	goto loc_8305ED7C;
loc_8305ECD4:
	// li r28,1
	r28.s64 = 1;
	// stbx r28,r30,r26
	PPC_STORE_U8(r30.u32 + r26.u32, r28.u8);
	// b 0x8305ecc4
	goto loc_8305ECC4;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r22,340(r31)
	r22.u64 = PPC_LOAD_U32(r31.u32 + 340);
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// lwz r24,316(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// lwz r23,100(r31)
	r23.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r29,104(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// lwz r26,108(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r27,88(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// lbz r28,80(r31)
	r28.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// lwz r25,292(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// b 0x8305ec78
	goto loc_8305EC78;
loc_8305ED10:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// stw r27,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r27.u32);
	// b 0x8305ec48
	goto loc_8305EC48;
loc_8305ED1C:
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// bne cr6,0x8305ed7c
	if (!cr6.eq) goto loc_8305ED7C;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8305ed64
	if (cr6.eq) goto loc_8305ED64;
loc_8305ED30:
	// lbzx r11,r30,r26
	r11.u64 = PPC_LOAD_U8(r30.u32 + r26.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8305ed58
	if (!cr0.eq) goto loc_8305ED58;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8308ea58
	sub_8308EA58(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8308ad88
	sub_8308AD88(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8305ed78
	if (!cr0.eq) goto loc_8305ED78;
loc_8305ED58:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// blt cr6,0x8305ed30
	if (cr6.lt) goto loc_8305ED30;
loc_8305ED64:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82fdae08
	sub_82FDAE08(ctx, base);
	// addi r1,r31,272
	ctx.r1.s64 = r31.s64 + 272;
	// b 0x831b0b60
	return;
loc_8305ED78:
	// li r23,373
	r23.s64 = 373;
loc_8305ED7C:
	// lis r11,-32234
	r11.s64 = -2112487424;
	// lwz r7,20(r25)
	ctx.r7.u64 = PPC_LOAD_U32(r25.u32 + 20);
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// addi r4,r11,21784
	ctx.r4.s64 = r11.s64 + 21784;
	// li r5,2098
	ctx.r5.s64 = 2098;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x82fd93a0
	sub_82FD93A0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// addi r4,r11,-8860
	ctx.r4.s64 = r11.s64 + -8860;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_8305EDB0"))) PPC_WEAK_FUNC(sub_8305EDB0);
PPC_FUNC_IMPL(__imp__sub_8305EDB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r3,-31994
	ctx.r3.s64 = -2096758784;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,-4896
	ctx.r3.s64 = ctx.r3.s64 + -4896;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_8305EDC4"))) PPC_WEAK_FUNC(sub_8305EDC4);
PPC_FUNC_IMPL(__imp__sub_8305EDC4) {
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
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
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

__attribute__((alias("__imp__sub_8305EDF8"))) PPC_WEAK_FUNC(sub_8305EDF8);
PPC_FUNC_IMPL(__imp__sub_8305EDF8) {
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
	// lis r11,-32234
	r11.s64 = -2112487424;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,21992
	r11.s64 = r11.s64 + 21992;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8305ee44
	if (cr0.eq) goto loc_8305EE44;
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
loc_8305EE44:
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8305ee58
	if (cr0.eq) goto loc_8305EE58;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82fdeaa8
	sub_82FDEAA8(ctx, base);
loc_8305EE58:
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8305ee6c
	if (cr0.eq) goto loc_8305EE6C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82fe73b0
	sub_82FE73B0(ctx, base);
loc_8305EE6C:
	// lis r11,-32234
	r11.s64 = -2112487424;
	// addi r11,r11,21776
	r11.s64 = r11.s64 + 21776;
	// stw r11,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r11.u32);
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// lwz r4,72(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 72);
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
	// addi r11,r11,20640
	r11.s64 = r11.s64 + 20640;
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

__attribute__((alias("__imp__sub_8305EEB4"))) PPC_WEAK_FUNC(sub_8305EEB4);
PPC_FUNC_IMPL(__imp__sub_8305EEB4) {
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
	// bl 0x8301f120
	sub_8301F120(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305EEDC"))) PPC_WEAK_FUNC(sub_8305EEDC);
PPC_FUNC_IMPL(__imp__sub_8305EEDC) {
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
	// addi r3,r11,48
	ctx.r3.s64 = r11.s64 + 48;
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

__attribute__((alias("__imp__sub_8305EF08"))) PPC_WEAK_FUNC(sub_8305EF08);
PPC_FUNC_IMPL(__imp__sub_8305EF08) {
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
	// addi r3,r11,80
	ctx.r3.s64 = r11.s64 + 80;
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

__attribute__((alias("__imp__sub_8305EF40"))) PPC_WEAK_FUNC(sub_8305EF40);
PPC_FUNC_IMPL(__imp__sub_8305EF40) {
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
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// lwz r25,56(r24)
	r25.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// stw r25,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r25.u32);
	// bl 0x8305c228
	sub_8305C228(ctx, base);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x8305ef7c
	if (cr6.eq) goto loc_8305EF7C;
	// lwz r10,52(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 52);
	// b 0x8305ef80
	goto loc_8305EF80;
loc_8305EF7C:
	// lwz r10,32(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 32);
loc_8305EF80:
	// li r23,0
	r23.s64 = 0;
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// stw r10,40(r30)
	PPC_STORE_U32(r30.u32 + 40, ctx.r10.u32);
	// li r26,1
	r26.s64 = 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stb r23,100(r30)
	PPC_STORE_U8(r30.u32 + 100, r23.u8);
	// beq 0x8305f41c
	if (cr0.eq) goto loc_8305F41C;
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r27,16(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lis r11,-32233
	r11.s64 = -2112421888;
	// lwz r11,-22224(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22224);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beq cr6,0x8305f3f4
	if (cr6.eq) goto loc_8305F3F4;
	// lis r11,-32233
	r11.s64 = -2112421888;
	// lwz r11,-22220(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22220);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beq cr6,0x8305f3f4
	if (cr6.eq) goto loc_8305F3F4;
	// lis r11,-32233
	r11.s64 = -2112421888;
	// lwz r11,-22316(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22316);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beq cr6,0x8305f3f4
	if (cr6.eq) goto loc_8305F3F4;
	// lis r11,-32233
	r11.s64 = -2112421888;
	// lwz r11,-22320(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22320);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beq cr6,0x8305f3f4
	if (cr6.eq) goto loc_8305F3F4;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x82ff0008
	sub_82FF0008(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82feeed8
	sub_82FEEED8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bne 0x8305f108
	if (!cr0.eq) goto loc_8305F108;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-8608
	ctx.r4.s64 = r11.s64 + -8608;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8305f0fc
	if (cr0.eq) goto loc_8305F0FC;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82fef348
	sub_82FEF348(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x8305f130
	if (cr0.eq) goto loc_8305F130;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// bne cr6,0x8305f0c0
	if (!cr6.eq) goto loc_8305F0C0;
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8305f064
	if (cr0.eq) goto loc_8305F064;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8305f0c0
	if (cr0.eq) goto loc_8305F0C0;
loc_8305F064:
	// lwz r11,44(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 44);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x8305f0a4
	if (!cr6.eq) goto loc_8305F0A4;
	// lwz r3,8(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,94
	ctx.r4.s64 = 94;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
	// stb r26,100(r30)
	PPC_STORE_U8(r30.u32 + 100, r26.u8);
loc_8305F0A4:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8305f0f4
	if (cr0.eq) goto loc_8305F0F4;
loc_8305F0C0:
	// lwz r3,8(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r4,93
	ctx.r4.s64 = 93;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
	// stb r26,100(r30)
	PPC_STORE_U8(r30.u32 + 100, r26.u8);
loc_8305F0F4:
	// stw r28,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r28.u32);
	// b 0x8305f3f4
	goto loc_8305F3F4;
loc_8305F0FC:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,72
	ctx.r4.s64 = 72;
	// b 0x8305f140
	goto loc_8305F140;
loc_8305F108:
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
	// bne cr6,0x8305f0fc
	if (!cr6.eq) goto loc_8305F0FC;
	// lwz r28,28(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// bne 0x8305f15c
	if (!cr0.eq) goto loc_8305F15C;
loc_8305F130:
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,92
	ctx.r4.s64 = 92;
loc_8305F140:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
	// stb r26,100(r30)
	PPC_STORE_U8(r30.u32 + 100, r26.u8);
	// b 0x8305f3f4
	goto loc_8305F3F4;
loc_8305F15C:
	// li r4,1023
	ctx.r4.s64 = 1023;
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82fe7278
	sub_82FE7278(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r23,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r23.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// li r4,44
	ctx.r4.s64 = 44;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// sthx r23,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r23.u16);
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r28,r23
	r28.u64 = r23.u64;
	// beq 0x8305f1cc
	if (cr0.eq) goto loc_8305F1CC;
	// lwz r28,0(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8305F1CC:
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8305f2dc
	if (cr6.eq) goto loc_8305F2DC;
	// lbz r11,5(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 5);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8305f200
	if (cr0.eq) goto loc_8305F200;
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// li r4,89
	ctx.r4.s64 = 89;
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r23,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r23.u16);
	// lwz r5,120(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// b 0x8305f304
	goto loc_8305F304;
loc_8305F200:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x8305f254
	if (cr6.eq) goto loc_8305F254;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_8305F20C:
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(r11.u32, r25.u32, xer);
	// beq cr6,0x8305f220
	if (cr6.eq) goto loc_8305F220;
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8305f20c
	if (!cr0.eq) goto loc_8305F20C;
loc_8305F220:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8305f27c
	if (cr6.eq) goto loc_8305F27C;
	// lwz r11,44(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 44);
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// and. r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8305f2b0
	if (cr0.eq) goto loc_8305F2B0;
	// lwz r3,8(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// li r4,94
	ctx.r4.s64 = 94;
	// b 0x8305f294
	goto loc_8305F294;
loc_8305F254:
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8305f2b0
	if (cr0.eq) goto loc_8305F2B0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,52(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 52);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8305f2b0
	if (!cr0.eq) goto loc_8305F2B0;
loc_8305F27C:
	// lwz r3,8(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// li r4,93
	ctx.r4.s64 = 93;
loc_8305F294:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
	// stb r26,100(r30)
	PPC_STORE_U8(r30.u32 + 100, r26.u8);
loc_8305F2B0:
	// lbz r11,100(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 100);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8305f3dc
	if (!cr0.eq) goto loc_8305F3DC;
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// bl 0x8305d5b8
	sub_8305D5B8(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// bl 0x8305c228
	sub_8305C228(ctx, base);
	// lwz r11,52(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 52);
	// stw r11,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r11.u32);
	// b 0x8305f3dc
	goto loc_8305F3DC;
loc_8305F2DC:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82fef348
	sub_82FEF348(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bne 0x8305f320
	if (!cr0.eq) goto loc_8305F320;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,92
	ctx.r4.s64 = 92;
loc_8305F304:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
	// stb r26,100(r30)
	PPC_STORE_U8(r30.u32 + 100, r26.u8);
	// b 0x8305f3dc
	goto loc_8305F3DC;
loc_8305F320:
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8305f348
	if (cr0.eq) goto loc_8305F348;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8305f3a4
	if (cr0.eq) goto loc_8305F3A4;
loc_8305F348:
	// lwz r11,44(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 44);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x8305f388
	if (!cr6.eq) goto loc_8305F388;
	// lwz r3,8(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,94
	ctx.r4.s64 = 94;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
	// stb r26,100(r30)
	PPC_STORE_U8(r30.u32 + 100, r26.u8);
loc_8305F388:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8305f3d8
	if (cr0.eq) goto loc_8305F3D8;
loc_8305F3A4:
	// lwz r3,8(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r4,93
	ctx.r4.s64 = 93;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
	// stb r26,100(r30)
	PPC_STORE_U8(r30.u32 + 100, r26.u8);
loc_8305F3D8:
	// stw r28,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r28.u32);
loc_8305F3DC:
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
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8305F3F4:
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8305f414
	if (cr0.eq) goto loc_8305F414;
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
loc_8305F414:
	// stw r23,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r23.u32);
	// b 0x8305f458
	goto loc_8305F458;
loc_8305F41C:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x8305f458
	if (cr6.eq) goto loc_8305F458;
	// lbz r11,5(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + 5);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8305f458
	if (cr0.eq) goto loc_8305F458;
	// lwz r3,8(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,91
	ctx.r4.s64 = 91;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
	// stb r26,100(r30)
	PPC_STORE_U8(r30.u32 + 100, r26.u8);
loc_8305F458:
	// lwz r29,48(r24)
	r29.u64 = PPC_LOAD_U32(r24.u32 + 48);
	// rlwinm. r11,r29,0,30,30
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8305f48c
	if (cr0.eq) goto loc_8305F48C;
	// lwz r3,8(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,90
	ctx.r4.s64 = 90;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
	// stb r26,100(r30)
	PPC_STORE_U8(r30.u32 + 100, r26.u8);
loc_8305F48C:
	// lbz r11,36(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 36);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8305f4cc
	if (cr0.eq) goto loc_8305F4CC;
	// clrlwi. r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8305f4cc
	if (!cr0.eq) goto loc_8305F4CC;
	// stb r23,36(r30)
	PPC_STORE_U8(r30.u32 + 36, r23.u8);
	// lwz r3,8(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,74
	ctx.r4.s64 = 74;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
	// stb r26,100(r30)
	PPC_STORE_U8(r30.u32 + 100, r26.u8);
loc_8305F4CC:
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// stw r23,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r23.u32);
	// sth r23,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r23.u16);
	// stb r23,76(r30)
	PPC_STORE_U8(r30.u32 + 76, r23.u8);
	// stb r23,77(r30)
	PPC_STORE_U8(r30.u32 + 77, r23.u8);
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_8305F4E8"))) PPC_WEAK_FUNC(sub_8305F4E8);
PPC_FUNC_IMPL(__imp__sub_8305F4E8) {
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

__attribute__((alias("__imp__sub_8305F510"))) PPC_WEAK_FUNC(sub_8305F510);
PPC_FUNC_IMPL(__imp__sub_8305F510) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r27,20(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r26,32(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r25,36(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmplwi r27,0
	cr0.compare<uint32_t>(r27.u32, 0, xer);
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bne 0x8305f57c
	if (!cr0.eq) goto loc_8305F57C;
	// bl 0x8305e610
	sub_8305E610(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8305f594
	if (!cr6.eq) goto loc_8305F594;
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(r26.s32, 1, xer);
	// bne cr6,0x8305f594
	if (!cr6.eq) goto loc_8305F594;
	// cmpwi cr6,r25,1
	cr6.compare<int32_t>(r25.s32, 1, xer);
	// bne cr6,0x8305f594
	if (!cr6.eq) goto loc_8305F594;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8308ea58
	sub_8308EA58(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8305f598
	goto loc_8305F598;
loc_8305F57C:
	// bl 0x8305e610
	sub_8305E610(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8305e610
	sub_8305E610(ctx, base);
loc_8305F594:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8305F598:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_8305F5A0"))) PPC_WEAK_FUNC(sub_8305F5A0);
PPC_FUNC_IMPL(__imp__sub_8305F5A0) {
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
	// bl 0x8305edf8
	sub_8305EDF8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8305f5d0
	if (cr0.eq) goto loc_8305F5D0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_8305F5D0:
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

__attribute__((alias("__imp__sub_8305F5F8"))) PPC_WEAK_FUNC(sub_8305F5F8);
PPC_FUNC_IMPL(__imp__sub_8305F5F8) {
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
	// addi r31,r1,-528
	r31.s64 = ctx.r1.s64 + -528;
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// mr r22,r10
	r22.u64 = ctx.r10.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8305fcc8
	if (cr6.eq) goto loc_8305FCC8;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8305f65c
	if (!cr6.eq) goto loc_8305F65C;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// li r6,353
	ctx.r6.s64 = 353;
	// addi r4,r11,21784
	ctx.r4.s64 = r11.s64 + 21784;
	// li r5,1361
	ctx.r5.s64 = 1361;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x82fd93a0
	sub_82FD93A0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// addi r4,r11,-8860
	ctx.r4.s64 = r11.s64 + -8860;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_8305F65C:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8305cb20
	sub_8305CB20(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8305cb20
	sub_8305CB20(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83070930
	sub_83070930(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x83070930
	sub_83070930(ctx, base);
	// lwz r5,24(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lwz r23,24(r29)
	r23.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// clrlwi r11,r5,28
	r11.u64 = ctx.r5.u32 & 0xF;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// beq cr6,0x8305f6c8
	if (cr6.eq) goto loc_8305F6C8;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x8305f6c8
	if (cr6.eq) goto loc_8305F6C8;
	// cmpwi cr6,r5,9
	cr6.compare<int32_t>(ctx.r5.s32, 9, xer);
	// bne cr6,0x8305f6dc
	if (!cr6.eq) goto loc_8305F6DC;
loc_8305F6C8:
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8305f510
	sub_8305F510(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_8305F6DC:
	// clrlwi r11,r23,28
	r11.u64 = r23.u32 & 0xF;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// beq cr6,0x8305f6f8
	if (cr6.eq) goto loc_8305F6F8;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x8305f6f8
	if (cr6.eq) goto loc_8305F6F8;
	// cmpwi cr6,r23,9
	cr6.compare<int32_t>(r23.s32, 9, xer);
	// bne cr6,0x8305f710
	if (!cr6.eq) goto loc_8305F710;
loc_8305F6F8:
	// addi r6,r31,128
	ctx.r6.s64 = r31.s64 + 128;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8305f510
	sub_8305F510(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8305F710:
	// lwz r11,24(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// clrlwi. r11,r11,28
	r11.u64 = r11.u32 & 0xF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8305fbb4
	if (cr0.eq) goto loc_8305FBB4;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x8305faa8
	if (cr6.eq) goto loc_8305FAA8;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// beq cr6,0x8305f914
	if (cr6.eq) goto loc_8305F914;
	// ble cr6,0x8305f8f8
	if (!cr6.gt) goto loc_8305F8F8;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// ble cr6,0x8305f84c
	if (!cr6.gt) goto loc_8305F84C;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// bne cr6,0x8305f8f8
	if (!cr6.eq) goto loc_8305F8F8;
	// clrlwi. r11,r10,28
	r11.u64 = ctx.r10.u32 & 0xF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8305f820
	if (cr0.eq) goto loc_8305F820;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// ble cr6,0x8305f7f4
	if (!cr6.gt) goto loc_8305F7F4;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// ble cr6,0x8305f820
	if (!cr6.gt) goto loc_8305F820;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// ble cr6,0x8305f7b8
	if (!cr6.gt) goto loc_8305F7B8;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// bne cr6,0x8305f7f4
	if (!cr6.eq) goto loc_8305F7F4;
	// li r11,0
	r11.s64 = 0;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// addi r10,r31,128
	ctx.r10.s64 = r31.s64 + 128;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// addi r7,r31,96
	ctx.r7.s64 = r31.s64 + 96;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// stb r11,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, r11.u8);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8305d168
	sub_8305D168(ctx, base);
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
	// b 0x8305fcb0
	goto loc_8305FCB0;
loc_8305F7B8:
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8305d4b0
	sub_8305D4B0(ctx, base);
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
	// b 0x8305fcb0
	goto loc_8305FCB0;
loc_8305F7F4:
	// lis r11,-32234
	r11.s64 = -2112487424;
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// li r6,375
	ctx.r6.s64 = 375;
	// addi r4,r11,21784
	ctx.r4.s64 = r11.s64 + 21784;
	// li r5,1467
	ctx.r5.s64 = 1467;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x82fd93a0
	sub_82FD93A0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// addi r4,r11,-8860
	ctx.r4.s64 = r11.s64 + -8860;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_8305F820:
	// lis r11,-32234
	r11.s64 = -2112487424;
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// li r6,367
	ctx.r6.s64 = 367;
	// addi r4,r11,21784
	ctx.r4.s64 = r11.s64 + 21784;
	// li r5,1463
	ctx.r5.s64 = 1463;
	// addi r3,r31,384
	ctx.r3.s64 = r31.s64 + 384;
	// bl 0x82fd93a0
	sub_82FD93A0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,384
	ctx.r3.s64 = r31.s64 + 384;
	// addi r4,r11,-8860
	ctx.r4.s64 = r11.s64 + -8860;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_8305F84C:
	// clrlwi. r11,r10,28
	r11.u64 = ctx.r10.u32 & 0xF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8305f8cc
	if (cr0.eq) goto loc_8305F8CC;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// ble cr6,0x8305f874
	if (!cr6.gt) goto loc_8305F874;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// ble cr6,0x8305f8cc
	if (!cr6.gt) goto loc_8305F8CC;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// ble cr6,0x8305f8a0
	if (!cr6.gt) goto loc_8305F8A0;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// beq cr6,0x8305f8cc
	if (cr6.eq) goto loc_8305F8CC;
loc_8305F874:
	// lis r11,-32234
	r11.s64 = -2112487424;
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// li r6,375
	ctx.r6.s64 = 375;
	// addi r4,r11,21784
	ctx.r4.s64 = r11.s64 + 21784;
	// li r5,1439
	ctx.r5.s64 = 1439;
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
	// bl 0x82fd93a0
	sub_82FD93A0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
	// addi r4,r11,-8860
	ctx.r4.s64 = r11.s64 + -8860;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_8305F8A0:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8305d3e0
	sub_8305D3E0(ctx, base);
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
	// b 0x8305fcb0
	goto loc_8305FCB0;
loc_8305F8CC:
	// lis r11,-32234
	r11.s64 = -2112487424;
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// li r6,366
	ctx.r6.s64 = 366;
	// addi r4,r11,21784
	ctx.r4.s64 = r11.s64 + 21784;
	// li r5,1435
	ctx.r5.s64 = 1435;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x82fd93a0
	sub_82FD93A0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// addi r4,r11,-8860
	ctx.r4.s64 = r11.s64 + -8860;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_8305F8F8:
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
	// b 0x8305fcb0
	goto loc_8305FCB0;
loc_8305F914:
	// clrlwi. r11,r10,28
	r11.u64 = ctx.r10.u32 & 0xF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8305fa7c
	if (cr0.eq) goto loc_8305FA7C;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x8305fa38
	if (cr6.eq) goto loc_8305FA38;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// beq cr6,0x8305f9ec
	if (cr6.eq) goto loc_8305F9EC;
	// ble cr6,0x8305f9c0
	if (!cr6.gt) goto loc_8305F9C0;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// ble cr6,0x8305f984
	if (!cr6.gt) goto loc_8305F984;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// bne cr6,0x8305f9c0
	if (!cr6.eq) goto loc_8305F9C0;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// addi r9,r31,128
	ctx.r9.s64 = r31.s64 + 128;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8305eb28
	sub_8305EB28(ctx, base);
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
	// b 0x8305fcb0
	goto loc_8305FCB0;
loc_8305F984:
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8305d4b0
	sub_8305D4B0(ctx, base);
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
	// b 0x8305fcb0
	goto loc_8305FCB0;
loc_8305F9C0:
	// lis r11,-32234
	r11.s64 = -2112487424;
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// li r6,375
	ctx.r6.s64 = 375;
	// addi r4,r11,21784
	ctx.r4.s64 = r11.s64 + 21784;
	// li r5,1533
	ctx.r5.s64 = 1533;
	// addi r3,r31,320
	ctx.r3.s64 = r31.s64 + 320;
	// bl 0x82fd93a0
	sub_82FD93A0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,320
	ctx.r3.s64 = r31.s64 + 320;
	// addi r4,r11,-8860
	ctx.r4.s64 = r11.s64 + -8860;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_8305F9EC:
	// li r11,0
	r11.s64 = 0;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// addi r10,r31,128
	ctx.r10.s64 = r31.s64 + 128;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// addi r7,r31,96
	ctx.r7.s64 = r31.s64 + 96;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// stb r11,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, r11.u8);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8305d168
	sub_8305D168(ctx, base);
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
	// b 0x8305fcb0
	goto loc_8305FCB0;
loc_8305FA38:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// addi r9,r31,128
	ctx.r9.s64 = r31.s64 + 128;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8305fd28
	sub_8305FD28(ctx, base);
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
	// b 0x8305fcb0
	goto loc_8305FCB0;
loc_8305FA7C:
	// lis r11,-32234
	r11.s64 = -2112487424;
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// li r6,369
	ctx.r6.s64 = 369;
	// addi r4,r11,21784
	ctx.r4.s64 = r11.s64 + 21784;
	// li r5,1529
	ctx.r5.s64 = 1529;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x82fd93a0
	sub_82FD93A0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// addi r4,r11,-8860
	ctx.r4.s64 = r11.s64 + -8860;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_8305FAA8:
	// clrlwi. r11,r10,28
	r11.u64 = ctx.r10.u32 & 0xF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8305fb88
	if (cr0.eq) goto loc_8305FB88;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x8305fb3c
	if (cr6.eq) goto loc_8305FB3C;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// beq cr6,0x8305fb88
	if (cr6.eq) goto loc_8305FB88;
	// ble cr6,0x8305fad4
	if (!cr6.gt) goto loc_8305FAD4;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// ble cr6,0x8305fb00
	if (!cr6.gt) goto loc_8305FB00;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// beq cr6,0x8305fb88
	if (cr6.eq) goto loc_8305FB88;
loc_8305FAD4:
	// lis r11,-32234
	r11.s64 = -2112487424;
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// li r6,375
	ctx.r6.s64 = 375;
	// addi r4,r11,21784
	ctx.r4.s64 = r11.s64 + 21784;
	// li r5,1495
	ctx.r5.s64 = 1495;
	// addi r3,r31,288
	ctx.r3.s64 = r31.s64 + 288;
	// bl 0x82fd93a0
	sub_82FD93A0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,288
	ctx.r3.s64 = r31.s64 + 288;
	// addi r4,r11,-8860
	ctx.r4.s64 = r11.s64 + -8860;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_8305FB00:
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8305d4b0
	sub_8305D4B0(ctx, base);
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
	// b 0x8305fcb0
	goto loc_8305FCB0;
loc_8305FB3C:
	// li r11,1
	r11.s64 = 1;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// addi r10,r31,128
	ctx.r10.s64 = r31.s64 + 128;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// addi r7,r31,96
	ctx.r7.s64 = r31.s64 + 96;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// stb r11,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, r11.u8);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8305d168
	sub_8305D168(ctx, base);
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
	// b 0x8305fcb0
	goto loc_8305FCB0;
loc_8305FB88:
	// lis r11,-32234
	r11.s64 = -2112487424;
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// li r6,368
	ctx.r6.s64 = 368;
	// addi r4,r11,21784
	ctx.r4.s64 = r11.s64 + 21784;
	// li r5,1491
	ctx.r5.s64 = 1491;
	// addi r3,r31,352
	ctx.r3.s64 = r31.s64 + 352;
	// bl 0x82fd93a0
	sub_82FD93A0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,352
	ctx.r3.s64 = r31.s64 + 352;
	// addi r4,r11,-8860
	ctx.r4.s64 = r11.s64 + -8860;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_8305FBB4:
	// clrlwi. r11,r10,28
	r11.u64 = ctx.r10.u32 & 0xF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8305fc78
	if (cr0.eq) goto loc_8305FC78;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// ble cr6,0x8305fbdc
	if (!cr6.gt) goto loc_8305FBDC;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// ble cr6,0x8305fc38
	if (!cr6.gt) goto loc_8305FC38;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// ble cr6,0x8305fc08
	if (!cr6.gt) goto loc_8305FC08;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// beq cr6,0x8305fc38
	if (cr6.eq) goto loc_8305FC38;
loc_8305FBDC:
	// lis r11,-32234
	r11.s64 = -2112487424;
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// li r6,375
	ctx.r6.s64 = 375;
	// addi r4,r11,21784
	ctx.r4.s64 = r11.s64 + 21784;
	// li r5,1414
	ctx.r5.s64 = 1414;
	// addi r3,r31,416
	ctx.r3.s64 = r31.s64 + 416;
	// bl 0x82fd93a0
	sub_82FD93A0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,416
	ctx.r3.s64 = r31.s64 + 416;
	// addi r4,r11,-8860
	ctx.r4.s64 = r11.s64 + -8860;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_8305FC08:
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8305ced8
	sub_8305CED8(ctx, base);
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
	// b 0x8305fcb0
	goto loc_8305FCB0;
loc_8305FC38:
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// addi r9,r31,128
	ctx.r9.s64 = r31.s64 + 128;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8305e9c8
	sub_8305E9C8(ctx, base);
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
	// b 0x8305fcb0
	goto loc_8305FCB0;
loc_8305FC78:
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8305e6c8
	sub_8305E6C8(ctx, base);
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
loc_8305FCB0:
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
loc_8305FCC8:
	// addi r1,r31,528
	ctx.r1.s64 = r31.s64 + 528;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_8305FCD0"))) PPC_WEAK_FUNC(sub_8305FCD0);
PPC_FUNC_IMPL(__imp__sub_8305FCD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-528
	r31.s64 = r12.s64 + -528;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
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

__attribute__((alias("__imp__sub_8305FCF8"))) PPC_WEAK_FUNC(sub_8305FCF8);
PPC_FUNC_IMPL(__imp__sub_8305FCF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-528
	r31.s64 = r12.s64 + -528;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
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

__attribute__((alias("__imp__sub_8305FD28"))) PPC_WEAK_FUNC(sub_8305FD28);
PPC_FUNC_IMPL(__imp__sub_8305FD28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x831b0b1c
	// addi r31,r1,-240
	r31.s64 = ctx.r1.s64 + -240;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// stw r10,316(r31)
	PPC_STORE_U32(r31.u32 + 316, ctx.r10.u32);
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// lwz r10,32(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r11,36(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	// stw r4,268(r31)
	PPC_STORE_U32(r31.u32 + 268, ctx.r4.u32);
	// stw r7,292(r31)
	PPC_STORE_U32(r31.u32 + 292, ctx.r7.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// lwz r26,4(r28)
	r26.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r9,4(r25)
	ctx.r9.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// stw r27,260(r31)
	PPC_STORE_U32(r31.u32 + 260, r27.u32);
	// mullw r10,r10,r26
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r26.s32);
	// stw r28,284(r31)
	PPC_STORE_U32(r31.u32 + 284, r28.u32);
	// stw r25,308(r31)
	PPC_STORE_U32(r31.u32 + 308, r25.u32);
	// stw r26,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r26.u32);
	// stw r9,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r9.u32);
	// beq cr6,0x8305fd8c
	if (cr6.eq) goto loc_8305FD8C;
	// mullw r11,r11,r26
	r11.s64 = int64_t(r11.s32) * int64_t(r26.s32);
loc_8305FD8C:
	// lwz r9,32(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// lwz r8,36(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x8305fdbc
	if (cr6.lt) goto loc_8305FDBC;
	// cmpwi cr6,r8,-1
	cr6.compare<int32_t>(ctx.r8.s32, -1, xer);
	// beq cr6,0x8305fdb4
	if (cr6.eq) goto loc_8305FDB4;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x8305fdbc
	if (cr6.eq) goto loc_8305FDBC;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bgt cr6,0x8305fdbc
	if (cr6.gt) goto loc_8305FDBC;
loc_8305FDB4:
	// li r11,1
	r11.s64 = 1;
	// b 0x8305fdc0
	goto loc_8305FDC0;
loc_8305FDBC:
	// li r11,0
	r11.s64 = 0;
loc_8305FDC0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8305fdf4
	if (!cr0.eq) goto loc_8305FDF4;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// lwz r7,20(r27)
	ctx.r7.u64 = PPC_LOAD_U32(r27.u32 + 20);
	// li r6,364
	ctx.r6.s64 = 364;
	// addi r4,r11,21784
	ctx.r4.s64 = r11.s64 + 21784;
	// li r5,2124
	ctx.r5.s64 = 2124;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82fd93a0
	sub_82FD93A0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// addi r4,r11,-8860
	ctx.r4.s64 = r11.s64 + -8860;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_8305FDF4:
	// li r29,0
	r29.s64 = 0;
loc_8305FDF8:
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// cmpw cr6,r29,r26
	cr6.compare<int32_t>(r29.s32, r26.s32, xer);
	// bge cr6,0x8305fee4
	if (!cr6.lt) goto loc_8305FEE4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8308ea58
	sub_8308EA58(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	r11.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// stw r10,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// stb r11,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r11.u8);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
loc_8305FE28:
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(r30.s32, ctx.r10.s32, xer);
	// bge cr6,0x8305fea8
	if (!cr6.lt) goto loc_8305FEA8;
	// clrlwi. r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8305fea8
	if (!cr0.eq) goto loc_8305FEA8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8308ea58
	sub_8308EA58(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r9,324(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 324);
	// lwz r8,316(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// lwz r6,292(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// lwz r4,268(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x8305f5f8
	sub_8305F5F8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r11,1
	r11.s64 = 1;
	// stb r11,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r11.u8);
	// b 0x8305fe9c
	goto loc_8305FE9C;
	// lwz r27,260(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// lwz r25,308(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 308);
	// lwz r28,284(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 284);
	// lwz r26,100(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r29,88(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// lwz r30,84(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 84);
loc_8305FE9C:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// b 0x8305fe28
	goto loc_8305FE28;
loc_8305FEA8:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8305fedc
	if (!cr0.eq) goto loc_8305FEDC;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// lwz r7,20(r27)
	ctx.r7.u64 = PPC_LOAD_U32(r27.u32 + 20);
	// li r6,374
	ctx.r6.s64 = 374;
	// addi r4,r11,21784
	ctx.r4.s64 = r11.s64 + 21784;
	// li r5,2147
	ctx.r5.s64 = 2147;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82fd93a0
	sub_82FD93A0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// addi r4,r11,-8860
	ctx.r4.s64 = r11.s64 + -8860;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_8305FEDC:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// b 0x8305fdf8
	goto loc_8305FDF8;
loc_8305FEE4:
	// addi r1,r31,240
	ctx.r1.s64 = r31.s64 + 240;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_8305FEF4"))) PPC_WEAK_FUNC(sub_8305FEF4);
PPC_FUNC_IMPL(__imp__sub_8305FEF4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r3,-31994
	ctx.r3.s64 = -2096758784;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,-384
	ctx.r3.s64 = ctx.r3.s64 + -384;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_8305FF10"))) PPC_WEAK_FUNC(sub_8305FF10);
PPC_FUNC_IMPL(__imp__sub_8305FF10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// stw r3,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r3.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r11,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r11.u32);
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// bne cr6,0x8305ff7c
	if (!cr6.eq) goto loc_8305FF7C;
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x8305ff7c
	if (cr0.eq) goto loc_8305FF7C;
	// lwz r5,60(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// cmplwi r5,0
	cr0.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq 0x8305ff7c
	if (cr0.eq) goto loc_8305FF7C;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// lwz r7,60(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// lwz r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// bl 0x8305f5f8
	sub_8305F5F8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8305ff7c
	goto loc_8305FF7C;
loc_8305FF7C:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
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

__attribute__((alias("__imp__sub_8305FF9C"))) PPC_WEAK_FUNC(sub_8305FF9C);
PPC_FUNC_IMPL(__imp__sub_8305FF9C) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r4,156
	ctx.r4.s64 = 156;
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// lwz r6,100(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addi r3,r11,80
	ctx.r3.s64 = r11.s64 + 80;
	// lwz r30,20(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bl 0x830a6370
	sub_830A6370(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lis r3,-31994
	ctx.r3.s64 = -2096758784;
	// addi r3,r3,-132
	ctx.r3.s64 = ctx.r3.s64 + -132;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83060008"))) PPC_WEAK_FUNC(sub_83060008);
PPC_FUNC_IMPL(__imp__sub_83060008) {
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
	// addi r31,r1,-352
	r31.s64 = ctx.r1.s64 + -352;
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stb r5,391(r31)
	PPC_STORE_U8(r31.u32 + 391, ctx.r5.u8);
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// lwz r4,28(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// stw r29,372(r31)
	PPC_STORE_U32(r31.u32 + 372, r29.u32);
	// bl 0x82fef4e0
	sub_82FEF4E0(ctx, base);
loc_83060038:
	// lwz r11,200(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 200);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8306005c
	if (!cr6.eq) goto loc_8306005C;
	// lwz r11,208(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 208);
	// lwz r10,204(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// li r11,0
	r11.s64 = 0;
	// beq cr6,0x83060060
	if (cr6.eq) goto loc_83060060;
loc_8306005C:
	// li r11,1
	r11.s64 = 1;
loc_83060060:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830604f0
	if (cr0.eq) goto loc_830604F0;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x830159e0
	sub_830159E0(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// stw r21,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r21.u32);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83060038
	if (!cr6.eq) goto loc_83060038;
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83060038
	if (!cr0.eq) goto loc_83060038;
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x83016248
	sub_83016248(ctx, base);
loc_830600D0:
	// lwz r11,232(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830600f0
	if (cr6.eq) goto loc_830600F0;
	// lwz r10,236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// lwz r10,28(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// li r11,1
	r11.s64 = 1;
	// ble cr6,0x830600f4
	if (!cr6.gt) goto loc_830600F4;
loc_830600F0:
	// li r11,0
	r11.s64 = 0;
loc_830600F4:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306037c
	if (cr0.eq) goto loc_8306037C;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x83015018
	sub_83015018(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// lwz r11,12(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 12);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8306018c
	if (cr6.eq) goto loc_8306018C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x8306012c
	if (!cr6.eq) goto loc_8306012C;
	// lwz r3,8(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x83060170
	goto loc_83060170;
loc_8306012C:
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x8306015c
	if (!cr6.eq) goto loc_8306015C;
	// lwz r3,8(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
	// b 0x8306018c
	goto loc_8306018C;
loc_8306015C:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x8306018c
	if (!cr6.eq) goto loc_8306018C;
	// lwz r3,8(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
loc_83060170:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
loc_8306018C:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830600d0
	if (cr0.eq) goto loc_830600D0;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r22,0
	r22.s64 = 0;
	// li r23,0
	r23.s64 = 0;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830600d0
	if (cr0.eq) goto loc_830600D0;
loc_830601E0:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83060218
	if (!cr6.eq) goto loc_83060218;
	// clrlwi. r11,r22,24
	r11.u64 = r22.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83060354
	if (!cr0.eq) goto loc_83060354;
	// li r22,1
	r22.s64 = 1;
	// b 0x830602f8
	goto loc_830602F8;
loc_83060218:
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// bne cr6,0x830602f8
	if (!cr6.eq) goto loc_830602F8;
	// lwz r3,28(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 28);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830602f8
	if (cr0.eq) goto loc_830602F8;
	// lwz r4,20(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// stw r3,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r3.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// li r27,0
	r27.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x83060260
	goto loc_83060260;
loc_83060250:
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(r11.u32, 32, xer);
	// beq cr6,0x8306026c
	if (cr6.eq) goto loc_8306026C;
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
loc_83060260:
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83060250
	if (!cr0.eq) goto loc_83060250;
loc_8306026C:
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83060280
	if (!cr0.eq) goto loc_83060280;
	// li r27,1
	r27.s64 = 1;
	// b 0x83060288
	goto loc_83060288;
loc_83060280:
	// li r11,0
	r11.s64 = 0;
	// sth r11,0(r30)
	PPC_STORE_U16(r30.u32 + 0, r11.u16);
loc_83060288:
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830602d8
	if (!cr0.eq) goto loc_830602D8;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
loc_830602D8:
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830602ec
	if (!cr0.eq) goto loc_830602EC;
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// mr r28,r30
	r28.u64 = r30.u64;
	// b 0x83060260
	goto loc_83060260;
loc_830602EC:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82fdae08
	sub_82FDAE08(ctx, base);
loc_830602F8:
	// lbz r11,391(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 391);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83060330
	if (cr0.eq) goto loc_83060330;
	// lwz r5,24(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// cmpwi r5,0
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x83060330
	if (cr0.eq) goto loc_83060330;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83060330:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r23,r3
	cr6.compare<uint32_t>(r23.u32, ctx.r3.u32, xer);
	// blt cr6,0x830601e0
	if (cr6.lt) goto loc_830601E0;
	// b 0x830600d0
	goto loc_830600D0;
loc_83060354:
	// lwz r3,8(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
	// b 0x830600d0
	goto loc_830600D0;
loc_8306037C:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lbz r11,19(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 19);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830604e4
	if (cr0.eq) goto loc_830604E4;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,28(r21)
	ctx.r4.u64 = PPC_LOAD_U32(r21.u32 + 28);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// lwz r6,20(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// bl 0x83015918
	sub_83015918(ctx, base);
loc_830603A0:
	// lwz r11,168(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830603c4
	if (!cr6.eq) goto loc_830603C4;
	// lwz r11,176(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// lwz r10,172(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// li r11,0
	r11.s64 = 0;
	// beq cr6,0x830603c8
	if (cr6.eq) goto loc_830603C8;
loc_830603C4:
	// li r11,1
	r11.s64 = 1;
loc_830603C8:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83060418
	if (cr0.eq) goto loc_83060418;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x830159e0
	sub_830159E0(ctx, base);
	// lwz r5,28(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r6,4(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// bl 0x83048970
	sub_83048970(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8305ff10
	sub_8305FF10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8305e3d8
	sub_8305E3D8(ctx, base);
	// b 0x830603a0
	goto loc_830603A0;
loc_83060418:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,32(r21)
	ctx.r4.u64 = PPC_LOAD_U32(r21.u32 + 32);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// lwz r6,20(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// bl 0x83015918
	sub_83015918(ctx, base);
loc_8306042C:
	// lwz r11,136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83060450
	if (!cr6.eq) goto loc_83060450;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// li r11,0
	r11.s64 = 0;
	// beq cr6,0x83060454
	if (cr6.eq) goto loc_83060454;
loc_83060450:
	// li r11,1
	r11.s64 = 1;
loc_83060454:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830604d4
	if (cr0.eq) goto loc_830604D4;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x830159e0
	sub_830159E0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// stw r30,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r30.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830604b0
	if (cr0.eq) goto loc_830604B0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// bl 0x8305f5f8
	sub_8305F5F8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x830604b0
	goto loc_830604B0;
	// lwz r29,372(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 372);
	// lwz r21,100(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r30,96(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 96);
loc_830604B0:
	// lbz r11,4(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8306042c
	if (cr0.eq) goto loc_8306042C;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8305e3d8
	sub_8305E3D8(ctx, base);
	// b 0x8306042c
	goto loc_8306042C;
loc_830604D4:
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x83016120
	sub_83016120(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x83016120
	sub_83016120(ctx, base);
loc_830604E4:
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x83016090
	sub_83016090(ctx, base);
	// b 0x83060038
	goto loc_83060038;
loc_830604F0:
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x83016120
	sub_83016120(ctx, base);
	// addi r1,r31,352
	ctx.r1.s64 = r31.s64 + 352;
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_83060508"))) PPC_WEAK_FUNC(sub_83060508);
PPC_FUNC_IMPL(__imp__sub_83060508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-352
	r31.s64 = r12.s64 + -352;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r4,156
	ctx.r4.s64 = 156;
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// lwz r6,32(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// lwz r11,372(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 372);
	// addi r3,r11,80
	ctx.r3.s64 = r11.s64 + 80;
	// lwz r30,20(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bl 0x830a6370
	sub_830A6370(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lis r3,-31994
	ctx.r3.s64 = -2096758784;
	// addi r3,r3,1188
	ctx.r3.s64 = ctx.r3.s64 + 1188;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_8306056C"))) PPC_WEAK_FUNC(sub_8306056C);
PPC_FUNC_IMPL(__imp__sub_8306056C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-352
	r31.s64 = r12.s64 + -352;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x83016120
	sub_83016120(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83060594"))) PPC_WEAK_FUNC(sub_83060594);
PPC_FUNC_IMPL(__imp__sub_83060594) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-352
	r31.s64 = r12.s64 + -352;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x83016090
	sub_83016090(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830605BC"))) PPC_WEAK_FUNC(sub_830605BC);
PPC_FUNC_IMPL(__imp__sub_830605BC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-352
	r31.s64 = r12.s64 + -352;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
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

__attribute__((alias("__imp__sub_830605E4"))) PPC_WEAK_FUNC(sub_830605E4);
PPC_FUNC_IMPL(__imp__sub_830605E4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-352
	r31.s64 = r12.s64 + -352;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x83016120
	sub_83016120(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306060C"))) PPC_WEAK_FUNC(sub_8306060C);
PPC_FUNC_IMPL(__imp__sub_8306060C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-352
	r31.s64 = r12.s64 + -352;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x83016120
	sub_83016120(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83060638"))) PPC_WEAK_FUNC(sub_83060638);
PPC_FUNC_IMPL(__imp__sub_83060638) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83060688
	if (!cr6.eq) goto loc_83060688;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// li r6,117
	ctx.r6.s64 = 117;
	// addi r4,r11,24096
	ctx.r4.s64 = r11.s64 + 24096;
	// li r5,62
	ctx.r5.s64 = 62;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r7,216(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 216);
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
loc_83060688:
	// lwz r11,36(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830606a4
	if (!cr0.eq) goto loc_830606A4;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x830606ac
	if (cr6.eq) goto loc_830606AC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83060728
	goto loc_83060728;
loc_830606A4:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x830606b4
	if (!cr6.eq) goto loc_830606B4;
loc_830606AC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83060728
	goto loc_83060728;
loc_830606B4:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x830606f4
	if (cr6.eq) goto loc_830606F4;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x830606f4
	if (cr6.eq) goto loc_830606F4;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// li r6,21
	ctx.r6.s64 = 21;
	// addi r4,r11,24096
	ctx.r4.s64 = r11.s64 + 24096;
	// li r5,94
	ctx.r5.s64 = 94;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r7,216(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 216);
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
loc_830606F4:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,40(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83060728:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83060730"))) PPC_WEAK_FUNC(sub_83060730);
PPC_FUNC_IMPL(__imp__sub_83060730) {
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
	// bl 0x8301f0f8
	sub_8301F0F8(ctx, base);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,24156
	r11.s64 = r11.s64 + 24156;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_83060778"))) PPC_WEAK_FUNC(sub_83060778);
PPC_FUNC_IMPL(__imp__sub_83060778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r10,15376
	ctx.r10.s64 = ctx.r10.s64 + 15376;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r10,1
	r11.u64 = ctx.r10.u64 ^ 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830607B8"))) PPC_WEAK_FUNC(sub_830607B8);
PPC_FUNC_IMPL(__imp__sub_830607B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r10,15376
	ctx.r10.s64 = ctx.r10.s64 + 15376;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r10,1
	r11.u64 = ctx.r10.u64 ^ 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83060800"))) PPC_WEAK_FUNC(sub_83060800);
PPC_FUNC_IMPL(__imp__sub_83060800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,58
	ctx.r4.s64 = 58;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x82fda0f8
	sub_82FDA0F8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,-1
	cr6.compare<int32_t>(r26.s32, -1, xer);
	// bne cr6,0x83060888
	if (!cr6.eq) goto loc_83060888;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r26,8(r29)
	r26.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r29,24(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// addi r4,r11,-27800
	ctx.r4.s64 = r11.s64 + -27800;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x82fe6e90
	sub_82FE6E90(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff9c08
	sub_82FF9C08(ctx, base);
	// li r28,0
	r28.s64 = 0;
	// stw r26,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r26.u32);
	// stb r28,28(r30)
	PPC_STORE_U8(r30.u32 + 28, r28.u8);
	// stw r28,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r28.u32);
	// b 0x830608f8
	goto loc_830608F8;
loc_83060888:
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,216(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// stw r4,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r4.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// rlwinm r11,r26,1,0,30
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0xFFFFFFFE;
	// li r28,0
	r28.s64 = 0;
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,2
	ctx.r5.s64 = r11.s64 + 2;
	// sth r28,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r28.u16);
	// lwz r27,8(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r29,24(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x82fe6e90
	sub_82FE6E90(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff9c08
	sub_82FF9C08(ctx, base);
	// stw r27,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r27.u32);
	// stb r28,28(r30)
	PPC_STORE_U8(r30.u32 + 28, r28.u8);
	// stw r28,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82fdae08
	sub_82FDAE08(ctx, base);
loc_830608F8:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83060900"))) PPC_WEAK_FUNC(sub_83060900);
PPC_FUNC_IMPL(__imp__sub_83060900) {
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

__attribute__((alias("__imp__sub_83060930"))) PPC_WEAK_FUNC(sub_83060930);
PPC_FUNC_IMPL(__imp__sub_83060930) {
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
	// addi r31,r1,-464
	r31.s64 = ctx.r1.s64 + -464;
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r16,r6
	r16.u64 = ctx.r6.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r23,8(r30)
	r23.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r29,4(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r28,24(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r15,28(r30)
	r15.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(r29.s32, 1, xer);
	// bne cr6,0x830609b8
	if (!cr6.eq) goto loc_830609B8;
	// clrlwi. r11,r16,24
	r11.u64 = r16.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830609b8
	if (!cr0.eq) goto loc_830609B8;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830609b8
	if (!cr0.eq) goto loc_830609B8;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
loc_830609B8:
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// beq cr6,0x83060de8
	if (cr6.eq) goto loc_83060DE8;
	// lhz r11,0(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830609ec
	if (!cr0.eq) goto loc_830609EC;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
	// b 0x83060de8
	goto loc_83060DE8;
loc_830609EC:
	// li r17,1
	r17.s64 = 1;
	// li r19,0
	r19.s64 = 0;
	// cmpwi cr6,r23,3
	cr6.compare<int32_t>(r23.s32, 3, xer);
	// beq cr6,0x83060a20
	if (cr6.eq) goto loc_83060A20;
	// cmpwi cr6,r23,5
	cr6.compare<int32_t>(r23.s32, 5, xer);
	// beq cr6,0x83060a20
	if (cr6.eq) goto loc_83060A20;
	// cmpwi cr6,r23,7
	cr6.compare<int32_t>(r23.s32, 7, xer);
	// beq cr6,0x83060a20
	if (cr6.eq) goto loc_83060A20;
	// cmpwi cr6,r23,8
	cr6.compare<int32_t>(r23.s32, 8, xer);
	// beq cr6,0x83060a20
	if (cr6.eq) goto loc_83060A20;
	// cmpwi cr6,r23,9
	cr6.compare<int32_t>(r23.s32, 9, xer);
	// mr r18,r19
	r18.u64 = r19.u64;
	// bne cr6,0x83060a24
	if (!cr6.eq) goto loc_83060A24;
loc_83060A20:
	// mr r18,r17
	r18.u64 = r17.u64;
loc_83060A24:
	// cmpwi cr6,r23,1
	cr6.compare<int32_t>(r23.s32, 1, xer);
	// beq cr6,0x83060a58
	if (cr6.eq) goto loc_83060A58;
	// cmpwi cr6,r23,2
	cr6.compare<int32_t>(r23.s32, 2, xer);
	// beq cr6,0x83060a58
	if (cr6.eq) goto loc_83060A58;
	// cmpwi cr6,r23,3
	cr6.compare<int32_t>(r23.s32, 3, xer);
	// beq cr6,0x83060a58
	if (cr6.eq) goto loc_83060A58;
	// cmpwi cr6,r23,4
	cr6.compare<int32_t>(r23.s32, 4, xer);
	// beq cr6,0x83060a58
	if (cr6.eq) goto loc_83060A58;
	// cmpwi cr6,r23,5
	cr6.compare<int32_t>(r23.s32, 5, xer);
	// beq cr6,0x83060a58
	if (cr6.eq) goto loc_83060A58;
	// cmpwi cr6,r23,8
	cr6.compare<int32_t>(r23.s32, 8, xer);
	// mr r28,r19
	r28.u64 = r19.u64;
	// bne cr6,0x83060a5c
	if (!cr6.eq) goto loc_83060A5C;
loc_83060A58:
	// mr r28,r17
	r28.u64 = r17.u64;
loc_83060A5C:
	// cmpwi cr6,r23,1
	cr6.compare<int32_t>(r23.s32, 1, xer);
	// beq cr6,0x83060a78
	if (cr6.eq) goto loc_83060A78;
	// cmpwi cr6,r23,2
	cr6.compare<int32_t>(r23.s32, 2, xer);
	// beq cr6,0x83060a78
	if (cr6.eq) goto loc_83060A78;
	// cmpwi cr6,r23,3
	cr6.compare<int32_t>(r23.s32, 3, xer);
	// mr r20,r19
	r20.u64 = r19.u64;
	// bne cr6,0x83060a7c
	if (!cr6.eq) goto loc_83060A7C;
loc_83060A78:
	// mr r20,r17
	r20.u64 = r17.u64;
loc_83060A7C:
	// mr r22,r19
	r22.u64 = r19.u64;
	// stw r19,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r19.u32);
	// stw r19,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r19.u32);
	// addi r11,r27,2
	r11.s64 = r27.s64 + 2;
	// b 0x83060a94
	goto loc_83060A94;
loc_83060A90:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
loc_83060A94:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x83060a90
	if (!cr0.eq) goto loc_83060A90;
	// subf r11,r27,r11
	r11.s64 = r11.s64 - r27.s64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(r11.u32, 100, xer);
	// bge cr6,0x83060ac4
	if (!cr6.lt) goto loc_83060AC4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82fd9eb0
	sub_82FD9EB0(ctx, base);
	// addi r29,r31,112
	r29.s64 = r31.s64 + 112;
	// b 0x83060aec
	goto loc_83060AEC;
loc_83060AC4:
	// lwz r11,16(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8302dd68
	sub_8302DD68(ctx, base);
	// lwz r29,80(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_83060AEC:
	// lwz r11,16(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// clrlwi r25,r28,24
	r25.u64 = r28.u32 & 0xFF;
	// mr r27,r29
	r27.u64 = r29.u64;
	// lbz r24,10(r11)
	r24.u64 = PPC_LOAD_U8(r11.u32 + 10);
	// lis r11,2
	r11.s64 = 131072;
	// ori r28,r11,32852
	r28.u64 = r11.u64 | 32852;
loc_83060B04:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x83060b98
	if (cr6.eq) goto loc_83060B98;
	// lwz r11,12(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// lhz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U16(r27.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwzx r11,r11,r28
	r11.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83060b94
	if (!cr0.eq) goto loc_83060B94;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
	// b 0x83060b94
	goto loc_83060B94;
loc_83060B48:
	// lhz r11,0(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 0);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(r11.u32, 32, xer);
	// beq cr6,0x83060ba8
	if (cr6.eq) goto loc_83060BA8;
	// clrlwi. r10,r24,24
	ctx.r10.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83060b78
	if (cr0.eq) goto loc_83060B78;
	// cmplwi cr6,r11,58
	cr6.compare<uint32_t>(r11.u32, 58, xer);
	// bne cr6,0x83060b78
	if (!cr6.eq) goto loc_83060B78;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x83060b78
	if (cr6.eq) goto loc_83060B78;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8301f3f0
	sub_8301F3F0(ctx, base);
loc_83060B78:
	// lwz r11,12(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// lhz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U16(r27.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwzx r11,r11,r28
	r11.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83060dbc
	if (cr0.eq) goto loc_83060DBC;
loc_83060B94:
	// addi r27,r27,2
	r27.s64 = r27.s64 + 2;
loc_83060B98:
	// lhz r11,0(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83060b48
	if (!cr0.eq) goto loc_83060B48;
	// b 0x83060bb0
	goto loc_83060BB0;
loc_83060BA8:
	// clrlwi. r11,r18,24
	r11.u64 = r18.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83060d94
	if (cr0.eq) goto loc_83060D94;
loc_83060BB0:
	// lhz r11,0(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83060bc0
	if (!cr0.eq) goto loc_83060BC0;
	// mr r22,r17
	r22.u64 = r17.u64;
loc_83060BC0:
	// clrlwi. r11,r20,24
	r11.u64 = r20.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// sth r19,0(r27)
	PPC_STORE_U16(r27.u32 + 0, r19.u16);
	// beq 0x83060cdc
	if (cr0.eq) goto loc_83060CDC;
	// cmpwi cr6,r23,1
	cr6.compare<int32_t>(r23.s32, 1, xer);
	// beq cr6,0x83060be4
	if (cr6.eq) goto loc_83060BE4;
	// cmpwi cr6,r23,2
	cr6.compare<int32_t>(r23.s32, 2, xer);
	// beq cr6,0x83060be4
	if (cr6.eq) goto loc_83060BE4;
	// cmpwi cr6,r23,3
	cr6.compare<int32_t>(r23.s32, 3, xer);
	// bne cr6,0x83060d78
	if (!cr6.eq) goto loc_83060D78;
loc_83060BE4:
	// lwz r11,16(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// lwz r3,116(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 116);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83060c50
	if (cr0.eq) goto loc_83060C50;
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x83060c50
	if (cr0.eq) goto loc_83060C50;
	// lbz r11,4(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83060cbc
	if (cr0.eq) goto loc_83060CBC;
	// cmpwi cr6,r23,1
	cr6.compare<int32_t>(r23.s32, 1, xer);
	// bne cr6,0x83060ccc
	if (!cr6.eq) goto loc_83060CCC;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
	// b 0x83060cbc
	goto loc_83060CBC;
loc_83060C50:
	// lwz r11,16(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// li r3,16
	ctx.r3.s64 = 16;
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// stw r4,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r4.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83060c90
	if (cr0.eq) goto loc_83060C90;
	// lwz r11,16(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r7,216(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// bl 0x8301da10
	sub_8301DA10(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x83060c94
	goto loc_83060C94;
loc_83060C90:
	// mr r30,r19
	r30.u64 = r19.u64;
loc_83060C94:
	// lwz r11,16(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// lwz r29,8(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r3,116(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 116);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x83054ec8
	sub_83054EC8(ctx, base);
loc_83060CBC:
	// cmpwi cr6,r23,1
	cr6.compare<int32_t>(r23.s32, 1, xer);
	// bne cr6,0x83060ccc
	if (!cr6.eq) goto loc_83060CCC;
	// stb r17,4(r30)
	PPC_STORE_U8(r30.u32 + 4, r17.u8);
	// b 0x83060d78
	goto loc_83060D78;
loc_83060CCC:
	// clrlwi. r11,r16,24
	r11.u64 = r16.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83060d78
	if (!cr0.eq) goto loc_83060D78;
	// stb r17,5(r30)
	PPC_STORE_U8(r30.u32 + 5, r17.u8);
	// b 0x83060d78
	goto loc_83060D78;
loc_83060CDC:
	// cmpwi cr6,r23,4
	cr6.compare<int32_t>(r23.s32, 4, xer);
	// beq cr6,0x83060d20
	if (cr6.eq) goto loc_83060D20;
	// cmpwi cr6,r23,5
	cr6.compare<int32_t>(r23.s32, 5, xer);
	// beq cr6,0x83060d20
	if (cr6.eq) goto loc_83060D20;
	// cmpwi cr6,r23,8
	cr6.compare<int32_t>(r23.s32, 8, xer);
	// beq cr6,0x83060cfc
	if (cr6.eq) goto loc_83060CFC;
	// cmpwi cr6,r23,9
	cr6.compare<int32_t>(r23.s32, 9, xer);
	// bne cr6,0x83060d78
	if (!cr6.eq) goto loc_83060D78;
loc_83060CFC:
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fda4d8
	sub_82FDA4D8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83060d78
	if (!cr0.eq) goto loc_83060D78;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,23
	ctx.r4.s64 = 23;
	// b 0x83060d68
	goto loc_83060D68;
loc_83060D20:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,20(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 20);
	// bl 0x83028200
	sub_83028200(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83060d5c
	if (cr0.eq) goto loc_83060D5C;
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83060d78
	if (!cr0.eq) goto loc_83060D78;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,18
	ctx.r4.s64 = 18;
	// b 0x83060d68
	goto loc_83060D68;
loc_83060D5C:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r4,19
	ctx.r4.s64 = 19;
loc_83060D68:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
loc_83060D78:
	// clrlwi. r11,r18,24
	r11.u64 = r18.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83060ddc
	if (cr0.eq) goto loc_83060DDC;
	// clrlwi. r11,r22,24
	r11.u64 = r22.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83060ddc
	if (!cr0.eq) goto loc_83060DDC;
	// addi r27,r27,2
	r27.s64 = r27.s64 + 2;
	// mr r29,r27
	r29.u64 = r27.u64;
	// b 0x83060b04
	goto loc_83060B04;
loc_83060D94:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
loc_83060DB0:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// b 0x83060de4
	goto loc_83060DE4;
loc_83060DBC:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
	// b 0x83060db0
	goto loc_83060DB0;
loc_83060DDC:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
loc_83060DE4:
	// bl 0x82fdae08
	sub_82FDAE08(ctx, base);
loc_83060DE8:
	// addi r1,r31,464
	ctx.r1.s64 = r31.s64 + 464;
	// b 0x831b0b44
	return;
}

__attribute__((alias("__imp__sub_83060DF0"))) PPC_WEAK_FUNC(sub_83060DF0);
PPC_FUNC_IMPL(__imp__sub_83060DF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-464
	r31.s64 = r12.s64 + -464;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
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

__attribute__((alias("__imp__sub_83060E18"))) PPC_WEAK_FUNC(sub_83060E18);
PPC_FUNC_IMPL(__imp__sub_83060E18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-464
	r31.s64 = r12.s64 + -464;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 92);
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

__attribute__((alias("__imp__sub_83060E50"))) PPC_WEAK_FUNC(sub_83060E50);
PPC_FUNC_IMPL(__imp__sub_83060E50) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r3,28(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// lwz r11,216(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// li r25,0
	r25.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// clrlwi r29,r29,24
	r29.u64 = r29.u32 & 0xFF;
	// b 0x83060eb0
	goto loc_83060EB0;
loc_83060EA0:
	// lhz r11,0(r26)
	r11.u64 = PPC_LOAD_U16(r26.u32 + 0);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(r11.u32, 32, xer);
	// beq cr6,0x83060ebc
	if (cr6.eq) goto loc_83060EBC;
	// addi r26,r26,2
	r26.s64 = r26.s64 + 2;
loc_83060EB0:
	// lhz r11,0(r26)
	r11.u64 = PPC_LOAD_U16(r26.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83060ea0
	if (!cr0.eq) goto loc_83060EA0;
loc_83060EBC:
	// lhz r11,0(r26)
	r11.u64 = PPC_LOAD_U16(r26.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83060ed0
	if (!cr0.eq) goto loc_83060ED0;
	// li r25,1
	r25.s64 = 1;
	// b 0x83060edc
	goto loc_83060EDC;
loc_83060ED0:
	// li r11,0
	r11.s64 = 0;
	// sth r11,0(r26)
	PPC_STORE_U16(r26.u32 + 0, r11.u16);
	// addi r26,r26,2
	r26.s64 = r26.s64 + 2;
loc_83060EDC:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82fda4d8
	sub_82FDA4D8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83060f20
	if (cr0.eq) goto loc_83060F20;
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,112
	ctx.r4.s64 = 112;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
loc_83060F20:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x83060f78
	if (cr6.eq) goto loc_83060F78;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83060f78
	if (!cr0.eq) goto loc_83060F78;
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
loc_83060F78:
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83060f88
	if (!cr0.eq) goto loc_83060F88;
	// mr r27,r26
	r27.u64 = r26.u64;
	// b 0x83060eb0
	goto loc_83060EB0;
loc_83060F88:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82fdae08
	sub_82FDAE08(ctx, base);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_83060F9C"))) PPC_WEAK_FUNC(sub_83060F9C);
PPC_FUNC_IMPL(__imp__sub_83060F9C) {
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

__attribute__((alias("__imp__sub_83060FD0"))) PPC_WEAK_FUNC(sub_83060FD0);
PPC_FUNC_IMPL(__imp__sub_83060FD0) {
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
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// lwz r4,20(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 20);
	// bl 0x83060778
	sub_83060778(ctx, base);
loc_83060FF4:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83061014
	if (cr6.eq) goto loc_83061014;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// li r11,1
	r11.s64 = 1;
	// ble cr6,0x83061018
	if (!cr6.gt) goto loc_83061018;
loc_83061014:
	// li r11,0
	r11.s64 = 0;
loc_83061018:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306121c
	if (cr0.eq) goto loc_8306121C;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x830547f0
	sub_830547F0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x83061084
	if (cr6.eq) goto loc_83061084;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x83061050
	if (!cr6.eq) goto loc_83061050;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x8306106c
	goto loc_8306106C;
loc_83061050:
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x83061084
	if (cr6.eq) goto loc_83061084;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x83061084
	if (!cr6.eq) goto loc_83061084;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
loc_8306106C:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,16(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
loc_83061084:
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
	// lwz r11,36(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// li r24,0
	r24.s64 = 0;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// li r26,0
	r26.s64 = 0;
	// clrlwi r23,r11,24
	r23.u64 = r11.u32 & 0xFF;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r27,0
	r27.s64 = 0;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83060ff4
	if (cr0.eq) goto loc_83060FF4;
loc_830610D0:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83061108
	if (!cr6.eq) goto loc_83061108;
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830611b4
	if (!cr0.eq) goto loc_830611B4;
	// li r24,1
	r24.s64 = 1;
	// b 0x8306115c
	goto loc_8306115C;
loc_83061108:
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// bne cr6,0x83061138
	if (!cr6.eq) goto loc_83061138;
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830611cc
	if (!cr0.eq) goto loc_830611CC;
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r26,1
	r26.s64 = 1;
	// bne 0x830611dc
	if (!cr0.eq) goto loc_830611DC;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8306115c
	if (cr6.eq) goto loc_8306115C;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x83061150
	goto loc_83061150;
loc_83061138:
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// bne cr6,0x8306115c
	if (!cr6.eq) goto loc_8306115C;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8306115c
	if (cr6.eq) goto loc_8306115C;
	// li r5,0
	ctx.r5.s64 = 0;
loc_83061150:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x83060e50
	sub_83060E50(ctx, base);
loc_8306115C:
	// clrlwi. r11,r22,24
	r11.u64 = r22.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83061190
	if (cr0.eq) goto loc_83061190;
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmpwi r5,0
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x83061190
	if (cr0.eq) goto loc_83061190;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83061190:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r27,r3
	cr6.compare<uint32_t>(r27.u32, ctx.r3.u32, xer);
	// blt cr6,0x830610d0
	if (cr6.lt) goto loc_830610D0;
	// b 0x83060ff4
	goto loc_83060FF4;
loc_830611B4:
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// li r4,11
	ctx.r4.s64 = 11;
loc_830611C0:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x83061208
	goto loc_83061208;
loc_830611CC:
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// li r4,111
	ctx.r4.s64 = 111;
	// b 0x830611c0
	goto loc_830611C0;
loc_830611DC:
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,109
	ctx.r4.s64 = 109;
loc_83061208:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
	// b 0x83060ff4
	goto loc_83060FF4;
loc_8306121C:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r4,20(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 20);
	// bl 0x830607b8
	sub_830607B8(ctx, base);
loc_83061228:
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83061248
	if (cr6.eq) goto loc_83061248;
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// li r11,1
	r11.s64 = 1;
	// ble cr6,0x8306124c
	if (!cr6.gt) goto loc_8306124C;
loc_83061248:
	// li r11,0
	r11.s64 = 0;
loc_8306124C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830612a8
	if (cr0.eq) goto loc_830612A8;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x830547f0
	sub_830547F0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmpwi r4,0
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x83061228
	if (cr0.eq) goto loc_83061228;
	// lwz r3,20(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 20);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83061228
	if (!cr0.eq) goto loc_83061228;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
	// b 0x83061228
	goto loc_83061228;
loc_830612A8:
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_830612B0"))) PPC_WEAK_FUNC(sub_830612B0);
PPC_FUNC_IMPL(__imp__sub_830612B0) {
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

__attribute__((alias("__imp__sub_830612D8"))) PPC_WEAK_FUNC(sub_830612D8);
PPC_FUNC_IMPL(__imp__sub_830612D8) {
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

__attribute__((alias("__imp__sub_83061308"))) PPC_WEAK_FUNC(sub_83061308);
PPC_FUNC_IMPL(__imp__sub_83061308) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r26,r29,220
	r26.s64 = r29.s64 + 220;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r26,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r26.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8302cc88
	sub_8302CC88(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r27,r11,-27800
	r27.s64 = r11.s64 + -27800;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,58
	ctx.r4.s64 = 58;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// sthx r9,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + r11.u32, ctx.r9.u16);
	// lwz r25,24(r30)
	r25.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// bl 0x82fda0f8
	sub_82FDA0F8(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r24,r11,-27944
	r24.s64 = r11.s64 + -27944;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r23,r11,-28364
	r23.s64 = r11.s64 + -28364;
	// beq cr6,0x83061430
	if (cr6.eq) goto loc_83061430;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// addi r4,r11,-28120
	ctx.r4.s64 = r11.s64 + -28120;
	// rlwinm r11,r10,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r27,r11,r28
	r27.u64 = r11.u64 + r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830613c0
	if (cr0.eq) goto loc_830613C0;
	// li r4,301
	ctx.r4.s64 = 301;
	// b 0x830613ec
	goto loc_830613EC;
loc_830613C0:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830613f4
	if (cr0.eq) goto loc_830613F4;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830613f4
	if (!cr0.eq) goto loc_830613F4;
	// li r4,303
	ctx.r4.s64 = 303;
loc_830613EC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_830613F4:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x83061414
	if (cr6.eq) goto loc_83061414;
	// lhz r11,0(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83061430
	if (!cr0.eq) goto loc_83061430;
	// lwz r11,212(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 212);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83061430
	if (!cr6.eq) goto loc_83061430;
loc_83061414:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,300
	ctx.r4.s64 = 300;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
loc_83061430:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r4,r11,-28092
	ctx.r4.s64 = r11.s64 + -28092;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83061450
	if (cr0.eq) goto loc_83061450;
	// li r4,302
	ctx.r4.s64 = 302;
	// b 0x8306147c
	goto loc_8306147C;
loc_83061450:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83061484
	if (cr0.eq) goto loc_83061484;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83061484
	if (!cr0.eq) goto loc_83061484;
	// li r4,304
	ctx.r4.s64 = 304;
loc_8306147C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_83061484:
	// lwz r3,192(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 192);
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r29,400
	ctx.r3.s64 = r29.s64 + 400;
	// bl 0x8301ee40
	sub_8301EE40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_830614C0"))) PPC_WEAK_FUNC(sub_830614C0);
PPC_FUNC_IMPL(__imp__sub_830614C0) {
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

__attribute__((alias("__imp__sub_830614F0"))) PPC_WEAK_FUNC(sub_830614F0);
PPC_FUNC_IMPL(__imp__sub_830614F0) {
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
	// addi r31,r1,-336
	r31.s64 = ctx.r1.s64 + -336;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r25,r30,220
	r25.s64 = r30.s64 + 220;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r30,356(r31)
	PPC_STORE_U32(r31.u32 + 356, r30.u32);
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stw r25,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r25.u32);
	// stw r24,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r24.u32);
	// li r11,-1
	r11.s64 = -1;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// sth r11,80(r31)
	PPC_STORE_U16(r31.u32 + 80, r11.u16);
	// bl 0x82fda7f0
	sub_82FDA7F0(ctx, base);
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// li r28,0
	r28.s64 = 0;
	// lwz r10,24(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 24);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r28,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r28.u16);
	// lwz r27,24(r24)
	r27.u64 = PPC_LOAD_U32(r24.u32 + 24);
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r25,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r25.u32);
	// stw r29,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r29.u32);
	// lwz r11,100(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// mr r26,r28
	r26.u64 = r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83061614
	if (cr6.eq) goto loc_83061614;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830615b0
	if (!cr0.eq) goto loc_830615B0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r28,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r28.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
loc_830615B0:
	// addi r4,r31,240
	ctx.r4.s64 = r31.s64 + 240;
	// addi r3,r30,124
	ctx.r3.s64 = r30.s64 + 124;
	// bl 0x82ff6538
	sub_82FF6538(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-27800
	r11.s64 = r11.s64 + -27800;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// sthx r28,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, r28.u16);
	// li r9,4
	ctx.r9.s64 = 4;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// lwz r11,240(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 240);
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// stw r9,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r9.u32);
	// stw r28,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r28.u32);
	// stw r10,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r10.u32);
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
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// b 0x83061628
	goto loc_83061628;
loc_83061614:
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r28,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r28.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
loc_83061628:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x83061794
	if (!cr6.eq) goto loc_83061794;
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// addi r3,r30,124
	ctx.r3.s64 = r30.s64 + 124;
	// bl 0x82ff6538
	sub_82FF6538(ctx, base);
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x8301c3d8
	sub_8301C3D8(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// addi r6,r31,192
	ctx.r6.s64 = r31.s64 + 192;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// sthx r28,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r28.u16);
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// bl 0x8301d860
	sub_8301D860(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83061700
	if (cr0.eq) goto loc_83061700;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x8301c488
	sub_8301C488(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83061700
	if (!cr0.eq) goto loc_83061700;
	// lbz r11,8(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830616cc
	if (cr0.eq) goto loc_830616CC;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x8301c4c0
	sub_8301C4C0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830616cc
	if (cr0.eq) goto loc_830616CC;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r6,99
	ctx.r6.s64 = 99;
	// addi r4,r11,24648
	ctx.r4.s64 = r11.s64 + 24648;
	// li r5,1903
	ctx.r5.s64 = 1903;
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
loc_830616CC:
	// li r3,72
	ctx.r3.s64 = 72;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830616f4
	if (cr0.eq) goto loc_830616F4;
	// addi r4,r31,192
	ctx.r4.s64 = r31.s64 + 192;
	// lwz r5,216(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x8301c1d0
	sub_8301C1D0(ctx, base);
	// b 0x830616f8
	goto loc_830616F8;
loc_830616F4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_830616F8:
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// b 0x8306178c
	goto loc_8306178C;
loc_83061700:
	// lbz r11,8(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830617b8
	if (!cr0.eq) goto loc_830617B8;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r25,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r25.u32);
	// stw r27,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r27.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r28,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r28.u16);
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// bl 0x82fe39e0
	sub_82FE39E0(ctx, base);
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
	// beq 0x83061778
	if (cr0.eq) goto loc_83061778;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r10,24(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r28,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r28.u16);
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// lwz r5,24(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// lwz r6,216(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe0ed0
	sub_82FE0ED0(ctx, base);
	// b 0x8306177c
	goto loc_8306177C;
loc_83061778:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_8306177C:
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
loc_8306178C:
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x8301cf70
	sub_8301CF70(ctx, base);
loc_83061794:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r31,336
	ctx.r1.s64 = r31.s64 + 336;
	// b 0x831b0b68
	return;
loc_830617B8:
	// lis r11,-32234
	r11.s64 = -2112487424;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r6,99
	ctx.r6.s64 = 99;
	// addi r4,r11,24648
	ctx.r4.s64 = r11.s64 + 24648;
	// li r5,1898
	ctx.r5.s64 = 1898;
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
}

__attribute__((alias("__imp__sub_830617E4"))) PPC_WEAK_FUNC(sub_830617E4);
PPC_FUNC_IMPL(__imp__sub_830617E4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-336
	r31.s64 = r12.s64 + -336;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
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

__attribute__((alias("__imp__sub_8306180C"))) PPC_WEAK_FUNC(sub_8306180C);
PPC_FUNC_IMPL(__imp__sub_8306180C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-336
	r31.s64 = r12.s64 + -336;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
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

__attribute__((alias("__imp__sub_83061834"))) PPC_WEAK_FUNC(sub_83061834);
PPC_FUNC_IMPL(__imp__sub_83061834) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-336
	r31.s64 = r12.s64 + -336;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
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

__attribute__((alias("__imp__sub_8306185C"))) PPC_WEAK_FUNC(sub_8306185C);
PPC_FUNC_IMPL(__imp__sub_8306185C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-336
	r31.s64 = r12.s64 + -336;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,356(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 356);
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

__attribute__((alias("__imp__sub_8306188C"))) PPC_WEAK_FUNC(sub_8306188C);
PPC_FUNC_IMPL(__imp__sub_8306188C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-336
	r31.s64 = r12.s64 + -336;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
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

__attribute__((alias("__imp__sub_830618B4"))) PPC_WEAK_FUNC(sub_830618B4);
PPC_FUNC_IMPL(__imp__sub_830618B4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-336
	r31.s64 = r12.s64 + -336;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,356(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 356);
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

__attribute__((alias("__imp__sub_830618F0"))) PPC_WEAK_FUNC(sub_830618F0);
PPC_FUNC_IMPL(__imp__sub_830618F0) {
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
	// addi r31,r1,-752
	r31.s64 = ctx.r1.s64 + -752;
	// stwu r1,-752(r1)
	ea = -752 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// lwz r3,524(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 524);
	// stw r30,772(r31)
	PPC_STORE_U32(r31.u32 + 772, r30.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,524(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 524);
	// lwz r10,104(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// stw r10,88(r11)
	PPC_STORE_U32(r11.u32 + 88, ctx.r10.u32);
	// lbz r11,11(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 11);
	// lwz r10,524(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 524);
	// stb r11,84(r10)
	PPC_STORE_U8(ctx.r10.u32 + 84, r11.u8);
	// lwz r11,176(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// lwz r10,524(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 524);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, r11.u32);
	// lbz r11,17(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 17);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8306196c
	if (cr0.eq) goto loc_8306196C;
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
loc_8306196C:
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
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
	// bne 0x830619d4
	if (!cr0.eq) goto loc_830619D4;
	// lbz r11,17(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 17);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830619cc
	if (cr0.eq) goto loc_830619CC;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830619cc
	if (cr0.eq) goto loc_830619CC;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r6,158
	ctx.r6.s64 = 158;
	// addi r4,r11,24648
	ctx.r4.s64 = r11.s64 + 24648;
	// li r5,1929
	ctx.r5.s64 = 1929;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82fd93a0
	sub_82FD93A0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// addi r4,r11,-8860
	ctx.r4.s64 = r11.s64 + -8860;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830619CC:
	// lwz r11,524(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 524);
	// stw r11,168(r30)
	PPC_STORE_U32(r30.u32 + 168, r11.u32);
loc_830619D4:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,216(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x8306e810
	sub_8306E810(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82fdc818
	sub_82FDC818(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82fdc7e8
	sub_82FDC7E8(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// lwz r4,100(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// bl 0x8306e538
	sub_8306E538(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
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
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
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
	// lbz r11,260(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 260);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83061a90
	if (cr0.eq) goto loc_83061A90;
	// lbz r11,11(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 11);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83061a90
	if (cr0.eq) goto loc_83061A90;
	// li r4,297
	ctx.r4.s64 = 297;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_83061A90:
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x83159448
	sub_83159448(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83061c08
	if (cr0.eq) goto loc_83061C08;
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
	// beq 0x83061c08
	if (cr0.eq) goto loc_83061C08;
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
	// beq 0x83061ae0
	if (cr0.eq) goto loc_83061AE0;
	// lwz r4,180(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// bl 0x8305a378
	sub_8305A378(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// b 0x83061ae4
	goto loc_83061AE4;
loc_83061AE0:
	// li r27,0
	r27.s64 = 0;
loc_83061AE4:
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
	// addi r3,r31,352
	ctx.r3.s64 = r31.s64 + 352;
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
	// beq 0x83061bc8
	if (cr0.eq) goto loc_83061BC8;
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
loc_83061BC8:
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83061bd8
	if (cr0.eq) goto loc_83061BD8;
	// lwz r3,176(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// bl 0x82fef530
	sub_82FEF530(ctx, base);
loc_83061BD8:
	// lwz r11,112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83061bf0
	if (cr0.eq) goto loc_83061BF0;
	// lwz r3,176(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// bl 0x82fef6f8
	sub_82FEF6F8(ctx, base);
	// stw r3,568(r30)
	PPC_STORE_U32(r30.u32 + 568, ctx.r3.u32);
loc_83061BF0:
	// addi r3,r31,352
	ctx.r3.s64 = r31.s64 + 352;
	// bl 0x830813d0
	sub_830813D0(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x8306eb48
	sub_8306EB48(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// b 0x83061c14
	goto loc_83061C14;
loc_83061C08:
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x8306eb48
	sub_8306EB48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83061C14:
	// addi r1,r31,752
	ctx.r1.s64 = r31.s64 + 752;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_83061C1C"))) PPC_WEAK_FUNC(sub_83061C1C);
PPC_FUNC_IMPL(__imp__sub_83061C1C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-752
	r31.s64 = r12.s64 + -752;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
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

__attribute__((alias("__imp__sub_83061C44"))) PPC_WEAK_FUNC(sub_83061C44);
PPC_FUNC_IMPL(__imp__sub_83061C44) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-752
	r31.s64 = r12.s64 + -752;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,772(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 772);
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

__attribute__((alias("__imp__sub_83061C74"))) PPC_WEAK_FUNC(sub_83061C74);
PPC_FUNC_IMPL(__imp__sub_83061C74) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-752
	r31.s64 = r12.s64 + -752;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,352
	ctx.r3.s64 = r31.s64 + 352;
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

__attribute__((alias("__imp__sub_83061CA8"))) PPC_WEAK_FUNC(sub_83061CA8);
PPC_FUNC_IMPL(__imp__sub_83061CA8) {
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
	// bne 0x83061d04
	if (!cr0.eq) goto loc_83061D04;
	// li r3,0
	ctx.r3.s64 = 0;
loc_83061CFC:
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x831b0b70
	return;
loc_83061D04:
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
loc_83061D20:
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
	// bne 0x83061d6c
	if (!cr0.eq) goto loc_83061D6C;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r6,47
	ctx.r6.s64 = 47;
	// addi r4,r11,24648
	ctx.r4.s64 = r11.s64 + 24648;
	// li r5,2044
	ctx.r5.s64 = 2044;
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
loc_83061D6C:
	// lhz r11,86(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 86);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x83061db4
	if (!cr6.eq) goto loc_83061DB4;
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
	// bne cr6,0x83061d98
	if (!cr6.eq) goto loc_83061D98;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83061cfc
	goto loc_83061CFC;
loc_83061D98:
	// ble cr6,0x83061db4
	if (!cr6.gt) goto loc_83061DB4;
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
	// b 0x83061cfc
	goto loc_83061CFC;
loc_83061DB4:
	// stb r28,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r28.u8);
	// cmplwi cr6,r3,38
	cr6.compare<uint32_t>(ctx.r3.u32, 38, xer);
	// bne cr6,0x83061df8
	if (!cr6.eq) goto loc_83061DF8;
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
	// beq cr6,0x83061ebc
	if (cr6.eq) goto loc_83061EBC;
	// mr r29,r28
	r29.u64 = r28.u64;
	// b 0x83061d20
	goto loc_83061D20;
loc_83061DF8:
	// cmplwi cr6,r3,55296
	cr6.compare<uint32_t>(ctx.r3.u32, 55296, xer);
	// blt cr6,0x83061e2c
	if (cr6.lt) goto loc_83061E2C;
	// cmplwi cr6,r3,56319
	cr6.compare<uint32_t>(ctx.r3.u32, 56319, xer);
	// bgt cr6,0x83061e2c
	if (cr6.gt) goto loc_83061E2C;
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83061e24
	if (cr0.eq) goto loc_83061E24;
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x83061ebc
	goto loc_83061EBC;
loc_83061E24:
	// li r29,1
	r29.s64 = 1;
	// b 0x83061ebc
	goto loc_83061EBC;
loc_83061E2C:
	// cmplwi cr6,r3,56320
	cr6.compare<uint32_t>(ctx.r3.u32, 56320, xer);
	// blt cr6,0x83061e54
	if (cr6.lt) goto loc_83061E54;
	// cmplwi cr6,r3,57343
	cr6.compare<uint32_t>(ctx.r3.u32, 57343, xer);
	// bgt cr6,0x83061e54
	if (cr6.gt) goto loc_83061E54;
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83061eb8
	if (!cr0.eq) goto loc_83061EB8;
	// li r4,282
	ctx.r4.s64 = 282;
loc_83061E48:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// b 0x83061eb4
	goto loc_83061EB4;
loc_83061E54:
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83061e64
	if (cr0.eq) goto loc_83061E64;
	// li r4,249
	ctx.r4.s64 = 249;
	// b 0x83061e48
	goto loc_83061E48;
loc_83061E64:
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
	// bne 0x83061eb8
	if (!cr0.eq) goto loc_83061EB8;
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
loc_83061EB4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83061EB8:
	// mr r29,r28
	r29.u64 = r28.u64;
loc_83061EBC:
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83061ed8
	if (cr0.eq) goto loc_83061ED8;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83061ED8:
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
	// beq 0x83061d20
	if (cr0.eq) goto loc_83061D20;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// sth r28,82(r31)
	PPC_STORE_U16(r31.u32 + 82, r28.u16);
	// b 0x83061d20
	goto loc_83061D20;
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
	// b 0x83061d20
	goto loc_83061D20;
}

__attribute__((alias("__imp__sub_83061F28"))) PPC_WEAK_FUNC(sub_83061F28);
PPC_FUNC_IMPL(__imp__sub_83061F28) {
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
	// lis r3,-31994
	ctx.r3.s64 = -2096758784;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,7944
	ctx.r3.s64 = ctx.r3.s64 + 7944;
	// stb r28,81(r31)
	PPC_STORE_U8(r31.u32 + 81, r28.u8);
	// stb r28,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r28.u8);
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83061F58"))) PPC_WEAK_FUNC(sub_83061F58);
PPC_FUNC_IMPL(__imp__sub_83061F58) {
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
	// addi r31,r1,-272
	r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r25,0
	r25.s64 = 0;
	// stw r29,292(r31)
	PPC_STORE_U32(r31.u32 + 292, r29.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r20,308(r31)
	PPC_STORE_U32(r31.u32 + 308, r20.u32);
	// stw r21,316(r31)
	PPC_STORE_U32(r31.u32 + 316, r21.u32);
	// beq cr6,0x83061fa0
	if (cr6.eq) goto loc_83061FA0;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// b 0x83061fa4
	goto loc_83061FA4;
loc_83061FA0:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_83061FA4:
	// lwz r10,24(r21)
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + 24);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// addi r3,r29,124
	ctx.r3.s64 = r29.s64 + 124;
	// stw r25,4(r21)
	PPC_STORE_U32(r21.u32 + 4, r25.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// sth r25,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r25.u16);
	// bl 0x82ff62e0
	sub_82FF62E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83061fd4
	if (!cr0.eq) goto loc_83061FD4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_83061FCC:
	// addi r1,r31,272
	ctx.r1.s64 = r31.s64 + 272;
	// b 0x831b0b58
	return;
loc_83061FD4:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r11,132(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 132);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// ori r10,r10,32808
	ctx.r10.u64 = ctx.r10.u64 | 32808;
	// lwzx r22,r11,r10
	r22.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// stw r22,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r22.u32);
	// beq cr6,0x83061ff8
	if (cr6.eq) goto loc_83061FF8;
	// lbz r11,17(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 17);
	// b 0x83061ffc
	goto loc_83061FFC;
loc_83061FF8:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_83061FFC:
	// mr r23,r11
	r23.u64 = r11.u64;
	// sth r25,86(r31)
	PPC_STORE_U16(r31.u32 + 86, r25.u16);
	// li r26,1
	r26.s64 = 1;
	// mr r24,r25
	r24.u64 = r25.u64;
	// mr r27,r25
	r27.u64 = r25.u64;
	// stb r23,82(r31)
	PPC_STORE_U8(r31.u32 + 82, r23.u8);
	// stw r26,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r26.u32);
	// stb r24,81(r31)
	PPC_STORE_U8(r31.u32 + 81, r24.u8);
loc_8306201C:
	// lis r11,2
	r11.s64 = 131072;
	// ori r28,r11,32852
	r28.u64 = r11.u64 | 32852;
loc_83062024:
	// addi r30,r29,124
	r30.s64 = r29.s64 + 124;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// sth r4,84(r31)
	PPC_STORE_U16(r31.u32 + 84, ctx.r4.u16);
	// clrlwi. r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x83062078
	if (!cr0.eq) goto loc_83062078;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// lwz r7,216(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 216);
	// li r6,47
	ctx.r6.s64 = 47;
	// addi r4,r11,24648
	ctx.r4.s64 = r11.s64 + 24648;
	// li r5,2200
	ctx.r5.s64 = 2200;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82fefc90
	sub_82FEFC90(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// addi r4,r11,-8072
	ctx.r4.s64 = r11.s64 + -8072;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83062078:
	// lhz r11,88(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 88);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x830620c0
	if (!cr6.eq) goto loc_830620C0;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lwz r11,132(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 132);
	// ori r9,r9,32808
	ctx.r9.u64 = ctx.r9.u64 | 32808;
	// lwzx r11,r11,r9
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// cmplw cr6,r22,r11
	cr6.compare<uint32_t>(r22.u32, r11.u32, xer);
	// bne cr6,0x830620a4
	if (!cr6.eq) goto loc_830620A4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83061fcc
	goto loc_83061FCC;
loc_830620A4:
	// ble cr6,0x830620c0
	if (!cr6.gt) goto loc_830620C0;
	// li r4,231
	ctx.r4.s64 = 231;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83061fcc
	goto loc_83061FCC;
loc_830620C0:
	// stb r25,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r25.u8);
	// cmplwi cr6,r10,38
	cr6.compare<uint32_t>(ctx.r10.u32, 38, xer);
	// bne cr6,0x83062104
	if (!cr6.eq) goto loc_83062104;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// addi r6,r31,86
	ctx.r6.s64 = r31.s64 + 86;
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
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
	// beq cr6,0x8306212c
	if (cr6.eq) goto loc_8306212C;
	// mr r27,r25
	r27.u64 = r25.u64;
	// b 0x83062024
	goto loc_83062024;
loc_83062104:
	// cmplwi cr6,r10,55296
	cr6.compare<uint32_t>(ctx.r10.u32, 55296, xer);
	// blt cr6,0x8306221c
	if (cr6.lt) goto loc_8306221C;
	// cmplwi cr6,r10,56319
	cr6.compare<uint32_t>(ctx.r10.u32, 56319, xer);
	// bgt cr6,0x8306221c
	if (cr6.gt) goto loc_8306221C;
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83062214
	if (cr0.eq) goto loc_83062214;
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8306212C:
	// lhz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U16(r31.u32 + 84);
loc_83062130:
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8306216c
	if (!cr0.eq) goto loc_8306216C;
	// clrlwi r11,r4,16
	r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(r11.u32, 60, xer);
	// bne cr6,0x8306216c
	if (!cr6.eq) goto loc_8306216C;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// li r4,248
	ctx.r4.s64 = 248;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lhz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U16(r31.u32 + 84);
loc_8306216C:
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x830622bc
	if (!cr6.eq) goto loc_830622BC;
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830621e8
	if (!cr0.eq) goto loc_830621E8;
	// clrlwi r11,r4,16
	r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(r11.u32, 9, xer);
	// beq cr6,0x830621a0
	if (cr6.eq) goto loc_830621A0;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// beq cr6,0x830621a0
	if (cr6.eq) goto loc_830621A0;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(r11.u32, 13, xer);
	// bne cr6,0x830621e8
	if (!cr6.eq) goto loc_830621E8;
loc_830621A0:
	// lbz r11,14(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 14);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830621e0
	if (cr0.eq) goto loc_830621E0;
	// lbz r11,16(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830621e0
	if (cr0.eq) goto loc_830621E0;
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830621e0
	if (cr0.eq) goto loc_830621E0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,168(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 168);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// li r4,83
	ctx.r4.s64 = 83;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_830621E0:
	// li r4,32
	ctx.r4.s64 = 32;
	// sth r4,84(r31)
	PPC_STORE_U16(r31.u32 + 84, ctx.r4.u16);
loc_830621E8:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lhz r4,86(r31)
	ctx.r4.u64 = PPC_LOAD_U16(r31.u32 + 86);
	// mr. r11,r4
	r11.u64 = ctx.r4.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83062024
	if (cr0.eq) goto loc_83062024;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// sth r25,86(r31)
	PPC_STORE_U16(r31.u32 + 86, r25.u16);
	// b 0x83062024
	goto loc_83062024;
loc_83062214:
	// li r27,1
	r27.s64 = 1;
	// b 0x83062130
	goto loc_83062130;
loc_8306221C:
	// cmplwi cr6,r10,56320
	cr6.compare<uint32_t>(ctx.r10.u32, 56320, xer);
	// blt cr6,0x83062244
	if (cr6.lt) goto loc_83062244;
	// cmplwi cr6,r10,57343
	cr6.compare<uint32_t>(ctx.r10.u32, 57343, xer);
	// bgt cr6,0x83062244
	if (cr6.gt) goto loc_83062244;
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830622b4
	if (!cr0.eq) goto loc_830622B4;
	// li r4,282
	ctx.r4.s64 = 282;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// b 0x830622ac
	goto loc_830622AC;
loc_83062244:
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83062260
	if (cr0.eq) goto loc_83062260;
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lhz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U16(r31.u32 + 84);
loc_83062260:
	// lwz r11,132(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 132);
	// clrlwi r3,r4,16
	ctx.r3.u64 = ctx.r4.u32 & 0xFFFF;
	// lwzx r11,r11,r28
	r11.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// lbzx r11,r11,r3
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830622b4
	if (!cr0.eq) goto loc_830622B4;
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
	// addi r6,r31,112
	ctx.r6.s64 = r31.s64 + 112;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// li r4,218
	ctx.r4.s64 = 218;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
loc_830622AC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lhz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U16(r31.u32 + 84);
loc_830622B4:
	// mr r27,r25
	r27.u64 = r25.u64;
	// b 0x83062130
	goto loc_83062130;
loc_830622BC:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// bne cr6,0x83062324
	if (!cr6.eq) goto loc_83062324;
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830622dc
	if (cr0.eq) goto loc_830622DC;
	// clrlwi r11,r4,16
	r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(r11.u32, 32, xer);
	// bne cr6,0x830622f4
	if (!cr6.eq) goto loc_830622F4;
loc_830622DC:
	// lwz r11,132(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 132);
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// lwzx r11,r11,r28
	r11.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83062024
	if (!cr0.eq) goto loc_83062024;
loc_830622F4:
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83062310
	if (cr0.eq) goto loc_83062310;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lhz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U16(r31.u32 + 84);
loc_83062310:
	// li r26,1
	r26.s64 = 1;
	// stw r26,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r26.u32);
loc_83062318:
	// li r24,1
	r24.s64 = 1;
	// stb r24,81(r31)
	PPC_STORE_U8(r31.u32 + 81, r24.u8);
	// b 0x830621e8
	goto loc_830621E8;
loc_83062324:
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(r26.s32, 1, xer);
	// bne cr6,0x830621e8
	if (!cr6.eq) goto loc_830621E8;
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// beq cr6,0x83062358
	if (cr6.eq) goto loc_83062358;
	// lwz r11,132(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 132);
	// lwzx r11,r11,r28
	r11.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83062318
	if (cr0.eq) goto loc_83062318;
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83062318
	if (!cr0.eq) goto loc_83062318;
loc_83062358:
	// mr r26,r25
	r26.u64 = r25.u64;
	// lbz r11,14(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 14);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r26,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r26.u32);
	// beq 0x83062024
	if (cr0.eq) goto loc_83062024;
	// lbz r11,16(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83062024
	if (cr0.eq) goto loc_83062024;
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83062024
	if (cr0.eq) goto loc_83062024;
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830623b4
	if (cr0.eq) goto loc_830623B4;
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// bne cr6,0x830623b4
	if (!cr6.eq) goto loc_830623B4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff6188
	sub_82FF6188(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// lwzx r11,r11,r28
	r11.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83062024
	if (cr0.eq) goto loc_83062024;
loc_830623B4:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,168(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 168);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// li r4,83
	ctx.r4.s64 = 83;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x83062024
	goto loc_83062024;
	// lwz r29,292(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// lwz r21,316(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// li r25,0
	r25.s64 = 0;
	// lwz r20,308(r31)
	r20.u64 = PPC_LOAD_U32(r31.u32 + 308);
	// lwz r22,100(r31)
	r22.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lbz r23,82(r31)
	r23.u64 = PPC_LOAD_U8(r31.u32 + 82);
	// lwz r26,92(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// lbz r24,81(r31)
	r24.u64 = PPC_LOAD_U8(r31.u32 + 81);
	// lbz r27,83(r31)
	r27.u64 = PPC_LOAD_U8(r31.u32 + 83);
	// b 0x8306201c
	goto loc_8306201C;
}

__attribute__((alias("__imp__sub_83062408"))) PPC_WEAK_FUNC(sub_83062408);
PPC_FUNC_IMPL(__imp__sub_83062408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r25{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-272
	r31.s64 = r12.s64 + -272;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	r25.s64 = 0;
	// lis r3,-31994
	ctx.r3.s64 = -2096758784;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,9176
	ctx.r3.s64 = ctx.r3.s64 + 9176;
	// stb r25,83(r31)
	PPC_STORE_U8(r31.u32 + 83, r25.u8);
	// stb r25,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r25.u8);
	// b 0x831b0b58
	return;
}

__attribute__((alias("__imp__sub_83062430"))) PPC_WEAK_FUNC(sub_83062430);
PPC_FUNC_IMPL(__imp__sub_83062430) {
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
	// bne 0x83062460
	if (!cr0.eq) goto loc_83062460;
	// lwz r3,528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 528);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83062560
	if (cr0.eq) goto loc_83062560;
loc_83062460:
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
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// stw r3,476(r31)
	PPC_STORE_U32(r31.u32 + 476, ctx.r3.u32);
	// bne cr6,0x830624dc
	if (!cr6.eq) goto loc_830624DC;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
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
	// bne 0x830624dc
	if (!cr0.eq) goto loc_830624DC;
	// lbz r11,17(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 17);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830624d4
	if (cr0.eq) goto loc_830624D4;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// lwz r7,216(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 216);
	// li r6,158
	ctx.r6.s64 = 158;
	// addi r4,r11,24648
	ctx.r4.s64 = r11.s64 + 24648;
	// li r5,3048
	ctx.r5.s64 = 3048;
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
loc_830624D4:
	// lwz r11,524(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 524);
	// b 0x83062540
	goto loc_83062540;
loc_830624DC:
	// lwz r11,476(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 476);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83062544
	if (!cr6.eq) goto loc_83062544;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83062544
	if (!cr0.eq) goto loc_83062544;
	// lbz r11,17(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 17);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8306253c
	if (cr0.eq) goto loc_8306253C;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// lwz r7,216(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 216);
	// li r6,44
	ctx.r6.s64 = 44;
	// addi r4,r11,24648
	ctx.r4.s64 = r11.s64 + 24648;
	// li r5,3055
	ctx.r5.s64 = 3055;
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
loc_8306253C:
	// lwz r11,520(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 520);
loc_83062540:
	// stw r11,168(r31)
	PPC_STORE_U32(r31.u32 + 168, r11.u32);
loc_83062544:
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
loc_83062560:
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

__attribute__((alias("__imp__sub_83062580"))) PPC_WEAK_FUNC(sub_83062580);
PPC_FUNC_IMPL(__imp__sub_83062580) {
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
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r5,4(r22)
	ctx.r5.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// cntlzw r11,r5
	r11.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306288c
	if (!cr0.eq) goto loc_8306288C;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// li r23,0
	r23.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8306284c
	if (cr0.eq) goto loc_8306284C;
	// lwz r10,24(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 24);
	// rlwinm r11,r5,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r30,400
	ctx.r3.s64 = r30.s64 + 400;
	// sthx r23,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r23.u16);
	// lwz r27,24(r22)
	r27.u64 = PPC_LOAD_U32(r22.u32 + 24);
	// lwz r24,4(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// bl 0x8301e5d8
	sub_8301E5D8(ctx, base);
	// lwz r11,184(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r28,2
	r28.s64 = 2;
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
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83062650
	if (!cr6.eq) goto loc_83062650;
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
	// bne 0x8306266c
	if (!cr0.eq) goto loc_8306266C;
	// bl 0x83020b18
	sub_83020B18(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8306266c
	if (cr0.eq) goto loc_8306266C;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x83062638
	if (!cr6.eq) goto loc_83062638;
	// li r28,1
	r28.s64 = 1;
	// b 0x8306266c
	goto loc_8306266C;
loc_83062638:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8306266c
	if (!cr6.eq) goto loc_8306266C;
loc_83062640:
	// li r4,22
	ctx.r4.s64 = 22;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// bl 0x8301f3f0
	sub_8301F3F0(ctx, base);
	// b 0x83062880
	goto loc_83062880;
loc_83062650:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x83062640
	if (cr0.eq) goto loc_83062640;
loc_8306266C:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82ffa048
	sub_82FFA048(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830627c0
	if (cr0.eq) goto loc_830627C0;
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(r28.s32, 1, xer);
	// bne cr6,0x830626b0
	if (!cr6.eq) goto loc_830626B0;
	// lwz r11,92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83062880
	if (cr6.eq) goto loc_83062880;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// b 0x83062874
	goto loc_83062874;
loc_830626B0:
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(r28.s32, 2, xer);
	// bne cr6,0x83062880
	if (!cr6.eq) goto loc_83062880;
	// lwz r11,476(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x830626dc
	if (cr6.eq) goto loc_830626DC;
loc_830626C4:
	// lwz r11,92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83062880
	if (cr6.eq) goto loc_83062880;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// b 0x83062868
	goto loc_83062868;
loc_830626DC:
	// lbz r11,24(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 24);
	// lwz r25,168(r30)
	r25.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83062754
	if (cr0.eq) goto loc_83062754;
	// lwz r26,40(r25)
	r26.u64 = PPC_LOAD_U32(r25.u32 + 40);
	// cmplwi r26,0
	cr0.compare<uint32_t>(r26.u32, 0, xer);
	// beq 0x83062754
	if (cr0.eq) goto loc_83062754;
	// lhz r11,10(r26)
	r11.u64 = PPC_LOAD_U16(r26.u32 + 10);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83062754
	if (cr0.eq) goto loc_83062754;
	// addi r28,r30,220
	r28.s64 = r30.s64 + 220;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8305c9e0
	sub_8305C9E0(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r23,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r23.u16);
	// lwz r27,24(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r24,4(r29)
	r24.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_83062750:
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
loc_83062754:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r25,48
	ctx.r3.s64 = r25.s64 + 48;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8306278c
	if (cr0.eq) goto loc_8306278C;
	// lbz r11,20(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8306278c
	if (cr0.eq) goto loc_8306278C;
	// lwz r11,532(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 532);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x83062790
	if (!cr6.eq) goto loc_83062790;
loc_8306278C:
	// mr r11,r23
	r11.u64 = r23.u64;
loc_83062790:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830626c4
	if (cr0.eq) goto loc_830626C4;
	// lwz r11,532(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 532);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830626c4
	if (cr6.eq) goto loc_830626C4;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r30,488
	ctx.r3.s64 = r30.s64 + 488;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// b 0x830626c4
	goto loc_830626C4;
loc_830627C0:
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(r28.s32, 2, xer);
	// bne cr6,0x83062640
	if (!cr6.eq) goto loc_83062640;
	// lwz r11,476(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x830626c4
	if (!cr6.eq) goto loc_830626C4;
	// lbz r11,24(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 24);
	// lwz r25,168(r30)
	r25.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83062754
	if (cr0.eq) goto loc_83062754;
	// lwz r26,40(r25)
	r26.u64 = PPC_LOAD_U32(r25.u32 + 40);
	// cmplwi r26,0
	cr0.compare<uint32_t>(r26.u32, 0, xer);
	// beq 0x83062754
	if (cr0.eq) goto loc_83062754;
	// lhz r11,10(r26)
	r11.u64 = PPC_LOAD_U16(r26.u32 + 10);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83062754
	if (cr0.eq) goto loc_83062754;
	// addi r28,r30,220
	r28.s64 = r30.s64 + 220;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8305c9e0
	sub_8305C9E0(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r23,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r23.u16);
	// lwz r27,24(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r24,4(r29)
	r24.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// b 0x83062750
	goto loc_83062750;
loc_8306284C:
	// lwz r11,92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83062880
	if (cr6.eq) goto loc_83062880;
	// lwz r10,24(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 24);
	// rlwinm r11,r5,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r23,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r23.u16);
	// lwz r4,24(r22)
	ctx.r4.u64 = PPC_LOAD_U32(r22.u32 + 24);
loc_83062868:
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
loc_83062874:
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83062880:
	// lwz r11,24(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 24);
	// stw r23,4(r22)
	PPC_STORE_U32(r22.u32 + 4, r23.u32);
	// sth r23,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r23.u16);
loc_8306288C:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_83062894"))) PPC_WEAK_FUNC(sub_83062894);
PPC_FUNC_IMPL(__imp__sub_83062894) {
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

__attribute__((alias("__imp__sub_830628BC"))) PPC_WEAK_FUNC(sub_830628BC);
PPC_FUNC_IMPL(__imp__sub_830628BC) {
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

__attribute__((alias("__imp__sub_830628F0"))) PPC_WEAK_FUNC(sub_830628F0);
PPC_FUNC_IMPL(__imp__sub_830628F0) {
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
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// lwz r5,216(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// stw r30,932(r31)
	PPC_STORE_U32(r31.u32 + 932, r30.u32);
	// bl 0x8305b610
	sub_8305B610(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x8305b720
	sub_8305B720(ctx, base);
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// lwz r3,176(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// bl 0x82fef000
	sub_82FEF000(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x8305b0d8
	sub_8305B0D8(ctx, base);
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// beq cr6,0x83062a2c
	if (cr6.eq) goto loc_83062A2C;
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
	// beq 0x83062a2c
	if (cr0.eq) goto loc_83062A2C;
	// lwz r11,172(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 172);
	// li r24,1
	r24.s64 = 1;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x830629a0
	if (!cr6.eq) goto loc_830629A0;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830629a0
	if (!cr0.eq) goto loc_830629A0;
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
loc_830629A0:
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
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
	// bne 0x830629fc
	if (!cr0.eq) goto loc_830629FC;
	// lbz r11,17(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 17);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830629f4
	if (cr0.eq) goto loc_830629F4;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r6,158
	ctx.r6.s64 = 158;
	// addi r4,r11,24648
	ctx.r4.s64 = r11.s64 + 24648;
	// li r5,1824
	ctx.r5.s64 = 1824;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82fd93a0
	sub_82FD93A0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// addi r4,r11,-8860
	ctx.r4.s64 = r11.s64 + -8860;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830629F4:
	// lwz r11,524(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 524);
	// stw r11,168(r30)
	PPC_STORE_U32(r30.u32 + 168, r11.u32);
loc_830629FC:
	// lwz r11,476(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83063044
	if (!cr6.eq) goto loc_83063044;
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
	// b 0x83063044
	goto loc_83063044;
loc_83062A2C:
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
	// stw r22,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r22.u32);
	// stw r21,176(r31)
	PPC_STORE_U32(r31.u32 + 176, r21.u32);
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
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// stw r22,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r22.u32);
	// stw r25,168(r31)
	PPC_STORE_U32(r31.u32 + 168, r25.u32);
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// mr r27,r28
	r27.u64 = r28.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83062b70
	if (cr0.eq) goto loc_83062B70;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
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
	// bne 0x83062b10
	if (!cr0.eq) goto loc_83062B10;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r28,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r28.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
loc_83062B10:
	// addi r4,r31,256
	ctx.r4.s64 = r31.s64 + 256;
	// addi r3,r30,124
	ctx.r3.s64 = r30.s64 + 124;
	// bl 0x82ff6538
	sub_82FF6538(ctx, base);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r9,24(r25)
	ctx.r9.u64 = PPC_LOAD_U32(r25.u32 + 24);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-27800
	r11.s64 = r11.s64 + -27800;
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// sthx r28,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, r28.u16);
	// lwz r10,24(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 24);
	// stw r11,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r11.u32);
	// lwz r11,256(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 256);
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// stw r28,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r28.u32);
	// stw r26,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r26.u32);
	// stw r10,152(r31)
	PPC_STORE_U32(r31.u32 + 152, ctx.r10.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r11.u32);
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
	// b 0x83062b84
	goto loc_83062B84;
loc_83062B70:
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r28,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r28.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
loc_83062B84:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x83062cf0
	if (!cr6.eq) goto loc_83062CF0;
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
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// lwz r10,24(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 24);
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
	// lwz r5,24(r25)
	ctx.r5.u64 = PPC_LOAD_U32(r25.u32 + 24);
	// bl 0x8301d860
	sub_8301D860(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83062c5c
	if (cr0.eq) goto loc_83062C5C;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x8301c488
	sub_8301C488(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83062c5c
	if (!cr0.eq) goto loc_83062C5C;
	// lbz r11,8(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83062c28
	if (cr0.eq) goto loc_83062C28;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x8301c4c0
	sub_8301C4C0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83062c28
	if (cr0.eq) goto loc_83062C28;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r6,99
	ctx.r6.s64 = 99;
	// addi r4,r11,24648
	ctx.r4.s64 = r11.s64 + 24648;
	// li r5,1721
	ctx.r5.s64 = 1721;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82fe1f38
	sub_82FE1F38(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// addi r4,r11,-8356
	ctx.r4.s64 = r11.s64 + -8356;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_83062C28:
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
	// beq 0x83062c50
	if (cr0.eq) goto loc_83062C50;
	// addi r4,r31,208
	ctx.r4.s64 = r31.s64 + 208;
	// lwz r5,216(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x8301c1d0
	sub_8301C1D0(ctx, base);
	// b 0x83062c54
	goto loc_83062C54;
loc_83062C50:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_83062C54:
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// b 0x83062ce8
	goto loc_83062CE8;
loc_83062C5C:
	// lbz r11,8(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83062eb8
	if (!cr0.eq) goto loc_83062EB8;
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
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// lwz r10,24(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 24);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r28,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r28.u16);
	// lwz r3,24(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 24);
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
	// beq 0x83062cd4
	if (cr0.eq) goto loc_83062CD4;
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
	// b 0x83062cd8
	goto loc_83062CD8;
loc_83062CD4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_83062CD8:
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
loc_83062CE8:
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x8301cf70
	sub_8301CF70(ctx, base);
loc_83062CF0:
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
	// beq 0x83062d6c
	if (cr0.eq) goto loc_83062D6C;
	// lbz r11,11(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 11);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83062d6c
	if (cr0.eq) goto loc_83062D6C;
	// li r4,297
	ctx.r4.s64 = 297;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_83062D6C:
	// addi r3,r31,272
	ctx.r3.s64 = r31.s64 + 272;
	// bl 0x83159448
	sub_83159448(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83063018
	if (cr0.eq) goto loc_83063018;
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
	// beq 0x83063018
	if (cr0.eq) goto loc_83063018;
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
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83062e08
	if (!cr0.eq) goto loc_83062E08;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83062ddc
	if (!cr0.eq) goto loc_83062DDC;
	// lwz r11,172(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 172);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x83062df8
	if (!cr6.eq) goto loc_83062DF8;
loc_83062DDC:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,69
	ctx.r4.s64 = 69;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
loc_83062DF8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,176(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// bl 0x82feeed8
	sub_82FEEED8(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
loc_83062E08:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// beq cr6,0x83062e2c
	if (cr6.eq) goto loc_83062E2C;
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
	// bne 0x83063018
	if (!cr0.eq) goto loc_83063018;
loc_83062E2C:
	// lwz r11,172(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 172);
	// li r24,1
	r24.s64 = 1;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x83062e64
	if (!cr6.eq) goto loc_83062E64;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83062e64
	if (!cr0.eq) goto loc_83062E64;
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
loc_83062E64:
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
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
	// bne 0x83062eec
	if (!cr0.eq) goto loc_83062EEC;
	// lbz r11,17(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 17);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83062ee4
	if (cr0.eq) goto loc_83062EE4;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r6,158
	ctx.r6.s64 = 158;
	// addi r4,r11,24648
	ctx.r4.s64 = r11.s64 + 24648;
	// li r5,1771
	ctx.r5.s64 = 1771;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82fd93a0
	sub_82FD93A0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// addi r4,r11,-8860
	ctx.r4.s64 = r11.s64 + -8860;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_83062EB8:
	// lis r11,-32234
	r11.s64 = -2112487424;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r6,99
	ctx.r6.s64 = 99;
	// addi r4,r11,24648
	ctx.r4.s64 = r11.s64 + 24648;
	// li r5,1716
	ctx.r5.s64 = 1716;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82fe1f38
	sub_82FE1F38(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// addi r4,r11,-8356
	ctx.r4.s64 = r11.s64 + -8356;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_83062EE4:
	// lwz r11,524(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 524);
	// stw r11,168(r30)
	PPC_STORE_U32(r30.u32 + 168, r11.u32);
loc_83062EEC:
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
	// beq 0x83062f14
	if (cr0.eq) goto loc_83062F14;
	// lwz r4,180(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// bl 0x8305a378
	sub_8305A378(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x83062f18
	goto loc_83062F18;
loc_83062F14:
	// mr r29,r28
	r29.u64 = r28.u64;
loc_83062F18:
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
	// lwz r26,0(r28)
	r26.u64 = PPC_LOAD_U32(r28.u32 + 0);
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
	// lwz r11,56(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 56);
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
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// bl 0x83081160
	sub_83081160(ctx, base);
	// lwz r11,476(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83062fe8
	if (!cr6.eq) goto loc_83062FE8;
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
loc_83062FE8:
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83063010
	if (cr0.eq) goto loc_83063010;
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
loc_83063010:
	// addi r3,r31,480
	ctx.r3.s64 = r31.s64 + 480;
	// bl 0x830813d0
	sub_830813D0(ctx, base);
loc_83063018:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
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
loc_83063044:
	// lwz r11,112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8306305c
	if (cr6.eq) goto loc_8306305C;
	// lwz r3,176(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// bl 0x82fef6f8
	sub_82FEF6F8(ctx, base);
	// stw r3,568(r30)
	PPC_STORE_U32(r30.u32 + 568, ctx.r3.u32);
loc_8306305C:
	// addi r1,r31,912
	ctx.r1.s64 = r31.s64 + 912;
	// b 0x831b0b58
	return;
}

__attribute__((alias("__imp__sub_83063064"))) PPC_WEAK_FUNC(sub_83063064);
PPC_FUNC_IMPL(__imp__sub_83063064) {
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
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
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

__attribute__((alias("__imp__sub_8306308C"))) PPC_WEAK_FUNC(sub_8306308C);
PPC_FUNC_IMPL(__imp__sub_8306308C) {
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

__attribute__((alias("__imp__sub_830630B4"))) PPC_WEAK_FUNC(sub_830630B4);
PPC_FUNC_IMPL(__imp__sub_830630B4) {
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

__attribute__((alias("__imp__sub_830630DC"))) PPC_WEAK_FUNC(sub_830630DC);
PPC_FUNC_IMPL(__imp__sub_830630DC) {
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
	// addi r3,r31,168
	ctx.r3.s64 = r31.s64 + 168;
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

__attribute__((alias("__imp__sub_83063104"))) PPC_WEAK_FUNC(sub_83063104);
PPC_FUNC_IMPL(__imp__sub_83063104) {
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

__attribute__((alias("__imp__sub_8306312C"))) PPC_WEAK_FUNC(sub_8306312C);
PPC_FUNC_IMPL(__imp__sub_8306312C) {
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

__attribute__((alias("__imp__sub_8306315C"))) PPC_WEAK_FUNC(sub_8306315C);
PPC_FUNC_IMPL(__imp__sub_8306315C) {
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

__attribute__((alias("__imp__sub_83063184"))) PPC_WEAK_FUNC(sub_83063184);
PPC_FUNC_IMPL(__imp__sub_83063184) {
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

__attribute__((alias("__imp__sub_830631B4"))) PPC_WEAK_FUNC(sub_830631B4);
PPC_FUNC_IMPL(__imp__sub_830631B4) {
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

__attribute__((alias("__imp__sub_830631DC"))) PPC_WEAK_FUNC(sub_830631DC);
PPC_FUNC_IMPL(__imp__sub_830631DC) {
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

__attribute__((alias("__imp__sub_8306320C"))) PPC_WEAK_FUNC(sub_8306320C);
PPC_FUNC_IMPL(__imp__sub_8306320C) {
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

__attribute__((alias("__imp__sub_83063240"))) PPC_WEAK_FUNC(sub_83063240);
PPC_FUNC_IMPL(__imp__sub_83063240) {
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
	// addi r18,r30,124
	r18.s64 = r30.s64 + 124;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83063298
	if (!cr0.eq) goto loc_83063298;
	// li r4,261
	ctx.r4.s64 = 261;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
	// li r4,91
	ctx.r4.s64 = 91;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830636b8
	if (cr0.eq) goto loc_830636B8;
loc_83063298:
	// addi r19,r30,220
	r19.s64 = r30.s64 + 220;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r19,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r19.u32);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// li r23,0
	r23.s64 = 0;
	// addi r3,r30,400
	ctx.r3.s64 = r30.s64 + 400;
	// mr r22,r23
	r22.u64 = r23.u64;
	// mr r25,r23
	r25.u64 = r23.u64;
	// bl 0x8301e5d8
	sub_8301E5D8(ctx, base);
	// lwz r11,184(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// li r20,2
	r20.s64 = 2;
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
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83063338
	if (!cr6.eq) goto loc_83063338;
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
	// bne 0x83063350
	if (!cr0.eq) goto loc_83063350;
	// bl 0x83020b18
	sub_83020B18(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83063350
	if (cr0.eq) goto loc_83063350;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x83063328
	if (!cr6.eq) goto loc_83063328;
	// li r20,1
	r20.s64 = 1;
	// b 0x83063350
	goto loc_83063350;
loc_83063328:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83063350
	if (!cr6.eq) goto loc_83063350;
	// mr r20,r23
	r20.u64 = r23.u64;
	// b 0x83063350
	goto loc_83063350;
loc_83063338:
	// lwz r3,0(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
loc_83063350:
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// clrlwi. r29,r26,16
	r29.u64 = r26.u32 & 0xFFFF;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x830634c0
	if (cr0.eq) goto loc_830634C0;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r24,r11,24488
	r24.s64 = r11.s64 + 24488;
	// lis r11,2
	r11.s64 = 131072;
	// ori r27,r11,32852
	r27.u64 = r11.u64 | 32852;
loc_83063374:
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830633c4
	if (cr0.eq) goto loc_830633C4;
	// lbz r11,14(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 14);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830633c4
	if (cr0.eq) goto loc_830633C4;
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// lwzx r11,r11,r27
	r11.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// lbzx r11,r11,r29
	r11.u64 = PPC_LOAD_U8(r11.u32 + r29.u32);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830633c4
	if (cr0.eq) goto loc_830633C4;
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// lbz r11,20(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830633c4
	if (cr0.eq) goto loc_830633C4;
	// cmpwi cr6,r20,1
	cr6.compare<int32_t>(r20.s32, 1, xer);
	// bne cr6,0x830633c4
	if (!cr6.eq) goto loc_830633C4;
	// li r4,84
	ctx.r4.s64 = 84;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// bl 0x8301f3f0
	sub_8301F3F0(ctx, base);
loc_830633C4:
	// cmplwi cr6,r29,93
	cr6.compare<uint32_t>(r29.u32, 93, xer);
	// bne cr6,0x830633e0
	if (!cr6.eq) goto loc_830633E0;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// bl 0x82ffb458
	sub_82FFB458(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830634f8
	if (!cr0.eq) goto loc_830634F8;
loc_830633E0:
	// clrlwi. r11,r22,24
	r11.u64 = r22.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830634a0
	if (!cr0.eq) goto loc_830634A0;
	// cmplwi cr6,r29,55296
	cr6.compare<uint32_t>(r29.u32, 55296, xer);
	// blt cr6,0x83063418
	if (cr6.lt) goto loc_83063418;
	// cmplwi cr6,r29,56319
	cr6.compare<uint32_t>(r29.u32, 56319, xer);
	// bgt cr6,0x83063418
	if (cr6.gt) goto loc_83063418;
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83063410
	if (cr0.eq) goto loc_83063410;
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// b 0x830634a0
	goto loc_830634A0;
loc_83063410:
	// li r25,1
	r25.s64 = 1;
	// b 0x830634a0
	goto loc_830634A0;
loc_83063418:
	// cmplwi cr6,r29,56320
	cr6.compare<uint32_t>(r29.u32, 56320, xer);
	// blt cr6,0x83063438
	if (cr6.lt) goto loc_83063438;
	// cmplwi cr6,r29,57343
	cr6.compare<uint32_t>(r29.u32, 57343, xer);
	// bgt cr6,0x83063438
	if (cr6.gt) goto loc_83063438;
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306349c
	if (!cr0.eq) goto loc_8306349C;
	// li r4,282
	ctx.r4.s64 = 282;
	// b 0x83063444
	goto loc_83063444;
loc_83063438:
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83063450
	if (cr0.eq) goto loc_83063450;
	// li r4,249
	ctx.r4.s64 = 249;
loc_83063444:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// b 0x8306349c
	goto loc_8306349C;
loc_83063450:
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// lwzx r11,r11,r27
	r11.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// lbzx r11,r11,r29
	r11.u64 = PPC_LOAD_U8(r11.u32 + r29.u32);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306349c
	if (!cr0.eq) goto loc_8306349C;
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
	// li r22,1
	r22.s64 = 1;
loc_8306349C:
	// mr r25,r23
	r25.u64 = r23.u64;
loc_830634A0:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// clrlwi. r29,r26,16
	r29.u64 = r26.u32 & 0xFFFF;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x83063374
	if (!cr0.eq) goto loc_83063374;
loc_830634C0:
	// li r4,264
	ctx.r4.s64 = 264;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// li r6,47
	ctx.r6.s64 = 47;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// addi r4,r11,24648
	ctx.r4.s64 = r11.s64 + 24648;
	// li r5,2425
	ctx.r5.s64 = 2425;
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
loc_830634F8:
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306350c
	if (cr0.eq) goto loc_8306350C;
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_8306350C:
	// lwz r11,476(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83063654
	if (!cr6.eq) goto loc_83063654;
	// lbz r11,24(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 24);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830635a8
	if (cr0.eq) goto loc_830635A8;
	// lwz r11,168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// lwz r27,40(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// cmplwi r27,0
	cr0.compare<uint32_t>(r27.u32, 0, xer);
	// beq 0x830635a8
	if (cr0.eq) goto loc_830635A8;
	// lhz r11,10(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 10);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830635a8
	if (cr0.eq) goto loc_830635A8;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r19,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r19.u32);
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
	// sthx r23,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r23.u16);
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
	// sthx r23,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r23.u16);
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// stw r23,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r23.u32);
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
loc_830635A8:
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830635ec
	if (cr0.eq) goto loc_830635EC;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r23,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r23.u16);
	// lwz r11,168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// lwz r4,24(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// addi r3,r11,48
	ctx.r3.s64 = r11.s64 + 48;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// cmpwi cr6,r20,2
	cr6.compare<int32_t>(r20.s32, 2, xer);
	// beq cr6,0x830635ec
	if (cr6.eq) goto loc_830635EC;
	// li r4,22
	ctx.r4.s64 = 22;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// bl 0x8301f3f0
	sub_8301F3F0(ctx, base);
loc_830635EC:
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83063614
	if (cr0.eq) goto loc_83063614;
	// lbz r11,20(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83063614
	if (cr0.eq) goto loc_83063614;
	// lwz r11,532(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 532);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x83063618
	if (!cr6.eq) goto loc_83063618;
loc_83063614:
	// mr r11,r23
	r11.u64 = r23.u64;
loc_83063618:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83063674
	if (cr0.eq) goto loc_83063674;
	// lwz r11,532(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 532);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83063674
	if (cr0.eq) goto loc_83063674;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r3,r30,488
	ctx.r3.s64 = r30.s64 + 488;
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// rlwinm r11,r5,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r23,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r23.u16);
	// lwz r4,24(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// b 0x83063674
	goto loc_83063674;
loc_83063654:
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83063674
	if (cr0.eq) goto loc_83063674;
	// cmpwi cr6,r20,2
	cr6.compare<int32_t>(r20.s32, 2, xer);
	// beq cr6,0x83063674
	if (cr6.eq) goto loc_83063674;
	// li r4,22
	ctx.r4.s64 = 22;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// bl 0x8301f3f0
	sub_8301F3F0(ctx, base);
loc_83063674:
	// lwz r11,92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830636ac
	if (cr6.eq) goto loc_830636AC;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// rlwinm r11,r5,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r23,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r23.u16);
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
loc_830636AC:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
loc_830636B8:
	// addi r1,r31,240
	ctx.r1.s64 = r31.s64 + 240;
	// b 0x831b0b50
	return;
}

__attribute__((alias("__imp__sub_830636C0"))) PPC_WEAK_FUNC(sub_830636C0);
PPC_FUNC_IMPL(__imp__sub_830636C0) {
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

__attribute__((alias("__imp__sub_830636E8"))) PPC_WEAK_FUNC(sub_830636E8);
PPC_FUNC_IMPL(__imp__sub_830636E8) {
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

__attribute__((alias("__imp__sub_83063718"))) PPC_WEAK_FUNC(sub_83063718);
PPC_FUNC_IMPL(__imp__sub_83063718) {
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
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
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
	// li r23,1
	r23.s64 = 1;
	// lwz r10,24(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// stw r29,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r29.u32);
	// stw r27,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r27.u32);
	// stw r26,252(r31)
	PPC_STORE_U32(r31.u32 + 252, r26.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// sth r27,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r27.u16);
	// lbz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 28);
	// stb r23,28(r11)
	PPC_STORE_U8(r11.u32 + 28, r23.u8);
	// stb r10,96(r31)
	PPC_STORE_U8(r31.u32 + 96, ctx.r10.u8);
	// mr r24,r27
	r24.u64 = r27.u64;
	// sth r27,86(r31)
	PPC_STORE_U16(r31.u32 + 86, r27.u16);
	// mr r25,r27
	r25.u64 = r27.u64;
	// stb r27,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r27.u8);
	// stb r23,81(r31)
	PPC_STORE_U8(r31.u32 + 81, r23.u8);
	// stw r24,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r24.u32);
loc_83063780:
	// lbz r11,81(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 81);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83063a1c
	if (cr0.eq) goto loc_83063A1C;
loc_8306378C:
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// bne cr6,0x830637ac
	if (!cr6.eq) goto loc_830637AC;
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830637ac
	if (!cr0.eq) goto loc_830637AC;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,132(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 132);
	// bl 0x83026590
	sub_83026590(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_830637AC:
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
	// bne 0x830637e8
	if (!cr0.eq) goto loc_830637E8;
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830637e0
	if (cr0.eq) goto loc_830637E0;
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_830637E0:
	// stb r27,81(r31)
	PPC_STORE_U8(r31.u32 + 81, r27.u8);
	// b 0x83063780
	goto loc_83063780;
loc_830637E8:
	// lhz r11,84(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 84);
	// stb r27,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r27.u8);
	// cmplwi cr6,r11,38
	cr6.compare<uint32_t>(r11.u32, 38, xer);
	// bne cr6,0x830638a0
	if (!cr6.eq) goto loc_830638A0;
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
	// beq cr6,0x83063864
	if (cr6.eq) goto loc_83063864;
	// mr r25,r27
	r25.u64 = r27.u64;
	// stb r28,28(r30)
	PPC_STORE_U8(r30.u32 + 28, r28.u8);
	// b 0x8306378c
	goto loc_8306378C;
loc_83063864:
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83063898
	if (cr0.eq) goto loc_83063898;
	// lwz r11,440(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 440);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83063898
	if (!cr0.eq) goto loc_83063898;
	// lwz r11,440(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 440);
	// lwz r10,432(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 432);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,-4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// stb r23,34(r11)
	PPC_STORE_U8(r11.u32 + 34, r23.u8);
loc_83063898:
	// stb r28,28(r30)
	PPC_STORE_U8(r30.u32 + 28, r28.u8);
	// b 0x83063970
	goto loc_83063970;
loc_830638A0:
	// cmplwi cr6,r11,55296
	cr6.compare<uint32_t>(r11.u32, 55296, xer);
	// blt cr6,0x830638d4
	if (cr6.lt) goto loc_830638D4;
	// cmplwi cr6,r11,56319
	cr6.compare<uint32_t>(r11.u32, 56319, xer);
	// bgt cr6,0x830638d4
	if (cr6.gt) goto loc_830638D4;
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830638cc
	if (cr0.eq) goto loc_830638CC;
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x83063970
	goto loc_83063970;
loc_830638CC:
	// mr r25,r23
	r25.u64 = r23.u64;
	// b 0x83063970
	goto loc_83063970;
loc_830638D4:
	// cmplwi cr6,r11,56320
	cr6.compare<uint32_t>(r11.u32, 56320, xer);
	// blt cr6,0x830638fc
	if (cr6.lt) goto loc_830638FC;
	// cmplwi cr6,r11,57343
	cr6.compare<uint32_t>(r11.u32, 57343, xer);
	// bgt cr6,0x830638fc
	if (cr6.gt) goto loc_830638FC;
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306396c
	if (!cr0.eq) goto loc_8306396C;
	// li r4,282
	ctx.r4.s64 = 282;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// b 0x83063968
	goto loc_83063968;
loc_830638FC:
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83063914
	if (cr0.eq) goto loc_83063914;
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83063914:
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
	// bne 0x8306396c
	if (!cr0.eq) goto loc_8306396C;
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
loc_83063968:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8306396C:
	// mr r25,r27
	r25.u64 = r27.u64;
loc_83063970:
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830639c8
	if (!cr0.eq) goto loc_830639C8;
	// lhz r11,84(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 84);
	// cmplwi cr6,r11,93
	cr6.compare<uint32_t>(r11.u32, 93, xer);
	// bne cr6,0x830639a8
	if (!cr6.eq) goto loc_830639A8;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// bne cr6,0x83063998
	if (!cr6.eq) goto loc_83063998;
	// mr r24,r23
	r24.u64 = r23.u64;
	// b 0x830639cc
	goto loc_830639CC;
loc_83063998:
	// cmpwi cr6,r24,1
	cr6.compare<int32_t>(r24.s32, 1, xer);
	// bne cr6,0x830639d0
	if (!cr6.eq) goto loc_830639D0;
	// li r24,2
	r24.s64 = 2;
	// b 0x830639cc
	goto loc_830639CC;
loc_830639A8:
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(r11.u32, 62, xer);
	// bne cr6,0x830639c8
	if (!cr6.eq) goto loc_830639C8;
	// cmpwi cr6,r24,2
	cr6.compare<int32_t>(r24.s32, 2, xer);
	// bne cr6,0x830639c8
	if (!cr6.eq) goto loc_830639C8;
	// li r4,262
	ctx.r4.s64 = 262;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_830639C8:
	// mr r24,r27
	r24.u64 = r27.u64;
loc_830639CC:
	// stw r24,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r24.u32);
loc_830639D0:
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
	// beq 0x8306378c
	if (cr0.eq) goto loc_8306378C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// sth r27,86(r31)
	PPC_STORE_U16(r31.u32 + 86, r27.u16);
	// b 0x8306378c
	goto loc_8306378C;
	// lwz r29,244(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// lwz r26,252(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 252);
	// li r27,0
	r27.s64 = 0;
	// lwz r24,88(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// li r23,1
	r23.s64 = 1;
	// lbz r25,82(r31)
	r25.u64 = PPC_LOAD_U8(r31.u32 + 82);
	// b 0x83063780
	goto loc_83063780;
loc_83063A1C:
	// lbz r11,16(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83063af4
	if (cr0.eq) goto loc_83063AF4;
	// lbz r11,14(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 14);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83063af4
	if (cr0.eq) goto loc_83063AF4;
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
	// beq 0x83063af4
	if (cr0.eq) goto loc_83063AF4;
	// addi r3,r29,400
	ctx.r3.s64 = r29.s64 + 400;
	// bl 0x8301e5d8
	sub_8301E5D8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lbz r11,20(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83063af4
	if (cr0.eq) goto loc_83063AF4;
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 184);
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
	// bne cr6,0x83063acc
	if (!cr6.eq) goto loc_83063ACC;
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
	// bne 0x83063af4
	if (!cr0.eq) goto loc_83063AF4;
	// bl 0x83020b18
	sub_83020B18(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83063af4
	if (cr0.eq) goto loc_83063AF4;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x83063ae8
	if (cr6.eq) goto loc_83063AE8;
	// b 0x83063af4
	goto loc_83063AF4;
loc_83063ACC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83063af4
	if (!cr6.eq) goto loc_83063AF4;
loc_83063AE8:
	// li r4,84
	ctx.r4.s64 = 84;
	// lwz r3,168(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 168);
	// bl 0x8301f3f0
	sub_8301F3F0(ctx, base);
loc_83063AF4:
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
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_83063B28"))) PPC_WEAK_FUNC(sub_83063B28);
PPC_FUNC_IMPL(__imp__sub_83063B28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lwz r30,244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// lwz r4,252(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 252);
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
	// beq cr6,0x83063b84
	if (cr6.eq) goto loc_83063B84;
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
loc_83063B84:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31994
	ctx.r3.s64 = -2096758784;
	// addi r3,r3,14848
	ctx.r3.s64 = ctx.r3.s64 + 14848;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_83063B9C"))) PPC_WEAK_FUNC(sub_83063B9C);
PPC_FUNC_IMPL(__imp__sub_83063B9C) {
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

__attribute__((alias("__imp__sub_83063BC4"))) PPC_WEAK_FUNC(sub_83063BC4);
PPC_FUNC_IMPL(__imp__sub_83063BC4) {
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

__attribute__((alias("__imp__sub_83063BF8"))) PPC_WEAK_FUNC(sub_83063BF8);
PPC_FUNC_IMPL(__imp__sub_83063BF8) {
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
	// addi r31,r1,-240
	r31.s64 = ctx.r1.s64 + -240;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// li r27,0
	r27.s64 = 0;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,2
	r11.s64 = 131072;
	// addi r24,r30,124
	r24.s64 = r30.s64 + 124;
	// sth r27,0(r28)
	PPC_STORE_U16(r28.u32 + 0, r27.u16);
	// ori r29,r11,32808
	r29.u64 = r11.u64 | 32808;
	// stb r27,0(r25)
	PPC_STORE_U8(r25.u32 + 0, r27.u8);
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// lwzx r26,r11,r29
	r26.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83063c9c
	if (cr0.eq) goto loc_83063C9C;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff1b50
	sub_82FF1B50(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83063c70
	if (!cr0.eq) goto loc_83063C70;
loc_83063C68:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x830641b4
	goto loc_830641B4;
loc_83063C70:
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r25)
	PPC_STORE_U8(r25.u32 + 0, r11.u8);
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// beq cr6,0x83063c94
	if (cr6.eq) goto loc_83063C94;
	// li r4,231
	ctx.r4.s64 = 231;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_83063C94:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830641b4
	goto loc_830641B4;
loc_83063C9C:
	// addi r21,r30,220
	r21.s64 = r30.s64 + 220;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r21,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r21.u32);
	// stw r28,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r28.u32);
	// lwz r11,24(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// stw r27,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// sth r27,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r27.u16);
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// bl 0x82ffb090
	sub_82FFB090(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83063cf4
	if (!cr0.eq) goto loc_83063CF4;
	// li r4,226
	ctx.r4.s64 = 226;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_83063CE4:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// b 0x83063c68
	goto loc_83063C68;
loc_83063CF4:
	// li r4,59
	ctx.r4.s64 = 59;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83063d34
	if (!cr0.eq) goto loc_83063D34;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
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
	// sthx r27,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r27.u16);
	// lwz r5,24(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
loc_83063D34:
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// beq cr6,0x83063d50
	if (cr6.eq) goto loc_83063D50;
	// li r4,231
	ctx.r4.s64 = 231;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_83063D50:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r27,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r27.u16);
	// lwz r4,24(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lwz r3,528(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 528);
	// bl 0x83028200
	sub_83028200(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x83063df8
	if (!cr0.eq) goto loc_83063DF8;
	// lbz r11,14(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 14);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83063dc8
	if (!cr0.eq) goto loc_83063DC8;
	// lbz r11,15(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 15);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83063dc8
	if (!cr0.eq) goto loc_83063DC8;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83063df4
	if (cr0.eq) goto loc_83063DF4;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,85
	ctx.r4.s64 = 85;
	// sthx r27,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r27.u16);
	// lwz r5,24(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// bl 0x8301f560
	sub_8301F560(ctx, base);
	// b 0x83063df4
	goto loc_83063DF4;
loc_83063DC8:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
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
	// sthx r27,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r27.u16);
	// lwz r5,24(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
loc_83063DF4:
	// b 0x83063ce4
	goto loc_83063CE4;
loc_83063DF8:
	// lbz r11,14(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 14);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83063e4c
	if (cr0.eq) goto loc_83063E4C;
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
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83063e4c
	if (!cr0.eq) goto loc_83063E4C;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,298
	ctx.r4.s64 = 298;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// sthx r27,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r27.u16);
	// lwz r5,24(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
loc_83063E4C:
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// li r26,1
	r26.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83063e6c
	if (!cr6.eq) goto loc_83063E6C;
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r11,r27
	r11.u64 = r27.u64;
	// beq cr6,0x83063e70
	if (cr6.eq) goto loc_83063E70;
loc_83063E6C:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_83063E70:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83064070
	if (cr0.eq) goto loc_83064070;
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83063ec0
	if (cr0.eq) goto loc_83063EC0;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,228
	ctx.r4.s64 = 228;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// sthx r27,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r27.u16);
	// lwz r5,24(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
	// b 0x83063ce4
	goto loc_83063CE4;
loc_83063EC0:
	// clrlwi. r26,r22,24
	r26.u64 = r22.u32 & 0xFF;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// beq 0x83063ed4
	if (cr0.eq) goto loc_83063ED4;
	// li r4,270
	ctx.r4.s64 = 270;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_83063ED4:
	// lbz r25,9(r30)
	r25.u64 = PPC_LOAD_U8(r30.u32 + 9);
	// addi r11,r31,100
	r11.s64 = r31.s64 + 100;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r6,24(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r5,28(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r4,32(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stb r25,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, r25.u8);
	// bl 0x82ff6eb8
	sub_82FF6EB8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x83063f6c
	if (!cr0.eq) goto loc_83063F6C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r30,216(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r4,r11,24648
	ctx.r4.s64 = r11.s64 + 24648;
	// li r6,46
	ctx.r6.s64 = 46;
	// li r5,2933
	ctx.r5.s64 = 2933;
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
loc_83063F6C:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82ff65e8
	sub_82FF65E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83063fc0
	if (!cr0.eq) goto loc_83063FC0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,230
	ctx.r4.s64 = 230;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// li r30,2
	r30.s64 = 2;
loc_83063FAC:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x830641b4
	goto loc_830641B4;
loc_83063FC0:
	// lwz r11,208(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 208);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83064018
	if (cr6.eq) goto loc_83064018;
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
	// ble cr6,0x83064018
	if (!cr6.gt) goto loc_83064018;
	// li r6,10
	ctx.r6.s64 = 10;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// bl 0x82fd9bb0
	sub_82FD9BB0(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,112
	ctx.r5.s64 = r31.s64 + 112;
	// li r4,172
	ctx.r4.s64 = 172;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
	// stw r27,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r27.u32);
loc_83064018:
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83064040
	if (cr0.eq) goto loc_83064040;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x83064040
	if (!cr6.eq) goto loc_83064040;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83064040:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff1820
	sub_82FF1820(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83064060
	if (cr0.eq) goto loc_83064060;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff1060
	sub_82FF1060(ctx, base);
loc_83064060:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// b 0x830641a4
	goto loc_830641A4;
loc_83064070:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830640a4
	if (cr0.eq) goto loc_830640A4;
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// sth r11,0(r23)
	PPC_STORE_U16(r23.u32 + 0, r11.u16);
	// stb r26,0(r25)
	PPC_STORE_U8(r25.u32 + 0, r26.u8);
	// mr r30,r26
	r30.u64 = r26.u64;
	// b 0x83063fac
	goto loc_83063FAC;
loc_830640A4:
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,12(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82ff5480
	sub_82FF5480(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82ff65e8
	sub_82FF65E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830640fc
	if (!cr0.eq) goto loc_830640FC;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,230
	ctx.r4.s64 = 230;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
loc_830640FC:
	// lwz r11,208(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 208);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83064150
	if (cr6.eq) goto loc_83064150;
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
	// ble cr6,0x83064150
	if (!cr6.gt) goto loc_83064150;
	// li r6,10
	ctx.r6.s64 = 10;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// bl 0x82fd9bb0
	sub_82FD9BB0(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,112
	ctx.r5.s64 = r31.s64 + 112;
	// li r4,172
	ctx.r4.s64 = 172;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
loc_83064150:
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83064178
	if (cr0.eq) goto loc_83064178;
	// clrlwi. r11,r22,24
	r11.u64 = r22.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83064178
	if (!cr0.eq) goto loc_83064178;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83064178:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff1820
	sub_82FF1820(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830641a4
	if (cr0.eq) goto loc_830641A4;
	// li r4,220
	ctx.r4.s64 = 220;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
loc_830641A4:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_830641B4:
	// addi r1,r31,240
	ctx.r1.s64 = r31.s64 + 240;
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_830641BC"))) PPC_WEAK_FUNC(sub_830641BC);
PPC_FUNC_IMPL(__imp__sub_830641BC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-240
	r31.s64 = r12.s64 + -240;
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

