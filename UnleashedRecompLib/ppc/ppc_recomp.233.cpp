#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_831227E0"))) PPC_WEAK_FUNC(sub_831227E0);
PPC_FUNC_IMPL(__imp__sub_831227E0) {
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
	// addi r11,r4,32
	r11.s64 = ctx.r4.s64 + 32;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,1
	ctx.r10.s64 = 1;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// rldicr r10,r10,63,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// srd r6,r10,r11
	ctx.r6.u64 = r11.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (r11.u8 & 0x7F));
	// bl 0x82be9818
	sub_82BE9818(ctx, base);
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

__attribute__((alias("__imp__sub_83122820"))) PPC_WEAK_FUNC(sub_83122820);
PPC_FUNC_IMPL(__imp__sub_83122820) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r11,r4,r6
	r11.u64 = ctx.r4.u64 + ctx.r6.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r10,r4,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// srad r11,r9,r11
	temp.u64 = r11.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	xer.ca = (ctx.r9.s64 < 0) & (((ctx.r9.s64 >> temp.u64) << temp.u64) != ctx.r9.s64);
	r11.s64 = ctx.r9.s64 >> temp.u64;
	// srd r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x40 ? 0 : (r11.u64 >> (ctx.r10.u8 & 0x7F));
	// bl 0x82bdfaa0
	sub_82BDFAA0(ctx, base);
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

__attribute__((alias("__imp__sub_83122870"))) PPC_WEAK_FUNC(sub_83122870);
PPC_FUNC_IMPL(__imp__sub_83122870) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r11,r4,r6
	r11.u64 = ctx.r4.u64 + ctx.r6.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r10,r4,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// srad r11,r9,r11
	temp.u64 = r11.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	xer.ca = (ctx.r9.s64 < 0) & (((ctx.r9.s64 >> temp.u64) << temp.u64) != ctx.r9.s64);
	r11.s64 = ctx.r9.s64 >> temp.u64;
	// srd r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x40 ? 0 : (r11.u64 >> (ctx.r10.u8 & 0x7F));
	// bl 0x82bdfb80
	sub_82BDFB80(ctx, base);
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

__attribute__((alias("__imp__sub_831228C0"))) PPC_WEAK_FUNC(sub_831228C0);
PPC_FUNC_IMPL(__imp__sub_831228C0) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x82bfe5f0
	sub_82BFE5F0(ctx, base);
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

__attribute__((alias("__imp__sub_831228F0"))) PPC_WEAK_FUNC(sub_831228F0);
PPC_FUNC_IMPL(__imp__sub_831228F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// add r11,r3,r11
	r11.u64 = ctx.r3.u64 + r11.u64;
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_83122930"))) PPC_WEAK_FUNC(sub_83122930);
PPC_FUNC_IMPL(__imp__sub_83122930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// add r11,r3,r11
	r11.u64 = ctx.r3.u64 + r11.u64;
	// lwz r11,468(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 468);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_83122970"))) PPC_WEAK_FUNC(sub_83122970);
PPC_FUNC_IMPL(__imp__sub_83122970) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x82be02e0
	sub_82BE02E0(ctx, base);
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

__attribute__((alias("__imp__sub_83122998"))) PPC_WEAK_FUNC(sub_83122998);
PPC_FUNC_IMPL(__imp__sub_83122998) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x82be0110
	sub_82BE0110(ctx, base);
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

__attribute__((alias("__imp__sub_831229C0"))) PPC_WEAK_FUNC(sub_831229C0);
PPC_FUNC_IMPL(__imp__sub_831229C0) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x82bdfe58
	sub_82BDFE58(ctx, base);
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

__attribute__((alias("__imp__sub_831229E8"))) PPC_WEAK_FUNC(sub_831229E8);
PPC_FUNC_IMPL(__imp__sub_831229E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// lwz r7,180(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// bl 0x82be95b8
	sub_82BE95B8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83122a28
	if (cr0.eq) goto loc_83122A28;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83122a30
	goto loc_83122A30;
loc_83122A28:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
loc_83122A30:
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

__attribute__((alias("__imp__sub_83122A48"))) PPC_WEAK_FUNC(sub_83122A48);
PPC_FUNC_IMPL(__imp__sub_83122A48) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,228(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r31,220(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// bl 0x82bf6400
	sub_82BF6400(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_83122A88"))) PPC_WEAK_FUNC(sub_83122A88);
PPC_FUNC_IMPL(__imp__sub_83122A88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82bdd2f0
	sub_82BDD2F0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83122ab8
	if (cr0.eq) goto loc_83122AB8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83122ac0
	goto loc_83122AC0;
loc_83122AB8:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2150
	ctx.r3.u64 = ctx.r3.u64 | 2150;
loc_83122AC0:
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

__attribute__((alias("__imp__sub_83122AD8"))) PPC_WEAK_FUNC(sub_83122AD8);
PPC_FUNC_IMPL(__imp__sub_83122AD8) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x82bddd38
	sub_82BDDD38(ctx, base);
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

__attribute__((alias("__imp__sub_83122B00"))) PPC_WEAK_FUNC(sub_83122B00);
PPC_FUNC_IMPL(__imp__sub_83122B00) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x82bde010
	sub_82BDE010(ctx, base);
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

__attribute__((alias("__imp__sub_83122B28"))) PPC_WEAK_FUNC(sub_83122B28);
PPC_FUNC_IMPL(__imp__sub_83122B28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x82bdd2a8
	sub_82BDD2A8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83122b58
	if (cr0.eq) goto loc_83122B58;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83122b60
	goto loc_83122B60;
loc_83122B58:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2150
	ctx.r3.u64 = ctx.r3.u64 | 2150;
loc_83122B60:
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

__attribute__((alias("__imp__sub_83122B78"))) PPC_WEAK_FUNC(sub_83122B78);
PPC_FUNC_IMPL(__imp__sub_83122B78) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x82bda8c0
	sub_82BDA8C0(ctx, base);
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

__attribute__((alias("__imp__sub_83122BA0"))) PPC_WEAK_FUNC(sub_83122BA0);
PPC_FUNC_IMPL(__imp__sub_83122BA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x82be1a80
	sub_82BE1A80(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83122bd0
	if (cr0.eq) goto loc_83122BD0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83122bd8
	goto loc_83122BD8;
loc_83122BD0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
loc_83122BD8:
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

__attribute__((alias("__imp__sub_83122BF0"))) PPC_WEAK_FUNC(sub_83122BF0);
PPC_FUNC_IMPL(__imp__sub_83122BF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x82be1990
	sub_82BE1990(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83122c20
	if (cr0.eq) goto loc_83122C20;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83122c28
	goto loc_83122C28;
loc_83122C20:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
loc_83122C28:
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

__attribute__((alias("__imp__sub_83122C40"))) PPC_WEAK_FUNC(sub_83122C40);
PPC_FUNC_IMPL(__imp__sub_83122C40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x82be0428
	sub_82BE0428(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83122c70
	if (cr0.eq) goto loc_83122C70;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83122c78
	goto loc_83122C78;
loc_83122C70:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
loc_83122C78:
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

__attribute__((alias("__imp__sub_83122C90"))) PPC_WEAK_FUNC(sub_83122C90);
PPC_FUNC_IMPL(__imp__sub_83122C90) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x82bdd0a8
	sub_82BDD0A8(ctx, base);
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

__attribute__((alias("__imp__sub_83122CB8"))) PPC_WEAK_FUNC(sub_83122CB8);
PPC_FUNC_IMPL(__imp__sub_83122CB8) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,16400
	r11.s64 = r11.s64 + 16400;
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwzx r11,r10,r9
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mullw r10,r8,r5
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x82be52f8
	sub_82BE52F8(ctx, base);
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

__attribute__((alias("__imp__sub_83122D00"))) PPC_WEAK_FUNC(sub_83122D00);
PPC_FUNC_IMPL(__imp__sub_83122D00) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,212(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lis r31,-32256
	r31.s64 = -2113929216;
	// rlwinm r30,r4,3,0,28
	r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r11,r31,16400
	r11.s64 = r31.s64 + 16400;
	// addi r31,r11,4
	r31.s64 = r11.s64 + 4;
	// lwzx r29,r30,r11
	r29.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwzx r11,r30,r31
	r11.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// mullw r7,r29,r7
	ctx.r7.s64 = int64_t(r29.s32) * int64_t(ctx.r7.s32);
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + r11.u64;
	// bl 0x82be5860
	sub_82BE5860(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83122D48"))) PPC_WEAK_FUNC(sub_83122D48);
PPC_FUNC_IMPL(__imp__sub_83122D48) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// bl 0x82be9300
	sub_82BE9300(ctx, base);
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

__attribute__((alias("__imp__sub_83122D80"))) PPC_WEAK_FUNC(sub_83122D80);
PPC_FUNC_IMPL(__imp__sub_83122D80) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82be7780
	sub_82BE7780(ctx, base);
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

__attribute__((alias("__imp__sub_83122DB0"))) PPC_WEAK_FUNC(sub_83122DB0);
PPC_FUNC_IMPL(__imp__sub_83122DB0) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x82bdd510
	sub_82BDD510(ctx, base);
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

__attribute__((alias("__imp__sub_83122DD8"))) PPC_WEAK_FUNC(sub_83122DD8);
PPC_FUNC_IMPL(__imp__sub_83122DD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// bl 0x82be4e50
	sub_82BE4E50(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83122e08
	if (cr0.eq) goto loc_83122E08;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83122e10
	goto loc_83122E10;
loc_83122E08:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
loc_83122E10:
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

__attribute__((alias("__imp__sub_83122E28"))) PPC_WEAK_FUNC(sub_83122E28);
PPC_FUNC_IMPL(__imp__sub_83122E28) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x82be52e8
	sub_82BE52E8(ctx, base);
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

__attribute__((alias("__imp__sub_83122E50"))) PPC_WEAK_FUNC(sub_83122E50);
PPC_FUNC_IMPL(__imp__sub_83122E50) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,144(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83122E58"))) PPC_WEAK_FUNC(sub_83122E58);
PPC_FUNC_IMPL(__imp__sub_83122E58) {
	PPC_FUNC_PROLOGUE();
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83122E68"))) PPC_WEAK_FUNC(sub_83122E68);
PPC_FUNC_IMPL(__imp__sub_83122E68) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r29,0
	r29.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r29,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r29.u32);
	// bl 0x82be9158
	sub_82BE9158(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// mr r31,r29
	r31.u64 = r29.u64;
	// beq 0x83122efc
	if (cr0.eq) goto loc_83122EFC;
loc_83122EA8:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82be9320
	sub_82BE9320(ctx, base);
	// bl 0x83119578
	sub_83119578(ctx, base);
	// ori r7,r3,16
	ctx.r7.u64 = ctx.r3.u64 | 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82be9300
	sub_82BE9300(ctx, base);
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mullw r11,r11,r10
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r10.s32);
	// add r29,r11,r29
	r29.u64 = r11.u64 + r29.u64;
	// bl 0x82be7780
	sub_82BE7780(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// blt cr6,0x83122ea8
	if (cr6.lt) goto loc_83122EA8;
loc_83122EFC:
	// stw r29,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83122F10"))) PPC_WEAK_FUNC(sub_83122F10);
PPC_FUNC_IMPL(__imp__sub_83122F10) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,-9936
	r11.s64 = r11.s64 + -9936;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// li r5,124
	ctx.r5.s64 = 124;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// stw r30,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r30.u32);
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

__attribute__((alias("__imp__sub_83122F78"))) PPC_WEAK_FUNC(sub_83122F78);
PPC_FUNC_IMPL(__imp__sub_83122F78) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
loc_83122F94:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x83122f94
	if (!cr0.eq) goto loc_83122F94;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x83122fd4
	if (!cr6.eq) goto loc_83122FD4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83122fd4
	if (cr6.eq) goto loc_83122FD4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83122700
	sub_83122700(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_83122FD4:
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

__attribute__((alias("__imp__sub_83122FF0"))) PPC_WEAK_FUNC(sub_83122FF0);
PPC_FUNC_IMPL(__imp__sub_83122FF0) {
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
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83123048
	if (!cr6.eq) goto loc_83123048;
	// li r3,132
	ctx.r3.s64 = 132;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83123028
	if (cr0.eq) goto loc_83123028;
	// bl 0x8311b018
	sub_8311B018(ctx, base);
	// b 0x8312302c
	goto loc_8312302C;
loc_83123028:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8312302C:
	// stw r3,144(r31)
	PPC_STORE_U32(r31.u32 + 144, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83123044
	if (!cr6.eq) goto loc_83123044;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8312304c
	goto loc_8312304C;
loc_83123044:
	// stw r31,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, r31.u32);
loc_83123048:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8312304C:
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

__attribute__((alias("__imp__sub_83123060"))) PPC_WEAK_FUNC(sub_83123060);
PPC_FUNC_IMPL(__imp__sub_83123060) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x83122ff0
	sub_83122FF0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x831230b8
	if (cr0.lt) goto loc_831230B8;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x831230a4
	if (cr6.eq) goto loc_831230A4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bd93f0
	sub_82BD93F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831226b8
	sub_831226B8(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
loc_831230A4:
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// li r5,124
	ctx.r5.s64 = 124;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_831230B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831230C0"))) PPC_WEAK_FUNC(sub_831230C0);
PPC_FUNC_IMPL(__imp__sub_831230C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpw cr6,r3,r5
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r5.s32, xer);
	// beq cr6,0x831230d4
	if (cr6.eq) goto loc_831230D4;
loc_831230CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_831230D4:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8312311c
	if (!cr6.gt) goto loc_8312311C;
	// addi r11,r6,4
	r11.s64 = ctx.r6.s64 + 4;
	// subf r8,r6,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r6.s64;
loc_831230E8:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,-4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// bne cr6,0x831230cc
	if (!cr6.eq) goto loc_831230CC;
	// lfsx f0,r8,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x831230cc
	if (!cr6.eq) goto loc_831230CC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// cmpw cr6,r9,r3
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, xer);
	// blt cr6,0x831230e8
	if (cr6.lt) goto loc_831230E8;
loc_8312311C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83123128"))) PPC_WEAK_FUNC(sub_83123128);
PPC_FUNC_IMPL(__imp__sub_83123128) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r30,r11,-7312
	r30.s64 = r11.s64 + -7312;
	// addi r10,r30,8
	ctx.r10.s64 = r30.s64 + 8;
	// lwz r31,-7312(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + -7312);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x83123198
	if (cr6.eq) goto loc_83123198;
loc_83123150:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// bne cr6,0x83123188
	if (!cr6.eq) goto loc_83123188;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x831250a8
	sub_831250A8(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83123178
	if (cr6.eq) goto loc_83123178;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_83123178:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// mr r31,r29
	r31.u64 = r29.u64;
	// b 0x8312318c
	goto loc_8312318C;
loc_83123188:
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_8312318C:
	// addi r11,r30,8
	r11.s64 = r30.s64 + 8;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x83123150
	if (!cr6.eq) goto loc_83123150;
loc_83123198:
	// lwz r4,32(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831231cc
	if (cr6.eq) goto loc_831231CC;
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x831231bc
	if (cr6.eq) goto loc_831231BC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// b 0x831231c4
	goto loc_831231C4;
loc_831231BC:
	// addi r3,r28,20
	ctx.r3.s64 = r28.s64 + 20;
	// bl 0x831254e8
	sub_831254E8(ctx, base);
loc_831231C4:
	// li r11,0
	r11.s64 = 0;
	// stw r11,32(r28)
	PPC_STORE_U32(r28.u32 + 32, r11.u32);
loc_831231CC:
	// addi r3,r28,20
	ctx.r3.s64 = r28.s64 + 20;
	// bl 0x831255c8
	sub_831255C8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_831231E0"))) PPC_WEAK_FUNC(sub_831231E0);
PPC_FUNC_IMPL(__imp__sub_831231E0) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r23,0
	r23.s64 = 0;
	// mr r26,r23
	r26.u64 = r23.u64;
	// lwz r11,-1060(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1060);
	// mr r24,r23
	r24.u64 = r23.u64;
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// cmplwi cr6,r10,12
	cr6.compare<uint32_t>(ctx.r10.u32, 12, xer);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// blt cr6,0x83123370
	if (cr6.lt) goto loc_83123370;
	// addi r25,r29,20
	r25.s64 = r29.s64 + 20;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x83125518
	sub_83125518(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x83123374
	if (cr0.lt) goto loc_83123374;
	// lbz r11,92(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 92);
	// lbz r10,93(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 93);
	// rotlwi r11,r11,8
	r11.u64 = __builtin_rotateleft32(r11.u32, 8);
	// extsh r11,r11
	r11.s64 = r11.s16;
	// or r30,r11,r10
	r30.u64 = r11.u64 | ctx.r10.u64;
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(r30.s32, 3, xer);
	// blt cr6,0x83123370
	if (cr6.lt) goto loc_83123370;
	// cmpwi cr6,r30,32
	cr6.compare<int32_t>(r30.s32, 32, xer);
	// bgt cr6,0x83123370
	if (cr6.gt) goto loc_83123370;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// rlwinm r5,r30,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x831253c8
	sub_831253C8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x83123374
	if (cr0.lt) goto loc_83123374;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x831232f4
	if (!cr6.gt) goto loc_831232F4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r28,r23
	r28.u64 = r23.u64;
	// addi r27,r11,-9780
	r27.s64 = r11.s64 + -9780;
loc_83123288:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// add r3,r28,r11
	ctx.r3.u64 = r28.u64 + r11.u64;
	// lbz r11,8(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// lbz r10,9(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// rotlwi r11,r11,8
	r11.u64 = __builtin_rotateleft32(r11.u32, 8);
	// lbz r9,10(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// lbz r8,11(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// rlwinm r11,r11,8,0,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r31,r11,r8
	r31.u64 = r11.u64 | ctx.r8.u64;
	// bl 0x831b5880
	sub_831B5880(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831232d4
	if (!cr0.eq) goto loc_831232D4;
	// mr r26,r31
	r26.u64 = r31.u64;
	// b 0x831232e0
	goto loc_831232E0;
loc_831232D4:
	// cmplw cr6,r31,r24
	cr6.compare<uint32_t>(r31.u32, r24.u32, xer);
	// ble cr6,0x831232e0
	if (!cr6.gt) goto loc_831232E0;
	// mr r24,r31
	r24.u64 = r31.u64;
loc_831232E0:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
	// bne 0x83123288
	if (!cr0.eq) goto loc_83123288;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x831232fc
	if (!cr6.eq) goto loc_831232FC;
loc_831232F4:
	// li r31,-1
	r31.s64 = -1;
	// b 0x8312335c
	goto loc_8312335C;
loc_831232FC:
	// cmplw cr6,r24,r26
	cr6.compare<uint32_t>(r24.u32, r26.u32, xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// ble cr6,0x83123338
	if (!cr6.gt) goto loc_83123338;
	// lwz r5,28(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// addi r6,r29,32
	ctx.r6.s64 = r29.s64 + 32;
	// stw r5,40(r29)
	PPC_STORE_U32(r29.u32 + 40, ctx.r5.u32);
	// bl 0x831253c8
	sub_831253C8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bge 0x8312332c
	if (!cr0.lt) goto loc_8312332C;
	// stw r23,40(r29)
	PPC_STORE_U32(r29.u32 + 40, r23.u32);
	// b 0x8312335c
	goto loc_8312335C;
loc_8312332C:
	// li r11,1
	r11.s64 = 1;
	// stw r11,44(r29)
	PPC_STORE_U32(r29.u32 + 44, r11.u32);
	// b 0x8312335c
	goto loc_8312335C;
loc_83123338:
	// stw r26,40(r29)
	PPC_STORE_U32(r29.u32 + 40, r26.u32);
	// addi r30,r29,32
	r30.s64 = r29.s64 + 32;
	// stw r23,44(r29)
	PPC_STORE_U32(r29.u32 + 44, r23.u32);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x831253c8
	sub_831253C8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bge 0x8312335c
	if (!cr0.lt) goto loc_8312335C;
	// stw r23,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r23.u32);
loc_8312335C:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x831254e8
	sub_831254E8(ctx, base);
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r23.u32);
	// b 0x83123374
	goto loc_83123374;
loc_83123370:
	// li r31,-1
	r31.s64 = -1;
loc_83123374:
	// lwz r11,44(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83123394
	if (cr6.eq) goto loc_83123394;
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// addi r3,r29,20
	ctx.r3.s64 = r29.s64 + 20;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83123394
	if (!cr6.eq) goto loc_83123394;
	// bl 0x831255c8
	sub_831255C8(ctx, base);
loc_83123394:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x831bafb8
	sub_831BAFB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_831233A8"))) PPC_WEAK_FUNC(sub_831233A8);
PPC_FUNC_IMPL(__imp__sub_831233A8) {
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
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r11,-1060(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1060);
	// stw r11,644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 644, r11.u32);
	// beq cr6,0x83123458
	if (cr6.eq) goto loc_83123458;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83123458
	if (cr6.eq) goto loc_83123458;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x83123458
	if (cr6.eq) goto loc_83123458;
	// li r8,20
	ctx.r8.s64 = 20;
	// addi r7,r1,624
	ctx.r7.s64 = ctx.r1.s64 + 624;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8324ba6c
	__imp__XeCryptRotSumSha(ctx, base);
	// li r11,272
	r11.s64 = 272;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,57
	ctx.r3.s64 = 57;
	// bl 0x8324ba5c
	__imp__XeKeysGetKey(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x8312342c
	if (!cr0.lt) goto loc_8312342C;
	// lwz r3,644(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 644);
	// bl 0x831bafb8
	sub_831BAFB8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83123464
	goto loc_83123464;
loc_8312342C:
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,-9792
	ctx.r5.s64 = r11.s64 + -9792;
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x8324ba4c
	__imp__XeCryptBnQwBeSigVerify(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_83123458:
	// lwz r3,644(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 644);
	// bl 0x831bafb8
	sub_831BAFB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_83123464:
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
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

__attribute__((alias("__imp__sub_83123480"))) PPC_WEAK_FUNC(sub_83123480);
PPC_FUNC_IMPL(__imp__sub_83123480) {
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
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// mr r26,r27
	r26.u64 = r27.u64;
	// lwz r11,-1060(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1060);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// cmplwi cr6,r10,280
	cr6.compare<uint32_t>(ctx.r10.u32, 280, xer);
	// stw r11,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, r11.u32);
	// bge cr6,0x831234bc
	if (!cr6.lt) goto loc_831234BC;
	// li r29,-1
	r29.s64 = -1;
	// b 0x83123680
	goto loc_83123680;
loc_831234BC:
	// addi r28,r31,20
	r28.s64 = r31.s64 + 20;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,280
	ctx.r5.s64 = 280;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83125518
	sub_83125518(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// blt 0x83123660
	if (cr0.lt) goto loc_83123660;
	// lbz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lbz r6,364(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 364);
	// lbz r11,97(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// lbz r10,365(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 365);
	// rlwimi r11,r7,8,16,23
	r11.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFF00) | (r11.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r5,368(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 368);
	// rlwimi r10,r6,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r6,372(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 372);
	// lbz r8,369(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 369);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// lbz r7,373(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 373);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwimi r8,r5,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r5,357(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 357);
	// rlwimi r7,r6,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r6,356(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 356);
	// lbz r3,360(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 360);
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// lbz r4,361(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 361);
	// rlwimi r5,r6,8,16,23
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFF00) | (ctx.r5.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r30,98(r1)
	r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 98);
	// clrlwi r7,r7,16
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFF;
	// rlwimi r4,r3,8,16,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r3.u32, 8) & 0xFF00) | (ctx.r4.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r6,366(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 366);
	// lbz r3,370(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 370);
	// clrlwi r5,r5,16
	ctx.r5.u64 = ctx.r5.u32 & 0xFFFF;
	// lbz r24,358(r1)
	r24.u64 = PPC_LOAD_U8(ctx.r1.u32 + 358);
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// lbz r25,374(r1)
	r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 374);
	// rlwimi r30,r11,8,0,23
	r30.u64 = (__builtin_rotateleft32(r11.u32, 8) & 0xFFFFFF00) | (r30.u64 & 0xFFFFFFFF000000FF);
	// lbz r23,362(r1)
	r23.u64 = PPC_LOAD_U8(ctx.r1.u32 + 362);
	// rlwimi r6,r10,8,0,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (ctx.r6.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r3,r8,8,0,23
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFFFFFF00) | (ctx.r3.u64 & 0xFFFFFFFF000000FF);
	// lbz r22,99(r1)
	r22.u64 = PPC_LOAD_U8(ctx.r1.u32 + 99);
	// rlwimi r24,r5,8,0,23
	r24.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0xFFFFFF00) | (r24.u64 & 0xFFFFFFFF000000FF);
	// lbz r21,367(r1)
	r21.u64 = PPC_LOAD_U8(ctx.r1.u32 + 367);
	// lbz r8,371(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 371);
	// rlwimi r25,r7,8,0,23
	r25.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFFFFFF00) | (r25.u64 & 0xFFFFFFFF000000FF);
	// lbz r10,375(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 375);
	// rlwimi r23,r4,8,0,23
	r23.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0xFFFFFF00) | (r23.u64 & 0xFFFFFFFF000000FF);
	// lbz r5,359(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 359);
	// rlwimi r22,r30,8,0,23
	r22.u64 = (__builtin_rotateleft32(r30.u32, 8) & 0xFFFFFF00) | (r22.u64 & 0xFFFFFFFF000000FF);
	// lbz r11,363(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 363);
	// rlwimi r10,r25,8,0,23
	ctx.r10.u64 = (__builtin_rotateleft32(r25.u32, 8) & 0xFFFFFF00) | (ctx.r10.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r21,r6,8,0,23
	r21.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFFFFFF00) | (r21.u64 & 0xFFFFFFFF000000FF);
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r22.u32);
	// rlwimi r8,r3,8,0,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r3.u32, 8) & 0xFFFFFF00) | (ctx.r8.u64 & 0xFFFFFFFF000000FF);
	// stw r10,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r10.u32);
	// rlwimi r5,r24,8,0,23
	ctx.r5.u64 = (__builtin_rotateleft32(r24.u32, 8) & 0xFFFFFF00) | (ctx.r5.u64 & 0xFFFFFFFF000000FF);
	// stw r21,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, r21.u32);
	// rlwimi r11,r23,8,0,23
	r11.u64 = (__builtin_rotateleft32(r23.u32, 8) & 0xFFFFFF00) | (r11.u64 & 0xFFFFFFFF000000FF);
	// stw r8,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r8.u32);
	// stw r5,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r5.u32);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// stw r11,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, r11.u32);
	// bne cr6,0x83123658
	if (!cr6.eq) goto loc_83123658;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83123658
	if (!cr6.eq) goto loc_83123658;
	// addi r11,r11,-256
	r11.s64 = r11.s64 + -256;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// bgt cr6,0x83123658
	if (cr6.gt) goto loc_83123658;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,260
	ctx.r4.s64 = 260;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831253c8
	sub_831253C8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// blt 0x83123660
	if (cr0.lt) goto loc_83123660;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// lwz r4,356(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x831233a8
	sub_831233A8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83123658
	if (cr0.eq) goto loc_83123658;
	// lwz r11,368(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// addi r30,r31,40
	r30.s64 = r31.s64 + 40;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// bne 0x83123630
	if (!cr0.eq) goto loc_83123630;
	// li r29,-8
	r29.s64 = -8;
	// b 0x83123660
	goto loc_83123660;
loc_83123630:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r6,364(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// addi r5,r11,20
	ctx.r5.s64 = r11.s64 + 20;
	// bl 0x83121840
	sub_83121840(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83123698
	if (cr0.eq) goto loc_83123698;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// stw r27,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r27.u32);
loc_83123658:
	// lis r26,-32768
	r26.s64 = -2147483648;
	// ori r26,r26,16389
	r26.u64 = r26.u64 | 16389;
loc_83123660:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83123674
	if (cr6.eq) goto loc_83123674;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831254e8
	sub_831254E8(ctx, base);
loc_83123674:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// li r31,-1
	r31.s64 = -1;
	// blt cr6,0x83123684
	if (cr6.lt) goto loc_83123684;
loc_83123680:
	// mr r31,r29
	r31.u64 = r29.u64;
loc_83123684:
	// lwz r3,376(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	// bl 0x831bafb8
	sub_831BAFB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831b0b5c
	return;
loc_83123698:
	// li r11,1
	r11.s64 = 1;
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// li r5,256
	ctx.r5.s64 = 256;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// b 0x83123660
	goto loc_83123660;
}

__attribute__((alias("__imp__sub_831236B8"))) PPC_WEAK_FUNC(sub_831236B8);
PPC_FUNC_IMPL(__imp__sub_831236B8) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r29,r30,20
	r29.s64 = r30.s64 + 20;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83125308
	sub_83125308(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x83123768
	if (cr0.lt) goto loc_83123768;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(r11.u32, 12, xer);
	// blt cr6,0x8312375c
	if (cr6.lt) goto loc_8312375C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83125518
	sub_83125518(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x83123760
	if (cr0.lt) goto loc_83123760;
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lis r10,30836
	ctx.r10.s64 = 2020868096;
	// lbz r11,81(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// ori r10,r10,29798
	ctx.r10.u64 = ctx.r10.u64 | 29798;
	// rlwimi r11,r9,8,16,23
	r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (r11.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r9,83(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// rlwimi r8,r11,8,0,23
	ctx.r8.u64 = (__builtin_rotateleft32(r11.u32, 8) & 0xFFFFFF00) | (ctx.r8.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r9,r8,8,0,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFFFFFF00) | (ctx.r9.u64 & 0xFFFFFFFF000000FF);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bne cr6,0x8312374c
	if (!cr6.eq) goto loc_8312374C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83123480
	sub_83123480(ctx, base);
	// b 0x83123778
	goto loc_83123778;
loc_8312374C:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r11,-6112(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -6112);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83123770
	if (cr6.eq) goto loc_83123770;
loc_8312375C:
	// li r31,-1
	r31.s64 = -1;
loc_83123760:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831255c8
	sub_831255C8(ctx, base);
loc_83123768:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x83123778
	goto loc_83123778;
loc_83123770:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831231e0
	sub_831231E0(ctx, base);
loc_83123778:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83123780"))) PPC_WEAK_FUNC(sub_83123780);
PPC_FUNC_IMPL(__imp__sub_83123780) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r11,-6128
	ctx.r3.s64 = r11.s64 + -6128;
	// bl 0x83125058
	sub_83125058(ctx, base);
	// lis r11,-31932
	r11.s64 = -2092695552;
	// addi r3,r11,-7312
	ctx.r3.s64 = r11.s64 + -7312;
	// bl 0x83125058
	sub_83125058(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831237B8"))) PPC_WEAK_FUNC(sub_831237B8);
PPC_FUNC_IMPL(__imp__sub_831237B8) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83123800
	if (cr6.eq) goto loc_83123800;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bne 0x83123800
	if (!cr0.eq) goto loc_83123800;
	// bl 0x831250a8
	sub_831250A8(ctx, base);
	// addi r3,r31,304
	ctx.r3.s64 = r31.s64 + 304;
	// bl 0x83125690
	sub_83125690(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83123128
	sub_83123128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_83123800:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_83123818"))) PPC_WEAK_FUNC(sub_83123818);
PPC_FUNC_IMPL(__imp__sub_83123818) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83123834
	if (!cr6.eq) goto loc_83123834;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// b 0x83123838
	goto loc_83123838;
loc_83123834:
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
loc_83123838:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83123840"))) PPC_WEAK_FUNC(sub_83123840);
PPC_FUNC_IMPL(__imp__sub_83123840) {
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83123890
	if (cr6.eq) goto loc_83123890;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83123890
	if (cr6.eq) goto loc_83123890;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83123880
	if (!cr6.eq) goto loc_83123880;
	// li r31,-1
	r31.s64 = -1;
	// b 0x83123898
	goto loc_83123898;
loc_83123880:
	// addi r4,r11,48
	ctx.r4.s64 = r11.s64 + 48;
	// li r5,256
	ctx.r5.s64 = 256;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// b 0x83123898
	goto loc_83123898;
loc_83123890:
	// lis r31,-32768
	r31.s64 = -2147483648;
	// ori r31,r31,6
	r31.u64 = r31.u64 | 6;
loc_83123898:
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

__attribute__((alias("__imp__sub_831238B0"))) PPC_WEAK_FUNC(sub_831238B0);
PPC_FUNC_IMPL(__imp__sub_831238B0) {
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83123900
	if (cr6.eq) goto loc_83123900;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83123900
	if (cr6.eq) goto loc_83123900;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x831238f0
	if (!cr6.eq) goto loc_831238F0;
	// li r31,-1
	r31.s64 = -1;
	// b 0x83123908
	goto loc_83123908;
loc_831238F0:
	// addi r4,r11,336
	ctx.r4.s64 = r11.s64 + 336;
	// li r5,256
	ctx.r5.s64 = 256;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// b 0x83123908
	goto loc_83123908;
loc_83123900:
	// lis r31,-32768
	r31.s64 = -2147483648;
	// ori r31,r31,6
	r31.u64 = r31.u64 | 6;
loc_83123908:
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

__attribute__((alias("__imp__sub_83123920"))) PPC_WEAK_FUNC(sub_83123920);
PPC_FUNC_IMPL(__imp__sub_83123920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-6112(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6112, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83123938"))) PPC_WEAK_FUNC(sub_83123938);
PPC_FUNC_IMPL(__imp__sub_83123938) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r11,1
	r11.s64 = 1;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r5,92
	ctx.r4.s64 = ctx.r5.s64 + 92;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// lfs f0,-21220(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -21220);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// stw r6,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r6.u32);
	// stfs f1,8(r5)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lha r10,660(r9)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + 660));
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfs f0,-9772(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -9772);
	f0.f64 = double(temp.f32);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r11,0
	r11.s64 = 0;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// li r3,1
	ctx.r3.s64 = 1;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,20(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// lha r10,660(r9)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + 660));
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r11,28(r5)
	PPC_STORE_U32(ctx.r5.u32 + 28, r11.u32);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// sth r11,76(r5)
	PPC_STORE_U16(ctx.r5.u32 + 76, r11.u16);
	// stw r11,68(r5)
	PPC_STORE_U32(ctx.r5.u32 + 68, r11.u32);
	// stw r11,72(r5)
	PPC_STORE_U32(ctx.r5.u32 + 72, r11.u32);
	// stw r11,88(r5)
	PPC_STORE_U32(ctx.r5.u32 + 88, r11.u32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,24(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 24, temp.u32);
	// sth r11,78(r5)
	PPC_STORE_U16(ctx.r5.u32 + 78, r11.u16);
	// sth r11,80(r5)
	PPC_STORE_U16(ctx.r5.u32 + 80, r11.u16);
	// sth r11,82(r5)
	PPC_STORE_U16(ctx.r5.u32 + 82, r11.u16);
	// sth r11,84(r5)
	PPC_STORE_U16(ctx.r5.u32 + 84, r11.u16);
	// bl 0x831270f8
	sub_831270F8(ctx, base);
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

__attribute__((alias("__imp__sub_83123A00"))) PPC_WEAK_FUNC(sub_83123A00);
PPC_FUNC_IMPL(__imp__sub_83123A00) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmpwi cr6,r6,3
	cr6.compare<int32_t>(ctx.r6.s32, 3, xer);
	// bne cr6,0x83123a60
	if (!cr6.eq) goto loc_83123A60;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfs f0,-28704(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -28704);
	f0.f64 = double(temp.f32);
	// fmuls f31,f31,f0
	f31.f64 = double(float(f31.f64 * f0.f64));
loc_83123A34:
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r27,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r27.u32);
	// beq cr6,0x83123a68
	if (cr6.eq) goto loc_83123A68;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r30.u32);
	// bne 0x83123a74
	if (!cr0.eq) goto loc_83123A74;
	// li r31,-8
	r31.s64 = -8;
	// b 0x83123a9c
	goto loc_83123A9C;
loc_83123A60:
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x83123a34
	if (cr6.eq) goto loc_83123A34;
loc_83123A68:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// b 0x83123aa0
	goto loc_83123AA0;
loc_83123A74:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83123938
	sub_83123938(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bge 0x83123a9c
	if (!cr0.lt) goto loc_83123A9C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// stw r27,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r27.u32);
loc_83123A9C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_83123AA0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83123AB0"))) PPC_WEAK_FUNC(sub_83123AB0);
PPC_FUNC_IMPL(__imp__sub_83123AB0) {
	PPC_FUNC_PROLOGUE();
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r31,8
	ctx.r5.s64 = r31.s64 + 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r26,0
	r26.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// bl 0x83125260
	sub_83125260(ctx, base);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r29,r31,32
	r29.s64 = r31.s64 + 32;
	// addi r4,r11,-9704
	ctx.r4.s64 = r11.s64 + -9704;
	// li r5,28
	ctx.r5.s64 = 28;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lha r11,660(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 660));
	// rlwinm r24,r11,4,0,27
	r24.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// twllei r24,0
	// rlwinm. r10,r9,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// twllei r24,0
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r11.s32);
	// divw r7,r10,r24
	ctx.r7.s32 = ctx.r10.s32 / r24.s32;
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// stw r7,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r7.u32);
	// lwz r7,16(r25)
	ctx.r7.u64 = PPC_LOAD_U32(r25.u32 + 16);
	// mullw r7,r7,r11
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(r11.s32);
	// rotlwi r11,r7,1
	r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// stw r8,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r8.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// andc r10,r24,r10
	ctx.r10.u64 = r24.u64 & ~ctx.r10.u64;
	// divw r8,r7,r24
	ctx.r8.s32 = ctx.r7.s32 / r24.s32;
	// andc r11,r24,r11
	r11.u64 = r24.u64 & ~r11.u64;
	// twlgei r10,-1
	// stw r8,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r8.u32);
	// twlgei r11,-1
	// beq 0x83123b8c
	if (cr0.eq) goto loc_83123B8C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lfs f12,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f0,-31000(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31000);
	f0.f64 = double(temp.f32);
	// lfs f13,-22120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -22120);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	f0.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lhz r26,94(r1)
	r26.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
loc_83123B8C:
	// clrlwi. r11,r9,31
	r11.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83123bec
	if (cr0.eq) goto loc_83123BEC;
	// lha r9,680(r30)
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 680));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfs f13,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lha r11,678(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 678));
	// lfs f0,2244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmuls f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lhz r27,102(r1)
	r27.u64 = PPC_LOAD_U16(ctx.r1.u32 + 102);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f0.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, f0.u64);
	// lhz r28,102(r1)
	r28.u64 = PPC_LOAD_U16(ctx.r1.u32 + 102);
loc_83123BEC:
	// lha r9,674(r30)
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 674));
	// extsh r10,r28
	ctx.r10.s64 = r28.s16;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// extsh r8,r27
	ctx.r8.s64 = r27.s16;
	// lwz r6,44(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// mullw r10,r10,r7
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// addi r10,r10,2048
	ctx.r10.s64 = ctx.r10.s64 + 2048;
	// extsh r11,r26
	r11.s64 = r26.s16;
	// srawi r10,r10,12
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 12;
	// li r9,1
	ctx.r9.s64 = 1;
	// sth r10,60(r31)
	PPC_STORE_U16(r31.u32 + 60, ctx.r10.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// lha r10,676(r30)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 676));
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mullw r10,r10,r7
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// addi r10,r10,2048
	ctx.r10.s64 = ctx.r10.s64 + 2048;
	// srawi r10,r10,12
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 12;
	// sth r10,62(r31)
	PPC_STORE_U16(r31.u32 + 62, ctx.r10.u16);
	// lha r10,668(r30)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 668));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// addi r10,r10,2048
	ctx.r10.s64 = ctx.r10.s64 + 2048;
	// srawi r10,r10,12
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 12;
	// sth r10,64(r31)
	PPC_STORE_U16(r31.u32 + 64, ctx.r10.u16);
	// lha r10,664(r30)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 664));
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// mullw r11,r11,r6
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r6.s32);
	// stw r9,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r9.u32);
	// addi r11,r11,2048
	r11.s64 = r11.s64 + 2048;
	// srawi r11,r11,12
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFF) != 0);
	r11.s64 = r11.s32 >> 12;
	// sth r11,66(r31)
	PPC_STORE_U16(r31.u32 + 66, r11.u16);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_83123C78"))) PPC_WEAK_FUNC(sub_83123C78);
PPC_FUNC_IMPL(__imp__sub_83123C78) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83123ccc
	if (cr6.eq) goto loc_83123CCC;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne 0x83123ccc
	if (!cr0.eq) goto loc_83123CCC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x831237b8
	sub_831237B8(ctx, base);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83123cbc
	if (cr6.eq) goto loc_83123CBC;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_83123CBC:
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// bl 0x83127120
	sub_83127120(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_83123CCC:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_83123CE8"))) PPC_WEAK_FUNC(sub_83123CE8);
PPC_FUNC_IMPL(__imp__sub_83123CE8) {
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83124030
	if (cr6.eq) goto loc_83124030;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83124030
	if (cr6.eq) goto loc_83124030;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x83124030
	if (cr6.eq) goto loc_83124030;
	// addi r3,r11,304
	ctx.r3.s64 = r11.s64 + 304;
	// bl 0x83125710
	sub_83125710(ctx, base);
	// lhz r11,76(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 76);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bne cr6,0x83123d40
	if (!cr6.eq) goto loc_83123D40;
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83124028
	if (!cr6.eq) goto loc_83124028;
loc_83123D40:
	// li r26,0
	r26.s64 = 0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r11,304
	ctx.r3.s64 = r11.s64 + 304;
	// bl 0x831263c0
	sub_831263C0(ctx, base);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// ble cr6,0x83123dd0
	if (!cr6.gt) goto loc_83123DD0;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// rlwinm r11,r5,0,0,23
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFF00;
	// addi r30,r11,256
	r30.s64 = r11.s64 + 256;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83123d98
	if (cr6.eq) goto loc_83123D98;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// stw r26,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r26.u32);
	// stw r26,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r26.u32);
	// sth r26,76(r31)
	PPC_STORE_U16(r31.u32 + 76, r26.u16);
	// stw r26,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r26.u32);
loc_83123D98:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// stw r3,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83123dc8
	if (!cr0.eq) goto loc_83123DC8;
	// sth r26,78(r31)
	PPC_STORE_U16(r31.u32 + 78, r26.u16);
	// li r3,-8
	ctx.r3.s64 = -8;
	// sth r26,80(r31)
	PPC_STORE_U16(r31.u32 + 80, r26.u16);
	// sth r26,82(r31)
	PPC_STORE_U16(r31.u32 + 82, r26.u16);
	// sth r26,84(r31)
	PPC_STORE_U16(r31.u32 + 84, r26.u16);
	// stw r26,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r26.u32);
	// b 0x83124038
	goto loc_83124038;
loc_83123DC8:
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r30.u32);
loc_83123DD0:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// mr r11,r28
	r11.u64 = r28.u64;
	// bne cr6,0x83123dec
	if (!cr6.eq) goto loc_83123DEC;
	// mr r11,r26
	r11.u64 = r26.u64;
loc_83123DEC:
	// clrlwi r10,r11,16
	ctx.r10.u64 = r11.u32 & 0xFFFF;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// sth r10,76(r31)
	PPC_STORE_U16(r31.u32 + 76, ctx.r10.u16);
	// mr r11,r25
	r11.u64 = r25.u64;
	// bne cr6,0x83123e04
	if (!cr6.eq) goto loc_83123E04;
	// mr r11,r26
	r11.u64 = r26.u64;
loc_83123E04:
	// clrlwi. r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// beq 0x83123ff0
	if (cr0.eq) goto loc_83123FF0;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83123ff0
	if (cr6.eq) goto loc_83123FF0;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lbz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// lbz r7,6(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lbz r5,3(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// lbz r4,5(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// rotlwi r6,r6,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// lbz r3,7(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// or r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 | ctx.r5.u64;
	// lbz r10,9(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 9);
	// or r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 | ctx.r4.u64;
	// lhz r5,684(r11)
	ctx.r5.u64 = PPC_LOAD_U16(r11.u32 + 684);
	// or r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 | ctx.r3.u64;
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
	// rlwinm. r6,r5,0,30,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// extsh r28,r9
	r28.s64 = ctx.r9.s16;
	// extsh r27,r8
	r27.s64 = ctx.r8.s16;
	// extsh r30,r7
	r30.s64 = ctx.r7.s16;
	// extsh r29,r10
	r29.s64 = ctx.r10.s16;
	// bne 0x83123e94
	if (!cr0.eq) goto loc_83123E94;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r11,304
	ctx.r3.s64 = r11.s64 + 304;
	// bl 0x831258d0
	sub_831258D0(ctx, base);
	// subf r11,r28,r3
	r11.s64 = ctx.r3.s64 - r28.s64;
	// extsh r26,r11
	r26.s64 = r11.s16;
loc_83123E94:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83123f20
	if (cr0.eq) goto loc_83123F20;
	// extsh r10,r30
	ctx.r10.s64 = r30.s16;
	// lfs f13,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// extsh r8,r27
	ctx.r8.s64 = r27.s16;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// extsh r10,r29
	ctx.r10.s64 = r29.s16;
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// extsh r9,r28
	ctx.r9.s64 = r28.s16;
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fcfid f9,f0
	ctx.f9.f64 = double(f0.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfs f0,2244(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2244);
	f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// frsp f13,f10
	ctx.f13.f64 = double(float(ctx.f10.f64));
	// frsp f10,f9
	ctx.f10.f64 = double(float(ctx.f9.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmadds f11,f11,f0,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * f0.f64 + ctx.f10.f64));
	// fmadds f0,f13,f0,f12
	f0.f64 = double(float(ctx.f13.f64 * f0.f64 + ctx.f12.f64));
	// fctiwz f13,f11
	ctx.f13.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lhz r28,102(r1)
	r28.u64 = PPC_LOAD_U16(ctx.r1.u32 + 102);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lhz r30,94(r1)
	r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
loc_83123F20:
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83123f68
	if (cr0.eq) goto loc_83123F68;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	f0.f64 = double(temp.f32);
	// lfs f31,-31000(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31000);
	f31.f64 = double(temp.f32);
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 * f31.f64));
	// bl 0x831b4548
	sub_831B4548(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, f0.u64);
	// lfs f0,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	f0.f64 = double(temp.f32);
	// lhz r11,102(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 102);
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 * f31.f64));
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
	// bl 0x831b4548
	sub_831B4548(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, f0.u64);
	// lhz r11,102(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 102);
	// add r29,r11,r29
	r29.u64 = r11.u64 + r29.u64;
loc_83123F68:
	// extsh r9,r26
	ctx.r9.s64 = r26.s16;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// extsh r10,r29
	ctx.r10.s64 = r29.s16;
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// add r11,r28,r9
	r11.u64 = r28.u64 + ctx.r9.u64;
	// neg r4,r10
	ctx.r4.s64 = -ctx.r10.s64;
	// extsh r11,r11
	r11.s64 = r11.s16;
	// subf r10,r27,r10
	ctx.r10.s64 = ctx.r10.s64 - r27.s64;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// lis r10,0
	ctx.r10.s64 = 0;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + r11.u64;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// mullw r8,r8,r6
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// mullw r11,r11,r6
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r6.s32);
	// mullw r7,r7,r5
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// mullw r9,r9,r5
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// srawi r11,r11,16
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFF) != 0);
	r11.s64 = r11.s32 >> 16;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// srawi r10,r9,16
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 16;
	// sth r11,78(r31)
	PPC_STORE_U16(r31.u32 + 78, r11.u16);
	// srawi r9,r8,16
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 16;
	// srawi r8,r7,16
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 16;
	// sth r10,80(r31)
	PPC_STORE_U16(r31.u32 + 80, ctx.r10.u16);
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// sth r9,82(r31)
	PPC_STORE_U16(r31.u32 + 82, ctx.r9.u16);
	// sth r8,84(r31)
	PPC_STORE_U16(r31.u32 + 84, ctx.r8.u16);
	// b 0x83124028
	goto loc_83124028;
loc_83123FF0:
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// sth r26,78(r31)
	PPC_STORE_U16(r31.u32 + 78, r26.u16);
	// sth r26,80(r31)
	PPC_STORE_U16(r31.u32 + 80, r26.u16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// sth r26,82(r31)
	PPC_STORE_U16(r31.u32 + 82, r26.u16);
	// sth r26,84(r31)
	PPC_STORE_U16(r31.u32 + 84, r26.u16);
	// beq cr6,0x83124028
	if (cr6.eq) goto loc_83124028;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// ble cr6,0x83124018
	if (!cr6.gt) goto loc_83124018;
	// li r11,10
	r11.s64 = 10;
loc_83124018:
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
loc_83124028:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83124038
	goto loc_83124038;
loc_83124030:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
loc_83124038:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_83124048"))) PPC_WEAK_FUNC(sub_83124048);
PPC_FUNC_IMPL(__imp__sub_83124048) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x83123ce8
	sub_83123CE8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x831240d8
	if (!cr0.eq) goto loc_831240D8;
	// addi r29,r31,92
	r29.s64 = r31.s64 + 92;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83127168
	sub_83127168(ctx, base);
	// lwz r5,68(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x831240d8
	if (cr6.eq) goto loc_831240D8;
	// lbz r11,0(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// lbz r10,1(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// rotlwi r11,r11,8
	r11.u64 = __builtin_rotateleft32(r11.u32, 8);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// extsh. r11,r11
	r11.s64 = r11.s16;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x831240d8
	if (cr0.eq) goto loc_831240D8;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83126bc0
	sub_83126BC0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x831240d8
	if (cr0.lt) goto loc_831240D8;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r31,78
	ctx.r5.s64 = r31.s64 + 78;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831288c0
	sub_831288C0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_831240D8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_831240E8"))) PPC_WEAK_FUNC(sub_831240E8);
PPC_FUNC_IMPL(__imp__sub_831240E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83124190
	if (cr6.eq) goto loc_83124190;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83124190
	if (cr6.eq) goto loc_83124190;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x83124190
	if (cr6.eq) goto loc_83124190;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lhz r30,668(r11)
	r30.u64 = PPC_LOAD_U16(r11.u32 + 668);
	// rlwinm. r11,r10,0,30,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8312414c
	if (cr0.eq) goto loc_8312414C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lfs f13,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-31000(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31000);
	f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x831b4548
	sub_831B4548(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lhz r11,86(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
loc_8312414C:
	// extsh r11,r30
	r11.s64 = r30.s16;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lha r11,660(r10)
	r11.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + 660));
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f0,0(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
	// b 0x83124198
	goto loc_83124198;
loc_83124190:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
loc_83124198:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831241A0"))) PPC_WEAK_FUNC(sub_831241A0);
PPC_FUNC_IMPL(__imp__sub_831241A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x831241c8
	if (!cr6.eq) goto loc_831241C8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// b 0x83124240
	goto loc_83124240;
loc_831241C8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lhz r30,670(r11)
	r30.u64 = PPC_LOAD_U16(r11.u32 + 670);
	// beq 0x83124200
	if (cr0.eq) goto loc_83124200;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lfs f13,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-31000(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31000);
	f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x831b4548
	sub_831B4548(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lhz r11,86(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
loc_83124200:
	// extsh r11,r30
	r11.s64 = r30.s16;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lha r11,660(r10)
	r11.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + 660));
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f0,0(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
loc_83124240:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83124248"))) PPC_WEAK_FUNC(sub_83124248);
PPC_FUNC_IMPL(__imp__sub_83124248) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83124270
	if (!cr6.eq) goto loc_83124270;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// b 0x831242e8
	goto loc_831242E8;
loc_83124270:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lhz r30,664(r11)
	r30.u64 = PPC_LOAD_U16(r11.u32 + 664);
	// beq 0x831242a8
	if (cr0.eq) goto loc_831242A8;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lfs f13,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-31000(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31000);
	f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x831b4548
	sub_831B4548(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lhz r11,86(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
loc_831242A8:
	// extsh r11,r30
	r11.s64 = r30.s16;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lha r11,660(r10)
	r11.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + 660));
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f0,0(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
loc_831242E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831242F0"))) PPC_WEAK_FUNC(sub_831242F0);
PPC_FUNC_IMPL(__imp__sub_831242F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83124304
	if (!cr6.eq) goto loc_83124304;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// blr 
	return;
loc_83124304:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lha r10,660(r11)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(r11.u32 + 660));
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lha r11,666(r11)
	r11.s64 = int16_t(PPC_LOAD_U16(r11.u32 + 666));
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fmuls f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f0,0(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83124348"))) PPC_WEAK_FUNC(sub_83124348);
PPC_FUNC_IMPL(__imp__sub_83124348) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83124370
	if (!cr6.eq) goto loc_83124370;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// b 0x83124478
	goto loc_83124478;
loc_83124370:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lhz r8,676(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 676);
	// lhz r9,674(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 674);
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// extsh r30,r9
	r30.s64 = ctx.r9.s16;
	// beq 0x8312440c
	if (cr0.eq) goto loc_8312440C;
	// lha r9,678(r11)
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(r11.u32 + 678));
	// extsh r8,r30
	ctx.r8.s64 = r30.s16;
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfs f13,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lha r11,680(r11)
	r11.s64 = int16_t(PPC_LOAD_U16(r11.u32 + 680));
	// lfd f0,88(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(f0.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfs f0,2244(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2244);
	f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// frsp f13,f11
	ctx.f13.f64 = double(float(ctx.f11.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fnmsubs f13,f12,f0,f13
	ctx.f13.f64 = double(float(-(ctx.f12.f64 * f0.f64 - ctx.f13.f64)));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lha r11,94(r1)
	r11.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 94));
	// fcfid f13,f10
	ctx.f13.f64 = double(ctx.f10.s64);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmadds f0,f13,f0,f12
	f0.f64 = double(float(ctx.f13.f64 * f0.f64 + ctx.f12.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lhz r30,94(r1)
	r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
loc_8312440C:
	// rlwinm. r11,r10,0,30,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83124438
	if (cr0.eq) goto loc_83124438;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lfs f13,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-31000(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31000);
	f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x831b4548
	sub_831B4548(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lhz r11,94(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
loc_83124438:
	// extsh r10,r30
	ctx.r10.s64 = r30.s16;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lha r11,660(r11)
	r11.s64 = int16_t(PPC_LOAD_U16(r11.u32 + 660));
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f0,0(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
loc_83124478:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83124480"))) PPC_WEAK_FUNC(sub_83124480);
PPC_FUNC_IMPL(__imp__sub_83124480) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x831244a8
	if (!cr6.eq) goto loc_831244A8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// b 0x8312452c
	goto loc_8312452C;
loc_831244A8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lhz r9,680(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 680);
	// lhz r11,678(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 678);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// extsh r30,r11
	r30.s64 = r11.s16;
	// beq 0x831244ec
	if (cr0.eq) goto loc_831244EC;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lfs f13,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-31000(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31000);
	f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x831b4548
	sub_831B4548(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lhz r11,86(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
loc_831244EC:
	// extsh r11,r30
	r11.s64 = r30.s16;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lha r11,660(r10)
	r11.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + 660));
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f0,0(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
loc_8312452C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83124538"))) PPC_WEAK_FUNC(sub_83124538);
PPC_FUNC_IMPL(__imp__sub_83124538) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r11,304
	ctx.r3.s64 = r11.s64 + 304;
	// bl 0x83125870
	sub_83125870(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// clrlwi r30,r3,16
	r30.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83124590
	if (cr0.eq) goto loc_83124590;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lfs f13,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-31000(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31000);
	f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x831b4548
	sub_831B4548(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lha r11,86(r1)
	r11.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 86));
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
loc_83124590:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mullw r11,r11,r30
	r11.s64 = int64_t(r11.s32) * int64_t(r30.s32);
	// addi r11,r11,2048
	r11.s64 = r11.s64 + 2048;
	// srawi r11,r11,12
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFF) != 0);
	r11.s64 = r11.s32 >> 12;
	// extsh r3,r11
	ctx.r3.s64 = r11.s16;
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

__attribute__((alias("__imp__sub_831245C0"))) PPC_WEAK_FUNC(sub_831245C0);
PPC_FUNC_IMPL(__imp__sub_831245C0) {
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b0c
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83124934
	if (cr6.eq) goto loc_83124934;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83124934
	if (cr6.eq) goto loc_83124934;
	// bl 0x83123ce8
	sub_83123CE8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8312493c
	if (!cr0.eq) goto loc_8312493C;
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831248dc
	if (cr6.eq) goto loc_831248DC;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r11,1(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// extsh. r11,r11
	r11.s64 = r11.s16;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x831248dc
	if (cr0.eq) goto loc_831248DC;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// li r30,0
	r30.s64 = 0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lbz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// lbz r7,6(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lbz r5,3(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// lbz r4,5(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// rotlwi r6,r6,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// lbz r3,7(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// or r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 | ctx.r9.u64;
	// lbz r10,9(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 9);
	// or r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 | ctx.r4.u64;
	// lhz r5,684(r11)
	ctx.r5.u64 = PPC_LOAD_U16(r11.u32 + 684);
	// or r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 | ctx.r3.u64;
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
	// rlwinm. r6,r5,0,30,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// extsh r28,r9
	r28.s64 = ctx.r9.s16;
	// extsh r26,r8
	r26.s64 = ctx.r8.s16;
	// extsh r29,r7
	r29.s64 = ctx.r7.s16;
	// extsh r27,r10
	r27.s64 = ctx.r10.s16;
	// bne 0x831246b8
	if (!cr0.eq) goto loc_831246B8;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r11,304
	ctx.r3.s64 = r11.s64 + 304;
	// bl 0x83125710
	sub_83125710(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,304
	ctx.r3.s64 = r11.s64 + 304;
	// bl 0x831258d0
	sub_831258D0(ctx, base);
	// subf r11,r28,r3
	r11.s64 = ctx.r3.s64 - r28.s64;
	// extsh r30,r11
	r30.s64 = r11.s16;
loc_831246B8:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83124744
	if (cr0.eq) goto loc_83124744;
	// extsh r10,r29
	ctx.r10.s64 = r29.s16;
	// lfs f13,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// extsh r8,r26
	ctx.r8.s64 = r26.s16;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// extsh r10,r27
	ctx.r10.s64 = r27.s16;
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// extsh r9,r28
	ctx.r9.s64 = r28.s16;
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fcfid f9,f0
	ctx.f9.f64 = double(f0.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfs f0,2244(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2244);
	f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// frsp f13,f10
	ctx.f13.f64 = double(float(ctx.f10.f64));
	// frsp f10,f9
	ctx.f10.f64 = double(float(ctx.f9.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmadds f11,f11,f0,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * f0.f64 + ctx.f10.f64));
	// fmadds f0,f13,f0,f12
	f0.f64 = double(float(ctx.f13.f64 * f0.f64 + ctx.f12.f64));
	// fctiwz f13,f11
	ctx.f13.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lhz r28,94(r1)
	r28.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lhz r29,86(r1)
	r29.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
loc_83124744:
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8312478c
	if (cr0.eq) goto loc_8312478C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	f0.f64 = double(temp.f32);
	// lfs f31,-31000(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31000);
	f31.f64 = double(temp.f32);
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 * f31.f64));
	// bl 0x831b4548
	sub_831B4548(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lfs f0,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	f0.f64 = double(temp.f32);
	// lhz r11,94(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 * f31.f64));
	// add r29,r11,r29
	r29.u64 = r11.u64 + r29.u64;
	// bl 0x831b4548
	sub_831B4548(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lhz r11,94(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// add r27,r11,r27
	r27.u64 = r11.u64 + r27.u64;
loc_8312478C:
	// extsh r11,r28
	r11.s64 = r28.s16;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// extsh r30,r30
	r30.s64 = r30.s16;
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f0.f64 = double(temp.f32);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lha r10,660(r10)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + 660));
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 / ctx.f13.f64));
	// bl 0x831b47b8
	sub_831B47B8(ctx, base);
	// fctiwz f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// extsh r11,r26
	r11.s64 = r26.s16;
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lhz r28,94(r1)
	r28.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f0.f64 = double(temp.f32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lha r11,660(r10)
	r11.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + 660));
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 / ctx.f13.f64));
	// bl 0x831b47b8
	sub_831B47B8(ctx, base);
	// fctiwz f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// extsh r11,r29
	r11.s64 = r29.s16;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f0.f64 = double(temp.f32);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// lha r10,660(r10)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + 660));
	// lhz r30,94(r1)
	r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// lfd f31,-3744(r9)
	f31.u64 = PPC_LOAD_U64(ctx.r9.u32 + -3744);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// fadd f1,f0,f31
	ctx.f1.f64 = f0.f64 + f31.f64;
	// bl 0x831b4548
	sub_831B4548(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// extsh r11,r27
	r11.s64 = r27.s16;
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lhz r31,94(r1)
	r31.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lha r11,660(r10)
	r11.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + 660));
	// lfd f0,88(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// fcfid f13,f12
	ctx.f13.f64 = double(ctx.f12.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// fadd f1,f0,f31
	ctx.f1.f64 = f0.f64 + f31.f64;
	// bl 0x831b4548
	sub_831B4548(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lhz r11,94(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// b 0x831248ec
	goto loc_831248EC;
loc_831248DC:
	// li r28,0
	r28.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// li r11,0
	r11.s64 = 0;
loc_831248EC:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x831248fc
	if (cr6.eq) goto loc_831248FC;
	// extsh r10,r28
	ctx.r10.s64 = r28.s16;
	// stw r10,0(r24)
	PPC_STORE_U32(r24.u32 + 0, ctx.r10.u32);
loc_831248FC:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x8312490c
	if (cr6.eq) goto loc_8312490C;
	// extsh r10,r30
	ctx.r10.s64 = r30.s16;
	// stw r10,0(r23)
	PPC_STORE_U32(r23.u32 + 0, ctx.r10.u32);
loc_8312490C:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x8312491c
	if (cr6.eq) goto loc_8312491C;
	// extsh r10,r31
	ctx.r10.s64 = r31.s16;
	// stw r10,0(r22)
	PPC_STORE_U32(r22.u32 + 0, ctx.r10.u32);
loc_8312491C:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x8312492c
	if (cr6.eq) goto loc_8312492C;
	// extsh r11,r11
	r11.s64 = r11.s16;
	// stw r11,0(r21)
	PPC_STORE_U32(r21.u32 + 0, r11.u32);
loc_8312492C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8312493c
	goto loc_8312493C;
loc_83124934:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
loc_8312493C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_83124948"))) PPC_WEAK_FUNC(sub_83124948);
PPC_FUNC_IMPL(__imp__sub_83124948) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83124998
	if (cr6.eq) goto loc_83124998;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83124998
	if (cr6.eq) goto loc_83124998;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83124998
	if (cr6.eq) goto loc_83124998;
	// addi r3,r11,304
	ctx.r3.s64 = r11.s64 + 304;
	// bl 0x83125710
	sub_83125710(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x831249a0
	goto loc_831249A0;
loc_83124998:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
loc_831249A0:
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

__attribute__((alias("__imp__sub_831249B8"))) PPC_WEAK_FUNC(sub_831249B8);
PPC_FUNC_IMPL(__imp__sub_831249B8) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r28,r11,-6128
	r28.s64 = r11.s64 + -6128;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r10,r28,8
	ctx.r10.s64 = r28.s64 + 8;
	// lwz r31,-6128(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + -6128);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x83124a08
	if (cr6.eq) goto loc_83124A08;
loc_831249E4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x831ba858
	sub_831BA858(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83124a2c
	if (cr0.eq) goto loc_83124A2C;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r28,8
	r11.s64 = r28.s64 + 8;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x831249e4
	if (!cr6.eq) goto loc_831249E4;
loc_83124A08:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b1a88
	sub_831B1A88(ctx, base);
	// addi r11,r3,361
	r11.s64 = ctx.r3.s64 + 361;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x83124a3c
	if (!cr0.eq) goto loc_83124A3C;
	// li r3,-8
	ctx.r3.s64 = -8;
	// b 0x83124ae8
	goto loc_83124AE8;
loc_83124A2C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x83124ae0
	goto loc_83124AE0;
loc_83124A3C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r31,720
	r29.s64 = r31.s64 + 720;
	// bl 0x831b1a88
	sub_831B1A88(ctx, base);
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x831ba8e0
	sub_831BA8E0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r29.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// bl 0x83125078
	sub_83125078(ctx, base);
	// addi r29,r31,304
	r29.s64 = r31.s64 + 304;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83125618
	sub_83125618(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831236b8
	sub_831236B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x83124ac4
	if (cr0.lt) goto loc_83124AC4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,40(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x83126540
	sub_83126540(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x83124ad4
	if (!cr0.lt) goto loc_83124AD4;
loc_83124AC4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831237b8
	sub_831237B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x83124ae8
	goto loc_83124AE8;
loc_83124AD4:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83125088
	sub_83125088(ctx, base);
loc_83124AE0:
	// stw r31,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83124AE8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83124AF0"))) PPC_WEAK_FUNC(sub_83124AF0);
PPC_FUNC_IMPL(__imp__sub_83124AF0) {
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
	// srawi r11,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	r11.s64 = ctx.r3.s32 >> 5;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// li r30,0
	r30.s64 = 0;
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// subf. r11,r11,r3
	r11.s64 = ctx.r3.s64 - r11.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r4,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r4.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// bne 0x83124b3c
	if (!cr0.eq) goto loc_83124B3C;
	// srawi r11,r3,3
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	r11.s64 = ctx.r3.s32 >> 3;
	// b 0x83124b48
	goto loc_83124B48;
loc_83124B3C:
	// subf r11,r11,r3
	r11.s64 = ctx.r3.s64 - r11.s64;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
loc_83124B48:
	// li r10,-1
	ctx.r10.s64 = -1;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// divwu r10,r10,r4
	ctx.r10.u32 = ctx.r10.u32 / ctx.r4.u32;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// twllei r4,0
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83124b6c
	if (cr6.lt) goto loc_83124B6C;
loc_83124B64:
	// li r3,-8
	ctx.r3.s64 = -8;
	// b 0x83124b94
	goto loc_83124B94;
loc_83124B6C:
	// mullw r11,r11,r4
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r4.s32);
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// blt cr6,0x83124b64
	if (cr6.lt) goto loc_83124B64;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83124b90
	if (!cr0.eq) goto loc_83124B90;
	// li r30,-8
	r30.s64 = -8;
loc_83124B90:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_83124B94:
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

__attribute__((alias("__imp__sub_83124BB0"))) PPC_WEAK_FUNC(sub_83124BB0);
PPC_FUNC_IMPL(__imp__sub_83124BB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83124BC8"))) PPC_WEAK_FUNC(sub_83124BC8);
PPC_FUNC_IMPL(__imp__sub_83124BC8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// stw r5,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r5.u32);
	// bne 0x83124bfc
	if (!cr0.eq) goto loc_83124BFC;
	// li r31,-8
	r31.s64 = -8;
	// b 0x83124c20
	goto loc_83124C20;
loc_83124BFC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83124af0
	sub_83124AF0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bge 0x83124c20
	if (!cr0.lt) goto loc_83124C20;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_83124C20:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83124C30"))) PPC_WEAK_FUNC(sub_83124C30);
PPC_FUNC_IMPL(__imp__sub_83124C30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83124c60
	if (cr6.eq) goto loc_83124C60;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83124c60
	if (cr6.eq) goto loc_83124C60;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
loc_83124C60:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83124C68"))) PPC_WEAK_FUNC(sub_83124C68);
PPC_FUNC_IMPL(__imp__sub_83124C68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// bne cr6,0x83124c84
	if (!cr6.eq) goto loc_83124C84;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// blr 
	return;
loc_83124C84:
	// b 0x83124cf0
	sub_83124CF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83124C88"))) PPC_WEAK_FUNC(sub_83124C88);
PPC_FUNC_IMPL(__imp__sub_83124C88) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83124cb0
	if (!cr6.eq) goto loc_83124CB0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// b 0x83124cdc
	goto loc_83124CDC;
loc_83124CB0:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// bne 0x83124cd8
	if (!cr0.eq) goto loc_83124CD8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83124cd0
	if (cr6.eq) goto loc_83124CD0;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_83124CD0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_83124CD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83124CDC:
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

__attribute__((alias("__imp__sub_83124CF0"))) PPC_WEAK_FUNC(sub_83124CF0);
PPC_FUNC_IMPL(__imp__sub_83124CF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// li r3,32
	ctx.r3.s64 = 32;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// bne 0x83124d20
	if (!cr0.eq) goto loc_83124D20;
	// li r3,-8
	ctx.r3.s64 = -8;
	// b 0x83124d44
	goto loc_83124D44;
loc_83124D20:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83124bb0
	sub_83124BB0(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83127bd8
	sub_83127BD8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x83127a20
	sub_83127A20(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83124D44:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83124D50"))) PPC_WEAK_FUNC(sub_83124D50);
PPC_FUNC_IMPL(__imp__sub_83124D50) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83124d84
	if (cr6.eq) goto loc_83124D84;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83124d7c
	if (cr6.eq) goto loc_83124D7C;
	// bl 0x83124c88
	sub_83124C88(ctx, base);
loc_83124D7C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_83124D84:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_83124DA0"))) PPC_WEAK_FUNC(sub_83124DA0);
PPC_FUNC_IMPL(__imp__sub_83124DA0) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83124ddc
	if (!cr6.eq) goto loc_83124DDC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83123ab0
	sub_83123AB0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83124df0
	if (cr0.lt) goto loc_83124DF0;
loc_83124DDC:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// clrlwi r5,r29,16
	ctx.r5.u64 = r29.u32 & 0xFFFF;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83124048
	sub_83124048(ctx, base);
loc_83124DF0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83124DF8"))) PPC_WEAK_FUNC(sub_83124DF8);
PPC_FUNC_IMPL(__imp__sub_83124DF8) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83124e24
	if (!cr6.eq) goto loc_83124E24;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// b 0x83124e68
	goto loc_83124E68;
loc_83124E24:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83124e44
	if (!cr6.eq) goto loc_83124E44;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83123ab0
	sub_83123AB0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83124e68
	if (cr0.lt) goto loc_83124E68;
loc_83124E44:
	// clrlwi r4,r29,16
	ctx.r4.u64 = r29.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83124538
	sub_83124538(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x83124e64
	if (cr6.eq) goto loc_83124E64;
	// addi r11,r3,15
	r11.s64 = ctx.r3.s64 + 15;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_83124E64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83124E68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83124E70"))) PPC_WEAK_FUNC(sub_83124E70);
PPC_FUNC_IMPL(__imp__sub_83124E70) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83124f30
	if (cr6.eq) goto loc_83124F30;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83124f30
	if (cr6.eq) goto loc_83124F30;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83124ec4
	if (!cr6.eq) goto loc_83124EC4;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83123ab0
	sub_83123AB0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83124f38
	if (cr0.lt) goto loc_83124F38;
loc_83124EC4:
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// clrlwi r4,r30,16
	ctx.r4.u64 = r30.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831245c0
	sub_831245C0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83124f38
	if (!cr0.eq) goto loc_83124F38;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x83124ef8
	if (cr6.eq) goto loc_83124EF8;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_83124EF8:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x83124f08
	if (cr6.eq) goto loc_83124F08;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
loc_83124F08:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x83124f18
	if (cr6.eq) goto loc_83124F18;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
loc_83124F18:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x83124f28
	if (cr6.eq) goto loc_83124F28;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
loc_83124F28:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83124f38
	goto loc_83124F38;
loc_83124F30:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
loc_83124F38:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83124F40"))) PPC_WEAK_FUNC(sub_83124F40);
PPC_FUNC_IMPL(__imp__sub_83124F40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83124f6c
	if (cr6.eq) goto loc_83124F6C;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83124f6c
	if (cr6.eq) goto loc_83124F6C;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83124f6c
	if (cr6.eq) goto loc_83124F6C;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// b 0x83124948
	sub_83124948(ctx, base);
	return;
loc_83124F6C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83124F78"))) PPC_WEAK_FUNC(sub_83124F78);
PPC_FUNC_IMPL(__imp__sub_83124F78) {
	PPC_FUNC_PROLOGUE();
	// b 0x83123780
	sub_83123780(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83124F80"))) PPC_WEAK_FUNC(sub_83124F80);
PPC_FUNC_IMPL(__imp__sub_83124F80) {
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
	// bl 0x83127f60
	sub_83127F60(ctx, base);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83124FA8"))) PPC_WEAK_FUNC(sub_83124FA8);
PPC_FUNC_IMPL(__imp__sub_83124FA8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// li r5,56
	ctx.r5.s64 = 56;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r4,r9,-11132
	ctx.r4.s64 = ctx.r9.s64 + -11132;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x83129970
	sub_83129970(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8312503c
	if (!cr0.eq) goto loc_8312503C;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83129980
	sub_83129980(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// beq cr6,0x83125030
	if (cr6.eq) goto loc_83125030;
	// bl 0x83129788
	sub_83129788(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// li r3,-5
	ctx.r3.s64 = -5;
	// beq cr6,0x8312503c
	if (cr6.eq) goto loc_8312503C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8312503c
	goto loc_8312503C;
loc_83125030:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x83129788
	sub_83129788(ctx, base);
loc_8312503C:
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

__attribute__((alias("__imp__sub_83125058"))) PPC_WEAK_FUNC(sub_83125058);
PPC_FUNC_IMPL(__imp__sub_83125058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r3.u32);
	// addi r11,r3,8
	r11.s64 = ctx.r3.s64 + 8;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83125078"))) PPC_WEAK_FUNC(sub_83125078);
PPC_FUNC_IMPL(__imp__sub_83125078) {
	PPC_FUNC_PROLOGUE();
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83125088"))) PPC_WEAK_FUNC(sub_83125088);
PPC_FUNC_IMPL(__imp__sub_83125088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r3,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r3.u32);
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831250A8"))) PPC_WEAK_FUNC(sub_831250A8);
PPC_FUNC_IMPL(__imp__sub_831250A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831250C8"))) PPC_WEAK_FUNC(sub_831250C8);
PPC_FUNC_IMPL(__imp__sub_831250C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831250E8"))) PPC_WEAK_FUNC(sub_831250E8);
PPC_FUNC_IMPL(__imp__sub_831250E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// b 0x830e61f8
	sub_830E61F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83125108"))) PPC_WEAK_FUNC(sub_83125108);
PPC_FUNC_IMPL(__imp__sub_83125108) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83125110"))) PPC_WEAK_FUNC(sub_83125110);
PPC_FUNC_IMPL(__imp__sub_83125110) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r28,r9
	cr6.compare<uint32_t>(r28.u32, ctx.r9.u32, xer);
	// ble cr6,0x83125218
	if (!cr6.gt) goto loc_83125218;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r27,0(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r10,r11,r9
	ctx.r10.u64 = r11.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x83125230
	if (cr6.lt) goto loc_83125230;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x83125230
	if (cr6.lt) goto loc_83125230;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// bne cr6,0x83125160
	if (!cr6.eq) goto loc_83125160;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_83125160:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// ble cr6,0x83125170
	if (!cr6.gt) goto loc_83125170;
	// stw r28,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r28.u32);
loc_83125170:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// blt cr6,0x8312522c
	if (cr6.lt) goto loc_8312522C;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// blt cr6,0x8312522c
	if (cr6.lt) goto loc_8312522C;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x831251a4
	if (!cr6.lt) goto loc_831251A4;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_831251A4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830e6210
	sub_830E6210(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x831251ec
	if (!cr0.eq) goto loc_831251EC;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// add r29,r11,r28
	r29.u64 = r11.u64 + r28.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x8312522c
	if (cr6.lt) goto loc_8312522C;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(r29.u32, r28.u32, xer);
	// blt cr6,0x8312522c
	if (cr6.lt) goto loc_8312522C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830e6210
	sub_830E6210(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8312522c
	if (cr0.eq) goto loc_8312522C;
loc_831251EC:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// bne cr6,0x83125208
	if (!cr6.eq) goto loc_83125208;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
loc_83125208:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// subf r11,r11,r29
	r11.s64 = r29.s64 - r11.s64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_83125218:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
loc_83125224:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_8312522C:
	// stw r27,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r27.u32);
loc_83125230:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83125224
	goto loc_83125224;
}

__attribute__((alias("__imp__sub_83125238"))) PPC_WEAK_FUNC(sub_83125238);
PPC_FUNC_IMPL(__imp__sub_83125238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r11,r11,r4
	r11.s64 = ctx.r4.s64 - r11.s64;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83125260"))) PPC_WEAK_FUNC(sub_83125260);
PPC_FUNC_IMPL(__imp__sub_83125260) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// addic. r9,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r9.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bltlr 
	if (cr0.lt) return;
loc_83125268:
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x831252f0
	if (cr6.eq) goto loc_831252F0;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// beq 0x831252f0
	if (cr0.eq) goto loc_831252F0;
	// rlwinm r10,r11,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFF;
	// rlwinm r11,r11,0,8,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFE;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// oris r11,r11,256
	r11.u64 = r11.u64 | 16777216;
	// addi r10,r10,-151
	ctx.r10.s64 = ctx.r10.s64 + -151;
	// extsh. r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble 0x831252c4
	if (!cr0.gt) goto loc_831252C4;
	// cmpwi cr6,r10,8
	cr6.compare<int32_t>(ctx.r10.s32, 8, xer);
	// blt cr6,0x831252bc
	if (cr6.lt) goto loc_831252BC;
	// lis r11,32767
	r11.s64 = 2147418112;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// b 0x831252e4
	goto loc_831252E4;
loc_831252BC:
	// slw r11,r11,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// b 0x831252e4
	goto loc_831252E4;
loc_831252C4:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge cr6,0x831252e4
	if (!cr6.lt) goto loc_831252E4;
	// cmpwi cr6,r10,-24
	cr6.compare<int32_t>(ctx.r10.s32, -24, xer);
	// bge cr6,0x831252dc
	if (!cr6.lt) goto loc_831252DC;
	// li r11,0
	r11.s64 = 0;
	// b 0x831252e4
	goto loc_831252E4;
loc_831252DC:
	// neg r10,r10
	ctx.r10.s64 = -ctx.r10.s64;
	// sraw r11,r11,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (r11.s32 < 0) & (((r11.s32 >> temp.u32) << temp.u32) != r11.s32);
	r11.s64 = r11.s32 >> temp.u32;
loc_831252E4:
	// extsb. r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x831252f0
	if (cr0.eq) goto loc_831252F0;
	// neg r11,r11
	r11.s64 = -r11.s64;
loc_831252F0:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bge 0x83125268
	if (!cr0.lt) goto loc_83125268;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83125308"))) PPC_WEAK_FUNC(sub_83125308);
PPC_FUNC_IMPL(__imp__sub_83125308) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x831253b4
	if (cr6.eq) goto loc_831253B4;
	// lhz r11,0(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x831253b4
	if (cr0.eq) goto loc_831253B4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x831253b4
	if (cr6.eq) goto loc_831253B4;
	// li r27,0
	r27.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r27,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r27.u32);
	// stw r27,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r27.u32);
	// stw r27,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r27.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830e7238
	sub_830E7238(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lis r11,-32720
	r11.s64 = -2144337920;
	// ori r11,r11,19
	r11.u64 = r11.u64 | 19;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// bne cr6,0x83125390
	if (!cr6.eq) goto loc_83125390;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830e7238
	sub_830E7238(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_83125390:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// blt cr6,0x831253ac
	if (cr6.lt) goto loc_831253AC;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x830e6618
	sub_830E6618(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// b 0x831253bc
	goto loc_831253BC;
loc_831253AC:
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x831253bc
	goto loc_831253BC;
loc_831253B4:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
loc_831253BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_831253C8"))) PPC_WEAK_FUNC(sub_831253C8);
PPC_FUNC_IMPL(__imp__sub_831253C8) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// li r26,-1
	r26.s64 = -1;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x831254d4
	if (cr6.eq) goto loc_831254D4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x831254d4
	if (cr6.eq) goto loc_831254D4;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831254d4
	if (cr6.eq) goto loc_831254D4;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x831254d4
	if (!cr6.lt) goto loc_831254D4;
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// blt cr6,0x831254d4
	if (cr6.lt) goto loc_831254D4;
	// li r27,0
	r27.s64 = 0;
	// stw r27,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r27.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83125458
	if (cr6.eq) goto loc_83125458;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x830e6548
	sub_830E6548(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x831254dc
	if (cr0.lt) goto loc_831254DC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r26,r27
	r26.u64 = r27.u64;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x831254dc
	goto loc_831254DC;
loc_83125458:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831254cc
	if (cr0.eq) goto loc_831254CC;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x830e6638
	sub_830E6638(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x831254b8
	if (cr0.lt) goto loc_831254B8;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x830e65a0
	sub_830E65A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x831254b8
	if (cr0.lt) goto loc_831254B8;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// bne cr6,0x831254dc
	if (!cr6.eq) goto loc_831254DC;
	// mr r26,r27
	r26.u64 = r27.u64;
	// b 0x831254dc
	goto loc_831254DC;
loc_831254B8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// li r26,-1
	r26.s64 = -1;
	// stw r27,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r27.u32);
	// b 0x831254dc
	goto loc_831254DC;
loc_831254CC:
	// li r26,-8
	r26.s64 = -8;
	// b 0x831254dc
	goto loc_831254DC;
loc_831254D4:
	// lis r26,-32768
	r26.s64 = -2147483648;
	// ori r26,r26,6
	r26.u64 = r26.u64 | 6;
loc_831254DC:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_831254E8"))) PPC_WEAK_FUNC(sub_831254E8);
PPC_FUNC_IMPL(__imp__sub_831254E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83125508
	if (cr6.eq) goto loc_83125508;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x830e6578
	sub_830E6578(ctx, base);
	return;
loc_83125508:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x830e61f8
	sub_830E61F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83125510"))) PPC_WEAK_FUNC(sub_83125510);
PPC_FUNC_IMPL(__imp__sub_83125510) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83125518"))) PPC_WEAK_FUNC(sub_83125518);
PPC_FUNC_IMPL(__imp__sub_83125518) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// li r28,-1
	r28.s64 = -1;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x831255b4
	if (cr6.eq) goto loc_831255B4;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x831255b4
	if (cr6.eq) goto loc_831255B4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831255b4
	if (cr6.eq) goto loc_831255B4;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge cr6,0x831255b4
	if (!cr6.lt) goto loc_831255B4;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// blt cr6,0x831255b4
	if (cr6.lt) goto loc_831255B4;
	// li r11,0
	r11.s64 = 0;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x830e6638
	sub_830E6638(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x831255bc
	if (cr0.lt) goto loc_831255BC;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x830e65a0
	sub_830E65A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x831255bc
	if (cr0.lt) goto loc_831255BC;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bne cr6,0x831255bc
	if (!cr6.eq) goto loc_831255BC;
	// li r28,0
	r28.s64 = 0;
	// b 0x831255bc
	goto loc_831255BC;
loc_831255B4:
	// lis r28,-32768
	r28.s64 = -2147483648;
	// ori r28,r28,6
	r28.u64 = r28.u64 | 6;
loc_831255BC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_831255C8"))) PPC_WEAK_FUNC(sub_831255C8);
PPC_FUNC_IMPL(__imp__sub_831255C8) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83125604
	if (cr6.eq) goto loc_83125604;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831255f4
	if (cr6.eq) goto loc_831255F4;
	// bl 0x830e6660
	sub_830E6660(ctx, base);
loc_831255F4:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_83125604:
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

__attribute__((alias("__imp__sub_83125618"))) PPC_WEAK_FUNC(sub_83125618);
PPC_FUNC_IMPL(__imp__sub_83125618) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,416
	ctx.r5.s64 = 416;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// li r3,4096
	ctx.r3.s64 = 4096;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// stw r3,292(r31)
	PPC_STORE_U32(r31.u32 + 292, ctx.r3.u32);
	// addi r4,r31,384
	ctx.r4.s64 = r31.s64 + 384;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831270f8
	sub_831270F8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,408(r31)
	PPC_STORE_U32(r31.u32 + 408, r11.u32);
	// stw r11,412(r31)
	PPC_STORE_U32(r31.u32 + 412, r11.u32);
	// stw r11,296(r31)
	PPC_STORE_U32(r31.u32 + 296, r11.u32);
	// stw r11,300(r31)
	PPC_STORE_U32(r31.u32 + 300, r11.u32);
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

__attribute__((alias("__imp__sub_83125690"))) PPC_WEAK_FUNC(sub_83125690);
PPC_FUNC_IMPL(__imp__sub_83125690) {
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
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831256c0
	if (cr6.eq) goto loc_831256C0;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// stw r30,292(r31)
	PPC_STORE_U32(r31.u32 + 292, r30.u32);
loc_831256C0:
	// addi r3,r31,384
	ctx.r3.s64 = r31.s64 + 384;
	// bl 0x83127120
	sub_83127120(ctx, base);
	// lwz r3,408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 408);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831256e0
	if (cr6.eq) goto loc_831256E0;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// stw r30,408(r31)
	PPC_STORE_U32(r31.u32 + 408, r30.u32);
	// stw r30,412(r31)
	PPC_STORE_U32(r31.u32 + 412, r30.u32);
loc_831256E0:
	// lwz r3,296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 296);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831256f8
	if (cr6.eq) goto loc_831256F8;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// stw r30,296(r31)
	PPC_STORE_U32(r31.u32 + 296, r30.u32);
	// stw r30,300(r31)
	PPC_STORE_U32(r31.u32 + 300, r30.u32);
loc_831256F8:
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

__attribute__((alias("__imp__sub_83125710"))) PPC_WEAK_FUNC(sub_83125710);
PPC_FUNC_IMPL(__imp__sub_83125710) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r10,312(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// lhz r11,0(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83125760
	if (!cr0.eq) goto loc_83125760;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x83125758
	if (cr6.lt) goto loc_83125758;
	// cmpwi cr6,r4,255
	cr6.compare<int32_t>(ctx.r4.s32, 255, xer);
	// bgt cr6,0x83125758
	if (cr6.gt) goto loc_83125758;
	// add r11,r10,r4
	r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lbz r11,6(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 6);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x8312574c
	if (cr0.lt) goto loc_8312574C;
	// lha r10,358(r3)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 358));
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x83125750
	if (cr6.lt) goto loc_83125750;
loc_8312574C:
	// li r11,0
	r11.s64 = 0;
loc_83125750:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// blr 
	return;
loc_83125758:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83125760:
	// addi r11,r10,14
	r11.s64 = ctx.r10.s64 + 14;
	// lbz r9,14(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 14);
	// lbz r8,15(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 15);
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
	// b 0x83125780
	goto loc_83125780;
loc_83125774:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 1);
loc_83125780:
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// cmpw cr6,r4,r9
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, xer);
	// bgt cr6,0x83125774
	if (cr6.gt) goto loc_83125774;
	// lbz r9,7(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// subf r11,r6,r11
	r11.s64 = r11.s64 - ctx.r6.s64;
	// lbz r10,6(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// cmplwi cr6,r4,65535
	cr6.compare<uint32_t>(ctx.r4.u32, 65535, xer);
	// rlwinm r8,r9,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// rotlwi r10,r10,7
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 7);
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// or r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 | ctx.r10.u64;
	// rlwinm r11,r9,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r7,r6
	ctx.r10.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// add r6,r11,r10
	ctx.r6.u64 = r11.u64 + ctx.r10.u64;
	// lbzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// lbz r6,1(r6)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + 1);
	// rotlwi r5,r5,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// beq cr6,0x83125850
	if (cr6.eq) goto loc_83125850;
	// cmpw cr6,r4,r6
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r6.s32, xer);
	// blt cr6,0x83125850
	if (cr6.lt) goto loc_83125850;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// lbz r10,1(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// rotlwi r11,r11,8
	r11.u64 = __builtin_rotateleft32(r11.u32, 8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// extsh r5,r11
	ctx.r5.s64 = r11.s16;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// or. r11,r8,r7
	r11.u64 = ctx.r8.u64 | ctx.r7.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// or r8,r5,r10
	ctx.r8.u64 = ctx.r5.u64 | ctx.r10.u64;
	// bne 0x83125824
	if (!cr0.eq) goto loc_83125824;
	// add r11,r8,r4
	r11.u64 = ctx.r8.u64 + ctx.r4.u64;
	// b 0x83125854
	goto loc_83125854;
loc_83125824:
	// subf r10,r6,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r6.s64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r11,1(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or. r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83125854
	if (cr0.eq) goto loc_83125854;
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// b 0x83125854
	goto loc_83125854;
loc_83125850:
	// li r11,0
	r11.s64 = 0;
loc_83125854:
	// srawi r10,r11,16
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = r11.s32 >> 16;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// subf r3,r10,r11
	ctx.r3.s64 = r11.s64 - ctx.r10.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83125870"))) PPC_WEAK_FUNC(sub_83125870);
PPC_FUNC_IMPL(__imp__sub_83125870) {
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
	// bl 0x83125710
	sub_83125710(ctx, base);
	// lhz r11,368(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 368);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// blt cr6,0x83125898
	if (cr6.lt) goto loc_83125898;
	// addi r3,r11,-1
	ctx.r3.s64 = r11.s64 + -1;
loc_83125898:
	// lwz r11,304(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 304);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r11,1(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// extsh r3,r11
	ctx.r3.s64 = r11.s16;
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

__attribute__((alias("__imp__sub_831258D0"))) PPC_WEAK_FUNC(sub_831258D0);
PPC_FUNC_IMPL(__imp__sub_831258D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lhz r11,368(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 368);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, r11.s32, xer);
	// blt cr6,0x831258e0
	if (cr6.lt) goto loc_831258E0;
	// addi r4,r11,-1
	ctx.r4.s64 = r11.s64 + -1;
loc_831258E0:
	// lwz r11,304(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r10,r11,2
	ctx.r10.s64 = r11.s64 + 2;
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// extsh r3,r11
	ctx.r3.s64 = r11.s16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83125908"))) PPC_WEAK_FUNC(sub_83125908);
PPC_FUNC_IMPL(__imp__sub_83125908) {
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
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// li r31,0
	r31.s64 = 0;
	// li r22,0
	r22.s64 = 0;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// ble cr6,0x83125af0
	if (!cr6.gt) goto loc_83125AF0;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// li r30,3
	r30.s64 = 3;
loc_83125938:
	// lbz r11,0(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lbz r10,1(r26)
	ctx.r10.u64 = PPC_LOAD_U8(r26.u32 + 1);
	// mr r23,r31
	r23.u64 = r31.u64;
	// rotlwi r11,r11,8
	r11.u64 = __builtin_rotateleft32(r11.u32, 8);
	// extsh r11,r11
	r11.s64 = r11.s16;
	// or r27,r11,r10
	r27.u64 = r11.u64 | ctx.r10.u64;
	// bl 0x83127180
	sub_83127180(ctx, base);
	// rlwinm r11,r31,3,0,28
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r29,r31,1
	r29.s64 = r31.s64 + 1;
	// addi r25,r27,1
	r25.s64 = r27.s64 + 1;
	// ldx r11,r11,r24
	r11.u64 = PPC_LOAD_U64(r11.u32 + r24.u32);
loc_83125968:
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// b 0x83125ad4
	goto loc_83125AD4;
loc_83125970:
	// mr r11,r29
	r11.u64 = r29.u64;
	// cmpw cr6,r29,r27
	cr6.compare<int32_t>(r29.s32, r27.s32, xer);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// ble cr6,0x83125984
	if (!cr6.gt) goto loc_83125984;
	// mr r11,r23
	r11.u64 = r23.u64;
loc_83125984:
	// lhz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// add r31,r11,r24
	r31.u64 = r11.u64 + r24.u64;
	// beq 0x831259e4
	if (cr0.eq) goto loc_831259E4;
	// lhz r11,4(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x831259e4
	if (cr0.eq) goto loc_831259E4;
	// lha r11,80(r1)
	r11.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 80));
	// li r5,2
	ctx.r5.s64 = 2;
	// lha r10,82(r1)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 82));
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lha r11,0(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 0));
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// lha r11,2(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 2));
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// bl 0x831277e8
	sub_831277E8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83125af4
	if (cr0.lt) goto loc_83125AF4;
	// ld r11,0(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// b 0x83125968
	goto loc_83125968;
loc_831259E4:
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r11,r29
	r11.u64 = r29.u64;
	// cmpw cr6,r29,r27
	cr6.compare<int32_t>(r29.s32, r27.s32, xer);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// ble cr6,0x831259fc
	if (!cr6.gt) goto loc_831259FC;
	// mr r11,r23
	r11.u64 = r23.u64;
loc_831259FC:
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r11,r11,r24
	r11.u64 = PPC_LOAD_U64(r11.u32 + r24.u32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lhz r11,84(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83125a44
	if (!cr0.eq) goto loc_83125A44;
	// lha r11,80(r1)
	r11.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 80));
	// lha r10,0(r31)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 0));
	// lha r9,82(r1)
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 82));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lha r8,2(r31)
	ctx.r8.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 2));
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r8,r9
	r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// srawi r10,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, r11.u16);
loc_83125A44:
	// lha r10,88(r1)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 88));
	// li r5,4
	ctx.r5.s64 = 4;
	// lha r11,90(r1)
	r11.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 90));
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// lha r8,80(r1)
	ctx.r8.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 80));
	// lha r7,82(r1)
	ctx.r7.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 82));
	// lha r9,0(r31)
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 0));
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// divw r9,r9,r30
	ctx.r9.s32 = ctx.r9.s32 / r30.s32;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lha r10,2(r31)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 2));
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// divw r10,r10,r30
	ctx.r10.s32 = ctx.r10.s32 / r30.s32;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// lha r11,0(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 0));
	// subf r10,r11,r8
	ctx.r10.s64 = ctx.r8.s64 - r11.s64;
	// divw r10,r10,r30
	ctx.r10.s32 = ctx.r10.s32 / r30.s32;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// lha r11,2(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 2));
	// subf r10,r11,r7
	ctx.r10.s64 = ctx.r7.s64 - r11.s64;
	// divw r10,r10,r30
	ctx.r10.s32 = ctx.r10.s32 / r30.s32;
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// bl 0x831277f8
	sub_831277F8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83125af4
	if (cr0.lt) goto loc_83125AF4;
loc_83125AD4:
	// cmpw cr6,r29,r25
	cr6.compare<int32_t>(r29.s32, r25.s32, xer);
	// ble cr6,0x83125970
	if (!cr6.gt) goto loc_83125970;
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// mr r31,r25
	r31.u64 = r25.u64;
	// addi r26,r26,2
	r26.s64 = r26.s64 + 2;
	// cmpw cr6,r22,r21
	cr6.compare<int32_t>(r22.s32, r21.s32, xer);
	// blt cr6,0x83125938
	if (cr6.lt) goto loc_83125938;
loc_83125AF0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83125AF4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_83125B00"))) PPC_WEAK_FUNC(sub_83125B00);
PPC_FUNC_IMPL(__imp__sub_83125B00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83125b5c
	if (!cr6.gt) goto loc_83125B5C;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lfs f0,-22120(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -22120);
	f0.f64 = double(temp.f32);
loc_83125B18:
	// lha r9,2(r11)
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(r11.u32 + 2));
	// lfs f13,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + f0.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f13.u64);
	// lhz r9,-2(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + -2);
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// sth r9,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r9.u16);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bne 0x83125b18
	if (!cr0.eq) goto loc_83125B18;
loc_83125B5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83125B68"))) PPC_WEAK_FUNC(sub_83125B68);
PPC_FUNC_IMPL(__imp__sub_83125B68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v56{};
	PPCVRegister v57{};
	PPCVRegister v58{};
	PPCVRegister v59{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b04
	// addi r12,r1,-112
	r12.s64 = ctx.r1.s64 + -112;
	// bl 0x831b142c
	// addi r12,r1,-176
	r12.s64 = ctx.r1.s64 + -176;
	// bl 0x831b36c4
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// li r27,0
	r27.s64 = 0;
	// li r24,0
	r24.s64 = 0;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// ble cr6,0x83126094
	if (!cr6.gt) goto loc_83126094;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f25,-22120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22120);
	f25.f64 = double(temp.f32);
	// lfs f26,27976(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27976);
	f26.f64 = double(temp.f32);
loc_83125BB4:
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// bne cr6,0x83125bd4
	if (!cr6.eq) goto loc_83125BD4;
	// lbz r11,0(r23)
	r11.u64 = PPC_LOAD_U8(r23.u32 + 0);
	// lbz r10,1(r23)
	ctx.r10.u64 = PPC_LOAD_U8(r23.u32 + 1);
	// rotlwi r11,r11,8
	r11.u64 = __builtin_rotateleft32(r11.u32, 8);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// b 0x83125c00
	goto loc_83125C00;
loc_83125BD4:
	// rlwinm r11,r24,1,0,30
	r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r23
	r11.u64 = r11.u64 + r23.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r9,-2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + -2);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r11,-1(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
loc_83125C00:
	// add r29,r11,r27
	r29.u64 = r11.u64 + r27.u64;
	// rlwinm r11,r27,3,0,28
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r29,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r25
	r31.u64 = r11.u64 + r25.u64;
	// add r11,r10,r25
	r11.u64 = ctx.r10.u64 + r25.u64;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
	// cmpw cr6,r27,r29
	cr6.compare<int32_t>(r27.s32, r29.s32, xer);
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// ld r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(r11.u32 + -8);
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// std r9,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r9.u64);
	// std r8,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r8.u64);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// bge cr6,0x83126084
	if (!cr6.lt) goto loc_83126084;
	// vspltisw128 v124,1
	simde_mm_store_si128((simde__m128i*)v124.u32, simde_mm_set1_epi32(int(0x1)));
	// vspltisw128 v127,0
	simde_mm_store_si128((simde__m128i*)v127.u32, simde_mm_set1_epi32(int(0x0)));
	// vspltisw128 v126,-1
	simde_mm_store_si128((simde__m128i*)v126.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// vcsxwfp128 v125,v124,1
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v125.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v124.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3F000000)))));
loc_83125C4C:
	// cmpw cr6,r10,r27
	cr6.compare<int32_t>(ctx.r10.s32, r27.s32, xer);
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// beq cr6,0x83125c5c
	if (cr6.eq) goto loc_83125C5C;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
loc_83125C5C:
	// addi r26,r10,1
	r26.s64 = ctx.r10.s64 + 1;
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// cmpw cr6,r26,r29
	cr6.compare<int32_t>(r26.s32, r29.s32, xer);
	// beq cr6,0x83125c70
	if (cr6.eq) goto loc_83125C70;
	// addi r10,r31,8
	ctx.r10.s64 = r31.s64 + 8;
loc_83125C70:
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lha r6,0(r10)
	ctx.r6.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + 0));
	// addi r21,r1,112
	r21.s64 = ctx.r1.s64 + 112;
	// extsh r11,r9
	r11.s64 = ctx.r9.s16;
	// lha r7,2(r8)
	ctx.r7.s64 = int16_t(PPC_LOAD_U16(ctx.r8.u32 + 2));
	// subf r19,r6,r11
	r19.s64 = r11.s64 - ctx.r6.s64;
	// lha r4,0(r8)
	ctx.r4.s64 = int16_t(PPC_LOAD_U16(ctx.r8.u32 + 0));
	// extsw r19,r19
	r19.s64 = r19.s32;
	// lhz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U16(r31.u32 + 2);
	// lha r5,2(r10)
	ctx.r5.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + 2));
	// subf r20,r11,r4
	r20.s64 = ctx.r4.s64 - r11.s64;
	// std r19,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, r19.u64);
	// lfd f10,160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// vor128 v12,v125,v125
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)v125.u8));
	// extsw r20,r20
	r20.s64 = r20.s32;
	// vor128 v11,v125,v125
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)v125.u8));
	// subf r30,r5,r10
	r30.s64 = ctx.r10.s64 - ctx.r5.s64;
	// vslw128 v61,v126,v126
	v61.u32[0] = v126.u32[0] << (v126.u8[0] & 0x1F);
	v61.u32[1] = v126.u32[1] << (v126.u8[4] & 0x1F);
	v61.u32[2] = v126.u32[2] << (v126.u8[8] & 0x1F);
	v61.u32[3] = v126.u32[3] << (v126.u8[12] & 0x1F);
	// std r20,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, r20.u64);
	// lfd f11,216(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// extsw r30,r30
	r30.s64 = r30.s32;
	// vslw128 v60,v126,v126
	v60.u32[0] = v126.u32[0] << (v126.u8[0] & 0x1F);
	v60.u32[1] = v126.u32[1] << (v126.u8[4] & 0x1F);
	v60.u32[2] = v126.u32[2] << (v126.u8[8] & 0x1F);
	v60.u32[3] = v126.u32[3] << (v126.u8[12] & 0x1F);
	// addi r19,r1,96
	r19.s64 = ctx.r1.s64 + 96;
	// lfs f12,20(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// std r30,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, r30.u64);
	// lfd f0,184(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// subf r30,r10,r7
	r30.s64 = ctx.r7.s64 - ctx.r10.s64;
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// extsw r30,r30
	r30.s64 = r30.s32;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// std r30,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, r30.u64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lfd f13,200(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvx128 v62,r0,r3
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r20,r1,112
	r20.s64 = ctx.r1.s64 + 112;
	// frsp f0,f11
	f0.f64 = double(float(ctx.f11.f64));
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// frsp f0,f13
	f0.f64 = double(float(ctx.f13.f64));
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lvx128 v63,r0,r21
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r21.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v59,v127,v63,8
	simde_mm_store_si128((simde__m128i*)v59.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)v63.u8), 8));
	// vsldoi128 v58,v127,v62,8
	simde_mm_store_si128((simde__m128i*)v58.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)v62.u8), 8));
	// vmsum4fp128 v59,v59,v59
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v59.f32, simde_mm_dp_ps(simde_mm_load_ps(v59.f32), simde_mm_load_ps(v59.f32), 0xFF));
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f11,24(r28)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// addi r21,r1,96
	r21.s64 = ctx.r1.s64 + 96;
	// addi r30,r31,2
	r30.s64 = r31.s64 + 2;
	// vmsum4fp128 v58,v58,v58
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v58.f32, simde_mm_dp_ps(simde_mm_load_ps(v58.f32), simde_mm_load_ps(v58.f32), 0xFF));
	// vrsqrtefp128 v0,v59
	simde_mm_store_ps(ctx.v0.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(v59.f32))));
	// vor128 v10,v59,v59
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)v59.u8));
	// vmulfp128 v57,v59,v125
	simde_mm_store_ps(v57.f32, simde_mm_mul_ps(simde_mm_load_ps(v59.f32), simde_mm_load_ps(v125.f32)));
	// vcmpeqfp128 v9,v59,v127
	simde_mm_store_ps(ctx.v9.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(v59.f32), simde_mm_load_ps(v127.f32)));
	// vrsqrtefp128 v13,v58
	simde_mm_store_ps(ctx.v13.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(v58.f32))));
	// vor128 v8,v58,v58
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)v58.u8));
	// vmulfp128 v59,v58,v125
	simde_mm_store_ps(v59.f32, simde_mm_mul_ps(simde_mm_load_ps(v58.f32), simde_mm_load_ps(v125.f32)));
	// vcmpeqfp128 v7,v58,v127
	simde_mm_store_ps(ctx.v7.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(v58.f32), simde_mm_load_ps(v127.f32)));
	// vmulfp128 v58,v0,v0
	simde_mm_store_ps(v58.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v56,v13,v13
	simde_mm_store_ps(v56.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vnmsubfp128 v12,v57,v58,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(v57.f32), simde_mm_load_ps(v58.f32)), simde_mm_load_ps(ctx.v12.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vnmsubfp128 v11,v59,v56,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(v59.f32), simde_mm_load_ps(v56.f32)), simde_mm_load_ps(ctx.v11.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v13,v13,v11,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v0,v63,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v13,v62,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vsel v0,v0,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8))));
	// vsel v13,v13,v8,v7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8))));
	// vspltw128 v62,v0,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vxor128 v63,v0,v61
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)v61.u8)));
	// stvx128 v0,r0,r20
	simde_mm_store_si128((simde__m128i*)(base + ((r20.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor128 v61,v13,v60
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)v60.u8)));
	// vspltw128 v60,v13,0
	simde_mm_store_si128((simde__m128i*)v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// stvx128 v13,r0,r19
	simde_mm_store_si128((simde__m128i*)(base + ((r19.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlimi128 v62,v63,8,1
	simde_mm_store_ps(v62.f32, simde_mm_blend_ps(simde_mm_load_ps(v62.f32), simde_mm_permute_ps(simde_mm_load_ps(v63.f32), 147), 8));
	// vrlimi128 v60,v61,8,1
	simde_mm_store_ps(v60.f32, simde_mm_blend_ps(simde_mm_load_ps(v60.f32), simde_mm_permute_ps(simde_mm_load_ps(v61.f32), 147), 8));
	// stvx128 v60,r0,r21
	simde_mm_store_si128((simde__m128i*)(base + ((r21.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f8,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// stvx128 v62,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	f0.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmuls f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// fmuls f10,f0,f26
	ctx.f10.f64 = double(float(f0.f64 * f26.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fmuls f8,f12,f26
	ctx.f8.f64 = double(float(ctx.f12.f64 * f26.f64));
	// fctiwz f10,f10
	ctx.f10.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f10,f8
	ctx.f10.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r21,84(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r3,r21
	cr6.compare<int32_t>(ctx.r3.s32, r21.s32, xer);
	// bne cr6,0x83125e2c
	if (!cr6.eq) goto loc_83125E2C;
	// fmuls f10,f13,f26
	ctx.f10.f64 = double(float(ctx.f13.f64 * f26.f64));
	// fmuls f9,f11,f26
	ctx.f9.f64 = double(float(ctx.f11.f64 * f26.f64));
	// fctiwz f10,f10
	ctx.f10.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f10.u64);
	// fctiwz f10,f9
	ctx.f10.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r21,92(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r21,r3
	cr6.compare<int32_t>(r21.s32, ctx.r3.s32, xer);
	// bne cr6,0x8312602c
	if (!cr6.eq) goto loc_8312602C;
loc_83125E2C:
	// extsw r11,r11
	r11.s64 = r11.s32;
	// vspltisw128 v63,-6
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_set1_epi32(int(0xFFFFFFFA)));
	// extsw r9,r7
	ctx.r9.s64 = ctx.r7.s32;
	// vspltisw128 v62,13
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_set1_epi32(int(0xD)));
	// std r11,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, r11.u64);
	// lfd f6,208(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// std r9,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r9.u64);
	// lfd f9,248(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// vspltisw128 v60,-9
	simde_mm_store_si128((simde__m128i*)v60.u32, simde_mm_set1_epi32(int(0xFFFFFFF7)));
	// extsw r9,r6
	ctx.r9.s64 = ctx.r6.s32;
	// vslw128 v62,v62,v63
	v62.u32[0] = v62.u32[0] << (v63.u8[0] & 0x1F);
	v62.u32[1] = v62.u32[1] << (v63.u8[4] & 0x1F);
	v62.u32[2] = v62.u32[2] << (v63.u8[8] & 0x1F);
	v62.u32[3] = v62.u32[3] << (v63.u8[12] & 0x1F);
	// std r10,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r10.u64);
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// std r9,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r9.u64);
	// lfd f8,192(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// std r10,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r10.u64);
	// extsw r10,r5
	ctx.r10.s64 = ctx.r5.s32;
	// addi r11,r1,288
	r11.s64 = ctx.r1.s64 + 288;
	// lfd f10,176(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// std r10,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// lfd f5,232(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
	// fcfid f6,f6
	ctx.f6.f64 = double(ctx.f6.s64);
	// fcfid f5,f5
	ctx.f5.f64 = double(ctx.f5.s64);
	// lfd f7,144(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// addi r9,r1,304
	ctx.r9.s64 = ctx.r1.s64 + 304;
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// addi r8,r1,272
	ctx.r8.s64 = ctx.r1.s64 + 272;
	// fcfid f7,f7
	ctx.f7.f64 = double(ctx.f7.s64);
	// vslw128 v60,v126,v60
	v60.u32[0] = v126.u32[0] << (v60.u8[0] & 0x1F);
	v60.u32[1] = v126.u32[1] << (v60.u8[4] & 0x1F);
	v60.u32[2] = v126.u32[2] << (v60.u8[8] & 0x1F);
	v60.u32[3] = v126.u32[3] << (v60.u8[12] & 0x1F);
	// vupkd3d128 v63,v127,4
	temp.f32 = 3.0f;
	temp.s32 += v127.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += v127.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	v63 = vTemp;
	// vspltisw128 v61,-8
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_set1_epi32(int(0xFFFFFFF8)));
	// vsrw128 v9,v60,v124
	ctx.v9.u32[0] = v60.u32[0] >> (v124.u8[0] & 0x1F);
	ctx.v9.u32[1] = v60.u32[1] >> (v124.u8[4] & 0x1F);
	ctx.v9.u32[2] = v60.u32[2] >> (v124.u8[8] & 0x1F);
	ctx.v9.u32[3] = v60.u32[3] >> (v124.u8[12] & 0x1F);
	// frsp f6,f6
	ctx.f6.f64 = double(float(ctx.f6.f64));
	// vspltw128 v13,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0x0));
	// frsp f5,f5
	ctx.f5.f64 = double(float(ctx.f5.f64));
	// vslw128 v61,v126,v61
	v61.u32[0] = v126.u32[0] << (v61.u8[0] & 0x1F);
	v61.u32[1] = v126.u32[1] << (v61.u8[4] & 0x1F);
	v61.u32[2] = v126.u32[2] << (v61.u8[8] & 0x1F);
	v61.u32[3] = v126.u32[3] << (v61.u8[12] & 0x1F);
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fadds f27,f10,f13
	f27.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f27,260(r1)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// frsp f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64));
	// vsrw128 v10,v61,v124
	ctx.v10.u32[0] = v61.u32[0] >> (v124.u8[0] & 0x1F);
	ctx.v10.u32[1] = v61.u32[1] >> (v124.u8[4] & 0x1F);
	ctx.v10.u32[2] = v61.u32[2] >> (v124.u8[8] & 0x1F);
	ctx.v10.u32[3] = v61.u32[3] >> (v124.u8[12] & 0x1F);
	// fadds f28,f10,f11
	f28.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfs f28,276(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// fadds f29,f6,f0
	f29.f64 = double(float(ctx.f6.f64 + f0.f64));
	// stfs f29,256(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// fadds f0,f5,f0
	f0.f64 = double(float(ctx.f5.f64 + f0.f64));
	// stfs f0,288(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// fadds f0,f9,f13
	f0.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// stfs f0,292(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// lvx128 v12,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fadds f30,f6,f12
	f30.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// fadds f0,f8,f12
	f0.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f30,272(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// fadds f13,f7,f11
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// stfs f0,304(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// stfs f13,308(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// lvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r0,r9
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v60,v60,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v60.f32, simde_mm_sub_ps(simde_mm_load_ps(v60.f32), simde_mm_load_ps(v63.f32)));
	// lvx128 v61,r0,r10
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v63,v12,v63
	simde_mm_store_ps(v63.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(v63.f32)));
	// vsubfp128 v11,v61,v12
	simde_mm_store_ps(ctx.v11.f32, simde_mm_sub_ps(simde_mm_load_ps(v61.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vpermwi128 v59,v60,75
	simde_mm_store_si128((simde__m128i*)v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v60.u32), 0xB4));
	// vpermwi128 v63,v63,75
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xB4));
	// vmulfp128 v61,v11,v59
	simde_mm_store_ps(v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(v59.f32)));
	// vmulfp128 v63,v60,v63
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v60.f32), simde_mm_load_ps(v63.f32)));
	// vpermwi128 v60,v61,75
	simde_mm_store_si128((simde__m128i*)v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), 0xB4));
	// vpermwi128 v59,v63,75
	simde_mm_store_si128((simde__m128i*)v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xB4));
	// vsubfp128 v61,v61,v60
	simde_mm_store_ps(v61.f32, simde_mm_sub_ps(simde_mm_load_ps(v61.f32), simde_mm_load_ps(v60.f32)));
	// vsubfp128 v63,v63,v59
	simde_mm_store_ps(v63.f32, simde_mm_sub_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v59.f32)));
	// vspltw128 v61,v61,0
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), 0xFF));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// vrefp128 v0,v61
	simde_mm_store_ps(ctx.v0.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(v61.f32)));
	// vor128 v8,v61,v61
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)v61.u8));
	// vcmpbfp128 v60,v61,v62
	__builtin_debugtrap();
	// vnmsubfp v8,v8,v0,v13
	simde_mm_store_ps(ctx.v8.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor v6,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vor128 v5,v61,v61
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)v61.u8));
	// vcmpbfp128 v62,v63,v62
	__builtin_debugtrap();
	// vcmpequw128 v4,v60,v127
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)v60.u32), simde_mm_load_si128((simde__m128i*)v127.u32)));
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// vmaddfp v0,v0,v8,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vcmpequw128 v7,v62,v127
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), simde_mm_load_si128((simde__m128i*)v127.u32)));
	// vsel v10,v9,v10,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8))));
	// vnmsubfp v13,v5,v0,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v8,v0,v0
	simde_mm_store_ps(ctx.v8.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v0,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vsel v0,v6,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vmulfp128 v0,v63,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v11,v0,v12
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vsel v0,v0,v10,v4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8))));
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f31,128(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x831b7080
	sub_831B7080(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83125fd8
	if (!cr0.eq) goto loc_83125FD8;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x831b7060
	sub_831B7060(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83125ff0
	if (!cr0.eq) goto loc_83125FF0;
loc_83125FD8:
	// fadds f0,f30,f29
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f30.f64 + f29.f64));
	// fadds f13,f28,f27
	ctx.f13.f64 = double(float(f28.f64 + f27.f64));
	// fmuls f31,f0,f25
	f31.f64 = double(float(f0.f64 * f25.f64));
	// stfs f31,128(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f0,f13,f25
	f0.f64 = double(float(ctx.f13.f64 * f25.f64));
	// stfs f0,132(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
loc_83125FF0:
	// lhz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// lfs f13,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// extsh r11,r8
	r11.s64 = ctx.r8.s16;
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// std r11,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, r11.u64);
	// std r10,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r10.u64);
	// lfd f12,168(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// lfd f0,152(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsubs f0,f31,f0
	f0.f64 = double(float(f31.f64 - f0.f64));
loc_8312602C:
	// lfs f12,20(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// ld r11,0(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// fadds f0,f0,f12
	f0.f64 = double(float(f0.f64 + ctx.f12.f64));
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// cmpw cr6,r26,r29
	cr6.compare<int32_t>(r26.s32, r29.s32, xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// fadds f0,f0,f25
	f0.f64 = double(float(f0.f64 + f25.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lhz r11,94(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// sth r11,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r11.u16);
	// lfs f0,24(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 24);
	f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 - f0.f64));
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// fadds f0,f0,f25
	f0.f64 = double(float(f0.f64 + f25.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lhz r11,94(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// sth r11,0(r30)
	PPC_STORE_U16(r30.u32 + 0, r11.u16);
	// blt cr6,0x83125c4c
	if (cr6.lt) goto loc_83125C4C;
loc_83126084:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// mr r27,r29
	r27.u64 = r29.u64;
	// cmpw cr6,r24,r22
	cr6.compare<int32_t>(r24.s32, r22.s32, xer);
	// blt cr6,0x83125bb4
	if (cr6.lt) goto loc_83125BB4;
loc_83126094:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// addi r12,r1,-176
	r12.s64 = ctx.r1.s64 + -176;
	// bl 0x831b395c
	// addi r12,r1,-112
	r12.s64 = ctx.r1.s64 + -112;
	// bl 0x831b1478
	// b 0x831b0b54
	return;
}

__attribute__((alias("__imp__sub_831260B0"))) PPC_WEAK_FUNC(sub_831260B0);
PPC_FUNC_IMPL(__imp__sub_831260B0) {
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
	// lis r9,-31946
	ctx.r9.s64 = -2093613056;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r25,0
	r25.s64 = 0;
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lwz r9,-1060(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1060);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r25,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r25.u32);
	// addi r26,r11,-7312
	r26.s64 = r11.s64 + -7312;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// addi r8,r26,8
	ctx.r8.s64 = r26.s64 + 8;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// mr r28,r25
	r28.u64 = r25.u64;
	// lbz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 6);
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// lbz r4,3(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// lbz r30,7(r11)
	r30.u64 = PPC_LOAD_U8(r11.u32 + 7);
	// lbz r3,5(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// rotlwi r9,r7,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// rotlwi r6,r6,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// or r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 | ctx.r5.u64;
	// or r7,r6,r4
	ctx.r7.u64 = ctx.r6.u64 | ctx.r4.u64;
	// or r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 | r30.u64;
	// clrlwi r27,r9,16
	r27.u64 = ctx.r9.u32 & 0xFFFF;
	// rotlwi r11,r11,8
	r11.u64 = __builtin_rotateleft32(r11.u32, 8);
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(r31.u32, ctx.r8.u32, xer);
	// or r11,r11,r3
	r11.u64 = r11.u64 | ctx.r3.u64;
	// clrlwi r23,r7,16
	r23.u64 = ctx.r7.u32 & 0xFFFF;
	// clrlwi r22,r11,16
	r22.u64 = r11.u32 & 0xFFFF;
	// clrlwi r21,r10,16
	r21.u64 = ctx.r10.u32 & 0xFFFF;
	// beq cr6,0x83126198
	if (cr6.eq) goto loc_83126198;
	// clrlwi r30,r27,16
	r30.u64 = r27.u32 & 0xFFFF;
loc_83126158:
	// lhz r11,16(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 16);
	// lhz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 12);
	// add r28,r11,r28
	r28.u64 = r11.u64 + r28.u64;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// bne cr6,0x8312617c
	if (!cr6.eq) goto loc_8312617C;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8312618c
	if (cr6.eq) goto loc_8312618C;
loc_8312617C:
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r26,8
	r11.s64 = r26.s64 + 8;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x83126158
	if (!cr6.eq) goto loc_83126158;
loc_8312618C:
	// addi r11,r26,8
	r11.s64 = r26.s64 + 8;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8312635c
	if (!cr6.eq) goto loc_8312635C;
loc_83126198:
	// lwz r11,292(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 292);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831261b4
	if (!cr6.eq) goto loc_831261B4;
loc_831261A4:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x831bafb8
	sub_831BAFB8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831263b8
	goto loc_831263B8;
loc_831261B4:
	// lwz r11,288(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 288);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831261c4
	if (!cr6.eq) goto loc_831261C4;
	// li r11,16384
	r11.s64 = 16384;
loc_831261C4:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// mr r31,r25
	r31.u64 = r25.u64;
	// cmplwi cr6,r11,32768
	cr6.compare<uint32_t>(r11.u32, 32768, xer);
	// ble cr6,0x8312624c
	if (!cr6.gt) goto loc_8312624C;
loc_831261D8:
	// lwz r30,12(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831250a8
	sub_831250A8(ctx, base);
	// lhz r11,16(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 16);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// subf r28,r10,r28
	r28.s64 = r28.s64 - ctx.r10.s64;
	// bne cr6,0x83126224
	if (!cr6.eq) goto loc_83126224;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x83126224
	if (cr6.lt) goto loc_83126224;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// sth r27,12(r30)
	PPC_STORE_U16(r30.u32 + 12, r27.u16);
	// mr r31,r30
	r31.u64 = r30.u64;
	// sth r11,14(r30)
	PPC_STORE_U16(r30.u32 + 14, r11.u16);
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// bl 0x83125078
	sub_83125078(ctx, base);
	// b 0x83126234
	goto loc_83126234;
loc_83126224:
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_83126234:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// cmplwi cr6,r11,32768
	cr6.compare<uint32_t>(r11.u32, 32768, xer);
	// bgt cr6,0x831261d8
	if (cr6.gt) goto loc_831261D8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83126298
	if (!cr6.eq) goto loc_83126298;
loc_8312624C:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x831261a4
	if (cr0.eq) goto loc_831261A4;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne 0x8312627c
	if (!cr0.eq) goto loc_8312627C;
loc_83126274:
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// b 0x831261a4
	goto loc_831261A4;
loc_8312627C:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// sth r27,12(r31)
	PPC_STORE_U16(r31.u32 + 12, r27.u16);
	// sth r25,14(r31)
	PPC_STORE_U16(r31.u32 + 14, r25.u16);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// sth r11,16(r31)
	PPC_STORE_U16(r31.u32 + 16, r11.u16);
	// bl 0x83125078
	sub_83125078(ctx, base);
loc_83126298:
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// rlwinm r10,r27,12,4,19
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 12) & 0xFFFF000;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r5,4096
	ctx.r5.s64 = 4096;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r6,292(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 292);
	// addi r3,r11,20
	ctx.r3.s64 = r11.s64 + 20;
	// clrlwi r30,r27,16
	r30.u64 = r27.u32 & 0xFFFF;
	// bl 0x83125518
	sub_83125518(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x831262d4
	if (!cr0.lt) goto loc_831262D4;
loc_831262C4:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
loc_831262C8:
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x83126274
	goto loc_83126274;
loc_831262D4:
	// li r10,20
	ctx.r10.s64 = 20;
	// lwz r3,292(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 292);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// bl 0x8324ba7c
	__imp__XeCryptSha(ctx, base);
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// mulli r11,r30,20
	r11.s64 = r30.s64 * 20;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r11,20
	ctx.r9.s64 = r11.s64 + 20;
loc_8312630C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x8312632c
	if (!cr0.eq) goto loc_8312632C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x8312630c
	if (!cr6.eq) goto loc_8312630C;
loc_8312632C:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x831262c8
	if (!cr0.eq) goto loc_831262C8;
	// li r6,4096
	ctx.r6.s64 = 4096;
	// lwz r5,292(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 292);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83121840
	sub_83121840(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831262c4
	if (!cr0.eq) goto loc_831262C4;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// sth r11,14(r31)
	PPC_STORE_U16(r31.u32 + 14, r11.u16);
	// b 0x83126364
	goto loc_83126364;
loc_8312635C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831250a8
	sub_831250A8(ctx, base);
loc_83126364:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83125088
	sub_83125088(ctx, base);
	// clrlwi r11,r22,16
	r11.u64 = r22.u32 & 0xFFFF;
	// clrlwi r10,r21,16
	ctx.r10.u64 = r21.u32 & 0xFFFF;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// clrlwi r11,r23,16
	r11.u64 = r23.u32 & 0xFFFF;
	// beq cr6,0x83126388
	if (cr6.eq) goto loc_83126388;
	// lhz r10,14(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 14);
loc_83126388:
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi. r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x831263a8
	if (cr0.eq) goto loc_831263A8;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// stw r9,0(r24)
	PPC_STORE_U32(r24.u32 + 0, ctx.r9.u32);
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + r11.u64;
	// b 0x831263ac
	goto loc_831263AC;
loc_831263A8:
	// mr r31,r25
	r31.u64 = r25.u64;
loc_831263AC:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x831bafb8
	sub_831BAFB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_831263B8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_831263C0"))) PPC_WEAK_FUNC(sub_831263C0);
PPC_FUNC_IMPL(__imp__sub_831263C0) {
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
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// stw r27,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r27.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x831263f4
	if (cr6.eq) goto loc_831263F4;
	// bl 0x831260b0
	sub_831260B0(ctx, base);
	// b 0x83126534
	goto loc_83126534;
loc_831263F4:
	// lhz r11,354(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 354);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bne cr6,0x83126460
	if (!cr6.eq) goto loc_83126460;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r7,5(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// lbz r7,6(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 6);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r11,7(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 7);
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r29,r10,r6
	r29.u64 = ctx.r10.u64 | ctx.r6.u64;
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// b 0x83126490
	goto loc_83126490;
loc_83126460:
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// rlwinm r29,r10,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_83126490:
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x831264a0
	if (cr6.lt) goto loc_831264A0;
loc_83126498:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83126534
	goto loc_83126534;
loc_831264A0:
	// lwz r10,300(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 300);
	// subf r30,r29,r11
	r30.s64 = r11.s64 - r29.s64;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// bge cr6,0x831264e8
	if (!cr6.lt) goto loc_831264E8;
	// srawi r11,r30,8
	xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xFF) != 0);
	r11.s64 = r30.s32 >> 8;
	// lwz r3,296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 296);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// rlwinm r28,r11,8,0,23
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// beq cr6,0x831264d0
	if (cr6.eq) goto loc_831264D0;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// stw r27,300(r31)
	PPC_STORE_U32(r31.u32 + 300, r27.u32);
loc_831264D0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// stw r3,296(r31)
	PPC_STORE_U32(r31.u32 + 296, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83126498
	if (cr0.eq) goto loc_83126498;
	// stw r28,300(r31)
	PPC_STORE_U32(r31.u32 + 300, r28.u32);
loc_831264E8:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r11,44(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8312651c
	if (!cr6.eq) goto loc_8312651C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r3,r10,20
	ctx.r3.s64 = ctx.r10.s64 + 20;
	// lwz r6,296(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 296);
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
	// bl 0x83125518
	sub_83125518(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x8312652c
	if (!cr0.lt) goto loc_8312652C;
	// b 0x83126498
	goto loc_83126498;
loc_8312651C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 296);
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
loc_8312652C:
	// stw r30,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r30.u32);
	// lwz r3,296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 296);
loc_83126534:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83126540"))) PPC_WEAK_FUNC(sub_83126540);
PPC_FUNC_IMPL(__imp__sub_83126540) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0af0
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r15,r4
	r15.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r14,0
	r14.s64 = 0;
	// lbz r11,4(r15)
	r11.u64 = PPC_LOAD_U8(r15.u32 + 4);
	// lbz r10,5(r15)
	ctx.r10.u64 = PPC_LOAD_U8(r15.u32 + 5);
	// rotlwi r11,r11,8
	r11.u64 = __builtin_rotateleft32(r11.u32, 8);
	// extsh r11,r11
	r11.s64 = r11.s16;
	// or. r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// ble 0x83126ad8
	if (!cr0.gt) goto loc_83126AD8;
	// lis r30,-32231
	r30.s64 = -2112290816;
	// lis r31,-32231
	r31.s64 = -2112290816;
	// lis r3,-32231
	ctx.r3.s64 = -2112290816;
	// lis r4,-32231
	ctx.r4.s64 = -2112290816;
	// lis r5,-32231
	ctx.r5.s64 = -2112290816;
	// lis r6,-32231
	ctx.r6.s64 = -2112290816;
	// lis r7,-32231
	ctx.r7.s64 = -2112290816;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r27,r15,12
	r27.s64 = r15.s64 + 12;
	// addi r25,r30,-9712
	r25.s64 = r30.s64 + -9712;
	// addi r24,r31,-9720
	r24.s64 = r31.s64 + -9720;
	// addi r23,r3,-9728
	r23.s64 = ctx.r3.s64 + -9728;
	// addi r22,r4,-9736
	r22.s64 = ctx.r4.s64 + -9736;
	// addi r21,r5,-9744
	r21.s64 = ctx.r5.s64 + -9744;
	// addi r20,r6,-9752
	r20.s64 = ctx.r6.s64 + -9752;
	// addi r19,r7,-9760
	r19.s64 = ctx.r7.s64 + -9760;
	// addi r18,r8,-15828
	r18.s64 = ctx.r8.s64 + -15828;
	// addi r17,r9,-9768
	r17.s64 = ctx.r9.s64 + -9768;
	// addi r16,r10,-9780
	r16.s64 = ctx.r10.s64 + -9780;
	// addi r26,r11,20608
	r26.s64 = r11.s64 + 20608;
loc_831265D0:
	// lbz r11,8(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 8);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lbz r10,9(r27)
	ctx.r10.u64 = PPC_LOAD_U8(r27.u32 + 9);
	// li r5,4
	ctx.r5.s64 = 4;
	// rotlwi r11,r11,8
	r11.u64 = __builtin_rotateleft32(r11.u32, 8);
	// lbz r9,12(r27)
	ctx.r9.u64 = PPC_LOAD_U8(r27.u32 + 12);
	// lbz r8,13(r27)
	ctx.r8.u64 = PPC_LOAD_U8(r27.u32 + 13);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// lbz r10,10(r27)
	ctx.r10.u64 = PPC_LOAD_U8(r27.u32 + 10);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r7,14(r27)
	ctx.r7.u64 = PPC_LOAD_U8(r27.u32 + 14);
	// rlwinm r11,r11,8,0,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r6,11(r27)
	ctx.r6.u64 = PPC_LOAD_U8(r27.u32 + 11);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// lbz r8,15(r27)
	ctx.r8.u64 = PPC_LOAD_U8(r27.u32 + 15);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// rlwinm r10,r9,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r11,r11,8,0,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// or r30,r11,r6
	r30.u64 = r11.u64 | ctx.r6.u64;
	// rlwinm r11,r10,8,0,23
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// add r31,r30,r15
	r31.u64 = r30.u64 + r15.u64;
	// or r28,r11,r8
	r28.u64 = r11.u64 | ctx.r8.u64;
	// bl 0x831b5880
	sub_831B5880(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83126770
	if (!cr0.eq) goto loc_83126770;
	// lbz r11,2(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// li r9,0
	ctx.r9.s64 = 0;
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// lbz r8,3(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 3);
	// rotlwi r11,r11,8
	r11.u64 = __builtin_rotateleft32(r11.u32, 8);
	// lbz r7,5(r31)
	ctx.r7.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// clrlwi. r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// add r5,r10,r31
	ctx.r5.u64 = ctx.r10.u64 + r31.u64;
	// addi r10,r31,6
	ctx.r10.s64 = r31.s64 + 6;
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
	// ble 0x83126ac4
	if (!cr0.gt) goto loc_83126AC4;
	// addi r11,r10,11
	r11.s64 = ctx.r10.s64 + 11;
loc_83126678:
	// lbz r8,-3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + -3);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r4,-2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + -2);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lbz r3,-1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// lbz r31,-10(r11)
	r31.u64 = PPC_LOAD_U8(r11.u32 + -10);
	// or r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 | ctx.r4.u64;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// rotlwi r3,r3,8
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// or r7,r31,r7
	ctx.r7.u64 = r31.u64 | ctx.r7.u64;
	// or r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 | ctx.r4.u64;
	// clrlwi r3,r7,16
	ctx.r3.u64 = ctx.r7.u32 & 0xFFFF;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// clrlwi r7,r4,16
	ctx.r7.u64 = ctx.r4.u32 & 0xFFFF;
	// srawi r8,r8,1
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 1;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// bne cr6,0x831266f8
	if (!cr6.eq) goto loc_831266F8;
	// lbz r4,-7(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + -7);
	// lbz r3,-6(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + -6);
	// rotlwi r4,r4,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// or r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 | ctx.r3.u64;
	// clrlwi r4,r4,22
	ctx.r4.u64 = ctx.r4.u32 & 0x3FF;
	// cmplwi cr6,r4,9
	cr6.compare<uint32_t>(ctx.r4.u32, 9, xer);
	// bne cr6,0x831266f8
	if (!cr6.eq) goto loc_831266F8;
	// lbz r4,-5(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + -5);
	// lbz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + -4);
	// rotlwi r4,r4,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// or r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 | ctx.r3.u64;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// beq cr6,0x83126710
	if (cr6.eq) goto loc_83126710;
loc_831266F8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// cmpw cr6,r9,r6
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, xer);
	// blt cr6,0x83126678
	if (cr6.lt) goto loc_83126678;
	// b 0x83126ac4
	goto loc_83126AC4;
loc_83126710:
	// clrlwi r11,r8,16
	r11.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplwi cr6,r11,19
	cr6.compare<uint32_t>(r11.u32, 19, xer);
	// blt cr6,0x83126720
	if (cr6.lt) goto loc_83126720;
	// li r8,18
	ctx.r8.s64 = 18;
loc_83126720:
	// clrlwi. r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r11,r29,316
	r11.s64 = r29.s64 + 316;
	// ble 0x83126764
	if (!cr0.gt) goto loc_83126764;
	// clrlwi r10,r7,16
	ctx.r10.u64 = ctx.r7.u32 & 0xFFFF;
	// subf r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - r29.s64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r10,r10,-316
	ctx.r10.s64 = ctx.r10.s64 + -316;
loc_83126740:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// sth r8,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r8.u16);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// bne 0x83126740
	if (!cr0.eq) goto loc_83126740;
loc_83126764:
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r10.u16);
	// b 0x83126ac4
	goto loc_83126AC4;
loc_83126770:
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x831b5880
	sub_831B5880(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83126aa8
	if (cr0.eq) goto loc_83126AA8;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x831b5880
	sub_831B5880(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83126aa8
	if (cr0.eq) goto loc_83126AA8;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x831b5880
	sub_831B5880(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8312688c
	if (!cr0.eq) goto loc_8312688C;
	// lbz r11,12(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// lis r10,24335
	ctx.r10.s64 = 1594818560;
	// lbz r9,13(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 13);
	// rotlwi r11,r11,8
	r11.u64 = __builtin_rotateleft32(r11.u32, 8);
	// lbz r8,14(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 14);
	// lbz r7,15(r31)
	ctx.r7.u64 = PPC_LOAD_U8(r31.u32 + 15);
	// ori r10,r10,15605
	ctx.r10.u64 = ctx.r10.u64 | 15605;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// rlwinm r11,r11,8,0,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r7
	r11.u64 = r11.u64 | ctx.r7.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x83126b5c
	if (!cr6.eq) goto loc_83126B5C;
	// lbz r11,16(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// lbz r10,17(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 17);
	// rotlwi r11,r11,8
	r11.u64 = __builtin_rotateleft32(r11.u32, 8);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// sth r11,380(r29)
	PPC_STORE_U16(r29.u32 + 380, r11.u16);
	// lbz r11,19(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 19);
	// lbz r10,18(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 18);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// sth r11,356(r29)
	PPC_STORE_U16(r29.u32 + 356, r11.u16);
	// lbz r11,37(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 37);
	// lbz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 36);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// sth r11,370(r29)
	PPC_STORE_U16(r29.u32 + 370, r11.u16);
	// lbz r11,39(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 39);
	// lbz r10,38(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 38);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// sth r11,374(r29)
	PPC_STORE_U16(r29.u32 + 374, r11.u16);
	// lbz r11,41(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 41);
	// lbz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 40);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// sth r11,372(r29)
	PPC_STORE_U16(r29.u32 + 372, r11.u16);
	// lbz r11,43(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 43);
	// lbz r10,42(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 42);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// sth r11,376(r29)
	PPC_STORE_U16(r29.u32 + 376, r11.u16);
	// lbz r11,45(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 45);
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// sth r11,378(r29)
	PPC_STORE_U16(r29.u32 + 378, r11.u16);
	// lbz r11,51(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 51);
	// lbz r10,50(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 50);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// sth r11,354(r29)
	PPC_STORE_U16(r29.u32 + 354, r11.u16);
	// b 0x83126ac4
	goto loc_83126AC4;
loc_8312688C:
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x831b5880
	sub_831B5880(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83126924
	if (!cr0.eq) goto loc_83126924;
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// lbz r10,5(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// rotlwi r11,r11,8
	r11.u64 = __builtin_rotateleft32(r11.u32, 8);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// sth r11,360(r29)
	PPC_STORE_U16(r29.u32 + 360, r11.u16);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// lbz r10,7(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 7);
	// lbz r9,6(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 6);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// sth r9,362(r29)
	PPC_STORE_U16(r29.u32 + 362, ctx.r9.u16);
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// lbz r8,9(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 9);
	// lbz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 8);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// sth r11,364(r29)
	PPC_STORE_U16(r29.u32 + 364, r11.u16);
	// lbz r11,11(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11);
	// lbz r10,10(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 10);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// sth r11,366(r29)
	PPC_STORE_U16(r29.u32 + 366, r11.u16);
	// lbz r11,35(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 35);
	// lbz r10,34(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 34);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// sth r11,368(r29)
	PPC_STORE_U16(r29.u32 + 368, r11.u16);
	// b 0x83126ac4
	goto loc_83126AC4;
loc_83126924:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x831b5880
	sub_831B5880(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831269cc
	if (!cr0.eq) goto loc_831269CC;
	// lbz r11,2(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// lbz r9,3(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 3);
	// addi r10,r31,4
	ctx.r10.s64 = r31.s64 + 4;
	// rotlwi r11,r11,8
	r11.u64 = __builtin_rotateleft32(r11.u32, 8);
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// clrlwi. r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// ble 0x83126ac4
	if (!cr0.gt) goto loc_83126AC4;
	// addi r11,r10,6
	r11.s64 = ctx.r10.s64 + 6;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
loc_83126968:
	// lbz r10,-2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + -2);
	// lbz r9,-1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r6,1(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// clrlwi. r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x831269b0
	if (!cr0.eq) goto loc_831269B0;
	// stw r10,312(r29)
	PPC_STORE_U32(r29.u32 + 312, ctx.r10.u32);
loc_831269B0:
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// bne cr6,0x831269bc
	if (!cr6.eq) goto loc_831269BC;
	// stw r10,312(r29)
	PPC_STORE_U32(r29.u32 + 312, ctx.r10.u32);
loc_831269BC:
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bne 0x83126968
	if (!cr0.eq) goto loc_83126968;
	// b 0x83126ac4
	goto loc_83126AC4;
loc_831269CC:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x831b5880
	sub_831B5880(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83126a9c
	if (cr0.eq) goto loc_83126A9C;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x831b5880
	sub_831B5880(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83126a9c
	if (cr0.eq) goto loc_83126A9C;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x831b5880
	sub_831B5880(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83126a20
	if (!cr0.eq) goto loc_83126A20;
	// stw r31,304(r29)
	PPC_STORE_U32(r29.u32 + 304, r31.u32);
	// stw r28,308(r29)
	PPC_STORE_U32(r29.u32 + 308, r28.u32);
	// b 0x83126ac4
	goto loc_83126AC4;
loc_83126A20:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x831b5880
	sub_831B5880(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83126a44
	if (!cr0.eq) goto loc_83126A44;
	// stw r31,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r31.u32);
	// stw r28,28(r29)
	PPC_STORE_U32(r29.u32 + 28, r28.u32);
	// b 0x83126ac4
	goto loc_83126AC4;
loc_83126A44:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x831b5880
	sub_831B5880(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83126ac4
	if (!cr0.eq) goto loc_83126AC4;
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// addi r3,r29,32
	ctx.r3.s64 = r29.s64 + 32;
	// lbz r10,5(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// rotlwi r11,r11,8
	r11.u64 = __builtin_rotateleft32(r11.u32, 8);
	// lbz r9,6(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 6);
	// lbz r8,7(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 7);
	// li r5,256
	ctx.r5.s64 = 256;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// rlwinm r11,r11,8,0,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// stw r11,288(r29)
	PPC_STORE_U32(r29.u32 + 288, r11.u32);
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// b 0x83126ac4
	goto loc_83126AC4;
loc_83126A9C:
	// stw r31,16(r29)
	PPC_STORE_U32(r29.u32 + 16, r31.u32);
	// stw r28,20(r29)
	PPC_STORE_U32(r29.u32 + 20, r28.u32);
	// b 0x83126ac4
	goto loc_83126AC4;
loc_83126AA8:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r30,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r30.u32);
	// stw r28,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r28.u32);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83126ac4
	if (cr6.eq) goto loc_83126AC4;
	// stw r31,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r31.u32);
loc_83126AC4:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addi r27,r27,16
	r27.s64 = r27.s64 + 16;
	// cmpw cr6,r14,r11
	cr6.compare<int32_t>(r14.s32, r11.s32, xer);
	// blt cr6,0x831265d0
	if (cr6.lt) goto loc_831265D0;
loc_83126AD8:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83126b5c
	if (cr6.eq) goto loc_83126B5C;
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83126b5c
	if (cr6.eq) goto loc_83126B5C;
	// lwz r11,312(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 312);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83126b5c
	if (cr6.eq) goto loc_83126B5C;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83126b24
	if (cr6.eq) goto loc_83126B24;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83126b5c
	if (cr6.eq) goto loc_83126B5C;
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83126b5c
	if (cr6.eq) goto loc_83126B5C;
loc_83126B24:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x83126b44
	if (cr6.eq) goto loc_83126B44;
	// lhz r11,354(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 354);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x83126b44
	if (cr6.eq) goto loc_83126B44;
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// rlwinm r11,r11,31,1,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x83126b4c
	goto loc_83126B4C;
loc_83126B44:
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
loc_83126B4C:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,358(r29)
	PPC_STORE_U16(r29.u32 + 358, r11.u16);
	// b 0x83126b60
	goto loc_83126B60;
loc_83126B5C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83126B60:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831b0b40
	return;
}

__attribute__((alias("__imp__sub_83126B68"))) PPC_WEAK_FUNC(sub_83126B68);
PPC_FUNC_IMPL(__imp__sub_83126B68) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r11,304
	ctx.r3.s64 = r11.s64 + 304;
	// bl 0x831263c0
	sub_831263C0(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne 0x83126ba0
	if (!cr0.eq) goto loc_83126BA0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83126bb4
	goto loc_83126BB4;
loc_83126BA0:
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83126bc0
	sub_83126BC0(ctx, base);
loc_83126BB4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83126BC0"))) PPC_WEAK_FUNC(sub_83126BC0);
PPC_FUNC_IMPL(__imp__sub_83126BC0) {
	PPC_FUNC_PROLOGUE();
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
	// lbz r11,0(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// lbz r10,1(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r9,2(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 2);
	// rotlwi r11,r11,8
	r11.u64 = __builtin_rotateleft32(r11.u32, 8);
	// lbz r8,3(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 3);
	// mr r15,r7
	r15.u64 = ctx.r7.u64;
	// or r10,r11,r10
	ctx.r10.u64 = r11.u64 | ctx.r10.u64;
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lwz r11,0(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + 0);
	// extsh r24,r10
	r24.s64 = ctx.r10.s16;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// li r17,0
	r17.s64 = 0;
	// addi r31,r5,10
	r31.s64 = ctx.r5.s64 + 10;
	// addi r18,r11,304
	r18.s64 = r11.s64 + 304;
	// extsh r25,r9
	r25.s64 = ctx.r9.s16;
	// cmpwi cr6,r24,-1
	cr6.compare<int32_t>(r24.s32, -1, xer);
	// bne cr6,0x83126e30
	if (!cr6.eq) goto loc_83126E30;
	// addi r19,r18,384
	r19.s64 = r18.s64 + 384;
loc_83126C1C:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// li r22,0
	r22.s64 = 0;
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// li r20,0
	r20.s64 = 0;
	// rotlwi r11,r11,8
	r11.u64 = __builtin_rotateleft32(r11.u32, 8);
	// lbz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// lbz r7,3(r31)
	ctx.r7.u64 = PPC_LOAD_U8(r31.u32 + 3);
	// li r27,1
	r27.s64 = 1;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// clrlwi r10,r11,16
	ctx.r10.u64 = r11.u32 & 0xFFFF;
	// li r29,1
	r29.s64 = 1;
	// clrlwi. r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// li r26,1
	r26.s64 = 1;
	// li r25,1
	r25.s64 = 1;
	// or r28,r9,r7
	r28.u64 = ctx.r9.u64 | ctx.r7.u64;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// mr r21,r10
	r21.u64 = ctx.r10.u64;
	// beq 0x83126c90
	if (cr0.eq) goto loc_83126C90;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r31,r11,4
	r31.s64 = r11.s64 + 4;
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | r11.u64;
	// b 0x83126ca0
	goto loc_83126CA0;
loc_83126C90:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r31,r11,1
	r31.s64 = r11.s64 + 1;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
loc_83126CA0:
	// rlwinm. r11,r21,0,30,30
	r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83126cc4
	if (cr0.eq) goto loc_83126CC4;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83126cbc
	if (cr6.eq) goto loc_83126CBC;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// b 0x83126cc4
	goto loc_83126CC4;
loc_83126CBC:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
loc_83126CC4:
	// andi. r11,r21,200
	r11.u64 = r21.u64 & 200;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// rlwinm r24,r10,4,0,27
	r24.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r23,r9,4,0,27
	r23.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83126cf8
	if (cr0.eq) goto loc_83126CF8;
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// li r20,1
	r20.s64 = 1;
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// rotlwi r11,r11,8
	r11.u64 = __builtin_rotateleft32(r11.u32, 8);
	// extsh r11,r11
	r11.s64 = r11.s16;
	// or r29,r11,r10
	r29.u64 = r11.u64 | ctx.r10.u64;
	// mr r27,r29
	r27.u64 = r29.u64;
loc_83126CF8:
	// rlwinm. r11,r21,0,24,25
	r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0xC0;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83126d18
	if (cr0.eq) goto loc_83126D18;
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// rotlwi r11,r11,8
	r11.u64 = __builtin_rotateleft32(r11.u32, 8);
	// extsh r11,r11
	r11.s64 = r11.s16;
	// or r29,r11,r10
	r29.u64 = r11.u64 | ctx.r10.u64;
loc_83126D18:
	// rlwinm. r11,r21,0,24,24
	r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83126d58
	if (cr0.eq) goto loc_83126D58;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// addi r11,r31,2
	r11.s64 = r31.s64 + 2;
	// lbz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// mr r26,r29
	r26.u64 = r29.u64;
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,1(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r7,3(r31)
	ctx.r7.u64 = PPC_LOAD_U8(r31.u32 + 3);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// li r22,1
	r22.s64 = 1;
	// addi r31,r11,2
	r31.s64 = r11.s64 + 2;
	// or r25,r10,r8
	r25.u64 = ctx.r10.u64 | ctx.r8.u64;
	// or r29,r9,r7
	r29.u64 = ctx.r9.u64 | ctx.r7.u64;
loc_83126D58:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// li r30,0
	r30.s64 = 0;
	// bl 0x83127168
	sub_83127168(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x83126b68
	sub_83126B68(ctx, base);
	// mr. r17,r3
	r17.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r17.s32, 0, xer);
	// blt 0x831270ec
	if (cr0.lt) goto loc_831270EC;
	// lwz r11,388(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 388);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x83126e08
	if (!cr6.gt) goto loc_83126E08;
	// li r7,0
	ctx.r7.s64 = 0;
loc_83126D8C:
	// lwz r11,396(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 396);
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// add r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 + r11.u64;
	// lwzx r11,r7,r11
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + r11.u32);
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// beq cr6,0x83126dc4
	if (cr6.eq) goto loc_83126DC4;
	// mullw r9,r11,r27
	ctx.r9.s64 = int64_t(r11.s32) * int64_t(r27.s32);
	// mullw r8,r10,r25
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(r25.s32);
	// mullw r11,r11,r26
	r11.s64 = int64_t(r11.s32) * int64_t(r26.s32);
	// mullw r10,r10,r29
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r29.s32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// srawi r11,r9,14
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3FFF) != 0);
	r11.s64 = ctx.r9.s32 >> 14;
	// b 0x83126dd8
	goto loc_83126DD8;
loc_83126DC4:
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(r20.s32, 0, xer);
	// beq cr6,0x83126ddc
	if (cr6.eq) goto loc_83126DDC;
	// mullw r11,r11,r27
	r11.s64 = int64_t(r11.s32) * int64_t(r27.s32);
	// mullw r10,r10,r29
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r29.s32);
	// srawi r11,r11,14
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3FFF) != 0);
	r11.s64 = r11.s32 >> 14;
loc_83126DD8:
	// srawi r10,r10,14
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3FFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 14;
loc_83126DDC:
	// add r11,r11,r24
	r11.u64 = r11.u64 + r24.u64;
	// subf r10,r23,r10
	ctx.r10.s64 = ctx.r10.s64 - r23.s64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r11,396(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 396);
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// lwz r11,388(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 388);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x83126d8c
	if (cr6.lt) goto loc_83126D8C;
loc_83126E08:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x83127240
	sub_83127240(ctx, base);
	// mr. r17,r3
	r17.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r17.s32, 0, xer);
	// blt 0x831270ec
	if (cr0.lt) goto loc_831270EC;
	// rlwinm. r11,r21,0,26,26
	r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83126c1c
	if (!cr0.eq) goto loc_83126C1C;
	// b 0x831270ec
	goto loc_831270EC;
loc_83126E30:
	// rlwinm r11,r24,1,0,30
	r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,412(r18)
	ctx.r8.u64 = PPC_LOAD_U32(r18.u32 + 412);
	// li r27,0
	r27.s64 = 0;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r9,-2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + -2);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r6,-1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// addi r30,r11,2
	r30.s64 = r11.s64 + 2;
	// clrlwi r11,r10,16
	r11.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r10,r11,3,13,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0x7FFF8;
	// mr r28,r11
	r28.u64 = r11.u64;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bge cr6,0x83126ec4
	if (!cr6.lt) goto loc_83126EC4;
	// rlwinm r11,r28,26,6,31
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 26) & 0x3FFFFFF;
	// lwz r3,408(r18)
	ctx.r3.u64 = PPC_LOAD_U32(r18.u32 + 408);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// rlwinm r29,r11,9,0,22
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 9) & 0xFFFFFE00;
	// beq cr6,0x83126e9c
	if (cr6.eq) goto loc_83126E9C;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_83126E9C:
	// li r11,0
	r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,412(r18)
	PPC_STORE_U32(r18.u32 + 412, r11.u32);
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// stw r3,408(r18)
	PPC_STORE_U32(r18.u32 + 408, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83126ec0
	if (!cr0.eq) goto loc_83126EC0;
	// li r17,-8
	r17.s64 = -8;
	// b 0x831270ec
	goto loc_831270EC;
loc_83126EC0:
	// stw r29,412(r18)
	PPC_STORE_U32(r18.u32 + 412, r29.u32);
loc_83126EC4:
	// lwz r29,408(r18)
	r29.u64 = PPC_LOAD_U32(r18.u32 + 408);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x83126f30
	if (!cr6.gt) goto loc_83126F30;
loc_83126ED4:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// rlwinm. r9,r9,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r8,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r8.u16);
	// beq 0x83126f28
	if (cr0.eq) goto loc_83126F28;
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83126f28
	if (cr0.eq) goto loc_83126F28;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + r29.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
loc_83126F18:
	// sth r8,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r8.u16);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bne 0x83126f18
	if (!cr0.eq) goto loc_83126F18;
loc_83126F28:
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// blt cr6,0x83126ed4
	if (cr6.lt) goto loc_83126ED4;
loc_83126F30:
	// lhz r11,380(r18)
	r11.u64 = PPC_LOAD_U16(r18.u32 + 380);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83126f7c
	if (!cr0.eq) goto loc_83126F7C;
	// lhz r10,368(r18)
	ctx.r10.u64 = PPC_LOAD_U16(r18.u32 + 368);
	// mr r11,r26
	r11.u64 = r26.u64;
	// cmpw cr6,r26,r10
	cr6.compare<int32_t>(r26.s32, ctx.r10.s32, xer);
	// blt cr6,0x83126f50
	if (cr6.lt) goto loc_83126F50;
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
loc_83126F50:
	// lwz r10,304(r18)
	ctx.r10.u64 = PPC_LOAD_U32(r18.u32 + 304);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r9,r25
	ctx.r9.s64 = r25.s16;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r10,r11,2
	ctx.r10.s64 = r11.s64 + 2;
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// subf r27,r9,r11
	r27.s64 = r11.s64 - ctx.r9.s64;
loc_83126F7C:
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x83127004
	if (!cr6.gt) goto loc_83127004;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
loc_83126F90:
	// lhz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 4);
	// andi. r10,r10,18
	ctx.r10.u64 = ctx.r10.u64 & 18;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83126fd0
	if (cr0.eq) goto loc_83126FD0;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// beq cr6,0x83126fc0
	if (cr6.eq) goto loc_83126FC0;
	// cmpwi cr6,r10,18
	cr6.compare<int32_t>(ctx.r10.s32, 18, xer);
	// bne cr6,0x83126ff0
	if (!cr6.eq) goto loc_83126FF0;
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// b 0x83126fec
	goto loc_83126FEC;
loc_83126FC0:
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// b 0x83126fec
	goto loc_83126FEC;
loc_83126FD0:
	// lbz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lbz r11,1(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 1);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// or r11,r7,r11
	r11.u64 = ctx.r7.u64 | r11.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
loc_83126FEC:
	// extsh r11,r11
	r11.s64 = r11.s16;
loc_83126FF0:
	// add r10,r11,r27
	ctx.r10.u64 = r11.u64 + r27.u64;
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// sth r10,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r10.u16);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bne 0x83126f90
	if (!cr0.eq) goto loc_83126F90;
loc_83127004:
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x83127090
	if (!cr6.gt) goto loc_83127090;
	// addi r9,r29,2
	ctx.r9.s64 = r29.s64 + 2;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
loc_83127018:
	// lhz r10,2(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// andi. r10,r10,36
	ctx.r10.u64 = ctx.r10.u64 & 36;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83127058
	if (cr0.eq) goto loc_83127058;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// beq cr6,0x83127048
	if (cr6.eq) goto loc_83127048;
	// cmpwi cr6,r10,36
	cr6.compare<int32_t>(ctx.r10.s32, 36, xer);
	// bne cr6,0x83127078
	if (!cr6.eq) goto loc_83127078;
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// b 0x83127074
	goto loc_83127074;
loc_83127048:
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// b 0x83127074
	goto loc_83127074;
loc_83127058:
	// lbz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lbz r11,1(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 1);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// or r11,r7,r11
	r11.u64 = ctx.r7.u64 | r11.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
loc_83127074:
	// extsh r11,r11
	r11.s64 = r11.s16;
loc_83127078:
	// extsh r10,r11
	ctx.r10.s64 = r11.s16;
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// neg r10,r10
	ctx.r10.s64 = -ctx.r10.s64;
	// sth r10,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r10.u16);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bne 0x83127018
	if (!cr0.eq) goto loc_83127018;
loc_83127090:
	// lwz r11,12(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + 12);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x831270ac
	if (cr0.eq) goto loc_831270AC;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x83125b00
	sub_83125B00(ctx, base);
loc_831270AC:
	// lwz r11,12(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + 12);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x831270d0
	if (cr0.eq) goto loc_831270D0;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x83125b68
	sub_83125B68(ctx, base);
loc_831270D0:
	// mr r8,r15
	ctx.r8.u64 = r15.u64;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x83125908
	sub_83125908(ctx, base);
loc_831270EC:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831b0b44
	return;
}

__attribute__((alias("__imp__sub_831270F8"))) PPC_WEAK_FUNC(sub_831270F8);
PPC_FUNC_IMPL(__imp__sub_831270F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r11.u32);
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, r11.u32);
	// stb r11,20(r4)
	PPC_STORE_U8(ctx.r4.u32 + 20, r11.u8);
	// stb r11,21(r4)
	PPC_STORE_U8(ctx.r4.u32 + 21, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83127120"))) PPC_WEAK_FUNC(sub_83127120);
PPC_FUNC_IMPL(__imp__sub_83127120) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83127144
	if (cr6.eq) goto loc_83127144;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_83127144:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83127154
	if (cr6.eq) goto loc_83127154;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_83127154:
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

__attribute__((alias("__imp__sub_83127168"))) PPC_WEAK_FUNC(sub_83127168);
PPC_FUNC_IMPL(__imp__sub_83127168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, r11.u8);
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83127180"))) PPC_WEAK_FUNC(sub_83127180);
PPC_FUNC_IMPL(__imp__sub_83127180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r10,20(r11)
	PPC_STORE_U8(r11.u32 + 20, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83127198"))) PPC_WEAK_FUNC(sub_83127198);
PPC_FUNC_IMPL(__imp__sub_83127198) {
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
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// add r10,r11,r4
	ctx.r10.u64 = r11.u64 + ctx.r4.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// ble cr6,0x83127220
	if (!cr6.gt) goto loc_83127220;
	// cmpwi cr6,r4,64
	cr6.compare<int32_t>(ctx.r4.s32, 64, xer);
	// li r30,64
	r30.s64 = 64;
	// blt cr6,0x831271d4
	if (cr6.lt) goto loc_831271D4;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_831271D4:
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x830e6210
	sub_830E6210(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831271f4
	if (!cr0.eq) goto loc_831271F4;
loc_831271EC:
	// li r3,-8
	ctx.r3.s64 = -8;
	// b 0x83127224
	goto loc_83127224;
loc_831271F4:
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// add r4,r30,r11
	ctx.r4.u64 = r30.u64 + r11.u64;
	// bl 0x830e6210
	sub_830E6210(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831271ec
	if (cr0.eq) goto loc_831271EC;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_83127220:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83127224:
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

__attribute__((alias("__imp__sub_83127240"))) PPC_WEAK_FUNC(sub_83127240);
PPC_FUNC_IMPL(__imp__sub_83127240) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwz r31,4(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x83127270
	if (!cr6.eq) goto loc_83127270;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831273a4
	goto loc_831273A4;
loc_83127270:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// beq cr6,0x8312729c
	if (cr6.eq) goto loc_8312729C;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83127298
	if (cr6.eq) goto loc_83127298;
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lbz r11,-1(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8312729c
	if (cr0.eq) goto loc_8312729C;
loc_83127298:
	// li r26,0
	r26.s64 = 0;
loc_8312729C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83127198
	sub_83127198(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// blt 0x831273a0
	if (cr0.lt) goto loc_831273A0;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// lwz r9,12(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// lwz r8,16(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r8,r11
	r30.u64 = ctx.r8.u64 + r11.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// beq cr6,0x8312734c
	if (cr6.eq) goto loc_8312734C;
	// lwz r7,12(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,16(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// addic. r11,r31,-1
	xer.ca = r31.u32 > 0;
	r11.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// blt 0x83127320
	if (cr0.lt) goto loc_83127320;
loc_831272F0:
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r6,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lbz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// stb r6,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r6.u8);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// bge 0x831272f0
	if (!cr0.lt) goto loc_831272F0;
loc_83127320:
	// add r11,r30,r31
	r11.u64 = r30.u64 + r31.u64;
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// rlwinm. r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// beq 0x83127344
	if (cr0.eq) goto loc_83127344;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
loc_83127344:
	// stb r10,-1(r11)
	PPC_STORE_U8(r11.u32 + -1, ctx.r10.u8);
	// b 0x8312736c
	goto loc_8312736C;
loc_8312734C:
	// rlwinm r5,r31,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
loc_8312736C:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// beq cr6,0x83127388
	if (cr6.eq) goto loc_83127388;
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,0,29,23
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFFFFFFF07) | (r11.u64 & 0xF8);
	// stb r11,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r11.u8);
	// b 0x83127394
	goto loc_83127394;
loc_83127388:
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r11.u8);
loc_83127394:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
loc_831273A0:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_831273A4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_831273B0"))) PPC_WEAK_FUNC(sub_831273B0);
PPC_FUNC_IMPL(__imp__sub_831273B0) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// lbz r11,20(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 20);
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// li r24,0
	r24.s64 = 0;
	// li r28,1
	r28.s64 = 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83127444
	if (cr0.eq) goto loc_83127444;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// bne cr6,0x83127444
	if (!cr6.eq) goto loc_83127444;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x83127444
	if (!cr6.gt) goto loc_83127444;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// beq cr6,0x83127414
	if (cr6.eq) goto loc_83127414;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
loc_83127414:
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lwz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + -8);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x83127444
	if (!cr6.eq) goto loc_83127444;
	// lwz r11,-4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, r11.s32, xer);
	// bne cr6,0x83127444
	if (!cr6.eq) goto loc_83127444;
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// mr r28,r24
	r28.u64 = r24.u64;
loc_83127444:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// add. r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x83127458
	if (!cr0.lt) goto loc_83127458;
	// li r3,-8
	ctx.r3.s64 = -8;
	// b 0x83127568
	goto loc_83127568;
loc_83127458:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x83127478
	if (!cr6.gt) goto loc_83127478;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83127198
	sub_83127198(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83127568
	if (cr0.lt) goto loc_83127568;
loc_83127478:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// beq cr6,0x83127484
	if (cr6.eq) goto loc_83127484;
	// stb r24,20(r31)
	PPC_STORE_U8(r31.u32 + 20, r24.u8);
loc_83127484:
	// lbz r11,20(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x831274a8
	if (cr0.eq) goto loc_831274A8;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x831274a0
	if (cr6.eq) goto loc_831274A0;
	// li r28,1
	r28.s64 = 1;
	// b 0x831274ac
	goto loc_831274AC;
loc_831274A0:
	// mr r28,r26
	r28.u64 = r26.u64;
	// b 0x831274ac
	goto loc_831274AC;
loc_831274A8:
	// mr r28,r24
	r28.u64 = r24.u64;
loc_831274AC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// beq cr6,0x831274f8
	if (cr6.eq) goto loc_831274F8;
	// addic. r11,r30,-1
	xer.ca = r30.u32 > 0;
	r11.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x83127504
	if (cr0.lt) goto loc_83127504;
loc_831274CC:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bge 0x831274cc
	if (!cr0.lt) goto loc_831274CC;
	// b 0x83127504
	goto loc_83127504;
loc_831274F8:
	// rlwinm r5,r30,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
loc_83127504:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stb r28,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r28.u8);
	// beq cr6,0x8312752c
	if (cr6.eq) goto loc_8312752C;
	// addi r5,r30,-1
	ctx.r5.s64 = r30.s64 + -1;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
loc_8312752C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stb r10,20(r31)
	PPC_STORE_U8(r31.u32 + 20, ctx.r10.u8);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// beq cr6,0x83127564
	if (cr6.eq) goto loc_83127564;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// stb r10,-1(r11)
	PPC_STORE_U8(r11.u32 + -1, ctx.r10.u8);
	// stb r24,20(r31)
	PPC_STORE_U8(r31.u32 + 20, r24.u8);
loc_83127564:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83127568:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_83127570"))) PPC_WEAK_FUNC(sub_83127570);
PPC_FUNC_IMPL(__imp__sub_83127570) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r3,r9,4
	ctx.r3.s64 = ctx.r9.s64 + 4;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_83127584:
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r7,r8,r6
	ctx.r7.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// add r31,r5,r8
	r31.u64 = ctx.r5.u64 + ctx.r8.u64;
	// srawi r8,r7,1
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 1;
	// srawi r7,r31,1
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	ctx.r7.s64 = r31.s32 >> 1;
	// stw r5,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r5.u32);
	// add r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 + ctx.r6.u64;
	// add r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r7,40(r11)
	PPC_STORE_U32(r11.u32 + 40, ctx.r7.u32);
	// stw r4,88(r11)
	PPC_STORE_U32(r11.u32 + 88, ctx.r4.u32);
	// srawi r7,r5,1
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 1;
	// srawi r6,r6,1
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 1;
	// stw r7,48(r11)
	PPC_STORE_U32(r11.u32 + 48, ctx.r7.u32);
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// stw r6,80(r11)
	PPC_STORE_U32(r11.u32 + 80, ctx.r6.u32);
	// srawi r8,r8,1
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 1;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r8,72(r11)
	PPC_STORE_U32(r11.u32 + 72, ctx.r8.u32);
	// srawi r8,r7,1
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 1;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r8,64(r11)
	PPC_STORE_U32(r11.u32 + 64, ctx.r8.u32);
	// stw r8,56(r11)
	PPC_STORE_U32(r11.u32 + 56, ctx.r8.u32);
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// bgt 0x83127584
	if (cr0.gt) goto loc_83127584;
	// lwz r8,56(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// lwz r11,32(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// subf. r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x83127604
	if (!cr0.lt) goto loc_83127604;
	// neg r11,r11
	r11.s64 = -r11.s64;
loc_83127604:
	// cmpwi cr6,r11,64
	cr6.compare<int32_t>(r11.s32, 64, xer);
	// bge cr6,0x83127674
	if (!cr6.lt) goto loc_83127674;
	// lwz r7,60(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// lwz r11,36(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// subf. r11,r7,r11
	r11.s64 = r11.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x83127620
	if (!cr0.lt) goto loc_83127620;
	// neg r11,r11
	r11.s64 = -r11.s64;
loc_83127620:
	// cmpwi cr6,r11,64
	cr6.compare<int32_t>(r11.s32, 64, xer);
	// bge cr6,0x83127674
	if (!cr6.lt) goto loc_83127674;
	// lwz r11,24(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// subf. r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x83127644
	if (!cr0.lt) goto loc_83127644;
	// neg r11,r11
	r11.s64 = -r11.s64;
loc_83127644:
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// bge cr6,0x83127674
	if (!cr6.lt) goto loc_83127674;
	// lwz r11,28(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// subf. r11,r7,r11
	r11.s64 = r11.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x83127668
	if (!cr0.lt) goto loc_83127668;
	// neg r11,r11
	r11.s64 = -r11.s64;
loc_83127668:
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// blt cr6,0x83127678
	if (cr6.lt) goto loc_83127678;
loc_83127674:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83127678:
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83127680"))) PPC_WEAK_FUNC(sub_83127680);
PPC_FUNC_IMPL(__imp__sub_83127680) {
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
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// li r5,160
	ctx.r5.s64 = 160;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// li r27,0
	r27.s64 = 0;
	// bl 0x831250c8
	sub_831250C8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r30,0
	r30.s64 = 0;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// ld r11,0(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// li r31,1
	r31.s64 = 1;
	// std r11,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, r11.u64);
loc_831276D0:
	// addi r28,r1,216
	r28.s64 = ctx.r1.s64 + 216;
loc_831276D4:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83127570
	sub_83127570(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8312772c
	if (cr0.eq) goto loc_8312772C;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83125110
	sub_83125110(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x831277d0
	if (cr0.eq) goto loc_831277D0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// addi r4,r29,32
	ctx.r4.s64 = r29.s64 + 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83125238
	sub_83125238(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// b 0x831276d4
	goto loc_831276D4;
loc_8312772C:
	// ld r11,136(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,16
	cr6.compare<int32_t>(r31.s32, 16, xer);
	// std r11,0(r28)
	PPC_STORE_U64(r28.u32 + 0, r11.u64);
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// beq cr6,0x83127780
	if (cr6.eq) goto loc_83127780;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x83127788
	if (cr6.eq) goto loc_83127788;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83125110
	sub_83125110(ctx, base);
	// addi r29,r3,-32
	r29.s64 = ctx.r3.s64 + -32;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// bl 0x83125238
	sub_83125238(ctx, base);
	// b 0x831276d4
	goto loc_831276D4;
loc_83127780:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x8312778c
	if (!cr6.eq) goto loc_8312778C;
loc_83127788:
	// mr r27,r24
	r27.u64 = r24.u64;
loc_8312778C:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mtctr r26
	ctr.u64 = r26.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// blt 0x831277d4
	if (cr0.lt) goto loc_831277D4;
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r1,208
	r11.s64 = ctx.r1.s64 + 208;
	// li r31,1
	r31.s64 = 1;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ld r11,-8(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + -8);
	// std r11,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, r11.u64);
	// bne cr6,0x831276d0
	if (!cr6.eq) goto loc_831276D0;
	// b 0x831277d4
	goto loc_831277D4;
loc_831277D0:
	// li r29,-8
	r29.s64 = -8;
loc_831277D4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831250e8
	sub_831250E8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_831277E8"))) PPC_WEAK_FUNC(sub_831277E8);
PPC_FUNC_IMPL(__imp__sub_831277E8) {
	PPC_FUNC_PROLOGUE();
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x831273b0
	sub_831273B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831277F8"))) PPC_WEAK_FUNC(sub_831277F8);
PPC_FUNC_IMPL(__imp__sub_831277F8) {
	PPC_FUNC_PROLOGUE();
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// b 0x831273b0
	sub_831273B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83127808"))) PPC_WEAK_FUNC(sub_83127808);
PPC_FUNC_IMPL(__imp__sub_83127808) {
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
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// lwz r25,4(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r26,12(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// li r31,0
	r31.s64 = 0;
	// lwz r24,16(r11)
	r24.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// bgt cr6,0x83127850
	if (cr6.gt) goto loc_83127850;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// b 0x83127a18
	goto loc_83127A18;
loc_83127850:
	// lbz r11,21(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83127864
	if (cr0.eq) goto loc_83127864;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r27,r11,-9704
	r27.s64 = r11.s64 + -9704;
loc_83127864:
	// addic. r20,r25,-1
	xer.ca = r25.u32 > 0;
	r20.s64 = r25.s64 + -1;
	cr0.compare<int32_t>(r20.s32, 0, xer);
	// ble 0x83127a18
	if (!cr0.gt) goto loc_83127A18;
loc_8312786C:
	// rlwinm r11,r31,3,0,28
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r4,r11,r26
	ctx.r4.u64 = r11.u64 + r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// li r28,0
	r28.s64 = 0;
	// bl 0x83127a70
	sub_83127A70(ctx, base);
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
loc_83127894:
	// lbzx r11,r31,r24
	r11.u64 = PPC_LOAD_U8(r31.u32 + r24.u32);
	// clrlwi r11,r11,29
	r11.u64 = r11.u32 & 0x7;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x83127954
	if (!cr6.eq) goto loc_83127954;
	// li r30,0
	r30.s64 = 0;
loc_831278A8:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r25
	cr6.compare<int32_t>(r31.s32, r25.s32, xer);
	// beq cr6,0x831278c4
	if (cr6.eq) goto loc_831278C4;
	// lbzx r11,r31,r24
	r11.u64 = PPC_LOAD_U8(r31.u32 + r24.u32);
	// li r29,0
	r29.s64 = 0;
	// clrlwi. r11,r11,29
	r11.u64 = r11.u32 & 0x7;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x831278c8
	if (!cr0.eq) goto loc_831278C8;
loc_831278C4:
	// li r29,1
	r29.s64 = 1;
loc_831278C8:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,15
	cr6.compare<int32_t>(r30.s32, 15, xer);
	// beq cr6,0x831278ec
	if (cr6.eq) goto loc_831278EC;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bne cr6,0x831278ec
	if (!cr6.eq) goto loc_831278EC;
	// lbzx r11,r31,r24
	r11.u64 = PPC_LOAD_U8(r31.u32 + r24.u32);
	// clrlwi r11,r11,29
	r11.u64 = r11.u32 & 0x7;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x831278a8
	if (cr6.eq) goto loc_831278A8;
loc_831278EC:
	// subf r11,r30,r31
	r11.s64 = r31.s64 - r30.s64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// add r4,r11,r26
	ctx.r4.u64 = r11.u64 + r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x83127a70
	sub_83127A70(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x8312792c
	if (cr6.eq) goto loc_8312792C;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// bne cr6,0x8312792c
	if (!cr6.eq) goto loc_8312792C;
	// add r11,r31,r24
	r11.u64 = r31.u64 + r24.u64;
	// lbz r11,-1(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8312792c
	if (!cr0.eq) goto loc_8312792C;
	// li r28,1
	r28.s64 = 1;
loc_8312792C:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r30,1
	ctx.r5.s64 = r30.s64 + 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// mtctr r23
	ctr.u64 = r23.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// ldx r11,r11,r10
	r11.u64 = PPC_LOAD_U64(r11.u32 + ctx.r10.u32);
	// b 0x831279c4
	goto loc_831279C4;
loc_83127954:
	// rlwinm r11,r31,3,0,28
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// add r4,r11,r26
	ctx.r4.u64 = r11.u64 + r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x83127a70
	sub_83127A70(ctx, base);
	// addi r31,r31,3
	r31.s64 = r31.s64 + 3;
	// cmpw cr6,r31,r25
	cr6.compare<int32_t>(r31.s32, r25.s32, xer);
	// beq cr6,0x8312798c
	if (cr6.eq) goto loc_8312798C;
	// lbzx r11,r31,r24
	r11.u64 = PPC_LOAD_U8(r31.u32 + r24.u32);
	// clrlwi. r11,r11,29
	r11.u64 = r11.u32 & 0x7;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8312798c
	if (cr0.eq) goto loc_8312798C;
	// li r29,0
	r29.s64 = 0;
	// b 0x831279ac
	goto loc_831279AC;
loc_8312798C:
	// li r29,1
	r29.s64 = 1;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// bne cr6,0x831279ac
	if (!cr6.eq) goto loc_831279AC;
	// add r11,r31,r24
	r11.u64 = r31.u64 + r24.u64;
	// lbz r11,-1(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x831279ac
	if (!cr0.eq) goto loc_831279AC;
	// li r28,1
	r28.s64 = 1;
loc_831279AC:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83127680
	sub_83127680(ctx, base);
	// ld r11,120(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
loc_831279C4:
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83127a18
	if (cr6.lt) goto loc_83127A18;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x83127894
	if (cr6.eq) goto loc_83127894;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// bne cr6,0x831279f0
	if (!cr6.eq) goto loc_831279F0;
	// add r11,r31,r24
	r11.u64 = r31.u64 + r24.u64;
	// lbz r11,-1(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83127a10
	if (cr0.eq) goto loc_83127A10;
loc_831279F0:
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, r11.u64);
	// mtctr r23
	ctr.u64 = r23.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83127A10:
	// cmpw cr6,r31,r20
	cr6.compare<int32_t>(r31.s32, r20.s32, xer);
	// blt cr6,0x8312786c
	if (cr6.lt) goto loc_8312786C;
loc_83127A18:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831b0b58
	return;
}

__attribute__((alias("__imp__sub_83127A20"))) PPC_WEAK_FUNC(sub_83127A20);
PPC_FUNC_IMPL(__imp__sub_83127A20) {
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
	// li r6,6
	ctx.r6.s64 = 6;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83125260
	sub_83125260(ctx, base);
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
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

__attribute__((alias("__imp__sub_83127A70"))) PPC_WEAK_FUNC(sub_83127A70);
PPC_FUNC_IMPL(__imp__sub_83127A70) {
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83127aa8
	if (!cr6.eq) goto loc_83127AA8;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x83127bc4
	if (cr6.eq) goto loc_83127BC4;
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// b 0x83127bc4
	goto loc_83127BC4;
loc_83127AA8:
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bgt cr6,0x83127af4
	if (cr6.gt) goto loc_83127AF4;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// srawi r9,r10,12
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 12;
	// srawi r8,r11,12
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFF) != 0);
	ctx.r8.s64 = r11.s32 >> 12;
	// addic. r11,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	r11.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x83127bc4
	if (cr0.lt) goto loc_83127BC4;
loc_83127AC8:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bge 0x83127ac8
	if (!cr0.lt) goto loc_83127AC8;
	// b 0x83127bc4
	goto loc_83127BC4;
loc_83127AF4:
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addic. r10,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r10.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge cr6,0x83127b58
	if (!cr6.lt) goto loc_83127B58;
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r7,r7,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// blt 0x83127bc4
	if (cr0.lt) goto loc_83127BC4;
loc_83127B14:
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mullw r9,r6,r9
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r9,r9,16
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 16;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mullw r9,r9,r6
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// srawi r9,r9,16
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 16;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bge 0x83127b14
	if (!cr0.lt) goto loc_83127B14;
	// b 0x83127bc4
	goto loc_83127BC4;
loc_83127B58:
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// rlwinm r7,r9,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r6,r8,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// blt 0x83127bc4
	if (cr0.lt) goto loc_83127BC4;
loc_83127B68:
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r31,8(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mullw r8,r31,r8
	ctx.r8.s64 = int64_t(r31.s32) * int64_t(ctx.r8.s32);
	// mullw r9,r9,r5
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// srawi r9,r9,16
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 16;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// lwz r31,12(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mullw r8,r31,r8
	ctx.r8.s64 = int64_t(r31.s32) * int64_t(ctx.r8.s32);
	// mullw r9,r9,r5
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// srawi r9,r9,16
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 16;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bge 0x83127b68
	if (!cr0.lt) goto loc_83127B68;
loc_83127BC4:
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

__attribute__((alias("__imp__sub_83127BD8"))) PPC_WEAK_FUNC(sub_83127BD8);
PPC_FUNC_IMPL(__imp__sub_83127BD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// lfs f13,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83127C10"))) PPC_WEAK_FUNC(sub_83127C10);
PPC_FUNC_IMPL(__imp__sub_83127C10) {
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
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// ble cr6,0x83127cac
	if (!cr6.gt) goto loc_83127CAC;
	// lwz r29,16(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x83127c48
	if (cr6.eq) goto loc_83127C48;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// b 0x83127c98
	goto loc_83127C98;
loc_83127C48:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x83127c60
	if (!cr0.eq) goto loc_83127C60;
loc_83127C58:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83127cc4
	goto loc_83127CC4;
loc_83127C60:
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// b 0x83127c78
	goto loc_83127C78;
loc_83127C68:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// beq cr6,0x83127ccc
	if (cr6.eq) goto loc_83127CCC;
	// srawi r30,r30,1
	xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	r30.s64 = r30.s32 >> 1;
loc_83127C78:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// stw r3,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83127c68
	if (cr0.eq) goto loc_83127C68;
	// rlwinm r11,r30,1,0,30
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r30,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r30.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_83127C98:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r29.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_83127CAC:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r11,r28,r11
	r11.s64 = r11.s64 - r28.s64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
loc_83127CC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_83127CCC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// b 0x83127c58
	goto loc_83127C58;
}

__attribute__((alias("__imp__sub_83127CD8"))) PPC_WEAK_FUNC(sub_83127CD8);
PPC_FUNC_IMPL(__imp__sub_83127CD8) {
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,-6108(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83127d18
	if (cr6.eq) goto loc_83127D18;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// li r11,0
	r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-6108(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6108, r11.u32);
	// stw r31,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r31.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// b 0x83127e48
	goto loc_83127E48;
loc_83127D18:
	// li r3,204
	ctx.r3.s64 = 204;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// mr. r11,r3
	r11.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bne 0x83127d34
	if (!cr0.eq) goto loc_83127D34;
	// li r3,-8
	ctx.r3.s64 = -8;
	// b 0x83127e48
	goto loc_83127E48;
loc_83127D34:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// li r6,128
	ctx.r6.s64 = 128;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// stw r10,164(r11)
	PPC_STORE_U32(r11.u32 + 164, ctx.r10.u32);
	// li r7,224
	ctx.r7.s64 = 224;
	// stw r6,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r6.u32);
	// stw r6,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r6.u32);
	// addi r9,r9,-9676
	ctx.r9.s64 = ctx.r9.s64 + -9676;
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// lis r5,-32767
	ctx.r5.s64 = -2147418112;
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
	// addi r6,r9,8
	ctx.r6.s64 = ctx.r9.s64 + 8;
	// stw r10,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r10.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r7,168(r11)
	PPC_STORE_U32(r11.u32 + 168, ctx.r7.u32);
	// addi r4,r9,4
	ctx.r4.s64 = ctx.r9.s64 + 4;
	// stw r7,172(r11)
	PPC_STORE_U32(r11.u32 + 172, ctx.r7.u32);
	// addi r7,r11,76
	ctx.r7.s64 = r11.s64 + 76;
	// stw r10,176(r11)
	PPC_STORE_U32(r11.u32 + 176, ctx.r10.u32);
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// stw r10,180(r11)
	PPC_STORE_U32(r11.u32 + 180, ctx.r10.u32);
	// addi r31,r6,4
	r31.s64 = ctx.r6.s64 + 4;
	// stw r10,184(r11)
	PPC_STORE_U32(r11.u32 + 184, ctx.r10.u32);
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// stw r7,48(r11)
	PPC_STORE_U32(r11.u32 + 48, ctx.r7.u32);
	// addi r7,r11,48
	ctx.r7.s64 = r11.s64 + 48;
	// sth r10,4(r11)
	PPC_STORE_U16(r11.u32 + 4, ctx.r10.u16);
	// addi r6,r9,8
	ctx.r6.s64 = ctx.r9.s64 + 8;
	// sth r10,6(r11)
	PPC_STORE_U16(r11.u32 + 6, ctx.r10.u16);
	// addi r30,r9,8
	r30.s64 = ctx.r9.s64 + 8;
	// sth r10,8(r11)
	PPC_STORE_U16(r11.u32 + 8, ctx.r10.u16);
	// addi r29,r9,8
	r29.s64 = ctx.r9.s64 + 8;
	// sth r10,10(r11)
	PPC_STORE_U16(r11.u32 + 10, ctx.r10.u16);
	// ori r28,r3,32768
	r28.u64 = ctx.r3.u64 | 32768;
	// stw r10,188(r11)
	PPC_STORE_U32(r11.u32 + 188, ctx.r10.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// stw r10,192(r11)
	PPC_STORE_U32(r11.u32 + 192, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,196(r11)
	PPC_STORE_U32(r11.u32 + 196, ctx.r10.u32);
	// stw r10,200(r11)
	PPC_STORE_U32(r11.u32 + 200, ctx.r10.u32);
	// stw r10,52(r11)
	PPC_STORE_U32(r11.u32 + 52, ctx.r10.u32);
	// stw r9,60(r11)
	PPC_STORE_U32(r11.u32 + 60, ctx.r9.u32);
	// addi r9,r11,132
	ctx.r9.s64 = r11.s64 + 132;
	// sth r8,56(r11)
	PPC_STORE_U16(r11.u32 + 56, ctx.r8.u16);
	// stw r4,64(r11)
	PPC_STORE_U32(r11.u32 + 64, ctx.r4.u32);
	// sth r8,58(r11)
	PPC_STORE_U16(r11.u32 + 58, ctx.r8.u16);
	// stw r5,68(r11)
	PPC_STORE_U32(r11.u32 + 68, ctx.r5.u32);
	// stw r10,72(r11)
	PPC_STORE_U32(r11.u32 + 72, ctx.r10.u32);
	// stw r7,80(r11)
	PPC_STORE_U32(r11.u32 + 80, ctx.r7.u32);
	// addi r7,r11,104
	ctx.r7.s64 = r11.s64 + 104;
	// stw r10,76(r11)
	PPC_STORE_U32(r11.u32 + 76, ctx.r10.u32);
	// sth r8,84(r11)
	PPC_STORE_U16(r11.u32 + 84, ctx.r8.u16);
	// stw r30,88(r11)
	PPC_STORE_U32(r11.u32 + 88, r30.u32);
	// stw r31,92(r11)
	PPC_STORE_U32(r11.u32 + 92, r31.u32);
	// sth r8,86(r11)
	PPC_STORE_U16(r11.u32 + 86, ctx.r8.u16);
	// stw r28,96(r11)
	PPC_STORE_U32(r11.u32 + 96, r28.u32);
	// stw r10,100(r11)
	PPC_STORE_U32(r11.u32 + 100, ctx.r10.u32);
	// stw r9,104(r11)
	PPC_STORE_U32(r11.u32 + 104, ctx.r9.u32);
	// stw r10,108(r11)
	PPC_STORE_U32(r11.u32 + 108, ctx.r10.u32);
	// stw r7,136(r11)
	PPC_STORE_U32(r11.u32 + 136, ctx.r7.u32);
	// stw r29,116(r11)
	PPC_STORE_U32(r11.u32 + 116, r29.u32);
	// stw r10,132(r11)
	PPC_STORE_U32(r11.u32 + 132, ctx.r10.u32);
	// stw r6,144(r11)
	PPC_STORE_U32(r11.u32 + 144, ctx.r6.u32);
	// stw r9,160(r11)
	PPC_STORE_U32(r11.u32 + 160, ctx.r9.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r10.u32);
	// stw r10,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r10.u32);
	// stw r10,40(r11)
	PPC_STORE_U32(r11.u32 + 40, ctx.r10.u32);
	// sth r8,44(r11)
	PPC_STORE_U16(r11.u32 + 44, ctx.r8.u16);
loc_83127E48:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83127E50"))) PPC_WEAK_FUNC(sub_83127E50);
PPC_FUNC_IMPL(__imp__sub_83127E50) {
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
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x83127f58
	if (cr6.eq) goto loc_83127F58;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r10,-6108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -6108);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83127e80
	if (!cr6.eq) goto loc_83127E80;
	// stw r29,-6108(r11)
	PPC_STORE_U32(r11.u32 + -6108, r29.u32);
	// b 0x83127f58
	goto loc_83127F58;
loc_83127E80:
	// lwz r31,24(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83127eac
	if (cr6.eq) goto loc_83127EAC;
loc_83127E8C:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x83127e8c
	if (!cr6.eq) goto loc_83127E8C;
loc_83127EAC:
	// lwz r31,28(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83127ed8
	if (cr6.eq) goto loc_83127ED8;
loc_83127EB8:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x83127eb8
	if (!cr6.eq) goto loc_83127EB8;
loc_83127ED8:
	// lwz r31,180(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 180);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83127f04
	if (cr6.eq) goto loc_83127F04;
loc_83127EE4:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x83127ee4
	if (!cr6.eq) goto loc_83127EE4;
loc_83127F04:
	// lwz r31,184(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 184);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83127f30
	if (cr6.eq) goto loc_83127F30;
loc_83127F10:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x83127f10
	if (!cr6.eq) goto loc_83127F10;
loc_83127F30:
	// lwz r3,188(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 188);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83127f40
	if (cr6.eq) goto loc_83127F40;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_83127F40:
	// lwz r3,196(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 196);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83127f50
	if (cr6.eq) goto loc_83127F50;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_83127F50:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_83127F58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83127F60"))) PPC_WEAK_FUNC(sub_83127F60);
PPC_FUNC_IMPL(__imp__sub_83127F60) {
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
	// lis r31,-31942
	r31.s64 = -2093350912;
	// lwz r3,-6108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -6108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83127f94
	if (cr6.eq) goto loc_83127F94;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,-6108(r31)
	PPC_STORE_U32(r31.u32 + -6108, r11.u32);
	// bl 0x83127e50
	sub_83127E50(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,-6108(r31)
	PPC_STORE_U32(r31.u32 + -6108, r11.u32);
loc_83127F94:
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

__attribute__((alias("__imp__sub_83127FA8"))) PPC_WEAK_FUNC(sub_83127FA8);
PPC_FUNC_IMPL(__imp__sub_83127FA8) {
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
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,-32768
	cr6.compare<int32_t>(ctx.r10.s32, -32768, xer);
	// blt cr6,0x8312807c
	if (cr6.lt) goto loc_8312807C;
	// cmpwi cr6,r10,32767
	cr6.compare<int32_t>(ctx.r10.s32, 32767, xer);
	// bgt cr6,0x8312807c
	if (cr6.gt) goto loc_8312807C;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,-32768
	cr6.compare<int32_t>(r11.s32, -32768, xer);
	// blt cr6,0x8312807c
	if (cr6.lt) goto loc_8312807C;
	// cmpwi cr6,r11,32767
	cr6.compare<int32_t>(r11.s32, 32767, xer);
	// bgt cr6,0x8312807c
	if (cr6.gt) goto loc_8312807C;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r11,-32768
	cr6.compare<int32_t>(r11.s32, -32768, xer);
	// blt cr6,0x8312807c
	if (cr6.lt) goto loc_8312807C;
	// cmpwi cr6,r11,32767
	cr6.compare<int32_t>(r11.s32, 32767, xer);
	// bgt cr6,0x8312807c
	if (cr6.gt) goto loc_8312807C;
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpwi cr6,r11,-32768
	cr6.compare<int32_t>(r11.s32, -32768, xer);
	// blt cr6,0x8312807c
	if (cr6.lt) goto loc_8312807C;
	// cmpwi cr6,r11,32767
	cr6.compare<int32_t>(r11.s32, 32767, xer);
	// bgt cr6,0x8312807c
	if (cr6.gt) goto loc_8312807C;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// lwz r10,200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 200);
	// sth r11,4(r31)
	PPC_STORE_U16(r31.u32 + 4, r11.u16);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// sth r11,6(r31)
	PPC_STORE_U16(r31.u32 + 6, r11.u16);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// sth r11,8(r31)
	PPC_STORE_U16(r31.u32 + 8, r11.u16);
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// sth r11,10(r31)
	PPC_STORE_U16(r31.u32 + 10, r11.u16);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(r30.s32, ctx.r10.s32, xer);
	// ble cr6,0x83128074
	if (!cr6.gt) goto loc_83128074;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// bl 0x830e6210
	sub_830E6210(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8312806c
	if (!cr0.eq) goto loc_8312806C;
	// li r3,-8
	ctx.r3.s64 = -8;
	// b 0x83128084
	goto loc_83128084;
loc_8312806C:
	// stw r30,200(r31)
	PPC_STORE_U32(r31.u32 + 200, r30.u32);
	// stw r3,196(r31)
	PPC_STORE_U32(r31.u32 + 196, ctx.r3.u32);
loc_83128074:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83128084
	goto loc_83128084;
loc_8312807C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
loc_83128084:
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

__attribute__((alias("__imp__sub_831280A0"))) PPC_WEAK_FUNC(sub_831280A0);
PPC_FUNC_IMPL(__imp__sub_831280A0) {
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
	// lwz r30,40(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r29,32(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// beq cr6,0x831281d8
	if (cr6.eq) goto loc_831281D8;
	// lhz r11,44(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 44);
	// cmplwi cr6,r11,32768
	cr6.compare<uint32_t>(r11.u32, 32768, xer);
	// blt cr6,0x83128104
	if (cr6.lt) goto loc_83128104;
	// addi r11,r29,-4
	r11.s64 = r29.s64 + -4;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x83128104
	if (!cr6.lt) goto loc_83128104;
loc_831280DC:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// sth r9,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r9.u16);
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x831280dc
	if (cr6.lt) goto loc_831280DC;
loc_83128104:
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83128138
	if (!cr6.eq) goto loc_83128138;
	// li r4,28
	ctx.r4.s64 = 28;
	// addi r3,r31,168
	ctx.r3.s64 = r31.s64 + 168;
	// bl 0x83127c10
	sub_83127C10(ctx, base);
	// stw r3,164(r31)
	PPC_STORE_U32(r31.u32 + 164, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83128134
	if (!cr0.eq) goto loc_83128134;
	// li r3,-8
	ctx.r3.s64 = -8;
	// b 0x831281dc
	goto loc_831281DC;
loc_83128134:
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r28.u32);
loc_83128138:
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// addi r10,r29,-4
	ctx.r10.s64 = r29.s64 + -4;
	// lhz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 44);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r7,164(r31)
	PPC_STORE_U32(r31.u32 + 164, ctx.r7.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// sth r9,8(r11)
	PPC_STORE_U16(r11.u32 + 8, ctx.r9.u16);
	// stw r30,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r30.u32);
	// sth r8,10(r11)
	PPC_STORE_U16(r11.u32 + 10, ctx.r8.u16);
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// rotlwi r10,r10,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// stw r28,24(r11)
	PPC_STORE_U32(r11.u32 + 24, r28.u32);
	// addi r10,r10,-32768
	ctx.r10.s64 = ctx.r10.s64 + -32768;
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// lwz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// lha r9,2(r30)
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 2));
	// b 0x83128188
	goto loc_83128188;
loc_83128184:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_83128188:
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lha r8,2(r8)
	ctx.r8.s64 = int16_t(PPC_LOAD_U16(ctx.r8.u32 + 2));
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// blt cr6,0x83128184
	if (cr6.lt) goto loc_83128184;
	// b 0x831281a0
	goto loc_831281A0;
loc_8312819C:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_831281A0:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lha r8,2(r8)
	ctx.r8.s64 = int16_t(PPC_LOAD_U16(ctx.r8.u32 + 2));
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// bgt cr6,0x8312819c
	if (cr6.gt) goto loc_8312819C;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r11.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// stw r11,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r11.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
loc_831281D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831281DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_831281E8"))) PPC_WEAK_FUNC(sub_831281E8);
PPC_FUNC_IMPL(__imp__sub_831281E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r11,160(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lha r11,2(r11)
	r11.s64 = int16_t(PPC_LOAD_U16(r11.u32 + 2));
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(r11.s32, ctx.r4.s32, xer);
	// bgt cr6,0x8312828c
	if (cr6.gt) goto loc_8312828C;
	// addi r8,r3,48
	ctx.r8.s64 = ctx.r3.s64 + 48;
loc_8312820C:
	// lwz r11,160(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r9,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// ble cr6,0x83128260
	if (!cr6.gt) goto loc_83128260;
	// rotlwi r9,r7,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
loc_8312824C:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,20(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// cmpw cr6,r9,r7
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, xer);
	// bgt cr6,0x8312824c
	if (cr6.gt) goto loc_8312824C;
loc_83128260:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r11.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lwz r11,160(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lha r11,2(r11)
	r11.s64 = int16_t(PPC_LOAD_U16(r11.u32 + 2));
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(r11.s32, ctx.r4.s32, xer);
	// ble cr6,0x8312820c
	if (!cr6.gt) goto loc_8312820C;
loc_8312828C:
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r5,r3,76
	ctx.r5.s64 = ctx.r3.s64 + 76;
	// b 0x831283c8
	goto loc_831283C8;
loc_83128298:
	// lhz r10,10(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 10);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// extsh. r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// sth r10,10(r11)
	PPC_STORE_U16(r11.u32 + 10, ctx.r10.u16);
	// beq 0x831282c0
	if (cr0.eq) goto loc_831282C0;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// b 0x8312837c
	goto loc_8312837C;
loc_831282C0:
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x831282f8
	if (!cr6.eq) goto loc_831282F8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// lwz r9,164(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// stw r11,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, r11.u32);
	// b 0x831283c4
	goto loc_831283C4;
loc_831282F8:
	// lha r9,0(r10)
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + 0));
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// rlwinm r31,r9,16,0,15
	r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// lha r8,4(r10)
	ctx.r8.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + 4));
	// addis r31,r31,1
	r31.s64 = r31.s64 + 65536;
	// lha r7,2(r10)
	ctx.r7.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + 2));
	// lha r30,6(r10)
	r30.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + 6));
	// addi r31,r31,-32768
	r31.s64 = r31.s64 + -32768;
	// subf. r10,r9,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r9.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r31,20(r11)
	PPC_STORE_U32(r11.u32 + 20, r31.u32);
	// subf r9,r7,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r7.s64;
	// subf r8,r7,r30
	ctx.r8.s64 = r30.s64 - ctx.r7.s64;
	// beq 0x83128348
	if (cr0.eq) goto loc_83128348;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// twllei r8,0
	// rotlwi r7,r10,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r10,r10,r8
	ctx.r10.s32 = ctx.r10.s32 / ctx.r8.s32;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// andc r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 & ~ctx.r7.u64;
	// twlgei r7,-1
loc_83128348:
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// sth r8,10(r11)
	PPC_STORE_U16(r11.u32 + 10, ctx.r8.u16);
	// beq cr6,0x83128378
	if (cr6.eq) goto loc_83128378;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// subf r9,r9,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r9.s64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// sth r9,10(r11)
	PPC_STORE_U16(r11.u32 + 10, ctx.r9.u16);
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
loc_83128378:
	// stw r6,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r6.u32);
loc_8312837C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x831283b0
	goto loc_831283B0;
loc_83128384:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r11.u32);
loc_831283B0:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// blt cr6,0x83128384
	if (cr6.lt) goto loc_83128384;
loc_831283C4:
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_831283C8:
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// bne cr6,0x83128298
	if (!cr6.eq) goto loc_83128298;
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831283E0"))) PPC_WEAK_FUNC(sub_831283E0);
PPC_FUNC_IMPL(__imp__sub_831283E0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// li r21,0
	r21.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// bgt cr6,0x83128414
	if (cr6.gt) goto loc_83128414;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// b 0x831285e4
	goto loc_831285E4;
loc_83128414:
	// lwz r29,32(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// addic. r22,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	r22.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(r22.s32, 0, xer);
	// li r20,1
	r20.s64 = 1;
	// blt 0x831285dc
	if (cr0.lt) goto loc_831285DC;
	// lis r11,-1
	r11.s64 = -65536;
	// ori r24,r11,16384
	r24.u64 = r11.u64 | 16384;
loc_8312842C:
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// mr r25,r26
	r25.u64 = r26.u64;
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// mr r27,r28
	r27.u64 = r28.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// srawi r26,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	r26.s64 = ctx.r10.s32 >> 4;
	// srawi r28,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r28.s64 = r11.s32 >> 4;
	// cmpw cr6,r26,r24
	cr6.compare<int32_t>(r26.s32, r24.s32, xer);
	// bge cr6,0x8312845c
	if (!cr6.lt) goto loc_8312845C;
	// mr r26,r24
	r26.u64 = r24.u64;
	// b 0x83128468
	goto loc_83128468;
loc_8312845C:
	// cmpwi cr6,r26,16384
	cr6.compare<int32_t>(r26.s32, 16384, xer);
	// ble cr6,0x83128468
	if (!cr6.gt) goto loc_83128468;
	// li r26,16384
	r26.s64 = 16384;
loc_83128468:
	// cmpw cr6,r28,r24
	cr6.compare<int32_t>(r28.s32, r24.s32, xer);
	// bge cr6,0x83128478
	if (!cr6.lt) goto loc_83128478;
	// mr r28,r24
	r28.u64 = r24.u64;
	// b 0x83128484
	goto loc_83128484;
loc_83128478:
	// cmpwi cr6,r28,16384
	cr6.compare<int32_t>(r28.s32, 16384, xer);
	// ble cr6,0x83128484
	if (!cr6.gt) goto loc_83128484;
	// li r28,16384
	r28.s64 = 16384;
loc_83128484:
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(r20.s32, 0, xer);
	// beq cr6,0x83128494
	if (cr6.eq) goto loc_83128494;
	// li r20,0
	r20.s64 = 0;
	// b 0x831285c8
	goto loc_831285C8;
loc_83128494:
	// cmpw cr6,r27,r28
	cr6.compare<int32_t>(r27.s32, r28.s32, xer);
	// beq cr6,0x831285c8
	if (cr6.eq) goto loc_831285C8;
	// lha r11,6(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 6));
	// bge cr6,0x831284bc
	if (!cr6.lt) goto loc_831284BC;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// ble cr6,0x831285c8
	if (!cr6.gt) goto loc_831285C8;
	// lha r11,10(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 10));
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x831284d0
	if (cr6.lt) goto loc_831284D0;
	// b 0x831285c8
	goto loc_831285C8;
loc_831284BC:
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// ble cr6,0x831285c8
	if (!cr6.gt) goto loc_831285C8;
	// lha r11,10(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 10));
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// bge cr6,0x831285c8
	if (!cr6.lt) goto loc_831285C8;
loc_831284D0:
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpw cr6,r25,r26
	cr6.compare<int32_t>(r25.s32, r26.s32, xer);
	// bgt cr6,0x831284e4
	if (cr6.gt) goto loc_831284E4;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// b 0x831284e8
	goto loc_831284E8;
loc_831284E4:
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(r26.s32, r11.s32, xer);
loc_831284E8:
	// bge cr6,0x831285c8
	if (!cr6.lt) goto loc_831285C8;
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// subfc r11,r11,r29
	xer.ca = r29.u32 >= r11.u32;
	r11.s64 = r29.s64 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addic. r31,r11,1
	xer.ca = r11.u32 > 4294967294;
	r31.s64 = r11.s64 + 1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x83128550
	if (!cr0.eq) goto loc_83128550;
	// lha r11,44(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 44));
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x83128514
	if (!cr0.gt) goto loc_83128514;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83128514:
	// cmpw cr6,r27,r28
	cr6.compare<int32_t>(r27.s32, r28.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// ble cr6,0x83128524
	if (!cr6.gt) goto loc_83128524;
	// li r11,0
	r11.s64 = 0;
loc_83128524:
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// beq cr6,0x83128550
	if (cr6.eq) goto loc_83128550;
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// beq cr6,0x83128550
	if (cr6.eq) goto loc_83128550;
	// lha r11,-4(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + -4));
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// bne cr6,0x83128550
	if (!cr6.eq) goto loc_83128550;
	// lha r11,-2(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + -2));
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// beq cr6,0x831285bc
	if (cr6.eq) goto loc_831285BC;
loc_83128550:
	// stw r29,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831280a0
	sub_831280A0(ctx, base);
	// mr. r21,r3
	r21.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r21.s32, 0, xer);
	// blt 0x831285dc
	if (cr0.lt) goto loc_831285DC;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// beq cr6,0x8312859c
	if (cr6.eq) goto loc_8312859C;
	// addi r31,r30,12
	r31.s64 = r30.s64 + 12;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83127c10
	sub_83127C10(ctx, base);
	// stw r3,36(r30)
	PPC_STORE_U32(r30.u32 + 36, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831285d8
	if (cr0.eq) goto loc_831285D8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// bl 0x83127c10
	sub_83127C10(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r29,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r29.u32);
loc_8312859C:
	// cmpw cr6,r27,r28
	cr6.compare<int32_t>(r27.s32, r28.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x831285ac
	if (cr6.lt) goto loc_831285AC;
	// li r11,-1
	r11.s64 = -1;
loc_831285AC:
	// sth r11,44(r30)
	PPC_STORE_U16(r30.u32 + 44, r11.u16);
	// sth r25,0(r29)
	PPC_STORE_U16(r29.u32 + 0, r25.u16);
	// sth r27,2(r29)
	PPC_STORE_U16(r29.u32 + 2, r27.u16);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
loc_831285BC:
	// sth r26,0(r29)
	PPC_STORE_U16(r29.u32 + 0, r26.u16);
	// sth r28,2(r29)
	PPC_STORE_U16(r29.u32 + 2, r28.u16);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
loc_831285C8:
	// addic. r22,r22,-1
	xer.ca = r22.u32 > 0;
	r22.s64 = r22.s64 + -1;
	cr0.compare<int32_t>(r22.s32, 0, xer);
	// addi r23,r23,8
	r23.s64 = r23.s64 + 8;
	// bge 0x8312842c
	if (!cr0.lt) goto loc_8312842C;
	// b 0x831285dc
	goto loc_831285DC;
loc_831285D8:
	// li r21,-8
	r21.s64 = -8;
loc_831285DC:
	// stw r29,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r29.u32);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
loc_831285E4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b58
	return;
}

__attribute__((alias("__imp__sub_831285F0"))) PPC_WEAK_FUNC(sub_831285F0);
PPC_FUNC_IMPL(__imp__sub_831285F0) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b10
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// subfic r9,r4,0
	xer.ca = ctx.r4.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r4.s64;
	// extsh r11,r5
	r11.s64 = ctx.r5.s16;
	// subfe r10,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// lha r29,4(r31)
	r29.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 4));
	// lwz r5,104(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// srawi r7,r29,31
	xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = r29.s32 >> 31;
	// lhz r30,6(r31)
	r30.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// xor r4,r29,r7
	ctx.r4.u64 = r29.u64 ^ ctx.r7.u64;
	// lha r8,8(r31)
	ctx.r8.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 8));
	// stw r5,160(r31)
	PPC_STORE_U32(r31.u32 + 160, ctx.r5.u32);
	// subf r7,r7,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r7.s64;
	// extsh r27,r30
	r27.s64 = r30.s16;
	// lha r9,10(r31)
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 10));
	// srawi r5,r7,3
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 3;
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r26,r29,r8
	r26.s64 = ctx.r8.s64 - r29.s64;
	// addze r5,r5
	temp.s64 = ctx.r5.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r5.s64 = temp.s64;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r26.u32);
	// rlwinm r5,r5,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// subf r7,r5,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r5.s64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// subf r9,r27,r9
	ctx.r9.s64 = ctx.r9.s64 - r27.s64;
	// subf r8,r29,r7
	ctx.r8.s64 = ctx.r7.s64 - r29.s64;
	// rlwinm r11,r10,0,17,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7FFE;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r25,r11,1
	r25.s64 = r11.s64 + 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r22,r3
	r22.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r22.s32, 0, xer);
	// blt 0x83128860
	if (cr0.lt) goto loc_83128860;
	// lha r11,10(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 10));
	// li r23,0
	r23.s64 = 0;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// bge cr6,0x83128790
	if (!cr6.lt) goto loc_83128790;
	// addi r24,r31,76
	r24.s64 = r31.s64 + 76;
loc_831286AC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r30,196(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831281e8
	sub_831281E8(ctx, base);
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
loc_831286C8:
	// lha r11,20(r8)
	r11.s64 = int16_t(PPC_LOAD_U16(ctx.r8.u32 + 20));
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// ble cr6,0x83128720
	if (!cr6.gt) goto loc_83128720;
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(r11.s32, r26.s32, xer);
	// ble cr6,0x831286f0
	if (!cr6.gt) goto loc_831286F0;
	// and r7,r10,r25
	ctx.r7.u64 = ctx.r10.u64 & r25.u64;
	// mr r11,r26
	r11.u64 = r26.u64;
	// extsh. r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x8312873c
	if (cr0.eq) goto loc_8312873C;
loc_831286F0:
	// subf r9,r9,r11
	ctx.r9.s64 = r11.s64 - ctx.r9.s64;
	// and r7,r10,r25
	ctx.r7.u64 = ctx.r10.u64 & r25.u64;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// extsh. r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x83128708
	if (cr0.eq) goto loc_83128708;
	// ori r9,r9,15
	ctx.r9.u64 = ctx.r9.u64 | 15;
loc_83128708:
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// sth r7,0(r30)
	PPC_STORE_U16(r30.u32 + 0, ctx.r7.u16);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(r11.s32, r26.s32, xer);
	// bge cr6,0x8312873c
	if (!cr6.lt) goto loc_8312873C;
loc_83128720:
	// lhz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 8);
	// extsh r11,r10
	r11.s64 = ctx.r10.s16;
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// extsh r10,r11
	ctx.r10.s64 = r11.s16;
	// b 0x831286c8
	goto loc_831286C8;
loc_8312873C:
	// sth r23,0(r30)
	PPC_STORE_U16(r30.u32 + 0, r23.u16);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,196(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r11,r24
	cr6.compare<uint32_t>(r11.u32, r24.u32, xer);
	// bne cr6,0x83128774
	if (!cr6.eq) goto loc_83128774;
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// addi r10,r31,132
	ctx.r10.s64 = r31.s64 + 132;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83128790
	if (cr6.eq) goto loc_83128790;
loc_83128774:
	// addi r11,r27,1
	r11.s64 = r27.s64 + 1;
	// lha r10,10(r31)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 10));
	// extsh r30,r11
	r30.s64 = r11.s16;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// mr r27,r30
	r27.u64 = r30.u64;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x831286ac
	if (cr6.lt) goto loc_831286AC;
loc_83128790:
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r31,76
	r11.s64 = r31.s64 + 76;
	// b 0x831287d0
	goto loc_831287D0;
loc_831287A8:
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r9,164(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r10,164(r31)
	PPC_STORE_U32(r31.u32 + 164, ctx.r10.u32);
loc_831287D0:
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x831287a8
	if (!cr6.eq) goto loc_831287A8;
	// addi r11,r31,132
	r11.s64 = r31.s64 + 132;
	// b 0x8312880c
	goto loc_8312880C;
loc_831287E4:
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r9,164(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r10,164(r31)
	PPC_STORE_U32(r31.u32 + 164, ctx.r10.u32);
loc_8312880C:
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x831287e4
	if (!cr6.eq) goto loc_831287E4;
	// stw r11,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r11.u32);
	// addi r11,r31,12
	r11.s64 = r31.s64 + 12;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// b 0x83128844
	goto loc_83128844;
loc_83128828:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r8,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r8.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
loc_83128844:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83128828
	if (!cr6.eq) goto loc_83128828;
	// li r11,1
	r11.s64 = 1;
	// stw r23,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r23.u32);
	// stw r23,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r23.u32);
	// stw r23,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r23.u32);
	// sth r11,44(r31)
	PPC_STORE_U16(r31.u32 + 44, r11.u16);
loc_83128860:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_83128870"))) PPC_WEAK_FUNC(sub_83128870);
PPC_FUNC_IMPL(__imp__sub_83128870) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x831283e0
	sub_831283E0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x831288a8
	if (cr0.lt) goto loc_831288A8;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x831288a8
	if (cr6.eq) goto loc_831288A8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831280a0
	sub_831280A0(ctx, base);
loc_831288A8:
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

__attribute__((alias("__imp__sub_831288C0"))) PPC_WEAK_FUNC(sub_831288C0);
PPC_FUNC_IMPL(__imp__sub_831288C0) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// bl 0x8312a098
	sub_8312A098(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83127cd8
	sub_83127CD8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x831289fc
	if (cr0.lt) goto loc_831289FC;
	// lha r7,66(r29)
	ctx.r7.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 66));
	// addi r10,r7,8
	ctx.r10.s64 = ctx.r7.s64 + 8;
	// lha r6,0(r31)
	ctx.r6.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 0));
	// lha r11,2(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 2));
	// srawi r5,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 4;
	// lha r8,6(r31)
	ctx.r8.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 6));
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// lha r7,4(r31)
	ctx.r7.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 4));
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + r11.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// extsh r11,r5
	r11.s64 = ctx.r5.s16;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// add. r10,r11,r9
	ctx.r10.u64 = r11.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge 0x83128950
	if (!cr0.lt) goto loc_83128950;
	// neg r10,r11
	ctx.r10.s64 = -r11.s64;
	// b 0x83128964
	goto loc_83128964;
loc_83128950:
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// ble cr6,0x83128968
	if (!cr6.gt) goto loc_83128968;
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - r11.s64;
loc_83128964:
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
loc_83128968:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// add r9,r11,r8
	ctx.r9.u64 = r11.u64 + ctx.r8.u64;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// ble cr6,0x83128984
	if (!cr6.gt) goto loc_83128984;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// b 0x83128990
	goto loc_83128990;
loc_83128984:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bge cr6,0x83128994
	if (!cr6.lt) goto loc_83128994;
	// neg r11,r11
	r11.s64 = -r11.s64;
loc_83128990:
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
loc_83128994:
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83127fa8
	sub_83127FA8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x831289f4
	if (cr0.lt) goto loc_831289F4;
	// lis r11,-31981
	r11.s64 = -2095906816;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r6,r11,-30608
	ctx.r6.s64 = r11.s64 + -30608;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r29,32
	ctx.r4.s64 = r29.s64 + 32;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x83127808
	sub_83127808(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x831289f4
	if (cr0.lt) goto loc_831289F4;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lhz r5,66(r29)
	ctx.r5.u64 = PPC_LOAD_U16(r29.u32 + 66);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// bl 0x831285f0
	sub_831285F0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_831289F4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83127e50
	sub_83127E50(ctx, base);
loc_831289FC:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83128A10"))) PPC_WEAK_FUNC(sub_83128A10);
PPC_FUNC_IMPL(__imp__sub_83128A10) {
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
	// mflr r12
	// bl 0x831b0b14
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r8,36(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r11,100(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// lwz r27,48(r10)
	r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r6,r8,-262
	ctx.r6.s64 = ctx.r8.s64 + -262;
	// lwz r7,112(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// lwz r30,116(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	// add r9,r27,r11
	ctx.r9.u64 = r27.u64 + r11.u64;
	// lwz r26,136(r10)
	r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 136);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// ble cr6,0x83128a54
	if (!cr6.gt) goto loc_83128A54;
	// subf r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
	// addi r25,r11,262
	r25.s64 = r11.s64 + 262;
	// b 0x83128a58
	goto loc_83128A58;
loc_83128A54:
	// li r25,0
	r25.s64 = 0;
loc_83128A58:
	// add r11,r3,r9
	r11.u64 = ctx.r3.u64 + ctx.r9.u64;
	// lwz r29,56(r10)
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r28,44(r10)
	r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// addi r5,r9,258
	ctx.r5.s64 = ctx.r9.s64 + 258;
	// lbzx r6,r3,r9
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// lbz r31,-1(r11)
	r31.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// beq cr6,0x83128c0c
	if (cr6.eq) goto loc_83128C0C;
	// lwz r11,132(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, r11.u32, xer);
	// blt cr6,0x83128a88
	if (cr6.lt) goto loc_83128A88;
	// rlwinm r30,r30,30,2,31
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 30) & 0x3FFFFFFF;
loc_83128A88:
	// lwz r7,108(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// cmplw cr6,r26,r7
	cr6.compare<uint32_t>(r26.u32, ctx.r7.u32, xer);
	// ble cr6,0x83128a98
	if (!cr6.gt) goto loc_83128A98;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
loc_83128A98:
	// add r11,r27,r4
	r11.u64 = r27.u64 + ctx.r4.u64;
	// clrlwi r24,r6,24
	r24.u64 = ctx.r6.u32 & 0xFF;
	// add r8,r11,r3
	ctx.r8.u64 = r11.u64 + ctx.r3.u64;
	// lbzx r23,r11,r3
	r23.u64 = PPC_LOAD_U8(r11.u32 + ctx.r3.u32);
	// cmplw cr6,r23,r24
	cr6.compare<uint32_t>(r23.u32, r24.u32, xer);
	// bne cr6,0x83128be4
	if (!cr6.eq) goto loc_83128BE4;
	// lbz r8,-1(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + -1);
	// clrlwi r24,r31,24
	r24.u64 = r31.u32 & 0xFF;
	// cmplw cr6,r8,r24
	cr6.compare<uint32_t>(ctx.r8.u32, r24.u32, xer);
	// bne cr6,0x83128be4
	if (!cr6.eq) goto loc_83128BE4;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r24,0(r9)
	r24.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r24
	cr6.compare<uint32_t>(ctx.r8.u32, r24.u32, xer);
	// bne cr6,0x83128be4
	if (!cr6.eq) goto loc_83128BE4;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// lbz r24,1(r9)
	r24.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// lbz r11,1(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// cmplw cr6,r11,r24
	cr6.compare<uint32_t>(r11.u32, r24.u32, xer);
	// bne cr6,0x83128be4
	if (!cr6.eq) goto loc_83128BE4;
	// addi r11,r9,2
	r11.s64 = ctx.r9.s64 + 2;
	// addi r9,r8,1
	ctx.r9.s64 = ctx.r8.s64 + 1;
loc_83128AEC:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r24,0(r9)
	r24.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r24
	cr6.compare<uint32_t>(ctx.r8.u32, r24.u32, xer);
	// bne cr6,0x83128bb4
	if (!cr6.eq) goto loc_83128BB4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r24,0(r9)
	r24.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r24
	cr6.compare<uint32_t>(ctx.r8.u32, r24.u32, xer);
	// bne cr6,0x83128bb4
	if (!cr6.eq) goto loc_83128BB4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r24,0(r9)
	r24.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r24
	cr6.compare<uint32_t>(ctx.r8.u32, r24.u32, xer);
	// bne cr6,0x83128bb4
	if (!cr6.eq) goto loc_83128BB4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r24,0(r9)
	r24.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r24
	cr6.compare<uint32_t>(ctx.r8.u32, r24.u32, xer);
	// bne cr6,0x83128bb4
	if (!cr6.eq) goto loc_83128BB4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r24,0(r9)
	r24.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r24
	cr6.compare<uint32_t>(ctx.r8.u32, r24.u32, xer);
	// bne cr6,0x83128bb4
	if (!cr6.eq) goto loc_83128BB4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r24,0(r9)
	r24.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r24
	cr6.compare<uint32_t>(ctx.r8.u32, r24.u32, xer);
	// bne cr6,0x83128bb4
	if (!cr6.eq) goto loc_83128BB4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r24,0(r9)
	r24.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r24
	cr6.compare<uint32_t>(ctx.r8.u32, r24.u32, xer);
	// bne cr6,0x83128bb4
	if (!cr6.eq) goto loc_83128BB4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r24,0(r9)
	r24.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r24
	cr6.compare<uint32_t>(ctx.r8.u32, r24.u32, xer);
	// bne cr6,0x83128bb4
	if (!cr6.eq) goto loc_83128BB4;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// blt cr6,0x83128aec
	if (cr6.lt) goto loc_83128AEC;
loc_83128BB4:
	// subf r11,r5,r11
	r11.s64 = r11.s64 - ctx.r5.s64;
	// addi r9,r5,-258
	ctx.r9.s64 = ctx.r5.s64 + -258;
	// addi r11,r11,258
	r11.s64 = r11.s64 + 258;
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// ble cr6,0x83128be4
	if (!cr6.gt) goto loc_83128BE4;
	// stw r4,104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 104, ctx.r4.u32);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(r11.s32, r26.s32, xer);
	// bge cr6,0x83128c00
	if (!cr6.lt) goto loc_83128C00;
	// add r8,r11,r9
	ctx.r8.u64 = r11.u64 + ctx.r9.u64;
	// lbzx r6,r11,r9
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + ctx.r9.u32);
	// lbz r31,-1(r8)
	r31.u64 = PPC_LOAD_U8(ctx.r8.u32 + -1);
loc_83128BE4:
	// and r11,r28,r4
	r11.u64 = r28.u64 & ctx.r4.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U16(r11.u32 + r29.u32);
	// cmplw cr6,r4,r25
	cr6.compare<uint32_t>(ctx.r4.u32, r25.u32, xer);
	// ble cr6,0x83128c00
	if (!cr6.gt) goto loc_83128C00;
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x83128a98
	if (!cr0.eq) goto loc_83128A98;
loc_83128C00:
	// cmplw cr6,r3,r7
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, xer);
	// ble cr6,0x83128c0c
	if (!cr6.gt) goto loc_83128C0C;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
loc_83128C0C:
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_83128C10"))) PPC_WEAK_FUNC(sub_83128C10);
PPC_FUNC_IMPL(__imp__sub_83128C10) {
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
	// lis r30,0
	r30.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// ori r30,r30,65535
	r30.u64 = r30.u64 | 65535;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,-5
	r11.s64 = r11.s64 + -5;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(r11.u32, 65535, xer);
	// bge cr6,0x83128c40
	if (!cr6.lt) goto loc_83128C40;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_83128C40:
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bgt cr6,0x83128c60
	if (cr6.gt) goto loc_83128C60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82cc6640
	sub_82CC6640(ctx, base);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83128d50
	if (cr6.eq) goto loc_83128D50;
loc_83128C60:
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r8.u32);
	// add r9,r11,r30
	ctx.r9.u64 = r11.u64 + r30.u64;
	// stw r10,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83128c90
	if (cr6.eq) goto loc_83128C90;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x83128ce4
	if (cr6.lt) goto loc_83128CE4;
loc_83128C90:
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r9,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r9.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r10,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// blt cr6,0x83128cb0
	if (cr6.lt) goto loc_83128CB0;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// b 0x83128cb4
	goto loc_83128CB4;
loc_83128CB0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_83128CB4:
	// li r6,0
	ctx.r6.s64 = 0;
	// subf r5,r11,r9
	ctx.r5.s64 = ctx.r9.s64 - r11.s64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8312b1a8
	sub_8312B1A8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bl 0x82cc6388
	sub_82CC6388(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83128d44
	if (cr6.eq) goto loc_83128D44;
loc_83128CE4:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// subf r5,r11,r9
	ctx.r5.s64 = ctx.r9.s64 - r11.s64;
	// addi r10,r10,-262
	ctx.r10.s64 = ctx.r10.s64 + -262;
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// blt cr6,0x83128c40
	if (cr6.lt) goto loc_83128C40;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x83128d14
	if (cr6.lt) goto loc_83128D14;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// b 0x83128d18
	goto loc_83128D18;
loc_83128D14:
	// li r4,0
	ctx.r4.s64 = 0;
loc_83128D18:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8312b1a8
	sub_8312B1A8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bl 0x82cc6388
	sub_82CC6388(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83128c40
	if (!cr6.eq) goto loc_83128C40;
loc_83128D44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83128D48:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83128D50:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x83128d44
	if (cr6.eq) goto loc_83128D44;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x83128d70
	if (cr6.lt) goto loc_83128D70;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// b 0x83128d74
	goto loc_83128D74;
loc_83128D70:
	// li r4,0
	ctx.r4.s64 = 0;
loc_83128D74:
	// addi r10,r29,-4
	ctx.r10.s64 = r29.s64 + -4;
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r5,r11,r9
	ctx.r5.s64 = ctx.r9.s64 - r11.s64;
	// rlwinm r6,r10,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x8312b1a8
	sub_8312B1A8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bl 0x82cc6388
	sub_82CC6388(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83128dc0
	if (!cr6.eq) goto loc_83128DC0;
	// addi r11,r29,-4
	r11.s64 = r29.s64 + -4;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,28,30,30
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x2;
	// b 0x83128d48
	goto loc_83128D48;
loc_83128DC0:
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(r29.s32, 4, xer);
	// li r3,3
	ctx.r3.s64 = 3;
	// beq cr6,0x83128d48
	if (cr6.eq) goto loc_83128D48;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83128d48
	goto loc_83128D48;
}

__attribute__((alias("__imp__sub_83128DD8"))) PPC_WEAK_FUNC(sub_83128DD8);
PPC_FUNC_IMPL(__imp__sub_83128DD8) {
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
	// li r29,0
	r29.s64 = 0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r30,r29
	r30.u64 = r29.u64;
	// addi r27,r11,-7896
	r27.s64 = r11.s64 + -7896;
	// addi r28,r10,-7384
	r28.s64 = ctx.r10.s64 + -7384;
loc_83128E04:
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r11,262
	cr6.compare<uint32_t>(r11.u32, 262, xer);
	// bge cr6,0x83128e34
	if (!cr6.lt) goto loc_83128E34;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82cc6640
	sub_82CC6640(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r11,262
	cr6.compare<uint32_t>(r11.u32, 262, xer);
	// bge cr6,0x83128e2c
	if (!cr6.lt) goto loc_83128E2C;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// beq cr6,0x8312915c
	if (cr6.eq) goto loc_8312915C;
loc_83128E2C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83129168
	if (cr6.eq) goto loc_83129168;
loc_83128E34:
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x83128e9c
	if (cr6.lt) goto loc_83128E9C;
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r7,76(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lbz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// and r11,r8,r11
	r11.u64 = ctx.r8.u64 & r11.u64;
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// and r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 & ctx.r7.u64;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r10.u32);
	// lhzx r30,r7,r8
	r30.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r8.u32);
	// sthx r30,r11,r9
	PPC_STORE_U16(r11.u32 + ctx.r9.u32, r30.u16);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r11,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, r11.u16);
loc_83128E9C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x83128ed8
	if (cr6.eq) goto loc_83128ED8;
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - r30.s64;
	// addi r11,r11,-262
	r11.s64 = r11.s64 + -262;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x83128ed8
	if (cr6.gt) goto loc_83128ED8;
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x83128ed8
	if (cr6.eq) goto loc_83128ED8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83128a10
	sub_83128A10(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
loc_83128ED8:
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x83129088
	if (cr6.lt) goto loc_83129088;
	// addi r11,r11,253
	r11.s64 = r11.s64 + 253;
	// lwz r10,5784(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 5784);
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// clrlwi r6,r11,24
	ctx.r6.u64 = r11.u32 & 0xFF;
	// lwz r7,5788(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 5788);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r9,r8
	r11.s64 = ctx.r8.s64 - ctx.r9.s64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// sthx r11,r7,r10
	PPC_STORE_U16(ctx.r7.u32 + ctx.r10.u32, r11.u16);
	// addis r11,r11,1
	r11.s64 = r11.s64 + 65536;
	// lwz r10,5784(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 5784);
	// lwz r9,5776(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 5776);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stbx r6,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r6.u8);
	// lwz r10,5784(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 5784);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,5784(r31)
	PPC_STORE_U32(r31.u32 + 5784, ctx.r10.u32);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(r11.u32, 256, xer);
	// lbzx r11,r6,r28
	r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + r28.u32);
	// addi r11,r11,292
	r11.s64 = r11.s64 + 292;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r10,r11,r31
	PPC_STORE_U16(r11.u32 + r31.u32, ctx.r10.u16);
	// bge cr6,0x83128f5c
	if (!cr6.lt) goto loc_83128F5C;
	// lbzx r11,r9,r27
	r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + r27.u32);
	// b 0x83128f68
	goto loc_83128F68;
loc_83128F5C:
	// rlwinm r11,r9,25,7,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r27,256
	ctx.r10.s64 = r27.s64 + 256;
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
loc_83128F68:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// addi r11,r11,608
	r11.s64 = r11.s64 + 608;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r10,r11,r31
	PPC_STORE_U16(r11.u32 + r31.u32, ctx.r10.u16);
	// lwz r10,5784(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 5784);
	// lwz r9,108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r8,120(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// lwz r11,5780(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 5780);
	// addi r7,r11,-1
	ctx.r7.s64 = r11.s64 + -1;
	// subf r7,r10,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r10.s64;
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - r11.s64;
	// cntlzw r9,r7
	ctx.r9.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// stw r10,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bgt cr6,0x83129040
	if (cr6.gt) goto loc_83129040;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// blt cr6,0x83129040
	if (cr6.lt) goto loc_83129040;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
loc_83128FC4:
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r8,64(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// lwz r7,80(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// slw r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// lwz r7,76(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// lwz r6,44(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r5,60(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// and r11,r6,r11
	r11.u64 = ctx.r6.u64 & r11.u64;
	// lwz r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lbz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// xor r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// and r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 & ctx.r7.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r10.u32);
	// lhzx r30,r8,r5
	r30.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r5.u32);
	// sthx r30,r11,r6
	PPC_STORE_U16(r11.u32 + ctx.r6.u32, r30.u16);
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lwz r8,64(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// sthx r10,r8,r11
	PPC_STORE_U16(ctx.r8.u32 + r11.u32, ctx.r10.u16);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// bne 0x83128fc4
	if (!cr0.eq) goto loc_83128FC4;
	// b 0x831290f8
	goto loc_831290F8;
loc_83129040:
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r7,76(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// slw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// lbz r11,1(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// xor r11,r10,r11
	r11.u64 = ctx.r10.u64 ^ r11.u64;
	// and r11,r11,r7
	r11.u64 = r11.u64 & ctx.r7.u64;
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// b 0x83129104
	goto loc_83129104;
loc_83129088:
	// lwz r11,5784(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 5784);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,5788(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 5788);
	// lbzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// sthx r29,r8,r11
	PPC_STORE_U16(ctx.r8.u32 + r11.u32, r29.u16);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addi r11,r11,35
	r11.s64 = r11.s64 + 35;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,5776(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 5776);
	// lwz r8,5784(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 5784);
	// stbx r10,r9,r8
	PPC_STORE_U8(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u8);
	// lwz r10,5784(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 5784);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,5784(r31)
	PPC_STORE_U32(r31.u32 + 5784, ctx.r10.u32);
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r10,r11,r31
	PPC_STORE_U16(r11.u32 + r31.u32, ctx.r10.u16);
	// lwz r9,5784(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 5784);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r10,5780(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 5780);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// stw r9,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r9.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_831290F8:
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
loc_83129104:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83128e04
	if (cr6.eq) goto loc_83128E04;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x83129124
	if (cr6.lt) goto loc_83129124;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// b 0x83129128
	goto loc_83129128;
loc_83129124:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_83129128:
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - r11.s64;
	// bl 0x8312b1a8
	sub_8312B1A8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bl 0x82cc6388
	sub_82CC6388(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83128e04
	if (!cr6.eq) goto loc_83128E04;
loc_8312915C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83129160:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
loc_83129168:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x83129180
	if (cr6.lt) goto loc_83129180;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// b 0x83129184
	goto loc_83129184;
loc_83129180:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_83129184:
	// addi r10,r26,-4
	ctx.r10.s64 = r26.s64 + -4;
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r5,r11,r9
	ctx.r5.s64 = ctx.r9.s64 - r11.s64;
	// rlwinm r6,r10,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x8312b1a8
	sub_8312B1A8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bl 0x82cc6388
	sub_82CC6388(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831291d0
	if (!cr6.eq) goto loc_831291D0;
	// addi r11,r26,-4
	r11.s64 = r26.s64 + -4;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,28,30,30
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x2;
	// b 0x83129160
	goto loc_83129160;
loc_831291D0:
	// cmpwi cr6,r26,4
	cr6.compare<int32_t>(r26.s32, 4, xer);
	// li r3,3
	ctx.r3.s64 = 3;
	// beq cr6,0x83129160
	if (cr6.eq) goto loc_83129160;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83129160
	goto loc_83129160;
}

__attribute__((alias("__imp__sub_831291E8"))) PPC_WEAK_FUNC(sub_831291E8);
PPC_FUNC_IMPL(__imp__sub_831291E8) {
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
	// li r29,0
	r29.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// li r26,2
	r26.s64 = 2;
	// ori r30,r9,65535
	r30.u64 = ctx.r9.u64 | 65535;
	// addi r25,r11,-7896
	r25.s64 = r11.s64 + -7896;
	// addi r27,r10,-7384
	r27.s64 = ctx.r10.s64 + -7384;
loc_83129220:
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r11,262
	cr6.compare<uint32_t>(r11.u32, 262, xer);
	// bge cr6,0x83129250
	if (!cr6.lt) goto loc_83129250;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82cc6640
	sub_82CC6640(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r11,262
	cr6.compare<uint32_t>(r11.u32, 262, xer);
	// bge cr6,0x83129248
	if (!cr6.lt) goto loc_83129248;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// beq cr6,0x83129600
	if (cr6.eq) goto loc_83129600;
loc_83129248:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83129630
	if (cr6.eq) goto loc_83129630;
loc_83129250:
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x831292b8
	if (cr6.lt) goto loc_831292B8;
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r7,76(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lbz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// and r11,r8,r11
	r11.u64 = ctx.r8.u64 & r11.u64;
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// and r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 & ctx.r7.u64;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r10.u32);
	// lhzx r28,r7,r8
	r28.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r8.u32);
	// sthx r28,r11,r9
	PPC_STORE_U16(r11.u32 + ctx.r9.u32, r28.u16);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r11,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, r11.u16);
loc_831292B8:
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// stw r26,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r26.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// stw r10,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// beq cr6,0x83129350
	if (cr6.eq) goto loc_83129350;
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83129350
	if (!cr6.lt) goto loc_83129350;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// addi r11,r11,-262
	r11.s64 = r11.s64 + -262;
	// subf r10,r28,r10
	ctx.r10.s64 = ctx.r10.s64 - r28.s64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x83129350
	if (cr6.gt) goto loc_83129350;
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x83129318
	if (cr6.eq) goto loc_83129318;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83128a10
	sub_83128A10(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
loc_83129318:
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// bgt cr6,0x83129350
	if (cr6.gt) goto loc_83129350;
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x8312934c
	if (cr6.eq) goto loc_8312934C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bne cr6,0x83129350
	if (!cr6.eq) goto loc_83129350;
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmplwi cr6,r11,4096
	cr6.compare<uint32_t>(r11.u32, 4096, xer);
	// ble cr6,0x83129350
	if (!cr6.gt) goto loc_83129350;
loc_8312934C:
	// stw r26,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r26.u32);
loc_83129350:
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x83129528
	if (cr6.lt) goto loc_83129528;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x83129528
	if (cr6.gt) goto loc_83129528;
	// addi r10,r11,253
	ctx.r10.s64 = r11.s64 + 253;
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// subf r9,r9,r11
	ctx.r9.s64 = r11.s64 - ctx.r9.s64;
	// lwz r8,5784(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 5784);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r6,5788(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 5788);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r8,r11,-3
	ctx.r8.s64 = r11.s64 + -3;
	// add r11,r10,r30
	r11.u64 = ctx.r10.u64 + r30.u64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// sthx r10,r5,r6
	PPC_STORE_U16(ctx.r5.u32 + ctx.r6.u32, ctx.r10.u16);
	// lwz r10,5784(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 5784);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(r11.u32, 256, xer);
	// lwz r11,5776(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 5776);
	// stbx r7,r11,r10
	PPC_STORE_U8(r11.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r10,5784(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 5784);
	// addi r11,r10,1
	r11.s64 = ctx.r10.s64 + 1;
	// stw r11,5784(r31)
	PPC_STORE_U32(r31.u32 + 5784, r11.u32);
	// lbzx r11,r7,r27
	r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + r27.u32);
	// addi r11,r11,292
	r11.s64 = r11.s64 + 292;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r10,r11,r31
	PPC_STORE_U16(r11.u32 + r31.u32, ctx.r10.u16);
	// bge cr6,0x831293ec
	if (!cr6.lt) goto loc_831293EC;
	// lbzx r11,r9,r25
	r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + r25.u32);
	// b 0x831293f8
	goto loc_831293F8;
loc_831293EC:
	// rlwinm r11,r9,25,7,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r25,256
	ctx.r10.s64 = r25.s64 + 256;
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
loc_831293F8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// addi r11,r11,608
	r11.s64 = r11.s64 + 608;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r10,r11,r31
	PPC_STORE_U16(r11.u32 + r31.u32, ctx.r10.u16);
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// lwz r9,108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r7,5784(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 5784);
	// lwz r10,5780(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 5780);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - r11.s64;
	// subf r9,r7,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r7.s64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// stw r10,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
loc_83129444:
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bgt cr6,0x831294b4
	if (cr6.gt) goto loc_831294B4;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r7,64(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r5,76(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// slw r7,r7,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r6.u8 & 0x3F));
	// lwz r6,44(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lbz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// and r11,r6,r11
	r11.u64 = ctx.r6.u64 & r11.u64;
	// lwz r6,60(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// xor r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 ^ ctx.r10.u64;
	// lwz r7,56(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// and r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 & ctx.r5.u64;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r10.u32);
	// lhzx r28,r5,r6
	r28.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r6.u32);
	// sthx r28,r11,r7
	PPC_STORE_U16(r11.u32 + ctx.r7.u32, r28.u16);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lwz r7,64(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r11,r7,r10
	PPC_STORE_U16(ctx.r7.u32 + ctx.r10.u32, r11.u16);
loc_831294B4:
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// bne 0x83129444
	if (!cr0.eq) goto loc_83129444;
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r29,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r29.u32);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r26,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r26.u32);
	// stw r10,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// beq cr6,0x83129220
	if (cr6.eq) goto loc_83129220;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x831294f8
	if (cr6.lt) goto loc_831294F8;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + r11.u64;
	// b 0x831294fc
	goto loc_831294FC;
loc_831294F8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_831294FC:
	// li r6,0
	ctx.r6.s64 = 0;
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - r11.s64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8312b1a8
	sub_8312B1A8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bl 0x82cc6388
	sub_82CC6388(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// b 0x831295f8
	goto loc_831295F8;
loc_83129528:
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8312960c
	if (cr6.eq) goto loc_8312960C;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r9,5784(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 5784);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,5788(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 5788);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r8,-1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// sthx r29,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, r29.u16);
	// lwz r9,5776(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 5776);
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r11,r11,35
	r11.s64 = r11.s64 + 35;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,5784(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 5784);
	// stbx r8,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u8);
	// lwz r10,5784(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 5784);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,5784(r31)
	PPC_STORE_U32(r31.u32 + 5784, ctx.r10.u32);
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r10,r11,r31
	PPC_STORE_U16(r11.u32 + r31.u32, ctx.r10.u16);
	// lwz r10,5784(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 5784);
	// lwz r11,5780(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 5780);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x831295d8
	if (!cr6.eq) goto loc_831295D8;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x831295b0
	if (cr6.lt) goto loc_831295B0;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// b 0x831295b4
	goto loc_831295B4;
loc_831295B0:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_831295B4:
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - r11.s64;
	// bl 0x8312b1a8
	sub_8312B1A8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bl 0x82cc6388
	sub_82CC6388(ctx, base);
loc_831295D8:
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r10,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// lwz r11,16(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
loc_831295F8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83129220
	if (!cr6.eq) goto loc_83129220;
loc_83129600:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83129604:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
loc_8312960C:
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// stw r10,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r9,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r9.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// b 0x83129220
	goto loc_83129220;
loc_83129630:
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83129690
	if (cr6.eq) goto loc_83129690;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r9,5784(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 5784);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,5788(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 5788);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r8,-1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// sthx r29,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, r29.u16);
	// lwz r9,5784(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 5784);
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r11,r11,35
	r11.s64 = r11.s64 + 35;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,5776(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 5776);
	// stbx r8,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u8);
	// lwz r10,5784(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 5784);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,5784(r31)
	PPC_STORE_U32(r31.u32 + 5784, ctx.r10.u32);
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r10,r11,r31
	PPC_STORE_U16(r11.u32 + r31.u32, ctx.r10.u16);
	// stw r29,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r29.u32);
loc_83129690:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x831296a8
	if (cr6.lt) goto loc_831296A8;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// b 0x831296ac
	goto loc_831296AC;
loc_831296A8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_831296AC:
	// addi r10,r24,-4
	ctx.r10.s64 = r24.s64 + -4;
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r5,r11,r9
	ctx.r5.s64 = ctx.r9.s64 - r11.s64;
	// rlwinm r6,r10,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x8312b1a8
	sub_8312B1A8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bl 0x82cc6388
	sub_82CC6388(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831296f8
	if (!cr6.eq) goto loc_831296F8;
	// addi r11,r24,-4
	r11.s64 = r24.s64 + -4;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,28,30,30
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x2;
	// b 0x83129604
	goto loc_83129604;
loc_831296F8:
	// cmpwi cr6,r24,4
	cr6.compare<int32_t>(r24.s32, 4, xer);
	// li r3,3
	ctx.r3.s64 = 3;
	// beq cr6,0x83129604
	if (cr6.eq) goto loc_83129604;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83129604
	goto loc_83129604;
}

__attribute__((alias("__imp__sub_83129710"))) PPC_WEAK_FUNC(sub_83129710);
PPC_FUNC_IMPL(__imp__sub_83129710) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83129770
	if (cr6.eq) goto loc_83129770;
	// lwz r11,28(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83129770
	if (cr6.eq) goto loc_83129770;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r10.u32);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// stw r10,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r10.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// subfic r10,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r11,28(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// bl 0x8312b5b8
	sub_8312B5B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83129774
	goto loc_83129774;
loc_83129770:
	// li r3,-2
	ctx.r3.s64 = -2;
loc_83129774:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129788"))) PPC_WEAK_FUNC(sub_83129788);
PPC_FUNC_IMPL(__imp__sub_83129788) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x831297f4
	if (cr6.eq) goto loc_831297F4;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831297f4
	if (cr6.eq) goto loc_831297F4;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831297f4
	if (cr6.eq) goto loc_831297F4;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831297d0
	if (cr6.eq) goto loc_831297D0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8312c010
	sub_8312C010(ctx, base);
loc_831297D0:
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// b 0x831297f8
	goto loc_831297F8;
loc_831297F4:
	// li r3,-2
	ctx.r3.s64 = -2;
loc_831297F8:
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

__attribute__((alias("__imp__sub_83129810"))) PPC_WEAK_FUNC(sub_83129810);
PPC_FUNC_IMPL(__imp__sub_83129810) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83129964
	if (cr6.eq) goto loc_83129964;
	// lbz r11,0(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,49
	cr6.compare<uint32_t>(r11.u32, 49, xer);
	// bne cr6,0x83129964
	if (!cr6.eq) goto loc_83129964;
	// cmplwi cr6,r6,56
	cr6.compare<uint32_t>(ctx.r6.u32, 56, xer);
	// bne cr6,0x83129964
	if (!cr6.eq) goto loc_83129964;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83129850
	if (!cr6.eq) goto loc_83129850;
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x83129968
	goto loc_83129968;
loc_83129850:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// li r29,0
	r29.s64 = 0;
	// stw r29,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83129874
	if (!cr6.eq) goto loc_83129874;
	// lis r11,-31981
	r11.s64 = -2095906816;
	// stw r29,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r29.u32);
	// addi r11,r11,-19112
	r11.s64 = r11.s64 + -19112;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
loc_83129874:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8312988c
	if (!cr6.eq) goto loc_8312988C;
	// lis r11,-31981
	r11.s64 = -2095906816;
	// addi r11,r11,-19024
	r11.s64 = r11.s64 + -19024;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
loc_8312988C:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// li r5,24
	ctx.r5.s64 = 24;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// bne 0x831298b8
	if (!cr0.eq) goto loc_831298B8;
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x83129968
	goto loc_83129968;
loc_831298B8:
	// stw r29,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r29.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// stw r29,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r29.u32);
	// bge cr6,0x831298dc
	if (!cr6.lt) goto loc_831298DC;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// neg r30,r30
	r30.s64 = -r30.s64;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
loc_831298DC:
	// cmpwi cr6,r30,8
	cr6.compare<int32_t>(r30.s32, 8, xer);
	// blt cr6,0x83129950
	if (cr6.lt) goto loc_83129950;
	// cmpwi cr6,r30,15
	cr6.compare<int32_t>(r30.s32, 15, xer);
	// bgt cr6,0x83129950
	if (cr6.gt) goto loc_83129950;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stw r30,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r30.u32);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8312990c
	if (cr6.eq) goto loc_8312990C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// b 0x83129914
	goto loc_83129914;
loc_8312990C:
	// lis r11,-32051
	r11.s64 = -2100494336;
	// addi r4,r11,4448
	ctx.r4.s64 = r11.s64 + 4448;
loc_83129914:
	// slw r5,r10,r30
	ctx.r5.u64 = r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r30.u8 & 0x3F));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8312b680
	sub_8312B680(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stw r3,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r3.u32);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83129940
	if (!cr6.eq) goto loc_83129940;
	// li r30,-4
	r30.s64 = -4;
	// b 0x83129954
	goto loc_83129954;
loc_83129940:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83129710
	sub_83129710(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83129968
	goto loc_83129968;
loc_83129950:
	// li r30,-2
	r30.s64 = -2;
loc_83129954:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83129788
	sub_83129788(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x83129968
	goto loc_83129968;
loc_83129964:
	// li r3,-6
	ctx.r3.s64 = -6;
loc_83129968:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83129970"))) PPC_WEAK_FUNC(sub_83129970);
PPC_FUNC_IMPL(__imp__sub_83129970) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,15
	ctx.r4.s64 = 15;
	// b 0x83129810
	sub_83129810(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83129980"))) PPC_WEAK_FUNC(sub_83129980);
PPC_FUNC_IMPL(__imp__sub_83129980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b0c
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83129d28
	if (cr6.eq) goto loc_83129D28;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83129d28
	if (cr6.eq) goto loc_83129D28;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83129d28
	if (cr6.eq) goto loc_83129D28;
	// li r21,0
	r21.s64 = 0;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// li r29,-5
	r29.s64 = -5;
	// beq cr6,0x831299c4
	if (cr6.eq) goto loc_831299C4;
	// mr r29,r21
	r29.u64 = r21.u64;
loc_831299C4:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r30,-5
	r30.s64 = -5;
	// cmplwi cr6,r7,13
	cr6.compare<uint32_t>(ctx.r7.u32, 13, xer);
	// bgt cr6,0x83129d28
	if (cr6.gt) goto loc_83129D28;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// li r28,13
	r28.s64 = 13;
	// li r27,5
	r27.s64 = 5;
	// li r22,12
	r22.s64 = 12;
	// addi r26,r11,12100
	r26.s64 = r11.s64 + 12100;
	// addi r25,r10,12076
	r25.s64 = ctx.r10.s64 + 12076;
	// addi r24,r9,12056
	r24.s64 = ctx.r9.s64 + 12056;
	// addi r23,r8,12028
	r23.s64 = ctx.r8.s64 + 12028;
loc_83129A00:
	// lis r12,-32231
	r12.s64 = -2112290816;
	// addi r12,r12,-9536
	r12.s64 = r12.s64 + -9536;
	// rlwinm r0,r7,1,0,30
	r0.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	r0.u64 = PPC_LOAD_U16(r12.u32 + r0.u32);
	// lis r12,-31981
	r12.s64 = -2095906816;
	// addi r12,r12,-26072
	r12.s64 = r12.s64 + -26072;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (ctx.r7.u64) {
	case 0:
		goto loc_83129A28;
	case 1:
		goto loc_83129AB4;
	case 2:
		goto loc_83129D48;
	case 3:
		goto loc_83129D98;
	case 4:
		goto loc_83129DF0;
	case 5:
		goto loc_83129E44;
	case 6:
		goto loc_83129EA4;
	case 7:
		goto loc_83129B2C;
	case 8:
		goto loc_83129BAC;
	case 9:
		goto loc_83129BFC;
	case 10:
		goto loc_83129C54;
	case 11:
		goto loc_83129CAC;
	case 12:
		goto loc_83129ECC;
	case 13:
		goto loc_83129ED4;
	default:
		__builtin_unreachable();
	}
loc_83129A28:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83129d34
	if (cr6.eq) goto loc_83129D34;
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r30,r29
	r30.u64 = r29.u64;
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lbz r11,0(r9)
	r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, r11.u32);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// cmplwi cr6,r9,8
	cr6.compare<uint32_t>(ctx.r9.u32, 8, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x83129a88
	if (cr6.eq) goto loc_83129A88;
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// stw r23,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r23.u32);
	// b 0x83129d10
	goto loc_83129D10;
loc_83129A88:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// ble cr6,0x83129aac
	if (!cr6.gt) goto loc_83129AAC;
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// stw r24,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r24.u32);
	// b 0x83129d10
	goto loc_83129D10;
loc_83129AAC:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_83129AB4:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83129d34
	if (cr6.eq) goto loc_83129D34;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r8,31
	ctx.r8.s64 = 31;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// mr r30,r29
	r30.u64 = r29.u64;
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// divwu r8,r9,r8
	ctx.r8.u32 = ctx.r9.u32 / ctx.r8.u32;
	// mulli r8,r8,31
	ctx.r8.s64 = ctx.r8.s64 * 31;
	// subf. r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x83129b18
	if (cr0.eq) goto loc_83129B18;
	// stw r28,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r28.u32);
	// stw r25,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r25.u32);
	// b 0x83129d10
	goto loc_83129D10;
loc_83129B18:
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83129d3c
	if (!cr0.eq) goto loc_83129D3C;
	// li r11,7
	r11.s64 = 7;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// b 0x83129d18
	goto loc_83129D18;
loc_83129B2C:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// bl 0x8312b788
	sub_8312B788(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,-3
	cr6.compare<int32_t>(r30.s32, -3, xer);
	// bne cr6,0x83129b60
	if (!cr6.eq) goto loc_83129B60;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stw r21,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r21.u32);
	// b 0x83129d18
	goto loc_83129D18;
loc_83129B60:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x83129b6c
	if (!cr6.eq) goto loc_83129B6C;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_83129B6C:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// bne cr6,0x83129d34
	if (!cr6.eq) goto loc_83129D34;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r30,r29
	r30.u64 = r29.u64;
	// addi r5,r11,4
	ctx.r5.s64 = r11.s64 + 4;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// bl 0x8312b5b8
	sub_8312B5B8(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83129ba4
	if (cr6.eq) goto loc_83129BA4;
	// stw r22,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r22.u32);
	// b 0x83129d18
	goto loc_83129D18;
loc_83129BA4:
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_83129BAC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83129d34
	if (cr6.eq) goto loc_83129D34;
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r8,9
	ctx.r8.s64 = 9;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// mr r30,r29
	r30.u64 = r29.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lbz r11,0(r9)
	r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// rotlwi r11,r11,24
	r11.u64 = __builtin_rotateleft32(r11.u32, 24);
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, r11.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_83129BFC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83129d34
	if (cr6.eq) goto loc_83129D34;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r8,10
	ctx.r8.s64 = 10;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r30,r29
	r30.u64 = r29.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// rotlwi r10,r10,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_83129C54:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83129d34
	if (cr6.eq) goto loc_83129D34;
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r7,11
	ctx.r7.s64 = 11;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r30,r29
	r30.u64 = r29.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
loc_83129CAC:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83129d34
	if (cr6.eq) goto loc_83129D34;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r30,r29
	r30.u64 = r29.u64;
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x83129ec4
	if (cr6.eq) goto loc_83129EC4;
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// stw r26,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r26.u32);
loc_83129D10:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stw r27,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r27.u32);
loc_83129D18:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r7,13
	cr6.compare<uint32_t>(ctx.r7.u32, 13, xer);
	// ble cr6,0x83129a00
	if (!cr6.gt) goto loc_83129A00;
loc_83129D28:
	// li r3,-2
	ctx.r3.s64 = -2;
loc_83129D2C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b5c
	return;
loc_83129D34:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x83129d2c
	goto loc_83129D2C;
loc_83129D3C:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_83129D48:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83129d34
	if (cr6.eq) goto loc_83129D34;
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r30,r29
	r30.u64 = r29.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lbz r11,0(r9)
	r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// rotlwi r11,r11,24
	r11.u64 = __builtin_rotateleft32(r11.u32, 24);
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, r11.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_83129D98:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83129d34
	if (cr6.eq) goto loc_83129D34;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r30,r29
	r30.u64 = r29.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// rotlwi r10,r10,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_83129DF0:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83129d34
	if (cr6.eq) goto loc_83129D34;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r30,r29
	r30.u64 = r29.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r27,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r27.u32);
loc_83129E44:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83129d34
	if (cr6.eq) goto loc_83129D34;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lbz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// b 0x83129d2c
	goto loc_83129D2C;
loc_83129EA4:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r10,r10,12012
	ctx.r10.s64 = ctx.r10.s64 + 12012;
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stw r10,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// stw r21,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r21.u32);
	// b 0x83129d28
	goto loc_83129D28;
loc_83129EC4:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stw r22,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r22.u32);
loc_83129ECC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83129d2c
	goto loc_83129D2C;
loc_83129ED4:
	// li r3,-3
	ctx.r3.s64 = -3;
	// b 0x83129d2c
	goto loc_83129D2C;
}

__attribute__((alias("__imp__sub_83129EE0"))) PPC_WEAK_FUNC(sub_83129EE0);
PPC_FUNC_IMPL(__imp__sub_83129EE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// clrlwi r9,r5,16
	ctx.r9.u64 = ctx.r5.u32 & 0xFFFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,16(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mullw r10,r10,r7
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, r11.u32);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// srawi r10,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	ctx.r10.s64 = r11.s32 >> 3;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// stw r11,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, r11.u32);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// stw r11,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129F30"))) PPC_WEAK_FUNC(sub_83129F30);
PPC_FUNC_IMPL(__imp__sub_83129F30) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,8
	ctx.r9.s64 = 8;
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// add. r8,r11,r4
	ctx.r8.u64 = r11.u64 + ctx.r4.u64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// blt 0x8312a08c
	if (cr0.lt) goto loc_8312A08C;
	// li r6,0
	ctx.r6.s64 = 0;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
loc_83129F64:
	// clrlwi r8,r6,16
	ctx.r8.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplwi cr6,r8,15
	cr6.compare<uint32_t>(ctx.r8.u32, 15, xer);
	// bne cr6,0x83129fec
	if (!cr6.eq) goto loc_83129FEC;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bge cr6,0x83129f98
	if (!cr6.lt) goto loc_83129F98;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// b 0x8312a050
	goto loc_8312A050;
loc_83129F98:
	// bne cr6,0x83129fb0
	if (!cr6.eq) goto loc_83129FB0;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// stb r8,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r8.u8);
	// b 0x8312a048
	goto loc_8312A048;
loc_83129FB0:
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r27,r9,16
	r27.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r31,r11,1
	r31.s64 = r11.s64 + 1;
	// rlwinm r30,r27,29,19,31
	r30.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 29) & 0x1FFF;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// clrlwi r10,r27,29
	ctx.r10.u64 = r27.u32 & 0x7;
	// add r11,r30,r31
	r11.u64 = r30.u64 + r31.u64;
	// subfic r9,r10,8
	xer.ca = ctx.r10.u32 <= 8;
	ctx.r9.s64 = 8 - ctx.r10.s64;
	// b 0x8312a000
	goto loc_8312A000;
loc_83129FEC:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r8,r7,16
	ctx.r8.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bge cr6,0x8312a008
	if (!cr6.lt) goto loc_8312A008;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
loc_8312A000:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// b 0x8312a050
	goto loc_8312A050;
loc_8312A008:
	// bne cr6,0x8312a020
	if (!cr6.eq) goto loc_8312A020;
	// clrlwi. r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8312a018
	if (cr0.eq) goto loc_8312A018;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
loc_8312A018:
	// li r9,8
	ctx.r9.s64 = 8;
	// b 0x8312a048
	goto loc_8312A048;
loc_8312A020:
	// clrlwi. r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x8312a02c
	if (cr0.eq) goto loc_8312A02C;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
loc_8312A02C:
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwinm r9,r8,29,19,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFF;
	// clrlwi r8,r8,29
	ctx.r8.u64 = ctx.r8.u32 & 0x7;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// subfic r9,r8,8
	xer.ca = ctx.r8.u32 <= 8;
	ctx.r9.s64 = 8 - ctx.r8.s64;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
loc_8312A048:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_8312A050:
	// lhz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U16(r28.u32 + 0);
	// addi r28,r28,2
	r28.s64 = r28.s64 + 2;
	// mr. r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq 0x8312a06c
	if (cr0.eq) goto loc_8312A06C;
	// rlwinm r7,r8,28,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFF;
	// clrlwi r6,r6,28
	ctx.r6.u64 = ctx.r6.u32 & 0xF;
	// b 0x83129f64
	goto loc_83129F64;
loc_8312A06C:
	// clrlwi. r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8312a078
	if (cr0.eq) goto loc_8312A078;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
loc_8312A078:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,20(r29)
	PPC_STORE_U32(r29.u32 + 20, r11.u32);
loc_8312A08C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8312A098"))) PPC_WEAK_FUNC(sub_8312A098);
PPC_FUNC_IMPL(__imp__sub_8312A098) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-31981
	ctx.r10.s64 = -2095906816;
	// lis r9,-32212
	ctx.r9.s64 = -2111045632;
	// addi r10,r10,-24864
	ctx.r10.s64 = ctx.r10.s64 + -24864;
	// addi r9,r9,0
	ctx.r9.s64 = ctx.r9.s64 + 0;
	// lis r8,-32212
	ctx.r8.s64 = -2111045632;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lis r7,-31981
	ctx.r7.s64 = -2095906816;
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// addi r8,r8,0
	ctx.r8.s64 = ctx.r8.s64 + 0;
	// stw r4,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r4.u32);
	// addi r10,r7,-24784
	ctx.r10.s64 = ctx.r7.s64 + -24784;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r8.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A0E0"))) PPC_WEAK_FUNC(sub_8312A0E0);
PPC_FUNC_IMPL(__imp__sub_8312A0E0) {
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
	// mflr r12
	// bl 0x831b0b20
	// lhz r31,2(r4)
	r31.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r11,7
	r11.s64 = 7;
	// li r10,4
	ctx.r10.s64 = 4;
	// cmpwi r31,0
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x8312a10c
	if (!cr0.eq) goto loc_8312A10C;
	// li r11,138
	r11.s64 = 138;
	// li r10,3
	ctx.r10.s64 = 3;
loc_8312A10C:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x8312a628
	if (cr6.lt) goto loc_8312A628;
	// lis r8,0
	ctx.r8.s64 = 0;
	// addi r30,r4,6
	r30.s64 = ctx.r4.s64 + 6;
	// addi r29,r5,1
	r29.s64 = ctx.r5.s64 + 1;
	// ori r4,r8,65533
	ctx.r4.u64 = ctx.r8.u64 | 65533;
loc_8312A124:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lhz r31,0(r30)
	r31.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmpw cr6,r6,r11
	cr6.compare<int32_t>(ctx.r6.s32, r11.s32, xer);
	// bge cr6,0x8312a140
	if (!cr6.lt) goto loc_8312A140;
	// cmpw cr6,r5,r31
	cr6.compare<int32_t>(ctx.r5.s32, r31.s32, xer);
	// beq cr6,0x8312a61c
	if (cr6.eq) goto loc_8312A61C;
loc_8312A140:
	// cmpw cr6,r6,r10
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, xer);
	// bge cr6,0x8312a1fc
	if (!cr6.lt) goto loc_8312A1FC;
	// rlwinm r11,r5,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r5,669
	ctx.r10.s64 = ctx.r5.s64 + 669;
	// add r7,r11,r3
	ctx.r7.u64 = r11.u64 + ctx.r3.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_8312A158:
	// lhz r10,2678(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2678);
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r9,r10,16
	xer.ca = ctx.r10.u32 <= 16;
	ctx.r9.s64 = 16 - ctx.r10.s64;
	// lhz r28,5808(r3)
	r28.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// lhzx r9,r8,r3
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r3.u32);
	// ble cr6,0x8312a1dc
	if (!cr6.gt) goto loc_8312A1DC;
	// slw r11,r9,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// lwz r27,20(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// or r11,r11,r28
	r11.u64 = r11.u64 | r28.u64;
	// lwz r28,8(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// stbx r11,r28,r27
	PPC_STORE_U8(r28.u32 + r27.u32, r11.u8);
	// lbz r9,5808(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r28,8(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r9,r28,r11
	PPC_STORE_U8(r28.u32 + r11.u32, ctx.r9.u8);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r28,r11,16
	xer.ca = r11.u32 <= 16;
	r28.s64 = 16 - r11.s64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// clrlwi r10,r28,16
	ctx.r10.u64 = r28.u32 & 0xFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// srw r10,r26,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r26.u32 >> (ctx.r10.u8 & 0x3F));
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// sth r10,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
	// stw r11,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, r11.u32);
	// b 0x8312a1f0
	goto loc_8312A1F0;
loc_8312A1DC:
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// slw r11,r9,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// or r11,r11,r28
	r11.u64 = r11.u64 | r28.u64;
	// stw r10,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r10.u32);
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
loc_8312A1F0:
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne 0x8312a158
	if (!cr0.eq) goto loc_8312A158;
	// b 0x8312a5e8
	goto loc_8312A5E8;
loc_8312A1FC:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x8312a3bc
	if (cr6.eq) goto loc_8312A3BC;
	// cmpw cr6,r5,r9
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, xer);
	// beq cr6,0x8312a2b8
	if (cr6.eq) goto loc_8312A2B8;
	// rlwinm r11,r5,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r8,5808(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// add r10,r11,r3
	ctx.r10.u64 = r11.u64 + ctx.r3.u64;
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// lhz r10,2678(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2678);
	// subfic r9,r10,16
	xer.ca = ctx.r10.u32 <= 16;
	ctx.r9.s64 = 16 - ctx.r10.s64;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// addi r9,r5,669
	ctx.r9.s64 = ctx.r5.s64 + 669;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r9,r9,r3
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r3.u32);
	// ble cr6,0x8312a2a0
	if (!cr6.gt) goto loc_8312A2A0;
	// slw r11,r9,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// lwz r28,8(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// stbx r11,r28,r7
	PPC_STORE_U8(r28.u32 + ctx.r7.u32, r11.u8);
	// lbz r7,5808(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r7,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + r11.u32, ctx.r7.u8);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r7,r11,16
	xer.ca = r11.u32 <= 16;
	ctx.r7.s64 = 16 - r11.s64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// clrlwi r10,r7,16
	ctx.r10.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// srw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// sth r10,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
	// stw r11,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, r11.u32);
	// b 0x8312a2b4
	goto loc_8312A2B4;
loc_8312A2A0:
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// slw r11,r9,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// stw r10,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r10.u32);
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
loc_8312A2B4:
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
loc_8312A2B8:
	// lhz r10,2742(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2742);
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r9,r10,16
	xer.ca = ctx.r10.u32 <= 16;
	ctx.r9.s64 = 16 - ctx.r10.s64;
	// lhz r8,5808(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// lhz r9,2740(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2740);
	// ble cr6,0x8312a33c
	if (!cr6.gt) goto loc_8312A33C;
	// slw r11,r9,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// stbx r11,r8,r7
	PPC_STORE_U8(ctx.r8.u32 + ctx.r7.u32, r11.u8);
	// lbz r9,5808(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r9,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + r11.u32, ctx.r9.u8);
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// subfic r8,r11,16
	xer.ca = r11.u32 <= 16;
	ctx.r8.s64 = 16 - r11.s64;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// srw r10,r28,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r28.u32 >> (ctx.r10.u8 & 0x3F));
	// sth r10,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
	// stw r11,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, r11.u32);
	// b 0x8312a350
	goto loc_8312A350;
loc_8312A33C:
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// slw r11,r9,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// stw r10,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r10.u32);
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
loc_8312A350:
	// lwz r10,5812(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// lhz r9,5808(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// cmpwi cr6,r10,14
	cr6.compare<int32_t>(ctx.r10.s32, 14, xer);
	// ble cr6,0x8312a3b0
	if (!cr6.gt) goto loc_8312A3B0;
	// addi r11,r6,-3
	r11.s64 = ctx.r6.s64 + -3;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// clrlwi r9,r11,16
	ctx.r9.u64 = r11.u32 & 0xFFFF;
	// clrlwi r11,r10,16
	r11.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// stbx r11,r7,r8
	PPC_STORE_U8(ctx.r7.u32 + ctx.r8.u32, r11.u8);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + r11.u32, ctx.r10.u8);
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r10,r11,16
	xer.ca = r11.u32 <= 16;
	ctx.r10.s64 = 16 - r11.s64;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r11,r11,-14
	r11.s64 = r11.s64 + -14;
	// b 0x8312a5b0
	goto loc_8312A5B0;
loc_8312A3B0:
	// add r11,r6,r4
	r11.u64 = ctx.r6.u64 + ctx.r4.u64;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// b 0x8312a5d8
	goto loc_8312A5D8;
loc_8312A3BC:
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// cmpwi cr6,r6,10
	cr6.compare<int32_t>(ctx.r6.s32, 10, xer);
	// lhz r8,5808(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// bgt cr6,0x8312a4c4
	if (cr6.gt) goto loc_8312A4C4;
	// lhz r10,2746(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2746);
	// subfic r9,r10,16
	xer.ca = ctx.r10.u32 <= 16;
	ctx.r9.s64 = 16 - ctx.r10.s64;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// lhz r9,2744(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2744);
	// ble cr6,0x8312a448
	if (!cr6.gt) goto loc_8312A448;
	// slw r11,r9,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// stbx r11,r8,r7
	PPC_STORE_U8(ctx.r8.u32 + ctx.r7.u32, r11.u8);
	// lbz r9,5808(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r9,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + r11.u32, ctx.r9.u8);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r8,r11,16
	xer.ca = r11.u32 <= 16;
	ctx.r8.s64 = 16 - r11.s64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// srw r10,r28,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r28.u32 >> (ctx.r10.u8 & 0x3F));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sth r10,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
	// stw r11,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, r11.u32);
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// b 0x8312a45c
	goto loc_8312A45C;
loc_8312A448:
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// slw r11,r9,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// stw r10,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r10.u32);
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
loc_8312A45C:
	// lwz r10,5812(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// lhz r9,5808(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// cmpwi cr6,r10,13
	cr6.compare<int32_t>(ctx.r10.s32, 13, xer);
	// ble cr6,0x8312a4b8
	if (!cr6.gt) goto loc_8312A4B8;
	// addi r11,r6,-3
	r11.s64 = ctx.r6.s64 + -3;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// clrlwi r9,r11,16
	ctx.r9.u64 = r11.u32 & 0xFFFF;
	// clrlwi r11,r10,16
	r11.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// stbx r11,r7,r8
	PPC_STORE_U8(ctx.r7.u32 + ctx.r8.u32, r11.u8);
	// lbz r8,5808(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r8,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + r11.u32, ctx.r8.u8);
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r8,r11,16
	xer.ca = r11.u32 <= 16;
	ctx.r8.s64 = 16 - r11.s64;
	// addi r11,r11,-13
	r11.s64 = r11.s64 + -13;
	// b 0x8312a5ac
	goto loc_8312A5AC;
loc_8312A4B8:
	// add r11,r6,r4
	r11.u64 = ctx.r6.u64 + ctx.r4.u64;
	// addi r8,r10,3
	ctx.r8.s64 = ctx.r10.s64 + 3;
	// b 0x8312a5d8
	goto loc_8312A5D8;
loc_8312A4C4:
	// lhz r10,2750(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2750);
	// subfic r9,r10,16
	xer.ca = ctx.r10.u32 <= 16;
	ctx.r9.s64 = 16 - ctx.r10.s64;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// lhz r9,2748(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2748);
	// ble cr6,0x8312a540
	if (!cr6.gt) goto loc_8312A540;
	// slw r11,r9,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// stbx r11,r8,r7
	PPC_STORE_U8(ctx.r8.u32 + ctx.r7.u32, r11.u8);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lbz r9,5808(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r9,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + r11.u32, ctx.r9.u8);
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// subfic r8,r11,16
	xer.ca = r11.u32 <= 16;
	ctx.r8.s64 = 16 - r11.s64;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// srw r10,r28,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r28.u32 >> (ctx.r10.u8 & 0x3F));
	// sth r10,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
	// stw r11,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, r11.u32);
	// b 0x8312a554
	goto loc_8312A554;
loc_8312A540:
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// slw r11,r9,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// stw r10,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r10.u32);
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
loc_8312A554:
	// lwz r10,5812(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// lhz r9,5808(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// cmpwi cr6,r10,9
	cr6.compare<int32_t>(ctx.r10.s32, 9, xer);
	// ble cr6,0x8312a5cc
	if (!cr6.gt) goto loc_8312A5CC;
	// addi r11,r6,-11
	r11.s64 = ctx.r6.s64 + -11;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// clrlwi r9,r11,16
	ctx.r9.u64 = r11.u32 & 0xFFFF;
	// clrlwi r11,r10,16
	r11.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// stbx r11,r7,r8
	PPC_STORE_U8(ctx.r7.u32 + ctx.r8.u32, r11.u8);
	// lbz r8,5808(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r8,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + r11.u32, ctx.r8.u8);
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r8,r11,16
	xer.ca = r11.u32 <= 16;
	ctx.r8.s64 = 16 - r11.s64;
	// addi r11,r11,-9
	r11.s64 = r11.s64 + -9;
loc_8312A5AC:
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
loc_8312A5B0:
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r11,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// srw r10,r9,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// sth r10,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
	// b 0x8312a5e8
	goto loc_8312A5E8;
loc_8312A5CC:
	// addis r11,r6,1
	r11.s64 = ctx.r6.s64 + 65536;
	// addi r8,r10,7
	ctx.r8.s64 = ctx.r10.s64 + 7;
	// addi r11,r11,-11
	r11.s64 = r11.s64 + -11;
loc_8312A5D8:
	// slw r11,r11,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// stw r8,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r8.u32);
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
loc_8312A5E8:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x8312a600
	if (!cr6.eq) goto loc_8312A600;
	// li r11,138
	r11.s64 = 138;
	// b 0x8312a60c
	goto loc_8312A60C;
loc_8312A600:
	// cmpw cr6,r5,r31
	cr6.compare<int32_t>(ctx.r5.s32, r31.s32, xer);
	// bne cr6,0x8312a614
	if (!cr6.eq) goto loc_8312A614;
	// li r11,6
	r11.s64 = 6;
loc_8312A60C:
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x8312a61c
	goto loc_8312A61C;
loc_8312A614:
	// li r11,7
	r11.s64 = 7;
	// li r10,4
	ctx.r10.s64 = 4;
loc_8312A61C:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x8312a124
	if (!cr0.eq) goto loc_8312A124;
loc_8312A628:
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_8312A630"))) PPC_WEAK_FUNC(sub_8312A630);
PPC_FUNC_IMPL(__imp__sub_8312A630) {
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
	// lwz r10,5812(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lhz r9,5808(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// cmpwi cr6,r10,11
	cr6.compare<int32_t>(ctx.r10.s32, 11, xer);
	// ble cr6,0x8312a6c0
	if (!cr6.gt) goto loc_8312A6C0;
	// addi r11,r4,-257
	r11.s64 = ctx.r4.s64 + -257;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// clrlwi r9,r11,16
	ctx.r9.u64 = r11.u32 & 0xFFFF;
	// clrlwi r11,r10,16
	r11.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// stbx r11,r8,r7
	PPC_STORE_U8(ctx.r8.u32 + ctx.r7.u32, r11.u8);
	// lbz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r10,r11,r8
	PPC_STORE_U8(r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r8,r11,16
	xer.ca = r11.u32 <= 16;
	ctx.r8.s64 = 16 - r11.s64;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,-11
	r11.s64 = r11.s64 + -11;
	// srw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, r11.u32);
	// sth r9,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r9.u16);
	// b 0x8312a6dc
	goto loc_8312A6DC;
loc_8312A6C0:
	// addis r11,r4,1
	r11.s64 = ctx.r4.s64 + 65536;
	// addi r8,r10,5
	ctx.r8.s64 = ctx.r10.s64 + 5;
	// addi r11,r11,-257
	r11.s64 = r11.s64 + -257;
	// stw r8,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r8.u32);
	// slw r11,r11,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
loc_8312A6DC:
	// lwz r10,5812(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// lhz r9,5808(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// cmpwi cr6,r10,11
	cr6.compare<int32_t>(ctx.r10.s32, 11, xer);
	// ble cr6,0x8312a754
	if (!cr6.gt) goto loc_8312A754;
	// addi r11,r31,-1
	r11.s64 = r31.s64 + -1;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// clrlwi r9,r11,16
	ctx.r9.u64 = r11.u32 & 0xFFFF;
	// clrlwi r11,r10,16
	r11.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// stbx r11,r8,r7
	PPC_STORE_U8(ctx.r8.u32 + ctx.r7.u32, r11.u8);
	// lbz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r10,r11,r8
	PPC_STORE_U8(r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r10,r11,16
	xer.ca = r11.u32 <= 16;
	ctx.r10.s64 = 16 - r11.s64;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// addi r11,r11,-11
	r11.s64 = r11.s64 + -11;
	// srw r10,r9,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// stw r11,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, r11.u32);
	// sth r10,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
	// b 0x8312a770
	goto loc_8312A770;
loc_8312A754:
	// addis r11,r31,1
	r11.s64 = r31.s64 + 65536;
	// addi r8,r10,5
	ctx.r8.s64 = ctx.r10.s64 + 5;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r8,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r8.u32);
	// slw r11,r11,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
loc_8312A770:
	// lwz r10,5812(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// lhz r9,5808(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// cmpwi cr6,r10,12
	cr6.compare<int32_t>(ctx.r10.s32, 12, xer);
	// ble cr6,0x8312a7e4
	if (!cr6.gt) goto loc_8312A7E4;
	// addi r11,r6,-4
	r11.s64 = ctx.r6.s64 + -4;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// clrlwi r9,r11,16
	ctx.r9.u64 = r11.u32 & 0xFFFF;
	// clrlwi r11,r10,16
	r11.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// stbx r11,r8,r7
	PPC_STORE_U8(ctx.r8.u32 + ctx.r7.u32, r11.u8);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lbz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r10,r11,r8
	PPC_STORE_U8(r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subfic r8,r11,16
	xer.ca = r11.u32 <= 16;
	ctx.r8.s64 = 16 - r11.s64;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// addi r11,r11,-12
	r11.s64 = r11.s64 + -12;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r11,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, r11.u32);
	// srw r11,r9,r8
	r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// b 0x8312a7fc
	goto loc_8312A7FC;
loc_8312A7E4:
	// addis r11,r6,1
	r11.s64 = ctx.r6.s64 + 65536;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// stw r8,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r8.u32);
	// slw r11,r11,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
loc_8312A7FC:
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x8312a8b8
	if (!cr6.gt) goto loc_8312A8B8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r8,r11,-9388
	ctx.r8.s64 = r11.s64 + -9388;
loc_8312A814:
	// lbzx r9,r10,r8
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lhz r9,2678(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2678);
	// ble cr6,0x8312a894
	if (!cr6.gt) goto loc_8312A894;
	// slw r11,r9,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// lhz r7,5808(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// or r11,r11,r7
	r11.u64 = r11.u64 | ctx.r7.u64;
	// lwz r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r30,8(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// stbx r11,r5,r30
	PPC_STORE_U8(ctx.r5.u32 + r30.u32, r11.u8);
	// lbz r5,5808(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r5,r11,r9
	PPC_STORE_U8(r11.u32 + ctx.r9.u32, ctx.r5.u8);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// subfic r9,r11,16
	xer.ca = r11.u32 <= 16;
	ctx.r9.s64 = 16 - r11.s64;
	// addi r11,r11,-13
	r11.s64 = r11.s64 + -13;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r11,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, r11.u32);
	// srw r11,r7,r9
	r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r9.u8 & 0x3F));
	// b 0x8312a8a8
	goto loc_8312A8A8;
loc_8312A894:
	// addi r7,r11,3
	ctx.r7.s64 = r11.s64 + 3;
	// lhz r5,5808(r3)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// slw r11,r9,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// stw r7,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r7.u32);
	// or r11,r11,r5
	r11.u64 = r11.u64 | ctx.r5.u64;
loc_8312A8A8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// cmpw cr6,r10,r6
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, xer);
	// blt cr6,0x8312a814
	if (cr6.lt) goto loc_8312A814;
loc_8312A8B8:
	// addi r5,r4,-1
	ctx.r5.s64 = ctx.r4.s64 + -1;
	// addi r4,r3,140
	ctx.r4.s64 = ctx.r3.s64 + 140;
	// bl 0x8312a0e0
	sub_8312A0E0(ctx, base);
	// addi r4,r3,2432
	ctx.r4.s64 = ctx.r3.s64 + 2432;
	// addi r5,r31,-1
	ctx.r5.s64 = r31.s64 + -1;
	// bl 0x8312a0e0
	sub_8312A0E0(ctx, base);
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

__attribute__((alias("__imp__sub_8312A8E8"))) PPC_WEAK_FUNC(sub_8312A8E8);
PPC_FUNC_IMPL(__imp__sub_8312A8E8) {
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
	// mflr r12
	// bl 0x831b0b18
	// lwz r11,5784(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5784);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8312ac74
	if (cr6.eq) goto loc_8312AC74;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// li r27,0
	r27.s64 = 0;
	// addi r28,r11,-7896
	r28.s64 = r11.s64 + -7896;
	// addi r31,r10,-9504
	r31.s64 = ctx.r10.s64 + -9504;
	// addi r30,r9,-7384
	r30.s64 = ctx.r9.s64 + -7384;
loc_8312A91C:
	// lwz r11,5788(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5788);
	// lwz r10,5776(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5776);
	// lhzx r6,r27,r11
	ctx.r6.u64 = PPC_LOAD_U16(r27.u32 + r11.u32);
	// addi r27,r27,2
	r27.s64 = r27.s64 + 2;
	// lbzx r7,r29,r10
	ctx.r7.u64 = PPC_LOAD_U8(r29.u32 + ctx.r10.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// cmplwi r6,0
	cr0.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne 0x8312a9dc
	if (!cr0.eq) goto loc_8312A9DC;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lhz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// subfic r8,r9,16
	xer.ca = ctx.r9.u32 <= 16;
	ctx.r8.s64 = 16 - ctx.r9.s64;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// lhz r8,5808(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// ble cr6,0x8312a9c4
	if (!cr6.gt) goto loc_8312A9C4;
	// slw r11,r10,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// stbx r11,r8,r7
	PPC_STORE_U8(ctx.r8.u32 + ctx.r7.u32, r11.u8);
	// lbz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r10,r11,r8
	PPC_STORE_U8(r11.u32 + ctx.r8.u32, ctx.r10.u8);
loc_8312A998:
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// subfic r8,r11,16
	xer.ca = r11.u32 <= 16;
	ctx.r8.s64 = 16 - r11.s64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srw r9,r6,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r9.u8 & 0x3F));
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// sth r9,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r9.u16);
	// b 0x8312ac64
	goto loc_8312AC64;
loc_8312A9C4:
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
	// slw r11,r10,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// stw r9,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r9.u32);
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// b 0x8312ac68
	goto loc_8312AC68;
loc_8312A9DC:
	// lbzx r10,r7,r30
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + r30.u32);
	// rotlwi r8,r10,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// addi r10,r10,257
	ctx.r10.s64 = ctx.r10.s64 + 257;
	// add r9,r8,r4
	ctx.r9.u64 = ctx.r8.u64 + ctx.r4.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r9,1030(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 1030);
	// lhzx r10,r10,r4
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r4.u32);
	// subfic r26,r9,16
	xer.ca = ctx.r9.u32 <= 16;
	r26.s64 = 16 - ctx.r9.s64;
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(r11.s32, r26.s32, xer);
	// lhz r26,5808(r3)
	r26.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// ble cr6,0x8312aa70
	if (!cr6.gt) goto loc_8312AA70;
	// slw r11,r10,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// lwz r25,20(r3)
	r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// or r11,r11,r26
	r11.u64 = r11.u64 | r26.u64;
	// lwz r24,8(r3)
	r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// stbx r11,r24,r25
	PPC_STORE_U8(r24.u32 + r25.u32, r11.u8);
	// lwz r25,8(r3)
	r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r10,r11,r25
	PPC_STORE_U8(r11.u32 + r25.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r25,r11,16
	xer.ca = r11.u32 <= 16;
	r25.s64 = 16 - r11.s64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// clrlwi r9,r25,16
	ctx.r9.u64 = r25.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// srw r9,r26,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r26.u32 >> (ctx.r9.u8 & 0x3F));
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// sth r9,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r9.u16);
	// stw r11,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, r11.u32);
	// b 0x8312aa84
	goto loc_8312AA84;
loc_8312AA70:
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
	// slw r11,r10,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// or r11,r11,r26
	r11.u64 = r11.u64 | r26.u64;
	// stw r9,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r9.u32);
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
loc_8312AA84:
	// lwzx r9,r8,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + r31.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8312ab28
	if (cr6.eq) goto loc_8312AB28;
	// addi r10,r31,2376
	ctx.r10.s64 = r31.s64 + 2376;
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r26,r9,16
	xer.ca = ctx.r9.u32 <= 16;
	r26.s64 = 16 - ctx.r9.s64;
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(r11.s32, r26.s32, xer);
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lhz r8,5808(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// subf r10,r10,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r10.s64;
	// ble cr6,0x8312ab14
	if (!cr6.gt) goto loc_8312AB14;
	// slw r11,r10,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// clrlwi r26,r10,16
	r26.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// stbx r11,r7,r8
	PPC_STORE_U8(ctx.r7.u32 + ctx.r8.u32, r11.u8);
	// lbz r8,5808(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r8,r11,r10
	PPC_STORE_U8(r11.u32 + ctx.r10.u32, ctx.r8.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r8,r11,16
	xer.ca = r11.u32 <= 16;
	ctx.r8.s64 = 16 - r11.s64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srw r9,r26,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r26.u32 >> (ctx.r9.u8 & 0x3F));
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// sth r9,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r9.u16);
	// b 0x8312ab24
	goto loc_8312AB24;
loc_8312AB14:
	// slw r10,r10,r11
	ctx.r10.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// sth r10,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
loc_8312AB24:
	// stw r11,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, r11.u32);
loc_8312AB28:
	// addi r7,r6,-1
	ctx.r7.s64 = ctx.r6.s64 + -1;
	// cmplwi cr6,r7,256
	cr6.compare<uint32_t>(ctx.r7.u32, 256, xer);
	// bge cr6,0x8312ab3c
	if (!cr6.lt) goto loc_8312AB3C;
	// lbzx r11,r7,r28
	r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + r28.u32);
	// b 0x8312ab48
	goto loc_8312AB48;
loc_8312AB3C:
	// rlwinm r11,r7,25,7,31
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r28,256
	ctx.r10.s64 = r28.s64 + 256;
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
loc_8312AB48:
	// rlwinm r8,r11,2,22,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x3FC;
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// add r10,r8,r5
	ctx.r10.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lhz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// subfic r6,r9,16
	xer.ca = ctx.r9.u32 <= 16;
	ctx.r6.s64 = 16 - ctx.r9.s64;
	// cmpw cr6,r11,r6
	cr6.compare<int32_t>(r11.s32, ctx.r6.s32, xer);
	// lhz r6,5808(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// ble cr6,0x8312abd4
	if (!cr6.gt) goto loc_8312ABD4;
	// slw r11,r10,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// lwz r26,20(r3)
	r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// or r11,r11,r6
	r11.u64 = r11.u64 | ctx.r6.u64;
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// stbx r11,r6,r26
	PPC_STORE_U8(ctx.r6.u32 + r26.u32, r11.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// lbz r6,5808(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// stbx r6,r11,r10
	PPC_STORE_U8(r11.u32 + ctx.r10.u32, ctx.r6.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r6,r11,16
	xer.ca = r11.u32 <= 16;
	ctx.r6.s64 = 16 - r11.s64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// clrlwi r9,r6,16
	ctx.r9.u64 = ctx.r6.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// srw r9,r25,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r25.u32 >> (ctx.r9.u8 & 0x3F));
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// sth r9,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r9.u16);
	// stw r11,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, r11.u32);
	// b 0x8312abe8
	goto loc_8312ABE8;
loc_8312ABD4:
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
	// slw r11,r10,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// or r11,r11,r6
	r11.u64 = r11.u64 | ctx.r6.u64;
	// stw r9,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r9.u32);
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
loc_8312ABE8:
	// addi r11,r31,136
	r11.s64 = r31.s64 + 136;
	// lwzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8312ac68
	if (cr6.eq) goto loc_8312AC68;
	// addi r10,r31,2496
	ctx.r10.s64 = r31.s64 + 2496;
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r6,r9,16
	xer.ca = ctx.r9.u32 <= 16;
	ctx.r6.s64 = 16 - ctx.r9.s64;
	// cmpw cr6,r11,r6
	cr6.compare<int32_t>(r11.s32, ctx.r6.s32, xer);
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lhz r8,5808(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// subf r10,r10,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r10.s64;
	// ble cr6,0x8312ac54
	if (!cr6.gt) goto loc_8312AC54;
	// slw r11,r10,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// clrlwi r6,r10,16
	ctx.r6.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// stbx r11,r7,r8
	PPC_STORE_U8(ctx.r7.u32 + ctx.r8.u32, r11.u8);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lbz r8,5808(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r8,r11,r10
	PPC_STORE_U8(r11.u32 + ctx.r10.u32, ctx.r8.u8);
	// b 0x8312a998
	goto loc_8312A998;
loc_8312AC54:
	// slw r10,r10,r11
	ctx.r10.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// sth r10,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
loc_8312AC64:
	// stw r11,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, r11.u32);
loc_8312AC68:
	// lwz r11,5784(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5784);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x8312a91c
	if (cr6.lt) goto loc_8312A91C;
loc_8312AC74:
	// lhz r10,1026(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 1026);
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r9,r10,16
	xer.ca = ctx.r10.u32 <= 16;
	ctx.r9.s64 = 16 - ctx.r10.s64;
	// lhz r8,5808(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// lhz r9,1024(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 1024);
	// ble cr6,0x8312acf4
	if (!cr6.gt) goto loc_8312ACF4;
	// slw r11,r9,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// stbx r11,r8,r7
	PPC_STORE_U8(ctx.r8.u32 + ctx.r7.u32, r11.u8);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lbz r8,5808(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r8,r11,r7
	PPC_STORE_U8(r11.u32 + ctx.r7.u32, ctx.r8.u8);
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r8,r11,16
	xer.ca = r11.u32 <= 16;
	ctx.r8.s64 = 16 - r11.s64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r8,r11,-16
	ctx.r8.s64 = r11.s64 + -16;
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// srw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r10,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
	// stw r8,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r8.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// b 0x8312ad08
	goto loc_8312AD08;
loc_8312ACF4:
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// slw r11,r9,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// stw r10,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r10.u32);
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
loc_8312AD08:
	// lhz r11,1026(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 1026);
	// stw r11,5804(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5804, r11.u32);
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_8312AD18"))) PPC_WEAK_FUNC(sub_8312AD18);
PPC_FUNC_IMPL(__imp__sub_8312AD18) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// li r25,0
	r25.s64 = 0;
	// li r8,573
	ctx.r8.s64 = 573;
	// li r26,-1
	r26.s64 = -1;
	// lwz r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// mr r11,r25
	r11.u64 = r25.u64;
	// lwz r10,-1060(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1060);
	// lwz r30,0(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r28,12(r9)
	r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r25,5192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5192, r25.u32);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// stw r8,5196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5196, ctx.r8.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// ble cr6,0x8312adb0
	if (!cr6.gt) goto loc_8312ADB0;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
loc_8312AD68:
	// lhz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8312ad9c
	if (cr0.eq) goto loc_8312AD9C;
	// lwz r10,5192(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5192);
	// add r8,r11,r3
	ctx.r8.u64 = r11.u64 + ctx.r3.u64;
	// mr r26,r11
	r26.u64 = r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r6,r10,725
	ctx.r6.s64 = ctx.r10.s64 + 725;
	// stw r10,5192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5192, ctx.r10.u32);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, r11.u32);
	// stb r25,5200(r8)
	PPC_STORE_U8(ctx.r8.u32 + 5200, r25.u8);
	// b 0x8312ada0
	goto loc_8312ADA0;
loc_8312AD9C:
	// sth r25,2(r9)
	PPC_STORE_U16(ctx.r9.u32 + 2, r25.u16);
loc_8312ADA0:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// blt cr6,0x8312ad68
	if (cr6.lt) goto loc_8312AD68;
loc_8312ADB0:
	// lwz r11,5192(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5192);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bge cr6,0x8312ae34
	if (!cr6.lt) goto loc_8312AE34;
	// addi r8,r3,5200
	ctx.r8.s64 = ctx.r3.s64 + 5200;
loc_8312ADC0:
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(r26.s32, 2, xer);
	// bge cr6,0x8312add4
	if (!cr6.lt) goto loc_8312ADD4;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// mr r11,r26
	r11.u64 = r26.u64;
	// b 0x8312add8
	goto loc_8312ADD8;
loc_8312ADD4:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_8312ADD8:
	// lwz r10,5192(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5192);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// addi r5,r10,725
	ctx.r5.s64 = ctx.r10.s64 + 725;
	// stw r10,5192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5192, ctx.r10.u32);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, r11.u32);
	// sthx r6,r9,r30
	PPC_STORE_U16(ctx.r9.u32 + r30.u32, ctx.r6.u16);
	// stbx r25,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + r11.u32, r25.u8);
	// lwz r11,5792(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5792);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,5792(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5792, r11.u32);
	// beq cr6,0x8312ae28
	if (cr6.eq) goto loc_8312AE28;
	// add r11,r9,r7
	r11.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r10,5796(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5796);
	// lhz r11,2(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// stw r11,5796(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5796, r11.u32);
loc_8312AE28:
	// lwz r11,5192(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5192);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// blt cr6,0x8312adc0
	if (cr6.lt) goto loc_8312ADC0;
loc_8312AE34:
	// stw r26,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r26.u32);
	// lwz r11,5192(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5192);
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addze r31,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r31.s64 = temp.s64;
	// b 0x8312ae58
	goto loc_8312AE58;
loc_8312AE48:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82cd12d0
	sub_82CD12D0(ctx, base);
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
loc_8312AE58:
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(r31.s32, 1, xer);
	// bge cr6,0x8312ae48
	if (!cr6.lt) goto loc_8312AE48;
	// rlwinm r11,r28,2,0,29
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r3,5200
	r31.s64 = ctx.r3.s64 + 5200;
	// add r29,r11,r30
	r29.u64 = r11.u64 + r30.u64;
loc_8312AE6C:
	// lwz r11,5192(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5192);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r24,2904(r3)
	r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2904);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r10,r11,725
	ctx.r10.s64 = r11.s64 + 725;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// stw r11,5192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5192, r11.u32);
	// stw r10,2904(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2904, ctx.r10.u32);
	// bl 0x82cd12d0
	sub_82CD12D0(ctx, base);
	// rlwinm r11,r24,2,0,29
	r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,2904(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2904);
	// add r10,r11,r30
	ctx.r10.u64 = r11.u64 + r30.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// lwz r11,5196(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5196);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r8,r11,725
	ctx.r8.s64 = r11.s64 + 725;
	// stw r11,5196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5196, r11.u32);
	// rlwinm r11,r8,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r24,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, r24.u32);
	// lwz r11,5196(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5196);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r8,r11,725
	ctx.r8.s64 = r11.s64 + 725;
	// stw r11,5196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5196, r11.u32);
	// rlwinm r11,r8,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, ctx.r7.u32);
	// lhz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// lhz r11,0(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// sth r11,0(r29)
	PPC_STORE_U16(r29.u32 + 0, r11.u16);
	// lbzx r11,r31,r7
	r11.u64 = PPC_LOAD_U8(r31.u32 + ctx.r7.u32);
	// lbzx r8,r31,r24
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + r24.u32);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// blt cr6,0x8312af08
	if (cr6.lt) goto loc_8312AF08;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_8312AF08:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r8,r28,16
	ctx.r8.u64 = r28.u32 & 0xFFFF;
	// stbx r11,r31,r28
	PPC_STORE_U8(r31.u32 + r28.u32, r11.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// sth r8,2(r9)
	PPC_STORE_U16(ctx.r9.u32 + 2, ctx.r8.u16);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// sth r8,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r8.u16);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// stw r28,2904(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2904, r28.u32);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// bl 0x82cd12d0
	sub_82CD12D0(ctx, base);
	// lwz r11,5192(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5192);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bge cr6,0x8312ae6c
	if (!cr6.lt) goto loc_8312AE6C;
	// lwz r11,5196(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5196);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r10,2904(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2904);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r9,r11,725
	ctx.r9.s64 = r11.s64 + 725;
	// stw r11,5196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5196, r11.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u32);
	// bl 0x82cd13c0
	sub_82CD13C0(ctx, base);
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r10,r3,2868
	ctx.r10.s64 = ctx.r3.s64 + 2868;
	// li r11,15
	r11.s64 = 15;
loc_8312AF74:
	// lhz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r9,r9,1,16,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFE;
	// sth r9,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, ctx.r9.u16);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// bne 0x8312af74
	if (!cr0.eq) goto loc_8312AF74;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// blt cr6,0x8312b000
	if (cr6.lt) goto loc_8312B000;
	// addi r6,r26,1
	ctx.r6.s64 = r26.s64 + 1;
loc_8312AFA4:
	// lhz r11,2(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 2);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8312aff4
	if (cr0.eq) goto loc_8312AFF4;
	// cmpwi cr6,r11,15
	cr6.compare<int32_t>(r11.s32, 15, xer);
	// bgt cr6,0x8312aff4
	if (cr6.gt) goto loc_8312AFF4;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// lhzx r11,r10,r9
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// sthx r5,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r5.u16);
loc_8312AFD4:
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// rlwinm r11,r11,31,1,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// bgt 0x8312afd4
	if (cr0.gt) goto loc_8312AFD4;
	// rlwinm r11,r7,31,16,31
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0xFFFF;
	// sth r11,0(r30)
	PPC_STORE_U16(r30.u32 + 0, r11.u16);
loc_8312AFF4:
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x8312afa4
	if (!cr0.eq) goto loc_8312AFA4;
loc_8312B000:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x831bafb8
	sub_831BAFB8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_8312B010"))) PPC_WEAK_FUNC(sub_8312B010);
PPC_FUNC_IMPL(__imp__sub_8312B010) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// lhz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// ble cr6,0x8312b088
	if (!cr6.gt) goto loc_8312B088;
	// slw r11,r6,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (r11.u8 & 0x3F));
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// clrlwi r7,r6,16
	ctx.r7.u64 = ctx.r6.u32 & 0xFFFF;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// stbx r11,r8,r10
	PPC_STORE_U8(ctx.r8.u32 + ctx.r10.u32, r11.u8);
	// lbz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + r11.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r8,r11,16
	xer.ca = r11.u32 <= 16;
	ctx.r8.s64 = 16 - r11.s64;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r8.u8 & 0x3F));
	// addi r11,r11,-13
	r11.s64 = r11.s64 + -13;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// sth r8,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r8.u16);
	// b 0x8312b098
	goto loc_8312B098;
loc_8312B088:
	// slw r8,r6,r11
	ctx.r8.u64 = r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (r11.u8 & 0x3F));
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// sth r10,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
loc_8312B098:
	// stw r11,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// ble cr6,0x8312b0d8
	if (!cr6.gt) goto loc_8312B0D8;
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lhz r8,5808(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stbx r8,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + r11.u32, ctx.r8.u8);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lbz r7,5808(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r7,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + r11.u32, ctx.r7.u8);
	// b 0x8312b0f0
	goto loc_8312B0F0;
loc_8312B0D8:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8312b0fc
	if (!cr6.gt) goto loc_8312B0FC;
	// lhz r11,5808(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stbx r11,r7,r8
	PPC_STORE_U8(ctx.r7.u32 + ctx.r8.u32, r11.u8);
loc_8312B0F0:
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
loc_8312B0FC:
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r11,0
	r11.s64 = 0;
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r6,8
	ctx.r6.s64 = 8;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// rlwinm r31,r5,24,24,31
	r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF;
	// stw r11,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, r11.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r6,5804(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5804, ctx.r6.u32);
	// not r6,r5
	ctx.r6.u64 = ~ctx.r5.u64;
	// stbx r5,r7,r8
	PPC_STORE_U8(ctx.r7.u32 + ctx.r8.u32, ctx.r5.u8);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r6,r6,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFF;
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r31,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + r11.u32, r31.u8);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stbx r8,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + r11.u32, ctx.r8.u8);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r6,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + r11.u32, ctx.r6.u8);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// beq cr6,0x8312b1a0
	if (cr6.eq) goto loc_8312B1A0;
loc_8312B17C:
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stbx r8,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + r11.u32, ctx.r8.u8);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// bne 0x8312b17c
	if (!cr0.eq) goto loc_8312B17C;
loc_8312B1A0:
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312B1A8"))) PPC_WEAK_FUNC(sub_8312B1A8);
PPC_FUNC_IMPL(__imp__sub_8312B1A8) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r26,0
	r26.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// addi r27,r11,-9388
	r27.s64 = r11.s64 + -9388;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// ble cr6,0x8312b2f4
	if (!cr6.gt) goto loc_8312B2F4;
	// lbz r11,28(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 28);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x8312b25c
	if (!cr6.eq) goto loc_8312B25C;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// addi r10,r31,140
	ctx.r10.s64 = r31.s64 + 140;
	// li r11,7
	r11.s64 = 7;
loc_8312B1FC:
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bne 0x8312b1fc
	if (!cr0.eq) goto loc_8312B1FC;
	// addi r10,r31,168
	ctx.r10.s64 = r31.s64 + 168;
	// li r11,121
	r11.s64 = 121;
loc_8312B218:
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// bne 0x8312b218
	if (!cr0.eq) goto loc_8312B218;
	// addi r10,r31,652
	ctx.r10.s64 = r31.s64 + 652;
	// li r11,128
	r11.s64 = 128;
loc_8312B234:
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bne 0x8312b234
	if (!cr0.eq) goto loc_8312B234;
	// rlwinm r11,r7,30,2,31
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// subfc r11,r9,r11
	xer.ca = r11.u32 >= ctx.r9.u32;
	r11.s64 = r11.s64 - ctx.r9.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r11,28(r31)
	PPC_STORE_U8(r31.u32 + 28, r11.u8);
loc_8312B25C:
	// addi r4,r31,2832
	ctx.r4.s64 = r31.s64 + 2832;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8312ad18
	sub_8312AD18(ctx, base);
	// addi r4,r31,2844
	ctx.r4.s64 = r31.s64 + 2844;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8312ad18
	sub_8312AD18(ctx, base);
	// addi r4,r31,140
	ctx.r4.s64 = r31.s64 + 140;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,2836(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 2836);
	// bl 0x82cd1608
	sub_82CD1608(ctx, base);
	// addi r4,r31,2432
	ctx.r4.s64 = r31.s64 + 2432;
	// lwz r5,2848(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 2848);
	// bl 0x82cd1608
	sub_82CD1608(ctx, base);
	// addi r4,r31,2856
	ctx.r4.s64 = r31.s64 + 2856;
	// bl 0x8312ad18
	sub_8312AD18(ctx, base);
	// li r10,18
	ctx.r10.s64 = 18;
loc_8312B29C:
	// lbzx r11,r10,r27
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + r27.u32);
	// rotlwi r11,r11,2
	r11.u64 = __builtin_rotateleft32(r11.u32, 2);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lhz r11,2678(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 2678);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8312b2c0
	if (!cr0.eq) goto loc_8312B2C0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bge cr6,0x8312b29c
	if (!cr6.lt) goto loc_8312B29C;
loc_8312B2C0:
	// lwz r8,5792(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 5792);
	// mulli r11,r10,3
	r11.s64 = ctx.r10.s64 * 3;
	// lwz r9,5796(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 5796);
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// addi r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 + 10;
	// addi r11,r11,17
	r11.s64 = r11.s64 + 17;
	// rlwinm r9,r9,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r8,r11,10
	ctx.r8.s64 = r11.s64 + 10;
	// stw r11,5792(r31)
	PPC_STORE_U32(r31.u32 + 5792, r11.u32);
	// rlwinm r11,r8,29,3,31
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bgt cr6,0x8312b2fc
	if (cr6.gt) goto loc_8312B2FC;
	// b 0x8312b2f8
	goto loc_8312B2F8;
loc_8312B2F4:
	// addi r9,r30,5
	ctx.r9.s64 = r30.s64 + 5;
loc_8312B2F8:
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_8312B2FC:
	// addi r8,r30,4
	ctx.r8.s64 = r30.s64 + 4;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// bgt cr6,0x8312b328
	if (cr6.gt) goto loc_8312B328;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8312b328
	if (cr6.eq) goto loc_8312B328;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8312b010
	sub_8312B010(ctx, base);
	// b 0x8312b480
	goto loc_8312B480;
loc_8312B328:
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bne cr6,0x8312b3c8
	if (!cr6.eq) goto loc_8312B3C8;
	// lwz r10,5812(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 5812);
	// addi r11,r28,2
	r11.s64 = r28.s64 + 2;
	// lhz r9,5808(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 5808);
	// cmpwi cr6,r10,13
	cr6.compare<int32_t>(ctx.r10.s32, 13, xer);
	// ble cr6,0x8312b3a8
	if (!cr6.gt) goto loc_8312B3A8;
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi r9,r11,16
	ctx.r9.u64 = r11.u32 & 0xFFFF;
	// clrlwi r11,r10,16
	r11.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r11,5808(r31)
	PPC_STORE_U16(r31.u32 + 5808, r11.u16);
	// stbx r11,r7,r8
	PPC_STORE_U8(ctx.r7.u32 + ctx.r8.u32, r11.u8);
	// lbz r10,5808(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 5808);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stbx r10,r11,r8
	PPC_STORE_U8(r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r11,5812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 5812);
	// subfic r8,r11,16
	xer.ca = r11.u32 <= 16;
	ctx.r8.s64 = 16 - r11.s64;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,-13
	r11.s64 = r11.s64 + -13;
	// srw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// stw r11,5812(r31)
	PPC_STORE_U32(r31.u32 + 5812, r11.u32);
	// sth r9,5808(r31)
	PPC_STORE_U16(r31.u32 + 5808, ctx.r9.u16);
	// b 0x8312b3bc
	goto loc_8312B3BC;
loc_8312B3A8:
	// slw r11,r11,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// addi r8,r10,3
	ctx.r8.s64 = ctx.r10.s64 + 3;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// stw r8,5812(r31)
	PPC_STORE_U32(r31.u32 + 5812, ctx.r8.u32);
	// sth r11,5808(r31)
	PPC_STORE_U16(r31.u32 + 5808, r11.u16);
loc_8312B3BC:
	// addi r5,r27,1372
	ctx.r5.s64 = r27.s64 + 1372;
	// addi r4,r27,220
	ctx.r4.s64 = r27.s64 + 220;
	// b 0x8312b478
	goto loc_8312B478;
loc_8312B3C8:
	// lwz r9,5812(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 5812);
	// addi r11,r28,4
	r11.s64 = r28.s64 + 4;
	// lhz r8,5808(r31)
	ctx.r8.u64 = PPC_LOAD_U16(r31.u32 + 5808);
	// cmpwi cr6,r9,13
	cr6.compare<int32_t>(ctx.r9.s32, 13, xer);
	// ble cr6,0x8312b440
	if (!cr6.gt) goto loc_8312B440;
	// slw r9,r11,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi r8,r11,16
	ctx.r8.u64 = r11.u32 & 0xFFFF;
	// clrlwi r11,r9,16
	r11.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r11,5808(r31)
	PPC_STORE_U16(r31.u32 + 5808, r11.u16);
	// stbx r11,r6,r7
	PPC_STORE_U8(ctx.r6.u32 + ctx.r7.u32, r11.u8);
	// lbz r9,5808(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 5808);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stbx r9,r11,r7
	PPC_STORE_U8(r11.u32 + ctx.r7.u32, ctx.r9.u8);
	// lwz r11,5812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 5812);
	// subfic r9,r11,16
	xer.ca = r11.u32 <= 16;
	ctx.r9.s64 = 16 - r11.s64;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// addi r11,r11,-13
	r11.s64 = r11.s64 + -13;
	// srw r9,r8,r7
	ctx.r9.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r7.u8 & 0x3F));
	// stw r11,5812(r31)
	PPC_STORE_U32(r31.u32 + 5812, r11.u32);
	// sth r9,5808(r31)
	PPC_STORE_U16(r31.u32 + 5808, ctx.r9.u16);
	// b 0x8312b454
	goto loc_8312B454;
loc_8312B440:
	// slw r11,r11,r9
	r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r9.u8 & 0x3F));
	// addi r7,r9,3
	ctx.r7.s64 = ctx.r9.s64 + 3;
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// stw r7,5812(r31)
	PPC_STORE_U32(r31.u32 + 5812, ctx.r7.u32);
	// sth r11,5808(r31)
	PPC_STORE_U16(r31.u32 + 5808, r11.u16);
loc_8312B454:
	// lwz r9,2848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 2848);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// lwz r11,2836(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2836);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// bl 0x8312a630
	sub_8312A630(ctx, base);
	// addi r5,r31,2432
	ctx.r5.s64 = r31.s64 + 2432;
	// addi r4,r31,140
	ctx.r4.s64 = r31.s64 + 140;
loc_8312B478:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8312a8e8
	sub_8312A8E8(ctx, base);
loc_8312B480:
	// addi r10,r31,140
	ctx.r10.s64 = r31.s64 + 140;
	// li r11,286
	r11.s64 = 286;
loc_8312B488:
	// sth r26,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r26.u16);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x8312b488
	if (!cr0.eq) goto loc_8312B488;
	// addi r10,r31,2432
	ctx.r10.s64 = r31.s64 + 2432;
	// li r11,30
	r11.s64 = 30;
loc_8312B4A0:
	// sth r26,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r26.u16);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x8312b4a0
	if (!cr0.eq) goto loc_8312B4A0;
	// addi r10,r31,2676
	ctx.r10.s64 = r31.s64 + 2676;
	// li r11,19
	r11.s64 = 19;
loc_8312B4B8:
	// sth r26,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r26.u16);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x8312b4b8
	if (!cr0.eq) goto loc_8312B4B8;
	// li r11,1
	r11.s64 = 1;
	// stw r26,5796(r31)
	PPC_STORE_U32(r31.u32 + 5796, r26.u32);
	// stw r26,5792(r31)
	PPC_STORE_U32(r31.u32 + 5792, r26.u32);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// sth r11,1164(r31)
	PPC_STORE_U16(r31.u32 + 1164, r11.u16);
	// stw r26,5800(r31)
	PPC_STORE_U32(r31.u32 + 5800, r26.u32);
	// stw r26,5784(r31)
	PPC_STORE_U32(r31.u32 + 5784, r26.u32);
	// beq cr6,0x8312b54c
	if (cr6.eq) goto loc_8312B54C;
	// lwz r11,5812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 5812);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// ble cr6,0x8312b520
	if (!cr6.gt) goto loc_8312B520;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lhz r10,5808(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 5808);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + r11.u32, ctx.r10.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lbz r9,5808(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 5808);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stbx r9,r11,r10
	PPC_STORE_U8(r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// b 0x8312b538
	goto loc_8312B538;
loc_8312B520:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8312b544
	if (!cr6.gt) goto loc_8312B544;
	// lhz r11,5808(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 5808);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stbx r11,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, r11.u8);
loc_8312B538:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
loc_8312B544:
	// sth r26,5808(r31)
	PPC_STORE_U16(r31.u32 + 5808, r26.u16);
	// stw r26,5812(r31)
	PPC_STORE_U32(r31.u32 + 5812, r26.u32);
loc_8312B54C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_8312B558"))) PPC_WEAK_FUNC(sub_8312B558);
PPC_FUNC_IMPL(__imp__sub_8312B558) {
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
	// mullw r30,r4,r5
	r30.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8312b590
	if (cr0.eq) goto loc_8312B590;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
loc_8312B590:
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

__attribute__((alias("__imp__sub_8312B5B0"))) PPC_WEAK_FUNC(sub_8312B5B0);
PPC_FUNC_IMPL(__imp__sub_8312B5B0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x830e61f8
	sub_830E61F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312B5B8"))) PPC_WEAK_FUNC(sub_8312B5B8);
PPC_FUNC_IMPL(__imp__sub_8312B5B8) {
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
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8312b5e4
	if (cr6.eq) goto loc_8312B5E4;
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
loc_8312B5E4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x8312b5f8
	if (cr6.eq) goto loc_8312B5F8;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bne cr6,0x8312b60c
	if (!cr6.eq) goto loc_8312B60C;
loc_8312B5F8:
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8312B60C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// bne cr6,0x8312b624
	if (!cr6.eq) goto loc_8312B624;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82cd4b08
	sub_82CD4B08(ctx, base);
loc_8312B624:
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// stw r9,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r9.u32);
	// stw r9,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// beq cr6,0x8312b668
	if (cr6.eq) goto loc_8312B668;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r3.u32);
	// stw r3,48(r30)
	PPC_STORE_U32(r30.u32 + 48, ctx.r3.u32);
loc_8312B668:
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

__attribute__((alias("__imp__sub_8312B680"))) PPC_WEAK_FUNC(sub_8312B680);
PPC_FUNC_IMPL(__imp__sub_8312B680) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x8312b6c0
	if (!cr0.eq) goto loc_8312B6C0;
loc_8312B6B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8312b77c
	goto loc_8312B77C;
loc_8312B6C0:
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// li r5,1440
	ctx.r5.s64 = 1440;
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// li r4,8
	ctx.r4.s64 = 8;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// bne 0x8312b6fc
	if (!cr0.eq) goto loc_8312B6FC;
loc_8312B6E4:
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8312b6b8
	goto loc_8312B6B8;
loc_8312B6FC:
	// li r11,-1
	r11.s64 = -1;
	// twllei r29,0
	// divwu r11,r11,r29
	r11.u32 = r11.u32 / r29.u32;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bge cr6,0x8312b718
	if (!cr6.lt) goto loc_8312B718;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8312b730
	goto loc_8312B730;
loc_8312B718:
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8312B730:
	// stw r3,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8312b754
	if (!cr6.eq) goto loc_8312B754;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8312b6e4
	goto loc_8312B6E4;
loc_8312B754:
	// add r11,r3,r29
	r11.u64 = ctx.r3.u64 + r29.u64;
	// stw r28,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r28.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8312b5b8
	sub_8312B5B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8312B77C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8312B788"))) PPC_WEAK_FUNC(sub_8312B788);
PPC_FUNC_IMPL(__imp__sub_8312B788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// bl 0x831b0af8
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// lwz r26,52(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r24,4(r30)
	r24.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// lwz r27,32(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r28,28(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bge cr6,0x8312b7cc
	if (!cr6.lt) goto loc_8312B7CC;
	// subf r11,r26,r11
	r11.s64 = r11.s64 - r26.s64;
	// addi r23,r11,-1
	r23.s64 = r11.s64 + -1;
	// b 0x8312b7d4
	goto loc_8312B7D4;
loc_8312B7CC:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// subf r23,r26,r11
	r23.s64 = r11.s64 - r26.s64;
loc_8312B7D4:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r9,9
	cr6.compare<uint32_t>(ctx.r9.u32, 9, xer);
	// bgt cr6,0x8312bedc
	if (cr6.gt) goto loc_8312BEDC;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r21,0
	r21.s64 = 0;
	// li r18,6
	r18.s64 = 6;
	// li r16,7
	r16.s64 = 7;
	// li r20,9
	r20.s64 = 9;
	// addi r19,r11,-1808
	r19.s64 = r11.s64 + -1808;
	// addi r17,r10,-6784
	r17.s64 = ctx.r10.s64 + -6784;
loc_8312B800:
	// lis r12,-32231
	r12.s64 = -2112290816;
	// addi r12,r12,-6704
	r12.s64 = r12.s64 + -6704;
	// rlwinm r0,r9,1,0,30
	r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	r0.u64 = PPC_LOAD_U16(r12.u32 + r0.u32);
	// lis r12,-31981
	r12.s64 = -2095906816;
	// addi r12,r12,-18392
	r12.s64 = r12.s64 + -18392;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (ctx.r9.u64) {
	case 0:
		goto loc_8312B84C;
	case 1:
		goto loc_8312B940;
	case 2:
		goto loc_8312B994;
	case 3:
		goto loc_8312BACC;
	case 4:
		goto loc_8312BBA8;
	case 5:
		goto loc_8312BC24;
	case 6:
		goto loc_8312BE38;
	case 7:
		goto loc_8312BFD0;
	case 8:
		goto loc_8312C000;
	case 9:
		goto loc_8312C008;
	default:
		__builtin_unreachable();
	}
loc_8312B828:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x8312bf1c
	if (cr6.eq) goto loc_8312BF1C;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// mr r22,r21
	r22.u64 = r21.u64;
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// slw r11,r11,r28
	r11.u64 = r28.u8 & 0x20 ? 0 : (r11.u32 << (r28.u8 & 0x3F));
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// or r27,r11,r27
	r27.u64 = r11.u64 | r27.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_8312B84C:
	// cmplwi cr6,r28,3
	cr6.compare<uint32_t>(r28.u32, 3, xer);
	// blt cr6,0x8312b828
	if (cr6.lt) goto loc_8312B828;
	// clrlwi r10,r27,31
	ctx.r10.u64 = r27.u32 & 0x1;
	// rlwinm r11,r27,31,30,31
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 31) & 0x3;
	// stw r10,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x8312b8fc
	if (cr6.lt) goto loc_8312B8FC;
	// beq cr6,0x8312b8b0
	if (cr6.eq) goto loc_8312B8B0;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x8312b8a0
	if (cr6.lt) goto loc_8312B8A0;
	// bne cr6,0x8312bed0
	if (!cr6.eq) goto loc_8312BED0;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// stw r20,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r20.u32);
	// rlwinm r10,r27,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r11,r11,17692
	r11.s64 = r11.s64 + 17692;
	// addi r9,r28,-3
	ctx.r9.s64 = r28.s64 + -3;
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// li r5,-3
	ctx.r5.s64 = -3;
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// stw r9,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r9.u32);
	// b 0x8312bee8
	goto loc_8312BEE8;
loc_8312B8A0:
	// li r11,3
	r11.s64 = 3;
	// rlwinm r27,r27,29,3,31
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r28,r28,-3
	r28.s64 = r28.s64 + -3;
	// b 0x8312b98c
	goto loc_8312B98C;
loc_8312B8B0:
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x8312ce98
	sub_8312CE98(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x8312c090
	sub_8312C090(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8312bf3c
	if (cr0.eq) goto loc_8312BF3C;
	// rlwinm r27,r27,29,3,31
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r18,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r18.u32);
	// addi r28,r28,-3
	r28.s64 = r28.s64 + -3;
	// b 0x8312bed0
	goto loc_8312BED0;
loc_8312B8FC:
	// addi r11,r28,-3
	r11.s64 = r28.s64 + -3;
	// rlwinm r10,r27,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r9,r11,29
	ctx.r9.u64 = r11.u32 & 0x7;
	// li r8,1
	ctx.r8.s64 = 1;
	// srw r27,r10,r9
	r27.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// subf r28,r9,r11
	r28.s64 = r11.s64 - ctx.r9.s64;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// b 0x8312bed0
	goto loc_8312BED0;
loc_8312B91C:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x8312bf44
	if (cr6.eq) goto loc_8312BF44;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// mr r22,r21
	r22.u64 = r21.u64;
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// slw r11,r11,r28
	r11.u64 = r28.u8 & 0x20 ? 0 : (r11.u32 << (r28.u8 & 0x3F));
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// or r27,r11,r27
	r27.u64 = r11.u64 | r27.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_8312B940:
	// cmplwi cr6,r28,32
	cr6.compare<uint32_t>(r28.u32, 32, xer);
	// blt cr6,0x8312b91c
	if (cr6.lt) goto loc_8312B91C;
	// not r10,r27
	ctx.r10.u64 = ~r27.u64;
	// clrlwi r11,r27,16
	r11.u64 = r27.u32 & 0xFFFF;
	// rlwinm r10,r10,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x8312bf58
	if (!cr6.eq) goto loc_8312BF58;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// mr r28,r21
	r28.u64 = r21.u64;
	// mr r27,r21
	r27.u64 = r21.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8312b97c
	if (cr6.eq) goto loc_8312B97C;
	// li r11,2
	r11.s64 = 2;
	// b 0x8312b98c
	goto loc_8312B98C;
loc_8312B97C:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r11,29
	r11.u64 = r11.u32 & 0x7;
loc_8312B98C:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x8312bed0
	goto loc_8312BED0;
loc_8312B994:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x8312bf44
	if (cr6.eq) goto loc_8312BF44;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// bne cr6,0x8312ba54
	if (!cr6.eq) goto loc_8312BA54;
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplw cr6,r26,r9
	cr6.compare<uint32_t>(r26.u32, ctx.r9.u32, xer);
	// bne cr6,0x8312b9e0
	if (!cr6.eq) goto loc_8312B9E0;
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x8312b9e0
	if (cr6.eq) goto loc_8312B9E0;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// bge cr6,0x8312b9d4
	if (!cr6.lt) goto loc_8312B9D4;
	// subf r11,r26,r11
	r11.s64 = r11.s64 - r26.s64;
	// addi r23,r11,-1
	r23.s64 = r11.s64 + -1;
	// b 0x8312b9d8
	goto loc_8312B9D8;
loc_8312B9D4:
	// subf r23,r26,r9
	r23.s64 = ctx.r9.s64 - r26.s64;
loc_8312B9D8:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// bne cr6,0x8312ba54
	if (!cr6.eq) goto loc_8312BA54;
loc_8312B9E0:
	// stw r26,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r26.u32);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8312cec8
	sub_8312CEC8(ctx, base);
	// lwz r26,52(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// bge cr6,0x8312ba14
	if (!cr6.lt) goto loc_8312BA14;
	// subf r10,r26,r11
	ctx.r10.s64 = r11.s64 - r26.s64;
	// addi r23,r10,-1
	r23.s64 = ctx.r10.s64 + -1;
	// b 0x8312ba1c
	goto loc_8312BA1C;
loc_8312BA14:
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// subf r23,r26,r10
	r23.s64 = ctx.r10.s64 - r26.s64;
loc_8312BA1C:
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplw cr6,r26,r9
	cr6.compare<uint32_t>(r26.u32, ctx.r9.u32, xer);
	// bne cr6,0x8312ba4c
	if (!cr6.eq) goto loc_8312BA4C;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x8312ba4c
	if (cr6.eq) goto loc_8312BA4C;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// bge cr6,0x8312ba48
	if (!cr6.lt) goto loc_8312BA48;
	// subf r11,r26,r11
	r11.s64 = r11.s64 - r26.s64;
	// addi r23,r11,-1
	r23.s64 = r11.s64 + -1;
	// b 0x8312ba4c
	goto loc_8312BA4C;
loc_8312BA48:
	// subf r23,r26,r9
	r23.s64 = ctx.r9.s64 - r26.s64;
loc_8312BA4C:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x8312bee0
	if (cr6.eq) goto loc_8312BEE0;
loc_8312BA54:
	// lwz r25,4(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r22,r21
	r22.u64 = r21.u64;
	// cmplw cr6,r25,r24
	cr6.compare<uint32_t>(r25.u32, r24.u32, xer);
	// ble cr6,0x8312ba68
	if (!cr6.gt) goto loc_8312BA68;
	// mr r25,r24
	r25.u64 = r24.u64;
loc_8312BA68:
	// cmplw cr6,r25,r23
	cr6.compare<uint32_t>(r25.u32, r23.u32, xer);
	// ble cr6,0x8312ba74
	if (!cr6.gt) goto loc_8312BA74;
	// mr r25,r23
	r25.u64 = r23.u64;
loc_8312BA74:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// add r29,r25,r29
	r29.u64 = r25.u64 + r29.u64;
	// subf. r11,r25,r11
	r11.s64 = r11.s64 - r25.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// subf r24,r25,r24
	r24.s64 = r24.s64 - r25.s64;
	// add r26,r25,r26
	r26.u64 = r25.u64 + r26.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// subf r23,r25,r23
	r23.s64 = r23.s64 - r25.s64;
	// bne 0x8312bed0
	if (!cr0.eq) goto loc_8312BED0;
	// b 0x8312b97c
	goto loc_8312B97C;
loc_8312BAA8:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x8312bf44
	if (cr6.eq) goto loc_8312BF44;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// mr r22,r21
	r22.u64 = r21.u64;
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// slw r11,r11,r28
	r11.u64 = r28.u8 & 0x20 ? 0 : (r11.u32 << (r28.u8 & 0x3F));
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// or r27,r11,r27
	r27.u64 = r11.u64 | r27.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_8312BACC:
	// cmplwi cr6,r28,14
	cr6.compare<uint32_t>(r28.u32, 14, xer);
	// blt cr6,0x8312baa8
	if (cr6.lt) goto loc_8312BAA8;
	// clrlwi r11,r27,18
	r11.u64 = r27.u32 & 0x3FFF;
	// clrlwi r10,r27,27
	ctx.r10.u64 = r27.u32 & 0x1F;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// cmplwi cr6,r10,29
	cr6.compare<uint32_t>(ctx.r10.u32, 29, xer);
	// bgt cr6,0x8312bf70
	if (cr6.gt) goto loc_8312BF70;
	// rlwinm r11,r11,27,27,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1F;
	// cmplwi cr6,r11,29
	cr6.compare<uint32_t>(r11.u32, 29, xer);
	// bgt cr6,0x8312bf70
	if (cr6.gt) goto loc_8312BF70;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// addi r4,r11,258
	ctx.r4.s64 = r11.s64 + 258;
	// ori r11,r10,65535
	r11.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x8312bb14
	if (!cr6.gt) goto loc_8312BB14;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// b 0x8312bb28
	goto loc_8312BB28;
loc_8312BB14:
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8312BB28:
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8312bf3c
	if (cr6.eq) goto loc_8312BF3C;
	// li r11,4
	r11.s64 = 4;
	// stw r21,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r21.u32);
	// rlwinm r27,r27,18,14,31
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 18) & 0x3FFFF;
	// addi r28,r28,-14
	r28.s64 = r28.s64 + -14;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x8312bba8
	goto loc_8312BBA8;
loc_8312BB4C:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x8312bf44
	if (cr6.eq) goto loc_8312BF44;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// mr r22,r21
	r22.u64 = r21.u64;
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// slw r11,r11,r28
	r11.u64 = r28.u8 & 0x20 ? 0 : (r11.u32 << (r28.u8 & 0x3F));
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// or r27,r11,r27
	r27.u64 = r11.u64 | r27.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_8312BB70:
	// cmplwi cr6,r28,3
	cr6.compare<uint32_t>(r28.u32, 3, xer);
	// blt cr6,0x8312bb4c
	if (cr6.lt) goto loc_8312BB4C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi r10,r27,29
	ctx.r10.u64 = r27.u32 & 0x7;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm r27,r27,29,3,31
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r28,-3
	r28.s64 = r28.s64 + -3;
	// lwzx r11,r11,r17
	r11.u64 = PPC_LOAD_U32(r11.u32 + r17.u32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_8312BBA8:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,22,10,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 22) & 0x3FFFFF;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x8312bb70
	if (cr6.lt) goto loc_8312BB70;
	// b 0x8312bbe8
	goto loc_8312BBE8;
loc_8312BBC4:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r17
	r11.u64 = PPC_LOAD_U32(r11.u32 + r17.u32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r21,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r21.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_8312BBE8:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,19
	cr6.compare<uint32_t>(r11.u32, 19, xer);
	// blt cr6,0x8312bbc4
	if (cr6.lt) goto loc_8312BBC4;
	// stw r16,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r16.u32);
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r6,36(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r5,r31,20
	ctx.r5.s64 = r31.s64 + 20;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x8312cbf8
	sub_8312CBF8(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// bne 0x8312bf7c
	if (!cr0.eq) goto loc_8312BF7C;
	// li r11,5
	r11.s64 = 5;
	// stw r21,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r21.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8312BC24:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r11,27,27,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1F;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// b 0x8312bda4
	goto loc_8312BDA4;
loc_8312BC38:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// b 0x8312bc64
	goto loc_8312BC64;
loc_8312BC40:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x8312bf44
	if (cr6.eq) goto loc_8312BF44;
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// mr r22,r21
	r22.u64 = r21.u64;
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// slw r10,r10,r28
	ctx.r10.u64 = r28.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r28.u8 & 0x3F));
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// or r27,r10,r27
	r27.u64 = ctx.r10.u64 | r27.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_8312BC64:
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x8312bc40
	if (cr6.lt) goto loc_8312BC40;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwzx r10,r10,r19
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r19.u32);
	// and r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 & r27.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// bge cr6,0x8312bcb8
	if (!cr6.lt) goto loc_8312BCB8;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// srw r27,r27,r10
	r27.u64 = ctx.r10.u8 & 0x20 ? 0 : (r27.u32 >> (ctx.r10.u8 & 0x3F));
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r28,r10,r28
	r28.s64 = r28.s64 - ctx.r10.s64;
	// stwx r5,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, ctx.r5.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// b 0x8312bd90
	goto loc_8312BD90;
loc_8312BCB8:
	// cmplwi cr6,r5,18
	cr6.compare<uint32_t>(ctx.r5.u32, 18, xer);
	// bne cr6,0x8312bccc
	if (!cr6.eq) goto loc_8312BCCC;
	// mr r11,r16
	r11.u64 = r16.u64;
	// li r6,11
	ctx.r6.s64 = 11;
	// b 0x8312bcd4
	goto loc_8312BCD4;
loc_8312BCCC:
	// addi r11,r5,-14
	r11.s64 = ctx.r5.s64 + -14;
	// li r6,3
	ctx.r6.s64 = 3;
loc_8312BCD4:
	// add r9,r11,r10
	ctx.r9.u64 = r11.u64 + ctx.r10.u64;
	// b 0x8312bd00
	goto loc_8312BD00;
loc_8312BCDC:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x8312bf44
	if (cr6.eq) goto loc_8312BF44;
	// lbz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// mr r22,r21
	r22.u64 = r21.u64;
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// slw r8,r8,r28
	ctx.r8.u64 = r28.u8 & 0x20 ? 0 : (ctx.r8.u32 << (r28.u8 & 0x3F));
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// or r27,r8,r27
	r27.u64 = ctx.r8.u64 | r27.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_8312BD00:
	// cmplw cr6,r28,r9
	cr6.compare<uint32_t>(r28.u32, ctx.r9.u32, xer);
	// blt cr6,0x8312bcdc
	if (cr6.lt) goto loc_8312BCDC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// srw r4,r27,r10
	ctx.r4.u64 = ctx.r10.u8 & 0x20 ? 0 : (r27.u32 >> (ctx.r10.u8 & 0x3F));
	// lwzx r9,r9,r19
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r19.u32);
	// rlwinm r8,r7,27,27,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1F;
	// clrlwi r7,r7,27
	ctx.r7.u64 = ctx.r7.u32 & 0x1F;
	// and r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 & ctx.r4.u64;
	// subf r3,r11,r28
	ctx.r3.s64 = r28.s64 - r11.s64;
	// srw r27,r4,r11
	r27.u64 = r11.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (r11.u8 & 0x3F));
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// addi r8,r8,258
	ctx.r8.s64 = ctx.r8.s64 + 258;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + r11.u64;
	// subf r28,r10,r3
	r28.s64 = ctx.r3.s64 - ctx.r10.s64;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bgt cr6,0x8312bfa4
	if (cr6.gt) goto loc_8312BFA4;
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// bne cr6,0x8312bd70
	if (!cr6.eq) goto loc_8312BD70;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x8312bfa4
	if (cr6.lt) goto loc_8312BFA4;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r8,-4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// b 0x8312bd74
	goto loc_8312BD74;
loc_8312BD70:
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
loc_8312BD74:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8312BD78:
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwx r8,r10,r7
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x8312bd78
	if (!cr0.eq) goto loc_8312BD78;
loc_8312BD90:
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r10,27,27,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1F;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
loc_8312BDA4:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,258
	r11.s64 = r11.s64 + 258;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// blt cr6,0x8312bc38
	if (cr6.lt) goto loc_8312BC38;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r9,r1,120
	ctx.r9.s64 = ctx.r1.s64 + 120;
	// addi r8,r1,124
	ctx.r8.s64 = ctx.r1.s64 + 124;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// clrlwi r11,r6,27
	r11.u64 = ctx.r6.u32 & 0x1F;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm r4,r6,27,27,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1F;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stw r21,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r21.u32);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// stw r20,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r20.u32);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stw r18,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r18.u32);
	// addi r3,r11,257
	ctx.r3.s64 = r11.s64 + 257;
	// bl 0x8312ccd8
	sub_8312CCD8(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// bne 0x8312bfc4
	if (!cr0.eq) goto loc_8312BFC4;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r5,124(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x8312c090
	sub_8312C090(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8312bf3c
	if (cr0.eq) goto loc_8312BF3C;
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r18,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r18.u32);
loc_8312BE38:
	// stw r28,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r28.u32);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// stw r27,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r27.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r24,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r24.u32);
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// stw r26,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r26.u32);
	// bl 0x8312c0f0
	sub_8312C0F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// bne cr6,0x8312bf0c
	if (!cr6.eq) goto loc_8312BF0C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r22,r21
	r22.u64 = r21.u64;
	// bl 0x82cd4b08
	sub_82CD4B08(ctx, base);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r26,52(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r24,4(r30)
	r24.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// lwz r27,32(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r28,28(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bge cr6,0x8312beb8
	if (!cr6.lt) goto loc_8312BEB8;
	// subf r11,r26,r11
	r11.s64 = r11.s64 - r26.s64;
	// addi r23,r11,-1
	r23.s64 = r11.s64 + -1;
	// b 0x8312bec0
	goto loc_8312BEC0;
loc_8312BEB8:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// subf r23,r26,r11
	r23.s64 = r11.s64 - r26.s64;
loc_8312BEC0:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8312bfcc
	if (!cr6.eq) goto loc_8312BFCC;
	// stw r21,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r21.u32);
loc_8312BED0:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r9,9
	cr6.compare<uint32_t>(ctx.r9.u32, 9, xer);
	// ble cr6,0x8312b800
	if (!cr6.gt) goto loc_8312B800;
loc_8312BEDC:
	// li r5,-2
	ctx.r5.s64 = -2;
loc_8312BEE0:
	// stw r27,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r27.u32);
	// stw r28,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r28.u32);
loc_8312BEE8:
	// stw r24,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r24.u32);
loc_8312BEEC:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_8312BEF8:
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// stw r26,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r26.u32);
loc_8312BF0C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8312cec8
	sub_8312CEC8(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831b0b48
	return;
loc_8312BF1C:
	// stw r27,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r27.u32);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// stw r28,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r28.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r21,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r21.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// b 0x8312bef8
	goto loc_8312BEF8;
loc_8312BF3C:
	// li r5,-4
	ctx.r5.s64 = -4;
	// b 0x8312bee0
	goto loc_8312BEE0;
loc_8312BF44:
	// stw r27,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r27.u32);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// stw r28,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r28.u32);
	// stw r21,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r21.u32);
	// b 0x8312beec
	goto loc_8312BEEC;
loc_8312BF58:
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r11,r11,17660
	r11.s64 = r11.s64 + 17660;
loc_8312BF60:
	// stw r20,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r20.u32);
	// li r5,-3
	ctx.r5.s64 = -3;
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// b 0x8312bee0
	goto loc_8312BEE0;
loc_8312BF70:
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r11,r11,17624
	r11.s64 = r11.s64 + 17624;
	// b 0x8312bf60
	goto loc_8312BF60;
loc_8312BF7C:
	// cmpwi cr6,r25,-3
	cr6.compare<int32_t>(r25.s32, -3, xer);
loc_8312BF80:
	// bne cr6,0x8312bf9c
	if (!cr6.eq) goto loc_8312BF9C;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r20,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r20.u32);
loc_8312BF9C:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// b 0x8312bee0
	goto loc_8312BEE0;
loc_8312BFA4:
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r11,r11,17596
	r11.s64 = r11.s64 + 17596;
	// b 0x8312bf60
	goto loc_8312BF60;
loc_8312BFC4:
	// cmpwi cr6,r25,-3
	cr6.compare<int32_t>(r25.s32, -3, xer);
	// b 0x8312bf80
	goto loc_8312BF80;
loc_8312BFCC:
	// stw r16,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r16.u32);
loc_8312BFD0:
	// stw r26,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r26.u32);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8312cec8
	sub_8312CEC8(ctx, base);
	// lwz r26,52(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// bne cr6,0x8312bee0
	if (!cr6.eq) goto loc_8312BEE0;
	// li r11,8
	r11.s64 = 8;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8312C000:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8312bee0
	goto loc_8312BEE0;
loc_8312C008:
	// li r5,-3
	ctx.r5.s64 = -3;
	// b 0x8312bee0
	goto loc_8312BEE0;
}

__attribute__((alias("__imp__sub_8312C010"))) PPC_WEAK_FUNC(sub_8312C010);
PPC_FUNC_IMPL(__imp__sub_8312C010) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8312b5b8
	sub_8312B5B8(ctx, base);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_8312C090"))) PPC_WEAK_FUNC(sub_8312C090);
PPC_FUNC_IMPL(__imp__sub_8312C090) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,40(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,32(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8312c0e4
	if (cr0.eq) goto loc_8312C0E4;
	// li r11,0
	r11.s64 = 0;
	// stw r29,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r29.u32);
	// stw r28,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r28.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stb r31,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, r31.u8);
	// stb r30,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, r30.u8);
loc_8312C0E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8312C0F0"))) PPC_WEAK_FUNC(sub_8312C0F0);
PPC_FUNC_IMPL(__imp__sub_8312C0F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b0c
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r26,4(r30)
	r26.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// lwz r24,4(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r27,32(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwz r29,28(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// bge cr6,0x8312c134
	if (!cr6.lt) goto loc_8312C134;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// b 0x8312c13c
	goto loc_8312C13C;
loc_8312C134:
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - r11.s64;
loc_8312C13C:
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r9,9
	cr6.compare<uint32_t>(ctx.r9.u32, 9, xer);
	// bgt cr6,0x8312c668
	if (cr6.gt) goto loc_8312C668;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r21,9
	r21.s64 = 9;
	// li r23,0
	r23.s64 = 0;
	// addi r22,r10,-1808
	r22.s64 = ctx.r10.s64 + -1808;
loc_8312C158:
	// lis r12,-32231
	r12.s64 = -2112290816;
	// addi r12,r12,-6680
	r12.s64 = r12.s64 + -6680;
	// rlwinm r0,r9,1,0,30
	r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	r0.u64 = PPC_LOAD_U16(r12.u32 + r0.u32);
	// lis r12,-31981
	r12.s64 = -2095906816;
	// addi r12,r12,-16000
	r12.s64 = r12.s64 + -16000;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (ctx.r9.u64) {
	case 0:
		goto loc_8312C180;
	case 1:
		goto loc_8312C244;
	case 2:
		goto loc_8312C30C;
	case 3:
		goto loc_8312C378;
	case 4:
		goto loc_8312C40C;
	case 5:
		goto loc_8312C468;
	case 6:
		goto loc_8312C590;
	case 7:
		goto loc_8312C6D0;
	case 8:
		goto loc_8312C710;
	case 9:
		goto loc_8312C718;
	default:
		__builtin_unreachable();
	}
loc_8312C180:
	// cmplwi cr6,r7,258
	cr6.compare<uint32_t>(ctx.r7.u32, 258, xer);
	// blt cr6,0x8312c22c
	if (cr6.lt) goto loc_8312C22C;
	// cmplwi cr6,r24,10
	cr6.compare<uint32_t>(r24.u32, 10, xer);
	// blt cr6,0x8312c22c
	if (cr6.lt) goto loc_8312C22C;
	// stw r27,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r27.u32);
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// stw r29,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r29.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r9,r9,r28
	ctx.r9.s64 = r28.s64 - ctx.r9.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r24,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r24.u32);
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r11,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r11.u32);
	// lwz r6,24(r26)
	ctx.r6.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// lwz r5,20(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + 20);
	// lbz r4,17(r26)
	ctx.r4.u64 = PPC_LOAD_U8(r26.u32 + 17);
	// lbz r3,16(r26)
	ctx.r3.u64 = PPC_LOAD_U8(r26.u32 + 16);
	// bl 0x8312d028
	sub_8312D028(ctx, base);
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r24,4(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// lwz r27,32(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwz r29,28(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// bge cr6,0x8312c204
	if (!cr6.lt) goto loc_8312C204;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// b 0x8312c20c
	goto loc_8312C20C;
loc_8312C204:
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - r11.s64;
loc_8312C20C:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x8312c22c
	if (cr6.eq) goto loc_8312C22C;
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// li r10,7
	ctx.r10.s64 = 7;
	// beq cr6,0x8312c224
	if (cr6.eq) goto loc_8312C224;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
loc_8312C224:
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x8312c65c
	goto loc_8312C65C;
loc_8312C22C:
	// lbz r10,16(r26)
	ctx.r10.u64 = PPC_LOAD_U8(r26.u32 + 16);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,20(r26)
	ctx.r8.u64 = PPC_LOAD_U32(r26.u32 + 20);
	// stw r9,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r9.u32);
	// stw r10,12(r26)
	PPC_STORE_U32(r26.u32 + 12, ctx.r10.u32);
	// stw r8,8(r26)
	PPC_STORE_U32(r26.u32 + 8, ctx.r8.u32);
loc_8312C244:
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// b 0x8312c270
	goto loc_8312C270;
loc_8312C24C:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x8312c6a8
	if (cr6.eq) goto loc_8312C6A8;
	// lbz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U8(r28.u32 + 0);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// slw r9,r9,r29
	ctx.r9.u64 = r29.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r29.u8 & 0x3F));
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// or r27,r9,r27
	r27.u64 = ctx.r9.u64 | r27.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_8312C270:
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// blt cr6,0x8312c24c
	if (cr6.lt) goto loc_8312C24C;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// lwzx r9,r9,r22
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r22.u32);
	// and r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 & r27.u64;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r8,1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// srw r27,r27,r8
	r27.u64 = ctx.r8.u8 & 0x20 ? 0 : (r27.u32 >> (ctx.r8.u8 & 0x3F));
	// subf r29,r8,r29
	r29.s64 = r29.s64 - ctx.r8.s64;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x8312c2bc
	if (!cr0.eq) goto loc_8312C2BC;
	// li r9,6
	ctx.r9.s64 = 6;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r9.u32);
loc_8312C2B4:
	// stw r10,8(r26)
	PPC_STORE_U32(r26.u32 + 8, ctx.r10.u32);
	// b 0x8312c65c
	goto loc_8312C65C;
loc_8312C2BC:
	// rlwinm. r8,r9,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x8312c2e0
	if (cr0.eq) goto loc_8312C2E0;
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r9,8(r26)
	PPC_STORE_U32(r26.u32 + 8, ctx.r9.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,4(r26)
	PPC_STORE_U32(r26.u32 + 4, ctx.r10.u32);
	// stw r8,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r8.u32);
	// b 0x8312c65c
	goto loc_8312C65C;
loc_8312C2E0:
	// rlwinm. r8,r9,0,25,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x8312c2fc
	if (!cr0.eq) goto loc_8312C2FC;
loc_8312C2E8:
	// stw r9,12(r26)
	PPC_STORE_U32(r26.u32 + 12, ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x8312c2b4
	goto loc_8312C2B4;
loc_8312C2FC:
	// rlwinm. r10,r9,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8312c6b8
	if (cr0.eq) goto loc_8312C6B8;
	// li r10,7
	ctx.r10.s64 = 7;
	// b 0x8312c224
	goto loc_8312C224;
loc_8312C30C:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// b 0x8312c338
	goto loc_8312C338;
loc_8312C314:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x8312c6a8
	if (cr6.eq) goto loc_8312C6A8;
	// lbz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U8(r28.u32 + 0);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// slw r9,r9,r29
	ctx.r9.u64 = r29.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r29.u8 & 0x3F));
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// or r27,r9,r27
	r27.u64 = ctx.r9.u64 | r27.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_8312C338:
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// blt cr6,0x8312c314
	if (cr6.lt) goto loc_8312C314;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lbz r6,17(r26)
	ctx.r6.u64 = PPC_LOAD_U8(r26.u32 + 17);
	// subf r29,r10,r29
	r29.s64 = r29.s64 - ctx.r10.s64;
	// lwz r3,24(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwzx r8,r8,r22
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + r22.u32);
	// stw r6,12(r26)
	PPC_STORE_U32(r26.u32 + 12, ctx.r6.u32);
	// and r8,r8,r27
	ctx.r8.u64 = ctx.r8.u64 & r27.u64;
	// stw r3,8(r26)
	PPC_STORE_U32(r26.u32 + 8, ctx.r3.u32);
	// srw r27,r27,r10
	r27.u64 = ctx.r10.u8 & 0x20 ? 0 : (r27.u32 >> (ctx.r10.u8 & 0x3F));
	// stw r4,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r4.u32);
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r10,4(r26)
	PPC_STORE_U32(r26.u32 + 4, ctx.r10.u32);
loc_8312C378:
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// b 0x8312c3a4
	goto loc_8312C3A4;
loc_8312C380:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x8312c6a8
	if (cr6.eq) goto loc_8312C6A8;
	// lbz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U8(r28.u32 + 0);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// slw r9,r9,r29
	ctx.r9.u64 = r29.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r29.u8 & 0x3F));
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// or r27,r9,r27
	r27.u64 = ctx.r9.u64 | r27.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_8312C3A4:
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// blt cr6,0x8312c380
	if (cr6.lt) goto loc_8312C380;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// lwzx r9,r9,r22
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r22.u32);
	// and r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 & r27.u64;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r8,1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// srw r27,r27,r8
	r27.u64 = ctx.r8.u8 & 0x20 ? 0 : (r27.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwinm. r6,r9,0,27,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// subf r29,r8,r29
	r29.s64 = r29.s64 - ctx.r8.s64;
	// beq 0x8312c3f8
	if (cr0.eq) goto loc_8312C3F8;
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r9,8(r26)
	PPC_STORE_U32(r26.u32 + 8, ctx.r9.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r8.u32);
	// stw r10,12(r26)
	PPC_STORE_U32(r26.u32 + 12, ctx.r10.u32);
	// b 0x8312c65c
	goto loc_8312C65C;
loc_8312C3F8:
	// rlwinm. r8,r9,0,25,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x8312c2e8
	if (cr0.eq) goto loc_8312C2E8;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r10,r10,17784
	ctx.r10.s64 = ctx.r10.s64 + 17784;
	// b 0x8312c6c0
	goto loc_8312C6C0;
loc_8312C40C:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// b 0x8312c438
	goto loc_8312C438;
loc_8312C414:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x8312c6a8
	if (cr6.eq) goto loc_8312C6A8;
	// lbz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U8(r28.u32 + 0);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// slw r9,r9,r29
	ctx.r9.u64 = r29.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r29.u8 & 0x3F));
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// or r27,r9,r27
	r27.u64 = ctx.r9.u64 | r27.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_8312C438:
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// blt cr6,0x8312c414
	if (cr6.lt) goto loc_8312C414;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,12(r26)
	ctx.r8.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// subf r29,r10,r29
	r29.s64 = r29.s64 - ctx.r10.s64;
	// li r6,5
	ctx.r6.s64 = 5;
	// lwzx r9,r9,r22
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r22.u32);
	// stw r6,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r6.u32);
	// and r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 & r27.u64;
	// srw r27,r27,r10
	r27.u64 = ctx.r10.u8 & 0x20 ? 0 : (r27.u32 >> (ctx.r10.u8 & 0x3F));
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r10,12(r26)
	PPC_STORE_U32(r26.u32 + 12, ctx.r10.u32);
loc_8312C468:
	// lwz r9,12(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// subf r25,r9,r11
	r25.s64 = r11.s64 - ctx.r9.s64;
	// cmplw cr6,r25,r10
	cr6.compare<uint32_t>(r25.u32, ctx.r10.u32, xer);
	// bge cr6,0x8312c580
	if (!cr6.lt) goto loc_8312C580;
	// lwz r8,44(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
loc_8312C488:
	// add r25,r10,r25
	r25.u64 = ctx.r10.u64 + r25.u64;
	// cmplw cr6,r25,r9
	cr6.compare<uint32_t>(r25.u32, ctx.r9.u32, xer);
	// blt cr6,0x8312c488
	if (cr6.lt) goto loc_8312C488;
	// b 0x8312c580
	goto loc_8312C580;
loc_8312C498:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8312c54c
	if (!cr6.eq) goto loc_8312C54C;
	// lwz r8,44(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x8312c4dc
	if (!cr6.eq) goto loc_8312C4DC;
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x8312c4dc
	if (cr6.eq) goto loc_8312C4DC;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// bge cr6,0x8312c4d0
	if (!cr6.lt) goto loc_8312C4D0;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// b 0x8312c4d4
	goto loc_8312C4D4;
loc_8312C4D0:
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - r11.s64;
loc_8312C4D4:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8312c54c
	if (!cr6.eq) goto loc_8312C54C;
loc_8312C4DC:
	// stw r11,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8312cec8
	sub_8312CEC8(ctx, base);
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8312c50c
	if (!cr6.lt) goto loc_8312C50C;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// b 0x8312c514
	goto loc_8312C514;
loc_8312C50C:
	// lwz r9,44(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - r11.s64;
loc_8312C514:
	// lwz r8,44(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x8312c544
	if (!cr6.eq) goto loc_8312C544;
	// lwz r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x8312c544
	if (cr6.eq) goto loc_8312C544;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// bge cr6,0x8312c540
	if (!cr6.lt) goto loc_8312C540;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// b 0x8312c544
	goto loc_8312C544;
loc_8312C540:
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - r11.s64;
loc_8312C544:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8312c66c
	if (cr6.eq) goto loc_8312C66C;
loc_8312C54C:
	// lbz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U8(r25.u32 + 0);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplw cr6,r25,r10
	cr6.compare<uint32_t>(r25.u32, ctx.r10.u32, xer);
	// bne cr6,0x8312c574
	if (!cr6.eq) goto loc_8312C574;
	// lwz r25,40(r30)
	r25.u64 = PPC_LOAD_U32(r30.u32 + 40);
loc_8312C574:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r26)
	PPC_STORE_U32(r26.u32 + 4, ctx.r10.u32);
loc_8312C580:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8312c498
	if (!cr6.eq) goto loc_8312C498;
	// b 0x8312c658
	goto loc_8312C658;
loc_8312C590:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8312c644
	if (!cr6.eq) goto loc_8312C644;
	// lwz r8,44(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x8312c5d4
	if (!cr6.eq) goto loc_8312C5D4;
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x8312c5d4
	if (cr6.eq) goto loc_8312C5D4;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// bge cr6,0x8312c5c8
	if (!cr6.lt) goto loc_8312C5C8;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// b 0x8312c5cc
	goto loc_8312C5CC;
loc_8312C5C8:
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - r11.s64;
loc_8312C5CC:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8312c644
	if (!cr6.eq) goto loc_8312C644;
loc_8312C5D4:
	// stw r11,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8312cec8
	sub_8312CEC8(ctx, base);
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8312c604
	if (!cr6.lt) goto loc_8312C604;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// b 0x8312c60c
	goto loc_8312C60C;
loc_8312C604:
	// lwz r9,44(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - r11.s64;
loc_8312C60C:
	// lwz r8,44(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x8312c63c
	if (!cr6.eq) goto loc_8312C63C;
	// lwz r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x8312c63c
	if (cr6.eq) goto loc_8312C63C;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// bge cr6,0x8312c638
	if (!cr6.lt) goto loc_8312C638;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// b 0x8312c63c
	goto loc_8312C63C;
loc_8312C638:
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - r11.s64;
loc_8312C63C:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8312c66c
	if (cr6.eq) goto loc_8312C66C;
loc_8312C644:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_8312C658:
	// stw r23,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r23.u32);
loc_8312C65C:
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r9,9
	cr6.compare<uint32_t>(ctx.r9.u32, 9, xer);
	// ble cr6,0x8312c158
	if (!cr6.gt) goto loc_8312C158;
loc_8312C668:
	// li r5,-2
	ctx.r5.s64 = -2;
loc_8312C66C:
	// stw r27,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r27.u32);
	// stw r29,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r29.u32);
	// stw r24,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r24.u32);
loc_8312C678:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// subf r10,r10,r28
	ctx.r10.s64 = r28.s64 - ctx.r10.s64;
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r11,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r11.u32);
	// bl 0x8312cec8
	sub_8312CEC8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b5c
	return;
loc_8312C6A8:
	// stw r27,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r27.u32);
	// stw r29,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r29.u32);
	// stw r23,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r23.u32);
	// b 0x8312c678
	goto loc_8312C678;
loc_8312C6B8:
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r10,r10,17756
	ctx.r10.s64 = ctx.r10.s64 + 17756;
loc_8312C6C0:
	// stw r21,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r21.u32);
	// li r5,-3
	ctx.r5.s64 = -3;
	// stw r10,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// b 0x8312c66c
	goto loc_8312C66C;
loc_8312C6D0:
	// cmplwi cr6,r29,7
	cr6.compare<uint32_t>(r29.u32, 7, xer);
	// ble cr6,0x8312c6e4
	if (!cr6.gt) goto loc_8312C6E4;
	// addi r29,r29,-8
	r29.s64 = r29.s64 + -8;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
loc_8312C6E4:
	// stw r11,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8312cec8
	sub_8312CEC8(ctx, base);
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x8312c66c
	if (!cr6.eq) goto loc_8312C66C;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
loc_8312C710:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8312c66c
	goto loc_8312C66C;
loc_8312C718:
	// li r5,-3
	ctx.r5.s64 = -3;
	// b 0x8312c66c
	goto loc_8312C66C;
}

__attribute__((alias("__imp__sub_8312C720"))) PPC_WEAK_FUNC(sub_8312C720);
PPC_FUNC_IMPL(__imp__sub_8312C720) {
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
	PPCRegister temp{};
	// mflr r12
	// bl 0x831b0af0
	// li r27,0
	r27.s64 = 0;
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// stw r6,44(r1)
	PPC_STORE_U32(ctx.r1.u32 + 44, ctx.r6.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r7,52(r1)
	PPC_STORE_U32(ctx.r1.u32 + 52, ctx.r7.u32);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// stw r8,60(r1)
	PPC_STORE_U32(ctx.r1.u32 + 60, ctx.r8.u32);
	// stw r10,76(r1)
	PPC_STORE_U32(ctx.r1.u32 + 76, ctx.r10.u32);
	// stw r27,-368(r1)
	PPC_STORE_U32(ctx.r1.u32 + -368, r27.u32);
	// stw r27,-364(r1)
	PPC_STORE_U32(ctx.r1.u32 + -364, r27.u32);
	// stw r27,-360(r1)
	PPC_STORE_U32(ctx.r1.u32 + -360, r27.u32);
	// stw r27,-356(r1)
	PPC_STORE_U32(ctx.r1.u32 + -356, r27.u32);
	// stw r27,-352(r1)
	PPC_STORE_U32(ctx.r1.u32 + -352, r27.u32);
	// stw r27,-348(r1)
	PPC_STORE_U32(ctx.r1.u32 + -348, r27.u32);
	// stw r27,-344(r1)
	PPC_STORE_U32(ctx.r1.u32 + -344, r27.u32);
	// stw r27,-340(r1)
	PPC_STORE_U32(ctx.r1.u32 + -340, r27.u32);
	// stw r27,-336(r1)
	PPC_STORE_U32(ctx.r1.u32 + -336, r27.u32);
	// stw r27,-332(r1)
	PPC_STORE_U32(ctx.r1.u32 + -332, r27.u32);
	// stw r27,-328(r1)
	PPC_STORE_U32(ctx.r1.u32 + -328, r27.u32);
	// stw r27,-324(r1)
	PPC_STORE_U32(ctx.r1.u32 + -324, r27.u32);
	// stw r27,-320(r1)
	PPC_STORE_U32(ctx.r1.u32 + -320, r27.u32);
	// stw r27,-316(r1)
	PPC_STORE_U32(ctx.r1.u32 + -316, r27.u32);
	// stw r27,-312(r1)
	PPC_STORE_U32(ctx.r1.u32 + -312, r27.u32);
	// stw r27,-308(r1)
	PPC_STORE_U32(ctx.r1.u32 + -308, r27.u32);
loc_8312C788:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r30,r1,-368
	r30.s64 = ctx.r1.s64 + -368;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// rlwinm r29,r10,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwzx r28,r29,r30
	r28.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// addi r10,r28,1
	ctx.r10.s64 = r28.s64 + 1;
	// stwx r10,r29,r30
	PPC_STORE_U32(r29.u32 + r30.u32, ctx.r10.u32);
	// bne 0x8312c788
	if (!cr0.eq) goto loc_8312C788;
	// lwz r11,-368(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -368);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x8312c7c8
	if (!cr6.eq) goto loc_8312C7C8;
	// stw r27,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r27.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r27,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r27.u32);
	// b 0x8312cbf0
	goto loc_8312CBF0;
loc_8312C7C8:
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r21,0(r9)
	r21.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r31,r1,-364
	r31.s64 = ctx.r1.s64 + -364;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_8312C7D8:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8312c7f4
	if (!cr6.eq) goto loc_8312C7F4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(r11.u32, 15, xer);
	// ble cr6,0x8312c7d8
	if (!cr6.gt) goto loc_8312C7D8;
loc_8312C7F4:
	// mr r17,r11
	r17.u64 = r11.u64;
	// cmplw cr6,r21,r11
	cr6.compare<uint32_t>(r21.u32, r11.u32, xer);
	// bge cr6,0x8312c804
	if (!cr6.lt) goto loc_8312C804;
	// mr r21,r11
	r21.u64 = r11.u64;
loc_8312C804:
	// li r31,15
	r31.s64 = 15;
	// addi r30,r1,-308
	r30.s64 = ctx.r1.s64 + -308;
loc_8312C80C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8312c824
	if (!cr6.eq) goto loc_8312C824;
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,-4
	r30.s64 = r30.s64 + -4;
	// bne 0x8312c80c
	if (!cr0.eq) goto loc_8312C80C;
loc_8312C824:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// cmplw cr6,r21,r31
	cr6.compare<uint32_t>(r21.u32, r31.u32, xer);
	// stw r6,-384(r1)
	PPC_STORE_U32(ctx.r1.u32 + -384, ctx.r6.u32);
	// ble cr6,0x8312c838
	if (!cr6.gt) goto loc_8312C838;
	// mr r21,r31
	r21.u64 = r31.u64;
loc_8312C838:
	// stw r21,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r21.u32);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// slw r30,r8,r11
	r30.u64 = r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (r11.u8 & 0x3F));
	// bge cr6,0x8312c874
	if (!cr6.lt) goto loc_8312C874;
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,-368
	ctx.r9.s64 = ctx.r1.s64 + -368;
	// add r9,r29,r9
	ctx.r9.u64 = r29.u64 + ctx.r9.u64;
loc_8312C854:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// subf. r30,r10,r30
	r30.s64 = r30.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x8312c958
	if (cr0.lt) goto loc_8312C958;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// rlwinm r30,r30,1,0,30
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// blt cr6,0x8312c854
	if (cr6.lt) goto loc_8312C854;
loc_8312C874:
	// rlwinm r29,r31,2,0,29
	r29.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,-368
	ctx.r9.s64 = ctx.r1.s64 + -368;
	// lwzx r11,r29,r9
	r11.u64 = PPC_LOAD_U32(r29.u32 + ctx.r9.u32);
	// subf. r7,r11,r30
	ctx.r7.s64 = r30.s64 - r11.s64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// stw r7,-388(r1)
	PPC_STORE_U32(ctx.r1.u32 + -388, ctx.r7.u32);
	// blt 0x8312c958
	if (cr0.lt) goto loc_8312C958;
	// add r10,r11,r7
	ctx.r10.u64 = r11.u64 + ctx.r7.u64;
	// stw r27,-284(r1)
	PPC_STORE_U32(ctx.r1.u32 + -284, r27.u32);
	// addic. r11,r31,-1
	xer.ca = r31.u32 > 0;
	r11.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stwx r10,r29,r9
	PPC_STORE_U32(r29.u32 + ctx.r9.u32, ctx.r10.u32);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// beq 0x8312c8c8
	if (cr0.eq) goto loc_8312C8C8;
	// mr r31,r27
	r31.u64 = r27.u64;
loc_8312C8A8:
	// addi r10,r1,-364
	ctx.r10.s64 = ctx.r1.s64 + -364;
	// addi r28,r1,-280
	r28.s64 = ctx.r1.s64 + -280;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwzx r30,r31,r10
	r30.u64 = PPC_LOAD_U32(r31.u32 + ctx.r10.u32);
	// add r9,r30,r9
	ctx.r9.u64 = r30.u64 + ctx.r9.u64;
	// stwx r9,r31,r28
	PPC_STORE_U32(r31.u32 + r28.u32, ctx.r9.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x8312c8a8
	if (!cr0.eq) goto loc_8312C8A8;
loc_8312C8C8:
	// lwz r14,92(r1)
	r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r27
	r31.u64 = r27.u64;
loc_8312C8D4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8312c900
	if (cr6.eq) goto loc_8312C900;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,-288
	ctx.r9.s64 = ctx.r1.s64 + -288;
	// lwzx r11,r3,r9
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwx r11,r3,r9
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, r11.u32);
	// stwx r31,r10,r14
	PPC_STORE_U32(ctx.r10.u32 + r14.u32, r31.u32);
loc_8312C900:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(r31.u32, ctx.r4.u32, xer);
	// blt cr6,0x8312c8d4
	if (cr6.lt) goto loc_8312C8D4;
	// addi r11,r1,-288
	r11.s64 = ctx.r1.s64 + -288;
	// stw r27,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, r27.u32);
	// mr r22,r27
	r22.u64 = r27.u64;
	// mr r19,r14
	r19.u64 = r14.u64;
	// li r25,-1
	r25.s64 = -1;
	// mr r31,r27
	r31.u64 = r27.u64;
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// neg r29,r21
	r29.s64 = -r21.s64;
	// stw r27,-288(r1)
	PPC_STORE_U32(ctx.r1.u32 + -288, r27.u32);
	// mr r23,r27
	r23.u64 = r27.u64;
	// cmpw cr6,r17,r6
	cr6.compare<int32_t>(r17.s32, ctx.r6.s32, xer);
	// bgt cr6,0x8312cbd8
	if (cr6.gt) goto loc_8312CBD8;
	// rlwinm r11,r17,2,0,29
	r11.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r16,84(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r1,-368
	ctx.r9.s64 = ctx.r1.s64 + -368;
	// addi r15,r17,-1
	r15.s64 = r17.s64 + -1;
	// add r18,r11,r9
	r18.u64 = r11.u64 + ctx.r9.u64;
loc_8312C950:
	// lwz r20,0(r18)
	r20.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// b 0x8312cbbc
	goto loc_8312CBBC;
loc_8312C958:
	// li r3,-3
	ctx.r3.s64 = -3;
	// b 0x8312cbf0
	goto loc_8312CBF0;
loc_8312C960:
	// add r11,r29,r21
	r11.u64 = r29.u64 + r21.u64;
	// addi r20,r20,-1
	r20.s64 = r20.s64 + -1;
	// cmpw cr6,r17,r11
	cr6.compare<int32_t>(r17.s32, r11.s32, xer);
	// ble cr6,0x8312cab4
	if (!cr6.gt) goto loc_8312CAB4;
	// rlwinm r9,r25,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r24,r20,1
	r24.s64 = r20.s64 + 1;
	// mr r26,r11
	r26.u64 = r11.u64;
	// subf r28,r21,r29
	r28.s64 = r29.s64 - r21.s64;
	// addi r30,r9,-4
	r30.s64 = ctx.r9.s64 + -4;
loc_8312C984:
	// add r29,r29,r21
	r29.u64 = r29.u64 + r21.u64;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// subf r9,r29,r6
	ctx.r9.s64 = ctx.r6.s64 - r29.s64;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// add r28,r28,r21
	r28.u64 = r28.u64 + r21.u64;
	// add r26,r26,r21
	r26.u64 = r26.u64 + r21.u64;
	// cmplw cr6,r9,r21
	cr6.compare<uint32_t>(ctx.r9.u32, r21.u32, xer);
	// ble cr6,0x8312c9a8
	if (!cr6.gt) goto loc_8312C9A8;
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
loc_8312C9A8:
	// subf r11,r29,r17
	r11.s64 = r17.s64 - r29.s64;
	// slw r4,r8,r11
	ctx.r4.u64 = r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (r11.u8 & 0x3F));
	// cmplw cr6,r4,r24
	cr6.compare<uint32_t>(ctx.r4.u32, r24.u32, xer);
	// ble cr6,0x8312c9f4
	if (!cr6.gt) goto loc_8312C9F4;
	// subf r4,r20,r4
	ctx.r4.s64 = ctx.r4.s64 - r20.s64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8312c9f4
	if (!cr6.lt) goto loc_8312C9F4;
	// b 0x8312c9e8
	goto loc_8312C9E8;
loc_8312C9D0:
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r4,r31
	cr6.compare<uint32_t>(ctx.r4.u32, r31.u32, xer);
	// ble cr6,0x8312c9f4
	if (!cr6.gt) goto loc_8312C9F4;
	// subf r4,r31,r4
	ctx.r4.s64 = ctx.r4.s64 - r31.s64;
loc_8312C9E8:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8312c9d0
	if (cr6.lt) goto loc_8312C9D0;
loc_8312C9F4:
	// lwz r9,0(r16)
	ctx.r9.u64 = PPC_LOAD_U32(r16.u32 + 0);
	// slw r23,r8,r11
	r23.u64 = r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (r11.u8 & 0x3F));
	// cmplwi cr6,r9,1440
	cr6.compare<uint32_t>(ctx.r9.u32, 1440, xer);
	// bgt cr6,0x8312c958
	if (cr6.gt) goto loc_8312C958;
	// cmplwi cr6,r23,1440
	cr6.compare<uint32_t>(r23.u32, 1440, xer);
	// bgt cr6,0x8312c958
	if (cr6.gt) goto loc_8312C958;
	// add r4,r9,r23
	ctx.r4.u64 = ctx.r9.u64 + r23.u64;
	// cmplwi cr6,r4,1440
	cr6.compare<uint32_t>(ctx.r4.u32, 1440, xer);
	// bgt cr6,0x8312c958
	if (cr6.gt) goto loc_8312C958;
	// cmpwi cr6,r30,56
	cr6.compare<int32_t>(r30.s32, 56, xer);
	// bgt cr6,0x8312c958
	if (cr6.gt) goto loc_8312C958;
	// addi r31,r1,-220
	r31.s64 = ctx.r1.s64 + -220;
	// lwz r3,76(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 76);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r4,0(r16)
	PPC_STORE_U32(r16.u32 + 0, ctx.r4.u32);
	// stw r31,-392(r1)
	PPC_STORE_U32(ctx.r1.u32 + -392, r31.u32);
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// add r31,r9,r3
	r31.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lwz r3,-392(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -392);
	// stwx r31,r30,r3
	PPC_STORE_U32(r30.u32 + ctx.r3.u32, r31.u32);
	// ble cr6,0x8312caa4
	if (!cr6.gt) goto loc_8312CAA4;
	// stb r11,-400(r1)
	PPC_STORE_U8(ctx.r1.u32 + -400, r11.u8);
	// addi r9,r1,-224
	ctx.r9.s64 = ctx.r1.s64 + -224;
	// std r10,-304(r1)
	PPC_STORE_U64(ctx.r1.u32 + -304, ctx.r10.u64);
	// srw r4,r22,r28
	ctx.r4.u64 = r28.u8 & 0x20 ? 0 : (r22.u32 >> (r28.u8 & 0x3F));
	// lwzx r9,r30,r9
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + ctx.r9.u32);
	// addi r3,r1,-284
	ctx.r3.s64 = ctx.r1.s64 + -284;
	// rlwinm r7,r4,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// stb r21,-399(r1)
	PPC_STORE_U8(ctx.r1.u32 + -399, r21.u8);
	// subf r10,r9,r31
	ctx.r10.s64 = r31.s64 - ctx.r9.s64;
	// lwz r5,36(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	// stw r7,-392(r1)
	PPC_STORE_U32(ctx.r1.u32 + -392, ctx.r7.u32);
	// srawi r10,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// lwz r6,-384(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -384);
	// lwz r7,-388(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -388);
	// subf r11,r4,r10
	r11.s64 = ctx.r10.s64 - ctx.r4.s64;
	// lwz r4,-392(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -392);
	// ld r10,-304(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -304);
	// stw r11,-396(r1)
	PPC_STORE_U32(ctx.r1.u32 + -396, r11.u32);
	// ld r11,-400(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -400);
	// std r8,-296(r1)
	PPC_STORE_U64(ctx.r1.u32 + -296, ctx.r8.u64);
	// stwx r22,r30,r3
	PPC_STORE_U32(r30.u32 + ctx.r3.u32, r22.u32);
	// stdx r11,r4,r9
	PPC_STORE_U64(ctx.r4.u32 + ctx.r9.u32, r11.u64);
	// b 0x8312caac
	goto loc_8312CAAC;
loc_8312CAA4:
	// lwz r11,60(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 60);
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
loc_8312CAAC:
	// cmpw cr6,r17,r26
	cr6.compare<int32_t>(r17.s32, r26.s32, xer);
	// bgt cr6,0x8312c984
	if (cr6.gt) goto loc_8312C984;
loc_8312CAB4:
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r29,r17
	ctx.r9.s64 = r17.s64 - r29.s64;
	// add r11,r11,r14
	r11.u64 = r11.u64 + r14.u64;
	// stb r9,-399(r1)
	PPC_STORE_U8(ctx.r1.u32 + -399, ctx.r9.u8);
	// cmplw cr6,r19,r11
	cr6.compare<uint32_t>(r19.u32, r11.u32, xer);
	// blt cr6,0x8312cad4
	if (cr6.lt) goto loc_8312CAD4;
	// li r11,192
	r11.s64 = 192;
	// b 0x8312cb24
	goto loc_8312CB24;
loc_8312CAD4:
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// addi r19,r19,4
	r19.s64 = r19.s64 + 4;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// bge cr6,0x8312cb04
	if (!cr6.lt) goto loc_8312CB04;
	// li r9,256
	ctx.r9.s64 = 256;
	// stw r11,-396(r1)
	PPC_STORE_U32(ctx.r1.u32 + -396, r11.u32);
	// subfc r11,r9,r11
	xer.ca = r11.u32 >= ctx.r9.u32;
	r11.s64 = r11.s64 - ctx.r9.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFE0;
	// rlwinm r11,r11,0,26,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// addi r11,r11,96
	r11.s64 = r11.s64 + 96;
	// b 0x8312cb24
	goto loc_8312CB24;
loc_8312CB04:
	// subf r11,r5,r11
	r11.s64 = r11.s64 - ctx.r5.s64;
	// lwz r9,52(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 52);
	// lwz r4,44(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 44);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r3,r9
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// lwzx r9,r3,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	// addi r11,r11,80
	r11.s64 = r11.s64 + 80;
	// stw r9,-396(r1)
	PPC_STORE_U32(ctx.r1.u32 + -396, ctx.r9.u32);
loc_8312CB24:
	// stb r11,-400(r1)
	PPC_STORE_U8(ctx.r1.u32 + -400, r11.u8);
	// subf r9,r29,r17
	ctx.r9.s64 = r17.s64 - r29.s64;
	// srw r11,r22,r29
	r11.u64 = r29.u8 & 0x20 ? 0 : (r22.u32 >> (r29.u8 & 0x3F));
	// slw r4,r8,r9
	ctx.r4.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(r11.u32, r23.u32, xer);
	// bge cr6,0x8312cb60
	if (!cr6.lt) goto loc_8312CB60;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r3,r4,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
loc_8312CB48:
	// ld r30,-400(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -400);
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(r11.u32, r23.u32, xer);
	// std r30,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, r30.u64);
	// add r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 + ctx.r9.u64;
	// blt cr6,0x8312cb48
	if (cr6.lt) goto loc_8312CB48;
loc_8312CB60:
	// slw r11,r8,r15
	r11.u64 = r15.u8 & 0x20 ? 0 : (ctx.r8.u32 << (r15.u8 & 0x3F));
	// b 0x8312cb6c
	goto loc_8312CB6C;
loc_8312CB68:
	// rlwinm r11,r11,31,1,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
loc_8312CB6C:
	// and. r9,r11,r22
	ctx.r9.u64 = r11.u64 & r22.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// xor r22,r11,r22
	r22.u64 = r11.u64 ^ r22.u64;
	// bne 0x8312cb68
	if (!cr0.eq) goto loc_8312CB68;
	// slw r11,r8,r29
	r11.u64 = r29.u8 & 0x20 ? 0 : (ctx.r8.u32 << (r29.u8 & 0x3F));
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// blt cr6,0x8312cbbc
	if (cr6.lt) goto loc_8312CBBC;
	// rlwinm r11,r25,2,0,29
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,-288
	ctx.r4.s64 = ctx.r1.s64 + -288;
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
loc_8312CB94:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// and r9,r9,r22
	ctx.r9.u64 = ctx.r9.u64 & r22.u64;
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// beq cr6,0x8312cbbc
	if (cr6.eq) goto loc_8312CBBC;
	// subf r29,r21,r29
	r29.s64 = r29.s64 - r21.s64;
	// addic. r25,r25,-1
	xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// slw r9,r8,r29
	ctx.r9.u64 = r29.u8 & 0x20 ? 0 : (ctx.r8.u32 << (r29.u8 & 0x3F));
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// bge 0x8312cb94
	if (!cr0.lt) goto loc_8312CB94;
loc_8312CBBC:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// bne cr6,0x8312c960
	if (!cr6.eq) goto loc_8312C960;
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// addi r18,r18,4
	r18.s64 = r18.s64 + 4;
	// addi r15,r15,1
	r15.s64 = r15.s64 + 1;
	// cmpw cr6,r17,r6
	cr6.compare<int32_t>(r17.s32, ctx.r6.s32, xer);
	// ble cr6,0x8312c950
	if (!cr6.gt) goto loc_8312C950;
loc_8312CBD8:
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x8312cbec
	if (cr6.eq) goto loc_8312CBEC;
	// cmpwi cr6,r6,1
	cr6.compare<int32_t>(ctx.r6.s32, 1, xer);
	// li r3,-5
	ctx.r3.s64 = -5;
	// bne cr6,0x8312cbf0
	if (!cr6.eq) goto loc_8312CBF0;
loc_8312CBEC:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_8312CBF0:
	// b 0x831b0b40
	return;
}

__attribute__((alias("__imp__sub_8312CBF8"))) PPC_WEAK_FUNC(sub_8312CBF8);
PPC_FUNC_IMPL(__imp__sub_8312CBF8) {
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
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,19
	ctx.r4.s64 = 19;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x8312cc48
	if (!cr0.eq) goto loc_8312CC48;
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x8312cccc
	goto loc_8312CCCC;
loc_8312CC48:
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,19
	ctx.r5.s64 = 19;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8312c720
	sub_8312C720(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,-3
	cr6.compare<int32_t>(r30.s32, -3, xer);
	// bne cr6,0x8312cc90
	if (!cr6.eq) goto loc_8312CC90;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r11,r11,22692
	r11.s64 = r11.s64 + 22692;
	// b 0x8312ccb0
	goto loc_8312CCB0;
loc_8312CC90:
	// cmpwi cr6,r30,-5
	cr6.compare<int32_t>(r30.s32, -5, xer);
	// beq cr6,0x8312cca4
	if (cr6.eq) goto loc_8312CCA4;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8312ccb4
	if (!cr6.eq) goto loc_8312CCB4;
loc_8312CCA4:
	// lis r11,-32240
	r11.s64 = -2112880640;
	// li r30,-3
	r30.s64 = -3;
	// addi r11,r11,22656
	r11.s64 = r11.s64 + 22656;
loc_8312CCB0:
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
loc_8312CCB4:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8312CCCC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_8312CCD8"))) PPC_WEAK_FUNC(sub_8312CCD8);
PPC_FUNC_IMPL(__imp__sub_8312CCD8) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,292(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// li r11,0
	r11.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// lwz r11,32(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 32);
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// lwz r3,40(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 40);
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r21,r9
	r21.u64 = ctx.r9.u64;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,288
	ctx.r4.s64 = 288;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x8312cd38
	if (!cr0.eq) goto loc_8312CD38;
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x8312ce90
	goto loc_8312CE90;
loc_8312CD38:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,-6656
	r31.s64 = r11.s64 + -6656;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// addi r7,r31,128
	ctx.r7.s64 = r31.s64 + 128;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// li r5,257
	ctx.r5.s64 = 257;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8312c720
	sub_8312C720(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// bne 0x8312ce4c
	if (!cr0.eq) goto loc_8312CE4C;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8312ce68
	if (cr6.eq) goto loc_8312CE68;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// rlwinm r11,r29,2,0,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r7,r31,376
	ctx.r7.s64 = r31.s64 + 376;
	// addi r6,r31,256
	ctx.r6.s64 = r31.s64 + 256;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x8312c720
	sub_8312C720(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x8312cdf0
	if (!cr0.eq) goto loc_8312CDF0;
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8312cdd4
	if (!cr6.eq) goto loc_8312CDD4;
	// cmplwi cr6,r29,257
	cr6.compare<uint32_t>(r29.u32, 257, xer);
	// bgt cr6,0x8312ce20
	if (cr6.gt) goto loc_8312CE20;
loc_8312CDD4:
	// lwz r3,40(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 40);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,36(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8312ce90
	goto loc_8312CE90;
loc_8312CDF0:
	// cmpwi cr6,r31,-3
	cr6.compare<int32_t>(r31.s32, -3, xer);
	// bne cr6,0x8312ce04
	if (!cr6.eq) goto loc_8312CE04;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r11,r11,22864
	r11.s64 = r11.s64 + 22864;
	// b 0x8312ce2c
	goto loc_8312CE2C;
loc_8312CE04:
	// cmpwi cr6,r31,-5
	cr6.compare<int32_t>(r31.s32, -5, xer);
	// bne cr6,0x8312ce18
	if (!cr6.eq) goto loc_8312CE18;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r11,r11,22836
	r11.s64 = r11.s64 + 22836;
	// b 0x8312ce28
	goto loc_8312CE28;
loc_8312CE18:
	// cmpwi cr6,r31,-4
	cr6.compare<int32_t>(r31.s32, -4, xer);
	// beq cr6,0x8312ce30
	if (cr6.eq) goto loc_8312CE30;
loc_8312CE20:
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r11,r11,22800
	r11.s64 = r11.s64 + 22800;
loc_8312CE28:
	// li r31,-3
	r31.s64 = -3;
loc_8312CE2C:
	// stw r11,24(r24)
	PPC_STORE_U32(r24.u32 + 24, r11.u32);
loc_8312CE30:
	// lwz r3,40(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 40);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,36(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8312ce90
	goto loc_8312CE90;
loc_8312CE4C:
	// cmpwi cr6,r26,-3
	cr6.compare<int32_t>(r26.s32, -3, xer);
	// bne cr6,0x8312ce60
	if (!cr6.eq) goto loc_8312CE60;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r11,r11,22764
	r11.s64 = r11.s64 + 22764;
	// b 0x8312ce74
	goto loc_8312CE74;
loc_8312CE60:
	// cmpwi cr6,r26,-4
	cr6.compare<int32_t>(r26.s32, -4, xer);
	// beq cr6,0x8312ce78
	if (cr6.eq) goto loc_8312CE78;
loc_8312CE68:
	// lis r11,-32240
	r11.s64 = -2112880640;
	// li r26,-3
	r26.s64 = -3;
	// addi r11,r11,22732
	r11.s64 = r11.s64 + 22732;
loc_8312CE74:
	// stw r11,24(r24)
	PPC_STORE_U32(r24.u32 + 24, r11.u32);
loc_8312CE78:
	// lwz r3,40(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 40);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,36(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_8312CE90:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_8312CE98"))) PPC_WEAK_FUNC(sub_8312CE98);
PPC_FUNC_IMPL(__imp__sub_8312CE98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r11,r11,-2064
	r11.s64 = r11.s64 + -2064;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r11,-4096
	ctx.r10.s64 = r11.s64 + -4096;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312CEC8"))) PPC_WEAK_FUNC(sub_8312CEC8);
PPC_FUNC_IMPL(__imp__sub_8312CEC8) {
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
	// lwz r28,48(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r27,12(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// ble cr6,0x8312cef8
	if (!cr6.gt) goto loc_8312CEF8;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
loc_8312CEF8:
	// subf r30,r28,r11
	r30.s64 = r11.s64 - r28.s64;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x8312cf0c
	if (!cr6.gt) goto loc_8312CF0C;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_8312CF0C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8312cf20
	if (cr6.eq) goto loc_8312CF20;
	// cmpwi cr6,r26,-5
	cr6.compare<int32_t>(r26.s32, -5, xer);
	// bne cr6,0x8312cf20
	if (!cr6.eq) goto loc_8312CF20;
	// li r26,0
	r26.s64 = 0;
loc_8312CF20:
	// subf r10,r30,r11
	ctx.r10.s64 = r11.s64 - r30.s64;
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,16(r29)
	PPC_STORE_U32(r29.u32 + 16, ctx.r10.u32);
	// stw r11,20(r29)
	PPC_STORE_U32(r29.u32 + 20, r11.u32);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8312cf5c
	if (cr6.eq) goto loc_8312CF5C;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r3.u32);
	// stw r3,48(r29)
	PPC_STORE_U32(r29.u32 + 48, ctx.r3.u32);
loc_8312CF5C:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// add r11,r30,r28
	r11.u64 = r30.u64 + r28.u64;
	// add r27,r30,r27
	r27.u64 = r30.u64 + r27.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8312d014
	if (!cr6.eq) goto loc_8312D014;
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r28,40(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8312cf94
	if (!cr6.eq) goto loc_8312CF94;
	// stw r28,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r28.u32);
loc_8312CF94:
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// subf r30,r28,r10
	r30.s64 = ctx.r10.s64 - r28.s64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x8312cfac
	if (!cr6.gt) goto loc_8312CFAC;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_8312CFAC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8312cfc0
	if (cr6.eq) goto loc_8312CFC0;
	// cmpwi cr6,r26,-5
	cr6.compare<int32_t>(r26.s32, -5, xer);
	// bne cr6,0x8312cfc0
	if (!cr6.eq) goto loc_8312CFC0;
	// li r26,0
	r26.s64 = 0;
loc_8312CFC0:
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r11,16(r29)
	PPC_STORE_U32(r29.u32 + 16, r11.u32);
	// stw r10,20(r29)
	PPC_STORE_U32(r29.u32 + 20, ctx.r10.u32);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8312cffc
	if (cr6.eq) goto loc_8312CFFC;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r3.u32);
	// stw r3,48(r29)
	PPC_STORE_U32(r29.u32 + 48, ctx.r3.u32);
loc_8312CFFC:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// add r27,r30,r27
	r27.u64 = r30.u64 + r27.u64;
	// add r11,r30,r28
	r11.u64 = r30.u64 + r28.u64;
loc_8312D014:
	// stw r27,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r27.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_8312D028"))) PPC_WEAK_FUNC(sub_8312D028);
PPC_FUNC_IMPL(__imp__sub_8312D028) {
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
	// mflr r12
	// bl 0x831b0b10
	// lwz r11,48(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r31,52(r7)
	r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// lwz r24,0(r8)
	r24.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r25,4(r8)
	r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// lwz r29,32(r7)
	r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// lwz r30,28(r7)
	r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// bge cr6,0x8312d05c
	if (!cr6.lt) goto loc_8312D05C;
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// addi r26,r11,-1
	r26.s64 = r11.s64 + -1;
	// b 0x8312d064
	goto loc_8312D064;
loc_8312D05C:
	// lwz r11,44(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// subf r26,r31,r11
	r26.s64 = r11.s64 - r31.s64;
loc_8312D064:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r11,-1808
	r27.s64 = r11.s64 + -1808;
	// rlwinm r11,r4,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r22,r10,r27
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + r27.u32);
	// lwzx r23,r11,r27
	r23.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// b 0x8312d098
	goto loc_8312D098;
loc_8312D080:
	// lbz r11,0(r24)
	r11.u64 = PPC_LOAD_U8(r24.u32 + 0);
	// addi r25,r25,-1
	r25.s64 = r25.s64 + -1;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// slw r11,r11,r30
	r11.u64 = r30.u8 & 0x20 ? 0 : (r11.u32 << (r30.u8 & 0x3F));
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// or r29,r11,r29
	r29.u64 = r11.u64 | r29.u64;
loc_8312D098:
	// cmplwi cr6,r30,20
	cr6.compare<uint32_t>(r30.u32, 20, xer);
	// blt cr6,0x8312d080
	if (cr6.lt) goto loc_8312D080;
	// and r11,r22,r29
	r11.u64 = r22.u64 & r29.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r5
	ctx.r9.u64 = r11.u64 + ctx.r5.u64;
	// lbzx r4,r11,r5
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + ctx.r5.u32);
	// lbz r10,1(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne 0x8312d0d0
	if (!cr0.eq) goto loc_8312D0D0;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// srw r29,r29,r10
	r29.u64 = ctx.r10.u8 & 0x20 ? 0 : (r29.u32 >> (ctx.r10.u8 & 0x3F));
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// subf r30,r10,r30
	r30.s64 = r30.s64 - ctx.r10.s64;
	// b 0x8312d2fc
	goto loc_8312D2FC;
loc_8312D0D0:
	// srw r11,r29,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r29.u32 >> (ctx.r10.u8 & 0x3F));
	// rlwinm. r3,r4,0,27,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// subf r10,r10,r30
	ctx.r10.s64 = r30.s64 - ctx.r10.s64;
	// bne 0x8312d124
	if (!cr0.eq) goto loc_8312D124;
loc_8312D0E0:
	// rlwinm. r3,r4,0,25,25
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8312d3c4
	if (!cr0.eq) goto loc_8312D3C4;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwzx r3,r3,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + r27.u32);
	// and r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 & r11.u64;
	// add r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 + ctx.r4.u64;
	// rlwinm r4,r4,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// lbz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8312d2e8
	if (cr0.eq) goto loc_8312D2E8;
	// lbz r3,1(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// rlwinm. r30,r4,0,27,27
	r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// srw r11,r11,r3
	r11.u64 = ctx.r3.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r3.u8 & 0x3F));
	// subf r10,r3,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r3.s64;
	// beq 0x8312d0e0
	if (cr0.eq) goto loc_8312D0E0;
loc_8312D124:
	// clrlwi r3,r4,28
	ctx.r3.u64 = ctx.r4.u32 & 0xF;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r4,r3,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r3,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r3.s64;
	// lwzx r4,r4,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + r27.u32);
	// and r4,r4,r11
	ctx.r4.u64 = ctx.r4.u64 & r11.u64;
	// srw r11,r11,r3
	r11.u64 = ctx.r3.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r3.u8 & 0x3F));
	// add r28,r4,r9
	r28.u64 = ctx.r4.u64 + ctx.r9.u64;
	// b 0x8312d160
	goto loc_8312D160;
loc_8312D148:
	// lbz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U8(r24.u32 + 0);
	// addi r25,r25,-1
	r25.s64 = r25.s64 + -1;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// slw r9,r9,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
loc_8312D160:
	// cmplwi cr6,r10,15
	cr6.compare<uint32_t>(ctx.r10.u32, 15, xer);
	// blt cr6,0x8312d148
	if (cr6.lt) goto loc_8312D148;
	// and r9,r23,r11
	ctx.r9.u64 = r23.u64 & r11.u64;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// b 0x8312d19c
	goto loc_8312D19C;
loc_8312D178:
	// rlwinm. r3,r4,0,25,25
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8312d364
	if (!cr0.eq) goto loc_8312D364;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwzx r3,r3,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + r27.u32);
	// and r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 & r11.u64;
	// add r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 + ctx.r4.u64;
	// rlwinm r4,r4,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
loc_8312D19C:
	// lbz r3,1(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// lbz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// subf r10,r3,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r3.s64;
	// srw r11,r11,r3
	r11.u64 = ctx.r3.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r3.u8 & 0x3F));
	// rlwinm. r30,r4,0,27,27
	r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8312d178
	if (cr0.eq) goto loc_8312D178;
	// clrlwi r4,r4,28
	ctx.r4.u64 = ctx.r4.u32 & 0xF;
	// b 0x8312d1d4
	goto loc_8312D1D4;
loc_8312D1BC:
	// lbz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U8(r24.u32 + 0);
	// addi r25,r25,-1
	r25.s64 = r25.s64 + -1;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// slw r3,r3,r10
	ctx.r3.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r10.u8 & 0x3F));
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// or r11,r3,r11
	r11.u64 = ctx.r3.u64 | r11.u64;
loc_8312D1D4:
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// blt cr6,0x8312d1bc
	if (cr6.lt) goto loc_8312D1BC;
	// rlwinm r30,r4,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// srw r29,r11,r4
	r29.u64 = ctx.r4.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r4.u8 & 0x3F));
	// lwzx r9,r30,r27
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + r27.u32);
	// subf r30,r4,r10
	r30.s64 = ctx.r10.s64 - ctx.r4.s64;
	// lwz r10,40(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// subf r26,r28,r26
	r26.s64 = r26.s64 - r28.s64;
	// and r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 & r11.u64;
	// add r11,r9,r3
	r11.u64 = ctx.r9.u64 + ctx.r3.u64;
	// subf r11,r11,r31
	r11.s64 = r31.s64 - r11.s64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8312d2a8
	if (!cr6.lt) goto loc_8312D2A8;
	// lwz r9,44(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// subf r4,r10,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r10.s64;
loc_8312D214:
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8312d214
	if (cr6.lt) goto loc_8312D214;
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - r11.s64;
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// ble cr6,0x8312d268
	if (!cr6.gt) goto loc_8312D268;
	// subf r9,r10,r28
	ctx.r9.s64 = r28.s64 - ctx.r10.s64;
loc_8312D230:
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r4,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r4.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bne 0x8312d230
	if (!cr0.eq) goto loc_8312D230;
	// lwz r11,40(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
loc_8312D24C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bne 0x8312d24c
	if (!cr0.eq) goto loc_8312D24C;
	// b 0x8312d304
	goto loc_8312D304;
loc_8312D268:
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r31,1
	ctx.r10.s64 = r31.s64 + 1;
	// addi r9,r28,-2
	ctx.r9.s64 = r28.s64 + -2;
	// stb r4,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r4.u8);
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r4,1(r31)
	PPC_STORE_U8(r31.u32 + 1, ctx.r4.u8);
	// addi r31,r10,1
	r31.s64 = ctx.r10.s64 + 1;
loc_8312D28C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bne 0x8312d28c
	if (!cr0.eq) goto loc_8312D28C;
	// b 0x8312d304
	goto loc_8312D304;
loc_8312D2A8:
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r31,1
	ctx.r10.s64 = r31.s64 + 1;
	// addi r9,r28,-2
	ctx.r9.s64 = r28.s64 + -2;
	// stb r4,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r4.u8);
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r4,1(r31)
	PPC_STORE_U8(r31.u32 + 1, ctx.r4.u8);
	// addi r31,r10,1
	r31.s64 = ctx.r10.s64 + 1;
loc_8312D2CC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bne 0x8312d2cc
	if (!cr0.eq) goto loc_8312D2CC;
	// b 0x8312d304
	goto loc_8312D304;
loc_8312D2E8:
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lbz r9,1(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// srw r29,r11,r9
	r29.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r9.u8 & 0x3F));
	// stb r4,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r4.u8);
	// subf r30,r9,r10
	r30.s64 = ctx.r10.s64 - ctx.r9.s64;
loc_8312D2FC:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r26,r26,-1
	r26.s64 = r26.s64 + -1;
loc_8312D304:
	// cmplwi cr6,r26,258
	cr6.compare<uint32_t>(r26.u32, 258, xer);
	// blt cr6,0x8312d314
	if (cr6.lt) goto loc_8312D314;
	// cmplwi cr6,r25,10
	cr6.compare<uint32_t>(r25.u32, 10, xer);
	// bge cr6,0x8312d098
	if (!cr6.lt) goto loc_8312D098;
loc_8312D314:
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r10,r30,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 29) & 0x1FFFFFFF;
	// subf r11,r25,r11
	r11.s64 = r11.s64 - r25.s64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x8312d32c
	if (!cr6.lt) goto loc_8312D32C;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8312D32C:
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r29,32(r7)
	PPC_STORE_U32(ctx.r7.u32 + 32, r29.u32);
	// subf r10,r11,r24
	ctx.r10.s64 = r24.s64 - r11.s64;
	// subf r9,r9,r30
	ctx.r9.s64 = r30.s64 - ctx.r9.s64;
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// stw r9,28(r7)
	PPC_STORE_U32(ctx.r7.u32 + 28, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, r11.u32);
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// b 0x8312d3bc
	goto loc_8312D3BC;
loc_8312D364:
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lis r5,-32240
	ctx.r5.s64 = -2112880640;
	// rlwinm r6,r10,29,3,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r5,r5,17784
	ctx.r5.s64 = ctx.r5.s64 + 17784;
	// subf r9,r25,r9
	ctx.r9.s64 = ctx.r9.s64 - r25.s64;
	// stw r5,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r5.u32);
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// bge cr6,0x8312d388
	if (!cr6.lt) goto loc_8312D388;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
loc_8312D388:
	// li r3,-3
	ctx.r3.s64 = -3;
loc_8312D38C:
	// stw r11,32(r7)
	PPC_STORE_U32(ctx.r7.u32 + 32, r11.u32);
	// rlwinm r6,r9,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r9,r24
	r11.s64 = r24.s64 - ctx.r9.s64;
	// subf r10,r6,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r6.s64;
	// add r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 + r25.u64;
	// stw r10,28(r7)
	PPC_STORE_U32(ctx.r7.u32 + 28, ctx.r10.u32);
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
loc_8312D3BC:
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, r11.u32);
	// b 0x8312d438
	goto loc_8312D438;
loc_8312D3C4:
	// rlwinm. r9,r4,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r6,r10,29,3,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// subf r9,r25,r9
	ctx.r9.s64 = ctx.r9.s64 - r25.s64;
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// beq 0x8312d3ec
	if (cr0.eq) goto loc_8312D3EC;
	// bge cr6,0x8312d3e4
	if (!cr6.lt) goto loc_8312D3E4;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
loc_8312D3E4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8312d38c
	goto loc_8312D38C;
loc_8312D3EC:
	// lis r5,-32240
	ctx.r5.s64 = -2112880640;
	// addi r5,r5,17756
	ctx.r5.s64 = ctx.r5.s64 + 17756;
	// stw r5,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r5.u32);
	// bge cr6,0x8312d400
	if (!cr6.lt) goto loc_8312D400;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
loc_8312D400:
	// rlwinm r6,r9,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r11,32(r7)
	PPC_STORE_U32(ctx.r7.u32 + 32, r11.u32);
	// subf r11,r9,r24
	r11.s64 = r24.s64 - ctx.r9.s64;
	// subf r10,r6,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r6.s64;
	// add r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 + r25.u64;
	// stw r10,28(r7)
	PPC_STORE_U32(ctx.r7.u32 + 28, ctx.r10.u32);
	// li r3,-3
	ctx.r3.s64 = -3;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// subf r10,r6,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r6.s64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_8312D438:
	// stw r31,52(r7)
	PPC_STORE_U32(ctx.r7.u32 + 52, r31.u32);
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_8312D440"))) PPC_WEAK_FUNC(sub_8312D440);
PPC_FUNC_IMPL(__imp__sub_8312D440) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r8,r11,-6104
	ctx.r8.s64 = r11.s64 + -6104;
loc_8312D448:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r8
	reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r8
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8312d448
	if (!cr0.eq) goto loc_8312D448;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// b 0x8312e550
	sub_8312E550(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312D474"))) PPC_WEAK_FUNC(sub_8312D474);
PPC_FUNC_IMPL(__imp__sub_8312D474) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312D478"))) PPC_WEAK_FUNC(sub_8312D478);
PPC_FUNC_IMPL(__imp__sub_8312D478) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r8,r11,-6104
	ctx.r8.s64 = r11.s64 + -6104;
loc_8312D480:
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
	// bne 0x8312d480
	if (!cr0.eq) goto loc_8312D480;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// b 0x8312e690
	sub_8312E690(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312D4AC"))) PPC_WEAK_FUNC(sub_8312D4AC);
PPC_FUNC_IMPL(__imp__sub_8312D4AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312D4B0"))) PPC_WEAK_FUNC(sub_8312D4B0);
PPC_FUNC_IMPL(__imp__sub_8312D4B0) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r11,-6104(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -6104);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x8312d4e0
	if (cr6.gt) goto loc_8312D4E0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-1736
	ctx.r3.s64 = r11.s64 + -1736;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8312d4ec
	goto loc_8312D4EC;
loc_8312D4E0:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x8312e940
	sub_8312E940(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8312D4EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312D500"))) PPC_WEAK_FUNC(sub_8312D500);
PPC_FUNC_IMPL(__imp__sub_8312D500) {
	PPC_FUNC_PROLOGUE();
	// b 0x8312e610
	sub_8312E610(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312D508"))) PPC_WEAK_FUNC(sub_8312D508);
PPC_FUNC_IMPL(__imp__sub_8312D508) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
loc_8312D50C:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r3
	reserved.u32 = *(uint32_t*)(base + ctx.r3.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r11,0,r3
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r3.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8312d50c
	if (!cr0.eq) goto loc_8312D50C;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312D538"))) PPC_WEAK_FUNC(sub_8312D538);
PPC_FUNC_IMPL(__imp__sub_8312D538) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r29,r11,-6000
	r29.s64 = r11.s64 + -6000;
	// li r31,0
	r31.s64 = 0;
	// addi r11,r29,-68
	r11.s64 = r29.s64 + -68;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lis r11,45
	r11.s64 = 2949120;
	// ori r30,r11,50880
	r30.u64 = r11.u64 | 50880;
loc_8312D564:
	// addi r11,r29,-92
	r11.s64 = r29.s64 + -92;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82bd5728
	sub_82BD5728(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x831cdbc0
	sub_831CDBC0(ctx, base);
	// addi r11,r29,-68
	r11.s64 = r29.s64 + -68;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8312d598
	if (cr6.eq) goto loc_8312D598;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(r31.s32, r30.s32, xer);
	// blt cr6,0x8312d564
	if (cr6.lt) goto loc_8312D564;
loc_8312D598:
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(r31.s32, r30.s32, xer);
	// bne cr6,0x8312d5ac
	if (!cr6.eq) goto loc_8312D5AC;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-1636
	ctx.r3.s64 = r11.s64 + -1636;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_8312D5AC:
	// addi r11,r29,-92
	r11.s64 = r29.s64 + -92;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82bd5728
	sub_82BD5728(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8312D5C8"))) PPC_WEAK_FUNC(sub_8312D5C8);
PPC_FUNC_IMPL(__imp__sub_8312D5C8) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-6024
	r31.s64 = r11.s64 + -6024;
	// b 0x8312d678
	goto loc_8312D678;
loc_8312D5E4:
	// addi r11,r31,-36
	r11.s64 = r31.s64 + -36;
	// addi r10,r31,-36
	ctx.r10.s64 = r31.s64 + -36;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// bl 0x8312f218
	sub_8312F218(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8312d614
	if (cr0.eq) goto loc_8312D614;
	// addi r11,r31,-44
	r11.s64 = r31.s64 + -44;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8312d678
	if (!cr6.eq) goto loc_8312D678;
loc_8312D614:
	// addi r11,r31,-44
	r11.s64 = r31.s64 + -44;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8312d644
	if (!cr6.eq) goto loc_8312D644;
	// addi r11,r31,-44
	r11.s64 = r31.s64 + -44;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r31,-68
	ctx.r10.s64 = r31.s64 + -68;
	// addi r9,r31,24
	ctx.r9.s64 = r31.s64 + 24;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x82bd5728
	sub_82BD5728(ctx, base);
loc_8312D644:
	// addi r11,r31,-28
	r11.s64 = r31.s64 + -28;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8312d66c
	if (cr6.eq) goto loc_8312D66C;
	// addi r11,r31,-28
	r11.s64 = r31.s64 + -28;
	// addi r10,r31,-28
	ctx.r10.s64 = r31.s64 + -28;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8312D66C:
	// addi r11,r31,24
	r11.s64 = r31.s64 + 24;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82bd5828
	sub_82BD5828(ctx, base);
loc_8312D678:
	// addi r11,r31,-4
	r11.s64 = r31.s64 + -4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8312d5e4
	if (cr6.eq) goto loc_8312D5E4;
	// li r11,1
	r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_8312D6A8"))) PPC_WEAK_FUNC(sub_8312D6A8);
PPC_FUNC_IMPL(__imp__sub_8312D6A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r11,-6096(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -6096);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312D6C0"))) PPC_WEAK_FUNC(sub_8312D6C0);
PPC_FUNC_IMPL(__imp__sub_8312D6C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8312eb80
	sub_8312EB80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312D6C8"))) PPC_WEAK_FUNC(sub_8312D6C8);
PPC_FUNC_IMPL(__imp__sub_8312D6C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8312f548
	sub_8312F548(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312D6D0"))) PPC_WEAK_FUNC(sub_8312D6D0);
PPC_FUNC_IMPL(__imp__sub_8312D6D0) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// li r29,0
	r29.s64 = 0;
	// addi r31,r11,-6004
	r31.s64 = r11.s64 + -6004;
	// mr r28,r29
	r28.u64 = r29.u64;
	// addi r11,r31,-12
	r11.s64 = r31.s64 + -12;
	// li r27,1
	r27.s64 = 1;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8312d790
	if (cr6.eq) goto loc_8312D790;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_8312D704:
	// addi r11,r31,-40
	r11.s64 = r31.s64 + -40;
	// addi r10,r31,-12
	ctx.r10.s64 = r31.s64 + -12;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r27,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r27.u32);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82bd5728
	sub_82BD5728(ctx, base);
	// addi r11,r31,-12
	r11.s64 = r31.s64 + -12;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x831cdbc0
	sub_831CDBC0(ctx, base);
	// addi r11,r31,-12
	r11.s64 = r31.s64 + -12;
	// li r4,1000
	ctx.r4.s64 = 1000;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82bd5710
	sub_82BD5710(ctx, base);
	// cmplwi cr6,r3,258
	cr6.compare<uint32_t>(ctx.r3.u32, 258, xer);
	// bne cr6,0x8312d74c
	if (!cr6.eq) goto loc_8312D74C;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,30
	cr6.compare<int32_t>(r30.s32, 30, xer);
	// blt cr6,0x8312d704
	if (cr6.lt) goto loc_8312D704;
loc_8312D74C:
	// cmpwi cr6,r30,30
	cr6.compare<int32_t>(r30.s32, 30, xer);
	// bne cr6,0x8312d764
	if (!cr6.eq) goto loc_8312D764;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-1484
	ctx.r3.s64 = r11.s64 + -1484;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r28,-1
	r28.s64 = -1;
loc_8312D764:
	// addi r11,r31,-36
	r11.s64 = r31.s64 + -36;
	// addi r10,r31,-40
	ctx.r10.s64 = r31.s64 + -40;
	// addi r9,r31,-12
	ctx.r9.s64 = r31.s64 + -12;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r29.u32);
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x82bd4418
	sub_82BD4418(ctx, base);
	// addi r10,r31,-12
	ctx.r10.s64 = r31.s64 + -12;
	// mr r11,r29
	r11.u64 = r29.u64;
	// stw r29,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r29.u32);
	// stw r11,-16(r31)
	PPC_STORE_U32(r31.u32 + -16, r11.u32);
loc_8312D790:
	// addi r11,r31,-4
	r11.s64 = r31.s64 + -4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8312d830
	if (cr6.eq) goto loc_8312D830;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_8312D7A4:
	// addi r11,r31,-32
	r11.s64 = r31.s64 + -32;
	// addi r10,r31,-4
	ctx.r10.s64 = r31.s64 + -4;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r27,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r27.u32);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82bd5728
	sub_82BD5728(ctx, base);
	// addi r11,r31,-4
	r11.s64 = r31.s64 + -4;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x831cdbc0
	sub_831CDBC0(ctx, base);
	// addi r11,r31,-4
	r11.s64 = r31.s64 + -4;
	// li r4,1000
	ctx.r4.s64 = 1000;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82bd5710
	sub_82BD5710(ctx, base);
	// cmplwi cr6,r3,258
	cr6.compare<uint32_t>(ctx.r3.u32, 258, xer);
	// bne cr6,0x8312d7ec
	if (!cr6.eq) goto loc_8312D7EC;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,30
	cr6.compare<int32_t>(r30.s32, 30, xer);
	// blt cr6,0x8312d7a4
	if (cr6.lt) goto loc_8312D7A4;
loc_8312D7EC:
	// cmpwi cr6,r30,30
	cr6.compare<int32_t>(r30.s32, 30, xer);
	// bne cr6,0x8312d804
	if (!cr6.eq) goto loc_8312D804;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-1532
	ctx.r3.s64 = r11.s64 + -1532;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
loc_8312D804:
	// addi r11,r31,-28
	r11.s64 = r31.s64 + -28;
	// addi r10,r31,-32
	ctx.r10.s64 = r31.s64 + -32;
	// addi r9,r31,-4
	ctx.r9.s64 = r31.s64 + -4;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r29.u32);
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x82bd4418
	sub_82BD4418(ctx, base);
	// addi r10,r31,-4
	ctx.r10.s64 = r31.s64 + -4;
	// mr r11,r29
	r11.u64 = r29.u64;
	// stw r29,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r29.u32);
	// stw r11,-8(r31)
	PPC_STORE_U32(r31.u32 + -8, r11.u32);
loc_8312D830:
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8312d8d0
	if (cr6.eq) goto loc_8312D8D0;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_8312D844:
	// addi r11,r31,-24
	r11.s64 = r31.s64 + -24;
	// addi r10,r31,4
	ctx.r10.s64 = r31.s64 + 4;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r27,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r27.u32);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82bd5728
	sub_82BD5728(ctx, base);
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x831cdbc0
	sub_831CDBC0(ctx, base);
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// li r4,1000
	ctx.r4.s64 = 1000;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82bd5710
	sub_82BD5710(ctx, base);
	// cmplwi cr6,r3,258
	cr6.compare<uint32_t>(ctx.r3.u32, 258, xer);
	// bne cr6,0x8312d88c
	if (!cr6.eq) goto loc_8312D88C;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,30
	cr6.compare<int32_t>(r30.s32, 30, xer);
	// blt cr6,0x8312d844
	if (cr6.lt) goto loc_8312D844;
loc_8312D88C:
	// cmpwi cr6,r30,30
	cr6.compare<int32_t>(r30.s32, 30, xer);
	// bne cr6,0x8312d8a4
	if (!cr6.eq) goto loc_8312D8A4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-1584
	ctx.r3.s64 = r11.s64 + -1584;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
loc_8312D8A4:
	// addi r11,r31,-20
	r11.s64 = r31.s64 + -20;
	// addi r10,r31,-24
	ctx.r10.s64 = r31.s64 + -24;
	// addi r9,r31,4
	ctx.r9.s64 = r31.s64 + 4;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r29.u32);
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x82bd4418
	sub_82BD4418(ctx, base);
	// addi r10,r31,4
	ctx.r10.s64 = r31.s64 + 4;
	// mr r11,r29
	r11.u64 = r29.u64;
	// stw r29,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r29.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8312D8D0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8312D8E0"))) PPC_WEAK_FUNC(sub_8312D8E0);
PPC_FUNC_IMPL(__imp__sub_8312D8E0) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// li r31,0
	r31.s64 = 0;
	// addi r30,r11,-6000
	r30.s64 = r11.s64 + -6000;
	// addi r11,r30,-92
	r11.s64 = r30.s64 + -92;
	// addi r10,r30,-16
	ctx.r10.s64 = r30.s64 + -16;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82bd5728
	sub_82BD5728(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8312d92c
	if (!cr0.eq) goto loc_8312D92C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-1288
	ctx.r3.s64 = r11.s64 + -1288;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r31,-1
	r31.s64 = -1;
loc_8312D92C:
	// addi r11,r30,-92
	r11.s64 = r30.s64 + -92;
	// addi r10,r30,-8
	ctx.r10.s64 = r30.s64 + -8;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82bd5728
	sub_82BD5728(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8312d958
	if (!cr0.eq) goto loc_8312D958;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-1360
	ctx.r3.s64 = r11.s64 + -1360;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
loc_8312D958:
	// addi r11,r30,-92
	r11.s64 = r30.s64 + -92;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82bd5728
	sub_82BD5728(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8312d980
	if (!cr0.eq) goto loc_8312D980;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-1432
	ctx.r3.s64 = r11.s64 + -1432;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
loc_8312D980:
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

__attribute__((alias("__imp__sub_8312D9A0"))) PPC_WEAK_FUNC(sub_8312D9A0);
PPC_FUNC_IMPL(__imp__sub_8312D9A0) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-6000
	r31.s64 = r11.s64 + -6000;
	// addi r11,r31,-92
	r11.s64 = r31.s64 + -92;
	// addi r10,r31,-16
	ctx.r10.s64 = r31.s64 + -16;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82bd5910
	sub_82BD5910(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x8312d9e0
	if (!cr6.eq) goto loc_8312D9E0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-1056
	ctx.r3.s64 = r11.s64 + -1056;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_8312D9E0:
	// addi r11,r31,-92
	r11.s64 = r31.s64 + -92;
	// addi r10,r31,-8
	ctx.r10.s64 = r31.s64 + -8;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82bd5910
	sub_82BD5910(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x8312da08
	if (!cr6.eq) goto loc_8312DA08;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-1136
	ctx.r3.s64 = r11.s64 + -1136;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_8312DA08:
	// addi r11,r31,-92
	r11.s64 = r31.s64 + -92;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82bd5910
	sub_82BD5910(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x8312da2c
	if (!cr6.eq) goto loc_8312DA2C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-1216
	ctx.r3.s64 = r11.s64 + -1216;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_8312DA2C:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_8312DA48"))) PPC_WEAK_FUNC(sub_8312DA48);
PPC_FUNC_IMPL(__imp__sub_8312DA48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8312da60
	if (cr6.eq) goto loc_8312DA60;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// lwz r10,25104(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25104);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_8312DA60:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,-6092
	r11.s64 = r11.s64 + -6092;
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// b 0x831b0ed0
	sub_831B0ED0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312DA80"))) PPC_WEAK_FUNC(sub_8312DA80);
PPC_FUNC_IMPL(__imp__sub_8312DA80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312DA88"))) PPC_WEAK_FUNC(sub_8312DA88);
PPC_FUNC_IMPL(__imp__sub_8312DA88) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r8,r11,-6096
	ctx.r8.s64 = r11.s64 + -6096;
loc_8312DA9C:
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
	// bne 0x8312da9c
	if (!cr0.eq) goto loc_8312DA9C;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8312dacc
	if (!cr6.eq) goto loc_8312DACC;
	// bl 0x8312d6d0
	sub_8312D6D0(ctx, base);
	// bl 0x8312eed8
	sub_8312EED8(ctx, base);
loc_8312DACC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312DAE0"))) PPC_WEAK_FUNC(sub_8312DAE0);
PPC_FUNC_IMPL(__imp__sub_8312DAE0) {
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
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// bl 0x831cdad0
	sub_831CDAD0(ctx, base);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r11,r11,-5992
	r11.s64 = r11.s64 + -5992;
	// addi r10,r11,-4
	ctx.r10.s64 = r11.s64 + -4;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// bge cr6,0x8312db18
	if (!cr6.lt) goto loc_8312DB18;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_8312DB18:
	// addi r10,r11,-4
	ctx.r10.s64 = r11.s64 + -4;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312DB48"))) PPC_WEAK_FUNC(sub_8312DB48);
PPC_FUNC_IMPL(__imp__sub_8312DB48) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// li r31,1
	r31.s64 = 1;
	// addi r7,r11,-6100
	ctx.r7.s64 = r11.s64 + -6100;
	// li r8,0
	ctx.r8.s64 = 0;
loc_8312DB68:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r7
	reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r8,0,r7
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8312db68
	if (!cr0.eq) goto loc_8312DB68;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8312dba0
	if (!cr6.eq) goto loc_8312DBA0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-936
	ctx.r3.s64 = r11.s64 + -936;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8312dbe0
	goto loc_8312DBE0;
loc_8312DBA0:
	// lis r11,-31947
	r11.s64 = -2093678592;
	// lwz r11,25104(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 25104);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x8312dbd0
	if (cr6.lt) goto loc_8312DBD0;
	// beq cr6,0x8312dbd4
	if (cr6.eq) goto loc_8312DBD4;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x8312dbd0
	if (cr6.lt) goto loc_8312DBD0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-980
	ctx.r3.s64 = r11.s64 + -980;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// b 0x8312dbd4
	goto loc_8312DBD4;
loc_8312DBD0:
	// bl 0x8312da88
	sub_8312DA88(ctx, base);
loc_8312DBD4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x8312f4f8
	sub_8312F4F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8312DBE0:
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

__attribute__((alias("__imp__sub_8312DBF8"))) PPC_WEAK_FUNC(sub_8312DBF8);
PPC_FUNC_IMPL(__imp__sub_8312DBF8) {
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
	// bl 0x8312dae0
	sub_8312DAE0(ctx, base);
	// mulli r9,r3,60
	ctx.r9.s64 = ctx.r3.s64 * 60;
	// li r11,1000
	r11.s64 = 1000;
	// li r10,60
	ctx.r10.s64 = 60;
	// divd r11,r9,r11
	r11.s64 = ctx.r9.s64 / r11.s64;
	// rotlwi r9,r3,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mulli r11,r11,1000
	r11.s64 = r11.s64 * 1000;
	// divd r11,r11,r10
	r11.s64 = r11.s64 / ctx.r10.s64;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addic. r3,r11,1
	xer.ca = r11.u32 > 4294967294;
	ctx.r3.s64 = r11.s64 + 1;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8312dc40
	if (!cr0.eq) goto loc_8312DC40;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8312dc4c
	goto loc_8312DC4C;
loc_8312DC40:
	// cmplwi cr6,r3,17
	cr6.compare<uint32_t>(ctx.r3.u32, 17, xer);
	// ble cr6,0x8312dc4c
	if (!cr6.gt) goto loc_8312DC4C;
	// li r3,17
	ctx.r3.s64 = 17;
loc_8312DC4C:
	// bl 0x82bd42f0
	sub_82BD42F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312DC60"))) PPC_WEAK_FUNC(sub_8312DC60);
PPC_FUNC_IMPL(__imp__sub_8312DC60) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-6040
	r31.s64 = r11.s64 + -6040;
	// b 0x8312dccc
	goto loc_8312DCCC;
loc_8312DC7C:
	// bl 0x8312dbf8
	sub_8312DBF8(ctx, base);
	// addi r11,r31,-24
	r11.s64 = r31.s64 + -24;
	// addi r10,r31,-24
	ctx.r10.s64 = r31.s64 + -24;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// bl 0x8312f1f8
	sub_8312F1F8(ctx, base);
	// addi r11,r31,40
	r11.s64 = r31.s64 + 40;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x831cdbc0
	sub_831CDBC0(ctx, base);
	// addi r11,r31,-12
	r11.s64 = r31.s64 + -12;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8312dccc
	if (cr6.eq) goto loc_8312DCCC;
	// addi r11,r31,-12
	r11.s64 = r31.s64 + -12;
	// addi r10,r31,-12
	ctx.r10.s64 = r31.s64 + -12;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8312DCCC:
	// addi r11,r31,-4
	r11.s64 = r31.s64 + -4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8312dc7c
	if (cr6.eq) goto loc_8312DC7C;
	// li r11,1
	r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_8312DD00"))) PPC_WEAK_FUNC(sub_8312DD00);
PPC_FUNC_IMPL(__imp__sub_8312DD00) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-6032
	r31.s64 = r11.s64 + -6032;
	// b 0x8312dd24
	goto loc_8312DD24;
loc_8312DD1C:
	// bl 0x8312dbf8
	sub_8312DBF8(ctx, base);
	// bl 0x8312f208
	sub_8312F208(ctx, base);
loc_8312DD24:
	// addi r11,r31,-4
	r11.s64 = r31.s64 + -4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8312dd1c
	if (cr6.eq) goto loc_8312DD1C;
	// li r11,1
	r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_8312DD58"))) PPC_WEAK_FUNC(sub_8312DD58);
PPC_FUNC_IMPL(__imp__sub_8312DD58) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r31,r11,-6004
	r31.s64 = r11.s64 + -6004;
	// lis r11,-31981
	r11.s64 = -2095906816;
	// addi r8,r31,-16
	ctx.r8.s64 = r31.s64 + -16;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-9120
	ctx.r5.s64 = r11.s64 + -9120;
	// li r4,12288
	ctx.r4.s64 = 12288;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831cd5f8
	sub_831CD5F8(ctx, base);
	// addi r11,r31,-12
	r11.s64 = r31.s64 + -12;
	// addi r10,r31,-12
	ctx.r10.s64 = r31.s64 + -12;
	// stw r3,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8312ddbc
	if (!cr6.eq) goto loc_8312DDBC;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-712
	ctx.r3.s64 = r11.s64 + -712;
loc_8312DDB0:
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8312de48
	goto loc_8312DE48;
loc_8312DDBC:
	// lis r11,-31981
	r11.s64 = -2095906816;
	// addi r8,r31,-8
	ctx.r8.s64 = r31.s64 + -8;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-8960
	ctx.r5.s64 = r11.s64 + -8960;
	// li r4,12288
	ctx.r4.s64 = 12288;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831cd5f8
	sub_831CD5F8(ctx, base);
	// addi r11,r31,-4
	r11.s64 = r31.s64 + -4;
	// addi r10,r31,-4
	ctx.r10.s64 = r31.s64 + -4;
	// stw r3,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8312de00
	if (!cr6.eq) goto loc_8312DE00;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-784
	ctx.r3.s64 = r11.s64 + -784;
	// b 0x8312ddb0
	goto loc_8312DDB0;
loc_8312DE00:
	// lis r11,-31981
	r11.s64 = -2095906816;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-10808
	ctx.r5.s64 = r11.s64 + -10808;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831cd5f8
	sub_831CD5F8(ctx, base);
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// addi r10,r31,4
	ctx.r10.s64 = r31.s64 + 4;
	// stw r3,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8312de44
	if (!cr6.eq) goto loc_8312DE44;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-856
	ctx.r3.s64 = r11.s64 + -856;
	// b 0x8312ddb0
	goto loc_8312DDB0;
loc_8312DE44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8312DE48:
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

__attribute__((alias("__imp__sub_8312DE60"))) PPC_WEAK_FUNC(sub_8312DE60);
PPC_FUNC_IMPL(__imp__sub_8312DE60) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,-6000
	r31.s64 = r11.s64 + -6000;
	// addi r8,r31,-96
	ctx.r8.s64 = r31.s64 + -96;
loc_8312DE84:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r8
	reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r8
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8312de84
	if (!cr0.eq) goto loc_8312DE84;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8312dfe4
	if (!cr6.eq) goto loc_8312DFE4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82bd58f8
	sub_82BD58F8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r10,r31,-44
	ctx.r10.s64 = r31.s64 + -44;
	// addi r9,r31,-40
	ctx.r9.s64 = r31.s64 + -40;
	// addi r8,r31,-28
	ctx.r8.s64 = r31.s64 + -28;
	// addi r7,r31,-24
	ctx.r7.s64 = r31.s64 + -24;
	// addi r6,r31,-64
	ctx.r6.s64 = r31.s64 + -64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r11.u32);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// bl 0x8312ee58
	sub_8312EE58(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8312ed88
	sub_8312ED88(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8312eda0
	sub_8312EDA0(ctx, base);
	// lis r11,-31981
	r11.s64 = -2095906816;
	// addi r3,r11,-11000
	ctx.r3.s64 = r11.s64 + -11000;
	// bl 0x8312ef58
	sub_8312EF58(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8312df58
	if (!cr6.eq) goto loc_8312DF58;
	// addi r11,r31,-92
	r11.s64 = r31.s64 + -92;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r10,r31,-92
	ctx.r10.s64 = r31.s64 + -92;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r9,r31,-92
	ctx.r9.s64 = r31.s64 + -92;
	// addi r7,r31,-92
	ctx.r7.s64 = r31.s64 + -92;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// li r8,-15
	ctx.r8.s64 = -15;
	// li r11,5
	r11.s64 = 5;
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// addi r5,r31,-92
	ctx.r5.s64 = r31.s64 + -92;
	// addi r4,r31,-92
	ctx.r4.s64 = r31.s64 + -92;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r8,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// stw r11,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, r11.u32);
	// stw r11,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, r11.u32);
	// stw r10,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r10.u32);
	// b 0x8312df68
	goto loc_8312DF68;
loc_8312DF58:
	// addi r3,r31,-92
	ctx.r3.s64 = r31.s64 + -92;
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
loc_8312DF68:
	// bl 0x8312dd58
	sub_8312DD58(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x8312df80
	if (!cr0.lt) goto loc_8312DF80;
loc_8312DF74:
	// bl 0x8312d6d0
	sub_8312D6D0(ctx, base);
	// bl 0x8312eed8
	sub_8312EED8(ctx, base);
	// b 0x8312dfe4
	goto loc_8312DFE4;
loc_8312DF80:
	// bl 0x8312d8e0
	sub_8312D8E0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8312df74
	if (cr0.lt) goto loc_8312DF74;
	// addi r11,r31,-92
	r11.s64 = r31.s64 + -92;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x8312fc08
	sub_8312FC08(ctx, base);
	// bl 0x8312d9a0
	sub_8312D9A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8312df74
	if (cr0.lt) goto loc_8312DF74;
	// addi r11,r31,-92
	r11.s64 = r31.s64 + -92;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x8312fc70
	sub_8312FC70(ctx, base);
	// addi r11,r31,-16
	r11.s64 = r31.s64 + -16;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x831cdbc0
	sub_831CDBC0(ctx, base);
	// addi r11,r31,-8
	r11.s64 = r31.s64 + -8;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x831cdbc0
	sub_831CDBC0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x831cdbc0
	sub_831CDBC0(ctx, base);
	// lis r11,-31981
	r11.s64 = -2095906816;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-10952
	ctx.r4.s64 = r11.s64 + -10952;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x8312f100
	sub_8312F100(ctx, base);
loc_8312DFE4:
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

__attribute__((alias("__imp__sub_8312E000"))) PPC_WEAK_FUNC(sub_8312E000);
PPC_FUNC_IMPL(__imp__sub_8312E000) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r8,r11,-6100
	ctx.r8.s64 = r11.s64 + -6100;
	// li r30,1
	r30.s64 = 1;
loc_8312E020:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r8
	reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r30,0,r8
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), reserved.s32, __builtin_bswap32(r30.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8312e020
	if (!cr0.eq) goto loc_8312E020;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8312e058
	if (cr6.eq) goto loc_8312E058;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-604
	ctx.r3.s64 = r11.s64 + -604;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8312e0b0
	goto loc_8312E0B0;
loc_8312E058:
	// addi r11,r31,-1
	r11.s64 = r31.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// bl 0x8312f4f8
	sub_8312F4F8(ctx, base);
	// lis r11,-31947
	r11.s64 = -2093678592;
	// stw r31,25104(r11)
	PPC_STORE_U32(r11.u32 + 25104, r31.u32);
	// lwz r11,25104(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 25104);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x8312e0a4
	if (cr6.lt) goto loc_8312E0A4;
	// beq cr6,0x8312e0ac
	if (cr6.eq) goto loc_8312E0AC;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x8312e0a4
	if (cr6.lt) goto loc_8312E0A4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-644
	ctx.r3.s64 = r11.s64 + -644;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// b 0x8312e0ac
	goto loc_8312E0AC;
loc_8312E0A4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8312de60
	sub_8312DE60(ctx, base);
loc_8312E0AC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8312E0B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8312E0B8"))) PPC_WEAK_FUNC(sub_8312E0B8);
PPC_FUNC_IMPL(__imp__sub_8312E0B8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x8312eb48
	sub_8312EB48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312E0C0"))) PPC_WEAK_FUNC(sub_8312E0C0);
PPC_FUNC_IMPL(__imp__sub_8312E0C0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r7,r11,-5988
	ctx.r7.s64 = r11.s64 + -5988;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8312E0E4:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r7
	reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r10,0,r7
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x8312e0e4
	if (!cr0.eq) goto loc_8312E0E4;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8312e118
	if (cr6.eq) goto loc_8312E118;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-472
	ctx.r3.s64 = r11.s64 + -472;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// b 0x8312e18c
	goto loc_8312E18C;
loc_8312E118:
	// bl 0x83131d60
	sub_83131D60(ctx, base);
	// lis r11,-31981
	r11.s64 = -2095906816;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-8008
	ctx.r3.s64 = r11.s64 + -8008;
	// bl 0x831325d8
	sub_831325D8(ctx, base);
	// lis r11,-31981
	r11.s64 = -2095906816;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r10,-480
	ctx.r3.s64 = ctx.r10.s64 + -480;
	// addi r4,r11,11928
	ctx.r4.s64 = r11.s64 + 11928;
	// bl 0x83132dc8
	sub_83132DC8(ctx, base);
	// bl 0x831307a0
	sub_831307A0(ctx, base);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r11,-31981
	r11.s64 = -2095906816;
	// addi r31,r10,-488
	r31.s64 = ctx.r10.s64 + -488;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-2256
	ctx.r4.s64 = r11.s64 + -2256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83132dc8
	sub_83132DC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831328a0
	sub_831328A0(ctx, base);
	// bl 0x8312d440
	sub_8312D440(ctx, base);
	// bl 0x83131c58
	sub_83131C58(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8312e184
	if (cr6.eq) goto loc_8312E184;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x8312e188
	goto loc_8312E188;
loc_8312E184:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8312E188:
	// bl 0x831306b0
	sub_831306B0(ctx, base);
loc_8312E18C:
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

__attribute__((alias("__imp__sub_8312E1A8"))) PPC_WEAK_FUNC(sub_8312E1A8);
PPC_FUNC_IMPL(__imp__sub_8312E1A8) {
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
	// bl 0x83133a70
	sub_83133A70(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8312e1d0
	if (cr0.eq) goto loc_8312E1D0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-296
	ctx.r3.s64 = r11.s64 + -296;
loc_8312E1C8:
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// b 0x8312e21c
	goto loc_8312E21C;
loc_8312E1D0:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r11,-5988
	ctx.r7.s64 = r11.s64 + -5988;
loc_8312E1DC:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r7
	reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r10,0,r7
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x8312e1dc
	if (!cr0.eq) goto loc_8312E1DC;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8312e20c
	if (!cr6.eq) goto loc_8312E20C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-392
	ctx.r3.s64 = r11.s64 + -392;
	// b 0x8312e1c8
	goto loc_8312E1C8;
loc_8312E20C:
	// bl 0x83131cb0
	sub_83131CB0(ctx, base);
	// bl 0x8312d478
	sub_8312D478(ctx, base);
	// bl 0x83131dd0
	sub_83131DD0(ctx, base);
	// bl 0x83131868
	sub_83131868(ctx, base);
loc_8312E21C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312E230"))) PPC_WEAK_FUNC(sub_8312E230);
PPC_FUNC_IMPL(__imp__sub_8312E230) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31942
	r11.s64 = -2093350912;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r7,r11,-5984
	ctx.r7.s64 = r11.s64 + -5984;
loc_8312E23C:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r7
	reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r10,0,r7
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x8312e23c
	if (!cr0.eq) goto loc_8312E23C;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8312e26c
	if (cr6.eq) goto loc_8312E26C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-192
	ctx.r3.s64 = r11.s64 + -192;
	// b 0x8312eb48
	sub_8312EB48(ctx, base);
	return;
loc_8312E26C:
	// b 0x831341d8
	sub_831341D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312E270"))) PPC_WEAK_FUNC(sub_8312E270);
PPC_FUNC_IMPL(__imp__sub_8312E270) {
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
	// bl 0x83133a70
	sub_83133A70(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8312e298
	if (cr0.eq) goto loc_8312E298;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-24
	ctx.r3.s64 = r11.s64 + -24;
loc_8312E290:
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// b 0x8312e2d8
	goto loc_8312E2D8;
loc_8312E298:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r11,-5984
	ctx.r7.s64 = r11.s64 + -5984;
loc_8312E2A4:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r7
	reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r10,0,r7
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x8312e2a4
	if (!cr0.eq) goto loc_8312E2A4;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8312e2d4
	if (!cr6.eq) goto loc_8312E2D4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-120
	ctx.r3.s64 = r11.s64 + -120;
	// b 0x8312e290
	goto loc_8312E290;
loc_8312E2D4:
	// bl 0x83133c28
	sub_83133C28(ctx, base);
loc_8312E2D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312E2E8"))) PPC_WEAK_FUNC(sub_8312E2E8);
PPC_FUNC_IMPL(__imp__sub_8312E2E8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r30,20(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r10,r30,4
	ctx.r10.s64 = r30.s64 + 4;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// ble cr6,0x8312e32c
	if (!cr6.gt) goto loc_8312E32C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,112
	ctx.r3.s64 = r11.s64 + 112;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8312e380
	goto loc_8312E380;
loc_8312E32C:
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,512
	ctx.r8.s64 = 33554432;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831ce3f8
	sub_831CE3F8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stwx r3,r30,r31
	PPC_STORE_U32(r30.u32 + r31.u32, ctx.r3.u32);
	// bne cr6,0x8312e364
	if (!cr6.eq) goto loc_8312E364;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,72
	ctx.r3.s64 = r11.s64 + 72;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// b 0x8312e37c
	goto loc_8312E37C;
loc_8312E364:
	// lwz r10,300(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 300);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r10,300(r31)
	PPC_STORE_U32(r31.u32 + 300, ctx.r10.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
loc_8312E37C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8312E380:
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

__attribute__((alias("__imp__sub_8312E398"))) PPC_WEAK_FUNC(sub_8312E398);
PPC_FUNC_IMPL(__imp__sub_8312E398) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8312e3c4
	if (!cr6.eq) goto loc_8312E3C4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,156
	ctx.r3.s64 = r11.s64 + 156;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8312e46c
	goto loc_8312E46C;
loc_8312E3C4:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r28,0
	r28.s64 = 0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8312e3e0
	if (cr0.eq) goto loc_8312E3E0;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// b 0x8312e3e8
	goto loc_8312E3E8;
loc_8312E3E0:
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// stw r11,-5944(r9)
	PPC_STORE_U32(ctx.r9.u32 + -5944, r11.u32);
loc_8312E3E8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8312e3f4
	if (cr6.eq) goto loc_8312E3F4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_8312E3F4:
	// lwz r11,300(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 300);
	// addi r30,r31,304
	r30.s64 = r31.s64 + 304;
	// mr r29,r28
	r29.u64 = r28.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8312e430
	if (!cr6.gt) goto loc_8312E430;
loc_8312E408:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8312e41c
	if (cr0.eq) goto loc_8312E41C;
	// bl 0x82bd4418
	sub_82BD4418(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
loc_8312E41C:
	// lwz r11,300(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 300);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x8312e408
	if (cr6.lt) goto loc_8312E408;
loc_8312E430:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8312e440
	if (cr6.eq) goto loc_8312E440;
	// lwz r28,8(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_8312E440:
	// li r5,304
	ctx.r5.s64 = 304;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8312e468
	if (cr6.eq) goto loc_8312E468;
	// bl 0x82bd92e8
	sub_82BD92E8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82bd8600
	sub_82BD8600(ctx, base);
loc_8312E468:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8312E46C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8312E478"))) PPC_WEAK_FUNC(sub_8312E478);
PPC_FUNC_IMPL(__imp__sub_8312E478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312E490"))) PPC_WEAK_FUNC(sub_8312E490);
PPC_FUNC_IMPL(__imp__sub_8312E490) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8312e4c0
	if (cr6.eq) goto loc_8312E4C0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8312e4c0
	if (cr6.eq) goto loc_8312E4C0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x8312e4cc
	if (!cr6.eq) goto loc_8312E4CC;
loc_8312E4C0:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,196
	ctx.r3.s64 = r11.s64 + 196;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_8312E4CC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,292(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x831b8aa8
	sub_831B8AA8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8312e538
	if (!cr0.eq) goto loc_8312E538;
	// lwz r11,296(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 296);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x8312e4f8
	if (!cr6.eq) goto loc_8312E4F8;
	// li r11,1
	r11.s64 = 1;
	// b 0x8312e53c
	goto loc_8312E53C;
loc_8312E4F8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831cd890
	sub_831CD890(ctx, base);
	// lwz r11,292(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8312e51c
	goto loc_8312E51C;
loc_8312E50C:
	// lbzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + r30.u32);
	// cmplwi cr6,r9,92
	cr6.compare<uint32_t>(ctx.r9.u32, 92, xer);
	// bne cr6,0x8312e51c
	if (!cr6.eq) goto loc_8312E51C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_8312E51C:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// blt cr6,0x8312e50c
	if (cr6.lt) goto loc_8312E50C;
	// lwz r11,296(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 296);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// ble cr6,0x8312e53c
	if (!cr6.gt) goto loc_8312E53C;
loc_8312E538:
	// li r11,0
	r11.s64 = 0;
loc_8312E53C:
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8312E550"))) PPC_WEAK_FUNC(sub_8312E550);
PPC_FUNC_IMPL(__imp__sub_8312E550) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-5980
	r31.s64 = r11.s64 + -5980;
	// addi r8,r31,32
	ctx.r8.s64 = r31.s64 + 32;
loc_8312E56C:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r8
	reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r8
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8312e56c
	if (!cr0.eq) goto loc_8312E56C;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8312e5f4
	if (!cr6.eq) goto loc_8312E5F4;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83137798
	sub_83137798(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8312e5c0
	if (!cr0.eq) goto loc_8312E5C0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,428
	ctx.r3.s64 = r11.s64 + 428;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8312e5f8
	goto loc_8312E5F8;
loc_8312E5C0:
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x8312e5d8
	if (!cr0.lt) goto loc_8312E5D8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,240
	ctx.r3.s64 = r11.s64 + 240;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_8312E5D8:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x8312e5f4
	if (!cr0.lt) goto loc_8312E5F4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,336
	ctx.r3.s64 = r11.s64 + 336;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_8312E5F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8312E5F8:
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

__attribute__((alias("__imp__sub_8312E610"))) PPC_WEAK_FUNC(sub_8312E610);
PPC_FUNC_IMPL(__imp__sub_8312E610) {
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
	// lis r31,-31942
	r31.s64 = -2093350912;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,-5940(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -5940);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x8312e648
	if (!cr0.lt) goto loc_8312E648;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,240
	ctx.r3.s64 = r11.s64 + 240;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_8312E648:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8312e398
	sub_8312E398(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,-5940(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -5940);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x8312e670
	if (!cr0.lt) goto loc_8312E670;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,336
	ctx.r3.s64 = r11.s64 + 336;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_8312E670:
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

__attribute__((alias("__imp__sub_8312E690"))) PPC_WEAK_FUNC(sub_8312E690);
PPC_FUNC_IMPL(__imp__sub_8312E690) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-5940
	r31.s64 = r11.s64 + -5940;
	// addi r8,r31,-8
	ctx.r8.s64 = r31.s64 + -8;
loc_8312E6B0:
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
	// bne 0x8312e6b0
	if (!cr0.eq) goto loc_8312E6B0;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8312e744
	if (!cr6.eq) goto loc_8312E744;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x8312e6f4
	if (!cr0.lt) goto loc_8312E6F4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,240
	ctx.r3.s64 = r11.s64 + 240;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_8312E6F4:
	// lis r30,-31942
	r30.s64 = -2093350912;
	// b 0x8312e704
	goto loc_8312E704;
loc_8312E6FC:
	// lwz r3,-5944(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -5944);
	// bl 0x8312e398
	sub_8312E398(ctx, base);
loc_8312E704:
	// lwz r11,-5944(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -5944);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8312e6fc
	if (!cr6.eq) goto loc_8312E6FC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x8312e72c
	if (!cr0.lt) goto loc_8312E72C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,336
	ctx.r3.s64 = r11.s64 + 336;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_8312E72C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8312e744
	if (cr6.eq) goto loc_8312E744;
	// bl 0x83137878
	sub_83137878(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8312E744:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_8312E760"))) PPC_WEAK_FUNC(sub_8312E760);
PPC_FUNC_IMPL(__imp__sub_8312E760) {
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
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31942
	r28.s64 = -2093350912;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r3,-5940(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -5940);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x8312e798
	if (!cr0.lt) goto loc_8312E798;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,240
	ctx.r3.s64 = r11.s64 + 240;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_8312E798:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8312e7b4
	if (!cr6.eq) goto loc_8312E7B4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,520
	ctx.r3.s64 = r11.s64 + 520;
loc_8312E7A8:
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r31,-1
	r31.s64 = -1;
	// b 0x8312e844
	goto loc_8312E844;
loc_8312E7B4:
	// li r11,304
	r11.s64 = 304;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x83137e98
	sub_83137E98(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,280
	ctx.r4.s64 = 280;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x83137a30
	sub_83137A30(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x8312e7f4
	if (!cr0.lt) goto loc_8312E7F4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,476
	ctx.r3.s64 = r11.s64 + 476;
	// b 0x8312e7a8
	goto loc_8312E7A8;
loc_8312E7F4:
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83137b00
	sub_83137B00(ctx, base);
	// lis r11,-31981
	r11.s64 = -2095906816;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r11,-7048
	ctx.r4.s64 = r11.s64 + -7048;
	// bl 0x83137b48
	sub_83137B48(ctx, base);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x83137d50
	sub_83137D50(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83137ad0
	sub_83137AD0(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r31,0
	r31.s64 = 0;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_8312E844:
	// lwz r3,-5940(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -5940);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x8312e860
	if (!cr0.lt) goto loc_8312E860;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,336
	ctx.r3.s64 = r11.s64 + 336;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_8312E860:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8312E870"))) PPC_WEAK_FUNC(sub_8312E870);
PPC_FUNC_IMPL(__imp__sub_8312E870) {
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
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31942
	r28.s64 = -2093350912;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r3,-5940(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -5940);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x8312e8a4
	if (!cr0.lt) goto loc_8312E8A4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,240
	ctx.r3.s64 = r11.s64 + 240;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_8312E8A4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8312e908
	if (cr6.eq) goto loc_8312E908;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8312e908
	if (cr6.eq) goto loc_8312E908;
	// li r30,0
	r30.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r30.u32);
	// bl 0x83137e98
	sub_83137E98(ctx, base);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r31,-5944(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + -5944);
	// b 0x8312e8fc
	goto loc_8312E8FC;
loc_8312E8D4:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8312e490
	sub_8312E490(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x8312e918
	if (cr0.lt) goto loc_8312E918;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8312e918
	if (!cr6.eq) goto loc_8312E918;
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_8312E8FC:
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// bne 0x8312e8d4
	if (!cr0.eq) goto loc_8312E8D4;
	// b 0x8312e918
	goto loc_8312E918;
loc_8312E908:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,560
	ctx.r3.s64 = r11.s64 + 560;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r30,-1
	r30.s64 = -1;
loc_8312E918:
	// lwz r3,-5940(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -5940);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x8312e934
	if (!cr0.lt) goto loc_8312E934;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,336
	ctx.r3.s64 = r11.s64 + 336;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_8312E934:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8312E940"))) PPC_WEAK_FUNC(sub_8312E940);
PPC_FUNC_IMPL(__imp__sub_8312E940) {
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
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// bne cr6,0x8312e97c
	if (!cr6.eq) goto loc_8312E97C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,728
	ctx.r3.s64 = r11.s64 + 728;
loc_8312E970:
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8312eb3c
	goto loc_8312EB3C;
loc_8312E97C:
	// li r25,0
	r25.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,280
	ctx.r4.s64 = 280;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r25,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r25.u32);
	// bl 0x83137a30
	sub_83137A30(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x8312e9a8
	if (!cr0.lt) goto loc_8312E9A8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,684
	ctx.r3.s64 = r11.s64 + 684;
	// b 0x8312e970
	goto loc_8312E970;
loc_8312E9A8:
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83137b00
	sub_83137B00(ctx, base);
	// li r26,1
	r26.s64 = 1;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8312ea18
	if (!cr6.eq) goto loc_8312EA18;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8312e760
	sub_8312E760(ctx, base);
	// bl 0x82bd92e8
	sub_82BD92E8(ctx, base);
	// lwz r29,84(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82bd7d30
	sub_82BD7D30(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x8312e9f8
	if (!cr0.eq) goto loc_8312E9F8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,644
	ctx.r3.s64 = r11.s64 + 644;
	// b 0x8312e970
	goto loc_8312E970;
loc_8312E9F8:
	// addi r11,r30,3
	r11.s64 = r30.s64 + 3;
	// li r5,304
	ctx.r5.s64 = 304;
	// rlwinm r31,r11,0,0,29
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// stw r26,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r26.u32);
	// b 0x8312ea48
	goto loc_8312EA48;
loc_8312EA18:
	// cmplwi cr6,r29,308
	cr6.compare<uint32_t>(r29.u32, 308, xer);
	// bge cr6,0x8312ea2c
	if (!cr6.lt) goto loc_8312EA2C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,600
	ctx.r3.s64 = r11.s64 + 600;
	// b 0x8312e970
	goto loc_8312E970;
loc_8312EA2C:
	// addi r11,r30,3
	r11.s64 = r30.s64 + 3;
	// li r5,304
	ctx.r5.s64 = 304;
	// rlwinm r31,r11,0,0,29
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// stw r25,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r25.u32);
loc_8312EA48:
	// subf r11,r31,r30
	r11.s64 = r30.s64 - r31.s64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// addi r30,r31,32
	r30.s64 = r31.s64 + 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83137e98
	sub_83137E98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831cd890
	sub_831CD890(ctx, base);
	// add r11,r3,r31
	r11.u64 = ctx.r3.u64 + r31.u64;
	// lbz r10,31(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 31);
	// cmplwi cr6,r10,92
	cr6.compare<uint32_t>(ctx.r10.u32, 92, xer);
	// bne cr6,0x8312ea88
	if (!cr6.eq) goto loc_8312EA88;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// stb r25,31(r11)
	PPC_STORE_U8(r11.u32 + 31, r25.u8);
loc_8312EA88:
	// li r10,304
	ctx.r10.s64 = 304;
	// stw r3,292(r31)
	PPC_STORE_U32(r31.u32 + 292, ctx.r3.u32);
	// lis r11,-31981
	r11.s64 = -2095906816;
	// stw r28,296(r31)
	PPC_STORE_U32(r31.u32 + 296, r28.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// stw r26,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r26.u32);
	// addi r4,r11,-7448
	ctx.r4.s64 = r11.s64 + -7448;
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83137b48
	sub_83137B48(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83137d50
	sub_83137D50(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83137ad0
	sub_83137AD0(ctx, base);
	// li r11,2
	r11.s64 = 2;
	// lis r30,-31942
	r30.s64 = -2093350912;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// lwz r3,-5940(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -5940);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x8312eaf4
	if (!cr0.lt) goto loc_8312EAF4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,240
	ctx.r3.s64 = r11.s64 + 240;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_8312EAF4:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r10,-5944(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -5944);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8312eb14
	if (cr6.eq) goto loc_8312EB14;
	// lwz r10,-5944(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -5944);
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r31.u32);
	// lwz r10,-5944(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -5944);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_8312EB14:
	// lwz r3,-5940(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -5940);
	// stw r31,-5944(r11)
	PPC_STORE_U32(r11.u32 + -5944, r31.u32);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x8312eb34
	if (!cr0.lt) goto loc_8312EB34;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,336
	ctx.r3.s64 = r11.s64 + 336;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_8312EB34:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r31.u32);
loc_8312EB3C:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_8312EB48"))) PPC_WEAK_FUNC(sub_8312EB48);
PPC_FUNC_IMPL(__imp__sub_8312EB48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-5932
	r11.s64 = r11.s64 + -5932;
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,25108(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25108);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312EB78"))) PPC_WEAK_FUNC(sub_8312EB78);
PPC_FUNC_IMPL(__imp__sub_8312EB78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312EB80"))) PPC_WEAK_FUNC(sub_8312EB80);
PPC_FUNC_IMPL(__imp__sub_8312EB80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r10,r11,768
	ctx.r10.s64 = r11.s64 + 768;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r11,r11,-5936
	r11.s64 = r11.s64 + -5936;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r4,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r4.u32);
	// bne cr6,0x8312ebb4
	if (!cr6.eq) goto loc_8312EBB4;
	// lis r10,-32021
	ctx.r10.s64 = -2098528256;
	// lis r9,-31947
	ctx.r9.s64 = -2093678592;
	// addi r11,r10,-32320
	r11.s64 = ctx.r10.s64 + -32320;
	// stw r11,25108(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25108, r11.u32);
	// blr 
	return;
loc_8312EBB4:
	// lis r11,-31947
	r11.s64 = -2093678592;
	// stw r3,25108(r11)
	PPC_STORE_U32(r11.u32 + 25108, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312EBC0"))) PPC_WEAK_FUNC(sub_8312EBC0);
PPC_FUNC_IMPL(__imp__sub_8312EBC0) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-5916
	r11.s64 = r11.s64 + -5916;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8312ec1c
	if (cr6.eq) goto loc_8312EC1C;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r10,-4940(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -4940);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8312ec10
	if (!cr6.eq) goto loc_8312EC10;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// stw r31,-4936(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4936, r31.u32);
loc_8312EC10:
	// lwz r10,-4940(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -4940);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,-4940(r11)
	PPC_STORE_U32(r11.u32 + -4940, ctx.r10.u32);
loc_8312EC1C:
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

__attribute__((alias("__imp__sub_8312EC30"))) PPC_WEAK_FUNC(sub_8312EC30);
PPC_FUNC_IMPL(__imp__sub_8312EC30) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8312ebc0
	sub_8312EBC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312EC38"))) PPC_WEAK_FUNC(sub_8312EC38);
PPC_FUNC_IMPL(__imp__sub_8312EC38) {
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
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31930
	r11.s64 = -2092564480;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,-24608
	r31.s64 = r11.s64 + -24608;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83138320
	sub_83138320(ctx, base);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r11,r11,-5304
	r11.s64 = r11.s64 + -5304;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8312eccc
	if (cr6.eq) goto loc_8312ECCC;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8312ECCC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
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

__attribute__((alias("__imp__sub_8312ECF0"))) PPC_WEAK_FUNC(sub_8312ECF0);
PPC_FUNC_IMPL(__imp__sub_8312ECF0) {
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8312ed2c
	if (!cr6.eq) goto loc_8312ED2C;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-5304
	r11.s64 = r11.s64 + -5304;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8312ed74
	goto loc_8312ED74;
loc_8312ED2C:
	// lis r11,-31930
	r11.s64 = -2092564480;
	// li r6,127
	ctx.r6.s64 = 127;
	// addi r31,r11,-24608
	r31.s64 = r11.s64 + -24608;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83138248
	sub_83138248(ctx, base);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r11,r11,-5304
	r11.s64 = r11.s64 + -5304;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8312ed6c
	if (cr6.eq) goto loc_8312ED6C;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8312ED6C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_8312ED74:
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

__attribute__((alias("__imp__sub_8312ED88"))) PPC_WEAK_FUNC(sub_8312ED88);
PPC_FUNC_IMPL(__imp__sub_8312ED88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r11,r11,-5916
	r11.s64 = r11.s64 + -5916;
	// stw r3,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r3.u32);
	// stw r4,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312EDA0"))) PPC_WEAK_FUNC(sub_8312EDA0);
PPC_FUNC_IMPL(__imp__sub_8312EDA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r11,r11,-5908
	r11.s64 = r11.s64 + -5908;
	// stw r3,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r3.u32);
	// stw r4,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312EDB8"))) PPC_WEAK_FUNC(sub_8312EDB8);
PPC_FUNC_IMPL(__imp__sub_8312EDB8) {
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
	// lis r11,-31930
	r11.s64 = -2092564480;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r3,r11,-24640
	ctx.r3.s64 = r11.s64 + -24640;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lis r5,-31930
	ctx.r5.s64 = -2092564480;
	// addi r10,r11,-5920
	ctx.r10.s64 = r11.s64 + -5920;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// addi r7,r10,608
	ctx.r7.s64 = ctx.r10.s64 + 608;
	// addi r6,r10,20
	ctx.r6.s64 = ctx.r10.s64 + 20;
	// addi r5,r5,-24480
	ctx.r5.s64 = ctx.r5.s64 + -24480;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r11.u32);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r11.u32);
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, r11.u32);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, r11.u32);
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, r11.u32);
loc_8312EE20:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// addi r9,r5,24
	ctx.r9.s64 = ctx.r5.s64 + 24;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// cmpw cr6,r4,r9
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, xer);
	// blt cr6,0x8312ee20
	if (cr6.lt) goto loc_8312EE20;
	// addi r3,r10,624
	ctx.r3.s64 = ctx.r10.s64 + 624;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312EE58"))) PPC_WEAK_FUNC(sub_8312EE58);
PPC_FUNC_IMPL(__imp__sub_8312EE58) {
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
	// lis r28,-31942
	r28.s64 = -2093350912;
	// lwz r11,-4944(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -4944);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8312eeb4
	if (!cr6.eq) goto loc_8312EEB4;
	// bl 0x8312edb8
	sub_8312EDB8(ctx, base);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r29,r11,-5200
	r29.s64 = r11.s64 + -5200;
	// addi r30,r29,-96
	r30.s64 = r29.s64 + -96;
	// mr r31,r29
	r31.u64 = r29.u64;
loc_8312EE88:
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83137798
	sub_83137798(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// beq 0x8312eec8
	if (cr0.eq) goto loc_8312EEC8;
	// addi r31,r31,32
	r31.s64 = r31.s64 + 32;
	// addi r11,r29,256
	r11.s64 = r29.s64 + 256;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x8312ee88
	if (cr6.lt) goto loc_8312EE88;
loc_8312EEB4:
	// lwz r11,-4944(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -4944);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,-4944(r28)
	PPC_STORE_U32(r28.u32 + -4944, r11.u32);
loc_8312EEC0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_8312EEC8:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,904
	ctx.r3.s64 = r11.s64 + 904;
	// bl 0x8312ecf0
	sub_8312ECF0(ctx, base);
	// b 0x8312eec0
	goto loc_8312EEC0;
}

__attribute__((alias("__imp__sub_8312EED8"))) PPC_WEAK_FUNC(sub_8312EED8);
PPC_FUNC_IMPL(__imp__sub_8312EED8) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r10,-4944(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -4944);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,-4944(r11)
	PPC_STORE_U32(r11.u32 + -4944, ctx.r10.u32);
	// lwz r11,-4944(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4944);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8312ef40
	if (!cr6.eq) goto loc_8312EF40;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r30,r11,-5304
	r30.s64 = r11.s64 + -5304;
	// addi r31,r30,8
	r31.s64 = r30.s64 + 8;
loc_8312EF14:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x83137878
	sub_83137878(ctx, base);
	// addi r11,r30,8
	r11.s64 = r30.s64 + 8;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x8312ef14
	if (cr6.lt) goto loc_8312EF14;
	// bl 0x8312edb8
	sub_8312EDB8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
loc_8312EF40:
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

__attribute__((alias("__imp__sub_8312EF58"))) PPC_WEAK_FUNC(sub_8312EF58);
PPC_FUNC_IMPL(__imp__sub_8312EF58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r10,-5920(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -5920);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8312ef70
	if (cr6.eq) goto loc_8312EF70;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8312EF70:
	// stw r3,-5920(r11)
	PPC_STORE_U32(r11.u32 + -5920, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312EF80"))) PPC_WEAK_FUNC(sub_8312EF80);
PPC_FUNC_IMPL(__imp__sub_8312EF80) {
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
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x8312efa4
	if (cr6.lt) goto loc_8312EFA4;
	// cmpwi cr6,r31,8
	cr6.compare<int32_t>(r31.s32, 8, xer);
	// blt cr6,0x8312efb0
	if (cr6.lt) goto loc_8312EFB0;
loc_8312EFA4:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,1056
	ctx.r3.s64 = r11.s64 + 1056;
	// bl 0x8312ecf0
	sub_8312ECF0(ctx, base);
loc_8312EFB0:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-5296
	r11.s64 = r11.s64 + -5296;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x8312efd8
	if (!cr0.lt) goto loc_8312EFD8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,960
	ctx.r3.s64 = r11.s64 + 960;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_8312EFD8:
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

__attribute__((alias("__imp__sub_8312EFF0"))) PPC_WEAK_FUNC(sub_8312EFF0);
PPC_FUNC_IMPL(__imp__sub_8312EFF0) {
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
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x8312f014
	if (cr6.lt) goto loc_8312F014;
	// cmpwi cr6,r31,8
	cr6.compare<int32_t>(r31.s32, 8, xer);
	// blt cr6,0x8312f020
	if (cr6.lt) goto loc_8312F020;
loc_8312F014:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,1232
	ctx.r3.s64 = r11.s64 + 1232;
	// bl 0x8312ecf0
	sub_8312ECF0(ctx, base);
loc_8312F020:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-5296
	r11.s64 = r11.s64 + -5296;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x8312f048
	if (!cr0.lt) goto loc_8312F048;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,1136
	ctx.r3.s64 = r11.s64 + 1136;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_8312F048:
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

__attribute__((alias("__imp__sub_8312F060"))) PPC_WEAK_FUNC(sub_8312F060);
PPC_FUNC_IMPL(__imp__sub_8312F060) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r30,r11,-5908
	r30.s64 = r11.s64 + -5908;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8312f0e0
	if (cr6.eq) goto loc_8312F0E0;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r10,-4940(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -4940);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,-4940(r11)
	PPC_STORE_U32(r11.u32 + -4940, ctx.r10.u32);
	// lwz r11,-4940(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4940);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8312f0d0
	if (!cr6.eq) goto loc_8312F0D0;
	// lis r31,-31942
	r31.s64 = -2093350912;
	// lwz r11,-4936(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -4936);
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(r11.s32, ctx.r5.s32, xer);
	// beq cr6,0x8312f0c8
	if (cr6.eq) goto loc_8312F0C8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lwz r4,-4936(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + -4936);
	// addi r3,r11,1312
	ctx.r3.s64 = r11.s64 + 1312;
	// bl 0x8312ec38
	sub_8312EC38(ctx, base);
loc_8312F0C8:
	// li r11,0
	r11.s64 = 0;
	// stw r11,-4936(r31)
	PPC_STORE_U32(r31.u32 + -4936, r11.u32);
loc_8312F0D0:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8312F0E0:
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

__attribute__((alias("__imp__sub_8312F0F8"))) PPC_WEAK_FUNC(sub_8312F0F8);
PPC_FUNC_IMPL(__imp__sub_8312F0F8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8312f060
	sub_8312F060(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312F100"))) PPC_WEAK_FUNC(sub_8312F100);
PPC_FUNC_IMPL(__imp__sub_8312F100) {
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
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8312ebc0
	sub_8312EBC0(ctx, base);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// rlwinm r11,r31,3,0,28
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,-5264
	ctx.r10.s64 = ctx.r10.s64 + -5264;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// stwx r30,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r30.u32);
	// stwx r29,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, r29.u32);
	// bl 0x8312f060
	sub_8312F060(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8312F148"))) PPC_WEAK_FUNC(sub_8312F148);
PPC_FUNC_IMPL(__imp__sub_8312F148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// bl 0x8312ef80
	sub_8312EF80(ctx, base);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mulli r10,r31,72
	ctx.r10.s64 = r31.s64 * 72;
	// addi r11,r11,-5888
	r11.s64 = r11.s64 + -5888;
	// li r26,6
	r26.s64 = 6;
	// add r27,r10,r11
	r27.u64 = ctx.r10.u64 + r11.u64;
	// lis r11,-31930
	r11.s64 = -2092564480;
	// addi r28,r11,-24640
	r28.s64 = r11.s64 + -24640;
loc_8312F17C:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8312f1ac
	if (cr0.eq) goto loc_8312F1AC;
	// rlwinm r29,r31,2,0,29
	r29.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,1
	ctx.r10.s64 = 1;
	// stwx r10,r29,r28
	PPC_STORE_U32(r29.u32 + r28.u32, ctx.r10.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	r11.s64 = 0;
	// or r30,r3,r30
	r30.u64 = ctx.r3.u64 | r30.u64;
	// stwx r11,r29,r28
	PPC_STORE_U32(r29.u32 + r28.u32, r11.u32);
loc_8312F1AC:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r27,r27,12
	r27.s64 = r27.s64 + 12;
	// bne 0x8312f17c
	if (!cr0.eq) goto loc_8312F17C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8312eff0
	sub_8312EFF0(ctx, base);
	// lis r11,-31930
	r11.s64 = -2092564480;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-24480
	r11.s64 = r11.s64 + -24480;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_8312F1E8"))) PPC_WEAK_FUNC(sub_8312F1E8);
PPC_FUNC_IMPL(__imp__sub_8312F1E8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8312f148
	sub_8312F148(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312F1F0"))) PPC_WEAK_FUNC(sub_8312F1F0);
PPC_FUNC_IMPL(__imp__sub_8312F1F0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8312f148
	sub_8312F148(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312F1F8"))) PPC_WEAK_FUNC(sub_8312F1F8);
PPC_FUNC_IMPL(__imp__sub_8312F1F8) {
	PPC_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8312f148
	sub_8312F148(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312F200"))) PPC_WEAK_FUNC(sub_8312F200);
PPC_FUNC_IMPL(__imp__sub_8312F200) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8312f148
	sub_8312F148(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312F208"))) PPC_WEAK_FUNC(sub_8312F208);
PPC_FUNC_IMPL(__imp__sub_8312F208) {
	PPC_FUNC_PROLOGUE();
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x8312f148
	sub_8312F148(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312F210"))) PPC_WEAK_FUNC(sub_8312F210);
PPC_FUNC_IMPL(__imp__sub_8312F210) {
	PPC_FUNC_PROLOGUE();
	// li r3,5
	ctx.r3.s64 = 5;
	// b 0x8312f148
	sub_8312F148(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312F218"))) PPC_WEAK_FUNC(sub_8312F218);
PPC_FUNC_IMPL(__imp__sub_8312F218) {
	PPC_FUNC_PROLOGUE();
	// li r3,6
	ctx.r3.s64 = 6;
	// b 0x8312f148
	sub_8312F148(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312F220"))) PPC_WEAK_FUNC(sub_8312F220);
PPC_FUNC_IMPL(__imp__sub_8312F220) {
	PPC_FUNC_PROLOGUE();
	// li r3,7
	ctx.r3.s64 = 7;
	// b 0x8312f148
	sub_8312F148(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312F228"))) PPC_WEAK_FUNC(sub_8312F228);
PPC_FUNC_IMPL(__imp__sub_8312F228) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,-5920(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -5920);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8312f260
	if (cr6.eq) goto loc_8312F260;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8312f28c
	goto loc_8312F28C;
loc_8312F260:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8312ebc0
	sub_8312EBC0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// xori r31,r11,1
	r31.u64 = r11.u64 ^ 1;
	// bl 0x8312f060
	sub_8312F060(ctx, base);
loc_8312F28C:
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

__attribute__((alias("__imp__sub_8312F2A8"))) PPC_WEAK_FUNC(sub_8312F2A8);
PPC_FUNC_IMPL(__imp__sub_8312F2A8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x8312ebc0
	sub_8312EBC0(ctx, base);
	// cmplwi cr6,r31,7
	cr6.compare<uint32_t>(r31.u32, 7, xer);
	// bgt cr6,0x8312f358
	if (cr6.gt) goto loc_8312F358;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8312ef80
	sub_8312EF80(ctx, base);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mulli r10,r31,72
	ctx.r10.s64 = r31.s64 * 72;
	// addi r11,r11,-5888
	r11.s64 = r11.s64 + -5888;
	// li r30,0
	r30.s64 = 0;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
loc_8312F2F0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8312f310
	if (cr6.eq) goto loc_8312F310;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// cmpwi cr6,r30,6
	cr6.compare<int32_t>(r30.s32, 6, xer);
	// blt cr6,0x8312f2f0
	if (cr6.lt) goto loc_8312F2F0;
	// b 0x8312f334
	goto loc_8312F334;
loc_8312F310:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// stw r27,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r27.u32);
	// beq cr6,0x8312f328
	if (cr6.eq) goto loc_8312F328;
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// b 0x8312f334
	goto loc_8312F334;
loc_8312F328:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r10,r10,10700
	ctx.r10.s64 = ctx.r10.s64 + 10700;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
loc_8312F334:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8312eff0
	sub_8312EFF0(ctx, base);
	// cmpwi cr6,r30,6
	cr6.compare<int32_t>(r30.s32, 6, xer);
	// bne cr6,0x8312f350
	if (!cr6.eq) goto loc_8312F350;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,1424
	ctx.r3.s64 = r11.s64 + 1424;
	// b 0x8312f360
	goto loc_8312F360;
loc_8312F350:
	// mr r31,r30
	r31.u64 = r30.u64;
	// b 0x8312f368
	goto loc_8312F368;
loc_8312F358:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,1384
	ctx.r3.s64 = r11.s64 + 1384;
loc_8312F360:
	// bl 0x8312ecf0
	sub_8312ECF0(ctx, base);
	// li r31,-1
	r31.s64 = -1;
loc_8312F368:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8312f060
	sub_8312F060(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8312F380"))) PPC_WEAK_FUNC(sub_8312F380);
PPC_FUNC_IMPL(__imp__sub_8312F380) {
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
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8312ebc0
	sub_8312EBC0(ctx, base);
	// cmplwi cr6,r30,5
	cr6.compare<uint32_t>(r30.u32, 5, xer);
	// bgt cr6,0x8312f400
	if (cr6.gt) goto loc_8312F400;
	// cmplwi cr6,r31,7
	cr6.compare<uint32_t>(r31.u32, 7, xer);
	// bgt cr6,0x8312f3f4
	if (cr6.gt) goto loc_8312F3F4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8312ef80
	sub_8312EF80(ctx, base);
	// mulli r11,r31,6
	r11.s64 = r31.s64 * 6;
	// add r10,r11,r30
	ctx.r10.u64 = r11.u64 + r30.u64;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// li r9,0
	ctx.r9.s64 = 0;
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// addi r11,r11,-5888
	r11.s64 = r11.s64 + -5888;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r8,r11,4
	ctx.r8.s64 = r11.s64 + 4;
	// addi r7,r11,8
	ctx.r7.s64 = r11.s64 + 8;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r9.u32);
	// stwx r9,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// stwx r9,r10,r7
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r9.u32);
	// bl 0x8312eff0
	sub_8312EFF0(ctx, base);
	// b 0x8312f40c
	goto loc_8312F40C;
loc_8312F3F4:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,1504
	ctx.r3.s64 = r11.s64 + 1504;
	// b 0x8312f408
	goto loc_8312F408;
loc_8312F400:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,1472
	ctx.r3.s64 = r11.s64 + 1472;
loc_8312F408:
	// bl 0x8312ecf0
	sub_8312ECF0(ctx, base);
loc_8312F40C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8312f060
	sub_8312F060(ctx, base);
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

__attribute__((alias("__imp__sub_8312F430"))) PPC_WEAK_FUNC(sub_8312F430);
PPC_FUNC_IMPL(__imp__sub_8312F430) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// bl 0x8312ebc0
	sub_8312EBC0(ctx, base);
	// cmplwi cr6,r31,5
	cr6.compare<uint32_t>(r31.u32, 5, xer);
	// bgt cr6,0x8312f4dc
	if (cr6.gt) goto loc_8312F4DC;
	// cmplwi cr6,r30,7
	cr6.compare<uint32_t>(r30.u32, 7, xer);
	// bgt cr6,0x8312f4d0
	if (cr6.gt) goto loc_8312F4D0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8312ef80
	sub_8312EF80(ctx, base);
	// mulli r11,r30,6
	r11.s64 = r30.s64 * 6;
	// add r10,r11,r31
	ctx.r10.u64 = r11.u64 + r31.u64;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// addi r11,r11,-5888
	r11.s64 = r11.s64 + -5888;
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8312f4a0
	if (cr6.eq) goto loc_8312F4A0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,1620
	ctx.r3.s64 = r11.s64 + 1620;
	// bl 0x8312ecf0
	sub_8312ECF0(ctx, base);
loc_8312F4A0:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// stw r27,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r27.u32);
	// beq cr6,0x8312f4b8
	if (cr6.eq) goto loc_8312F4B8;
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// b 0x8312f4c4
	goto loc_8312F4C4;
loc_8312F4B8:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,10700
	r11.s64 = r11.s64 + 10700;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_8312F4C4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8312eff0
	sub_8312EFF0(ctx, base);
	// b 0x8312f4e8
	goto loc_8312F4E8;
loc_8312F4D0:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,1580
	ctx.r3.s64 = r11.s64 + 1580;
	// b 0x8312f4e4
	goto loc_8312F4E4;
loc_8312F4DC:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,1544
	ctx.r3.s64 = r11.s64 + 1544;
loc_8312F4E4:
	// bl 0x8312ecf0
	sub_8312ECF0(ctx, base);
loc_8312F4E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8312f060
	sub_8312F060(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8312F4F8"))) PPC_WEAK_FUNC(sub_8312F4F8);
PPC_FUNC_IMPL(__imp__sub_8312F4F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31947
	r11.s64 = -2093678592;
	// stw r3,25112(r11)
	PPC_STORE_U32(r11.u32 + 25112, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F508"))) PPC_WEAK_FUNC(sub_8312F508);
PPC_FUNC_IMPL(__imp__sub_8312F508) {
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
	// bl 0x8312f1e8
	sub_8312F1E8(ctx, base);
	// bl 0x8312f1f0
	sub_8312F1F0(ctx, base);
	// bl 0x8312f1f8
	sub_8312F1F8(ctx, base);
	// bl 0x8312f200
	sub_8312F200(ctx, base);
	// bl 0x8312f208
	sub_8312F208(ctx, base);
	// bl 0x8312f210
	sub_8312F210(ctx, base);
	// bl 0x8312f218
	sub_8312F218(ctx, base);
	// bl 0x8312f220
	sub_8312F220(ctx, base);
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

__attribute__((alias("__imp__sub_8312F548"))) PPC_WEAK_FUNC(sub_8312F548);
PPC_FUNC_IMPL(__imp__sub_8312F548) {
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
	// lis r11,-31947
	r11.s64 = -2093678592;
	// lwz r11,25112(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 25112);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x8312f574
	if (!cr6.eq) goto loc_8312F574;
	// bl 0x8312d6a8
	sub_8312D6A8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8312f598
	if (cr6.eq) goto loc_8312F598;
	// li r11,1
	r11.s64 = 1;
loc_8312F574:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8312f5a0
	if (cr6.eq) goto loc_8312F5A0;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x8312f598
	if (cr6.eq) goto loc_8312F598;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x8312f5a4
	if (!cr6.eq) goto loc_8312F5A4;
	// bl 0x8312f218
	sub_8312F218(ctx, base);
	// bl 0x8312f220
	sub_8312F220(ctx, base);
	// b 0x8312f5a4
	goto loc_8312F5A4;
loc_8312F598:
	// bl 0x8312f210
	sub_8312F210(ctx, base);
	// b 0x8312f5a4
	goto loc_8312F5A4;
loc_8312F5A0:
	// bl 0x8312f508
	sub_8312F508(ctx, base);
loc_8312F5A4:
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

__attribute__((alias("__imp__sub_8312F5B8"))) PPC_WEAK_FUNC(sub_8312F5B8);
PPC_FUNC_IMPL(__imp__sub_8312F5B8) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-4932
	r31.s64 = r11.s64 + -4932;
	// addi r11,r31,44
	r11.s64 = r31.s64 + 44;
	// addi r10,r31,44
	ctx.r10.s64 = r31.s64 + 44;
	// addi r9,r31,44
	ctx.r9.s64 = r31.s64 + 44;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8312f624
	if (!cr6.eq) goto loc_8312F624;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// li r11,0
	r11.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,-4896(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4896, r11.u32);
	// bl 0x83137798
	sub_83137798(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8312f624
	if (!cr0.eq) goto loc_8312F624;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,1676
	ctx.r3.s64 = r11.s64 + 1676;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_8312F624:
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

__attribute__((alias("__imp__sub_8312F638"))) PPC_WEAK_FUNC(sub_8312F638);
PPC_FUNC_IMPL(__imp__sub_8312F638) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-4900
	r31.s64 = r11.s64 + -4900;
	// addi r11,r31,12
	r11.s64 = r31.s64 + 12;
	// addi r10,r31,12
	ctx.r10.s64 = r31.s64 + 12;
	// addi r9,r31,12
	ctx.r9.s64 = r31.s64 + 12;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8312f698
	if (!cr6.eq) goto loc_8312F698;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8312f68c
	if (cr6.eq) goto loc_8312F68C;
	// bl 0x83137878
	sub_83137878(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8312F68C:
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// li r11,0
	r11.s64 = 0;
	// stw r11,-4896(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4896, r11.u32);
loc_8312F698:
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

__attribute__((alias("__imp__sub_8312F6B0"))) PPC_WEAK_FUNC(sub_8312F6B0);
PPC_FUNC_IMPL(__imp__sub_8312F6B0) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r3,-4900(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -4900);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x8312f6dc
	if (!cr0.lt) goto loc_8312F6DC;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,1728
	ctx.r3.s64 = r11.s64 + 1728;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_8312F6DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F6F0"))) PPC_WEAK_FUNC(sub_8312F6F0);
PPC_FUNC_IMPL(__imp__sub_8312F6F0) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r3,-4900(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -4900);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x8312f71c
	if (!cr0.lt) goto loc_8312F71C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,1824
	ctx.r3.s64 = r11.s64 + 1824;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_8312F71C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F730"))) PPC_WEAK_FUNC(sub_8312F730);
PPC_FUNC_IMPL(__imp__sub_8312F730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2000
	ctx.r3.s64 = r11.s64 + 2000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F740"))) PPC_WEAK_FUNC(sub_8312F740);
PPC_FUNC_IMPL(__imp__sub_8312F740) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,24576
	ctx.r8.s64 = 1610612736;
	// li r7,3
	ctx.r7.s64 = 3;
	// lwz r11,30868(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 30868);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,3
	ctx.r5.s64 = 3;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// bne cr6,0x8312f788
	if (!cr6.eq) goto loc_8312F788;
	// bl 0x831ce3f8
	sub_831CE3F8(ctx, base);
	// b 0x8312f78c
	goto loc_8312F78C;
loc_8312F788:
	// bl 0x82bd4668
	sub_82BD4668(ctx, base);
loc_8312F78C:
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x8312f7b0
	if (!cr6.eq) goto loc_8312F7B0;
loc_8312F79C:
	// li r11,0
	r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// b 0x8312f814
	goto loc_8312F814;
loc_8312F7B0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83138328
	sub_83138328(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8312f7cc
	if (!cr0.eq) goto loc_8312F7CC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82bd4418
	sub_82BD4418(ctx, base);
	// b 0x8312f79c
	goto loc_8312F79C;
loc_8312F7CC:
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// sradi r10,r11,10
	xer.ca = (r11.s64 < 0) & ((r11.u64 & 0x3FF) != 0);
	ctx.r10.s64 = r11.s64 >> 10;
	// rldicl r10,r10,11,53
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 11) & 0x7FF;
	// std r11,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r11.u64);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// sradi r10,r10,11
	xer.ca = (ctx.r10.s64 < 0) & ((ctx.r10.u64 & 0x7FF) != 0);
	ctx.r10.s64 = ctx.r10.s64 >> 11;
	// sradi r9,r11,11
	xer.ca = (r11.s64 < 0) & ((r11.u64 & 0x7FF) != 0);
	ctx.r9.s64 = r11.s64 >> 11;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// rldicr r9,r9,11,52
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 11) & 0xFFFFFFFFFFFFF800;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(r11.s64, 0, xer);
	// ble cr6,0x8312f80c
	if (!cr6.gt) goto loc_8312F80C;
	// addi r11,r10,1
	r11.s64 = ctx.r10.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
loc_8312F80C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
loc_8312F814:
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

__attribute__((alias("__imp__sub_8312F828"))) PPC_WEAK_FUNC(sub_8312F828);
PPC_FUNC_IMPL(__imp__sub_8312F828) {
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
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,24576
	ctx.r8.s64 = 1610612736;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r4,16384
	ctx.r4.s64 = 1073741824;
	// bl 0x82bd4668
	sub_82BD4668(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// bne cr6,0x8312f87c
	if (!cr6.eq) goto loc_8312F87C;
	// li r11,0
	r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// b 0x8312f89c
	goto loc_8312F89C;
loc_8312F87C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cd3e8
	sub_831CD3E8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// std r11,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r11.u64);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
loc_8312F89C:
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

__attribute__((alias("__imp__sub_8312F8B0"))) PPC_WEAK_FUNC(sub_8312F8B0);
PPC_FUNC_IMPL(__imp__sub_8312F8B0) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b14
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r23,2
	r23.s64 = 131072;
	// li r24,0
	r24.s64 = 0;
	// lwz r29,36(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r28,32(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// srawi r11,r29,17
	xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1FFFF) != 0);
	r11.s64 = r29.s32 >> 17;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// addze r25,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r25.s64 = temp.s64;
	// srawi r11,r29,17
	xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1FFFF) != 0);
	r11.s64 = r29.s32 >> 17;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// mullw r11,r11,r23
	r11.s64 = int64_t(r11.s32) * int64_t(r23.s32);
	// subf. r11,r11,r29
	r11.s64 = r29.s64 - r11.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8312f8f4
	if (cr0.eq) goto loc_8312F8F4;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
loc_8312F8F4:
	// mr r26,r24
	r26.u64 = r24.u64;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// ble cr6,0x8312f9c8
	if (!cr6.gt) goto loc_8312F9C8;
loc_8312F900:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8312f9d4
	if (!cr6.eq) goto loc_8312F9D4;
	// cmpw cr6,r29,r23
	cr6.compare<int32_t>(r29.s32, r23.s32, xer);
	// mr r11,r29
	r11.u64 = r29.u64;
	// blt cr6,0x8312f91c
	if (cr6.lt) goto loc_8312F91C;
	// mr r11,r23
	r11.u64 = r23.u64;
loc_8312F91C:
	// addi r11,r11,2047
	r11.s64 = r11.s64 + 2047;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r27,r31,4
	r27.s64 = r31.s64 + 4;
	// rlwinm r30,r11,0,0,20
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF800;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82bd4478
	sub_82BD4478(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8312f95c
	if (!cr0.eq) goto loc_8312F95C;
	// bl 0x82bd5708
	sub_82BD5708(ctx, base);
	// cmplwi cr6,r3,997
	cr6.compare<uint32_t>(ctx.r3.u32, 997, xer);
	// beq cr6,0x8312f95c
	if (cr6.eq) goto loc_8312F95C;
	// cmplwi cr6,r3,996
	cr6.compare<uint32_t>(ctx.r3.u32, 996, xer);
	// bne cr6,0x8312f9dc
	if (!cr6.eq) goto loc_8312F9DC;
loc_8312F95C:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x831cdfd8
	sub_831CDFD8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8312f9dc
	if (cr0.eq) goto loc_8312F9DC;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x8312f994
	if (!cr6.gt) goto loc_8312F994;
	// subf r5,r11,r30
	ctx.r5.s64 = r30.s64 - r11.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r28,r11
	ctx.r3.u64 = r28.u64 + r11.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
loc_8312F994:
	// ld r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// clrldi r11,r30,32
	r11.u64 = r30.u64 & 0xFFFFFFFF;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r28,r30,r28
	r28.u64 = r30.u64 + r28.u64;
	// subf r29,r30,r29
	r29.s64 = r29.s64 - r30.s64;
	// cmpw cr6,r26,r25
	cr6.compare<int32_t>(r26.s32, r25.s32, xer);
	// std r11,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r11.u64);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// blt cr6,0x8312f900
	if (cr6.lt) goto loc_8312F900;
loc_8312F9C8:
	// stw r24,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r24.u32);
loc_8312F9CC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b64
	return;
loc_8312F9D4:
	// stw r24,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r24.u32);
	// b 0x8312f9c8
	goto loc_8312F9C8;
loc_8312F9DC:
	// li r11,-1
	r11.s64 = -1;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// b 0x8312f9cc
	goto loc_8312F9CC;
}

__attribute__((alias("__imp__sub_8312F9E8"))) PPC_WEAK_FUNC(sub_8312F9E8);
PPC_FUNC_IMPL(__imp__sub_8312F9E8) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b14
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r23,2
	r23.s64 = 131072;
	// li r24,0
	r24.s64 = 0;
	// lwz r29,36(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r28,32(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// srawi r11,r29,17
	xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1FFFF) != 0);
	r11.s64 = r29.s32 >> 17;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// addze r25,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r25.s64 = temp.s64;
	// srawi r11,r29,17
	xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1FFFF) != 0);
	r11.s64 = r29.s32 >> 17;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// mullw r11,r11,r23
	r11.s64 = int64_t(r11.s32) * int64_t(r23.s32);
	// subf. r11,r11,r29
	r11.s64 = r29.s64 - r11.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8312fa2c
	if (cr0.eq) goto loc_8312FA2C;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
loc_8312FA2C:
	// mr r27,r24
	r27.u64 = r24.u64;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// ble cr6,0x8312fae8
	if (!cr6.gt) goto loc_8312FAE8;
loc_8312FA38:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8312faf4
	if (!cr6.eq) goto loc_8312FAF4;
	// cmpw cr6,r29,r23
	cr6.compare<int32_t>(r29.s32, r23.s32, xer);
	// mr r11,r29
	r11.u64 = r29.u64;
	// blt cr6,0x8312fa54
	if (cr6.lt) goto loc_8312FA54;
	// mr r11,r23
	r11.u64 = r23.u64;
loc_8312FA54:
	// addi r11,r11,2047
	r11.s64 = r11.s64 + 2047;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r26,r31,4
	r26.s64 = r31.s64 + 4;
	// rlwinm r30,r11,0,0,20
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF800;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82bd4860
	sub_82BD4860(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8312fa94
	if (!cr0.eq) goto loc_8312FA94;
	// bl 0x82bd5708
	sub_82BD5708(ctx, base);
	// cmplwi cr6,r3,997
	cr6.compare<uint32_t>(ctx.r3.u32, 997, xer);
	// beq cr6,0x8312fa94
	if (cr6.eq) goto loc_8312FA94;
	// cmplwi cr6,r3,996
	cr6.compare<uint32_t>(ctx.r3.u32, 996, xer);
	// bne cr6,0x8312fafc
	if (!cr6.eq) goto loc_8312FAFC;
loc_8312FA94:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x831cdfd8
	sub_831CDFD8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8312fafc
	if (cr0.eq) goto loc_8312FAFC;
	// bl 0x831ce770
	sub_831CE770(ctx, base);
	// ld r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// clrldi r11,r30,32
	r11.u64 = r30.u64 & 0xFFFFFFFF;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r28,r30,r28
	r28.u64 = r30.u64 + r28.u64;
	// subf r29,r30,r29
	r29.s64 = r29.s64 - r30.s64;
	// cmpw cr6,r27,r25
	cr6.compare<int32_t>(r27.s32, r25.s32, xer);
	// std r11,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r11.u64);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// blt cr6,0x8312fa38
	if (cr6.lt) goto loc_8312FA38;
loc_8312FAE8:
	// stw r24,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r24.u32);
loc_8312FAEC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b64
	return;
loc_8312FAF4:
	// stw r24,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r24.u32);
	// b 0x8312fae8
	goto loc_8312FAE8;
loc_8312FAFC:
	// li r11,-1
	r11.s64 = -1;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// b 0x8312faec
	goto loc_8312FAEC;
}

__attribute__((alias("__imp__sub_8312FB08"))) PPC_WEAK_FUNC(sub_8312FB08);
PPC_FUNC_IMPL(__imp__sub_8312FB08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister temp{};
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x831383a0
	sub_831383A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8312fb40
	if (!cr0.eq) goto loc_8312FB40;
loc_8312FB38:
	// li r11,-1
	r11.s64 = -1;
	// b 0x8312fb94
	goto loc_8312FB94;
loc_8312FB40:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x831cd340
	sub_831CD340(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8312fb38
	if (cr0.eq) goto loc_8312FB38;
	// bl 0x831ce770
	sub_831CE770(ctx, base);
	// ld r11,8(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// sradi r10,r11,10
	xer.ca = (r11.s64 < 0) & ((r11.u64 & 0x3FF) != 0);
	ctx.r10.s64 = r11.s64 >> 10;
	// rldicl r10,r10,11,53
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 11) & 0x7FF;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// sradi r10,r10,11
	xer.ca = (ctx.r10.s64 < 0) & ((ctx.r10.u64 & 0x7FF) != 0);
	ctx.r10.s64 = ctx.r10.s64 >> 11;
	// sradi r9,r11,11
	xer.ca = (r11.s64 < 0) & ((r11.u64 & 0x7FF) != 0);
	ctx.r9.s64 = r11.s64 >> 11;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// rldicr r9,r9,11,52
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 11) & 0xFFFFFFFFFFFFF800;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(r11.s64, 0, xer);
	// ble cr6,0x8312fb90
	if (!cr6.gt) goto loc_8312FB90;
	// addi r11,r10,1
	r11.s64 = ctx.r10.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
loc_8312FB90:
	// li r11,0
	r11.s64 = 0;
loc_8312FB94:
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

__attribute__((alias("__imp__sub_8312FBB0"))) PPC_WEAK_FUNC(sub_8312FBB0);
PPC_FUNC_IMPL(__imp__sub_8312FBB0) {
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
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82bd42f8
	sub_82BD42F8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8312fbe0
	if (!cr0.eq) goto loc_8312FBE0;
	// li r11,-1
	r11.s64 = -1;
	// b 0x8312fbe8
	goto loc_8312FBE8;
loc_8312FBE0:
	// bl 0x831ce770
	sub_831CE770(ctx, base);
	// li r11,0
	r11.s64 = 0;
loc_8312FBE8:
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
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

__attribute__((alias("__imp__sub_8312FC00"))) PPC_WEAK_FUNC(sub_8312FC00);
PPC_FUNC_IMPL(__imp__sub_8312FC00) {
	PPC_FUNC_PROLOGUE();
	// li r3,2048
	ctx.r3.s64 = 2048;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312FC08"))) PPC_WEAK_FUNC(sub_8312FC08);
PPC_FUNC_IMPL(__imp__sub_8312FC08) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,30876
	r30.s64 = r11.s64 + 30876;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -4);
	// stw r31,25116(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25116, r31.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8312fc44
	if (cr6.eq) goto loc_8312FC44;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x831389d8
	sub_831389D8(ctx, base);
loc_8312FC44:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8312fc58
	if (cr6.eq) goto loc_8312FC58;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x831389d8
	sub_831389D8(ctx, base);
loc_8312FC58:
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

__attribute__((alias("__imp__sub_8312FC70"))) PPC_WEAK_FUNC(sub_8312FC70);
PPC_FUNC_IMPL(__imp__sub_8312FC70) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,30876
	r31.s64 = r11.s64 + 30876;
	// addi r11,r31,12
	r11.s64 = r31.s64 + 12;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// beq cr6,0x8312fcac
	if (cr6.eq) goto loc_8312FCAC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83138a60
	sub_83138A60(ctx, base);
loc_8312FCAC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8312fcc0
	if (cr6.eq) goto loc_8312FCC0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83138a60
	sub_83138A60(ctx, base);
loc_8312FCC0:
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

__attribute__((alias("__imp__sub_8312FCD8"))) PPC_WEAK_FUNC(sub_8312FCD8);
PPC_FUNC_IMPL(__imp__sub_8312FCD8) {
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
	// bl 0x83137e08
	sub_83137E08(ctx, base);
	// bl 0x8312e550
	sub_8312E550(ctx, base);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lis r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-4344
	ctx.r3.s64 = r11.s64 + -4344;
	// ori r5,r5,35200
	ctx.r5.u64 = ctx.r5.u64 | 35200;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// bl 0x83138428
	sub_83138428(ctx, base);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r30,r11,-4880
	r30.s64 = r11.s64 + -4880;
	// addi r3,r30,448
	ctx.r3.s64 = r30.s64 + 448;
	// bl 0x83138ae0
	sub_83138AE0(ctx, base);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r11,30888
	r31.s64 = r11.s64 + 30888;
	// stw r3,-16(r31)
	PPC_STORE_U32(r31.u32 + -16, ctx.r3.u32);
	// bne 0x8312fd48
	if (!cr0.eq) goto loc_8312FD48;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2332
	ctx.r3.s64 = r11.s64 + 2332;
loc_8312FD40:
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// b 0x8312fda0
	goto loc_8312FDA0;
loc_8312FD48:
	// li r4,88
	ctx.r4.s64 = 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83138ae0
	sub_83138AE0(ctx, base);
	// stw r3,-12(r31)
	PPC_STORE_U32(r31.u32 + -12, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8312fd6c
	if (!cr0.eq) goto loc_8312FD6C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2292
	ctx.r3.s64 = r11.s64 + 2292;
	// b 0x8312fd40
	goto loc_8312FD40;
loc_8312FD6C:
	// lis r30,-31947
	r30.s64 = -2093678592;
	// lwz r3,-16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -16);
	// lwz r4,25116(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 25116);
	// bl 0x831389d8
	sub_831389D8(ctx, base);
	// lwz r4,25116(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 25116);
	// lwz r3,-12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -12);
	// bl 0x831389d8
	sub_831389D8(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,-16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -16);
	// bl 0x83138a60
	sub_83138A60(ctx, base);
	// lwz r3,-12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -12);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x83138a60
	sub_83138A60(ctx, base);
loc_8312FDA0:
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

__attribute__((alias("__imp__sub_8312FDB8"))) PPC_WEAK_FUNC(sub_8312FDB8);
PPC_FUNC_IMPL(__imp__sub_8312FDB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8312fde0
	if (!cr6.eq) goto loc_8312FDE0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2672
	ctx.r3.s64 = r11.s64 + 2672;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8312fe24
	goto loc_8312FE24;
loc_8312FDE0:
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// bl 0x83137e98
	sub_83137E98(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x831cdc58
	sub_831CDC58(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x8312fe04
	if (!cr6.eq) goto loc_8312FE04;
	// li r11,-1
	r11.s64 = -1;
	// b 0x8312fe1c
	goto loc_8312FE1C;
loc_8312FE04:
	// bl 0x82bd4418
	sub_82BD4418(ctx, base);
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_8312FE1C:
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8312FE24:
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312FE38"))) PPC_WEAK_FUNC(sub_8312FE38);
PPC_FUNC_IMPL(__imp__sub_8312FE38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8312fe60
	if (!cr6.eq) goto loc_8312FE60;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2712
	ctx.r3.s64 = r11.s64 + 2712;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8312fea4
	goto loc_8312FEA4;
loc_8312FE60:
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// bl 0x83137e98
	sub_83137E98(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x831cdc58
	sub_831CDC58(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x8312fe84
	if (!cr6.eq) goto loc_8312FE84;
	// li r11,-1
	r11.s64 = -1;
	// b 0x8312fe9c
	goto loc_8312FE9C;
loc_8312FE84:
	// bl 0x82bd4418
	sub_82BD4418(ctx, base);
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_8312FE9C:
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8312FEA4:
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

