#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82F24EB8"))) PPC_WEAK_FUNC(sub_82F24EB8);
PPC_FUNC_IMPL(__imp__sub_82F24EB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F24ED0"))) PPC_WEAK_FUNC(sub_82F24ED0);
PPC_FUNC_IMPL(__imp__sub_82F24ED0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-4212
	ctx.r9.s64 = r11.s64 + -4212;
	// li r8,27
	ctx.r8.s64 = 27;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F24EF8"))) PPC_WEAK_FUNC(sub_82F24EF8);
PPC_FUNC_IMPL(__imp__sub_82F24EF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r3,r11,-4212
	ctx.r3.s64 = r11.s64 + -4212;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F24F08"))) PPC_WEAK_FUNC(sub_82F24F08);
PPC_FUNC_IMPL(__imp__sub_82F24F08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F24F20"))) PPC_WEAK_FUNC(sub_82F24F20);
PPC_FUNC_IMPL(__imp__sub_82F24F20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x82edcd98
	sub_82EDCD98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F24F30"))) PPC_WEAK_FUNC(sub_82F24F30);
PPC_FUNC_IMPL(__imp__sub_82F24F30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F24F38"))) PPC_WEAK_FUNC(sub_82F24F38);
PPC_FUNC_IMPL(__imp__sub_82F24F38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82edcd98
	sub_82EDCD98(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F24F68"))) PPC_WEAK_FUNC(sub_82F24F68);
PPC_FUNC_IMPL(__imp__sub_82F24F68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F24F80"))) PPC_WEAK_FUNC(sub_82F24F80);
PPC_FUNC_IMPL(__imp__sub_82F24F80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-4056
	ctx.r9.s64 = r11.s64 + -4056;
	// li r8,20
	ctx.r8.s64 = 20;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F24FA8"))) PPC_WEAK_FUNC(sub_82F24FA8);
PPC_FUNC_IMPL(__imp__sub_82F24FA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r3,r11,-4056
	ctx.r3.s64 = r11.s64 + -4056;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F24FB8"))) PPC_WEAK_FUNC(sub_82F24FB8);
PPC_FUNC_IMPL(__imp__sub_82F24FB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F24FD0"))) PPC_WEAK_FUNC(sub_82F24FD0);
PPC_FUNC_IMPL(__imp__sub_82F24FD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x82f25018
	sub_82F25018(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F24FE0"))) PPC_WEAK_FUNC(sub_82F24FE0);
PPC_FUNC_IMPL(__imp__sub_82F24FE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F24FE8"))) PPC_WEAK_FUNC(sub_82F24FE8);
PPC_FUNC_IMPL(__imp__sub_82F24FE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f25018
	sub_82F25018(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F25018"))) PPC_WEAK_FUNC(sub_82F25018);
PPC_FUNC_IMPL(__imp__sub_82F25018) {
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
	// bl 0x82f25dc0
	sub_82F25DC0(ctx, base);
	// lis r11,-32237
	r11.s64 = -2112684032;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// addi r6,r11,-3804
	ctx.r6.s64 = r11.s64 + -3804;
	// addi r5,r10,-3816
	ctx.r5.s64 = ctx.r10.s64 + -3816;
	// addi r3,r8,-3828
	ctx.r3.s64 = ctx.r8.s64 + -3828;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// addi r4,r9,-3848
	ctx.r4.s64 = ctx.r9.s64 + -3848;
	// stw r5,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r5.u32);
	// addi r11,r7,-3860
	r11.s64 = ctx.r7.s64 + -3860;
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r4,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r4.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82F25090"))) PPC_WEAK_FUNC(sub_82F25090);
PPC_FUNC_IMPL(__imp__sub_82F25090) {
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
	// bl 0x82f3a1d0
	sub_82F3A1D0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f250d8
	if (cr6.eq) goto loc_82F250D8;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r6,39
	ctx.r6.s64 = 39;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82F250D8:
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

__attribute__((alias("__imp__sub_82F250F8"))) PPC_WEAK_FUNC(sub_82F250F8);
PPC_FUNC_IMPL(__imp__sub_82F250F8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82f25090
	sub_82F25090(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F25100"))) PPC_WEAK_FUNC(sub_82F25100);
PPC_FUNC_IMPL(__imp__sub_82F25100) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
	// b 0x82f25090
	sub_82F25090(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F25108"))) PPC_WEAK_FUNC(sub_82F25108);
PPC_FUNC_IMPL(__imp__sub_82F25108) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82f25090
	sub_82F25090(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F25110"))) PPC_WEAK_FUNC(sub_82F25110);
PPC_FUNC_IMPL(__imp__sub_82F25110) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-20
	ctx.r3.s64 = ctx.r3.s64 + -20;
	// b 0x82f25090
	sub_82F25090(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F25118"))) PPC_WEAK_FUNC(sub_82F25118);
PPC_FUNC_IMPL(__imp__sub_82F25118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F25130"))) PPC_WEAK_FUNC(sub_82F25130);
PPC_FUNC_IMPL(__imp__sub_82F25130) {
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
	// beq cr6,0x82f25174
	if (cr6.eq) goto loc_82F25174;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82f32648
	sub_82F32648(ctx, base);
	// lis r11,-32237
	r11.s64 = -2112684032;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r9,r11,-3732
	ctx.r9.s64 = r11.s64 + -3732;
	// addi r8,r10,-3768
	ctx.r8.s64 = ctx.r10.s64 + -3768;
	// li r7,22
	ctx.r7.s64 = 22;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r8.u32);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
loc_82F25174:
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

__attribute__((alias("__imp__sub_82F25188"))) PPC_WEAK_FUNC(sub_82F25188);
PPC_FUNC_IMPL(__imp__sub_82F25188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f32648
	sub_82F32648(ctx, base);
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r3,r11,-3732
	ctx.r3.s64 = r11.s64 + -3732;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F251B8"))) PPC_WEAK_FUNC(sub_82F251B8);
PPC_FUNC_IMPL(__imp__sub_82F251B8) {
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
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82f251f8
	if (!cr6.eq) goto loc_82F251F8;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// rlwinm r5,r11,1,1,30
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x7FFFFFFE;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82F251F8:
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82f25228
	if (!cr6.eq) goto loc_82F25228;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// clrlwi r8,r11,2
	ctx.r8.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// li r6,23
	ctx.r6.s64 = 23;
	// mulli r5,r8,56
	ctx.r5.s64 = ctx.r8.s64 * 56;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82F25228:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r11,r31,16
	r11.s64 = r31.s64 + 16;
	// bne cr6,0x82f25238
	if (!cr6.eq) goto loc_82F25238;
	// li r11,0
	r11.s64 = 0;
loc_82F25238:
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r10,-12584
	ctx.r8.s64 = ctx.r10.s64 + -12584;
	// addi r7,r9,-22012
	ctx.r7.s64 = ctx.r9.s64 + -22012;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_82F25268"))) PPC_WEAK_FUNC(sub_82F25268);
PPC_FUNC_IMPL(__imp__sub_82F25268) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82f25270
	sub_82F25270(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F25270"))) PPC_WEAK_FUNC(sub_82F25270);
PPC_FUNC_IMPL(__imp__sub_82F25270) {
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
	// bl 0x82f251b8
	sub_82F251B8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f252b8
	if (cr6.eq) goto loc_82F252B8;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r6,39
	ctx.r6.s64 = 39;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82F252B8:
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

__attribute__((alias("__imp__sub_82F252D8"))) PPC_WEAK_FUNC(sub_82F252D8);
PPC_FUNC_IMPL(__imp__sub_82F252D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F252F0"))) PPC_WEAK_FUNC(sub_82F252F0);
PPC_FUNC_IMPL(__imp__sub_82F252F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,21668
	ctx.r9.s64 = r11.s64 + 21668;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F25310"))) PPC_WEAK_FUNC(sub_82F25310);
PPC_FUNC_IMPL(__imp__sub_82F25310) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r11,21668
	ctx.r3.s64 = r11.s64 + 21668;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F25320"))) PPC_WEAK_FUNC(sub_82F25320);
PPC_FUNC_IMPL(__imp__sub_82F25320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F25338"))) PPC_WEAK_FUNC(sub_82F25338);
PPC_FUNC_IMPL(__imp__sub_82F25338) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x82f27180
	sub_82F27180(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F25348"))) PPC_WEAK_FUNC(sub_82F25348);
PPC_FUNC_IMPL(__imp__sub_82F25348) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F25350"))) PPC_WEAK_FUNC(sub_82F25350);
PPC_FUNC_IMPL(__imp__sub_82F25350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f27180
	sub_82F27180(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F25380"))) PPC_WEAK_FUNC(sub_82F25380);
PPC_FUNC_IMPL(__imp__sub_82F25380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F25398"))) PPC_WEAK_FUNC(sub_82F25398);
PPC_FUNC_IMPL(__imp__sub_82F25398) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-3012
	ctx.r9.s64 = r11.s64 + -3012;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F253B8"))) PPC_WEAK_FUNC(sub_82F253B8);
PPC_FUNC_IMPL(__imp__sub_82F253B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r3,r11,-3012
	ctx.r3.s64 = r11.s64 + -3012;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F253C8"))) PPC_WEAK_FUNC(sub_82F253C8);
PPC_FUNC_IMPL(__imp__sub_82F253C8) {
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
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82f25408
	if (!cr6.eq) goto loc_82F25408;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82F25408:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82f25434
	if (!cr6.eq) goto loc_82F25434;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r5,r11,1,1,30
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x7FFFFFFE;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82F25434:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-22012
	ctx.r10.s64 = r11.s64 + -22012;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82F25458"))) PPC_WEAK_FUNC(sub_82F25458);
PPC_FUNC_IMPL(__imp__sub_82F25458) {
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
	// bl 0x82f253c8
	sub_82F253C8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f254a0
	if (cr6.eq) goto loc_82F254A0;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r6,39
	ctx.r6.s64 = 39;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82F254A0:
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

__attribute__((alias("__imp__sub_82F254C0"))) PPC_WEAK_FUNC(sub_82F254C0);
PPC_FUNC_IMPL(__imp__sub_82F254C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F254D8"))) PPC_WEAK_FUNC(sub_82F254D8);
PPC_FUNC_IMPL(__imp__sub_82F254D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r9,r11,-2868
	ctx.r9.s64 = r11.s64 + -2868;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r10,-12528
	ctx.r7.s64 = ctx.r10.s64 + -12528;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r6,12
	ctx.r6.s64 = 12;
	// sth r8,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r8.u16);
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F25510"))) PPC_WEAK_FUNC(sub_82F25510);
PPC_FUNC_IMPL(__imp__sub_82F25510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r3,r11,-2868
	ctx.r3.s64 = r11.s64 + -2868;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F25520"))) PPC_WEAK_FUNC(sub_82F25520);
PPC_FUNC_IMPL(__imp__sub_82F25520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F25538"))) PPC_WEAK_FUNC(sub_82F25538);
PPC_FUNC_IMPL(__imp__sub_82F25538) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r9,r11,-2700
	ctx.r9.s64 = r11.s64 + -2700;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r10,-12528
	ctx.r7.s64 = ctx.r10.s64 + -12528;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r6,13
	ctx.r6.s64 = 13;
	// sth r8,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r8.u16);
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F25570"))) PPC_WEAK_FUNC(sub_82F25570);
PPC_FUNC_IMPL(__imp__sub_82F25570) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r3,r11,-2700
	ctx.r3.s64 = r11.s64 + -2700;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F25580"))) PPC_WEAK_FUNC(sub_82F25580);
PPC_FUNC_IMPL(__imp__sub_82F25580) {
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
	// addi r30,r5,-96
	r30.s64 = ctx.r5.s64 + -96;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x82f255c4
	if (!cr6.lt) goto loc_82F255C4;
loc_82F255BC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82f255f4
	goto loc_82F255F4;
loc_82F255C4:
	// cmpw cr6,r3,r30
	cr6.compare<int32_t>(ctx.r3.s32, r30.s32, xer);
	// bgt cr6,0x82f255bc
	if (cr6.gt) goto loc_82F255BC;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r10,r31,96
	ctx.r10.s64 = r31.s64 + 96;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82f255ec
	if (!cr6.eq) goto loc_82F255EC;
	// li r11,0
	r11.s64 = 0;
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// b 0x82f255f4
	goto loc_82F255F4;
loc_82F255EC:
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// li r3,96
	ctx.r3.s64 = 96;
loc_82F255F4:
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

__attribute__((alias("__imp__sub_82F25610"))) PPC_WEAK_FUNC(sub_82F25610);
PPC_FUNC_IMPL(__imp__sub_82F25610) {
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
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x82f1fb40
	sub_82F1FB40(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// clrlwi r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	// addi r9,r11,-22012
	ctx.r9.s64 = r11.s64 + -22012;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82f25668
	if (cr6.eq) goto loc_82F25668;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r6,39
	ctx.r6.s64 = 39;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82F25668:
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

__attribute__((alias("__imp__sub_82F25688"))) PPC_WEAK_FUNC(sub_82F25688);
PPC_FUNC_IMPL(__imp__sub_82F25688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F256A0"))) PPC_WEAK_FUNC(sub_82F256A0);
PPC_FUNC_IMPL(__imp__sub_82F256A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r11,-12584
	ctx.r7.s64 = r11.s64 + -12584;
	// addi r6,r10,-2464
	ctx.r6.s64 = ctx.r10.s64 + -2464;
	// sth r8,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r8.u16);
	// addi r5,r9,-2500
	ctx.r5.s64 = ctx.r9.s64 + -2500;
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F256E0"))) PPC_WEAK_FUNC(sub_82F256E0);
PPC_FUNC_IMPL(__imp__sub_82F256E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r3,r11,-2464
	ctx.r3.s64 = r11.s64 + -2464;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F256F0"))) PPC_WEAK_FUNC(sub_82F256F0);
PPC_FUNC_IMPL(__imp__sub_82F256F0) {
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
	// bl 0x82f3a928
	sub_82F3A928(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f25738
	if (cr6.eq) goto loc_82F25738;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r6,39
	ctx.r6.s64 = 39;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82F25738:
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

__attribute__((alias("__imp__sub_82F25758"))) PPC_WEAK_FUNC(sub_82F25758);
PPC_FUNC_IMPL(__imp__sub_82F25758) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82f256f0
	sub_82F256F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F25760"))) PPC_WEAK_FUNC(sub_82F25760);
PPC_FUNC_IMPL(__imp__sub_82F25760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F25778"))) PPC_WEAK_FUNC(sub_82F25778);
PPC_FUNC_IMPL(__imp__sub_82F25778) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r11,-12584
	ctx.r7.s64 = r11.s64 + -12584;
	// addi r6,r10,-2172
	ctx.r6.s64 = ctx.r10.s64 + -2172;
	// sth r8,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r8.u16);
	// addi r5,r9,-2212
	ctx.r5.s64 = ctx.r9.s64 + -2212;
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// li r4,21
	ctx.r4.s64 = 21;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F257B8"))) PPC_WEAK_FUNC(sub_82F257B8);
PPC_FUNC_IMPL(__imp__sub_82F257B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r3,r11,-2172
	ctx.r3.s64 = r11.s64 + -2172;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F257C8"))) PPC_WEAK_FUNC(sub_82F257C8);
PPC_FUNC_IMPL(__imp__sub_82F257C8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-20
	ctx.r3.s64 = ctx.r3.s64 + -20;
	// b 0x82f257d0
	sub_82F257D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F257D0"))) PPC_WEAK_FUNC(sub_82F257D0);
PPC_FUNC_IMPL(__imp__sub_82F257D0) {
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
	// bl 0x82f2adf8
	sub_82F2ADF8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f25818
	if (cr6.eq) goto loc_82F25818;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r6,39
	ctx.r6.s64 = 39;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82F25818:
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

__attribute__((alias("__imp__sub_82F25838"))) PPC_WEAK_FUNC(sub_82F25838);
PPC_FUNC_IMPL(__imp__sub_82F25838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F25850"))) PPC_WEAK_FUNC(sub_82F25850);
PPC_FUNC_IMPL(__imp__sub_82F25850) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x82f25898
	sub_82F25898(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F25860"))) PPC_WEAK_FUNC(sub_82F25860);
PPC_FUNC_IMPL(__imp__sub_82F25860) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F25868"))) PPC_WEAK_FUNC(sub_82F25868);
PPC_FUNC_IMPL(__imp__sub_82F25868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f25898
	sub_82F25898(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F25898"))) PPC_WEAK_FUNC(sub_82F25898);
PPC_FUNC_IMPL(__imp__sub_82F25898) {
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
	// bl 0x82f25dc0
	sub_82F25DC0(ctx, base);
	// lis r11,-32237
	r11.s64 = -2112684032;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// addi r6,r11,-1984
	ctx.r6.s64 = r11.s64 + -1984;
	// addi r5,r10,-1996
	ctx.r5.s64 = ctx.r10.s64 + -1996;
	// addi r3,r8,-2008
	ctx.r3.s64 = ctx.r8.s64 + -2008;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// addi r4,r9,-2028
	ctx.r4.s64 = ctx.r9.s64 + -2028;
	// stw r5,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r5.u32);
	// addi r11,r7,-2040
	r11.s64 = ctx.r7.s64 + -2040;
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r4,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r4.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82F25910"))) PPC_WEAK_FUNC(sub_82F25910);
PPC_FUNC_IMPL(__imp__sub_82F25910) {
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
	// bl 0x82f3b5c8
	sub_82F3B5C8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f25958
	if (cr6.eq) goto loc_82F25958;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r6,39
	ctx.r6.s64 = 39;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82F25958:
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

__attribute__((alias("__imp__sub_82F25978"))) PPC_WEAK_FUNC(sub_82F25978);
PPC_FUNC_IMPL(__imp__sub_82F25978) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82f25910
	sub_82F25910(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F25980"))) PPC_WEAK_FUNC(sub_82F25980);
PPC_FUNC_IMPL(__imp__sub_82F25980) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
	// b 0x82f25910
	sub_82F25910(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F25988"))) PPC_WEAK_FUNC(sub_82F25988);
PPC_FUNC_IMPL(__imp__sub_82F25988) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82f25910
	sub_82F25910(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F25990"))) PPC_WEAK_FUNC(sub_82F25990);
PPC_FUNC_IMPL(__imp__sub_82F25990) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-20
	ctx.r3.s64 = ctx.r3.s64 + -20;
	// b 0x82f25910
	sub_82F25910(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F25998"))) PPC_WEAK_FUNC(sub_82F25998);
PPC_FUNC_IMPL(__imp__sub_82F25998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F259B0"))) PPC_WEAK_FUNC(sub_82F259B0);
PPC_FUNC_IMPL(__imp__sub_82F259B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-1804
	ctx.r9.s64 = r11.s64 + -1804;
	// li r8,6
	ctx.r8.s64 = 6;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F259D8"))) PPC_WEAK_FUNC(sub_82F259D8);
PPC_FUNC_IMPL(__imp__sub_82F259D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r3,r11,-1804
	ctx.r3.s64 = r11.s64 + -1804;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F259E8"))) PPC_WEAK_FUNC(sub_82F259E8);
PPC_FUNC_IMPL(__imp__sub_82F259E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F25A00"))) PPC_WEAK_FUNC(sub_82F25A00);
PPC_FUNC_IMPL(__imp__sub_82F25A00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r9,r11,-1652
	ctx.r9.s64 = r11.s64 + -1652;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r10,-12528
	ctx.r7.s64 = ctx.r10.s64 + -12528;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r6,26
	ctx.r6.s64 = 26;
	// sth r8,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r8.u16);
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F25A38"))) PPC_WEAK_FUNC(sub_82F25A38);
PPC_FUNC_IMPL(__imp__sub_82F25A38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r3,r11,-1652
	ctx.r3.s64 = r11.s64 + -1652;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F25A48"))) PPC_WEAK_FUNC(sub_82F25A48);
PPC_FUNC_IMPL(__imp__sub_82F25A48) {
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
	// bl 0x82f3b890
	sub_82F3B890(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f25a90
	if (cr6.eq) goto loc_82F25A90;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r6,39
	ctx.r6.s64 = 39;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82F25A90:
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

__attribute__((alias("__imp__sub_82F25AB0"))) PPC_WEAK_FUNC(sub_82F25AB0);
PPC_FUNC_IMPL(__imp__sub_82F25AB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F25AC8"))) PPC_WEAK_FUNC(sub_82F25AC8);
PPC_FUNC_IMPL(__imp__sub_82F25AC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-1564
	ctx.r9.s64 = r11.s64 + -1564;
	// li r8,5
	ctx.r8.s64 = 5;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F25AF0"))) PPC_WEAK_FUNC(sub_82F25AF0);
PPC_FUNC_IMPL(__imp__sub_82F25AF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r3,r11,-1564
	ctx.r3.s64 = r11.s64 + -1564;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F25B00"))) PPC_WEAK_FUNC(sub_82F25B00);
PPC_FUNC_IMPL(__imp__sub_82F25B00) {
	PPC_FUNC_PROLOGUE();
	// li r3,48
	ctx.r3.s64 = 48;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F25B08"))) PPC_WEAK_FUNC(sub_82F25B08);
PPC_FUNC_IMPL(__imp__sub_82F25B08) {
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
	// bl 0x82f28270
	sub_82F28270(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f25b50
	if (cr6.eq) goto loc_82F25B50;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r6,39
	ctx.r6.s64 = 39;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82F25B50:
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

__attribute__((alias("__imp__sub_82F25B70"))) PPC_WEAK_FUNC(sub_82F25B70);
PPC_FUNC_IMPL(__imp__sub_82F25B70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F25B78"))) PPC_WEAK_FUNC(sub_82F25B78);
PPC_FUNC_IMPL(__imp__sub_82F25B78) {
	PPC_FUNC_PROLOGUE();
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F25B80"))) PPC_WEAK_FUNC(sub_82F25B80);
PPC_FUNC_IMPL(__imp__sub_82F25B80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,176
	r11.s64 = ctx.r1.s64 + 176;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor v13,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_setzero_si128());
	// vxor v12,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_setzero_si128());
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r10,28(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// lfs f0,2244(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2244);
	f0.f64 = double(temp.f32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stvx128 v13,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stvx128 v12,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stvx128 v12,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f0,148(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stvx128 v12,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f1,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// stfs f0,168(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lvx128 v6,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lvx128 v0,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lvx128 v13,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// vsubfp v10,v0,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v10.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// lfs f0,-22120(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -22120);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r11,r4,-12080
	r11.s64 = ctx.r4.s64 + -12080;
	// lvlx v11,0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vaddfp v5,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stfs f0,84(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// vspltw v3,v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0xFF));
	// lvlx v9,0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v8,v9,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), 0xFF));
	// vmulfp128 v7,v10,v8
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v7.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v8.f32)));
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vand v4,v6,v0
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vxor v2,v7,v4
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vmaddfp v1,v5,v3,v2
	simde_mm_store_ps(ctx.v1.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v3.f32)), simde_mm_load_ps(ctx.v2.f32)));
	// vmsum3fp128 v31,v1,v6
	simde_mm_store_ps(v31.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v6.f32), 0xEF));
	// stvewx v31,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, v31.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F25C88"))) PPC_WEAK_FUNC(sub_82F25C88);
PPC_FUNC_IMPL(__imp__sub_82F25C88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F25C90"))) PPC_WEAK_FUNC(sub_82F25C90);
PPC_FUNC_IMPL(__imp__sub_82F25C90) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,-1488
	ctx.r4.s64 = ctx.r10.s64 + -1488;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,24(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
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

__attribute__((alias("__imp__sub_82F25CF0"))) PPC_WEAK_FUNC(sub_82F25CF0);
PPC_FUNC_IMPL(__imp__sub_82F25CF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lvx128 v0,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r6,16
	r11.s64 = ctx.r6.s64 + 16;
	// vxor v13,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_setzero_si128());
	// stvx128 v13,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor v11,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_setzero_si128());
	// stvx128 v11,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F25D10"))) PPC_WEAK_FUNC(sub_82F25D10);
PPC_FUNC_IMPL(__imp__sub_82F25D10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F25D20"))) PPC_WEAK_FUNC(sub_82F25D20);
PPC_FUNC_IMPL(__imp__sub_82F25D20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	f0.f64 = double(temp.f32);
	// lfs f13,16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82f25db0
	if (!cr6.lt) goto loc_82F25DB0;
	// addi r11,r31,16
	r11.s64 = r31.s64 + 16;
	// lvx128 v0,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// stw r9,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// bl 0x82f3bb40
	sub_82F3BB40(ctx, base);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f25da4
	if (cr6.eq) goto loc_82F25DA4;
loc_82F25D94:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f25d94
	if (!cr6.eq) goto loc_82F25D94;
loc_82F25DA4:
	// stw r10,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
loc_82F25DB0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82F25DB8"))) PPC_WEAK_FUNC(sub_82F25DB8);
PPC_FUNC_IMPL(__imp__sub_82F25DB8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F25DC0"))) PPC_WEAK_FUNC(sub_82F25DC0);
PPC_FUNC_IMPL(__imp__sub_82F25DC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r7,r11,-14152
	ctx.r7.s64 = r11.s64 + -14152;
	// addi r5,r10,-14128
	ctx.r5.s64 = ctx.r10.s64 + -14128;
	// sth r9,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r9.u16);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r5,r8,-14108
	ctx.r5.s64 = ctx.r8.s64 + -14108;
	// lis r4,-32237
	ctx.r4.s64 = -2112684032;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r8,r6,-14140
	ctx.r8.s64 = ctx.r6.s64 + -14140;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// addi r6,r4,-1416
	ctx.r6.s64 = ctx.r4.s64 + -1416;
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// addi r5,r11,-1428
	ctx.r5.s64 = r11.s64 + -1428;
	// addi r4,r10,-1448
	ctx.r4.s64 = ctx.r10.s64 + -1448;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// addi r11,r9,-1460
	r11.s64 = ctx.r9.s64 + -1460;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// addi r10,r7,-1472
	ctx.r10.s64 = ctx.r7.s64 + -1472;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r9,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F25E40"))) PPC_WEAK_FUNC(sub_82F25E40);
PPC_FUNC_IMPL(__imp__sub_82F25E40) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
	// b 0x82f25e48
	sub_82F25E48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F25E48"))) PPC_WEAK_FUNC(sub_82F25E48);
PPC_FUNC_IMPL(__imp__sub_82F25E48) {
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
	// bl 0x822ec3b0
	sub_822EC3B0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f25e90
	if (cr6.eq) goto loc_82F25E90;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r6,39
	ctx.r6.s64 = 39;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82F25E90:
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

__attribute__((alias("__imp__sub_82F25EB0"))) PPC_WEAK_FUNC(sub_82F25EB0);
PPC_FUNC_IMPL(__imp__sub_82F25EB0) {
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
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82f2dc58
	sub_82F2DC58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82f2dc58
	sub_82F2DC58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82f2dc58
	sub_82F2DC58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x82f2dc58
	sub_82F2DC58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82f2dc58
	sub_82F2DC58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x82f2dc58
	sub_82F2DC58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82f2dc58
	sub_82F2DC58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x82f2dc58
	sub_82F2DC58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,19
	ctx.r4.s64 = 19;
	// bl 0x82f2dc58
	sub_82F2DC58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,22
	ctx.r4.s64 = 22;
	// bl 0x82f2dc58
	sub_82F2DC58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82f2dc58
	sub_82F2DC58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,15
	ctx.r4.s64 = 15;
	// bl 0x82f2dc58
	sub_82F2DC58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x82f2dc58
	sub_82F2DC58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,25
	ctx.r5.s64 = 25;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82f2dc58
	sub_82F2DC58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,27
	ctx.r4.s64 = 27;
	// bl 0x82f2dc58
	sub_82F2DC58(ctx, base);
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f2dc58
	sub_82F2DC58(ctx, base);
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

__attribute__((alias("__imp__sub_82F25FD8"))) PPC_WEAK_FUNC(sub_82F25FD8);
PPC_FUNC_IMPL(__imp__sub_82F25FD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r18{};
	PPCRegister r23{};
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r11,33
	cr6.compare<uint32_t>(r11.u32, 33, xer);
	// bgt cr6,0x82f26210
	if (cr6.gt) goto loc_82F26210;
	// lis r12,-32014
	r12.s64 = -2098069504;
	// addi r12,r12,24572
	r12.s64 = r12.s64 + 24572;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_82F26090;
	case 1:
		goto loc_82F26084;
	case 2:
		goto loc_82F2609C;
	case 3:
		goto loc_82F260C0;
	case 4:
		goto loc_82F260F0;
	case 5:
		goto loc_82F260CC;
	case 6:
		goto loc_82F260D8;
	case 7:
		goto loc_82F260E4;
	case 8:
		goto loc_82F260FC;
	case 9:
		goto loc_82F260A8;
	case 10:
		goto loc_82F260B4;
	case 11:
		goto loc_82F26120;
	case 12:
		goto loc_82F2618C;
	case 13:
		goto loc_82F261A4;
	case 14:
		goto loc_82F261B0;
	case 15:
		goto loc_82F2615C;
	case 16:
		goto loc_82F261BC;
	case 17:
		goto loc_82F26210;
	case 18:
		goto loc_82F261C8;
	case 19:
		goto loc_82F261D4;
	case 20:
		goto loc_82F26108;
	case 21:
		goto loc_82F26114;
	case 22:
		goto loc_82F2612C;
	case 23:
		goto loc_82F26138;
	case 24:
		goto loc_82F26144;
	case 25:
		goto loc_82F26150;
	case 26:
		goto loc_82F26168;
	case 27:
		goto loc_82F26174;
	case 28:
		goto loc_82F26180;
	case 29:
		goto loc_82F26198;
	case 30:
		goto loc_82F261E0;
	case 31:
		goto loc_82F261EC;
	case 32:
		goto loc_82F261F8;
	case 33:
		goto loc_82F26204;
	default:
		__builtin_unreachable();
	}
	// lwz r23,24720(r18)
	r23.u64 = PPC_LOAD_U32(r18.u32 + 24720);
	// lwz r23,24708(r18)
	r23.u64 = PPC_LOAD_U32(r18.u32 + 24708);
	// lwz r23,24732(r18)
	r23.u64 = PPC_LOAD_U32(r18.u32 + 24732);
	// lwz r23,24768(r18)
	r23.u64 = PPC_LOAD_U32(r18.u32 + 24768);
	// lwz r23,24816(r18)
	r23.u64 = PPC_LOAD_U32(r18.u32 + 24816);
	// lwz r23,24780(r18)
	r23.u64 = PPC_LOAD_U32(r18.u32 + 24780);
	// lwz r23,24792(r18)
	r23.u64 = PPC_LOAD_U32(r18.u32 + 24792);
	// lwz r23,24804(r18)
	r23.u64 = PPC_LOAD_U32(r18.u32 + 24804);
	// lwz r23,24828(r18)
	r23.u64 = PPC_LOAD_U32(r18.u32 + 24828);
	// lwz r23,24744(r18)
	r23.u64 = PPC_LOAD_U32(r18.u32 + 24744);
	// lwz r23,24756(r18)
	r23.u64 = PPC_LOAD_U32(r18.u32 + 24756);
	// lwz r23,24864(r18)
	r23.u64 = PPC_LOAD_U32(r18.u32 + 24864);
	// lwz r23,24972(r18)
	r23.u64 = PPC_LOAD_U32(r18.u32 + 24972);
	// lwz r23,24996(r18)
	r23.u64 = PPC_LOAD_U32(r18.u32 + 24996);
	// lwz r23,25008(r18)
	r23.u64 = PPC_LOAD_U32(r18.u32 + 25008);
	// lwz r23,24924(r18)
	r23.u64 = PPC_LOAD_U32(r18.u32 + 24924);
	// lwz r23,25020(r18)
	r23.u64 = PPC_LOAD_U32(r18.u32 + 25020);
	// lwz r23,25104(r18)
	r23.u64 = PPC_LOAD_U32(r18.u32 + 25104);
	// lwz r23,25032(r18)
	r23.u64 = PPC_LOAD_U32(r18.u32 + 25032);
	// lwz r23,25044(r18)
	r23.u64 = PPC_LOAD_U32(r18.u32 + 25044);
	// lwz r23,24840(r18)
	r23.u64 = PPC_LOAD_U32(r18.u32 + 24840);
	// lwz r23,24852(r18)
	r23.u64 = PPC_LOAD_U32(r18.u32 + 24852);
	// lwz r23,24876(r18)
	r23.u64 = PPC_LOAD_U32(r18.u32 + 24876);
	// lwz r23,24888(r18)
	r23.u64 = PPC_LOAD_U32(r18.u32 + 24888);
	// lwz r23,24900(r18)
	r23.u64 = PPC_LOAD_U32(r18.u32 + 24900);
	// lwz r23,24912(r18)
	r23.u64 = PPC_LOAD_U32(r18.u32 + 24912);
	// lwz r23,24936(r18)
	r23.u64 = PPC_LOAD_U32(r18.u32 + 24936);
	// lwz r23,24948(r18)
	r23.u64 = PPC_LOAD_U32(r18.u32 + 24948);
	// lwz r23,24960(r18)
	r23.u64 = PPC_LOAD_U32(r18.u32 + 24960);
	// lwz r23,24984(r18)
	r23.u64 = PPC_LOAD_U32(r18.u32 + 24984);
	// lwz r23,25056(r18)
	r23.u64 = PPC_LOAD_U32(r18.u32 + 25056);
	// lwz r23,25068(r18)
	r23.u64 = PPC_LOAD_U32(r18.u32 + 25068);
	// lwz r23,25080(r18)
	r23.u64 = PPC_LOAD_U32(r18.u32 + 25080);
	// lwz r23,25092(r18)
	r23.u64 = PPC_LOAD_U32(r18.u32 + 25092);
loc_82F26084:
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r3,r11,-720
	ctx.r3.s64 = r11.s64 + -720;
	// blr 
	return;
loc_82F26090:
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r3,r11,-736
	ctx.r3.s64 = r11.s64 + -736;
	// blr 
	return;
loc_82F2609C:
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r3,r11,-752
	ctx.r3.s64 = r11.s64 + -752;
	// blr 
	return;
loc_82F260A8:
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r3,r11,-772
	ctx.r3.s64 = r11.s64 + -772;
	// blr 
	return;
loc_82F260B4:
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r3,r11,-792
	ctx.r3.s64 = r11.s64 + -792;
	// blr 
	return;
loc_82F260C0:
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r3,r11,-808
	ctx.r3.s64 = r11.s64 + -808;
	// blr 
	return;
loc_82F260CC:
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r3,r11,-828
	ctx.r3.s64 = r11.s64 + -828;
	// blr 
	return;
loc_82F260D8:
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r3,r11,-844
	ctx.r3.s64 = r11.s64 + -844;
	// blr 
	return;
loc_82F260E4:
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r3,r11,-864
	ctx.r3.s64 = r11.s64 + -864;
	// blr 
	return;
loc_82F260F0:
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r3,r11,-884
	ctx.r3.s64 = r11.s64 + -884;
	// blr 
	return;
loc_82F260FC:
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r3,r11,-912
	ctx.r3.s64 = r11.s64 + -912;
	// blr 
	return;
loc_82F26108:
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r3,r11,-936
	ctx.r3.s64 = r11.s64 + -936;
	// blr 
	return;
loc_82F26114:
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r3,r11,-960
	ctx.r3.s64 = r11.s64 + -960;
	// blr 
	return;
loc_82F26120:
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r3,r11,-976
	ctx.r3.s64 = r11.s64 + -976;
	// blr 
	return;
loc_82F2612C:
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r3,r11,-1000
	ctx.r3.s64 = r11.s64 + -1000;
	// blr 
	return;
loc_82F26138:
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r3,r11,-1032
	ctx.r3.s64 = r11.s64 + -1032;
	// blr 
	return;
loc_82F26144:
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r3,r11,-1052
	ctx.r3.s64 = r11.s64 + -1052;
	// blr 
	return;
loc_82F26150:
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r3,r11,-1076
	ctx.r3.s64 = r11.s64 + -1076;
	// blr 
	return;
loc_82F2615C:
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r3,r11,-1108
	ctx.r3.s64 = r11.s64 + -1108;
	// blr 
	return;
loc_82F26168:
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r3,r11,-1128
	ctx.r3.s64 = r11.s64 + -1128;
	// blr 
	return;
loc_82F26174:
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r3,r11,-1140
	ctx.r3.s64 = r11.s64 + -1140;
	// blr 
	return;
loc_82F26180:
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r3,r11,-1156
	ctx.r3.s64 = r11.s64 + -1156;
	// blr 
	return;
loc_82F2618C:
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r3,r11,-1172
	ctx.r3.s64 = r11.s64 + -1172;
	// blr 
	return;
loc_82F26198:
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r3,r11,-1192
	ctx.r3.s64 = r11.s64 + -1192;
	// blr 
	return;
loc_82F261A4:
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r3,r11,-1220
	ctx.r3.s64 = r11.s64 + -1220;
	// blr 
	return;
loc_82F261B0:
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r3,r11,-1248
	ctx.r3.s64 = r11.s64 + -1248;
	// blr 
	return;
loc_82F261BC:
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r3,r11,-1272
	ctx.r3.s64 = r11.s64 + -1272;
	// blr 
	return;
loc_82F261C8:
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r3,r11,-1304
	ctx.r3.s64 = r11.s64 + -1304;
	// blr 
	return;
loc_82F261D4:
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r3,r11,-1328
	ctx.r3.s64 = r11.s64 + -1328;
	// blr 
	return;
loc_82F261E0:
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r3,r11,-1356
	ctx.r3.s64 = r11.s64 + -1356;
	// blr 
	return;
loc_82F261EC:
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r3,r11,-1372
	ctx.r3.s64 = r11.s64 + -1372;
	// blr 
	return;
loc_82F261F8:
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r3,r11,-1388
	ctx.r3.s64 = r11.s64 + -1388;
	// blr 
	return;
loc_82F26204:
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r3,r11,-1404
	ctx.r3.s64 = r11.s64 + -1404;
	// blr 
	return;
loc_82F26210:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F26218"))) PPC_WEAK_FUNC(sub_82F26218);
PPC_FUNC_IMPL(__imp__sub_82F26218) {
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
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// bl 0x82f2cc70
	sub_82F2CC70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f3ff60
	sub_82F3FF60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f3d670
	sub_82F3D670(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f3ca90
	sub_82F3CA90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f3bf18
	sub_82F3BF18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f7be20
	sub_82F7BE20(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// lbz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// bl 0x82f2cc70
	sub_82F2CC70(ctx, base);
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

__attribute__((alias("__imp__sub_82F26298"))) PPC_WEAK_FUNC(sub_82F26298);
PPC_FUNC_IMPL(__imp__sub_82F26298) {
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
	// bl 0x82f43ef0
	sub_82F43EF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f42ca8
	sub_82F42CA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f7ca00
	sub_82F7CA00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f41068
	sub_82F41068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f7c228
	sub_82F7C228(ctx, base);
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

__attribute__((alias("__imp__sub_82F262E8"))) PPC_WEAK_FUNC(sub_82F262E8);
PPC_FUNC_IMPL(__imp__sub_82F262E8) {
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
	// bl 0x82f4cdb8
	sub_82F4CDB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82f7ef68
	sub_82F7EF68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f7e668
	sub_82F7E668(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f4cc18
	sub_82F4CC18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f7d738
	sub_82F7D738(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f4c360
	sub_82F4C360(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f4b5c0
	sub_82F4B5C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f4a548
	sub_82F4A548(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f497c8
	sub_82F497C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f487f0
	sub_82F487F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f47600
	sub_82F47600(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f7d248
	sub_82F7D248(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f45fc8
	sub_82F45FC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f44c48
	sub_82F44C48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f3cb60
	sub_82F3CB60(ctx, base);
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

__attribute__((alias("__imp__sub_82F26390"))) PPC_WEAK_FUNC(sub_82F26390);
PPC_FUNC_IMPL(__imp__sub_82F26390) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82f25eb0
	sub_82F25EB0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f51a18
	sub_82F51A18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f50428
	sub_82F50428(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f26218
	sub_82F26218(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r30,0
	r30.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// bl 0x82f2cc70
	sub_82F2CC70(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f4f850
	sub_82F4F850(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r31,1
	r31.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r31.u8);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// bl 0x82f2cc70
	sub_82F2CC70(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f43ef0
	sub_82F43EF0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f42ca8
	sub_82F42CA8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f7ca00
	sub_82F7CA00(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f41068
	sub_82F41068(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f7c228
	sub_82F7C228(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// lbz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// bl 0x82f2cc70
	sub_82F2CC70(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f80740
	sub_82F80740(ctx, base);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r31.u8);
	// lbz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// bl 0x82f2cc70
	sub_82F2CC70(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f4e1a0
	sub_82F4E1A0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f4d780
	sub_82F4D780(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f262e8
	sub_82F262E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82F26470"))) PPC_WEAK_FUNC(sub_82F26470);
PPC_FUNC_IMPL(__imp__sub_82F26470) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f2648c
	if (cr6.eq) goto loc_82F2648C;
	// lfs f0,28(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	f0.f64 = double(temp.f32);
	// lfs f13,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgelr cr6
	if (!cr6.lt) return;
loc_82F2648C:
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// lvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,16
	ctx.r10.s64 = 16;
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r4,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,32(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f264c4
	if (cr6.eq) goto loc_82F264C4;
loc_82F264B4:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f264b4
	if (!cr6.eq) goto loc_82F264B4;
loc_82F264C4:
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// lwz r11,32(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// lwz r10,36(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f264f4
	if (cr6.eq) goto loc_82F264F4;
loc_82F264E4:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f264e4
	if (!cr6.eq) goto loc_82F264E4;
loc_82F264F4:
	// stw r10,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r10.u32);
	// lwz r11,36(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// lfs f0,28(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F26510"))) PPC_WEAK_FUNC(sub_82F26510);
PPC_FUNC_IMPL(__imp__sub_82F26510) {
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
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// addi r31,r3,8
	r31.s64 = ctx.r3.s64 + 8;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82f26548
	if (!cr6.eq) goto loc_82F26548;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82F26548:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r7,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r7.u32);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f26580
	if (cr6.eq) goto loc_82F26580;
loc_82F26570:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f26570
	if (!cr6.eq) goto loc_82F26570;
loc_82F26580:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r11.u32);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f265ac
	if (cr6.eq) goto loc_82F265AC;
loc_82F2659C:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f2659c
	if (!cr6.eq) goto loc_82F2659C;
loc_82F265AC:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82F265C0"))) PPC_WEAK_FUNC(sub_82F265C0);
PPC_FUNC_IMPL(__imp__sub_82F265C0) {
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
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r31,r3,16
	r31.s64 = ctx.r3.s64 + 16;
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82f265fc
	if (!cr6.eq) goto loc_82F265FC;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82F265FC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r8,16
	ctx.r8.s64 = 16;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// add r6,r11,r9
	ctx.r6.u64 = r11.u64 + ctx.r9.u64;
	// stw r7,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r7.u32);
	// lvx128 v0,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r11,r6,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r30,r8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r8
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f26650
	if (cr6.eq) goto loc_82F26650;
loc_82F26640:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f26640
	if (!cr6.eq) goto loc_82F26640;
loc_82F26650:
	// stw r9,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r9.u32);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r9.u32);
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f26680
	if (cr6.eq) goto loc_82F26680;
loc_82F26670:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f26670
	if (!cr6.eq) goto loc_82F26670;
loc_82F26680:
	// stw r9,40(r11)
	PPC_STORE_U32(r11.u32 + 40, ctx.r9.u32);
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,44(r11)
	PPC_STORE_U32(r11.u32 + 44, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82F266A8"))) PPC_WEAK_FUNC(sub_82F266A8);
PPC_FUNC_IMPL(__imp__sub_82F266A8) {
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
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// ble cr6,0x82f266e0
	if (!cr6.gt) goto loc_82F266E0;
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f266f0
	sub_82F266F0(ctx, base);
loc_82F266E0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F266F0"))) PPC_WEAK_FUNC(sub_82F266F0);
PPC_FUNC_IMPL(__imp__sub_82F266F0) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// li r28,16
	r28.s64 = 16;
loc_82F2670C:
	// add r11,r4,r29
	r11.u64 = ctx.r4.u64 + r29.u64;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r11,r30
	ctx.r7.u64 = r11.u64 + r30.u64;
	// lvx128 v0,r7,r28
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32 + r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	f0.f64 = double(temp.f32);
loc_82F2673C:
	// rlwinm r11,r31,1,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r10,r11,28
	ctx.r10.s64 = r11.s64 + 28;
loc_82F26750:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x82f26764
	if (cr6.lt) goto loc_82F26764;
	// li r11,0
	r11.s64 = 0;
loc_82F26764:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f2677c
	if (cr6.eq) goto loc_82F2677C;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// b 0x82f26750
	goto loc_82F26750;
loc_82F2677C:
	// rlwinm r11,r5,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r5,r11
	r11.u64 = ctx.r5.u64 + r11.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r10,r11,28
	ctx.r10.s64 = r11.s64 + 28;
loc_82F26790:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x82f267a4
	if (cr6.lt) goto loc_82F267A4;
	// li r11,0
	r11.s64 = 0;
loc_82F267A4:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f267bc
	if (cr6.eq) goto loc_82F267BC;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// addi r10,r10,-48
	ctx.r10.s64 = ctx.r10.s64 + -48;
	// b 0x82f26790
	goto loc_82F26790;
loc_82F267BC:
	// cmpw cr6,r5,r31
	cr6.compare<int32_t>(ctx.r5.s32, r31.s32, xer);
	// blt cr6,0x82f26860
	if (cr6.lt) goto loc_82F26860;
	// beq cr6,0x82f26850
	if (cr6.eq) goto loc_82F26850;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r31,1,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r9,r31,r11
	ctx.r9.u64 = r31.u64 + r11.u64;
	// rlwinm r11,r10,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r6,36(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// stvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lvx128 v12,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r26,44(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// lvx128 v11,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v11,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stw r9,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r9.u32);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// stw r9,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r9.u32);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// stw r9,40(r11)
	PPC_STORE_U32(r11.u32 + 40, ctx.r9.u32);
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// stw r9,44(r11)
	PPC_STORE_U32(r11.u32 + 44, ctx.r9.u32);
	// stvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r7,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r7.u32);
	// stw r6,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r6.u32);
	// stw r3,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r3.u32);
	// stw r26,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, r26.u32);
loc_82F26850:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r5
	cr6.compare<int32_t>(r31.s32, ctx.r5.s32, xer);
	// ble cr6,0x82f2673c
	if (!cr6.gt) goto loc_82F2673C;
loc_82F26860:
	// cmpw cr6,r4,r5
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, xer);
	// bge cr6,0x82f26874
	if (!cr6.lt) goto loc_82F26874;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f266f0
	sub_82F266F0(ctx, base);
loc_82F26874:
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(r31.s32, r29.s32, xer);
	// bge cr6,0x82f26884
	if (!cr6.lt) goto loc_82F26884;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// b 0x82f2670c
	goto loc_82F2670C;
loc_82F26884:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82F26890"))) PPC_WEAK_FUNC(sub_82F26890);
PPC_FUNC_IMPL(__imp__sub_82F26890) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F26898"))) PPC_WEAK_FUNC(sub_82F26898);
PPC_FUNC_IMPL(__imp__sub_82F26898) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// srawi r11,r3,3
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	r11.s64 = ctx.r3.s32 >> 3;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addze r10,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r10.s64 = temp.s64;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// lfs f0,-24412(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24412);
	f0.f64 = double(temp.f32);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// lfs f13,-700(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -700);
	ctx.f13.f64 = double(temp.f32);
	// lis r5,-31949
	ctx.r5.s64 = -2093809664;
	// lfs f12,2244(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2244);
	ctx.f12.f64 = double(temp.f32);
	// lis r4,-31949
	ctx.r4.s64 = -2093809664;
	// fsubs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 - f0.f64));
	// fmuls f0,f10,f13
	f0.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f0,2896(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 2896, temp.u32);
	// fdivs f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 / f0.f64));
	// stfs f0,2900(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 2900, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F268F0"))) PPC_WEAK_FUNC(sub_82F268F0);
PPC_FUNC_IMPL(__imp__sub_82F268F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F268F8"))) PPC_WEAK_FUNC(sub_82F268F8);
PPC_FUNC_IMPL(__imp__sub_82F268F8) {
	PPC_FUNC_PROLOGUE();
	// li r3,18
	ctx.r3.s64 = 18;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F26900"))) PPC_WEAK_FUNC(sub_82F26900);
PPC_FUNC_IMPL(__imp__sub_82F26900) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,1000
	ctx.r4.s64 = ctx.r10.s64 + 1000;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,24(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
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

__attribute__((alias("__imp__sub_82F26960"))) PPC_WEAK_FUNC(sub_82F26960);
PPC_FUNC_IMPL(__imp__sub_82F26960) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-24792(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24792);
	f0.f64 = double(temp.f32);
	// lfs f13,5572(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5572);
	ctx.f13.f64 = double(temp.f32);
loc_82F26978:
	// fctiwz f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f12,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f12.u64);
	// lwz r11,-12(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + f0.f64));
	// fcmpu cr6,f1,f13
	cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// blt cr6,0x82f26978
	if (cr6.lt) goto loc_82F26978;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,2244(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F269A8"))) PPC_WEAK_FUNC(sub_82F269A8);
PPC_FUNC_IMPL(__imp__sub_82F269A8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCRegister temp{};
	// li r11,32
	r11.s64 = 32;
	// li r10,48
	ctx.r10.s64 = 48;
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// addi r5,r1,-16
	ctx.r5.s64 = ctx.r1.s64 + -16;
	// addi r4,r1,-16
	ctx.r4.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r3,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lvx128 v13,r3,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r3,64
	r11.s64 = ctx.r3.s64 + 64;
	// vsubfp v12,v13,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// lfs f12,2244(r6)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2244);
	ctx.f12.f64 = double(temp.f32);
	// vmsum3fp128 v11,v12,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v12.f32), 0xEF));
	// stvx128 v11,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	f0.f64 = double(temp.f32);
	// fsqrts f13,f0
	ctx.f13.f64 = double(float(sqrt(f0.f64)));
	// fdivs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// stfs f11,-16(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lvx128 v10,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v9,v10,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0xFF));
	// vmulfp128 v0,v12,v9
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v9.f32)));
	// stvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f10,-12(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,-8(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f8.f64 = double(temp.f32);
	// fabs f0,f8
	f0.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// fabs f13,f10
	ctx.f13.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fabs f11,f9
	ctx.f11.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82f26a34
	if (!cr6.lt) goto loc_82F26A34;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// li r9,1
	ctx.r9.s64 = 1;
loc_82F26A34:
	// fcmpu cr6,f11,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f11.f64, f0.f64);
	// bge cr6,0x82f26a40
	if (!cr6.lt) goto loc_82F26A40;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_82F26A40:
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// vxor v12,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_setzero_si128());
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// vpermwi128 v11,v0,135
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x78));
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// vpermwi128 v10,v0,99
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x9C));
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// stvx128 v12,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,-16
	ctx.r5.s64 = ctx.r1.s64 + -16;
	// lfsx f0,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	f0.f64 = double(temp.f32);
	// li r4,80
	ctx.r4.s64 = 80;
	// fneg f13,f0
	ctx.f13.u64 = f0.u64 ^ 0x8000000000000000;
	// lfsx f11,r8,r7
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfsx f11,r10,r11
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, temp.u32);
	// stfsx f13,r8,r11
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + r11.u32, temp.u32);
	// lvx128 v9,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v8,v9,v9
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v8.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v9.f32), 0xEF));
	// stvx128 v8,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f10,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f10.f64 = double(temp.f32);
	// fsqrts f9,f10
	ctx.f9.f64 = double(float(sqrt(ctx.f10.f64)));
	// fdivs f8,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 / ctx.f9.f64));
	// stfs f8,-16(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lvx128 v7,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v6,v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.u32), 0xFF));
	// vmulfp128 v5,v9,v6
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v5.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v6.f32)));
	// vor v4,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// stvx128 v5,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v3,v4,99
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v4.u32), 0x9C));
	// vpermwi128 v2,v4,135
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v4.u32), 0x78));
	// vmulfp128 v1,v11,v3
	simde_mm_store_ps(ctx.v1.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v3.f32)));
	// vmulfp128 v31,v10,v2
	simde_mm_store_ps(v31.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v2.f32)));
	// vsubfp v30,v31,v1
	simde_mm_store_ps(v30.f32, simde_mm_sub_ps(simde_mm_load_ps(v31.f32), simde_mm_load_ps(ctx.v1.f32)));
	// stvx128 v30,r3,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F26AD0"))) PPC_WEAK_FUNC(sub_82F26AD0);
PPC_FUNC_IMPL(__imp__sub_82F26AD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f1,20(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fadds f13,f0,f1
	ctx.f13.f64 = double(float(f0.f64 + ctx.f1.f64));
	// stfs f13,44(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f12,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f1.f64));
	// stfs f11,60(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F26AF0"))) PPC_WEAK_FUNC(sub_82F26AF0);
PPC_FUNC_IMPL(__imp__sub_82F26AF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// li r11,64
	r11.s64 = 64;
	// lvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,32
	ctx.r10.s64 = 32;
	// li r9,48
	ctx.r9.s64 = 48;
	// addi r8,r1,-32
	ctx.r8.s64 = ctx.r1.s64 + -32;
	// li r7,80
	ctx.r7.s64 = 80;
	// lvx128 v13,r3,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,-24
	ctx.r6.s64 = ctx.r1.s64 + -24;
	// vmsum3fp128 v12,v13,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// lvx128 v11,r3,r10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r3,r9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r4,-32237
	ctx.r4.s64 = -2112684032;
	// vsubfp v11,v10,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v11.f32)));
	// stvewx v12,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v12,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v9,v12,v0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// stvewx v9,r0,r6
	ea = (ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v9.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,-24(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	f0.f64 = double(temp.f32);
	// lfs f11,-696(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -696);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,-32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f12,f0,f0,f12
	ctx.f12.f64 = double(float(f0.f64 * f0.f64 + ctx.f12.f64));
	// fcmpu cr6,f12,f11
	cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// blt cr6,0x82f26b8c
	if (cr6.lt) goto loc_82F26B8C;
	// fsqrts f12,f12
	ctx.f12.f64 = double(float(sqrt(ctx.f12.f64)));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r10,r11,2244
	ctx.r10.s64 = r11.s64 + 2244;
	// lfs f11,2244(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,2240
	r11.s64 = r11.s64 + 2240;
	// fdivs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 / ctx.f12.f64));
	// fmuls f0,f0,f10
	f0.f64 = double(float(f0.f64 * ctx.f10.f64));
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	cr6.compare(f0.f64, ctx.f10.f64);
	// blt cr6,0x82f26bb4
	if (cr6.lt) goto loc_82F26BB4;
	// li r8,1
	ctx.r8.s64 = 1;
	// b 0x82f26bb8
	goto loc_82F26BB8;
loc_82F26B8C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,2240
	r11.s64 = r11.s64 + 2240;
	// addi r10,r10,2244
	ctx.r10.s64 = ctx.r10.s64 + 2244;
	// li r8,1
	ctx.r8.s64 = 1;
	// lfs f10,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmr f0,f10
	f0.f64 = ctx.f10.f64;
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
	// b 0x82f26bb8
	goto loc_82F26BB8;
loc_82F26BB4:
	// li r8,0
	ctx.r8.s64 = 0;
loc_82F26BB8:
	// fcmpu cr6,f13,f10
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// li r9,1
	ctx.r9.s64 = 1;
	// bge cr6,0x82f26bc8
	if (!cr6.lt) goto loc_82F26BC8;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82F26BC8:
	// fabs f0,f0
	ctx.fpscr.disableFlushMode();
	f0.u64 = f0.u64 & ~0x8000000000000000;
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// bgt cr6,0x82f26ca0
	if (cr6.gt) goto loc_82F26CA0;
	// li r10,1
	ctx.r10.s64 = 1;
	// fmr f12,f0
	ctx.f12.f64 = f0.f64;
loc_82F26BE0:
	// vmsum3fp128 v0,v11,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// addi r11,r1,-24
	r11.s64 = ctx.r1.s64 + -24;
	// stvewx v0,r0,r11
	ea = (r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// li r11,1
	r11.s64 = 1;
	// lfs f0,-24(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	cr6.compare(f0.f64, ctx.f10.f64);
	// ble cr6,0x82f26c00
	if (!cr6.gt) goto loc_82F26C00;
	// li r11,0
	r11.s64 = 0;
loc_82F26C00:
	// lis r7,-31949
	ctx.r7.s64 = -2093809664;
	// lis r6,-31949
	ctx.r6.s64 = -2093809664;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r31,-32243
	r31.s64 = -2113077248;
	// lfs f0,2896(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2896);
	f0.f64 = double(temp.f32);
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// lfs f13,2904(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2904);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-31949
	ctx.r8.s64 = -2093809664;
	// fmsubs f10,f0,f12,f13
	ctx.f10.f64 = double(float(f0.f64 * ctx.f12.f64 - ctx.f13.f64));
	// lfs f0,-21808(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -21808);
	f0.f64 = double(temp.f32);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f13,-22120(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + -22120);
	ctx.f13.f64 = double(temp.f32);
	// add r7,r11,r9
	ctx.r7.u64 = r11.u64 + ctx.r9.u64;
	// lfs f12,2900(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2900);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r11,r7,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r10
	ctx.r6.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r10,r6,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// fadds f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 + f0.f64));
	// fctiwz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f8.u64);
	// lwz r11,-20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// clrlwi r6,r11,28
	ctx.r6.u64 = r11.u32 & 0xF;
	// rlwinm r7,r11,0,27,27
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// std r6,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r6.u64);
	// lfd f7,-24(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// rlwinm r10,r11,25,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x1;
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// rlwinm r9,r11,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// rlwinm r8,r11,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// fadds f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f13.f64));
	// fmuls f0,f4,f12
	f0.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// fnmsubs f3,f0,f0,f11
	ctx.f3.f64 = double(float(-(f0.f64 * f0.f64 - ctx.f11.f64)));
	// fsqrts f13,f3
	ctx.f13.f64 = double(float(sqrt(ctx.f3.f64)));
	// beq cr6,0x82f26ca8
	if (cr6.eq) goto loc_82F26CA8;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// b 0x82f26cb0
	goto loc_82F26CB0;
loc_82F26CA0:
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82f26be0
	goto loc_82F26BE0;
loc_82F26CA8:
	// fmr f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = f0.f64;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_82F26CB0:
	// stfs f0,-32(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stfs f12,-24(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// bne cr6,0x82f26cc8
	if (!cr6.eq) goto loc_82F26CC8;
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f0,-32(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
loc_82F26CC8:
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x82f26cd8
	if (!cr6.eq) goto loc_82F26CD8;
	// fneg f0,f12
	ctx.fpscr.disableFlushMode();
	f0.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f0,-24(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
loc_82F26CD8:
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// addi r8,r1,-24
	ctx.r8.s64 = ctx.r1.s64 + -24;
	// li r7,20
	ctx.r7.s64 = 20;
	// subfic r6,r10,3
	xer.ca = ctx.r10.u32 <= 3;
	ctx.r6.s64 = 3 - ctx.r10.s64;
	// oris r4,r11,16128
	ctx.r4.u64 = r11.u64 | 1056964608;
	// lvlx v0,0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r11,r6,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// vspltw v11,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// lvlx v10,0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v9,v10,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0xFF));
	// lvlx v8,r3,r7
	temp.u32 = ctx.r3.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v7,v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), 0xFF));
	// vmulfp128 v6,v12,v11
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v6.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v11.f32)));
	// lvx128 v5,r11,r3
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v4,v13,v9,v6
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vmaddfp v3,v4,v7,v5
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// stvx128 v3,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r4,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r4.u32);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F26D28"))) PPC_WEAK_FUNC(sub_82F26D28);
PPC_FUNC_IMPL(__imp__sub_82F26D28) {
	PPC_FUNC_PROLOGUE();
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
	// mflr r12
	// bl 0x831b0b28
	// addic. r11,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	r11.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x82f26e34
	if (cr0.lt) goto loc_82F26E34;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r5,r3,20
	ctx.r5.s64 = ctx.r3.s64 + 20;
	// addi r31,r3,80
	r31.s64 = ctx.r3.s64 + 80;
	// addi r30,r3,64
	r30.s64 = ctx.r3.s64 + 64;
	// lfs f10,2244(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	ctx.f10.f64 = double(temp.f32);
	// lis r29,-31949
	r29.s64 = -2093809664;
	// lfs f11,-22120(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -22120);
	ctx.f11.f64 = double(temp.f32);
loc_82F26D58:
	// lhz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// lfs f0,2900(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 2900);
	f0.f64 = double(temp.f32);
	// clrlwi r9,r7,28
	ctx.r9.u64 = ctx.r7.u32 & 0xF;
	// rlwinm r28,r7,0,27,27
	r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x10;
	// std r9,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.r9.u64);
	// lfd f13,-56(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// frsp f9,f12
	ctx.f9.f64 = double(float(ctx.f12.f64));
	// rlwinm r9,r7,25,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 25) & 0x1;
	// rlwinm r8,r7,26,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0x1;
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// fadds f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// fmuls f0,f8,f0
	f0.f64 = double(float(ctx.f8.f64 * f0.f64));
	// fnmsubs f7,f0,f0,f10
	ctx.f7.f64 = double(float(-(f0.f64 * f0.f64 - ctx.f10.f64)));
	// fsqrts f13,f7
	ctx.f13.f64 = double(float(sqrt(ctx.f7.f64)));
	// beq cr6,0x82f26da8
	if (cr6.eq) goto loc_82F26DA8;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// b 0x82f26db0
	goto loc_82F26DB0;
loc_82F26DA8:
	// fmr f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = f0.f64;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_82F26DB0:
	// stfs f0,-64(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stfs f12,-60(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// bne cr6,0x82f26dc8
	if (!cr6.eq) goto loc_82F26DC8;
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f0,-64(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
loc_82F26DC8:
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne cr6,0x82f26dd8
	if (!cr6.eq) goto loc_82F26DD8;
	// fneg f0,f12
	ctx.fpscr.disableFlushMode();
	f0.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f0,-60(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
loc_82F26DD8:
	// addi r8,r1,-64
	ctx.r8.s64 = ctx.r1.s64 + -64;
	// lvx128 v0,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,-60
	ctx.r7.s64 = ctx.r1.s64 + -60;
	// lvx128 v13,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subfic r9,r9,3
	xer.ca = ctx.r9.u32 <= 3;
	ctx.r9.s64 = 3 - ctx.r9.s64;
	// lvlx v12,0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v11,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xFF));
	// oris r10,r10,16128
	ctx.r10.u64 = ctx.r10.u64 | 1056964608;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lvlx v10,0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// vspltw v9,v10,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0xFF));
	// lvlx v8,0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v7,v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), 0xFF));
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// lvx128 v6,r9,r3
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v5,v0,v9
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v5.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp v4,v13,v7,v5
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// vmaddfp v3,v4,v11,v6
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// stvx128 v3,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r10,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r10.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bge 0x82f26d58
	if (!cr0.lt) goto loc_82F26D58;
loc_82F26E34:
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82F26E38"))) PPC_WEAK_FUNC(sub_82F26E38);
PPC_FUNC_IMPL(__imp__sub_82F26E38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// li r11,48
	r11.s64 = 48;
	// li r10,32
	ctx.r10.s64 = 32;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r3,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r3,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp v12,v13,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// lfs f0,-22120(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -22120);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lvlx v11,0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v10,v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0xFF));
	// vmulfp128 v9,v12,v10
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v10.f32)));
	// stvx128 v9,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F26E70"))) PPC_WEAK_FUNC(sub_82F26E70);
PPC_FUNC_IMPL(__imp__sub_82F26E70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,48
	r11.s64 = 48;
	// lvx128 v0,r3,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F26E80"))) PPC_WEAK_FUNC(sub_82F26E80);
PPC_FUNC_IMPL(__imp__sub_82F26E80) {
	PPC_FUNC_PROLOGUE();
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
	PPCRegister f0{};
	PPCVRegister v14{};
	PPCVRegister v15{};
	PPCVRegister v16{};
	PPCVRegister v17{};
	PPCVRegister v18{};
	PPCVRegister v19{};
	PPCVRegister v20{};
	PPCVRegister v21{};
	PPCVRegister v22{};
	PPCVRegister v23{};
	PPCVRegister v24{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCVRegister v58{};
	PPCVRegister v59{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b14
	// addi r9,r3,32
	ctx.r9.s64 = ctx.r3.s64 + 32;
	// lfs f0,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	f0.f64 = double(temp.f32);
	// addi r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 + 48;
	// stfs f0,-112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(f0.f64 * f0.f64));
	// addi r8,r1,-108
	ctx.r8.s64 = ctx.r1.s64 + -108;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp v12,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// lfs f13,2240(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -104, temp.u32);
	// vmsum3fp128 v11,v12,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v12.f32), 0xEF));
	// stvewx v11,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v11.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f10,-108(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -108);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,-11748(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -11748);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fcmpu cr6,f10,f9
	cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// blt cr6,0x82f26eec
	if (cr6.lt) goto loc_82F26EEC;
	// lfs f12,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
	// fmuls f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f13,-104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -104, temp.u32);
	// stfs f0,-112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -112, temp.u32);
loc_82F26EEC:
	// lis r11,-32240
	r11.s64 = -2112880640;
	// ld r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// addi r29,r1,-96
	r29.s64 = ctx.r1.s64 + -96;
	// lfs f11,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// addi r30,r1,-96
	r30.s64 = ctx.r1.s64 + -96;
	// std r6,0(r30)
	PPC_STORE_U64(r30.u32 + 0, ctx.r6.u64);
	// addi r5,r1,-108
	ctx.r5.s64 = ctx.r1.s64 + -108;
	// ld r31,8(r9)
	r31.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// addi r6,r1,-108
	ctx.r6.s64 = ctx.r1.s64 + -108;
	// std r31,8(r30)
	PPC_STORE_U64(r30.u32 + 8, r31.u64);
	// lfs f12,17728(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17728);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r3,64
	ctx.r8.s64 = ctx.r3.s64 + 64;
	// fmuls f9,f0,f12
	ctx.f9.f64 = double(float(f0.f64 * ctx.f12.f64));
	// stfs f9,-108(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -108, temp.u32);
	// addi r7,r3,80
	ctx.r7.s64 = ctx.r3.s64 + 80;
	// vspltisw v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_set1_epi32(int(0x0)));
	// lvlx v12,0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r1,-112
	ctx.r3.s64 = ctx.r1.s64 + -112;
	// stfs f9,-108(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -108, temp.u32);
	// addi r11,r1,-112
	r11.s64 = ctx.r1.s64 + -112;
	// lvlx v4,0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v1,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v1.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xFF));
	// lvx128 v11,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r25,16
	r25.s64 = 16;
	// lvx128 v10,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v2,v4,0
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v4.u32), 0xFF));
	// vaddfp v9,v11,v10
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v10.f32)));
	// lvlx v7,0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsubfp v8,v11,v10
	simde_mm_store_ps(ctx.v8.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v10.f32)));
	// lvlx v6,0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v5,v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.u32), 0xFF));
	// stfs f11,-84(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -84, temp.u32);
	// vspltw v3,v6,0
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.u32), 0xFF));
	// lvx128 v0,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r26,32
	r26.s64 = 32;
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// li r27,48
	r27.s64 = 48;
	// stfs f10,-108(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -108, temp.u32);
	// vmulfp128 v31,v11,v5
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v31.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v5.f32)));
	// li r28,64
	r28.s64 = 64;
	// vmulfp128 v30,v10,v3
	simde_mm_store_ps(v30.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v3.f32)));
	// li r29,80
	r29.s64 = 80;
	// li r30,96
	r30.s64 = 96;
	// fadds f8,f11,f13
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// li r31,112
	r31.s64 = 112;
	// addi r3,r1,-104
	ctx.r3.s64 = ctx.r1.s64 + -104;
	// addi r5,r1,-96
	ctx.r5.s64 = ctx.r1.s64 + -96;
	// vmulfp128 v28,v9,v1
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v28.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v1.f32)));
	// addi r24,r1,-108
	r24.s64 = ctx.r1.s64 + -108;
	// vmulfp128 v29,v8,v2
	simde_mm_store_ps(v29.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v2.f32)));
	// addi r11,r4,128
	r11.s64 = ctx.r4.s64 + 128;
	// lvlx v19,0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v18,v19,0
	simde_mm_store_si128((simde__m128i*)v18.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v19.u32), 0xFF));
	// lvlx v17,0,r24
	temp.u32 = r24.u32;
	simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v31,v13,1,0
	simde_mm_store_ps(v31.f32, simde_mm_blend_ps(simde_mm_load_ps(v31.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v13.f32), 228), 1));
	// vrlimi128 v30,v13,1,0
	simde_mm_store_ps(v30.f32, simde_mm_blend_ps(simde_mm_load_ps(v30.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v13.f32), 228), 1));
	// vaddfp v27,v0,v31
	simde_mm_store_ps(v27.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(v31.f32)));
	// vrlimi128 v29,v13,1,0
	simde_mm_store_ps(v29.f32, simde_mm_blend_ps(simde_mm_load_ps(v29.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v13.f32), 228), 1));
	// vaddfp v26,v0,v30
	simde_mm_store_ps(v26.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(v30.f32)));
	// vrlimi128 v28,v13,1,0
	simde_mm_store_ps(v28.f32, simde_mm_blend_ps(simde_mm_load_ps(v28.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v13.f32), 228), 1));
	// vsubfp v25,v0,v31
	simde_mm_store_ps(v25.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(v31.f32)));
	// vsubfp v24,v0,v30
	simde_mm_store_ps(v24.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(v30.f32)));
	// stvx128 v27,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp v22,v0,v29
	simde_mm_store_ps(v22.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(v29.f32)));
	// vaddfp v23,v0,v28
	simde_mm_store_ps(v23.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(v28.f32)));
	// vsubfp v21,v0,v28
	simde_mm_store_ps(v21.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(v28.f32)));
	// vaddfp v20,v0,v29
	simde_mm_store_ps(v20.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(v29.f32)));
	// stvx128 v26,r4,r26
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + r26.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v25,r4,r28
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v24,r4,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v22,r4,r27
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + r27.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v23,r4,r25
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + r25.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v21,r4,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v20,r4,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ld r23,8(r10)
	r23.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r6,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r6.u64);
	// addi r6,r4,256
	ctx.r6.s64 = ctx.r4.s64 + 256;
	// std r23,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, r23.u64);
	// addi r23,r1,-96
	r23.s64 = ctx.r1.s64 + -96;
	// stfs f11,-84(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -84, temp.u32);
	// lvx128 v0,r0,r23
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r23.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v16,v17,0
	simde_mm_store_si128((simde__m128i*)v16.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v17.u32), 0xFF));
	// vaddfp v15,v0,v31
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v15.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(v31.f32)));
	// addi r5,r4,272
	ctx.r5.s64 = ctx.r4.s64 + 272;
	// vaddfp v14,v0,v28
	simde_mm_store_ps(v14.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(v28.f32)));
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// vaddfp128 v63,v0,v30
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(v30.f32)));
	// vsubfp128 v62,v0,v29
	simde_mm_store_ps(v62.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(v29.f32)));
	// vsubfp128 v61,v0,v31
	simde_mm_store_ps(v61.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(v31.f32)));
	// vsubfp128 v60,v0,v28
	simde_mm_store_ps(v60.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(v28.f32)));
	// vsubfp128 v59,v0,v30
	simde_mm_store_ps(v59.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(v30.f32)));
	// vaddfp128 v58,v0,v29
	simde_mm_store_ps(v58.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(v29.f32)));
	// stvx128 v15,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v14,r11,r25
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + r25.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r26
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + r26.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r11,r27
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + r27.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r11,r28
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r11,r29
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v59,r11,r30
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v58,r11,r31
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v11,v12,135
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0x78));
	// vpermwi128 v9,v10,99
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0x9C));
	// lvx128 v13,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v8,v10,135
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0x78));
	// vpermwi128 v6,v12,99
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0x9C));
	// vmulfp128 v7,v11,v9
	simde_mm_store_ps(ctx.v7.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v5,v6,v8
	simde_mm_store_ps(ctx.v5.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vsubfp v0,v5,v7
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v7.f32)));
	// vmaddfp v4,v0,v18,v13
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(v18.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v4,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v3,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v2,v0,v16,v3
	simde_mm_store_ps(ctx.v2.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(v16.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// stvx128 v2,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f8,268(r4)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 268, temp.u32);
	// stfs f8,284(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 284, temp.u32);
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_82F270C8"))) PPC_WEAK_FUNC(sub_82F270C8);
PPC_FUNC_IMPL(__imp__sub_82F270C8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32237
	r11.s64 = -2112684032;
	// stfs f2,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f11,f1
	ctx.f11.f64 = ctx.f1.f64;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// addi r8,r11,-684
	ctx.r8.s64 = r11.s64 + -684;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// li r11,3
	r11.s64 = 3;
	// lfs f13,2240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	ctx.f13.f64 = double(temp.f32);
	// sth r7,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r7.u16);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// lfs f0,2904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2904);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x82f2712c
	if (!cr6.lt) goto loc_82F2712C;
	// bl 0x82f26960
	sub_82F26960(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f1
	f0.f64 = double(float(f0.f64 - ctx.f1.f64));
	// stfs f0,2904(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 2904, temp.u32);
loc_82F2712C:
	// li r11,32
	r11.s64 = 32;
	// lvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,48
	ctx.r10.s64 = 48;
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	f0.f64 = double(temp.f32);
	// fadds f13,f0,f11
	ctx.f13.f64 = double(float(f0.f64 + ctx.f11.f64));
	// stvx128 v0,r3,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f11,20(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stvx128 v13,r3,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f13,44(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f12,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f11,60(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// bl 0x82f269a8
	sub_82F269A8(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lfs f0,-28620(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -28620);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27180"))) PPC_WEAK_FUNC(sub_82F27180);
PPC_FUNC_IMPL(__imp__sub_82F27180) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// li r11,1
	r11.s64 = 1;
	// addi r9,r10,-684
	ctx.r9.s64 = ctx.r10.s64 + -684;
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, r11.u16);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// beq cr6,0x82f271d8
	if (cr6.eq) goto loc_82F271D8;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2904(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2904);
	f0.f64 = double(temp.f32);
	// lfs f13,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x82f271d8
	if (!cr6.lt) goto loc_82F271D8;
	// bl 0x82f26960
	sub_82F26960(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f1
	f0.f64 = double(float(f0.f64 - ctx.f1.f64));
	// stfs f0,2904(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 2904, temp.u32);
loc_82F271D8:
	// li r11,3
	r11.s64 = 3;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F271F0"))) PPC_WEAK_FUNC(sub_82F271F0);
PPC_FUNC_IMPL(__imp__sub_82F271F0) {
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
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCRegister temp{};
	// mflr r12
	// bl 0x831b0b18
	// ld r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// addi r11,r4,16
	r11.s64 = ctx.r4.s64 + 16;
	// ld r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// addi r7,r1,-160
	ctx.r7.s64 = ctx.r1.s64 + -160;
	// ld r30,16(r4)
	r30.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// addi r27,r1,-96
	r27.s64 = ctx.r1.s64 + -96;
	// ld r28,24(r4)
	r28.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// ld r26,32(r4)
	r26.u64 = PPC_LOAD_U64(ctx.r4.u32 + 32);
	// addi r29,r1,-128
	r29.s64 = ctx.r1.s64 + -128;
	// ld r25,40(r4)
	r25.u64 = PPC_LOAD_U64(ctx.r4.u32 + 40);
	// li r11,1
	r11.s64 = 1;
	// ld r24,48(r4)
	r24.u64 = PPC_LOAD_U64(ctx.r4.u32 + 48);
	// addi r9,r1,-112
	ctx.r9.s64 = ctx.r1.s64 + -112;
	// ld r4,56(r4)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r4.u32 + 56);
	// addi r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 + 48;
	// std r8,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r8.u64);
	// addi r8,r1,-160
	ctx.r8.s64 = ctx.r1.s64 + -160;
	// std r5,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r5.u64);
	// addi r7,r1,-144
	ctx.r7.s64 = ctx.r1.s64 + -144;
	// addi r5,r1,-128
	ctx.r5.s64 = ctx.r1.s64 + -128;
	// std r30,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r30.u64);
	// std r28,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r28.u64);
	// std r4,8(r27)
	PPC_STORE_U64(r27.u32 + 8, ctx.r4.u64);
	// addi r4,r1,-96
	ctx.r4.s64 = ctx.r1.s64 + -96;
	// std r26,0(r29)
	PPC_STORE_U64(r29.u32 + 0, r26.u64);
	// lvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// std r25,8(r29)
	PPC_STORE_U64(r29.u32 + 8, r25.u64);
	// lvx128 v13,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// std r24,0(r27)
	PPC_STORE_U64(r27.u32 + 0, r24.u64);
	// lvx128 v12,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82F27278:
	// lvx128 v10,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// vspltw v9,v10,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0xFF));
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// vspltw v8,v10,1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0xAA));
	// vspltw v7,v10,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0x55));
	// vmulfp128 v6,v0,v9
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v6.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp v5,v13,v8,v6
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vmaddfp v4,v12,v7,v5
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// vaddfp v3,v4,v11
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v11.f32)));
	// stvx128 v3,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r9,-16
	ctx.r9.s64 = ctx.r9.s64 + -16;
	// bge 0x82f27278
	if (!cr0.lt) goto loc_82F27278;
	// addi r11,r1,-112
	r11.s64 = ctx.r1.s64 + -112;
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	f0.f64 = double(temp.f32);
	// addi r10,r1,-128
	ctx.r10.s64 = ctx.r1.s64 + -128;
	// fadds f13,f0,f1
	ctx.f13.f64 = double(float(f0.f64 + ctx.f1.f64));
	// addi r30,r1,-96
	r30.s64 = ctx.r1.s64 + -96;
	// addi r9,r1,-96
	ctx.r9.s64 = ctx.r1.s64 + -96;
	// stfs f13,-96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// addi r5,r1,-96
	ctx.r5.s64 = ctx.r1.s64 + -96;
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lvx128 v12,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,-160
	ctx.r7.s64 = ctx.r1.s64 + -160;
	// vsubfp v0,v13,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)));
	// lvx128 v7,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,-160
	ctx.r4.s64 = ctx.r1.s64 + -160;
	// vspltw v6,v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.u32), 0xFF));
	// vmsum3fp128 v5,v0,v0
	simde_mm_store_ps(ctx.v5.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// lfs f13,2244(r8)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2244);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r1,-160
	ctx.r8.s64 = ctx.r1.s64 + -160;
	// stvx128 v0,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// vmaxfp v11,v12,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)));
	// li r31,20
	r31.s64 = 20;
	// vminfp v10,v12,v13
	simde_mm_store_ps(ctx.v10.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)));
	// addi r11,r6,16
	r11.s64 = ctx.r6.s64 + 16;
	// lfs f0,-12728(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12728);
	f0.f64 = double(temp.f32);
	// lvlx v9,r3,r31
	temp.u32 = ctx.r3.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v8,v9,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), 0xFF));
	// stvx128 v5,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v28,v11,v11
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// lfs f12,-96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -96);
	ctx.f12.f64 = double(temp.f32);
	// fsqrts f11,f12
	ctx.f11.f64 = double(float(sqrt(ctx.f12.f64)));
	// fdivs f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// stfs f10,-96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// stvx128 v11,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v4,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v3,v4,0
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v4.u32), 0xFF));
	// vmulfp128 v2,v0,v3
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v2.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v3.f32)));
	// stvx128 v2,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f11,-152(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -152);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,-160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -156);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f8,f12,f12,f0
	ctx.f8.f64 = double(float(-(ctx.f12.f64 * ctx.f12.f64 - f0.f64)));
	// fnmsubs f9,f13,f13,f0
	ctx.f9.f64 = double(float(-(ctx.f13.f64 * ctx.f13.f64 - f0.f64)));
	// fnmsubs f7,f11,f11,f0
	ctx.f7.f64 = double(float(-(ctx.f11.f64 * ctx.f11.f64 - f0.f64)));
	// fsqrts f5,f8
	ctx.f5.f64 = double(float(sqrt(ctx.f8.f64)));
	// stfs f5,-156(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -156, temp.u32);
	// fsqrts f6,f9
	ctx.f6.f64 = double(float(sqrt(ctx.f9.f64)));
	// stfs f6,-160(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -160, temp.u32);
	// fsqrts f4,f7
	ctx.f4.f64 = double(float(sqrt(ctx.f7.f64)));
	// stfs f4,-152(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -152, temp.u32);
	// lvx128 v1,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v30,v1,v8,v6
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v30.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vsubfp v29,v10,v30
	simde_mm_store_ps(v29.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(v30.f32)));
	// vaddfp v27,v28,v30
	simde_mm_store_ps(v27.f32, simde_mm_add_ps(simde_mm_load_ps(v28.f32), simde_mm_load_ps(v30.f32)));
	// stvx128 v29,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v27,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82F27398"))) PPC_WEAK_FUNC(sub_82F27398);
PPC_FUNC_IMPL(__imp__sub_82F27398) {
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
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,24
	ctx.r10.s64 = 24;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + r11.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82f273f4
	if (!cr6.lt) goto loc_82F273F4;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r8,r9,-620
	ctx.r8.s64 = ctx.r9.s64 + -620;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 + 12;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
loc_82F273F4:
	// addi r11,r4,64
	r11.s64 = ctx.r4.s64 + 64;
	// lfs f0,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	f0.f64 = double(temp.f32);
	// addi r10,r4,80
	ctx.r10.s64 = ctx.r4.s64 + 80;
	// lfs f13,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r4,16
	ctx.r9.s64 = ctx.r4.s64 + 16;
	// fadds f31,f0,f13
	f31.f64 = double(float(f0.f64 + ctx.f13.f64));
	// li r8,32
	ctx.r8.s64 = 32;
	// li r7,48
	ctx.r7.s64 = 48;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v12,v0,99
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x9C));
	// vpermwi128 v11,v13,135
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x78));
	// lvlx v10,0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vpermwi128 v9,v0,135
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x78));
	// lvx128 v8,r4,r8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v7,v13,99
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x9C));
	// lvx128 v6,r4,r7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v5,v10,0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0xFF));
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// vmulfp128 v4,v11,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v4.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v12.f32)));
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// vmulfp128 v3,v7,v9
	simde_mm_store_ps(ctx.v3.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v9.f32)));
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// vsubfp v2,v3,v4
	simde_mm_store_ps(ctx.v2.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(ctx.v4.f32)));
	// vmulfp128 v1,v2,v5
	simde_mm_store_ps(ctx.v1.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v5.f32)));
	// vaddfp v31,v8,v1
	simde_mm_store_ps(v31.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vsubfp v30,v6,v1
	simde_mm_store_ps(v30.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v1.f32)));
	// stvx128 v31,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v30,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82f27ba8
	sub_82F27BA8(ctx, base);
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// lvx128 v0,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lvx128 v29,r0,r9
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// vsubfp v28,v0,v29
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v28.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(v29.f32)));
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// vmsum3fp128 v27,v28,v28
	simde_mm_store_ps(v27.f32, simde_mm_dp_ps(simde_mm_load_ps(v28.f32), simde_mm_load_ps(v28.f32), 0xEF));
	// stvx128 v27,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f12,128(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// fsqrts f11,f12
	ctx.f11.f64 = double(float(sqrt(ctx.f12.f64)));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvlx v26,0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v25,v26,0
	simde_mm_store_si128((simde__m128i*)v25.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v26.u32), 0xFF));
	// stvewx v25,r0,r6
	ea = (ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, v25.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f10,f31
	cr6.compare(ctx.f10.f64, f31.f64);
	// lvx128 v11,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f30,2240(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2240);
	f30.f64 = double(temp.f32);
	// bge cr6,0x82f27514
	if (!cr6.lt) goto loc_82F27514;
	// vsubfp v13,v12,v11
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v11.f32)));
	// addi r11,r1,104
	r11.s64 = ctx.r1.s64 + 104;
	// vsubfp v10,v0,v11
	simde_mm_store_ps(ctx.v10.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vmsum3fp128 v9,v13,v10
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32), 0xEF));
	// stvewx v9,r0,r11
	ea = (r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v9.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// ble cr6,0x82f27514
	if (!cr6.gt) goto loc_82F27514;
	// vsubfp v10,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v10.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)));
	// addi r11,r1,104
	r11.s64 = ctx.r1.s64 + 104;
	// vmsum3fp128 v9,v13,v10
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32), 0xEF));
	// stvewx v9,r0,r11
	ea = (r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v9.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// blt cr6,0x82f278d4
	if (cr6.lt) goto loc_82F278D4;
loc_82F27514:
	// addi r28,r30,16
	r28.s64 = r30.s64 + 16;
	// vsubfp v13,v12,v11
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v11.f32)));
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r26,r1,208
	r26.s64 = ctx.r1.s64 + 208;
	// addi r25,r1,224
	r25.s64 = ctx.r1.s64 + 224;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// lvx128 v12,r0,r28
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// vsubfp v11,v12,v0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// lfs f0,-14888(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -14888);
	f0.f64 = double(temp.f32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// stvx128 v13,r0,r26
	simde_mm_store_si128((simde__m128i*)(base + ((r26.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stvx128 v11,r0,r25
	simde_mm_store_si128((simde__m128i*)(base + ((r25.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82f27a90
	sub_82F27A90(ctx, base);
	// fmuls f7,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(f31.f64 * f31.f64));
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f7
	cr6.compare(f0.f64, ctx.f7.f64);
	// bgt cr6,0x82f278d4
	if (cr6.gt) goto loc_82F278D4;
	// addi r11,r1,208
	r11.s64 = ctx.r1.s64 + 208;
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v0,v13,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// stvewx v0,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f13,-12568(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12568);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x82f278d4
	if (!cr6.gt) goto loc_82F278D4;
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r8,r1,108
	ctx.r8.s64 = ctx.r1.s64 + 108;
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// lfs f13,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f12,f13
	ctx.f12.f64 = double(float(sqrt(ctx.f13.f64)));
	// lfs f13,2244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// stfs f11,128(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lvx128 v12,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v11,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xFF));
	// vmulfp128 v10,v11,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v10.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v13,v11
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v11.f32)));
	// stvewx v10,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v10.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v13,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v8,v13,v0
	simde_mm_store_ps(ctx.v8.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// stvewx v8,r0,r6
	ea = (ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v8.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f10,100(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f9,96(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvlx v9,0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v7,v9,0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), 0xFF));
	// vmaddfp v6,v0,v7,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmsum3fp128 v13,v6,v6
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v6.f32), 0xEF));
	// stvewx v13,r0,r4
	ea = (ctx.r4.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f8,100(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f8,f30
	cr6.compare(ctx.f8.f64, f30.f64);
	// lfs f9,-24780(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -24780);
	ctx.f9.f64 = double(temp.f32);
	// beq cr6,0x82f27674
	if (cr6.eq) goto loc_82F27674;
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// fsubs f0,f7,f0
	f0.f64 = double(float(ctx.f7.f64 - f0.f64));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// stvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f11,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// fsqrts f12,f0
	ctx.f12.f64 = double(float(sqrt(f0.f64)));
	// fsqrts f10,f11
	ctx.f10.f64 = double(float(sqrt(ctx.f11.f64)));
	// fdivs f8,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 / ctx.f10.f64));
	// stfs f8,96(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvlx v13,0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// stvewx v12,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f6,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f5.f64 = double(temp.f32);
	// fnmsubs f12,f12,f6,f5
	ctx.f12.f64 = double(float(-(ctx.f12.f64 * ctx.f6.f64 - ctx.f5.f64)));
	// b 0x82f27678
	goto loc_82F27678;
loc_82F27674:
	// fmr f12,f9
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f9.f64;
loc_82F27678:
	// lfs f8,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r31,16
	r11.s64 = r31.s64 + 16;
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fcmpu cr6,f12,f8
	cr6.compare(ctx.f12.f64, ctx.f8.f64);
	// bge cr6,0x82f278d4
	if (!cr6.lt) goto loc_82F278D4;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// fcmpu cr6,f12,f30
	cr6.compare(ctx.f12.f64, f30.f64);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r9,4512
	ctx.r7.s64 = ctx.r9.s64 + 4512;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// lvx128 v10,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// vmsum3fp128 v13,v10,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// stvewx v13,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v11,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r0,r28
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx v7,0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v6,v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.u32), 0xFF));
	// vspltw v13,v6,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.u32), 0xFF));
	// vsubfp v5,v11,v13
	simde_mm_store_ps(ctx.v5.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v4,v5,v12
	simde_mm_store_ps(ctx.v4.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v13,v13,v9,v4
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v4.f32)));
	// vmsum3fp128 v3,v13,v0
	simde_mm_store_ps(ctx.v3.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// stvewx v3,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v3.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	f0.f64 = double(temp.f32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	f0.f64 = double(float(f0.f64 - ctx.f11.f64));
	// lfs f10,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f10.f64 = double(temp.f32);
	// blt cr6,0x82f277b4
	if (cr6.lt) goto loc_82F277B4;
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// ble cr6,0x82f277b4
	if (!cr6.gt) goto loc_82F277B4;
	// fcmpu cr6,f0,f10
	cr6.compare(f0.f64, ctx.f10.f64);
	// bge cr6,0x82f277b4
	if (!cr6.lt) goto loc_82F277B4;
	// fdivs f0,f0,f10
	f0.f64 = double(float(f0.f64 / ctx.f10.f64));
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r10,8
	ctx.r5.s64 = ctx.r10.s64 + 8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lvx128 v9,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lvlx v0,0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vspltw v0,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xFF));
	// vsubfp v8,v11,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v8.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v7,v8,v10
	simde_mm_store_ps(ctx.v7.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v10.f32)));
	// vmaddfp v6,v0,v9,v7
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vsubfp v5,v13,v6
	simde_mm_store_ps(ctx.v5.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v6.f32)));
	// vmsum3fp128 v4,v5,v5
	simde_mm_store_ps(ctx.v4.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v5.f32), 0xEF));
	// stvx128 v4,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f12,128(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// fsqrts f11,f12
	ctx.f11.f64 = double(float(sqrt(ctx.f12.f64)));
	// fdivs f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// stfs f10,128(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lvx128 v3,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v2,v3,0
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.u32), 0xFF));
	// vmulfp128 v1,v5,v2
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v1.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v2.f32)));
	// stvx128 v1,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwx r3,r4,r31
	PPC_STORE_U32(ctx.r4.u32 + r31.u32, ctx.r3.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82f277ac
	if (!cr6.lt) goto loc_82F277AC;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r9,-14788
	ctx.r8.s64 = ctx.r9.s64 + -14788;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_82F277AC:
	// li r11,1
	r11.s64 = 1;
	// b 0x82f27908
	goto loc_82F27908;
loc_82F277B4:
	// vmsum3fp128 v13,v12,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stvewx v13,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	cr6.compare(f0.f64, ctx.f11.f64);
	// bge cr6,0x82f277d4
	if (!cr6.lt) goto loc_82F277D4;
	// fmr f13,f9
	ctx.f13.f64 = ctx.f9.f64;
	// b 0x82f277e8
	goto loc_82F277E8;
loc_82F277D4:
	// fadds f12,f11,f10
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// ble cr6,0x82f278d4
	if (!cr6.gt) goto loc_82F278D4;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lvx128 v10,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82F277E8:
	// vsubfp v13,v10,v12
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v12.f32)));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stfs f13,108(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// vmsum3fp128 v7,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v7.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// stvewx v7,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v7.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 * ctx.f13.f64));
	// fmuls f0,f12,f9
	f0.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// blt cr6,0x82f278d4
	if (cr6.lt) goto loc_82F278D4;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stvewx v8,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v8.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f13,f11,f9
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fmuls f10,f8,f13
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f10
	cr6.compare(f0.f64, ctx.f10.f64);
	// bge cr6,0x82f278d4
	if (!cr6.lt) goto loc_82F278D4;
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lvlx v13,0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v8,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// vspltw v13,v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), 0xFF));
	// vsubfp v7,v11,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v7.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v6,v7,v12
	simde_mm_store_ps(ctx.v6.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v5,v13,v9,v6
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vsubfp v4,v5,v10
	simde_mm_store_ps(ctx.v4.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v10.f32)));
	// vmsum3fp128 v3,v4,v4
	simde_mm_store_ps(ctx.v3.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v4.f32), 0xEF));
	// stvewx v3,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v3.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f7
	cr6.compare(ctx.f13.f64, ctx.f7.f64);
	// bgt cr6,0x82f278d4
	if (cr6.gt) goto loc_82F278D4;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r8,r11,8
	ctx.r8.s64 = r11.s64 + 8;
	// lvlx v13,0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// vspltw v12,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v11,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)));
	// stvx128 v11,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwx r9,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + r31.u32, ctx.r9.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// bge cr6,0x82f277ac
	if (!cr6.lt) goto loc_82F277AC;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r9,-14788
	ctx.r8.s64 = ctx.r9.s64 + -14788;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// li r11,1
	r11.s64 = 1;
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// b 0x82f27908
	goto loc_82F27908;
loc_82F278D4:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82f27904
	if (!cr6.lt) goto loc_82F27904;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r9,-14788
	ctx.r8.s64 = ctx.r9.s64 + -14788;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_82F27904:
	// li r11,0
	r11.s64 = 0;
loc_82F27908:
	// stb r11,0(r27)
	PPC_STORE_U8(r27.u32 + 0, r11.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82F27920"))) PPC_WEAK_FUNC(sub_82F27920);
PPC_FUNC_IMPL(__imp__sub_82F27920) {
	PPC_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27928"))) PPC_WEAK_FUNC(sub_82F27928);
PPC_FUNC_IMPL(__imp__sub_82F27928) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,-604
	ctx.r4.s64 = ctx.r10.s64 + -604;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,24(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
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

__attribute__((alias("__imp__sub_82F27988"))) PPC_WEAK_FUNC(sub_82F27988);
PPC_FUNC_IMPL(__imp__sub_82F27988) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// li r11,32
	r11.s64 = 32;
	// lvx128 v12,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,48
	ctx.r10.s64 = 48;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lvx128 v0,r3,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r3,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp v11,v13,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmsum3fp128 v10,v11,v12
	simde_mm_store_ps(ctx.v10.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v12.f32), 0xEF));
	// stvewx v10,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v10.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,2240(r8)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2240);
	f0.f64 = double(temp.f32);
	// lfs f13,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82f279d4
	if (!cr6.lt) goto loc_82F279D4;
	// li r11,0
	r11.s64 = 0;
	// stvx128 v0,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// oris r11,r11,16128
	r11.u64 = r11.u64 | 1056964608;
	// stw r11,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, r11.u32);
	// blr 
	return;
loc_82F279D4:
	// li r11,16
	r11.s64 = 16;
	// stvx128 v13,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// oris r11,r11,16128
	r11.u64 = r11.u64 | 1056964608;
	// stw r11,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F279E8"))) PPC_WEAK_FUNC(sub_82F279E8);
PPC_FUNC_IMPL(__imp__sub_82F279E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// addic. r11,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	r11.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bltlr 
	if (cr0.lt) return;
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
loc_82F279F4:
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// oris r8,r9,16128
	ctx.r8.u64 = ctx.r9.u64 | 1056964608;
	// lvx128 v0,r10,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bge 0x82f279f4
	if (!cr0.lt) goto loc_82F279F4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27A20"))) PPC_WEAK_FUNC(sub_82F27A20);
PPC_FUNC_IMPL(__imp__sub_82F27A20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// li r11,48
	r11.s64 = 48;
	// li r10,32
	ctx.r10.s64 = 32;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r3,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r3,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp v12,v13,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// lfs f0,-22120(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -22120);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lvlx v11,0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v10,v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0xFF));
	// vmulfp128 v9,v12,v10
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v10.f32)));
	// stvx128 v9,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27A58"))) PPC_WEAK_FUNC(sub_82F27A58);
PPC_FUNC_IMPL(__imp__sub_82F27A58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,48
	r11.s64 = 48;
	// lvx128 v0,r3,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27A68"))) PPC_WEAK_FUNC(sub_82F27A68);
PPC_FUNC_IMPL(__imp__sub_82F27A68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,32
	r11.s64 = 32;
	// li r10,48
	ctx.r10.s64 = 48;
	// li r9,16
	ctx.r9.s64 = 16;
	// lvx128 v0,r3,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r3,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stvx128 v13,r4,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27A90"))) PPC_WEAK_FUNC(sub_82F27A90);
PPC_FUNC_IMPL(__imp__sub_82F27A90) {
	PPC_FUNC_PROLOGUE();
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
	// lvx128 v0,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,-80
	r11.s64 = ctx.r1.s64 + -80;
	// lvx128 v13,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r1,-64
	r31.s64 = ctx.r1.s64 + -64;
	// vsubfp v12,v13,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// lvx128 v11,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v9,v11,v11
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v11.f32), 0xEF));
	// vmsum3fp128 v8,v10,v11
	simde_mm_store_ps(ctx.v8.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v11.f32), 0xEF));
	// addi r30,r1,-68
	r30.s64 = ctx.r1.s64 + -68;
	// vmsum3fp128 v7,v10,v10
	simde_mm_store_ps(ctx.v7.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v10.f32), 0xEF));
	// addi r29,r1,-72
	r29.s64 = ctx.r1.s64 + -72;
	// addi r28,r1,-76
	r28.s64 = ctx.r1.s64 + -76;
	// lis r27,-32249
	r27.s64 = -2113470464;
	// vmsum3fp128 v6,v10,v12
	simde_mm_store_ps(ctx.v6.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v12.f32), 0xEF));
	// vmsum3fp128 v5,v11,v12
	simde_mm_store_ps(ctx.v5.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v12.f32), 0xEF));
	// stvewx v8,r0,r11
	ea = (r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v8.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v6,r0,r31
	ea = (r31.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v6.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v5,r0,r30
	ea = (r30.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v5.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v7,r0,r29
	ea = (r29.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v7.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v9,r0,r28
	ea = (r28.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v9.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,-80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	f0.f64 = double(temp.f32);
	// lfs f11,26192(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 26192);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,-72(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -72);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-76(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -76);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f8,f0,f0
	ctx.f8.f64 = double(float(f0.f64 * f0.f64));
	// lfs f10,-68(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -68);
	ctx.f10.f64 = double(temp.f32);
	// fabs f7,f9
	ctx.f7.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fsubs f13,f9,f8
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// fabs f5,f13
	ctx.f5.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fmuls f4,f6,f11
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// fcmpu cr6,f5,f4
	cr6.compare(ctx.f5.f64, ctx.f4.f64);
	// ble cr6,0x82f27b3c
	if (!cr6.gt) goto loc_82F27B3C;
	// fmuls f11,f0,f10
	ctx.f11.f64 = double(float(f0.f64 * ctx.f10.f64));
	// lfs f9,-64(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f9.f64 = double(temp.f32);
	// fmsubs f8,f12,f9,f11
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 - ctx.f11.f64));
	// fdivs f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 / ctx.f13.f64));
	// stfs f7,0(r8)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// b 0x82f27b48
	goto loc_82F27B48;
loc_82F27B3C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
loc_82F27B48:
	// lfs f13,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fmsubs f11,f13,f0,f10
	ctx.f11.f64 = double(float(ctx.f13.f64 * f0.f64 - ctx.f10.f64));
	// addi r31,r1,-64
	r31.s64 = ctx.r1.s64 + -64;
	// fdivs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 / ctx.f12.f64));
	// stfs f10,0(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lvlx v9,0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvx128 v13,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx v0,0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v7,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vspltw v8,v9,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), 0xFF));
	// vmaddfp v5,v10,v7,v11
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp v6,v12,v8,v13
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vsubfp v4,v6,v5
	simde_mm_store_ps(ctx.v4.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v5.f32)));
	// stvx128 v6,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v5,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v3,v4,v4
	simde_mm_store_ps(ctx.v3.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v4.f32), 0xEF));
	// stvewx v3,r0,r31
	ea = (r31.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v3.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f9,-64(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,0(r7)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82F27BA8"))) PPC_WEAK_FUNC(sub_82F27BA8);
PPC_FUNC_IMPL(__imp__sub_82F27BA8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lvx128 v13,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// lvx128 v12,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,-12
	ctx.r10.s64 = ctx.r1.s64 + -12;
	// lvx128 v11,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp v0,v12,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vsubfp v10,v13,v11
	simde_mm_store_ps(ctx.v10.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v11.f32)));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// vmsum3fp128 v9,v0,v0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// vmsum3fp128 v8,v0,v10
	simde_mm_store_ps(ctx.v8.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v10.f32), 0xEF));
	// stvewx v8,r0,r11
	ea = (r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v8.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v9,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v9.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f13,2240(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	f0.f64 = double(temp.f32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x82f27bf4
	if (cr6.gt) goto loc_82F27BF4;
	// stvx128 v13,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
loc_82F27BF4:
	// lfs f13,-12(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x82f27c08
	if (cr6.lt) goto loc_82F27C08;
	// stvx128 v12,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
loc_82F27C08:
	// addi r11,r1,-12
	r11.s64 = ctx.r1.s64 + -12;
	// fdivs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f0,-12(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lvlx v12,0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v11,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xFF));
	// vmaddfp v10,v0,v11,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v10,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27C28"))) PPC_WEAK_FUNC(sub_82F27C28);
PPC_FUNC_IMPL(__imp__sub_82F27C28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-32237
	r11.s64 = -2112684032;
	// stfs f1,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-1804
	ctx.r9.s64 = r11.s64 + -1804;
	// li r8,0
	ctx.r8.s64 = 0;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// lvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r3,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r4,48
	ctx.r4.s64 = 48;
	// lvx128 v13,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r3,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f1,44(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f1,60(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27C78"))) PPC_WEAK_FUNC(sub_82F27C78);
PPC_FUNC_IMPL(__imp__sub_82F27C78) {
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
	// mflr r12
	// bl 0x831b0b18
	// addi r11,r1,-160
	r11.s64 = ctx.r1.s64 + -160;
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	f0.f64 = double(temp.f32);
	// fadds f13,f0,f1
	ctx.f13.f64 = double(float(f0.f64 + ctx.f1.f64));
	// stfs f13,-160(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -160, temp.u32);
	// ld r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// addi r7,r1,-160
	ctx.r7.s64 = ctx.r1.s64 + -160;
	// ld r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// ld r5,16(r4)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// addi r29,r1,-128
	r29.s64 = ctx.r1.s64 + -128;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// std r10,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r10.u64);
	// ld r30,24(r4)
	r30.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// addi r27,r1,-112
	r27.s64 = ctx.r1.s64 + -112;
	// ld r28,32(r4)
	r28.u64 = PPC_LOAD_U64(ctx.r4.u32 + 32);
	// vspltw v10,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// ld r26,40(r4)
	r26.u64 = PPC_LOAD_U64(ctx.r4.u32 + 40);
	// li r11,1
	r11.s64 = 1;
	// ld r25,48(r4)
	r25.u64 = PPC_LOAD_U64(ctx.r4.u32 + 48);
	// addi r9,r1,-96
	ctx.r9.s64 = ctx.r1.s64 + -96;
	// ld r24,56(r4)
	r24.u64 = PPC_LOAD_U64(ctx.r4.u32 + 56);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// std r8,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r8.u64);
	// addi r8,r1,-160
	ctx.r8.s64 = ctx.r1.s64 + -160;
	// std r5,0(r31)
	PPC_STORE_U64(r31.u32 + 0, ctx.r5.u64);
	// addi r7,r1,-144
	ctx.r7.s64 = ctx.r1.s64 + -144;
	// addi r5,r1,-128
	ctx.r5.s64 = ctx.r1.s64 + -128;
	// std r30,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r30.u64);
	// addi r4,r1,-112
	ctx.r4.s64 = ctx.r1.s64 + -112;
	// std r28,0(r29)
	PPC_STORE_U64(r29.u32 + 0, r28.u64);
	// std r26,8(r29)
	PPC_STORE_U64(r29.u32 + 8, r26.u64);
	// addi r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 + 48;
	// std r25,0(r27)
	PPC_STORE_U64(r27.u32 + 0, r25.u64);
	// lvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// std r24,8(r27)
	PPC_STORE_U64(r27.u32 + 8, r24.u64);
	// lvx128 v13,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82F27D18:
	// lvx128 v9,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// vspltw v8,v9,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), 0xFF));
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// vspltw v7,v9,1
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), 0xAA));
	// vspltw v6,v9,2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), 0x55));
	// vmulfp128 v5,v0,v8
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v5.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmaddfp v4,v13,v7,v5
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// vmaddfp v3,v12,v6,v4
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v4.f32)));
	// vaddfp v2,v3,v11
	simde_mm_store_ps(ctx.v2.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(ctx.v11.f32)));
	// stvx128 v2,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r9,-16
	ctx.r9.s64 = ctx.r9.s64 + -16;
	// bge 0x82f27d18
	if (!cr0.lt) goto loc_82F27D18;
	// addi r10,r1,-112
	ctx.r10.s64 = ctx.r1.s64 + -112;
	// addi r9,r1,-96
	ctx.r9.s64 = ctx.r1.s64 + -96;
	// addi r11,r6,16
	r11.s64 = ctx.r6.s64 + 16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaxfp v11,v0,v13
	simde_mm_store_ps(ctx.v11.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vminfp v12,v0,v13
	simde_mm_store_ps(ctx.v12.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vor v8,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// stvx128 v11,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp v9,v12,v10
	simde_mm_store_ps(ctx.v9.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v10.f32)));
	// vaddfp v7,v8,v10
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v10.f32)));
	// stvx128 v9,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v7,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82F27D88"))) PPC_WEAK_FUNC(sub_82F27D88);
PPC_FUNC_IMPL(__imp__sub_82F27D88) {
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
	PPCRegister f0{};
	PPCVRegister v31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b10
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,24
	ctx.r10.s64 = 24;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// add r28,r10,r11
	r28.u64 = ctx.r10.u64 + r11.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82f27de0
	if (!cr6.lt) goto loc_82F27DE0;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r8,r9,-588
	ctx.r8.s64 = ctx.r9.s64 + -588;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 + 12;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
loc_82F27DE0:
	// addi r29,r25,48
	r29.s64 = r25.s64 + 48;
	// addi r30,r25,32
	r30.s64 = r25.s64 + 32;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f27ba8
	sub_82F27BA8(ctx, base);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// lvx128 v0,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// addi r26,r25,16
	r26.s64 = r25.s64 + 16;
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp v12,v0,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmsum3fp128 v11,v12,v12
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v12.f32), 0xEF));
	// stvewx v11,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v11.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	f0.f64 = double(temp.f32);
	// lfs f13,16(r25)
	temp.u32 = PPC_LOAD_U32(r25.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// blt cr6,0x82f28110
	if (cr6.lt) goto loc_82F28110;
	// addi r27,r3,16
	r27.s64 = ctx.r3.s64 + 16;
	// lvx128 v13,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32255
	r11.s64 = -2113863680;
	// vsubfp v2,v12,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v2.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)));
	// addi r23,r1,112
	r23.s64 = ctx.r1.s64 + 112;
	// addi r22,r1,128
	r22.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lvx128 v11,r0,r27
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// vsubfp v1,v11,v0
	simde_mm_store_ps(ctx.v1.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// lfs f0,-14888(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -14888);
	f0.f64 = double(temp.f32);
	// addi r8,r1,108
	ctx.r8.s64 = ctx.r1.s64 + 108;
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stvx128 v2,r0,r23
	simde_mm_store_si128((simde__m128i*)(base + ((r23.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v1,r0,r22
	simde_mm_store_si128((simde__m128i*)(base + ((r22.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82f27a90
	sub_82F27A90(ctx, base);
	// lfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r26.u32 + 0);
	f0.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(f0.f64 * f0.f64));
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x82f28110
	if (cr6.gt) goto loc_82F28110;
	// vmsum3fp128 v0,v2,v2
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v2.f32), 0xEF));
	// addi r11,r1,100
	r11.s64 = ctx.r1.s64 + 100;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stvewx v0,r0,r11
	ea = (r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f12,100(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-12568(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12568);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// lfs f12,2240(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2240);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,2244(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2244);
	ctx.f9.f64 = double(temp.f32);
	// ble cr6,0x82f27f08
	if (!cr6.gt) goto loc_82F27F08;
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	f0.f64 = double(temp.f32);
	// fsqrts f11,f0
	ctx.f11.f64 = double(float(sqrt(f0.f64)));
	// fdivs f10,f9,f11
	ctx.f10.f64 = double(float(ctx.f9.f64 / ctx.f11.f64));
	// stfs f10,128(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v12,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v11,v12,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v2,v12
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v12.f32)));
	// stvewx v11,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v11.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f10,100(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// b 0x82f27f10
	goto loc_82F27F10;
loc_82F27F08:
	// fmr f10,f12
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f12.f64;
	// vxor v0,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_setzero_si128());
loc_82F27F10:
	// vmsum3fp128 v12,v1,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// addi r9,r11,4496
	ctx.r9.s64 = r11.s64 + 4496;
	// lvx128 v13,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp v11,v13,v12
	simde_mm_store_ps(ctx.v11.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v10,v0,v11,v1
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v1.f32)));
	// vmsum3fp128 v9,v10,v10
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v10.f32), 0xEF));
	// stvewx v9,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v9.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// beq cr6,0x82f27f5c
	if (cr6.eq) goto loc_82F27F5C;
	// lfs f11,0(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmsubs f8,f11,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 - ctx.f13.f64));
	// lfs f7,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f7.f64 = double(temp.f32);
	// fdivs f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 / f0.f64));
	// fsqrts f5,f6
	ctx.f5.f64 = double(float(sqrt(ctx.f6.f64)));
	// fsubs f0,f7,f5
	f0.f64 = double(float(ctx.f7.f64 - ctx.f5.f64));
	// b 0x82f27f64
	goto loc_82F27F64;
loc_82F27F5C:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-24780(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24780);
	f0.f64 = double(temp.f32);
loc_82F27F64:
	// lfs f13,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,16
	r11.s64 = r31.s64 + 16;
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x82f28110
	if (!cr6.lt) goto loc_82F28110;
	// lvx128 v12,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// vmsum3fp128 v13,v12,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushModeUnconditional();
	cr6.compare(f0.f64, ctx.f12.f64);
	// addi r7,r1,108
	ctx.r7.s64 = ctx.r1.s64 + 108;
	// addi r6,r8,4512
	ctx.r6.s64 = ctx.r8.s64 + 4512;
	// stvewx v13,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v13,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx v11,0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v10,v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0xFF));
	// lvx128 v11,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r0,r27
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v10,v10,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0xFF));
	// vsubfp v8,v11,v10
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v8.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v10.f32)));
	// vmulfp128 v7,v8,v13
	simde_mm_store_ps(ctx.v7.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v10,v10,v9,v7
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vmsum3fp128 v6,v10,v0
	simde_mm_store_ps(ctx.v6.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// stvewx v6,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v6.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f11,104(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// blt cr6,0x82f280a8
	if (cr6.lt) goto loc_82F280A8;
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x82f280a8
	if (!cr6.gt) goto loc_82F280A8;
	// fcmpu cr6,f13,f10
	cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// bge cr6,0x82f280a8
	if (!cr6.lt) goto loc_82F280A8;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// fdivs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f10.f64));
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lvx128 v13,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// li r7,2
	ctx.r7.s64 = 2;
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// li r5,-1
	ctx.r5.s64 = -1;
	// lvlx v9,0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v8,v9,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), 0xFF));
	// vspltw v0,v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), 0xFF));
	// stw r7,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r7.u32);
	// addi r6,r11,8
	ctx.r6.s64 = r11.s64 + 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// vsubfp v7,v11,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v7.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stb r3,0(r24)
	PPC_STORE_U8(r24.u32 + 0, ctx.r3.u8);
	// vmulfp128 v6,v7,v12
	simde_mm_store_ps(ctx.v6.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v5,v0,v13,v6
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vsubfp v4,v10,v5
	simde_mm_store_ps(ctx.v4.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v5.f32)));
	// vmsum3fp128 v3,v4,v4
	simde_mm_store_ps(ctx.v3.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v4.f32), 0xEF));
	// stvx128 v3,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f12,128(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// fsqrts f11,f12
	ctx.f11.f64 = double(float(sqrt(ctx.f12.f64)));
	// fdivs f10,f9,f11
	ctx.f10.f64 = double(float(ctx.f9.f64 / ctx.f11.f64));
	// stfs f10,128(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lvx128 v2,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v1,v2,0
	simde_mm_store_si128((simde__m128i*)ctx.v1.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v2.u32), 0xFF));
	// vmulfp128 v31,v4,v1
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v31.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v1.f32)));
	// stvx128 v31,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwx r5,r4,r31
	PPC_STORE_U32(ctx.r4.u32 + r31.u32, ctx.r5.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82f281f8
	if (!cr6.lt) goto loc_82F281F8;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r9,-14788
	ctx.r8.s64 = ctx.r9.s64 + -14788;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 + 12;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831b0b60
	return;
loc_82F280A8:
	// vmsum3fp128 v0,v13,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// addi r11,r1,108
	r11.s64 = ctx.r1.s64 + 108;
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushModeUnconditional();
	cr6.compare(f0.f64, ctx.f12.f64);
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// stvewx v0,r0,r11
	ea = (r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	f0.f64 = double(temp.f32);
	// fsubs f11,f0,f11
	ctx.f11.f64 = double(float(f0.f64 - ctx.f11.f64));
	// fdivs f10,f11,f10
	ctx.f10.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// stfs f10,108(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lvx128 v10,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx v8,0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v7,v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), 0xFF));
	// vspltw v0,v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.u32), 0xFF));
	// vsubfp v6,v11,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v6.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v5,v6,v12
	simde_mm_store_ps(ctx.v5.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v4,v0,v10,v5
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// vsubfp v0,v13,v4
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v4.f32)));
	// bge cr6,0x82f2811c
	if (!cr6.lt) goto loc_82F2811C;
	// vmsum3fp128 v0,v0,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// addi r11,r1,108
	r11.s64 = ctx.r1.s64 + 108;
	// stvewx v0,r0,r11
	ea = (r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f10,108(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,0(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 0);
	f0.f64 = double(temp.f32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(f0.f64 * f0.f64));
	// fcmpu cr6,f10,f11
	cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// ble cr6,0x82f2811c
	if (!cr6.gt) goto loc_82F2811C;
loc_82F28110:
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r24)
	PPC_STORE_U8(r24.u32 + 0, r11.u8);
	// b 0x82f281c8
	goto loc_82F281C8;
loc_82F2811C:
	// li r29,0
	r29.s64 = 0;
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// stw r29,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r29.u32);
	// mr r30,r29
	r30.u64 = r29.u64;
	// stw r29,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, r29.u32);
	// ble cr6,0x82f28138
	if (!cr6.gt) goto loc_82F28138;
	// li r30,1
	r30.s64 = 1;
loc_82F28138:
	// addi r11,r30,2
	r11.s64 = r30.s64 + 2;
	// lfs f1,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r26.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r9,r25
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + r25.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp v13,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vsubfp v12,v9,v0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82f22788
	sub_82F22788(ctx, base);
	// lbz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f281c4
	if (cr6.eq) goto loc_82F281C4;
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stb r10,0(r24)
	PPC_STORE_U8(r24.u32 + 0, ctx.r10.u8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82f281f8
	if (!cr6.lt) goto loc_82F281F8;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r9,-14788
	ctx.r8.s64 = ctx.r9.s64 + -14788;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 + 12;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831b0b60
	return;
loc_82F281C4:
	// stb r29,0(r24)
	PPC_STORE_U8(r24.u32 + 0, r29.u8);
loc_82F281C8:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82f281f8
	if (!cr6.lt) goto loc_82F281F8;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r9,-14788
	ctx.r8.s64 = ctx.r9.s64 + -14788;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_82F281F8:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_82F28208"))) PPC_WEAK_FUNC(sub_82F28208);
PPC_FUNC_IMPL(__imp__sub_82F28208) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,-448
	ctx.r4.s64 = ctx.r10.s64 + -448;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,24(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
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

__attribute__((alias("__imp__sub_82F28268"))) PPC_WEAK_FUNC(sub_82F28268);
PPC_FUNC_IMPL(__imp__sub_82F28268) {
	PPC_FUNC_PROLOGUE();
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F28270"))) PPC_WEAK_FUNC(sub_82F28270);
PPC_FUNC_IMPL(__imp__sub_82F28270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-22012
	ctx.r10.s64 = r11.s64 + -22012;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F28280"))) PPC_WEAK_FUNC(sub_82F28280);
PPC_FUNC_IMPL(__imp__sub_82F28280) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// lvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	f0.f64 = double(temp.f32);
	// lfs f13,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x82f282a0
	if (cr6.lt) goto loc_82F282A0;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_82F282A0:
	// lfs f13,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,44(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82f282b8
	if (!cr6.lt) goto loc_82F282B8;
	// stfs f13,44(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// blr 
	return;
loc_82F282B8:
	// stfs f0,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F282C0"))) PPC_WEAK_FUNC(sub_82F282C0);
PPC_FUNC_IMPL(__imp__sub_82F282C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,32
	r11.s64 = 32;
	// lvx128 v0,r3,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F282D0"))) PPC_WEAK_FUNC(sub_82F282D0);
PPC_FUNC_IMPL(__imp__sub_82F282D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCVRegister v24{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCRegister temp{};
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// lvx128 v11,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,16
	ctx.r10.s64 = 16;
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	f0.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fadds f13,f0,f1
	ctx.f13.f64 = double(float(f0.f64 + ctx.f1.f64));
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r7,r9,-14192
	ctx.r7.s64 = ctx.r9.s64 + -14192;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,32
	r11.s64 = 32;
	// vspltw v13,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// lvx128 v9,r4,r10
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// vspltw v10,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v4,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v3,v4,0
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v4.u32), 0xFF));
	// lvx128 v8,r4,r11
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v7,v12,v9
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v7.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v6,v13,v8
	simde_mm_store_ps(ctx.v6.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v8.f32)));
	// addi r11,r5,-12080
	r11.s64 = ctx.r5.s64 + -12080;
	// vmulfp128 v5,v10,v11
	simde_mm_store_ps(ctx.v5.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v11.f32)));
	// li r3,48
	ctx.r3.s64 = 48;
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v29,r4,r3
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vand v1,v7,v0
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vand v2,v6,v0
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vand v31,v5,v0
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddfp v30,v2,v3
	simde_mm_store_ps(v30.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v3.f32)));
	// vaddfp v28,v31,v1
	simde_mm_store_ps(v28.f32, simde_mm_add_ps(simde_mm_load_ps(v31.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vaddfp v27,v28,v30
	simde_mm_store_ps(v27.f32, simde_mm_add_ps(simde_mm_load_ps(v28.f32), simde_mm_load_ps(v30.f32)));
	// vxor v26,v27,v13
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vaddfp v25,v27,v29
	simde_mm_store_ps(v25.f32, simde_mm_add_ps(simde_mm_load_ps(v27.f32), simde_mm_load_ps(v29.f32)));
	// vaddfp v24,v26,v29
	simde_mm_store_ps(v24.f32, simde_mm_add_ps(simde_mm_load_ps(v26.f32), simde_mm_load_ps(v29.f32)));
	// stvx128 v25,r6,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v24,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F28370"))) PPC_WEAK_FUNC(sub_82F28370);
PPC_FUNC_IMPL(__imp__sub_82F28370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// ld r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// ld r8,40(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 40);
	// lvx128 v13,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r10,-12080
	ctx.r6.s64 = ctx.r10.s64 + -12080;
	// vspltisw v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r7,r1,-32
	ctx.r7.s64 = ctx.r1.s64 + -32;
	// addi r4,r1,-32
	ctx.r4.s64 = ctx.r1.s64 + -32;
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// addi r3,r1,-32
	ctx.r3.s64 = ctx.r1.s64 + -32;
	// lvx128 v0,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32237
	r11.s64 = -2112684032;
	// vand v11,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// std r9,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r9.u64);
	// std r8,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r8.u64);
	// lvx128 v10,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r11,30896
	ctx.r9.s64 = r11.s64 + 30896;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// vxor v0,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// vcmpgtfp v9,v12,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)));
	// addi r8,r10,-13792
	ctx.r8.s64 = ctx.r10.s64 + -13792;
	// lvx128 v8,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,-32
	ctx.r6.s64 = ctx.r1.s64 + -32;
	// lvx128 v7,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vand v6,v9,v8
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)));
	// vmsum4fp128 v5,v6,v7
	simde_mm_store_ps(ctx.v5.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v7.f32), 0xFF));
	// vctsxs v4,v5,0
	simde_mm_store_si128((simde__m128i*)ctx.v4.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v5.f32)));
	// stvx128 v4,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r4,-16(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r11,r4,0,28,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xE;
	// oris r10,r11,16128
	ctx.r10.u64 = r11.u64 | 1056964608;
	// stw r10,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r10.u32);
	// lvx128 v3,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v3,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F28408"))) PPC_WEAK_FUNC(sub_82F28408);
PPC_FUNC_IMPL(__imp__sub_82F28408) {
	PPC_FUNC_PROLOGUE();
	// lvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor v13,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_setzero_si128());
	// stvx128 v13,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F28418"))) PPC_WEAK_FUNC(sub_82F28418);
PPC_FUNC_IMPL(__imp__sub_82F28418) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// addic. r11,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	r11.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bltlr 
	if (cr0.lt) return;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r9,r3,32
	ctx.r9.s64 = ctx.r3.s64 + 32;
	// addi r10,r10,-576
	ctx.r10.s64 = ctx.r10.s64 + -576;
loc_82F2842C:
	// lhz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// rotlwi r7,r8,3
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 3);
	// oris r5,r8,16128
	ctx.r5.u64 = ctx.r8.u64 | 1056964608;
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// lvx128 v13,r7,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v12,v0,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v12,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r5,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r5.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bge 0x82f2842c
	if (!cr0.lt) goto loc_82F2842C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F28460"))) PPC_WEAK_FUNC(sub_82F28460);
PPC_FUNC_IMPL(__imp__sub_82F28460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mflr r12
	// bl 0x831b0b20
	// lis r11,-32237
	r11.s64 = -2112684032;
	// ld r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// ld r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 40);
	// addi r8,r1,-80
	ctx.r8.s64 = ctx.r1.s64 + -80;
	// addi r7,r11,-576
	ctx.r7.s64 = r11.s64 + -576;
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	f0.f64 = double(temp.f32);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r1,-80
	ctx.r5.s64 = ctx.r1.s64 + -80;
	// li r11,16
	r11.s64 = 16;
	// std r10,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r10.u64);
	// li r10,32
	ctx.r10.s64 = 32;
	// std r9,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r9.u64);
	// lvx128 v12,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r7,r6
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32 + ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,48
	ctx.r9.s64 = 48;
	// stfs f0,-68(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -68, temp.u32);
	// li r8,32
	ctx.r8.s64 = 32;
	// lvx128 v0,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v13,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v12,v0,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)));
	// stvx128 v13,r4,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,48
	ctx.r6.s64 = 48;
	// li r11,80
	r11.s64 = 80;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r31,64
	r31.s64 = 64;
	// li r30,80
	r30.s64 = 80;
	// li r28,112
	r28.s64 = 112;
	// li r29,96
	r29.s64 = 96;
	// li r27,96
	r27.s64 = 96;
	// li r26,112
	r26.s64 = 112;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stvx128 v12,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r7,r9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r7,r10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v10,v0,v12
	simde_mm_store_ps(ctx.v10.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v11,v0,v13
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v10,r4,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v11,r4,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r7,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r7,r5
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32 + ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v8,v0,v12
	simde_mm_store_ps(ctx.v8.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v9,v0,v13
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v8,r4,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v9,r4,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r7,r28
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32 + r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r7,r29
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32 + r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v6,v0,v12
	simde_mm_store_ps(ctx.v6.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v7,v0,v13
	simde_mm_store_ps(ctx.v7.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v6,r4,r27
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + r27.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v7,r4,r26
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + r26.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82F28538"))) PPC_WEAK_FUNC(sub_82F28538);
PPC_FUNC_IMPL(__imp__sub_82F28538) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32237
	r11.s64 = -2112684032;
	// stfs f1,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-1564
	ctx.r9.s64 = r11.s64 + -1564;
	// li r8,0
	ctx.r8.s64 = 0;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r6,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r6.u32);
	// lwz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r5,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r5.u32);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r10,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// lfs f0,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	f0.f64 = double(temp.f32);
	// lfs f13,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x82f28598
	if (cr6.lt) goto loc_82F28598;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_82F28598:
	// lfs f13,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,44(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82f285b0
	if (!cr6.lt) goto loc_82F285B0;
	// stfs f13,44(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// blr 
	return;
loc_82F285B0:
	// stfs f0,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F285B8"))) PPC_WEAK_FUNC(sub_82F285B8);
PPC_FUNC_IMPL(__imp__sub_82F285B8) {
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
	PPCRegister f0{};
	PPCVRegister v15{};
	PPCVRegister v16{};
	PPCVRegister v17{};
	PPCVRegister v18{};
	PPCVRegister v19{};
	PPCVRegister v20{};
	PPCVRegister v21{};
	PPCVRegister v22{};
	PPCVRegister v23{};
	PPCVRegister v24{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCRegister temp{};
	// mflr r12
	// bl 0x831b0b20
	// lwz r29,0(r13)
	r29.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r28,24
	r28.s64 = 24;
	// lwzx r11,r28,r29
	r11.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82f285f8
	if (!cr6.lt) goto loc_82F285F8;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r8,r9,-436
	ctx.r8.s64 = ctx.r9.s64 + -436;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
loc_82F285F8:
	// addi r11,r1,-96
	r11.s64 = ctx.r1.s64 + -96;
	// lfs f0,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	f0.f64 = double(temp.f32);
	// li r10,32
	ctx.r10.s64 = 32;
	// stfs f0,-96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// lvx128 v13,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r31,r1,-96
	r31.s64 = ctx.r1.s64 + -96;
	// lvx128 v12,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v11,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xFF));
	// lvx128 v10,r4,r10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r8,30896
	ctx.r4.s64 = ctx.r8.s64 + 30896;
	// vaddfp v9,v10,v11
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v11.f32)));
	// li r10,16
	ctx.r10.s64 = 16;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r7,r9,-12080
	ctx.r7.s64 = ctx.r9.s64 + -12080;
	// addi r9,r11,-13792
	ctx.r9.s64 = r11.s64 + -13792;
	// lvx128 v8,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,-96
	ctx.r8.s64 = ctx.r1.s64 + -96;
	// lvx128 v5,r5,r10
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v6,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vor v7,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// addi r11,r1,-96
	r11.s64 = ctx.r1.s64 + -96;
	// lvx128 v0,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,-96
	ctx.r7.s64 = ctx.r1.s64 + -96;
	// lvx128 v4,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v1,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vor v2,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// addi r10,r1,-80
	ctx.r10.s64 = ctx.r1.s64 + -80;
	// vor v3,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// vor v29,v4,v4
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// vcmpgefp v31,v13,v9
	simde_mm_store_ps(v31.f32, simde_mm_cmpge_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v9.f32)));
	// vxor v0,v9,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vcmpgefp v30,v5,v9
	simde_mm_store_ps(v30.f32, simde_mm_cmpge_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v9.f32)));
	// vcmpgefp v28,v0,v13
	simde_mm_store_ps(v28.f32, simde_mm_cmpge_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcmpgefp v27,v0,v5
	simde_mm_store_ps(v27.f32, simde_mm_cmpge_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v5.f32)));
	// vand v26,v31,v8
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)));
	// vand v25,v30,v6
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vmsum4fp128 v24,v26,v4
	simde_mm_store_ps(v24.f32, simde_mm_dp_ps(simde_mm_load_ps(v26.f32), simde_mm_load_ps(ctx.v4.f32), 0xFF));
	// vand v23,v28,v7
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmsum4fp128 v22,v25,v2
	simde_mm_store_ps(v22.f32, simde_mm_dp_ps(simde_mm_load_ps(v25.f32), simde_mm_load_ps(ctx.v2.f32), 0xFF));
	// vand v21,v27,v1
	simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vmsum4fp128 v20,v23,v3
	simde_mm_store_ps(v20.f32, simde_mm_dp_ps(simde_mm_load_ps(v23.f32), simde_mm_load_ps(ctx.v3.f32), 0xFF));
	// vmsum4fp128 v19,v21,v29
	simde_mm_store_ps(v19.f32, simde_mm_dp_ps(simde_mm_load_ps(v21.f32), simde_mm_load_ps(v29.f32), 0xFF));
	// vctsxs v18,v24,0
	simde_mm_store_si128((simde__m128i*)v18.s32, simde_mm_vctsxs(simde_mm_load_ps(v24.f32)));
	// vctsxs v17,v22,0
	simde_mm_store_si128((simde__m128i*)v17.s32, simde_mm_vctsxs(simde_mm_load_ps(v22.f32)));
	// vctsxs v16,v20,0
	simde_mm_store_si128((simde__m128i*)v16.s32, simde_mm_vctsxs(simde_mm_load_ps(v20.f32)));
	// vctsxs v15,v19,0
	simde_mm_store_si128((simde__m128i*)v15.s32, simde_mm_vctsxs(simde_mm_load_ps(v19.f32)));
	// stvx128 v18,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r9,-96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -96);
	// stvx128 v17,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r11,r9,0,28,30
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE;
	// lwz r8,-96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -96);
	// stvx128 v16,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r7,-96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -96);
	// stvx128 v15,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r10,r8,0,28,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xE;
	// lwz r4,-96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -96);
	// rlwinm r30,r4,0,28,30
	r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xE;
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & r11.u64;
	// rlwinm r31,r7,0,28,30
	r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xE;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82f2885c
	if (!cr6.eq) goto loc_82F2885C;
	// and r9,r30,r31
	ctx.r9.u64 = r30.u64 & r31.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82f2885c
	if (!cr6.eq) goto loc_82F2885C;
	// or r9,r31,r11
	ctx.r9.u64 = r31.u64 | r11.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82f2885c
	if (cr6.eq) goto loc_82F2885C;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f11,16(r6)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// li r7,8
	ctx.r7.s64 = 8;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r7,-112(r1)
	PPC_STORE_U32(ctx.r1.u32 + -112, ctx.r7.u32);
	// or r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 | r11.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// lfs f12,2244(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2244);
	ctx.f12.f64 = double(temp.f32);
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r4,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r4.u32);
	// li r27,2
	r27.s64 = 2;
	// lfs f13,2240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	ctx.f13.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r27,-104(r1)
	PPC_STORE_U32(ctx.r1.u32 + -104, r27.u32);
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// lfs f10,-24780(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24780);
	ctx.f10.f64 = double(temp.f32);
loc_82F28754:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// li r11,0
	r11.s64 = 0;
loc_82F2875C:
	// addi r9,r1,-104
	ctx.r9.s64 = ctx.r1.s64 + -104;
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// and r27,r9,r7
	r27.u64 = ctx.r9.u64 & ctx.r7.u64;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x82f287d8
	if (cr6.eq) goto loc_82F287D8;
	// addi r27,r1,-72
	r27.s64 = ctx.r1.s64 + -72;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f9,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lfsx f8,r11,r27
	temp.u32 = PPC_LOAD_U32(r11.u32 + r27.u32);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f0,f12,f8
	ctx.f7.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fmadds f6,f9,f12,f8
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fdivs f0,f7,f5
	f0.f64 = double(float(ctx.f7.f64 / ctx.f5.f64));
	// beq cr6,0x82f287c8
	if (cr6.eq) goto loc_82F287C8;
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x82f287d0
	if (cr6.lt) goto loc_82F287D0;
	// addi r9,r1,-96
	ctx.r9.s64 = ctx.r1.s64 + -96;
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
	// addi r27,r1,-96
	r27.s64 = ctx.r1.s64 + -96;
	// addi r26,r1,-88
	r26.s64 = ctx.r1.s64 + -88;
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor v0,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_setzero_si128());
	// stvx128 v0,r0,r27
	simde_mm_store_si128((simde__m128i*)(base + ((r27.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfsx f12,r11,r26
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + r26.u32, temp.u32);
	// b 0x82f287d0
	goto loc_82F287D0;
loc_82F287C8:
	// fsubs f9,f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f11.f64 - f0.f64));
	// fsel f11,f9,f0,f11
	ctx.f11.f64 = ctx.f9.f64 >= 0.0 ? f0.f64 : ctx.f11.f64;
loc_82F287D0:
	// fcmpu cr6,f11,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// blt cr6,0x82f2885c
	if (cr6.lt) goto loc_82F2885C;
loc_82F287D8:
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmpwi cr6,r11,-8
	cr6.compare<int32_t>(r11.s32, -8, xer);
	// bge cr6,0x82f2875c
	if (!cr6.lt) goto loc_82F2875C;
	// addic. r4,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// fmr f12,f10
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f10.f64;
	// or r7,r30,r31
	ctx.r7.u64 = r30.u64 | r31.u64;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// bge 0x82f28754
	if (!cr0.lt) goto loc_82F28754;
	// lwz r11,64(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 64);
	// addi r10,r1,-96
	ctx.r10.s64 = ctx.r1.s64 + -96;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stfs f13,16(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// addi r8,r11,8
	ctx.r8.s64 = r11.s64 + 8;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwx r9,r7,r6
	PPC_STORE_U32(ctx.r7.u32 + ctx.r6.u32, ctx.r9.u32);
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// bge cr6,0x82f28850
	if (!cr6.lt) goto loc_82F28850;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r9,-14788
	ctx.r8.s64 = ctx.r9.s64 + -14788;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_82F28850:
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// b 0x831b0b70
	return;
loc_82F2885C:
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82f2888c
	if (!cr6.lt) goto loc_82F2888C;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r9,-14788
	ctx.r8.s64 = ctx.r9.s64 + -14788;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_82F2888C:
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82F28898"))) PPC_WEAK_FUNC(sub_82F28898);
PPC_FUNC_IMPL(__imp__sub_82F28898) {
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
	PPCVRegister v21{};
	PPCVRegister v22{};
	PPCVRegister v23{};
	PPCVRegister v24{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,5(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// add r30,r11,r4
	r30.u64 = r11.u64 + ctx.r4.u64;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwzx r28,r11,r4
	r28.u64 = PPC_LOAD_U32(r11.u32 + ctx.r4.u32);
	// mullw r9,r9,r5
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// add r27,r9,r10
	r27.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82f289cc
	if (cr6.eq) goto loc_82F289CC;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r5,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// add r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 + r11.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + r11.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f289cc
	if (cr6.eq) goto loc_82F289CC;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// addi r10,r11,48
	ctx.r10.s64 = r11.s64 + 48;
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// addi r8,r11,32
	ctx.r8.s64 = r11.s64 + 32;
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r7,4496
	ctx.r7.s64 = ctx.r7.s64 + 4496;
	// lvx128 v12,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r26,16
	r26.s64 = 16;
	// lvx128 v11,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r25,48
	r25.s64 = 48;
	// vsubfp v10,v12,v11
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v10.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v11.f32)));
	// lvx128 v9,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lvx128 v0,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// vmsum3fp128 v7,v9,v10
	simde_mm_store_ps(ctx.v7.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v10.f32), 0xEF));
	// vmsum3fp128 v6,v8,v10
	simde_mm_store_ps(ctx.v6.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v10.f32), 0xEF));
	// vmsum3fp128 v5,v13,v10
	simde_mm_store_ps(ctx.v5.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32), 0xEF));
	// vmrghw v4,v7,v0
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v7.u32)));
	// vmrghw v3,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.u32), simde_mm_load_si128((simde__m128i*)ctx.v5.u32)));
	// vmrghw v2,v3,v4
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v4.u32), simde_mm_load_si128((simde__m128i*)ctx.v3.u32)));
	// stvx128 v2,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v1,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v30,r0,r11
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v31,r0,r8
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v29,r0,r10
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v28,r29,r26
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r29.u32 + r26.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp v27,v28,v29
	simde_mm_store_ps(v27.f32, simde_mm_sub_ps(simde_mm_load_ps(v28.f32), simde_mm_load_ps(v29.f32)));
	// vmsum3fp128 v26,v1,v27
	simde_mm_store_ps(v26.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(v27.f32), 0xEF));
	// vmsum3fp128 v25,v31,v27
	simde_mm_store_ps(v25.f32, simde_mm_dp_ps(simde_mm_load_ps(v31.f32), simde_mm_load_ps(v27.f32), 0xEF));
	// vmsum3fp128 v24,v30,v27
	simde_mm_store_ps(v24.f32, simde_mm_dp_ps(simde_mm_load_ps(v30.f32), simde_mm_load_ps(v27.f32), 0xEF));
	// vmrghw v23,v26,v0
	simde_mm_store_si128((simde__m128i*)v23.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)v26.u32)));
	// vmrghw v22,v24,v25
	simde_mm_store_si128((simde__m128i*)v22.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v25.u32), simde_mm_load_si128((simde__m128i*)v24.u32)));
	// vmrghw v21,v22,v23
	simde_mm_store_si128((simde__m128i*)v21.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v23.u32), simde_mm_load_si128((simde__m128i*)v22.u32)));
	// stvx128 v21,r31,r25
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + r25.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,36(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F289CC:
	// lfs f1,4(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82F289D8"))) PPC_WEAK_FUNC(sub_82F289D8);
PPC_FUNC_IMPL(__imp__sub_82F289D8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r13)
	r31.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r30,24
	r30.s64 = 24;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwzx r11,r30,r31
	r11.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bge cr6,0x82f28a2c
	if (!cr6.lt) goto loc_82F28A2C;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// addi r4,r8,-428
	ctx.r4.s64 = ctx.r8.s64 + -428;
	// stw r4,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
	// mftb r4
	ctx.r4.u64 = __rdtsc();
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// stw r4,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r4.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
loc_82F28A2C:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// stw r7,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// stw r9,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// addi r11,r6,20
	r11.s64 = ctx.r6.s64 + 20;
	// bne cr6,0x82f28a4c
	if (!cr6.eq) goto loc_82F28A4C;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_82F28A4C:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// lbz r11,32(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f28a74
	if (cr6.eq) goto loc_82F28A74;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// addi r11,r6,16
	r11.s64 = ctx.r6.s64 + 16;
	// bne cr6,0x82f28a6c
	if (!cr6.eq) goto loc_82F28A6C;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_82F28A6C:
	// stw r11,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, r11.u32);
	// b 0x82f28a78
	goto loc_82F28A78;
loc_82F28A74:
	// stw r9,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, ctx.r9.u32);
loc_82F28A78:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lvx128 v0,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r5,16
	ctx.r7.s64 = ctx.r5.s64 + 16;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// stw r4,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// lwz r11,84(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 84);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r11,r30,r31
	r11.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82f28aec
	if (!cr6.lt) goto loc_82F28AEC;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r9,-14788
	ctx.r8.s64 = ctx.r9.s64 + -14788;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 + 12;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
loc_82F28AEC:
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

__attribute__((alias("__imp__sub_82F28B08"))) PPC_WEAK_FUNC(sub_82F28B08);
PPC_FUNC_IMPL(__imp__sub_82F28B08) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r13)
	r31.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r30,24
	r30.s64 = 24;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwzx r11,r30,r31
	r11.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// bge cr6,0x82f28b54
	if (!cr6.lt) goto loc_82F28B54;
	// lis r4,-32237
	ctx.r4.s64 = -2112684032;
	// addi r4,r4,-416
	ctx.r4.s64 = ctx.r4.s64 + -416;
	// stw r4,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
	// mftb r4
	ctx.r4.u64 = __rdtsc();
	// addi r29,r9,12
	r29.s64 = ctx.r9.s64 + 12;
	// stw r4,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r4.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
loc_82F28B54:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// stw r8,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// stw r9,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// addi r11,r6,20
	r11.s64 = ctx.r6.s64 + 20;
	// bne cr6,0x82f28b74
	if (!cr6.eq) goto loc_82F28B74;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_82F28B74:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// lbz r11,32(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f28b9c
	if (cr6.eq) goto loc_82F28B9C;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// addi r11,r6,16
	r11.s64 = ctx.r6.s64 + 16;
	// bne cr6,0x82f28b94
	if (!cr6.eq) goto loc_82F28B94;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_82F28B94:
	// stw r11,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, r11.u32);
	// b 0x82f28ba0
	goto loc_82F28BA0;
loc_82F28B9C:
	// stw r9,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, ctx.r9.u32);
loc_82F28BA0:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lvx128 v0,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r5,16
	ctx.r8.s64 = ctx.r5.s64 + 16;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// stw r4,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// lwz r11,84(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r11,r30,r31
	r11.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82f28c14
	if (!cr6.lt) goto loc_82F28C14;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r9,-14788
	ctx.r8.s64 = ctx.r9.s64 + -14788;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 + 12;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
loc_82F28C14:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82F28C20"))) PPC_WEAK_FUNC(sub_82F28C20);
PPC_FUNC_IMPL(__imp__sub_82F28C20) {
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
	// lwz r26,0(r13)
	r26.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r21,24
	r21.s64 = 24;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwzx r11,r26,r21
	r11.u64 = PPC_LOAD_U32(r26.u32 + r21.u32);
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82f28c80
	if (!cr6.lt) goto loc_82F28C80;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r8,r9,-400
	ctx.r8.s64 = ctx.r9.s64 + -400;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 + 12;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
loc_82F28C80:
	// li r9,16
	ctx.r9.s64 = 16;
	// lvx128 v13,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addic. r10,r31,-2
	xer.ca = r31.u32 > 1;
	ctx.r10.s64 = r31.s64 + -2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r30,48
	r11.s64 = r30.s64 + 48;
	// lvx128 v12,r30,r9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vminfp v0,v13,v12
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vmaxfp v13,v13,v12
	simde_mm_store_ps(ctx.v13.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)));
	// stvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blt 0x82f28ce4
	if (cr0.lt) goto loc_82F28CE4;
loc_82F28CB0:
	// lvx128 v12,r11,r9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// vminfp v11,v0,v12
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)));
	// lvx128 v10,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaxfp v9,v13,v12
	simde_mm_store_ps(ctx.v9.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)));
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// vminfp v0,v11,v10
	simde_mm_store_ps(ctx.v0.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v10.f32)));
	// vmaxfp v13,v9,v10
	simde_mm_store_ps(ctx.v13.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v10.f32)));
	// bge 0x82f28cb0
	if (!cr0.lt) goto loc_82F28CB0;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82F28CE4:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r22,20
	r22.s64 = 20;
	// addi r9,r3,16
	ctx.r9.s64 = ctx.r3.s64 + 16;
	// rlwinm r4,r9,0,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// lwzx r3,r26,r22
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + r22.u32);
	// lwz r28,32(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r8,44(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// add r11,r28,r4
	r11.u64 = r28.u64 + ctx.r4.u64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bgt cr6,0x82f28d24
	if (cr6.gt) goto loc_82F28D24;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// b 0x82f28d38
	goto loc_82F28D38;
loc_82F28D24:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_82F28D38:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x82f28d88
	if (cr0.lt) goto loc_82F28D88;
loc_82F28D5C:
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82f28b08
	sub_82F28B08(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,48
	r30.s64 = r30.s64 + 48;
	// add r29,r29,r23
	r29.u64 = r29.u64 + r23.u64;
	// bge 0x82f28d5c
	if (!cr0.lt) goto loc_82F28D5C;
loc_82F28D88:
	// lwzx r3,r26,r22
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + r22.u32);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r28,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r28.u32);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bne cr6,0x82f28db0
	if (!cr6.eq) goto loc_82F28DB0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F28DB0:
	// lwzx r10,r26,r21
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + r21.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82f28de0
	if (!cr6.lt) goto loc_82F28DE0;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r9,-14788
	ctx.r8.s64 = ctx.r9.s64 + -14788;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_82F28DE0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_82F28DE8"))) PPC_WEAK_FUNC(sub_82F28DE8);
PPC_FUNC_IMPL(__imp__sub_82F28DE8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r13)
	r31.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r30,24
	r30.s64 = 24;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwzx r11,r30,r31
	r11.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r6,r4
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, xer);
	// bge cr6,0x82f28e34
	if (!cr6.lt) goto loc_82F28E34;
	// lis r4,-32237
	ctx.r4.s64 = -2112684032;
	// addi r4,r4,-384
	ctx.r4.s64 = ctx.r4.s64 + -384;
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// mftb r4
	ctx.r4.u64 = __rdtsc();
	// addi r27,r6,12
	r27.s64 = ctx.r6.s64 + 12;
	// stw r4,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r4.u32);
	// stw r27,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r27.u32);
loc_82F28E34:
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// addi r11,r7,20
	r11.s64 = ctx.r7.s64 + 20;
	// bne cr6,0x82f28e48
	if (!cr6.eq) goto loc_82F28E48;
	// li r11,0
	r11.s64 = 0;
loc_82F28E48:
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lbz r11,32(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f28e6c
	if (cr6.eq) goto loc_82F28E6C;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// addi r11,r7,16
	r11.s64 = ctx.r7.s64 + 16;
	// bne cr6,0x82f28e70
	if (!cr6.eq) goto loc_82F28E70;
loc_82F28E6C:
	// li r11,0
	r11.s64 = 0;
loc_82F28E70:
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, r11.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r9,r5,16
	ctx.r9.s64 = ctx.r5.s64 + 16;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lvx128 v0,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// lwz r11,84(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r11,r30,r31
	r11.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82f28ee8
	if (!cr6.lt) goto loc_82F28EE8;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r9,-14788
	ctx.r8.s64 = ctx.r9.s64 + -14788;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 + 12;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
loc_82F28EE8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82F28EF0"))) PPC_WEAK_FUNC(sub_82F28EF0);
PPC_FUNC_IMPL(__imp__sub_82F28EF0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,-368
	ctx.r4.s64 = ctx.r10.s64 + -368;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,24(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
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

__attribute__((alias("__imp__sub_82F28F50"))) PPC_WEAK_FUNC(sub_82F28F50);
PPC_FUNC_IMPL(__imp__sub_82F28F50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + r11.u64;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// srw r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi r3,r7,27
	ctx.r3.u64 = ctx.r7.u32 & 0x1F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F28F70"))) PPC_WEAK_FUNC(sub_82F28F70);
PPC_FUNC_IMPL(__imp__sub_82F28F70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,23(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 23);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F28F88"))) PPC_WEAK_FUNC(sub_82F28F88);
PPC_FUNC_IMPL(__imp__sub_82F28F88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,32
	r11.s64 = 32;
	// lvx128 v0,r3,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F28F98"))) PPC_WEAK_FUNC(sub_82F28F98);
PPC_FUNC_IMPL(__imp__sub_82F28F98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// addi r11,r3,48
	r11.s64 = ctx.r3.s64 + 48;
	// li r10,32
	ctx.r10.s64 = 32;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r3,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp v12,v13,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// lfs f0,-7076(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -7076);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lvlx v11,0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v10,v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0xFF));
	// vor v8,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// stvx128 v12,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp v7,v8,v9
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v6,v7,v10
	simde_mm_store_ps(ctx.v6.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v10.f32)));
	// stvx128 v6,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F28FE0"))) PPC_WEAK_FUNC(sub_82F28FE0);
PPC_FUNC_IMPL(__imp__sub_82F28FE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCRegister temp{};
	// lvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// lvx128 v13,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lvx128 v12,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp v11,v0,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vsubfp v10,v12,v0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2244(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	f0.f64 = double(temp.f32);
	// vpermwi128 v9,v11,135
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0x78));
	// vpermwi128 v8,v10,99
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0x9C));
	// vpermwi128 v7,v10,135
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0x78));
	// vpermwi128 v6,v11,99
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0x9C));
	// vmulfp128 v5,v9,v8
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v5.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v4,v6,v7
	simde_mm_store_ps(ctx.v4.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v7.f32)));
	// vsubfp v3,v4,v5
	simde_mm_store_ps(ctx.v3.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v5.f32)));
	// vmsum3fp128 v2,v3,v3
	simde_mm_store_ps(ctx.v2.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(ctx.v3.f32), 0xEF));
	// stvx128 v2,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f12,f13
	ctx.f12.f64 = double(float(sqrt(ctx.f13.f64)));
	// fdivs f11,f0,f12
	ctx.f11.f64 = double(float(f0.f64 / ctx.f12.f64));
	// stfs f11,-16(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lvx128 v1,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v31,v1,0
	simde_mm_store_si128((simde__m128i*)v31.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v1.u32), 0xFF));
	// vmulfp128 v30,v3,v31
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v30.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(v31.f32)));
	// stvx128 v30,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F29050"))) PPC_WEAK_FUNC(sub_82F29050);
PPC_FUNC_IMPL(__imp__sub_82F29050) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// li r12,-48
	r12.s64 = -48;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r5,r31,32
	ctx.r5.s64 = r31.s64 + 32;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	f0.f64 = double(temp.f32);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// fadds f13,f0,f1
	ctx.f13.f64 = double(float(f0.f64 + ctx.f1.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v127,v0,0
	simde_mm_store_si128((simde__m128i*)v127.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// bl 0x82eaf178
	sub_82EAF178(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r31,48
	ctx.r5.s64 = r31.s64 + 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eaf178
	sub_82EAF178(ctx, base);
	// addi r5,r31,64
	ctx.r5.s64 = r31.s64 + 64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82eaf178
	sub_82EAF178(ctx, base);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r11,r30,16
	r11.s64 = r30.s64 + 16;
	// addi r10,r31,80
	ctx.r10.s64 = r31.s64 + 80;
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vminfp v11,v0,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// lvx128 v12,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaxfp v10,v0,v13
	simde_mm_store_ps(ctx.v10.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vminfp v9,v11,v12
	simde_mm_store_ps(ctx.v9.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vmaxfp v8,v10,v12
	simde_mm_store_ps(ctx.v8.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v12.f32)));
	// stvx128 v9,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v8,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v7,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp v6,v9,v7
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v7.f32)));
	// vminfp v5,v9,v6
	simde_mm_store_ps(ctx.v5.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v6.f32)));
	// stvx128 v5,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v4,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// lvx128 v3,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp v2,v8,v3
	simde_mm_store_ps(ctx.v2.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v3.f32)));
	// vmaxfp v1,v8,v2
	simde_mm_store_ps(ctx.v1.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v2.f32)));
	// vsubfp128 v31,v4,v127
	simde_mm_store_ps(v31.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(v127.f32)));
	// vor v30,v1,v1
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// stvx128 v1,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v31,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v29,v30,v127
	simde_mm_store_ps(v29.f32, simde_mm_add_ps(simde_mm_load_ps(v30.f32), simde_mm_load_ps(v127.f32)));
	// stvx128 v29,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// li r0,-48
	r0.s64 = -48;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82F29138"))) PPC_WEAK_FUNC(sub_82F29138);
PPC_FUNC_IMPL(__imp__sub_82F29138) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r8,r11,32
	ctx.r8.s64 = r11.s64 + 32;
	// addi r7,r11,48
	ctx.r7.s64 = r11.s64 + 48;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// addi r6,r11,64
	ctx.r6.s64 = r11.s64 + 64;
	// lvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lvx128 v13,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lfs f13,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lvx128 v12,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f12,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lbz r9,23(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 23);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r9,r11,80
	ctx.r9.s64 = r11.s64 + 80;
	// lvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp v12,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v12,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lvx128 v11,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// lvx128 v10,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp v9,v10,v11
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v11.f32)));
	// stvx128 v9,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,16(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lvx128 v8,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v7,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp v6,v7,v8
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v8.f32)));
	// stvx128 v6,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f12,16(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,28(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F291F0"))) PPC_WEAK_FUNC(sub_82F291F0);
PPC_FUNC_IMPL(__imp__sub_82F291F0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// lvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,32
	ctx.r9.s64 = 32;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r8,4496
	ctx.r6.s64 = ctx.r8.s64 + 4496;
	// lvx128 v11,r11,r10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v12,v13,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// lvx128 v10,r11,r9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v9,v11,v0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// vmsum3fp128 v8,v10,v0
	simde_mm_store_ps(ctx.v8.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// lvx128 v0,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v7,v9,v0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmrghw v6,v12,v8
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrghw v5,v6,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.u32), simde_mm_load_si128((simde__m128i*)ctx.v6.u32)));
	// stvx128 v5,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,-8(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	f0.f64 = double(temp.f32);
	// lfs f13,-12(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x82f29250
	if (!cr6.gt) goto loc_82F29250;
	// li r11,2
	r11.s64 = 2;
	// b 0x82f29258
	goto loc_82F29258;
loc_82F29250:
	// li r11,1
	r11.s64 = 1;
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f13.f64;
loc_82F29258:
	// lfs f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x82f29268
	if (!cr6.gt) goto loc_82F29268;
	// li r11,0
	r11.s64 = 0;
loc_82F29268:
	// addi r10,r11,2
	ctx.r10.s64 = r11.s64 + 2;
	// li r9,80
	ctx.r9.s64 = 80;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r7,r1,-32
	ctx.r7.s64 = ctx.r1.s64 + -32;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lvx128 v0,r8,r3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r3,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v12,v13,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// stvewx v12,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,2240(r6)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2240);
	f0.f64 = double(temp.f32);
	// lfs f13,-32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x82f292b4
	if (!cr6.gt) goto loc_82F292B4;
	// lvx128 v13,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// vaddfp v12,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v12,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82F292B4:
	// oris r11,r11,16128
	r11.u64 = r11.u64 | 1056964608;
	// stw r11,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F292C0"))) PPC_WEAK_FUNC(sub_82F292C0);
PPC_FUNC_IMPL(__imp__sub_82F292C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister temp{};
	// addic. r11,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	r11.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bltlr 
	if (cr0.lt) return;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r7,r3,80
	ctx.r7.s64 = ctx.r3.s64 + 80;
	// addi r9,r9,2976
	ctx.r9.s64 = ctx.r9.s64 + 2976;
	// addi r8,r10,3020
	ctx.r8.s64 = ctx.r10.s64 + 3020;
loc_82F292DC:
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// rotlwi r5,r10,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwzx r10,r5,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r5,r10,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lvx128 v0,r5,r3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// lvx128 v13,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rotlwi r5,r10,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lvlx v12,r5,r9
	temp.u32 = ctx.r5.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v11,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xFF));
	// vmaddfp v10,v13,v11,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v10,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// oris r5,r10,16128
	ctx.r5.u64 = ctx.r10.u64 | 1056964608;
	// stw r5,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r5.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// bge 0x82f292dc
	if (!cr0.lt) goto loc_82F292DC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F29338"))) PPC_WEAK_FUNC(sub_82F29338);
PPC_FUNC_IMPL(__imp__sub_82F29338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	PPCVRegister v16{};
	PPCVRegister v17{};
	PPCVRegister v18{};
	PPCVRegister v19{};
	PPCVRegister v20{};
	PPCVRegister v21{};
	PPCVRegister v22{};
	PPCVRegister v23{};
	PPCVRegister v24{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b14
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// li r12,-128
	r12.s64 = -128;
	// stvx128 v126,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r12,-112
	r12.s64 = -112;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// lbz r3,22(r31)
	ctx.r3.u64 = PPC_LOAD_U8(r31.u32 + 22);
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// bne cr6,0x82f29384
	if (!cr6.eq) goto loc_82F29384;
loc_82F2937C:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82f2983c
	goto loc_82F2983C;
loc_82F29384:
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lhz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// lbz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// addi r10,r11,3020
	ctx.r10.s64 = r11.s64 + 3020;
	// rotlwi r11,r7,2
	r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// ble cr6,0x82f29404
	if (!cr6.gt) goto loc_82F29404;
	// cmplwi cr6,r9,3
	cr6.compare<uint32_t>(ctx.r9.u32, 3, xer);
	// lhz r9,2(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lwzx r8,r8,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// bne cr6,0x82f293ec
	if (!cr6.eq) goto loc_82F293EC;
	// lhz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// cmpwi cr6,r9,3
	cr6.compare<int32_t>(ctx.r9.s32, 3, xer);
	// beq cr6,0x82f2937c
	if (cr6.eq) goto loc_82F2937C;
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, r11.s32, xer);
	// bne cr6,0x82f293dc
	if (!cr6.eq) goto loc_82F293DC;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
loc_82F293DC:
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r9,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r9.u8);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, r11.u16);
	// sth r8,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r8.u16);
loc_82F293EC:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// lwzx r6,r9,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmpw cr6,r6,r8
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, xer);
	// beq cr6,0x82f29404
	if (cr6.eq) goto loc_82F29404;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_82F29404:
	// addi r9,r31,48
	ctx.r9.s64 = r31.s64 + 48;
	// ld r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U64(r26.u32 + 0);
	// li r6,64
	ctx.r6.s64 = 64;
	// ld r7,8(r26)
	ctx.r7.u64 = PPC_LOAD_U64(r26.u32 + 8);
	// addi r28,r31,32
	r28.s64 = r31.s64 + 32;
	// lvx128 v0,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lvx128 v13,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,16
	ctx.r9.s64 = 16;
	// lvx128 v11,r31,r6
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lvx128 v12,r0,r28
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp v9,v11,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vsubfp v10,v13,v12
	simde_mm_store_ps(ctx.v10.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)));
	// std r8,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r8.u64);
	// std r7,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r7.u64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r4,-32238
	ctx.r4.s64 = -2112749568;
	// lvx128 v8,r29,r9
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r29.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v2,v0,v13
	simde_mm_store_ps(ctx.v2.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// vpermwi128 v5,v10,135
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0x78));
	// addi r9,r4,4496
	ctx.r9.s64 = ctx.r4.s64 + 4496;
	// vpermwi128 v3,v9,99
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), 0x9C));
	// lfs f0,2244(r8)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2244);
	f0.f64 = double(temp.f32);
	// vpermwi128 v1,v9,135
	simde_mm_store_si128((simde__m128i*)ctx.v1.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), 0x78));
	// addi r8,r11,2
	ctx.r8.s64 = r11.s64 + 2;
	// vpermwi128 v31,v10,99
	simde_mm_store_si128((simde__m128i*)v31.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0x9C));
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// rlwinm r4,r8,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// vmsum3fp128 v6,v8,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v6.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// vmulfp128 v30,v5,v3
	simde_mm_store_ps(v30.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v3.f32)));
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// vmulfp128 v29,v31,v1
	simde_mm_store_ps(v29.f32, simde_mm_mul_ps(simde_mm_load_ps(v31.f32), simde_mm_load_ps(ctx.v1.f32)));
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// li r30,32
	r30.s64 = 32;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r23,r10,4
	r23.s64 = ctx.r10.s64 + 4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// lvx128 v7,r29,r30
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r29.u32 + r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// vmsum3fp128 v4,v7,v13
	simde_mm_store_ps(ctx.v4.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// clrlwi r10,r11,16
	ctx.r10.u64 = r11.u32 & 0xFFFF;
	// vsubfp v26,v29,v30
	simde_mm_store_ps(v26.f32, simde_mm_sub_ps(simde_mm_load_ps(v29.f32), simde_mm_load_ps(v30.f32)));
	// vmrghw v28,v6,v0
	simde_mm_store_si128((simde__m128i*)v28.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v6.u32)));
	// vmrghw v27,v2,v4
	simde_mm_store_si128((simde__m128i*)v27.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v4.u32), simde_mm_load_si128((simde__m128i*)ctx.v2.u32)));
	// vmsum3fp128 v25,v26,v26
	simde_mm_store_ps(v25.f32, simde_mm_dp_ps(simde_mm_load_ps(v26.f32), simde_mm_load_ps(v26.f32), 0xEF));
	// vmrghw v12,v27,v28
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v28.u32), simde_mm_load_si128((simde__m128i*)v27.u32)));
	// stvx128 v25,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,112(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f12,f13
	ctx.f12.f64 = double(float(sqrt(ctx.f13.f64)));
	// fdivs f11,f0,f12
	ctx.f11.f64 = double(float(f0.f64 / ctx.f12.f64));
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lvx128 v24,r0,r7
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v23,v24,0
	simde_mm_store_si128((simde__m128i*)v23.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v24.u32), 0xFF));
	// vmulfp128 v127,v26,v23
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v127.f32, simde_mm_mul_ps(simde_mm_load_ps(v26.f32), simde_mm_load_ps(v23.f32)));
	// vmsum3fp128 v22,v12,v127
	simde_mm_store_ps(v22.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(v127.f32), 0xEF));
	// stvewx v22,r0,r6
	ea = (ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, v22.u32[3 - ((ea & 0xF) >> 2)]);
	// lwzx r11,r30,r23
	r11.u64 = PPC_LOAD_U32(r30.u32 + r23.u32);
	// lvx128 v21,r4,r31
	simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r11,2
	ctx.r7.s64 = r11.s64 + 2;
	// lfs f10,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r6,r7,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lhz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 20);
	// lfs f9,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f9.f64 = double(temp.f32);
	// lvx128 v20,r6,r31
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32 + r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp v19,v20,v21
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v19.f32, simde_mm_sub_ps(simde_mm_load_ps(v20.f32), simde_mm_load_ps(v21.f32)));
	// vmsum3fp128 v18,v19,v19
	simde_mm_store_ps(v18.f32, simde_mm_dp_ps(simde_mm_load_ps(v19.f32), simde_mm_load_ps(v19.f32), 0xEF));
	// fabs f8,f10
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f8.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// srw r4,r5,r10
	ctx.r4.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r10.u8 & 0x3F));
	// stvx128 v18,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// clrlwi r11,r4,27
	r11.u64 = ctx.r4.u32 & 0x1F;
	// lfs f7,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// fsqrts f6,f7
	ctx.f6.f64 = double(float(sqrt(ctx.f7.f64)));
	// fdivs f5,f0,f6
	ctx.f5.f64 = double(float(f0.f64 / ctx.f6.f64));
	// stfs f5,112(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f31,f8,f9
	f31.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// lvx128 v17,r0,r9
	simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v16,v17,0
	simde_mm_store_si128((simde__m128i*)v16.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v17.u32), 0xFF));
	// vmulfp128 v0,v19,v16
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(v19.f32), simde_mm_load_ps(v16.f32)));
	// beq cr6,0x82f29718
	if (cr6.eq) goto loc_82F29718;
	// vmsum3fp128 v13,v127,v12
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(ctx.v12.f32), 0xEF));
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r11,r9,-22304
	r11.s64 = ctx.r9.s64 + -22304;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stvewx v13,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// bne cr6,0x82f29694
	if (!cr6.eq) goto loc_82F29694;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x82f296a8
	if (cr6.lt) goto loc_82F296A8;
loc_82F29594:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82F29598:
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82f2937c
	if (cr6.eq) goto loc_82F2937C;
	// vpermwi128 v13,v0,135
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x78));
	// rlwinm r30,r3,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// vpermwi128 v12,v0,99
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x9C));
	// li r10,4
	ctx.r10.s64 = 4;
	// vpermwi128 v11,v127,99
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v127.u32), 0x9C));
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// vpermwi128 v10,v127,135
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v127.u32), 0x78));
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// vmulfp128 v9,v13,v11
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v11.f32)));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// vmulfp128 v8,v12,v10
	simde_mm_store_ps(ctx.v8.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v10.f32)));
	// lvlx v7,r11,r10
	temp.u32 = r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v6,v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.u32), 0xFF));
	// lvlx v5,0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v4,v5,0
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v5.u32), 0xFF));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// vsubfp v3,v8,v9
	simde_mm_store_ps(ctx.v3.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v0,v3,v6
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(ctx.v6.f32)));
	// vmaddfp128 v0,v127,v4,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmsum3fp128 v2,v0,v0
	simde_mm_store_ps(ctx.v2.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// stvx128 v0,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v2,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,112(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f12,f13
	ctx.f12.f64 = double(float(sqrt(ctx.f13.f64)));
	// fdivs f11,f0,f12
	ctx.f11.f64 = double(float(f0.f64 / ctx.f12.f64));
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lvx128 v1,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v31,v1,0
	simde_mm_store_si128((simde__m128i*)v31.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v1.u32), 0xFF));
	// vmulfp128 v30,v0,v31
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v30.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(v31.f32)));
	// stvx128 v30,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82eaf210
	sub_82EAF210(ctx, base);
	// lbz r5,23(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 23);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82f296b0
	if (cr6.eq) goto loc_82F296B0;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r10,r11,3000
	ctx.r10.s64 = r11.s64 + 3000;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lvlx v0,r30,r10
	temp.u32 = r30.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v126,v0,0
	simde_mm_store_si128((simde__m128i*)v126.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// bl 0x82eaf1c0
	sub_82EAF1C0(ctx, base);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lvx128 v12,r0,r28
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v13,v127,v126
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(v126.f32)));
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lvx128 v11,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp v10,v11,v12
	simde_mm_store_ps(ctx.v10.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vmsum3fp128 v9,v10,v13
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// stvewx v9,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v9.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(f0.f64 - f31.f64));
	// lvx128 v0,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fsel f31,f13,f31,f0
	f31.f64 = ctx.f13.f64 >= 0.0 ? f31.f64 : f0.f64;
	// b 0x82f29830
	goto loc_82F29830;
loc_82F29694:
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x82f29594
	if (!cr6.gt) goto loc_82F29594;
loc_82F296A8:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82f29598
	goto loc_82F29598;
loc_82F296B0:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82eaf178
	sub_82EAF178(ctx, base);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lvx128 v13,r0,r27
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lvx128 v12,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp v11,v13,v12
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)));
	// lvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v10,v11,v0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// stvewx v10,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v10.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2240(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2240);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x82f29830
	if (!cr6.gt) goto loc_82F29830;
loc_82F29710:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f2983c
	goto loc_82F2983C;
loc_82F29718:
	// vmsum3fp128 v12,v127,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
	// addi r11,r10,-22304
	r11.s64 = ctx.r10.s64 + -22304;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// stvewx v12,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x82f2937c
	if (!cr6.lt) goto loc_82F2937C;
	// addi r8,r11,8
	ctx.r8.s64 = r11.s64 + 8;
	// lfsx f12,r10,r8
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x82f29764
	if (cr6.lt) goto loc_82F29764;
	// li r11,0
	r11.s64 = 0;
	// b 0x82f29788
	goto loc_82F29788;
loc_82F29764:
	// addi r8,r11,12
	ctx.r8.s64 = r11.s64 + 12;
	// lfsx f12,r10,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x82f29710
	if (!cr6.lt) goto loc_82F29710;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// lfsx f12,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x82f2937c
	if (cr6.lt) goto loc_82F2937C;
	// li r11,4
	r11.s64 = 4;
loc_82F29788:
	// vpermwi128 v12,v0,135
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x78));
	// vmsum3fp128 v8,v0,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v8.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// vpermwi128 v11,v0,99
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x9C));
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// vpermwi128 v10,v127,99
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v127.u32), 0x9C));
	// li r10,4
	ctx.r10.s64 = 4;
	// vpermwi128 v9,v127,135
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v127.u32), 0x78));
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// vmulfp128 v7,v12,v10
	simde_mm_store_ps(ctx.v7.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v10.f32)));
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// vmulfp128 v6,v11,v9
	simde_mm_store_ps(ctx.v6.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v9.f32)));
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lvlx v5,r11,r10
	temp.u32 = r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v4,v5,0
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v5.u32), 0xFF));
	// lvlx v3,0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v2,v3,0
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.u32), 0xFF));
	// vmulfp128 v31,v0,v8
	simde_mm_store_ps(v31.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vsubfp v1,v6,v7
	simde_mm_store_ps(ctx.v1.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v7.f32)));
	// vmulfp128 v0,v1,v4
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v4.f32)));
	// vmaddfp128 v0,v127,v2,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(ctx.v2.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmsum3fp128 v30,v0,v0
	simde_mm_store_ps(v30.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// stvx128 v30,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,128(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f12,f13
	ctx.f12.f64 = double(float(sqrt(ctx.f13.f64)));
	// fdivs f11,f0,f12
	ctx.f11.f64 = double(float(f0.f64 / ctx.f12.f64));
	// stfs f11,128(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lvx128 v29,r0,r8
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v28,v29,0
	simde_mm_store_si128((simde__m128i*)v28.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v29.u32), 0xFF));
	// vmulfp128 v0,v0,v28
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(v28.f32)));
	// vmsum3fp128 v27,v0,v13
	simde_mm_store_ps(v27.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// vmaddfp v0,v0,v27,v31
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(v27.f32)), simde_mm_load_ps(v31.f32)));
	// vmsum3fp128 v26,v0,v0
	simde_mm_store_ps(v26.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// stvx128 v26,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f10,128(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// fsqrts f9,f10
	ctx.f9.f64 = double(float(sqrt(ctx.f10.f64)));
	// fdivs f8,f0,f9
	ctx.f8.f64 = double(float(f0.f64 / ctx.f9.f64));
	// stfs f8,128(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lvx128 v25,r0,r6
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v24,v25,0
	simde_mm_store_si128((simde__m128i*)v24.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v25.u32), 0xFF));
	// vmulfp128 v0,v0,v24
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(v24.f32)));
loc_82F29830:
	// stvx128 v0,r0,r26
	simde_mm_store_si128((simde__m128i*)(base + ((r26.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f31,12(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r26.u32 + 12, temp.u32);
loc_82F2983C:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// li r0,-128
	r0.s64 = -128;
	// lvx128 v126,r1,r0
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r0,-112
	r0.s64 = -112;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_82F29858"))) PPC_WEAK_FUNC(sub_82F29858);
PPC_FUNC_IMPL(__imp__sub_82F29858) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,24
	ctx.r10.s64 = 24;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bge cr6,0x82f29894
	if (!cr6.lt) goto loc_82F29894;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// addi r7,r8,-356
	ctx.r7.s64 = ctx.r8.s64 + -356;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
loc_82F29894:
	// addi r11,r4,32
	r11.s64 = ctx.r4.s64 + 32;
	// addi r10,r4,48
	ctx.r10.s64 = ctx.r4.s64 + 48;
	// addi r8,r4,64
	ctx.r8.s64 = ctx.r4.s64 + 64;
	// addi r7,r1,-32
	ctx.r7.s64 = ctx.r1.s64 + -32;
	// addi r4,r1,-28
	ctx.r4.s64 = ctx.r1.s64 + -28;
	// lvx128 v12,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,16
	r11.s64 = 16;
	// lvx128 v10,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,-28
	ctx.r10.s64 = ctx.r1.s64 + -28;
	// lvx128 v7,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp v0,v10,v12
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vsubfp v13,v7,v12
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v12.f32)));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// vpermwi128 v11,v0,135
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x78));
	// vpermwi128 v9,v13,99
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x9C));
	// vpermwi128 v8,v13,135
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x78));
	// vpermwi128 v6,v0,99
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x9C));
	// vmulfp128 v5,v11,v9
	simde_mm_store_ps(ctx.v5.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v4,v6,v8
	simde_mm_store_ps(ctx.v4.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vsubfp v0,v4,v5
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v5.f32)));
	// vmsum3fp128 v3,v12,v0
	simde_mm_store_ps(ctx.v3.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// stvewx v3,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v3.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v9,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v2,v0,v9
	simde_mm_store_ps(ctx.v2.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v9.f32), 0xEF));
	// stvewx v2,r0,r4
	ea = (ctx.r4.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v2.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f13,-32(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	f0.f64 = double(temp.f32);
	// lvx128 v8,r5,r11
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v1,v0,v8
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v1.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v8.f32), 0xEF));
	// stvewx v1,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v1.u32[3 - ((ea & 0xF) >> 2)]);
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushModeUnconditional();
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f12,2240(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2240);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fcmpu cr6,f10,f12
	cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// blt cr6,0x82f29938
	if (cr6.lt) goto loc_82F29938;
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// bne cr6,0x82f29ad0
	if (!cr6.eq) goto loc_82F29AD0;
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// beq cr6,0x82f29ad0
	if (cr6.eq) goto loc_82F29AD0;
loc_82F29938:
	// fsubs f13,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f10,16(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r6,16
	r11.s64 = ctx.r6.s64 + 16;
	// fdivs f11,f0,f13
	ctx.f11.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f11,-32(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// fcmpu cr6,f11,f10
	cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// bge cr6,0x82f29ad0
	if (!cr6.lt) goto loc_82F29AD0;
	// vmsum3fp128 v13,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r8,r1,-28
	ctx.r8.s64 = ctx.r1.s64 + -28;
	// addi r7,r10,4512
	ctx.r7.s64 = ctx.r10.s64 + 4512;
	// addi r5,r1,-32
	ctx.r5.s64 = ctx.r1.s64 + -32;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// addi r10,r1,-28
	ctx.r10.s64 = ctx.r1.s64 + -28;
	// stvewx v13,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v11,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx v6,0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v5,v6,0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.u32), 0xFF));
	// vspltw v13,v5,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v5.u32), 0xFF));
	// lfs f13,-18528(r4)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -18528);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,-28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// vsubfp v4,v11,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v4.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v3,v4,v9
	simde_mm_store_ps(ctx.v3.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp v13,v13,v8,v3
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// vsubfp v2,v12,v13
	simde_mm_store_ps(ctx.v2.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vsubfp v1,v10,v13
	simde_mm_store_ps(ctx.v1.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vpermwi128 v10,v2,135
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v2.u32), 0x78));
	// vpermwi128 v12,v1,99
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v1.u32), 0x9C));
	// vpermwi128 v11,v1,135
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v1.u32), 0x78));
	// vpermwi128 v9,v2,99
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v2.u32), 0x9C));
	// vmulfp128 v31,v10,v12
	simde_mm_store_ps(v31.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v30,v9,v11
	simde_mm_store_ps(v30.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vsubfp v29,v30,v31
	simde_mm_store_ps(v29.f32, simde_mm_sub_ps(simde_mm_load_ps(v30.f32), simde_mm_load_ps(v31.f32)));
	// vmsum3fp128 v28,v29,v0
	simde_mm_store_ps(v28.f32, simde_mm_dp_ps(simde_mm_load_ps(v29.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// stvewx v28,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, v28.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f9,-28(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f9,f13
	cr6.compare(ctx.f9.f64, ctx.f13.f64);
	// blt cr6,0x82f29ad0
	if (cr6.lt) goto loc_82F29AD0;
	// vsubfp v8,v7,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v8.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v13.f32)));
	// addi r10,r1,-28
	ctx.r10.s64 = ctx.r1.s64 + -28;
	// vpermwi128 v13,v8,99
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), 0x9C));
	// vpermwi128 v8,v8,135
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), 0x78));
	// vmulfp128 v7,v11,v13
	simde_mm_store_ps(ctx.v7.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v6,v12,v8
	simde_mm_store_ps(ctx.v6.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vsubfp v5,v6,v7
	simde_mm_store_ps(ctx.v5.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v7.f32)));
	// vmsum3fp128 v4,v5,v0
	simde_mm_store_ps(ctx.v4.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// stvewx v4,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v4.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f10,-28(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f10,f13
	cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// blt cr6,0x82f29ad0
	if (cr6.lt) goto loc_82F29AD0;
	// vmulfp128 v12,v8,v9
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v9.f32)));
	// addi r10,r1,-28
	ctx.r10.s64 = ctx.r1.s64 + -28;
	// vmulfp128 v11,v13,v10
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32)));
	// vsubfp v10,v11,v12
	simde_mm_store_ps(ctx.v10.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vmsum3fp128 v9,v10,v0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// stvewx v9,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v9.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f10,-28(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f10,f13
	cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// blt cr6,0x82f29ad0
	if (cr6.lt) goto loc_82F29AD0;
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// bgt cr6,0x82f29a44
	if (cr6.gt) goto loc_82F29A44;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-12080
	ctx.r10.s64 = r11.s64 + -12080;
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor v0,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
loc_82F29A44:
	// vmsum3fp128 v13,v0,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// stvx128 v0,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r11,64(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 64);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// rlwinm r11,r4,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,2244(r8)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f12,f13
	ctx.f12.f64 = double(float(sqrt(ctx.f13.f64)));
	// fdivs f11,f0,f12
	ctx.f11.f64 = double(float(f0.f64 / ctx.f12.f64));
	// stfs f11,-16(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lvx128 v12,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v11,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xFF));
	// vmulfp128 v10,v0,v11
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v10.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32)));
	// stvx128 v10,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwx r5,r11,r6
	PPC_STORE_U32(r11.u32 + ctx.r6.u32, ctx.r5.u32);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82f29ac4
	if (!cr6.lt) goto loc_82F29AC4;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r9,-14788
	ctx.r8.s64 = ctx.r9.s64 + -14788;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_82F29AC4:
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
loc_82F29AD0:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82f29b00
	if (!cr6.lt) goto loc_82F29B00;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r9,-14788
	ctx.r8.s64 = ctx.r9.s64 + -14788;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_82F29B00:
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F29B10"))) PPC_WEAK_FUNC(sub_82F29B10);
PPC_FUNC_IMPL(__imp__sub_82F29B10) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,-340
	ctx.r4.s64 = ctx.r10.s64 + -340;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,24(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
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

__attribute__((alias("__imp__sub_82F29B70"))) PPC_WEAK_FUNC(sub_82F29B70);
PPC_FUNC_IMPL(__imp__sub_82F29B70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82f29c04
	if (cr6.eq) goto loc_82F29C04;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eaf248
	sub_82EAF248(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F29C04:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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

__attribute__((alias("__imp__sub_82F29C20"))) PPC_WEAK_FUNC(sub_82F29C20);
PPC_FUNC_IMPL(__imp__sub_82F29C20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// addi r10,r9,16
	ctx.r10.s64 = ctx.r9.s64 + 16;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lvx128 v11,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// vmsum3fp128 v12,v0,v11
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32), 0xEF));
	// vspltw v13,v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x0));
	// lfs f0,48(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 48);
	f0.f64 = double(temp.f32);
	// vaddfp v10,v13,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)));
	// stvewx v10,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v10.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v10,r11,r7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v8,v9,3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), 0x0));
	// vmsum3fp128 v7,v9,v10
	simde_mm_store_ps(ctx.v7.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v10.f32), 0xEF));
	// lfs f11,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// vaddfp v6,v8,v7
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v7.f32)));
	// stvewx v6,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v6.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f12,2240(r3)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2240);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f10,f0
	ctx.f13.f64 = double(float(ctx.f10.f64 - f0.f64));
	// fsubs f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 - f0.f64));
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x82f29d6c
	if (!cr6.lt) goto loc_82F29D6C;
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f11,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f13,f11
	cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// blt cr6,0x82f29d6c
	if (cr6.lt) goto loc_82F29D6C;
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// ble cr6,0x82f29cb8
	if (!cr6.gt) goto loc_82F29CB8;
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 / ctx.f13.f64));
loc_82F29CB8:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// vspltisw v9,-1
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// li r7,32
	ctx.r7.s64 = 32;
	// addi r5,r8,4512
	ctx.r5.s64 = ctx.r8.s64 + 4512;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// lvlx v8,0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v7,v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), 0xFF));
	// vspltw v0,v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.u32), 0xFF));
	// lvx128 v13,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v6,r9,r7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r3,-14192
	ctx.r8.s64 = ctx.r3.s64 + -14192;
	// li r11,48
	r11.s64 = 48;
	// lis r7,-31943
	ctx.r7.s64 = -2093416448;
	// vsubfp v4,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v4.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// li r5,224
	ctx.r5.s64 = 224;
	// addi r3,r7,30848
	ctx.r3.s64 = ctx.r7.s64 + 30848;
	// lvx128 v12,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v5,r9,r11
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r3,r5
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v3,v4,v11
	simde_mm_store_ps(ctx.v3.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp v2,v0,v10,v3
	simde_mm_store_ps(ctx.v2.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// vsubfp v1,v2,v6
	simde_mm_store_ps(ctx.v1.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v6.f32)));
	// vand v31,v1,v12
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vcmpgefp v30,v5,v31
	simde_mm_store_ps(v30.f32, simde_mm_cmpge_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(v31.f32)));
	// vor v29,v30,v13
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vcmpequw. v28,v29,v9
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)v29.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	cr6.setFromMask(simde_mm_load_ps(v28.f32), 0xF);
	// bge cr6,0x82f29d6c
	if (!cr6.lt) goto loc_82F29D6C;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r3,-1
	ctx.r3.s64 = -1;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stfs f12,112(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// stw r7,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r7.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F29D6C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F29D80"))) PPC_WEAK_FUNC(sub_82F29D80);
PPC_FUNC_IMPL(__imp__sub_82F29D80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bltlr 
	if (cr0.lt) return;
	// addi r8,r3,16
	ctx.r8.s64 = ctx.r3.s64 + 16;
loc_82F29D98:
	// lvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// stvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v11,v12,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// vspltw v10,v12,3
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0x0));
	// vaddfp v9,v10,v11
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v11.f32)));
	// stvewx v9,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v9.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// lfs f13,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - f0.f64));
	// stfs f12,12(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bge 0x82f29d98
	if (!cr0.lt) goto loc_82F29D98;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F29DE0"))) PPC_WEAK_FUNC(sub_82F29DE0);
PPC_FUNC_IMPL(__imp__sub_82F29DE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCVRegister v31{};
	PPCRegister temp{};
	// lis r11,-32237
	r11.s64 = -2112684032;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-4212
	ctx.r9.s64 = r11.s64 + -4212;
	// li r8,0
	ctx.r8.s64 = 0;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// li r7,27
	ctx.r7.s64 = 27;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// lvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r5,16
	ctx.r10.s64 = ctx.r5.s64 + 16;
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// addi r11,r3,48
	r11.s64 = ctx.r3.s64 + 48;
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// lfs f0,-22120(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -22120);
	f0.f64 = double(temp.f32);
	// li r4,32
	ctx.r4.s64 = 32;
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r7,r7,4512
	ctx.r7.s64 = ctx.r7.s64 + 4512;
	// lvlx v13,0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v10,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// stvx128 v0,r3,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v0,v10,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0xFF));
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lvlx v12,0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v11,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xFF));
	// lvx128 v9,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp v7,v8,v9
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v7.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v9.f32)));
	// vor v6,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// stvx128 v7,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v5,v6,v11
	simde_mm_store_ps(ctx.v5.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v11.f32)));
	// stvx128 v5,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v4,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v3,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp v2,v13,v0
	simde_mm_store_ps(ctx.v2.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v1,v2,v4
	simde_mm_store_ps(ctx.v1.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v4.f32)));
	// vmaddfp v31,v0,v3,v1
	simde_mm_store_ps(v31.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v3.f32)), simde_mm_load_ps(ctx.v1.f32)));
	// stvx128 v31,r3,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F29E90"))) PPC_WEAK_FUNC(sub_82F29E90);
PPC_FUNC_IMPL(__imp__sub_82F29E90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32237
	r11.s64 = -2112684032;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r9,r11,-4212
	ctx.r9.s64 = r11.s64 + -4212;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r11,27
	r11.s64 = 27;
	// sth r8,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r8.u16);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// lvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r3,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,32
	ctx.r8.s64 = 32;
	// lvx128 v13,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,48
	ctx.r7.s64 = 48;
	// lvx128 v12,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v11,v12,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// stvewx v11,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v11.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lvx128 v10,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v10,r3,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v9,r3,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F29F00"))) PPC_WEAK_FUNC(sub_82F29F00);
PPC_FUNC_IMPL(__imp__sub_82F29F00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// addi r5,r11,32
	ctx.r5.s64 = r11.s64 + 32;
	// addi r4,r11,48
	ctx.r4.s64 = r11.s64 + 48;
	// b 0x82f222b0
	sub_82F222B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F29F18"))) PPC_WEAK_FUNC(sub_82F29F18);
PPC_FUNC_IMPL(__imp__sub_82F29F18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCRegister temp{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,24
	ctx.r10.s64 = 24;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bge cr6,0x82f29f58
	if (!cr6.lt) goto loc_82F29F58;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// addi r7,r8,-328
	ctx.r7.s64 = ctx.r8.s64 + -328;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
loc_82F29F58:
	// addi r11,r4,16
	r11.s64 = ctx.r4.s64 + 16;
	// lvx128 v10,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r7,r1,-12
	ctx.r7.s64 = ctx.r1.s64 + -12;
	// lis r31,-32256
	r31.s64 = -2113929216;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v13,v0,v10
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v10.f32), 0xEF));
	// vspltw v12,v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x0));
	// vaddfp v11,v12,v13
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvewx v11,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v11.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v9,r5,r8
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v7,v8,3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), 0x0));
	// vmsum3fp128 v6,v8,v9
	simde_mm_store_ps(ctx.v6.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v9.f32), 0xEF));
	// vaddfp v5,v7,v6
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v6.f32)));
	// stvewx v5,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v5.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	f0.f64 = double(temp.f32);
	// lfs f13,2240(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 2240);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x82f2a094
	if (cr6.lt) goto loc_82F2A094;
	// lfs f12,-12(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x82f2a094
	if (!cr6.lt) goto loc_82F2A094;
	// fsubs f13,f0,f12
	ctx.f13.f64 = double(float(f0.f64 - ctx.f12.f64));
	// addi r10,r1,-12
	ctx.r10.s64 = ctx.r1.s64 + -12;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// vspltisw v8,-1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// li r7,32
	ctx.r7.s64 = 32;
	// addi r5,r8,4512
	ctx.r5.s64 = ctx.r8.s64 + 4512;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r31,48
	r31.s64 = 48;
	// addi r8,r8,-14192
	ctx.r8.s64 = ctx.r8.s64 + -14192;
	// lvx128 v7,r4,r7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r7,-31943
	ctx.r7.s64 = -2093416448;
	// lvx128 v13,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r5,224
	ctx.r5.s64 = 224;
	// addi r7,r7,30848
	ctx.r7.s64 = ctx.r7.s64 + 30848;
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f0,-12(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lvlx v6,0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v5,v6,0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.u32), 0xFF));
	// vspltw v0,v5,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v5.u32), 0xFF));
	// lvx128 v12,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v4,r4,r31
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r7,r5
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32 + ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp v3,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v3.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v2,v3,v10
	simde_mm_store_ps(ctx.v2.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(ctx.v10.f32)));
	// vmaddfp v1,v0,v9,v2
	simde_mm_store_ps(ctx.v1.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v2.f32)));
	// vsubfp v31,v1,v7
	simde_mm_store_ps(v31.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v7.f32)));
	// vand v30,v31,v12
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vcmpgefp v29,v4,v30
	simde_mm_store_ps(v29.f32, simde_mm_cmpge_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(v30.f32)));
	// vor v28,v29,v11
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vcmpequw. v27,v28,v8
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)v28.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	cr6.setFromMask(simde_mm_load_ps(v27.f32), 0xF);
	// bge cr6,0x82f2a094
	if (!cr6.lt) goto loc_82F2A094;
	// stfs f0,16(r6)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// lwz r10,64(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 64);
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-1
	r11.s64 = -1;
	// stvx128 v0,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r7,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r7.u8);
	// stwx r11,r8,r6
	PPC_STORE_U32(ctx.r8.u32 + ctx.r6.u32, r11.u32);
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// bge cr6,0x82f2a0cc
	if (!cr6.lt) goto loc_82F2A0CC;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r9,-14788
	ctx.r8.s64 = ctx.r9.s64 + -14788;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 + 12;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82F2A094:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82f2a0cc
	if (!cr6.lt) goto loc_82F2A0CC;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r9,-14788
	ctx.r8.s64 = ctx.r9.s64 + -14788;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_82F2A0CC:
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2A0D8"))) PPC_WEAK_FUNC(sub_82F2A0D8);
PPC_FUNC_IMPL(__imp__sub_82F2A0D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F2A0F0"))) PPC_WEAK_FUNC(sub_82F2A0F0);
PPC_FUNC_IMPL(__imp__sub_82F2A0F0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r10,-308
	ctx.r4.s64 = ctx.r10.s64 + -308;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r8,-316
	ctx.r4.s64 = ctx.r8.s64 + -316;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,12(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
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

__attribute__((alias("__imp__sub_82F2A180"))) PPC_WEAK_FUNC(sub_82F2A180);
PPC_FUNC_IMPL(__imp__sub_82F2A180) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2A188"))) PPC_WEAK_FUNC(sub_82F2A188);
PPC_FUNC_IMPL(__imp__sub_82F2A188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// lvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,16
	ctx.r8.s64 = 16;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r10,48
	ctx.r10.s64 = 48;
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r4,r8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r8
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r4,r9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r4,r10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r10
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2A1C0"))) PPC_WEAK_FUNC(sub_82F2A1C0);
PPC_FUNC_IMPL(__imp__sub_82F2A1C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32237
	r11.s64 = -2112684032;
	// lfs f0,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	f0.f64 = double(temp.f32);
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// stfs f0,16(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// addi r9,r11,-2700
	ctx.r9.s64 = r11.s64 + -2700;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r6,13
	ctx.r6.s64 = 13;
	// sth r8,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r8.u16);
	// addi r11,r10,-12528
	r11.s64 = ctx.r10.s64 + -12528;
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// lhz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f2a214
	if (cr6.eq) goto loc_82F2A214;
	// lhz r11,6(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 6);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// sth r10,6(r4)
	PPC_STORE_U16(ctx.r4.u32 + 6, ctx.r10.u16);
loc_82F2A214:
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// lvx128 v0,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,16
	ctx.r8.s64 = 16;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r10,48
	ctx.r10.s64 = 48;
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r5,r8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r8
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r5,r9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r5,r10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r10
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2A248"))) PPC_WEAK_FUNC(sub_82F2A248);
PPC_FUNC_IMPL(__imp__sub_82F2A248) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r5,r31,32
	ctx.r5.s64 = r31.s64 + 32;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x82ea92a8
	sub_82EA92A8(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

__attribute__((alias("__imp__sub_82F2A2B8"))) PPC_WEAK_FUNC(sub_82F2A2B8);
PPC_FUNC_IMPL(__imp__sub_82F2A2B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v19{};
	PPCVRegister v20{};
	PPCVRegister v21{};
	PPCVRegister v22{};
	PPCVRegister v23{};
	PPCVRegister v24{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,32
	r31.s64 = ctx.r3.s64 + 32;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r29,16
	r29.s64 = 16;
	// li r30,32
	r30.s64 = 32;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lvx128 v13,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r28
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r11,4496
	ctx.r9.s64 = r11.s64 + 4496;
	// lvx128 v12,r31,r29
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v11,v13,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// lvx128 v10,r31,r30
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v9,v12,v0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// vmsum3fp128 v8,v10,v0
	simde_mm_store_ps(ctx.v8.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v7,v9,v0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmrghw v6,v11,v8
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrghw v5,v6,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.u32), simde_mm_load_si128((simde__m128i*)ctx.v6.u32)));
	// stvx128 v5,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvx128 v4,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r4,48
	ctx.r4.s64 = 48;
	// lvx128 v3,r31,r29
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lvx128 v2,r31,r30
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx v31,0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v30,v31,0
	simde_mm_store_si128((simde__m128i*)v30.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v31.u32), 0xFF));
	// lvx128 v29,r0,r5
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v28,v29,v30
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v28.f32, simde_mm_mul_ps(simde_mm_load_ps(v29.f32), simde_mm_load_ps(v30.f32)));
	// lvx128 v27,r31,r4
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v1,r0,r28
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v26,v28,0
	simde_mm_store_si128((simde__m128i*)v26.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v28.u32), 0xFF));
	// vspltw v25,v28,1
	simde_mm_store_si128((simde__m128i*)v25.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v28.u32), 0xAA));
	// vspltw v24,v28,2
	simde_mm_store_si128((simde__m128i*)v24.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v28.u32), 0x55));
	// vmulfp128 v23,v4,v26
	simde_mm_store_ps(v23.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(v26.f32)));
	// vmaddfp v22,v3,v25,v23
	simde_mm_store_ps(v22.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(v25.f32)), simde_mm_load_ps(v23.f32)));
	// vmaddfp v21,v2,v24,v22
	simde_mm_store_ps(v21.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(v24.f32)), simde_mm_load_ps(v22.f32)));
	// vaddfp v20,v21,v27
	simde_mm_store_ps(v20.f32, simde_mm_add_ps(simde_mm_load_ps(v21.f32), simde_mm_load_ps(v27.f32)));
	// vmsum3fp128 v19,v20,v1
	simde_mm_store_ps(v19.f32, simde_mm_dp_ps(simde_mm_load_ps(v20.f32), simde_mm_load_ps(ctx.v1.f32), 0xEF));
	// stvewx v19,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, v19.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82F2A390"))) PPC_WEAK_FUNC(sub_82F2A390);
PPC_FUNC_IMPL(__imp__sub_82F2A390) {
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
	PPCVRegister v22{};
	PPCVRegister v23{};
	PPCVRegister v24{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,0(r13)
	r28.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r27,24
	r27.s64 = 24;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwzx r11,r27,r28
	r11.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82f2a3dc
	if (!cr6.lt) goto loc_82F2A3DC;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r8,r9,-292
	ctx.r8.s64 = ctx.r9.s64 + -292;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r3,r10,12
	ctx.r3.s64 = ctx.r10.s64 + 12;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r3,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r3.u32);
loc_82F2A3DC:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82F2A3EC:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82f2a3ec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82F2A3EC;
	// addi r31,r4,32
	r31.s64 = ctx.r4.s64 + 32;
	// lvx128 v0,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,48
	ctx.r9.s64 = 48;
	// li r11,16
	r11.s64 = 16;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r3,r8,4496
	ctx.r3.s64 = ctx.r8.s64 + 4496;
	// lvx128 v13,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r31,r9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v4,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// lvx128 v12,r5,r11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v10,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// lvx128 v7,r31,r11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// vsubfp v9,v0,v11
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32)));
	// lvx128 v5,r31,r10
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lvx128 v0,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp v8,v12,v10
	simde_mm_store_ps(ctx.v8.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v10.f32)));
	// vor v6,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// stw r11,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r11.u32);
	// vor v3,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// lwz r4,24(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// vmsum3fp128 v2,v7,v9
	simde_mm_store_ps(ctx.v2.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v9.f32), 0xEF));
	// vmsum3fp128 v1,v5,v9
	simde_mm_store_ps(ctx.v1.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v9.f32), 0xEF));
	// vmsum3fp128 v31,v13,v9
	simde_mm_store_ps(v31.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v9.f32), 0xEF));
	// vmsum3fp128 v30,v6,v8
	simde_mm_store_ps(v30.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v8.f32), 0xEF));
	// vmsum3fp128 v29,v3,v8
	simde_mm_store_ps(v29.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(ctx.v8.f32), 0xEF));
	// vmsum3fp128 v28,v4,v8
	simde_mm_store_ps(v28.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v8.f32), 0xEF));
	// vmrghw v27,v2,v0
	simde_mm_store_si128((simde__m128i*)v27.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v2.u32)));
	// vmrghw v26,v31,v1
	simde_mm_store_si128((simde__m128i*)v26.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v1.u32), simde_mm_load_si128((simde__m128i*)v31.u32)));
	// vmrghw v25,v30,v0
	simde_mm_store_si128((simde__m128i*)v25.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)v30.u32)));
	// vmrghw v24,v28,v29
	simde_mm_store_si128((simde__m128i*)v24.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v29.u32), simde_mm_load_si128((simde__m128i*)v28.u32)));
	// vmrghw v23,v26,v27
	simde_mm_store_si128((simde__m128i*)v23.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v27.u32), simde_mm_load_si128((simde__m128i*)v26.u32)));
	// vmrghw v22,v24,v25
	simde_mm_store_si128((simde__m128i*)v22.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v25.u32), simde_mm_load_si128((simde__m128i*)v24.u32)));
	// stvx128 v23,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v22,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// stw r8,64(r30)
	PPC_STORE_U32(r30.u32 + 64, ctx.r8.u32);
	// lbz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f2a508
	if (cr6.eq) goto loc_82F2A508;
	// ld r11,0(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(r30.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// bl 0x82eaf210
	sub_82EAF210(ctx, base);
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,8
	ctx.r7.s64 = r11.s64 + 8;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r6,r30
	PPC_STORE_U32(ctx.r6.u32 + r30.u32, ctx.r8.u32);
loc_82F2A508:
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82f2a538
	if (!cr6.lt) goto loc_82F2A538;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r9,-14788
	ctx.r8.s64 = ctx.r9.s64 + -14788;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_82F2A538:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82F2A548"))) PPC_WEAK_FUNC(sub_82F2A548);
PPC_FUNC_IMPL(__imp__sub_82F2A548) {
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
	PPCVRegister v22{};
	PPCVRegister v23{};
	PPCVRegister v24{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r13)
	r29.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r28,24
	r28.s64 = 24;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwzx r11,r28,r29
	r11.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bge cr6,0x82f2a59c
	if (!cr6.lt) goto loc_82F2A59C;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// addi r7,r8,-276
	ctx.r7.s64 = ctx.r8.s64 + -276;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// mftb r6
	ctx.r6.u64 = __rdtsc();
	// addi r4,r9,12
	ctx.r4.s64 = ctx.r9.s64 + 12;
	// stw r6,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
	// stw r4,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r4.u32);
loc_82F2A59C:
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// li r8,6
	ctx.r8.s64 = 6;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_82F2A5AC:
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// std r8,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x82f2a5ac
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82F2A5AC;
	// addi r5,r31,32
	ctx.r5.s64 = r31.s64 + 32;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,48
	ctx.r8.s64 = 48;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r11,16
	r11.s64 = 16;
	// li r9,32
	ctx.r9.s64 = 32;
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// lvx128 v13,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lvx128 v11,r5,r8
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v4,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vor v10,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// lvx128 v12,r10,r11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp v9,v0,v11
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32)));
	// lvx128 v7,r5,r11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v6,r5,r9
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v5,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vor v3,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// addi r10,r7,4496
	ctx.r10.s64 = ctx.r7.s64 + 4496;
	// vsubfp v8,v12,v10
	simde_mm_store_ps(ctx.v8.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v10.f32)));
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v2,v7,v9
	simde_mm_store_ps(ctx.v2.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v9.f32), 0xEF));
	// vmsum3fp128 v1,v6,v9
	simde_mm_store_ps(ctx.v1.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v9.f32), 0xEF));
	// vmsum3fp128 v31,v13,v9
	simde_mm_store_ps(v31.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v9.f32), 0xEF));
	// vmsum3fp128 v30,v5,v8
	simde_mm_store_ps(v30.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v8.f32), 0xEF));
	// vmsum3fp128 v29,v3,v8
	simde_mm_store_ps(v29.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(ctx.v8.f32), 0xEF));
	// vmsum3fp128 v28,v4,v8
	simde_mm_store_ps(v28.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v8.f32), 0xEF));
	// vmrghw v27,v2,v0
	simde_mm_store_si128((simde__m128i*)v27.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v2.u32)));
	// vmrghw v26,v31,v1
	simde_mm_store_si128((simde__m128i*)v26.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v1.u32), simde_mm_load_si128((simde__m128i*)v31.u32)));
	// vmrghw v25,v30,v0
	simde_mm_store_si128((simde__m128i*)v25.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)v30.u32)));
	// vmrghw v24,v28,v29
	simde_mm_store_si128((simde__m128i*)v24.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v29.u32), simde_mm_load_si128((simde__m128i*)v28.u32)));
	// vmrghw v23,v26,v27
	simde_mm_store_si128((simde__m128i*)v23.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v27.u32), simde_mm_load_si128((simde__m128i*)v26.u32)));
	// vmrghw v22,v24,v25
	simde_mm_store_si128((simde__m128i*)v22.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v25.u32), simde_mm_load_si128((simde__m128i*)v24.u32)));
	// stvx128 v23,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v22,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82ea92a8
	sub_82EA92A8(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r11,r28,r29
	r11.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82f2a6c0
	if (!cr6.lt) goto loc_82F2A6C0;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r9,-14788
	ctx.r8.s64 = ctx.r9.s64 + -14788;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 + 12;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
loc_82F2A6C0:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82F2A6C8"))) PPC_WEAK_FUNC(sub_82F2A6C8);
PPC_FUNC_IMPL(__imp__sub_82F2A6C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,32
	r31.s64 = ctx.r3.s64 + 32;
	// lvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r29,16
	r29.s64 = 16;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r30,32
	r30.s64 = 32;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvx128 v13,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r11,4496
	ctx.r9.s64 = r11.s64 + 4496;
	// lvx128 v12,r31,r29
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v11,v13,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// lvx128 v10,r31,r30
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v9,v12,v0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// vmsum3fp128 v8,v10,v0
	simde_mm_store_ps(ctx.v8.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// vmrghw v7,v9,v0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmrghw v6,v11,v8
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrghw v5,v6,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.u32), simde_mm_load_si128((simde__m128i*)ctx.v6.u32)));
	// stvx128 v5,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lvx128 v1,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r5,48
	ctx.r5.s64 = 48;
	// lvx128 v30,r31,r29
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v29,r31,r30
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v4,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v28,r31,r5
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v3,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// vspltw v2,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// vmulfp128 v31,v1,v4
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v31.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v4.f32)));
	// vmaddfp v27,v30,v3,v31
	simde_mm_store_ps(v27.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v30.f32), simde_mm_load_ps(ctx.v3.f32)), simde_mm_load_ps(v31.f32)));
	// vmaddfp v26,v29,v2,v27
	simde_mm_store_ps(v26.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v29.f32), simde_mm_load_ps(ctx.v2.f32)), simde_mm_load_ps(v27.f32)));
	// vaddfp v25,v26,v28
	simde_mm_store_ps(v25.f32, simde_mm_add_ps(simde_mm_load_ps(v26.f32), simde_mm_load_ps(v28.f32)));
	// vrlimi128 v25,v0,1,0
	simde_mm_store_ps(v25.f32, simde_mm_blend_ps(simde_mm_load_ps(v25.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v0.f32), 228), 1));
	// stvx128 v25,r0,r28
	simde_mm_store_si128((simde__m128i*)(base + ((r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82F2A788"))) PPC_WEAK_FUNC(sub_82F2A788);
PPC_FUNC_IMPL(__imp__sub_82F2A788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r10,r30,-1
	ctx.r10.s64 = r30.s64 + -1;
	// addi r11,r31,32
	r11.s64 = r31.s64 + 32;
	// ld r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U64(r31.u32 + 32);
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// add r11,r9,r29
	r11.u64 = ctx.r9.u64 + r29.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// std r3,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r3.u64);
	// ld r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 40);
	// ld r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U64(r31.u32 + 48);
	// ld r30,56(r31)
	r30.u64 = PPC_LOAD_U64(r31.u32 + 56);
	// ld r29,64(r31)
	r29.u64 = PPC_LOAD_U64(r31.u32 + 64);
	// ld r28,72(r31)
	r28.u64 = PPC_LOAD_U64(r31.u32 + 72);
	// ld r27,80(r31)
	r27.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// ld r31,88(r31)
	r31.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// std r9,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r9.u64);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// std r4,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r4.u64);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// std r30,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, r30.u64);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// std r29,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, r29.u64);
	// std r28,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, r28.u64);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// std r27,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, r27.u64);
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// std r31,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, r31.u64);
	// lvx128 v13,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82F2A838:
	// lvx128 v10,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// vspltw v9,v10,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0xFF));
	// vor v8,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vspltw v7,v10,1
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0xAA));
	// vspltw v6,v10,2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0x55));
	// vmulfp128 v5,v0,v9
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v5.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp v4,v13,v7,v5
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// vmaddfp v3,v12,v6,v4
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v4.f32)));
	// vaddfp v2,v3,v11
	simde_mm_store_ps(ctx.v2.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vrlimi128 v2,v8,1,0
	simde_mm_store_ps(ctx.v2.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v8.f32), 228), 1));
	// stvx128 v2,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// bge 0x82f2a838
	if (!cr0.lt) goto loc_82F2A838;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82F2A878"))) PPC_WEAK_FUNC(sub_82F2A878);
PPC_FUNC_IMPL(__imp__sub_82F2A878) {
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
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r31,32
	r11.s64 = r31.s64 + 32;
	// lvx128 v0,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,16
	ctx.r9.s64 = 16;
	// vspltw v13,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// li r8,32
	ctx.r8.s64 = 32;
	// vspltw v11,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// li r7,48
	ctx.r7.s64 = 48;
	// vspltw v9,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// lvx128 v12,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v6,v12,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v6.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)));
	// lvx128 v10,r11,r9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r11,r8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v7,r11,r7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v5,v10,v11,v6
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vmaddfp v4,v8,v9,v5
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// vaddfp v3,v4,v7
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v7.f32)));
	// stvx128 v3,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

__attribute__((alias("__imp__sub_82F2A908"))) PPC_WEAK_FUNC(sub_82F2A908);
PPC_FUNC_IMPL(__imp__sub_82F2A908) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r11,r31,32
	r11.s64 = r31.s64 + 32;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,48
	ctx.r6.s64 = 48;
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v13,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v10,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// lvx128 v8,r11,r8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v11,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// lvx128 v7,r11,r7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v6,r11,r6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v9,v10,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v5,v8,v12,v9
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp v4,v7,v11,v5
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// vaddfp v3,v4,v6
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v6.f32)));
	// stvx128 v3,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

__attribute__((alias("__imp__sub_82F2A9A0"))) PPC_WEAK_FUNC(sub_82F2A9A0);
PPC_FUNC_IMPL(__imp__sub_82F2A9A0) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,36(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r3,-1
	r11.s64 = ctx.r3.s64 + -1;
	// ld r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U64(r31.u32 + 32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ld r7,56(r31)
	ctx.r7.u64 = PPC_LOAD_U64(r31.u32 + 56);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// ld r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U64(r31.u32 + 40);
	// addi r10,r31,32
	ctx.r10.s64 = r31.s64 + 32;
	// ld r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U64(r31.u32 + 48);
	// addi r28,r1,112
	r28.s64 = ctx.r1.s64 + 112;
	// ld r27,64(r31)
	r27.u64 = PPC_LOAD_U64(r31.u32 + 64);
	// addi r26,r1,128
	r26.s64 = ctx.r1.s64 + 128;
	// ld r25,72(r31)
	r25.u64 = PPC_LOAD_U64(r31.u32 + 72);
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ld r24,80(r31)
	r24.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// ld r31,88(r31)
	r31.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// add r10,r9,r30
	ctx.r10.u64 = ctx.r9.u64 + r30.u64;
	// std r6,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r6.u64);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// std r7,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r7.u64);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// std r4,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r4.u64);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// std r3,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r3.u64);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// std r27,0(r28)
	PPC_STORE_U64(r28.u32 + 0, r27.u64);
	// subf r9,r30,r29
	ctx.r9.s64 = r29.s64 - r30.s64;
	// std r25,8(r28)
	PPC_STORE_U64(r28.u32 + 8, r25.u64);
	// lvx128 v12,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// std r24,0(r26)
	PPC_STORE_U64(r26.u32 + 0, r24.u64);
	// lvx128 v13,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// std r31,8(r26)
	PPC_STORE_U64(r26.u32 + 8, r31.u64);
	// lvx128 v11,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82F2AA6C:
	// lvx128 v10,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// vspltw v9,v10,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0xFF));
	// vspltw v8,v10,1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0xAA));
	// vspltw v7,v10,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0x55));
	// vmulfp128 v6,v0,v9
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v6.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp v5,v13,v8,v6
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vmaddfp v4,v12,v7,v5
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// vaddfp v3,v4,v11
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vrlimi128 v3,v10,1,0
	simde_mm_store_ps(ctx.v3.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v10.f32), 228), 1));
	// stvx128 v3,r9,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// bge 0x82f2aa6c
	if (!cr0.lt) goto loc_82F2AA6C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82F2AAB0"))) PPC_WEAK_FUNC(sub_82F2AAB0);
PPC_FUNC_IMPL(__imp__sub_82F2AAB0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2AAB8"))) PPC_WEAK_FUNC(sub_82F2AAB8);
PPC_FUNC_IMPL(__imp__sub_82F2AAB8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2AAC0"))) PPC_WEAK_FUNC(sub_82F2AAC0);
PPC_FUNC_IMPL(__imp__sub_82F2AAC0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2AAC8"))) PPC_WEAK_FUNC(sub_82F2AAC8);
PPC_FUNC_IMPL(__imp__sub_82F2AAC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// bnelr cr6
	if (!cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2AAE0"))) PPC_WEAK_FUNC(sub_82F2AAE0);
PPC_FUNC_IMPL(__imp__sub_82F2AAE0) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x82f2ab64
	if (!cr6.gt) goto loc_82F2AB64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
loc_82F2AB04:
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r10,68(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 68);
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r27,r11,24,8,31
	r27.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r9,r11,24
	ctx.r9.u64 = r11.u32 & 0xFF;
	// rlwinm r8,r27,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// sth r9,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r3,r8,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm r11,r27,8,0,23
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r10,r10,0,8,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFC0FFFFFF;
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// oris r8,r9,16128
	ctx.r8.u64 = ctx.r9.u64 | 1056964608;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bne 0x82f2ab04
	if (!cr0.eq) goto loc_82F2AB04;
loc_82F2AB64:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82F2AB70"))) PPC_WEAK_FUNC(sub_82F2AB70);
PPC_FUNC_IMPL(__imp__sub_82F2AB70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,68(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F2AB88"))) PPC_WEAK_FUNC(sub_82F2AB88);
PPC_FUNC_IMPL(__imp__sub_82F2AB88) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// lwz r11,72(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 72);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82f2abe0
	if (!cr6.gt) goto loc_82F2ABE0;
	// li r30,0
	r30.s64 = 0;
loc_82F2ABB0:
	// lwz r11,68(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 68);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,72(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 72);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// add r28,r3,r28
	r28.u64 = ctx.r3.u64 + r28.u64;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r31,r8
	cr6.compare<int32_t>(r31.s32, ctx.r8.s32, xer);
	// blt cr6,0x82f2abb0
	if (cr6.lt) goto loc_82F2ABB0;
loc_82F2ABE0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82F2ABF0"))) PPC_WEAK_FUNC(sub_82F2ABF0);
PPC_FUNC_IMPL(__imp__sub_82F2ABF0) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// mr r30,r27
	r30.u64 = r27.u64;
	// lwz r11,72(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 72);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82f2ac6c
	if (!cr6.gt) goto loc_82F2AC6C;
	// li r29,0
	r29.s64 = 0;
loc_82F2AC1C:
	// lwz r11,68(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 68);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwzx r26,r29,r11
	r26.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r7,36(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,72(r28)
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + 72);
	// rlwinm r11,r3,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r31,r6
	cr6.compare<int32_t>(r31.s32, ctx.r6.s32, xer);
	// blt cr6,0x82f2ac1c
	if (cr6.lt) goto loc_82F2AC1C;
loc_82F2AC6C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82F2AC78"))) PPC_WEAK_FUNC(sub_82F2AC78);
PPC_FUNC_IMPL(__imp__sub_82F2AC78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// li r12,-80
	r12.s64 = -80;
	// stvx128 v126,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r12,-64
	r12.s64 = -64;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// clrlwi r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stb r4,64(r29)
	PPC_STORE_U8(r29.u32 + 64, ctx.r4.u8);
	// beq cr6,0x82f2ada8
	if (cr6.eq) goto loc_82F2ADA8;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r10,72(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 72);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// li r30,0
	r30.s64 = 0;
	// lfs f0,-14888(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -14888);
	f0.f64 = double(temp.f32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lfs f13,20728(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20728);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lvx128 v13,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v126,v0,0
	simde_mm_store_si128((simde__m128i*)v126.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vspltw128 v127,v13,0
	simde_mm_store_si128((simde__m128i*)v127.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// ble cr6,0x82f2ad50
	if (!cr6.gt) goto loc_82F2AD50;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// li r31,0
	r31.s64 = 0;
	// addi r28,r11,29456
	r28.s64 = r11.s64 + 29456;
	// lfs f31,2240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f31.f64 = double(temp.f32);
loc_82F2AD00:
	// lwz r11,68(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 68);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lwz r6,72(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 72);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r6
	cr6.compare<int32_t>(r30.s32, ctx.r6.s32, xer);
	// lvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vminfp128 v127,v127,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v127.f32, simde_mm_min_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaxfp128 v126,v126,v13
	simde_mm_store_ps(v126.f32, simde_mm_max_ps(simde_mm_load_ps(v126.f32), simde_mm_load_ps(ctx.v13.f32)));
	// blt cr6,0x82f2ad00
	if (cr6.lt) goto loc_82F2AD00;
loc_82F2AD50:
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// vaddfp128 v0,v127,v126
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(v126.f32)));
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// vsubfp128 v13,v126,v127
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(v126.f32), simde_mm_load_ps(v127.f32)));
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r11,r29,48
	r11.s64 = r29.s64 + 48;
	// addi r10,r29,32
	ctx.r10.s64 = r29.s64 + 32;
	// lfs f0,-22120(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -22120);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvlx v12,0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v10,0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v9,v10,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0xFF));
	// vor v8,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vspltw v11,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xFF));
	// vor v6,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v7,v8,v9
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v7.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v5,v6,v11
	simde_mm_store_ps(ctx.v5.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v11.f32)));
	// stvx128 v7,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v5,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82F2ADA8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// li r0,-80
	r0.s64 = -80;
	// lvx128 v126,r1,r0
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r0,-64
	r0.s64 = -64;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82F2ADC8"))) PPC_WEAK_FUNC(sub_82F2ADC8);
PPC_FUNC_IMPL(__imp__sub_82F2ADC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2ADD0"))) PPC_WEAK_FUNC(sub_82F2ADD0);
PPC_FUNC_IMPL(__imp__sub_82F2ADD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r3,r4,1
	ctx.r3.s64 = ctx.r4.s64 + 1;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2ADE8"))) PPC_WEAK_FUNC(sub_82F2ADE8);
PPC_FUNC_IMPL(__imp__sub_82F2ADE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2ADF8"))) PPC_WEAK_FUNC(sub_82F2ADF8);
PPC_FUNC_IMPL(__imp__sub_82F2ADF8) {
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
	// lis r11,-32237
	r11.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r8,r11,-2172
	ctx.r8.s64 = r11.s64 + -2172;
	// addi r7,r9,-2212
	ctx.r7.s64 = ctx.r9.s64 + -2212;
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// li r29,0
	r29.s64 = 0;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stw r7,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r7.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82f2ae88
	if (!cr6.gt) goto loc_82F2AE88;
	// li r30,0
	r30.s64 = 0;
loc_82F2AE34:
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// lhz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f2ae74
	if (cr6.eq) goto loc_82F2AE74;
	// lhz r11,6(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r9.u16);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82f2ae74
	if (!cr6.eq) goto loc_82F2AE74;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F2AE74:
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82f2ae34
	if (cr6.lt) goto loc_82F2AE34;
loc_82F2AE88:
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82f2aeb4
	if (!cr6.eq) goto loc_82F2AEB4;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82F2AEB4:
	// lis r11,-32237
	r11.s64 = -2112684032;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,-12584
	ctx.r9.s64 = r11.s64 + -12584;
	// addi r8,r10,-22012
	ctx.r8.s64 = ctx.r10.s64 + -22012;
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82F2AED8"))) PPC_WEAK_FUNC(sub_82F2AED8);
PPC_FUNC_IMPL(__imp__sub_82F2AED8) {
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r28,r3,72
	r28.s64 = ctx.r3.s64 + 72;
	// li r26,0
	r26.s64 = 0;
	// lfs f31,20728(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20728);
	f31.f64 = double(temp.f32);
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82f2af7c
	if (!cr6.gt) goto loc_82F2AF7C;
	// addi r25,r3,68
	r25.s64 = ctx.r3.s64 + 68;
	// li r30,0
	r30.s64 = 0;
loc_82F2AF18:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lvx128 v13,r0,r27
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v12,v0,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// stvewx v12,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// ble cr6,0x82f2af68
	if (!cr6.gt) goto loc_82F2AF68;
	// fmr f31,f0
	f31.f64 = f0.f64;
	// stvx128 v0,r0,r29
	simde_mm_store_si128((simde__m128i*)(base + ((r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r26,r31
	r26.u64 = r31.u64;
loc_82F2AF68:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82f2af18
	if (cr6.lt) goto loc_82F2AF18;
loc_82F2AF7C:
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// rlwinm r11,r26,8,0,23
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r10,r10,0,8,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFC0FFFFFF;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// oris r8,r9,16128
	ctx.r8.u64 = ctx.r9.u64 | 1056964608;
	// stw r8,12(r29)
	PPC_STORE_U32(r29.u32 + 12, ctx.r8.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82F2AFA0"))) PPC_WEAK_FUNC(sub_82F2AFA0);
PPC_FUNC_IMPL(__imp__sub_82F2AFA0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r29,r28,68
	r29.s64 = r28.s64 + 68;
	// lwz r11,76(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 76);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82f2afec
	if (!cr6.lt) goto loc_82F2AFEC;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82f2afdc
	if (cr6.lt) goto loc_82F2AFDC;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82F2AFDC:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82F2AFEC:
	// stw r31,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r31.u32);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 16, temp.u32);
	// ble cr6,0x82f2b03c
	if (!cr6.gt) goto loc_82F2B03C;
	// li r11,0
	r11.s64 = 0;
loc_82F2B008:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// stwx r9,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// lhz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82f2b030
	if (cr6.eq) goto loc_82F2B030;
	// lhz r9,6(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// sth r8,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r8.u16);
loc_82F2B030:
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x82f2b008
	if (!cr0.eq) goto loc_82F2B008;
loc_82F2B03C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82F2B048"))) PPC_WEAK_FUNC(sub_82F2B048);
PPC_FUNC_IMPL(__imp__sub_82F2B048) {
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lbz r11,64(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f2b09c
	if (cr6.eq) goto loc_82F2B09C;
	// lfs f0,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	f0.f64 = double(temp.f32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// addi r5,r31,48
	ctx.r5.s64 = r31.s64 + 48;
	// fadds f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 + f31.f64));
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82f222b0
	sub_82F222B0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831b0b70
	return;
loc_82F2B09C:
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,72(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// li r29,1
	r29.s64 = 1;
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// ble cr6,0x82f2b138
	if (!cr6.gt) goto loc_82F2B138;
	// addi r27,r28,16
	r27.s64 = r28.s64 + 16;
	// li r30,4
	r30.s64 = 4;
loc_82F2B0D8:
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r28
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r27
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lvx128 v12,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vminfp v10,v0,v12
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v10.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vmaxfp v9,v13,v11
	simde_mm_store_ps(ctx.v9.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v11.f32)));
	// stvx128 v10,r0,r28
	simde_mm_store_si128((simde__m128i*)(base + ((r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v9,r0,r27
	simde_mm_store_si128((simde__m128i*)(base + ((r27.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r6,72(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// cmpw cr6,r29,r6
	cr6.compare<int32_t>(r29.s32, ctx.r6.s32, xer);
	// blt cr6,0x82f2b0d8
	if (cr6.lt) goto loc_82F2B0D8;
loc_82F2B138:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82F2B148"))) PPC_WEAK_FUNC(sub_82F2B148);
PPC_FUNC_IMPL(__imp__sub_82F2B148) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r4,r10,-248
	ctx.r4.s64 = ctx.r10.s64 + -248;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// rlwinm r8,r11,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x82f2b1c0
	if (!cr6.eq) goto loc_82F2B1C0;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lwz r7,72(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,68(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// addi r4,r9,-260
	ctx.r4.s64 = ctx.r9.s64 + -260;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F2B1C0:
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82f2b214
	if (!cr6.gt) goto loc_82F2B214;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// li r30,0
	r30.s64 = 0;
	// addi r27,r11,-316
	r27.s64 = r11.s64 + -316;
loc_82F2B1DC:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwzx r6,r10,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,72(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r28,r8
	cr6.compare<int32_t>(r28.s32, ctx.r8.s32, xer);
	// blt cr6,0x82f2b1dc
	if (cr6.lt) goto loc_82F2B1DC;
loc_82F2B214:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82F2B230"))) PPC_WEAK_FUNC(sub_82F2B230);
PPC_FUNC_IMPL(__imp__sub_82F2B230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,0(r13)
	r25.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r24,24
	r24.s64 = 24;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwzx r11,r24,r25
	r11.u64 = PPC_LOAD_U32(r24.u32 + r25.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82f2b280
	if (!cr6.lt) goto loc_82F2B280;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r8,r9,-232
	ctx.r8.s64 = ctx.r9.s64 + -232;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 + 12;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
loc_82F2B280:
	// lwz r11,64(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 64);
	// li r26,-1
	r26.s64 = -1;
	// addi r31,r4,20
	r31.s64 = ctx.r4.s64 + 20;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mr r28,r26
	r28.u64 = r26.u64;
	// stw r11,64(r29)
	PPC_STORE_U32(r29.u32 + 64, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(r30.s32, -1, xer);
	// beq cr6,0x82f2b32c
	if (cr6.eq) goto loc_82F2B32C;
loc_82F2B2B8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,32(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82f2b308
	if (cr6.eq) goto loc_82F2B308;
	// mr r28,r30
	r28.u64 = r30.u64;
loc_82F2B308:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(r30.s32, -1, xer);
	// bne cr6,0x82f2b2b8
	if (!cr6.eq) goto loc_82F2B2B8;
loc_82F2B32C:
	// lwz r11,64(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 64);
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(r28.s32, -1, xer);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,64(r29)
	PPC_STORE_U32(r29.u32 + 64, r11.u32);
	// beq cr6,0x82f2b34c
	if (cr6.eq) goto loc_82F2B34C;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + r29.u32, r28.u32);
loc_82F2B34C:
	// subf r11,r28,r26
	r11.s64 = r26.s64 - r28.s64;
	// lwzx r10,r24,r25
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + r25.u32);
	// cntlzw r9,r11
	ctx.r9.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lwz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// xori r6,r8,1
	ctx.r6.u64 = ctx.r8.u64 ^ 1;
	// stb r6,0(r23)
	PPC_STORE_U8(r23.u32 + 0, ctx.r6.u8);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x82f2b390
	if (!cr6.lt) goto loc_82F2B390;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r9,-14788
	ctx.r8.s64 = ctx.r9.s64 + -14788;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_82F2B390:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_82F2B3A0"))) PPC_WEAK_FUNC(sub_82F2B3A0);
PPC_FUNC_IMPL(__imp__sub_82F2B3A0) {
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
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,0(r13)
	r26.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r25,24
	r25.s64 = 24;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwzx r11,r25,r26
	r11.u64 = PPC_LOAD_U32(r25.u32 + r26.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82f2b3f0
	if (!cr6.lt) goto loc_82F2B3F0;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r8,r9,-220
	ctx.r8.s64 = ctx.r9.s64 + -220;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 + 12;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
loc_82F2B3F0:
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r30,r3,20
	r30.s64 = ctx.r3.s64 + 20;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(r31.s32, -1, xer);
	// beq cr6,0x82f2b484
	if (cr6.eq) goto loc_82F2B484;
loc_82F2B414:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,12(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(r31.s32, -1, xer);
	// bne cr6,0x82f2b414
	if (!cr6.eq) goto loc_82F2B414;
loc_82F2B484:
	// lwzx r10,r25,r26
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + r26.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82f2b4b4
	if (!cr6.lt) goto loc_82F2B4B4;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r9,-14788
	ctx.r8.s64 = ctx.r9.s64 + -14788;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_82F2B4B4:
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82F2B4C0"))) PPC_WEAK_FUNC(sub_82F2B4C0);
PPC_FUNC_IMPL(__imp__sub_82F2B4C0) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// li r6,1
	ctx.r6.s64 = 1;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lfs f0,2240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f0.f64 = double(temp.f32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// li r11,0
	r11.s64 = 0;
	// sth r6,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r6.u16);
	// li r3,21
	ctx.r3.s64 = 21;
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// addi r9,r9,-12584
	ctx.r9.s64 = ctx.r9.s64 + -12584;
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// addi r8,r8,-2172
	ctx.r8.s64 = ctx.r8.s64 + -2172;
	// addi r7,r7,-2212
	ctx.r7.s64 = ctx.r7.s64 + -2212;
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// lis r6,-32768
	ctx.r6.s64 = -2147483648;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stw r7,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r7.u32);
	// lfs f0,2244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// stw r6,76(r31)
	PPC_STORE_U32(r31.u32 + 76, ctx.r6.u32);
	// stfs f0,24(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// bl 0x82f2afa0
	sub_82F2AFA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82f2ac78
	sub_82F2AC78(ctx, base);
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

__attribute__((alias("__imp__sub_82F2B568"))) PPC_WEAK_FUNC(sub_82F2B568);
PPC_FUNC_IMPL(__imp__sub_82F2B568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, r11.u16);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B588"))) PPC_WEAK_FUNC(sub_82F2B588);
PPC_FUNC_IMPL(__imp__sub_82F2B588) {
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f2b5ec
	if (cr6.eq) goto loc_82F2B5EC;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmpwi cr6,r10,10
	cr6.compare<int32_t>(ctx.r10.s32, 10, xer);
	// bne cr6,0x82f2b5c8
	if (!cr6.eq) goto loc_82F2B5C8;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F2B5C8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmpwi cr6,r10,8
	cr6.compare<int32_t>(ctx.r10.s32, 8, xer);
	// bne cr6,0x82f2b5ec
	if (!cr6.eq) goto loc_82F2B5EC;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F2B5EC:
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

__attribute__((alias("__imp__sub_82F2B600"))) PPC_WEAK_FUNC(sub_82F2B600);
PPC_FUNC_IMPL(__imp__sub_82F2B600) {
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
	// addi r30,r5,-48
	r30.s64 = ctx.r5.s64 + -48;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x82f2b644
	if (!cr6.lt) goto loc_82F2B644;
loc_82F2B63C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82f2b674
	goto loc_82F2B674;
loc_82F2B644:
	// cmpw cr6,r3,r30
	cr6.compare<int32_t>(ctx.r3.s32, r30.s32, xer);
	// bgt cr6,0x82f2b63c
	if (cr6.gt) goto loc_82F2B63C;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r10,r31,48
	ctx.r10.s64 = r31.s64 + 48;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82f2b66c
	if (!cr6.eq) goto loc_82F2B66C;
	// li r11,0
	r11.s64 = 0;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// b 0x82f2b674
	goto loc_82F2B674;
loc_82F2B66C:
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// li r3,48
	ctx.r3.s64 = 48;
loc_82F2B674:
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

__attribute__((alias("__imp__sub_82F2B690"))) PPC_WEAK_FUNC(sub_82F2B690);
PPC_FUNC_IMPL(__imp__sub_82F2B690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F2B6A8"))) PPC_WEAK_FUNC(sub_82F2B6A8);
PPC_FUNC_IMPL(__imp__sub_82F2B6A8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r10,-204
	ctx.r4.s64 = ctx.r10.s64 + -204;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r8,-316
	ctx.r4.s64 = ctx.r8.s64 + -316;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,12(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
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

__attribute__((alias("__imp__sub_82F2B738"))) PPC_WEAK_FUNC(sub_82F2B738);
PPC_FUNC_IMPL(__imp__sub_82F2B738) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B740"))) PPC_WEAK_FUNC(sub_82F2B740);
PPC_FUNC_IMPL(__imp__sub_82F2B740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// lvx128 v0,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lvx128 v13,r31,r9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v12,v0,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// stvewx v12,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// fadds f1,f0,f1
	ctx.f1.f64 = double(float(f0.f64 + ctx.f1.f64));
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

__attribute__((alias("__imp__sub_82F2B7A8"))) PPC_WEAK_FUNC(sub_82F2B7A8);
PPC_FUNC_IMPL(__imp__sub_82F2B7A8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82F2B7CC:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82f2b7cc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82F2B7CC;
	// li r11,32
	r11.s64 = 32;
	// lvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,16
	ctx.r10.s64 = 16;
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r7,8(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// addi r31,r1,112
	r31.s64 = ctx.r1.s64 + 112;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// li r30,0
	r30.s64 = 0;
	// lvx128 v13,r3,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lvx128 v12,r4,r10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp v11,v0,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vsubfp v10,v12,v13
	simde_mm_store_ps(ctx.v10.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// stvx128 v11,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v10,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_82F2B860"))) PPC_WEAK_FUNC(sub_82F2B860);
PPC_FUNC_IMPL(__imp__sub_82F2B860) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// lvx128 v13,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r31,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp v12,v13,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v12,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

__attribute__((alias("__imp__sub_82F2B8C0"))) PPC_WEAK_FUNC(sub_82F2B8C0);
PPC_FUNC_IMPL(__imp__sub_82F2B8C0) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x82f2b91c
	if (!cr6.gt) goto loc_82F2B91C;
	// addi r9,r30,32
	ctx.r9.s64 = r30.s64 + 32;
	// mr r11,r29
	r11.u64 = r29.u64;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_82F2B900:
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lvx128 v13,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp v12,v0,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v12,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// bne 0x82f2b900
	if (!cr0.eq) goto loc_82F2B900;
loc_82F2B91C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82F2B928"))) PPC_WEAK_FUNC(sub_82F2B928);
PPC_FUNC_IMPL(__imp__sub_82F2B928) {
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
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// lvx128 v13,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r31,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp v12,v13,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v12,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

__attribute__((alias("__imp__sub_82F2B988"))) PPC_WEAK_FUNC(sub_82F2B988);
PPC_FUNC_IMPL(__imp__sub_82F2B988) {
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
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// lvx128 v13,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r31,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp v12,v13,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v12,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

__attribute__((alias("__imp__sub_82F2B9E8"))) PPC_WEAK_FUNC(sub_82F2B9E8);
PPC_FUNC_IMPL(__imp__sub_82F2B9E8) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,36(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82f2ba60
	if (!cr6.gt) goto loc_82F2BA60;
	// addi r10,r29,32
	ctx.r10.s64 = r29.s64 + 32;
loc_82F2BA40:
	// lvx128 v0,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// vaddfp v12,v0,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v12,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// bne 0x82f2ba40
	if (!cr0.eq) goto loc_82F2BA40;
loc_82F2BA60:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82F2BA70"))) PPC_WEAK_FUNC(sub_82F2BA70);
PPC_FUNC_IMPL(__imp__sub_82F2BA70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lfs f0,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	f0.f64 = double(temp.f32);
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// stfs f0,16(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// addi r8,r10,-2868
	ctx.r8.s64 = ctx.r10.s64 + -2868;
	// li r11,0
	r11.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// addi r10,r9,-12528
	ctx.r10.s64 = ctx.r9.s64 + -12528;
	// sth r7,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r7.u16);
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// lhz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82f2bac4
	if (cr6.eq) goto loc_82F2BAC4;
	// lhz r10,6(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 6);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sth r9,6(r4)
	PPC_STORE_U16(ctx.r4.u32 + 6, ctx.r9.u16);
loc_82F2BAC4:
	// li r10,32
	ctx.r10.s64 = 32;
	// lvx128 v0,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stvx128 v0,r3,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,2240(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stfs f0,44(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2BAE8"))) PPC_WEAK_FUNC(sub_82F2BAE8);
PPC_FUNC_IMPL(__imp__sub_82F2BAE8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r10,r30,32
	ctx.r10.s64 = r30.s64 + 32;
	// lvx128 v12,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,32
	ctx.r8.s64 = 32;
	// lvx128 v7,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r31,16
	r11.s64 = r31.s64 + 16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v13,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v10,r29,r9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r29.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v11,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// lvx128 v8,r29,r8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r29.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v9,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// vmulfp128 v6,v12,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v6.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v5,v10,v11,v6
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vmaddfp v4,v8,v9,v5
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// vaddfp v3,v7,v4
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v4.f32)));
	// stvx128 v3,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v2,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp v1,v2,v4
	simde_mm_store_ps(ctx.v1.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v4.f32)));
	// stvx128 v1,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82F2BB70"))) PPC_WEAK_FUNC(sub_82F2BB70);
PPC_FUNC_IMPL(__imp__sub_82F2BB70) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r13)
	r29.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r28,24
	r28.s64 = 24;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lwzx r11,r28,r29
	r11.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82f2bbbc
	if (!cr6.lt) goto loc_82F2BBBC;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r8,r9,-292
	ctx.r8.s64 = ctx.r9.s64 + -292;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r3,r10,12
	ctx.r3.s64 = ctx.r10.s64 + 12;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r3,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r3.u32);
loc_82F2BBBC:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82F2BBCC:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82f2bbcc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82F2BBCC;
	// li r10,32
	ctx.r10.s64 = 32;
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// li r9,16
	ctx.r9.s64 = 16;
	// lvx128 v0,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lvx128 v13,r4,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lvx128 v12,r5,r9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r3,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r3.u32);
	// lwz r4,24(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// vsubfp v11,v0,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vsubfp v10,v12,v13
	simde_mm_store_ps(ctx.v10.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)));
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stvx128 v11,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v10,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// lbz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82f2bc60
	if (cr6.eq) goto loc_82F2BC60;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + r31.u32, ctx.r10.u32);
loc_82F2BC60:
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82f2bc90
	if (!cr6.lt) goto loc_82F2BC90;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r9,-14788
	ctx.r8.s64 = ctx.r9.s64 + -14788;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_82F2BC90:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82F2BCA0"))) PPC_WEAK_FUNC(sub_82F2BCA0);
PPC_FUNC_IMPL(__imp__sub_82F2BCA0) {
	PPC_FUNC_PROLOGUE();
	// ld r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2BCA8"))) PPC_WEAK_FUNC(sub_82F2BCA8);
PPC_FUNC_IMPL(__imp__sub_82F2BCA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r11,21496
	ctx.r6.s64 = r11.s64 + 21496;
	// addi r5,r10,-168
	ctx.r5.s64 = ctx.r10.s64 + -168;
	// sth r7,262(r3)
	PPC_STORE_U16(ctx.r3.u32 + 262, ctx.r7.u16);
	// addi r4,r8,-184
	ctx.r4.s64 = ctx.r8.s64 + -184;
	// stw r6,264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 264, ctx.r6.u32);
	// addi r9,r3,256
	ctx.r9.s64 = ctx.r3.s64 + 256;
	// stw r5,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r5.u32);
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// stw r4,264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 264, ctx.r4.u32);
	// li r8,8
	ctx.r8.s64 = 8;
loc_82F2BCE0:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// addi r11,r3,264
	r11.s64 = ctx.r3.s64 + 264;
	// bne cr6,0x82f2bcf0
	if (!cr6.eq) goto loc_82F2BCF0;
	// li r11,0
	r11.s64 = 0;
loc_82F2BCF0:
	// stw r11,-8(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8, r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// addi r11,r3,264
	r11.s64 = ctx.r3.s64 + 264;
	// bne cr6,0x82f2bd04
	if (!cr6.eq) goto loc_82F2BD04;
	// li r11,0
	r11.s64 = 0;
loc_82F2BD04:
	// stw r11,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// addi r11,r3,264
	r11.s64 = ctx.r3.s64 + 264;
	// bne cr6,0x82f2bd18
	if (!cr6.eq) goto loc_82F2BD18;
	// li r11,0
	r11.s64 = 0;
loc_82F2BD18:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// addi r11,r3,264
	r11.s64 = ctx.r3.s64 + 264;
	// bne cr6,0x82f2bd2c
	if (!cr6.eq) goto loc_82F2BD2C;
	// li r11,0
	r11.s64 = 0;
loc_82F2BD2C:
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// addi r11,r3,264
	r11.s64 = ctx.r3.s64 + 264;
	// bne cr6,0x82f2bd40
	if (!cr6.eq) goto loc_82F2BD40;
	// li r11,0
	r11.s64 = 0;
loc_82F2BD40:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// addi r11,r3,264
	r11.s64 = ctx.r3.s64 + 264;
	// bne cr6,0x82f2bd54
	if (!cr6.eq) goto loc_82F2BD54;
	// li r11,0
	r11.s64 = 0;
loc_82F2BD54:
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// addi r11,r3,264
	r11.s64 = ctx.r3.s64 + 264;
	// bne cr6,0x82f2bd68
	if (!cr6.eq) goto loc_82F2BD68;
	// li r11,0
	r11.s64 = 0;
loc_82F2BD68:
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// addi r11,r3,264
	r11.s64 = ctx.r3.s64 + 264;
	// bne cr6,0x82f2bd7c
	if (!cr6.eq) goto loc_82F2BD7C;
	// li r11,0
	r11.s64 = 0;
loc_82F2BD7C:
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, r11.u32);
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// bne 0x82f2bce0
	if (!cr0.eq) goto loc_82F2BCE0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2BD90"))) PPC_WEAK_FUNC(sub_82F2BD90);
PPC_FUNC_IMPL(__imp__sub_82F2BD90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// addic. r10,r3,256
	xer.ca = ctx.r3.u32 > 4294967039;
	ctx.r10.s64 = ctx.r3.s64 + 256;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r10,8
	r11.s64 = ctx.r10.s64 + 8;
	// bne 0x82f2bda0
	if (!cr0.eq) goto loc_82F2BDA0;
	// li r11,0
	r11.s64 = 0;
loc_82F2BDA0:
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r7,r9,21496
	ctx.r7.s64 = ctx.r9.s64 + 21496;
	// addi r6,r8,-22012
	ctx.r6.s64 = ctx.r8.s64 + -22012;
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2BDC0"))) PPC_WEAK_FUNC(sub_82F2BDC0);
PPC_FUNC_IMPL(__imp__sub_82F2BDC0) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// addic. r29,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	r29.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// blt 0x82f2be6c
	if (cr0.lt) goto loc_82F2BE6C;
loc_82F2BDE0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lbz r7,5(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// lbz r6,5(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// extsb r9,r7
	ctx.r9.s64 = ctx.r7.s8;
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + r11.u64;
	// extsb r11,r6
	r11.s64 = ctx.r6.s8;
	// add r6,r11,r10
	ctx.r6.u64 = r11.u64 + ctx.r10.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f2be60
	if (cr6.eq) goto loc_82F2BE60;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lbz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// lbz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// extsb r11,r8
	r11.s64 = ctx.r8.s8;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + r11.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r5,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + r28.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F2BE60:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// bge 0x82f2bde0
	if (!cr0.lt) goto loc_82F2BDE0;
loc_82F2BE6C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82F2BE78"))) PPC_WEAK_FUNC(sub_82F2BE78);
PPC_FUNC_IMPL(__imp__sub_82F2BE78) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addic. r30,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	r30.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x82f2bedc
	if (cr0.lt) goto loc_82F2BEDC;
loc_82F2BE94:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lbz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// lbz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// extsb r11,r8
	r11.s64 = ctx.r8.s8;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + r11.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r5,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + r29.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// bge 0x82f2be94
	if (!cr0.lt) goto loc_82F2BE94;
loc_82F2BEDC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82F2BEE8"))) PPC_WEAK_FUNC(sub_82F2BEE8);
PPC_FUNC_IMPL(__imp__sub_82F2BEE8) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// blt cr6,0x82f2bf14
	if (cr6.lt) goto loc_82F2BF14;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82F2BF14:
	// cmpwi cr6,r10,32
	cr6.compare<int32_t>(ctx.r10.s32, 32, xer);
	// bge cr6,0x82f2c068
	if (!cr6.lt) goto loc_82F2C068;
	// li r21,0
	r21.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// mr r31,r21
	r31.u64 = r21.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// ble cr6,0x82f2c02c
	if (!cr6.gt) goto loc_82F2C02C;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
loc_82F2BF38:
	// lwz r6,4(r26)
	ctx.r6.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x82f2bfa0
	if (!cr6.gt) goto loc_82F2BFA0;
	// lwz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// add r8,r5,r9
	ctx.r8.u64 = ctx.r5.u64 + ctx.r9.u64;
	// lwzx r7,r5,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
loc_82F2BF58:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// bne cr6,0x82f2bf74
	if (!cr6.eq) goto loc_82F2BF74;
	// lwz r30,4(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r29,4(r8)
	r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// beq cr6,0x82f2bfa0
	if (cr6.eq) goto loc_82F2BFA0;
loc_82F2BF74:
	// lwz r30,4(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r30,r7
	cr6.compare<uint32_t>(r30.u32, ctx.r7.u32, xer);
	// bne cr6,0x82f2bf8c
	if (!cr6.eq) goto loc_82F2BF8C;
	// lwz r30,4(r8)
	r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r9,r30
	cr6.compare<uint32_t>(ctx.r9.u32, r30.u32, xer);
	// beq cr6,0x82f2bfa0
	if (cr6.eq) goto loc_82F2BFA0;
loc_82F2BF8C:
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x82f2bf58
	if (cr6.lt) goto loc_82F2BF58;
loc_82F2BFA0:
	// cmpw cr6,r10,r6
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, xer);
	// bne cr6,0x82f2bfd8
	if (!cr6.eq) goto loc_82F2BFD8;
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(r31.s32, ctx.r3.s32, xer);
	// beq cr6,0x82f2bfcc
	if (cr6.eq) goto loc_82F2BFCC;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// add r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 + r11.u64;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + r11.u64;
	// lwzx r8,r5,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + r11.u32);
	// stwx r8,r4,r11
	PPC_STORE_U32(ctx.r4.u32 + r11.u32, ctx.r8.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
loc_82F2BFCC:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// b 0x82f2c018
	goto loc_82F2C018;
loc_82F2BFD8:
	// addi r11,r6,-1
	r11.s64 = ctx.r6.s64 + -1;
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bge cr6,0x82f2c018
	if (!cr6.lt) goto loc_82F2C018;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
loc_82F2BFEC:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// lwz r6,4(r26)
	ctx.r6.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// cmpw cr6,r10,r6
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, xer);
	// blt cr6,0x82f2bfec
	if (cr6.lt) goto loc_82F2BFEC;
loc_82F2C018:
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// blt cr6,0x82f2bf38
	if (cr6.lt) goto loc_82F2BF38;
loc_82F2C02C:
	// lwz r11,8(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82f2c05c
	if (!cr6.lt) goto loc_82F2C05C;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82f2c04c
	if (cr6.lt) goto loc_82F2C04C;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82F2C04C:
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82F2C05C:
	// stw r31,4(r24)
	PPC_STORE_U32(r24.u32 + 4, r31.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b5c
	return;
loc_82F2C068:
	// bl 0x82eb3d68
	sub_82EB3D68(ctx, base);
	// lwz r22,0(r13)
	r22.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r23,20
	r23.s64 = 20;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r31,16
	r11.s64 = r31.s64 + 16;
	// lwzx r3,r23,r22
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + r22.u32);
	// rlwinm r4,r11,0,0,27
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// add r10,r11,r4
	ctx.r10.u64 = r11.u64 + ctx.r4.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82f2c0a4
	if (cr6.gt) goto loc_82F2C0A4;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// mr r25,r11
	r25.u64 = r11.u64;
	// b 0x82f2c0b8
	goto loc_82F2C0B8;
loc_82F2C0A4:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_82F2C0B8:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82eb3d28
	sub_82EB3D28(ctx, base);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// li r21,0
	r21.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// mr r29,r21
	r29.u64 = r21.u64;
	// ble cr6,0x82f2c188
	if (!cr6.gt) goto loc_82F2C188;
	// mr r31,r21
	r31.u64 = r21.u64;
loc_82F2C0E0:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// ldx r30,r31,r11
	r30.u64 = PPC_LOAD_U64(r31.u32 + r11.u32);
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r30.u64);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82f2c108
	if (!cr6.gt) goto loc_82F2C108;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// ld r30,80(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_82F2C108:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82eb4448
	sub_82EB4448(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// ble cr6,0x82f2c128
	if (!cr6.gt) goto loc_82F2C128;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
loc_82F2C128:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82f2c15c
	if (cr6.eq) goto loc_82F2C15C;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stdx r9,r11,r10
	PPC_STORE_U64(r11.u32 + ctx.r10.u32, ctx.r9.u64);
	// lwz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// stwx r21,r31,r8
	PPC_STORE_U32(r31.u32 + ctx.r8.u32, r21.u32);
	// b 0x82f2c174
	goto loc_82F2C174;
loc_82F2C15C:
	// rlwinm r11,r29,8,0,23
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 8) & 0xFFFFFF00;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// ori r5,r10,1
	ctx.r5.u64 = ctx.r10.u64 | 1;
	// bl 0x82eb4368
	sub_82EB4368(ctx, base);
loc_82F2C174:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82f2c0e0
	if (cr6.lt) goto loc_82F2C0E0;
loc_82F2C188:
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// mr r28,r21
	r28.u64 = r21.u64;
	// mr r27,r21
	r27.u64 = r21.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82f2c278
	if (!cr6.gt) goto loc_82F2C278;
	// mr r30,r21
	r30.u64 = r21.u64;
	// mr r29,r21
	r29.u64 = r21.u64;
loc_82F2C1A4:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// ldx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U64(r30.u32 + r11.u32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82f2c1c8
	if (!cr6.gt) goto loc_82F2C1C8;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
loc_82F2C1C8:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82eb4448
	sub_82EB4448(ctx, base);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r11,1
	r11.s64 = 1;
	// cmpw cr6,r4,r10
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, xer);
	// ble cr6,0x82f2c1ec
	if (!cr6.gt) goto loc_82F2C1EC;
	// mr r11,r21
	r11.u64 = r21.u64;
loc_82F2C1EC:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f2c240
	if (cr6.eq) goto loc_82F2C240;
	// add r11,r10,r4
	r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r11,r10,r9
	r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r9.u32);
	// clrlwi r8,r11,24
	ctx.r8.u64 = r11.u32 & 0xFF;
	// mr r31,r11
	r31.u64 = r11.u64;
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// ble cr6,0x82f2c228
	if (!cr6.gt) goto loc_82F2C228;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stdx r11,r10,r9
	PPC_STORE_U64(ctx.r10.u32 + ctx.r9.u32, r11.u64);
	// b 0x82f2c264
	goto loc_82F2C264;
loc_82F2C228:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82eb44a8
	sub_82EB44A8(ctx, base);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwinm r11,r31,27,5,28
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 27) & 0x7FFFFF8;
	// stwx r21,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r21.u32);
	// b 0x82f2c264
	goto loc_82F2C264;
loc_82F2C240:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// add r10,r29,r11
	ctx.r10.u64 = r29.u64 + r11.u64;
	// add r9,r30,r11
	ctx.r9.u64 = r30.u64 + r11.u64;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// lwzx r8,r30,r11
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82F2C264:
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x82f2c1a4
	if (cr6.lt) goto loc_82F2C1A4;
loc_82F2C278:
	// lwz r11,8(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// bge cr6,0x82f2c2a8
	if (!cr6.lt) goto loc_82F2C2A8;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x82f2c298
	if (cr6.lt) goto loc_82F2C298;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82F2C298:
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82F2C2A8:
	// stw r28,4(r24)
	PPC_STORE_U32(r24.u32 + 4, r28.u32);
	// mr r31,r21
	r31.u64 = r21.u64;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82f2c30c
	if (!cr6.gt) goto loc_82F2C30C;
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
loc_82F2C2C8:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// add r11,r9,r10
	r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r6,r9,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82f2c2f8
	if (cr6.eq) goto loc_82F2C2F8;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// stw r6,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r6.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r4,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r4.u32);
loc_82F2C2F8:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmpw cr6,r7,r11
	cr6.compare<int32_t>(ctx.r7.s32, r11.s32, xer);
	// blt cr6,0x82f2c2c8
	if (cr6.lt) goto loc_82F2C2C8;
loc_82F2C30C:
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82f2c33c
	if (!cr6.lt) goto loc_82F2C33C;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82f2c32c
	if (cr6.lt) goto loc_82F2C32C;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82F2C32C:
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82F2C33C:
	// stw r31,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82eb4330
	sub_82EB4330(ctx, base);
	// lwzx r3,r23,r22
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + r22.u32);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r25,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r25.u32);
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// bne cr6,0x82f2c370
	if (!cr6.eq) goto loc_82F2C370;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F2C370:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_82F2C378"))) PPC_WEAK_FUNC(sub_82F2C378);
PPC_FUNC_IMPL(__imp__sub_82F2C378) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82f2c380
	sub_82F2C380(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C380"))) PPC_WEAK_FUNC(sub_82F2C380);
PPC_FUNC_IMPL(__imp__sub_82F2C380) {
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
	// addi r11,r31,8
	r11.s64 = r31.s64 + 8;
	// bne cr6,0x82f2c3a4
	if (!cr6.eq) goto loc_82F2C3A4;
	// li r11,0
	r11.s64 = 0;
loc_82F2C3A4:
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r10,21496
	ctx.r8.s64 = ctx.r10.s64 + 21496;
	// addi r7,r9,-22012
	ctx.r7.s64 = ctx.r9.s64 + -22012;
	// clrlwi r6,r4,31
	ctx.r6.u64 = ctx.r4.u32 & 0x1;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82f2c3e4
	if (cr6.eq) goto loc_82F2C3E4;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r6,39
	ctx.r6.s64 = 39;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82F2C3E4:
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

__attribute__((alias("__imp__sub_82F2C400"))) PPC_WEAK_FUNC(sub_82F2C400);
PPC_FUNC_IMPL(__imp__sub_82F2C400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// addi r6,r11,21652
	ctx.r6.s64 = r11.s64 + 21652;
	// addi r5,r10,21640
	ctx.r5.s64 = ctx.r10.s64 + 21640;
	// addi r4,r9,21608
	ctx.r4.s64 = ctx.r9.s64 + 21608;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// addi r11,r8,21628
	r11.s64 = ctx.r8.s64 + 21628;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// addi r10,r7,21596
	ctx.r10.s64 = ctx.r7.s64 + 21596;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// b 0x822ec3b0
	sub_822EC3B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C440"))) PPC_WEAK_FUNC(sub_82F2C440);
PPC_FUNC_IMPL(__imp__sub_82F2C440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r9,r11,68
	ctx.r9.s64 = r11.s64 + 68;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// rlwinm r3,r7,23,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 23) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C460"))) PPC_WEAK_FUNC(sub_82F2C460);
PPC_FUNC_IMPL(__imp__sub_82F2C460) {
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
	PPCVRegister v21{};
	PPCVRegister v22{};
	PPCVRegister v23{};
	PPCVRegister v24{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,5(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// add r27,r11,r4
	r27.u64 = r11.u64 + ctx.r4.u64;
	// lwzx r26,r11,r4
	r26.u64 = PPC_LOAD_U32(r11.u32 + ctx.r4.u32);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82f2c5d8
	if (cr6.eq) goto loc_82F2C5D8;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r5,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// add r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 + r11.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// rlwinm r29,r10,4,0,27
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r5,r11,r29
	ctx.r5.u64 = r11.u64 + r29.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f2c5d8
	if (cr6.eq) goto loc_82F2C5D8;
	// lwz r30,8(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r5,r31,16
	ctx.r5.s64 = r31.s64 + 16;
	// addi r10,r30,48
	ctx.r10.s64 = r30.s64 + 48;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r29,r30,16
	r29.s64 = r30.s64 + 16;
	// addi r28,r30,32
	r28.s64 = r30.s64 + 32;
	// lvx128 v13,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r9,4496
	ctx.r8.s64 = ctx.r9.s64 + 4496;
	// lvx128 v12,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,16
	ctx.r7.s64 = 16;
	// lvx128 v11,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,32
	ctx.r9.s64 = 32;
	// vsubfp v10,v11,v12
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v10.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v12.f32)));
	// lvx128 v9,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r0,r28
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// vmsum3fp128 v7,v9,v10
	simde_mm_store_ps(ctx.v7.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v10.f32), 0xEF));
	// vmsum3fp128 v6,v8,v10
	simde_mm_store_ps(ctx.v6.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v10.f32), 0xEF));
	// vmsum3fp128 v5,v13,v10
	simde_mm_store_ps(ctx.v5.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32), 0xEF));
	// vmrghw v4,v7,v0
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v7.u32)));
	// vmrghw v3,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.u32), simde_mm_load_si128((simde__m128i*)ctx.v5.u32)));
	// vmrghw v2,v3,v4
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v4.u32), simde_mm_load_si128((simde__m128i*)ctx.v3.u32)));
	// stvx128 v2,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v1,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v31,r0,r28
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v30,r0,r30
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v28,r11,r7
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v29,r0,r10
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp v27,v28,v29
	simde_mm_store_ps(v27.f32, simde_mm_sub_ps(simde_mm_load_ps(v28.f32), simde_mm_load_ps(v29.f32)));
	// vmsum3fp128 v26,v1,v27
	simde_mm_store_ps(v26.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(v27.f32), 0xEF));
	// vmsum3fp128 v25,v31,v27
	simde_mm_store_ps(v25.f32, simde_mm_dp_ps(simde_mm_load_ps(v31.f32), simde_mm_load_ps(v27.f32), 0xEF));
	// vmsum3fp128 v24,v30,v27
	simde_mm_store_ps(v24.f32, simde_mm_dp_ps(simde_mm_load_ps(v30.f32), simde_mm_load_ps(v27.f32), 0xEF));
	// vmrghw v23,v26,v0
	simde_mm_store_si128((simde__m128i*)v23.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)v26.u32)));
	// vmrghw v22,v24,v25
	simde_mm_store_si128((simde__m128i*)v22.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v25.u32), simde_mm_load_si128((simde__m128i*)v24.u32)));
	// vmrghw v21,v22,v23
	simde_mm_store_si128((simde__m128i*)v21.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v23.u32), simde_mm_load_si128((simde__m128i*)v22.u32)));
	// stvx128 v21,r31,r9
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// stw r8,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r8.u32);
	// lwz r7,0(r26)
	ctx.r7.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r11,32(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f2c5dc
	if (cr6.eq) goto loc_82F2C5DC;
	// stw r27,80(r11)
	PPC_STORE_U32(r11.u32 + 80, r27.u32);
	// lvx128 v0,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lvx128 v13,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r28
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v10,v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0xFF));
	// vmulfp128 v9,v0,v10
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v10.f32)));
	// vspltw v8,v11,1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0xAA));
	// vspltw v7,v11,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0x55));
	// vmaddfp v6,v13,v8,v9
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp v5,v12,v7,v6
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// stvx128 v5,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lfs f1,16(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
loc_82F2C5D8:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_82F2C5DC:
	// lfs f1,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82F2C5E8"))) PPC_WEAK_FUNC(sub_82F2C5E8);
PPC_FUNC_IMPL(__imp__sub_82F2C5E8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r13)
	r31.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r30,24
	r30.s64 = 24;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwzx r11,r30,r31
	r11.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bge cr6,0x82f2c63c
	if (!cr6.lt) goto loc_82F2C63C;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// addi r4,r8,-156
	ctx.r4.s64 = ctx.r8.s64 + -156;
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// mftb r4
	ctx.r4.u64 = __rdtsc();
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
loc_82F2C63C:
	// stw r5,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r5.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r7,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r7.u32);
	// addi r11,r6,20
	r11.s64 = ctx.r6.s64 + 20;
	// bne cr6,0x82f2c658
	if (!cr6.eq) goto loc_82F2C658;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82F2C658:
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r11.u32);
	// lbz r11,32(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f2c680
	if (cr6.eq) goto loc_82F2C680;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// addi r11,r6,16
	r11.s64 = ctx.r6.s64 + 16;
	// bne cr6,0x82f2c678
	if (!cr6.eq) goto loc_82F2C678;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82F2C678:
	// stw r11,52(r9)
	PPC_STORE_U32(ctx.r9.u32 + 52, r11.u32);
	// b 0x82f2c684
	goto loc_82F2C684;
loc_82F2C680:
	// stw r10,52(r9)
	PPC_STORE_U32(ctx.r9.u32 + 52, ctx.r10.u32);
loc_82F2C684:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lvx128 v0,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r5,16
	ctx.r7.s64 = ctx.r5.s64 + 16;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// stw r4,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// lwz r11,84(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 84);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r11,r30,r31
	r11.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82f2c6f8
	if (!cr6.lt) goto loc_82F2C6F8;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r9,-14788
	ctx.r8.s64 = ctx.r9.s64 + -14788;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 + 12;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
loc_82F2C6F8:
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

__attribute__((alias("__imp__sub_82F2C710"))) PPC_WEAK_FUNC(sub_82F2C710);
PPC_FUNC_IMPL(__imp__sub_82F2C710) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r13)
	r31.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r30,24
	r30.s64 = 24;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwzx r11,r30,r31
	r11.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// bge cr6,0x82f2c75c
	if (!cr6.lt) goto loc_82F2C75C;
	// lis r4,-32237
	ctx.r4.s64 = -2112684032;
	// addi r4,r4,-140
	ctx.r4.s64 = ctx.r4.s64 + -140;
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// mftb r4
	ctx.r4.u64 = __rdtsc();
	// addi r29,r10,12
	r29.s64 = ctx.r10.s64 + 12;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
loc_82F2C75C:
	// stw r5,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r5.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// stw r8,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r8.u32);
	// addi r11,r6,20
	r11.s64 = ctx.r6.s64 + 20;
	// bne cr6,0x82f2c774
	if (!cr6.eq) goto loc_82F2C774;
	// li r11,0
	r11.s64 = 0;
loc_82F2C774:
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r11.u32);
	// lbz r11,32(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f2c790
	if (cr6.eq) goto loc_82F2C790;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// addi r11,r6,16
	r11.s64 = ctx.r6.s64 + 16;
	// bne cr6,0x82f2c794
	if (!cr6.eq) goto loc_82F2C794;
loc_82F2C790:
	// li r11,0
	r11.s64 = 0;
loc_82F2C794:
	// stw r11,52(r9)
	PPC_STORE_U32(ctx.r9.u32 + 52, r11.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lvx128 v0,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r5,16
	ctx.r8.s64 = ctx.r5.s64 + 16;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// stw r4,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,84(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r11,r30,r31
	r11.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82f2c80c
	if (!cr6.lt) goto loc_82F2C80C;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r9,-14788
	ctx.r8.s64 = ctx.r9.s64 + -14788;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 + 12;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
loc_82F2C80C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82F2C818"))) PPC_WEAK_FUNC(sub_82F2C818);
PPC_FUNC_IMPL(__imp__sub_82F2C818) {
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
	// lwz r26,0(r13)
	r26.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r22,24
	r22.s64 = 24;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lwzx r11,r26,r22
	r11.u64 = PPC_LOAD_U32(r26.u32 + r22.u32);
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82f2c874
	if (!cr6.lt) goto loc_82F2C874;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r8,r9,-124
	ctx.r8.s64 = ctx.r9.s64 + -124;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 + 12;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
loc_82F2C874:
	// li r9,16
	ctx.r9.s64 = 16;
	// lvx128 v13,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addic. r10,r31,-2
	xer.ca = r31.u32 > 1;
	ctx.r10.s64 = r31.s64 + -2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r30,48
	r11.s64 = r30.s64 + 48;
	// lvx128 v12,r30,r9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vminfp v0,v13,v12
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vmaxfp v13,v13,v12
	simde_mm_store_ps(ctx.v13.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)));
	// stvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blt 0x82f2c8d8
	if (cr0.lt) goto loc_82F2C8D8;
loc_82F2C8A4:
	// lvx128 v12,r11,r9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// vminfp v11,v0,v12
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)));
	// lvx128 v10,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaxfp v9,v13,v12
	simde_mm_store_ps(ctx.v9.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)));
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// vminfp v0,v11,v10
	simde_mm_store_ps(ctx.v0.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v10.f32)));
	// vmaxfp v13,v9,v10
	simde_mm_store_ps(ctx.v13.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v10.f32)));
	// bge 0x82f2c8a4
	if (!cr0.lt) goto loc_82F2C8A4;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82F2C8D8:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r25,20
	r25.s64 = 20;
	// addi r9,r3,16
	ctx.r9.s64 = ctx.r3.s64 + 16;
	// rlwinm r4,r9,0,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// lwzx r3,r26,r25
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + r25.u32);
	// lwz r28,32(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r8,44(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// add r11,r28,r4
	r11.u64 = r28.u64 + ctx.r4.u64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bgt cr6,0x82f2c918
	if (cr6.gt) goto loc_82F2C918;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// b 0x82f2c92c
	goto loc_82F2C92C;
loc_82F2C918:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_82F2C92C:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x82f2c97c
	if (cr0.lt) goto loc_82F2C97C;
loc_82F2C950:
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82f2c710
	sub_82F2C710(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,48
	r30.s64 = r30.s64 + 48;
	// addi r29,r29,96
	r29.s64 = r29.s64 + 96;
	// bge 0x82f2c950
	if (!cr0.lt) goto loc_82F2C950;
loc_82F2C97C:
	// lwzx r3,r26,r25
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + r25.u32);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r28,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r28.u32);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bne cr6,0x82f2c9a4
	if (!cr6.eq) goto loc_82F2C9A4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F2C9A4:
	// lwzx r10,r26,r22
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + r22.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82f2c9d4
	if (!cr6.lt) goto loc_82F2C9D4;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r9,-14788
	ctx.r8.s64 = ctx.r9.s64 + -14788;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_82F2C9D4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_82F2C9E0"))) PPC_WEAK_FUNC(sub_82F2C9E0);
PPC_FUNC_IMPL(__imp__sub_82F2C9E0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r13)
	r31.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r30,24
	r30.s64 = 24;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwzx r11,r30,r31
	r11.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// bge cr6,0x82f2ca2c
	if (!cr6.lt) goto loc_82F2CA2C;
	// lis r6,-32237
	ctx.r6.s64 = -2112684032;
	// addi r4,r6,-108
	ctx.r4.s64 = ctx.r6.s64 + -108;
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// mftb r4
	ctx.r4.u64 = __rdtsc();
	// addi r6,r10,12
	ctx.r6.s64 = ctx.r10.s64 + 12;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// stw r6,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r6.u32);
loc_82F2CA2C:
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// addi r11,r7,20
	r11.s64 = ctx.r7.s64 + 20;
	// bne cr6,0x82f2ca44
	if (!cr6.eq) goto loc_82F2CA44;
	// li r11,0
	r11.s64 = 0;
loc_82F2CA44:
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lbz r11,32(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f2ca60
	if (cr6.eq) goto loc_82F2CA60;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// addi r11,r7,16
	r11.s64 = ctx.r7.s64 + 16;
	// bne cr6,0x82f2ca64
	if (!cr6.eq) goto loc_82F2CA64;
loc_82F2CA60:
	// li r11,0
	r11.s64 = 0;
loc_82F2CA64:
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, r11.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r9,r5,16
	ctx.r9.s64 = ctx.r5.s64 + 16;
	// li r7,48
	ctx.r7.s64 = 48;
	// lvx128 v0,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// lwz r11,84(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r11,r30,r31
	r11.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82f2cadc
	if (!cr6.lt) goto loc_82F2CADC;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r9,-14788
	ctx.r8.s64 = ctx.r9.s64 + -14788;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 + 12;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
loc_82F2CADC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82F2CAE8"))) PPC_WEAK_FUNC(sub_82F2CAE8);
PPC_FUNC_IMPL(__imp__sub_82F2CAE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2CAF8"))) PPC_WEAK_FUNC(sub_82F2CAF8);
PPC_FUNC_IMPL(__imp__sub_82F2CAF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2CB00"))) PPC_WEAK_FUNC(sub_82F2CB00);
PPC_FUNC_IMPL(__imp__sub_82F2CB00) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2CB08"))) PPC_WEAK_FUNC(sub_82F2CB08);
PPC_FUNC_IMPL(__imp__sub_82F2CB08) {
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
	// li r7,1
	ctx.r7.s64 = 1;
	// li r29,0
	r29.s64 = 0;
	// addi r10,r31,3760
	ctx.r10.s64 = r31.s64 + 3760;
	// mr r11,r29
	r11.u64 = r29.u64;
	// stw r7,400(r31)
	PPC_STORE_U32(r31.u32 + 400, ctx.r7.u32);
	// li r30,100
	r30.s64 = 100;
	// stw r7,3744(r31)
	PPC_STORE_U32(r31.u32 + 3744, ctx.r7.u32);
loc_82F2CB34:
	// li r8,32
	ctx.r8.s64 = 32;
loc_82F2CB38:
	// lwz r9,7728(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 7728);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82f2cb70
	if (cr6.eq) goto loc_82F2CB70;
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
	// stb r30,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, r30.u8);
	// lwz r9,7732(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 7732);
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + r11.u64;
	// stb r30,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, r30.u8);
	// lwz r9,7736(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 7736);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + r11.u64;
	// stb r30,2(r5)
	PPC_STORE_U8(ctx.r5.u32 + 2, r30.u8);
	// lwz r9,7740(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 7740);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + r11.u64;
	// stb r30,2(r4)
	PPC_STORE_U8(ctx.r4.u32 + 2, r30.u8);
loc_82F2CB70:
	// stb r29,-3344(r10)
	PPC_STORE_U8(ctx.r10.u32 + -3344, r29.u8);
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r29.u8);
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// stb r29,-2320(r10)
	PPC_STORE_U8(ctx.r10.u32 + -2320, r29.u8);
	// stb r29,1024(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1024, r29.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne 0x82f2cb38
	if (!cr0.eq) goto loc_82F2CB38;
	// cmpwi cr6,r11,3072
	cr6.compare<int32_t>(r11.s32, 3072, xer);
	// blt cr6,0x82f2cb34
	if (cr6.lt) goto loc_82F2CB34;
	// lis r11,-32013
	r11.s64 = -2098003968;
	// lis r10,-32013
	ctx.r10.s64 = -2098003968;
	// lis r9,-32013
	ctx.r9.s64 = -2098003968;
	// lis r8,-32013
	ctx.r8.s64 = -2098003968;
	// addi r6,r11,-6576
	ctx.r6.s64 = r11.s64 + -6576;
	// addi r3,r8,-6584
	ctx.r3.s64 = ctx.r8.s64 + -6584;
	// addi r5,r10,-6592
	ctx.r5.s64 = ctx.r10.s64 + -6592;
	// stw r6,2464(r31)
	PPC_STORE_U32(r31.u32 + 2464, ctx.r6.u32);
	// addi r4,r9,-6600
	ctx.r4.s64 = ctx.r9.s64 + -6600;
	// stw r3,2476(r31)
	PPC_STORE_U32(r31.u32 + 2476, ctx.r3.u32);
	// stw r5,2468(r31)
	PPC_STORE_U32(r31.u32 + 2468, ctx.r5.u32);
	// lis r11,-32013
	r11.s64 = -2098003968;
	// stw r4,2472(r31)
	PPC_STORE_U32(r31.u32 + 2472, ctx.r4.u32);
	// lis r10,-32013
	ctx.r10.s64 = -2098003968;
	// lis r9,-32013
	ctx.r9.s64 = -2098003968;
	// stb r29,2480(r31)
	PPC_STORE_U8(r31.u32 + 2480, r29.u8);
	// stb r7,2481(r31)
	PPC_STORE_U8(r31.u32 + 2481, ctx.r7.u8);
	// addi r8,r11,-13592
	ctx.r8.s64 = r11.s64 + -13592;
	// addi r7,r10,-13576
	ctx.r7.s64 = ctx.r10.s64 + -13576;
	// stw r29,5816(r31)
	PPC_STORE_U32(r31.u32 + 5816, r29.u32);
	// addi r6,r9,-13568
	ctx.r6.s64 = ctx.r9.s64 + -13568;
	// stw r8,5808(r31)
	PPC_STORE_U32(r31.u32 + 5808, ctx.r8.u32);
	// stw r7,5812(r31)
	PPC_STORE_U32(r31.u32 + 5812, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,5820(r31)
	PPC_STORE_U32(r31.u32 + 5820, r29.u32);
	// stw r29,5824(r31)
	PPC_STORE_U32(r31.u32 + 5824, r29.u32);
	// stw r29,5828(r31)
	PPC_STORE_U32(r31.u32 + 5828, r29.u32);
	// stw r29,5832(r31)
	PPC_STORE_U32(r31.u32 + 5832, r29.u32);
	// stw r29,5836(r31)
	PPC_STORE_U32(r31.u32 + 5836, r29.u32);
	// stw r29,5848(r31)
	PPC_STORE_U32(r31.u32 + 5848, r29.u32);
	// stw r29,5840(r31)
	PPC_STORE_U32(r31.u32 + 5840, r29.u32);
	// stw r29,5844(r31)
	PPC_STORE_U32(r31.u32 + 5844, r29.u32);
	// stw r6,5852(r31)
	PPC_STORE_U32(r31.u32 + 5852, ctx.r6.u32);
	// stw r29,5872(r31)
	PPC_STORE_U32(r31.u32 + 5872, r29.u32);
	// bl 0x82f52088
	sub_82F52088(ctx, base);
	// stb r29,7712(r31)
	PPC_STORE_U8(r31.u32 + 7712, r29.u8);
	// lwz r5,7736(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 7736);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82f2cc68
	if (cr6.eq) goto loc_82F2CC68;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82F2CC38:
	// li r10,32
	ctx.r10.s64 = 32;
loc_82F2CC3C:
	// lwz r9,7736(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 7736);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
	// stb r30,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, r30.u8);
	// lwz r9,7740(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 7740);
	// add r8,r11,r9
	ctx.r8.u64 = r11.u64 + ctx.r9.u64;
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// stb r30,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, r30.u8);
	// bne 0x82f2cc3c
	if (!cr0.eq) goto loc_82F2CC3C;
	// cmpwi cr6,r11,3072
	cr6.compare<int32_t>(r11.s32, 3072, xer);
	// blt cr6,0x82f2cc38
	if (cr6.lt) goto loc_82F2CC38;
loc_82F2CC68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82F2CC70"))) PPC_WEAK_FUNC(sub_82F2CC70);
PPC_FUNC_IMPL(__imp__sub_82F2CC70) {
	PPC_FUNC_PROLOGUE();
	// stb r4,7715(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7715, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2CC78"))) PPC_WEAK_FUNC(sub_82F2CC78);
PPC_FUNC_IMPL(__imp__sub_82F2CC78) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lhz r11,4(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f2ccac
	if (cr6.eq) goto loc_82F2CCAC;
	// lhz r11,6(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 6);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// sth r10,6(r29)
	PPC_STORE_U16(r29.u32 + 6, ctx.r10.u16);
loc_82F2CCAC:
	// rlwinm r11,r27,3,0,28
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r30,r31
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lhz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f2ccf8
	if (cr6.eq) goto loc_82F2CCF8;
	// lhz r11,6(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r9.u16);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82f2ccf8
	if (!cr6.eq) goto loc_82F2CCF8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F2CCF8:
	// stwx r29,r30,r31
	PPC_STORE_U32(r30.u32 + r31.u32, r29.u32);
	// lhz r11,4(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f2cd14
	if (cr6.eq) goto loc_82F2CD14;
	// lhz r11,6(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 6);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// sth r10,6(r29)
	PPC_STORE_U16(r29.u32 + 6, ctx.r10.u16);
loc_82F2CD14:
	// rlwinm r11,r28,3,0,28
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r30,r31
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lhz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f2cd60
	if (cr6.eq) goto loc_82F2CD60;
	// lhz r11,6(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r9.u16);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82f2cd60
	if (!cr6.eq) goto loc_82F2CD60;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F2CD60:
	// stwx r29,r30,r31
	PPC_STORE_U32(r30.u32 + r31.u32, r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82F2CD70"))) PPC_WEAK_FUNC(sub_82F2CD70);
PPC_FUNC_IMPL(__imp__sub_82F2CD70) {
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
	// rlwinm r11,r5,5,0,26
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r10,r5,3
	ctx.r10.s64 = ctx.r5.s64 + 3;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r30,r11,12
	r30.s64 = r11.s64 + 12;
	// add r29,r10,r3
	r29.u64 = ctx.r10.u64 + ctx.r3.u64;
	// li r28,8
	r28.s64 = 8;
loc_82F2CD9C:
	// lhz r11,4(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f2cdb4
	if (cr6.eq) goto loc_82F2CDB4;
	// lhz r11,6(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// sth r10,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r10.u16);
loc_82F2CDB4:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f2cdf0
	if (cr6.eq) goto loc_82F2CDF0;
	// lhz r11,6(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r9.u16);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82f2cdf0
	if (!cr6.eq) goto loc_82F2CDF0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F2CDF0:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// lhz r11,4(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f2ce0c
	if (cr6.eq) goto loc_82F2CE0C;
	// lhz r11,6(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// sth r10,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r10.u16);
loc_82F2CE0C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f2ce48
	if (cr6.eq) goto loc_82F2CE48;
	// lhz r11,6(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r9.u16);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82f2ce48
	if (!cr6.eq) goto loc_82F2CE48;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F2CE48:
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r29,r29,32
	r29.s64 = r29.s64 + 32;
	// bne 0x82f2cd9c
	if (!cr0.eq) goto loc_82F2CD9C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82F2CE68"))) PPC_WEAK_FUNC(sub_82F2CE68);
PPC_FUNC_IMPL(__imp__sub_82F2CE68) {
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
	// lwz r4,7728(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 7728);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82f2cecc
	if (cr6.eq) goto loc_82F2CECC;
	// lwz r29,0(r13)
	r29.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r30,20
	r30.s64 = 20;
	// lwzx r3,r30,r29
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r29.u32);
	// bl 0x82ea8cb8
	sub_82EA8CB8(ctx, base);
	// lwz r4,7732(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 7732);
	// lwzx r3,r30,r29
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r29.u32);
	// bl 0x82ea8cb8
	sub_82EA8CB8(ctx, base);
	// lwz r4,7736(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 7736);
	// lwzx r3,r30,r29
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r29.u32);
	// bl 0x82ea8cb8
	sub_82EA8CB8(ctx, base);
	// lwz r4,7740(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 7740);
	// lwzx r3,r30,r29
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r29.u32);
	// bl 0x82ea8cb8
	sub_82EA8CB8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,7728(r31)
	PPC_STORE_U32(r31.u32 + 7728, r11.u32);
	// stw r11,7732(r31)
	PPC_STORE_U32(r31.u32 + 7732, r11.u32);
	// stw r11,7736(r31)
	PPC_STORE_U32(r31.u32 + 7736, r11.u32);
	// stw r11,7740(r31)
	PPC_STORE_U32(r31.u32 + 7740, r11.u32);
loc_82F2CECC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82F2CED8"))) PPC_WEAK_FUNC(sub_82F2CED8);
PPC_FUNC_IMPL(__imp__sub_82F2CED8) {
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
	// stwu r1,-1280(r1)
	ea = -1280 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r30,1364(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1364);
	// li r11,1
	r11.s64 = 1;
	// mr r15,r5
	r15.u64 = ctx.r5.u64;
	// mr r16,r9
	r16.u64 = ctx.r9.u64;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// stw r15,1316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1316, r15.u32);
	// stb r11,7712(r26)
	PPC_STORE_U8(r26.u32 + 7712, r11.u8);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r10,7720(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 7720);
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r18,r7
	r18.u64 = ctx.r7.u64;
	// stw r16,1348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1348, r16.u32);
	// mr r17,r8
	r17.u64 = ctx.r8.u64;
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82f2cfb8
	if (!cr6.gt) goto loc_82F2CFB8;
	// li r28,0
	r28.s64 = 0;
loc_82F2CF2C:
	// lwz r11,7716(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 7716);
	// add r31,r11,r28
	r31.u64 = r11.u64 + r28.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r11,r23
	cr6.compare<int32_t>(r11.s32, r23.s32, xer);
	// bne cr6,0x82f2cf6c
	if (!cr6.eq) goto loc_82F2CF6C;
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// mr r9,r16
	ctx.r9.u64 = r16.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r8,r17
	ctx.r8.u64 = r17.u64;
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82f2ced8
	sub_82F2CED8(ctx, base);
loc_82F2CF6C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r11,r18
	cr6.compare<int32_t>(r11.s32, r18.s32, xer);
	// bne cr6,0x82f2cfa4
	if (!cr6.eq) goto loc_82F2CFA4;
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// mr r9,r16
	ctx.r9.u64 = r16.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r8,r17
	ctx.r8.u64 = r17.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82f2ced8
	sub_82F2CED8(ctx, base);
loc_82F2CFA4:
	// lwz r11,7720(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 7720);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x82f2cf2c
	if (cr6.lt) goto loc_82F2CF2C;
loc_82F2CFB8:
	// mr r11,r23
	r11.u64 = r23.u64;
	// mr r20,r18
	r20.u64 = r18.u64;
	// addi r9,r23,1
	ctx.r9.s64 = r23.s64 + 1;
	// addi r19,r18,1
	r19.s64 = r18.s64 + 1;
	// mr r27,r30
	r27.u64 = r30.u64;
	// cmpwi cr6,r23,-1
	cr6.compare<int32_t>(r23.s32, -1, xer);
	// bne cr6,0x82f2cfe0
	if (!cr6.eq) goto loc_82F2CFE0;
	// li r11,1
	r11.s64 = 1;
	// li r9,32
	ctx.r9.s64 = 32;
	// addi r27,r30,1
	r27.s64 = r30.s64 + 1;
loc_82F2CFE0:
	// cmpwi cr6,r18,-1
	cr6.compare<int32_t>(r18.s32, -1, xer);
	// bne cr6,0x82f2cff4
	if (!cr6.eq) goto loc_82F2CFF4;
	// li r20,1
	r20.s64 = 1;
	// li r19,32
	r19.s64 = 32;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
loc_82F2CFF4:
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bge cr6,0x82f2d0e8
	if (!cr6.lt) goto loc_82F2D0E8;
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r22,r11,r9
	r22.s64 = ctx.r9.s64 - r11.s64;
	// add r11,r10,r20
	r11.u64 = ctx.r10.u64 + r20.u64;
	// add r29,r10,r29
	r29.u64 = ctx.r10.u64 + r29.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// addi r24,r11,1
	r24.s64 = r11.s64 + 1;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r21,r11,-88
	r21.s64 = r11.s64 + -88;
loc_82F2D024:
	// mr r30,r20
	r30.u64 = r20.u64;
	// cmpw cr6,r20,r19
	cr6.compare<int32_t>(r20.s32, r19.s32, xer);
	// bge cr6,0x82f2d0d8
	if (!cr6.lt) goto loc_82F2D0D8;
	// clrlwi r28,r15,24
	r28.u64 = r15.u32 & 0xFF;
	// mr r31,r24
	r31.u64 = r24.u64;
loc_82F2D038:
	// stbx r28,r29,r30
	PPC_STORE_U8(r29.u32 + r30.u32, r28.u8);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82f2d0c8
	if (cr6.eq) goto loc_82F2D0C8;
	// lbz r11,7715(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 7715);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f2d0bc
	if (cr6.eq) goto loc_82F2D0BC;
	// lbz r11,1(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// cmpw cr6,r27,r10
	cr6.compare<int32_t>(r27.s32, ctx.r10.s32, xer);
	// ble cr6,0x82f2d0bc
	if (!cr6.gt) goto loc_82F2D0BC;
	// lbz r11,-1(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + -1);
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// bl 0x82f25fd8
	sub_82F25FD8(ctx, base);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// extsb r3,r10
	ctx.r3.s64 = ctx.r10.s8;
	// bl 0x82f25fd8
	sub_82F25FD8(ctx, base);
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82f25fd8
	sub_82F25FD8(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82f25fd8
	sub_82F25FD8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r9,r15
	ctx.r9.u64 = r15.u64;
	// mr r8,r16
	ctx.r8.u64 = r16.u64;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// li r4,1000
	ctx.r4.s64 = 1000;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eb2670
	sub_82EB2670(ctx, base);
	// lwz r15,1316(r1)
	r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r16,1348(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1348);
loc_82F2D0BC:
	// stb r27,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r27.u8);
	// stb r17,-1(r31)
	PPC_STORE_U8(r31.u32 + -1, r17.u8);
	// stb r16,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r16.u8);
loc_82F2D0C8:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,3
	r31.s64 = r31.s64 + 3;
	// cmpw cr6,r30,r19
	cr6.compare<int32_t>(r30.s32, r19.s32, xer);
	// blt cr6,0x82f2d038
	if (cr6.lt) goto loc_82F2D038;
loc_82F2D0D8:
	// addic. r22,r22,-1
	xer.ca = r22.u32 > 0;
	r22.s64 = r22.s64 + -1;
	cr0.compare<int32_t>(r22.s32, 0, xer);
	// addi r24,r24,96
	r24.s64 = r24.s64 + 96;
	// addi r29,r29,32
	r29.s64 = r29.s64 + 32;
	// bne 0x82f2d024
	if (!cr0.eq) goto loc_82F2D024;
loc_82F2D0E8:
	// addi r1,r1,1280
	ctx.r1.s64 = ctx.r1.s64 + 1280;
	// b 0x831b0b40
	return;
}

__attribute__((alias("__imp__sub_82F2D0F0"))) PPC_WEAK_FUNC(sub_82F2D0F0);
PPC_FUNC_IMPL(__imp__sub_82F2D0F0) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r10,r5,68
	ctx.r10.s64 = ctx.r5.s64 + 68;
	// addi r11,r29,68
	r11.s64 = r29.s64 + 68;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// li r28,0
	r28.s64 = 0;
	// lwzx r8,r11,r31
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// lwzx r7,r9,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + r31.u32);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stwx r6,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, ctx.r6.u32);
	// lwz r5,7720(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 7720);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x82f2d174
	if (!cr6.gt) goto loc_82F2D174;
	// li r30,0
	r30.s64 = 0;
loc_82F2D13C:
	// lwz r11,7716(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 7716);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpw cr6,r5,r29
	cr6.compare<int32_t>(ctx.r5.s32, r29.s32, xer);
	// bne cr6,0x82f2d160
	if (!cr6.eq) goto loc_82F2D160;
	// addi r6,r27,1
	ctx.r6.s64 = r27.s64 + 1;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f2d0f0
	sub_82F2D0F0(ctx, base);
loc_82F2D160:
	// lwz r11,7720(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 7720);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x82f2d13c
	if (cr6.lt) goto loc_82F2D13C;
loc_82F2D174:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82F2D180"))) PPC_WEAK_FUNC(sub_82F2D180);
PPC_FUNC_IMPL(__imp__sub_82F2D180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mflr r12
	// bl 0x831b0b2c
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	f0.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stfs f0,7748(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 7748, temp.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f13,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r3,7264
	r11.s64 = ctx.r3.s64 + 7264;
	// stfs f13,7744(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 7744, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lbz r8,27(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 27);
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stb r8,7322(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7322, ctx.r8.u8);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f12
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// stfs f10,7264(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 7264, temp.u32);
	// lfs f8,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f9,f11
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// stfs f8,7268(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 7268, temp.u32);
	// lfs f6,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,7276(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 7276, temp.u32);
	// lfs f0,-22120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -22120);
	f0.f64 = double(temp.f32);
	// lbz r7,25(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 25);
	// lfs f5,13456(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 13456);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f0,f7,f0
	f0.f64 = double(float(ctx.f7.f64 * f0.f64));
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f2d1f4
	if (cr6.eq) goto loc_82F2D1F4;
	// fmuls f13,f0,f5
	ctx.f13.f64 = double(float(f0.f64 * ctx.f5.f64));
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
loc_82F2D1F4:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lbz r9,26(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 26);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lfs f6,-24780(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24780);
	ctx.f6.f64 = double(temp.f32);
	// beq cr6,0x82f2d218
	if (cr6.eq) goto loc_82F2D218;
	// fmuls f0,f0,f6
	f0.f64 = double(float(f0.f64 * ctx.f6.f64));
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
loc_82F2D218:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f0,-14888(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -14888);
	f0.f64 = double(temp.f32);
	// li r31,0
	r31.s64 = 0;
	// stfs f0,48(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 48, temp.u32);
	// addi r5,r3,7584
	ctx.r5.s64 = ctx.r3.s64 + 7584;
	// lfd f0,160(r9)
	f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 160);
	// stw r31,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r31.u32);
	// fabs f11,f0
	ctx.f11.u64 = f0.u64 & ~0x8000000000000000;
	// lhz r30,16(r4)
	r30.u64 = PPC_LOAD_U16(ctx.r4.u32 + 16);
	// lfs f0,2244(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2244);
	f0.f64 = double(temp.f32);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lfs f13,152(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// lfs f12,148(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// li r8,8
	ctx.r8.s64 = 8;
	// stfs f13,20(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// sth r30,56(r11)
	PPC_STORE_U16(r11.u32 + 56, r30.u16);
	// stfs f13,24(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// stfs f12,36(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 36, temp.u32);
	// stfs f12,40(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 40, temp.u32);
	// stfs f11,44(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 44, temp.u32);
	// stfs f0,28(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 28, temp.u32);
	// stfs f0,32(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 52, temp.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_82F2D28C:
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// std r8,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x82f2d28c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82F2D28C;
	// addi r7,r3,7328
	ctx.r7.s64 = ctx.r3.s64 + 7328;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// li r8,8
	ctx.r8.s64 = 8;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_82F2D2B4:
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// std r8,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x82f2d2b4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82F2D2B4;
	// addi r8,r3,7392
	ctx.r8.s64 = ctx.r3.s64 + 7392;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
loc_82F2D2DC:
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// std r6,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r6.u64);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x82f2d2dc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82F2D2DC;
	// addi r9,r3,7456
	ctx.r9.s64 = ctx.r3.s64 + 7456;
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
loc_82F2D300:
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// std r6,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r6.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82f2d300
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82F2D300;
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stfs f0,12(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f12,4(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,8(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lbz r5,24(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 24);
	// lfs f13,12080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12080);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-6772(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -6772);
	f0.f64 = double(temp.f32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82f2d3c8
	if (cr6.eq) goto loc_82F2D3C8;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r29,-32254
	r29.s64 = -2113798144;
	// lis r6,-32237
	ctx.r6.s64 = -2112684032;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r30,-32237
	r30.s64 = -2112684032;
	// lfs f11,13488(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 13488);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32237
	r11.s64 = -2112684032;
	// lfs f7,4064(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4064);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,20(r7)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r7.u32 + 20, temp.u32);
	// lfs f9,144(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 144);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,25808(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 25808);
	ctx.f8.f64 = double(temp.f32);
	// lfs f12,136(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,24(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 24, temp.u32);
	// lfs f10,140(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 140);
	ctx.f10.f64 = double(temp.f32);
	// stfs f8,48(r7)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r7.u32 + 48, temp.u32);
	// stfs f10,40(r7)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r7.u32 + 40, temp.u32);
	// stfs f11,36(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 36, temp.u32);
	// stfs f9,44(r7)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r7.u32 + 44, temp.u32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f10,f0,f11
	ctx.f10.f64 = double(float(f0.f64 / ctx.f11.f64));
	// stfs f10,28(r7)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r7.u32 + 28, temp.u32);
	// lfs f9,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fdivs f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 / ctx.f9.f64));
	// stfs f8,32(r7)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r7.u32 + 32, temp.u32);
	// lfs f7,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fdivs f4,f12,f7
	ctx.f4.f64 = double(float(ctx.f12.f64 / ctx.f7.f64));
	// fmuls f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f5.f64));
	// stfs f3,52(r7)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r7.u32 + 52, temp.u32);
	// lhz r6,18(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 18);
	// sth r6,56(r7)
	PPC_STORE_U16(ctx.r7.u32 + 56, ctx.r6.u16);
	// stw r10,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r10.u32);
loc_82F2D3C8:
	// lbz r11,24(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f2d450
	if (cr6.eq) goto loc_82F2D450;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lis r5,-32237
	ctx.r5.s64 = -2112684032;
	// lis r30,-32237
	r30.s64 = -2112684032;
	// lfs f11,-24784(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24784);
	ctx.f11.f64 = double(temp.f32);
	// lis r29,-32255
	r29.s64 = -2113863680;
	// lfs f12,132(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,-18688(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -18688);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,128(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 128);
	ctx.f9.f64 = double(temp.f32);
	// stfs f10,36(r8)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r8.u32 + 36, temp.u32);
	// stfs f11,20(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 20, temp.u32);
	// stfs f12,24(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 24, temp.u32);
	// stfs f9,40(r8)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r8.u32 + 40, temp.u32);
	// lfs f8,124(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 124);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,44(r8)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r8.u32 + 44, temp.u32);
	// lfs f7,-24788(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + -24788);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,48(r8)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + 48, temp.u32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f10,f0,f11
	ctx.f10.f64 = double(float(f0.f64 / ctx.f11.f64));
	// stfs f10,28(r8)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r8.u32 + 28, temp.u32);
	// lfs f9,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fdivs f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 / ctx.f9.f64));
	// stfs f8,32(r8)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r8.u32 + 32, temp.u32);
	// lfs f7,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fdivs f5,f12,f7
	ctx.f5.f64 = double(float(ctx.f12.f64 / ctx.f7.f64));
	// fmuls f4,f5,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// stfs f4,52(r8)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r8.u32 + 52, temp.u32);
	// lhz r11,20(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 20);
	// stw r10,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r10.u32);
	// sth r11,56(r8)
	PPC_STORE_U16(ctx.r8.u32 + 56, r11.u16);
loc_82F2D450:
	// lfs f12,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,0(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lbz r11,24(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f2d4e0
	if (cr6.eq) goto loc_82F2D4E0;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r6,-32237
	ctx.r6.s64 = -2112684032;
	// lis r5,-32237
	ctx.r5.s64 = -2112684032;
	// lis r30,-32237
	r30.s64 = -2112684032;
	// lfs f11,13596(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 13596);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,120(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,12388(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12388);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,116(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,112(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,108(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 108);
	ctx.f7.f64 = double(temp.f32);
	// stfs f10,36(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 36, temp.u32);
	// stfs f8,44(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 44, temp.u32);
	// stfs f11,20(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// stfs f12,24(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// stfs f9,40(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 40, temp.u32);
	// stfs f7,48(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 48, temp.u32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f10,f0,f11
	ctx.f10.f64 = double(float(f0.f64 / ctx.f11.f64));
	// stfs f10,28(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// lfs f9,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fdivs f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 / ctx.f9.f64));
	// stfs f8,32(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// lfs f7,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fdivs f5,f12,f7
	ctx.f5.f64 = double(float(ctx.f12.f64 / ctx.f7.f64));
	// fmuls f4,f5,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// stfs f4,52(r9)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r9.u32 + 52, temp.u32);
	// lhz r11,22(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 22);
	// stw r10,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r10.u32);
	// sth r11,56(r9)
	PPC_STORE_U16(ctx.r9.u32 + 56, r11.u16);
loc_82F2D4E0:
	// addi r11,r3,7520
	r11.s64 = ctx.r3.s64 + 7520;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_82F2D4F0:
	// ld r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// std r7,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r7.u64);
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// bdnz 0x82f2d4f0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82F2D4F0;
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// addi r9,r3,7088
	ctx.r9.s64 = ctx.r3.s64 + 7088;
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// li r11,100
	r11.s64 = 100;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82F2D520:
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x82f2d520
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82F2D520;
	// li r11,2
	r11.s64 = 2;
	// stb r31,7099(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7099, r31.u8);
	// li r9,3
	ctx.r9.s64 = 3;
	// stb r31,7100(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7100, r31.u8);
	// li r7,4
	ctx.r7.s64 = 4;
	// stb r11,7107(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7107, r11.u8);
	// li r8,5
	ctx.r8.s64 = 5;
	// stb r10,7101(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7101, ctx.r10.u8);
	// stb r9,7102(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7102, ctx.r9.u8);
	// stb r7,7103(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7103, ctx.r7.u8);
	// stb r9,7104(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7104, ctx.r9.u8);
	// stb r8,7106(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7106, ctx.r8.u8);
	// stb r31,7109(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7109, r31.u8);
	// stb r31,7110(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7110, r31.u8);
	// stb r11,7117(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7117, r11.u8);
	// stb r10,7111(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7111, ctx.r10.u8);
	// stb r11,7112(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7112, r11.u8);
	// stb r11,7113(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7113, r11.u8);
	// stb r11,7114(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7114, r11.u8);
	// stb r11,7116(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7116, r11.u8);
	// stb r11,7179(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7179, r11.u8);
	// stb r11,7180(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7180, r11.u8);
	// stb r11,7187(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7187, r11.u8);
	// stb r10,7181(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7181, ctx.r10.u8);
	// stb r11,7182(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7182, r11.u8);
	// stb r11,7183(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7183, r11.u8);
	// stb r11,7184(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7184, r11.u8);
	// stb r11,7186(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7186, r11.u8);
	// stb r10,7119(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7119, ctx.r10.u8);
	// stb r10,7120(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7120, ctx.r10.u8);
	// stb r10,7127(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7127, ctx.r10.u8);
	// stb r10,7121(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7121, ctx.r10.u8);
	// stb r10,7122(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7122, ctx.r10.u8);
	// stb r10,7123(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7123, ctx.r10.u8);
	// stb r11,7124(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7124, r11.u8);
	// stb r10,7126(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7126, ctx.r10.u8);
	// stb r9,7129(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7129, ctx.r9.u8);
	// stb r11,7130(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7130, r11.u8);
	// stb r11,7137(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7137, r11.u8);
	// stb r10,7131(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7131, ctx.r10.u8);
	// stb r10,7132(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7132, ctx.r10.u8);
	// stb r11,7133(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7133, r11.u8);
	// stb r11,7134(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7134, r11.u8);
	// stb r11,7136(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7136, r11.u8);
	// stb r7,7139(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7139, ctx.r7.u8);
	// stb r11,7140(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7140, r11.u8);
	// stb r11,7147(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7147, r11.u8);
	// stb r10,7141(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7141, ctx.r10.u8);
	// stb r11,7142(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7142, r11.u8);
	// stb r11,7143(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7143, r11.u8);
	// stb r11,7144(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7144, r11.u8);
	// stb r11,7146(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7146, r11.u8);
	// stb r9,7149(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7149, ctx.r9.u8);
	// stb r11,7150(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7150, r11.u8);
	// stb r11,7157(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7157, r11.u8);
	// stb r11,7151(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7151, r11.u8);
	// stb r11,7152(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7152, r11.u8);
	// stb r11,7153(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7153, r11.u8);
	// stb r11,7154(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7154, r11.u8);
	// stb r11,7156(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7156, r11.u8);
	// stb r8,7169(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7169, ctx.r8.u8);
	// stb r11,7170(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7170, r11.u8);
	// stb r11,7177(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7177, r11.u8);
	// stb r10,7171(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7171, ctx.r10.u8);
	// stb r11,7172(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7172, r11.u8);
	// stb r11,7173(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7173, r11.u8);
	// stb r11,7174(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7174, r11.u8);
	// stb r11,7176(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7176, r11.u8);
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82F2D640"))) PPC_WEAK_FUNC(sub_82F2D640);
PPC_FUNC_IMPL(__imp__sub_82F2D640) {
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
	// lis r11,-32237
	r11.s64 = -2112684032;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,172
	ctx.r10.s64 = r11.s64 + 172;
	// addi r11,r30,2464
	r11.s64 = r30.s64 + 2464;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// li r10,63
	ctx.r10.s64 = 63;
	// stw r4,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r4.u32);
	// addi r11,r11,17
	r11.s64 = r11.s64 + 17;
	// sth r9,6(r30)
	PPC_STORE_U16(r30.u32 + 6, ctx.r9.u16);
	// li r31,0
	r31.s64 = 0;
loc_82F2D680:
	// stb r31,-1(r11)
	PPC_STORE_U8(r11.u32 + -1, r31.u8);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r11,r11,20
	r11.s64 = r11.s64 + 20;
	// bge 0x82f2d680
	if (!cr0.lt) goto loc_82F2D680;
	// addi r11,r30,5808
	r11.s64 = r30.s64 + 5808;
	// li r10,15
	ctx.r10.s64 = 15;
	// addi r11,r11,49
	r11.s64 = r11.s64 + 49;
loc_82F2D6A0:
	// stb r31,-1(r11)
	PPC_STORE_U8(r11.u32 + -1, r31.u8);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// stb r31,1(r11)
	PPC_STORE_U8(r11.u32 + 1, r31.u8);
	// stw r31,-25(r11)
	PPC_STORE_U32(r11.u32 + -25, r31.u32);
	// stw r31,-21(r11)
	PPC_STORE_U32(r11.u32 + -21, r31.u32);
	// stw r31,-17(r11)
	PPC_STORE_U32(r11.u32 + -17, r31.u32);
	// stw r31,-13(r11)
	PPC_STORE_U32(r11.u32 + -13, r31.u32);
	// stw r31,-9(r11)
	PPC_STORE_U32(r11.u32 + -9, r31.u32);
	// addi r11,r11,80
	r11.s64 = r11.s64 + 80;
	// bge 0x82f2d6a0
	if (!cr0.lt) goto loc_82F2D6A0;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stw r31,7716(r30)
	PPC_STORE_U32(r30.u32 + 7716, r31.u32);
	// stw r31,7720(r30)
	PPC_STORE_U32(r30.u32 + 7720, r31.u32);
	// addi r11,r30,12
	r11.s64 = r30.s64 + 12;
	// stw r10,7724(r30)
	PPC_STORE_U32(r30.u32 + 7724, ctx.r10.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r31,7728(r30)
	PPC_STORE_U32(r30.u32 + 7728, r31.u32);
	// stw r31,7732(r30)
	PPC_STORE_U32(r30.u32 + 7732, r31.u32);
	// stw r31,7736(r30)
	PPC_STORE_U32(r30.u32 + 7736, r31.u32);
	// stw r31,7740(r30)
	PPC_STORE_U32(r30.u32 + 7740, r31.u32);
	// stb r31,7712(r30)
	PPC_STORE_U8(r30.u32 + 7712, r31.u8);
	// stb r9,7715(r30)
	PPC_STORE_U8(r30.u32 + 7715, ctx.r9.u8);
	// stw r31,3744(r30)
	PPC_STORE_U32(r30.u32 + 3744, r31.u32);
	// stb r31,7714(r30)
	PPC_STORE_U8(r30.u32 + 7714, r31.u8);
loc_82F2D704:
	// li r8,8
	ctx.r8.s64 = 8;
loc_82F2D708:
	// stw r5,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r5.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82f2d72c
	if (cr6.eq) goto loc_82F2D72C;
	// lhz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f2d72c
	if (cr6.eq) goto loc_82F2D72C;
	// lhz r10,6(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 6);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// sth r6,6(r5)
	PPC_STORE_U16(ctx.r5.u32 + 6, ctx.r6.u16);
loc_82F2D72C:
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x82f2d708
	if (!cr0.eq) goto loc_82F2D708;
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x82f2d704
	if (!cr0.eq) goto loc_82F2D704;
	// addi r10,r30,272
	ctx.r10.s64 = r30.s64 + 272;
	// li r11,32
	r11.s64 = 32;
loc_82F2D748:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// bne 0x82f2d748
	if (!cr0.eq) goto loc_82F2D748;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f2cb08
	sub_82F2CB08(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r31,7713(r30)
	PPC_STORE_U8(r30.u32 + 7713, r31.u8);
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

__attribute__((alias("__imp__sub_82F2D788"))) PPC_WEAK_FUNC(sub_82F2D788);
PPC_FUNC_IMPL(__imp__sub_82F2D788) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r10,r11,172
	ctx.r10.s64 = r11.s64 + 172;
	// lwz r4,7728(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 7728);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82f2d7f8
	if (cr6.eq) goto loc_82F2D7F8;
	// lwz r31,0(r13)
	r31.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r30,20
	r30.s64 = 20;
	// lwzx r3,r30,r31
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// bl 0x82ea8cb8
	sub_82EA8CB8(ctx, base);
	// lwz r4,7732(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 7732);
	// lwzx r3,r30,r31
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// bl 0x82ea8cb8
	sub_82EA8CB8(ctx, base);
	// lwz r4,7736(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 7736);
	// lwzx r3,r30,r31
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// bl 0x82ea8cb8
	sub_82EA8CB8(ctx, base);
	// lwz r4,7740(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 7740);
	// lwzx r3,r30,r31
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// bl 0x82ea8cb8
	sub_82EA8CB8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,7728(r29)
	PPC_STORE_U32(r29.u32 + 7728, r11.u32);
	// stw r11,7732(r29)
	PPC_STORE_U32(r29.u32 + 7732, r11.u32);
	// stw r11,7736(r29)
	PPC_STORE_U32(r29.u32 + 7736, r11.u32);
	// stw r11,7740(r29)
	PPC_STORE_U32(r29.u32 + 7740, r11.u32);
loc_82F2D7F8:
	// addi r31,r29,12
	r31.s64 = r29.s64 + 12;
	// li r28,8
	r28.s64 = 8;
loc_82F2D800:
	// li r30,8
	r30.s64 = 8;
loc_82F2D804:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f2d848
	if (cr6.eq) goto loc_82F2D848;
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f2d848
	if (cr6.eq) goto loc_82F2D848;
	// lhz r11,6(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r9.u16);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82f2d848
	if (!cr6.eq) goto loc_82F2D848;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F2D848:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x82f2d804
	if (!cr0.eq) goto loc_82F2D804;
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bne 0x82f2d800
	if (!cr0.eq) goto loc_82F2D800;
	// lwz r11,7724(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 7724);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82f2d888
	if (!cr6.eq) goto loc_82F2D888;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,7716(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 7716);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82F2D888:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-22012
	ctx.r10.s64 = r11.s64 + -22012;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82F2D8A0"))) PPC_WEAK_FUNC(sub_82F2D8A0);
PPC_FUNC_IMPL(__imp__sub_82F2D8A0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// lwz r11,400(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 400);
	// li r9,5
	ctx.r9.s64 = 5;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r11,r11,2464
	r11.s64 = r11.s64 + 2464;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82F2D8E0:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x82f2d8e0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82F2D8E0;
	// li r27,0
	r27.s64 = 0;
	// lwz r10,7736(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 7736);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,3760
	ctx.r4.s64 = r31.s64 + 3760;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f2ced8
	sub_82F2CED8(ctx, base);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// lwz r10,7728(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 7728);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r5,400(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 400);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// addi r4,r31,416
	ctx.r4.s64 = r31.s64 + 416;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f2ced8
	sub_82F2CED8(ctx, base);
	// lbz r11,17(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 17);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f2d9a4
	if (cr6.eq) goto loc_82F2D9A4;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// lwz r10,7740(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 7740);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,4784
	ctx.r4.s64 = r31.s64 + 4784;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f2ced8
	sub_82F2CED8(ctx, base);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// lwz r10,7732(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 7732);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r5,400(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 400);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// addi r4,r31,1440
	ctx.r4.s64 = r31.s64 + 1440;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f2ced8
	sub_82F2CED8(ctx, base);
loc_82F2D9A4:
	// lwz r11,400(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 400);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,400(r31)
	PPC_STORE_U32(r31.u32 + 400, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82F2D9B8"))) PPC_WEAK_FUNC(sub_82F2D9B8);
PPC_FUNC_IMPL(__imp__sub_82F2D9B8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// lwz r11,400(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 400);
	// li r9,5
	ctx.r9.s64 = 5;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r11,r11,2464
	r11.s64 = r11.s64 + 2464;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82F2D9F8:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x82f2d9f8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82F2D9F8;
	// li r27,0
	r27.s64 = 0;
	// lwz r10,7728(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 7728);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// lwz r5,400(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 400);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r4,r31,416
	ctx.r4.s64 = r31.s64 + 416;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f2ced8
	sub_82F2CED8(ctx, base);
	// lbz r11,17(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 17);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f2da6c
	if (cr6.eq) goto loc_82F2DA6C;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// lwz r10,7732(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 7732);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// lwz r5,400(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 400);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r4,r31,1440
	ctx.r4.s64 = r31.s64 + 1440;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f2ced8
	sub_82F2CED8(ctx, base);
loc_82F2DA6C:
	// lwz r11,400(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 400);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,400(r31)
	PPC_STORE_U32(r31.u32 + 400, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82F2DA80"))) PPC_WEAK_FUNC(sub_82F2DA80);
PPC_FUNC_IMPL(__imp__sub_82F2DA80) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r26,1
	r26.s64 = 1;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stb r26,7713(r31)
	PPC_STORE_U8(r31.u32 + 7713, r26.u8);
	// mr r11,r30
	r11.u64 = r30.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82F2DAB4:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82f2dab4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82F2DAB4;
	// li r27,0
	r27.s64 = 0;
	// lbz r25,144(r1)
	r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// cmpw cr6,r29,r28
	cr6.compare<int32_t>(r29.s32, r28.s32, xer);
	// stw r27,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r27.u32);
	// beq cr6,0x82f2db94
	if (cr6.eq) goto loc_82F2DB94;
	// lbz r11,49(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 49);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f2db94
	if (!cr6.eq) goto loc_82F2DB94;
	// lwz r11,3744(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 3744);
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// li r9,10
	ctx.r9.s64 = 10;
	// add r8,r11,r8
	ctx.r8.u64 = r11.u64 + ctx.r8.u64;
	// rlwinm r11,r8,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r11,r11,5808
	r11.s64 = r11.s64 + 5808;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82F2DB14:
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// std r9,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bdnz 0x82f2db14
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82F2DB14;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// lwz r10,7736(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 7736);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// lwz r5,3744(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 3744);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r4,r31,3760
	ctx.r4.s64 = r31.s64 + 3760;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f2ced8
	sub_82F2CED8(ctx, base);
	// extsb r11,r25
	r11.s64 = r25.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f2db84
	if (cr6.eq) goto loc_82F2DB84;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// lwz r10,7740(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 7740);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// lwz r5,3744(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 3744);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r4,r31,4784
	ctx.r4.s64 = r31.s64 + 4784;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f2ced8
	sub_82F2CED8(ctx, base);
loc_82F2DB84:
	// lwz r11,3744(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 3744);
	// stw r26,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r26.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,3744(r31)
	PPC_STORE_U32(r31.u32 + 3744, r11.u32);
loc_82F2DB94:
	// lbz r11,50(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 50);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,3744(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 3744);
	// bne cr6,0x82f2dbe8
	if (!cr6.eq) goto loc_82F2DBE8;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// add r6,r11,r8
	ctx.r6.u64 = r11.u64 + ctx.r8.u64;
	// mr r30,r11
	r30.u64 = r11.u64;
	// stw r7,3744(r31)
	PPC_STORE_U32(r31.u32 + 3744, ctx.r7.u32);
	// rlwinm r11,r6,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r11,r11,5808
	r11.s64 = r11.s64 + 5808;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82F2DBD0:
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// std r9,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bdnz 0x82f2dbd0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82F2DBD0;
	// b 0x82f2dbec
	goto loc_82F2DBEC;
loc_82F2DBE8:
	// addi r30,r11,-1
	r30.s64 = r11.s64 + -1;
loc_82F2DBEC:
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// lwz r10,7736(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 7736);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r31,3760
	ctx.r4.s64 = r31.s64 + 3760;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f2ced8
	sub_82F2CED8(ctx, base);
	// extsb r11,r25
	r11.s64 = r25.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f2dc48
	if (cr6.eq) goto loc_82F2DC48;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// lwz r10,7740(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 7740);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r31,4784
	ctx.r4.s64 = r31.s64 + 4784;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f2ced8
	sub_82F2CED8(ctx, base);
loc_82F2DC48:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82F2DC58"))) PPC_WEAK_FUNC(sub_82F2DC58);
PPC_FUNC_IMPL(__imp__sub_82F2DC58) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,7720(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 7720);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82f2dd0c
	if (!cr6.gt) goto loc_82F2DD0C;
	// addi r8,r31,7716
	ctx.r8.s64 = r31.s64 + 7716;
	// li r6,0
	ctx.r6.s64 = 0;
loc_82F2DC88:
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// add r11,r6,r11
	r11.u64 = ctx.r6.u64 + r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, r30.s32, xer);
	// bne cr6,0x82f2dcf8
	if (!cr6.eq) goto loc_82F2DCF8;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// bne cr6,0x82f2dcf8
	if (!cr6.eq) goto loc_82F2DCF8;
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, r11.u32);
	// cmpw cr6,r7,r11
	cr6.compare<int32_t>(ctx.r7.s32, r11.s32, xer);
	// bge cr6,0x82f2dcf0
	if (!cr6.lt) goto loc_82F2DCF0;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
loc_82F2DCC4:
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r5,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r5.u32);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r4,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r4.u32);
	// lwz r3,4(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmpw cr6,r10,r3
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, xer);
	// blt cr6,0x82f2dcc4
	if (cr6.lt) goto loc_82F2DCC4;
loc_82F2DCF0:
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r6,r6,-8
	ctx.r6.s64 = ctx.r6.s64 + -8;
loc_82F2DCF8:
	// lwz r11,7720(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 7720);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// cmpw cr6,r7,r11
	cr6.compare<int32_t>(ctx.r7.s32, r11.s32, xer);
	// blt cr6,0x82f2dc88
	if (cr6.lt) goto loc_82F2DC88;
loc_82F2DD0C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f2d0f0
	sub_82F2D0F0(ctx, base);
	// addi r31,r31,7716
	r31.s64 = r31.s64 + 7716;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82f2dd44
	if (!cr6.eq) goto loc_82F2DD44;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82F2DD44:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// add r11,r10,r9
	r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// stwx r30,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r30.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82F2DD70"))) PPC_WEAK_FUNC(sub_82F2DD70);
PPC_FUNC_IMPL(__imp__sub_82F2DD70) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,7728(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 7728);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82f2de04
	if (cr6.eq) goto loc_82F2DE04;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r30,r11,228
	r30.s64 = r11.s64 + 228;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82ea8538
	sub_82EA8538(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r6,7732(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 7732);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ea8538
	sub_82EA8538(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r6,7736(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 7736);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ea8538
	sub_82EA8538(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r6,7740(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 7740);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ea8538
	sub_82EA8538(ctx, base);
loc_82F2DE04:
	// lwz r11,7724(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 7724);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82f2de44
	if (!cr6.eq) goto loc_82F2DE44;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lwz r7,7720(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 7720);
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,7716(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 7716);
	// addi r4,r9,204
	ctx.r4.s64 = ctx.r9.s64 + 204;
	// rlwinm r7,r7,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F2DE44:
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// li r27,8
	r27.s64 = 8;
	// addi r28,r11,184
	r28.s64 = r11.s64 + 184;
loc_82F2DE54:
	// li r30,8
	r30.s64 = 8;
loc_82F2DE58:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x82f2de58
	if (!cr0.eq) goto loc_82F2DE58;
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// bne 0x82f2de54
	if (!cr0.eq) goto loc_82F2DE54;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82F2DEA8"))) PPC_WEAK_FUNC(sub_82F2DEA8);
PPC_FUNC_IMPL(__imp__sub_82F2DEA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// stwu r1,-1104(r1)
	ea = -1104 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-31943
	r25.s64 = -2093416448;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// lis r4,24131
	ctx.r4.s64 = 1581449216;
	// addi r5,r11,352
	ctx.r5.s64 = r11.s64 + 352;
	// lwz r3,30588(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 30588);
	// ori r4,r4,17892
	ctx.r4.u64 = ctx.r4.u64 | 17892;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,7728(r22)
	ctx.r8.u64 = PPC_LOAD_U32(r22.u32 + 7728);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82f2e324
	if (cr6.eq) goto loc_82F2E324;
	// lwz r11,7732(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 7732);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f2e324
	if (cr6.eq) goto loc_82F2E324;
	// li r21,0
	r21.s64 = 0;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// li r26,3
	r26.s64 = 3;
	// mr r24,r21
	r24.u64 = r21.u64;
	// lis r20,-32768
	r20.s64 = -2147483648;
	// addi r23,r11,332
	r23.s64 = r11.s64 + 332;
	// addi r28,r10,292
	r28.s64 = ctx.r10.s64 + 292;
	// addi r27,r9,264
	r27.s64 = ctx.r9.s64 + 264;
loc_82F2DF20:
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r21.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r21.u32);
	// stw r20,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r20.u32);
	// bl 0x82eb2950
	sub_82EB2950(ctx, base);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82f2df68
	if (!cr6.lt) goto loc_82F2DF68;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82f2df58
	if (cr6.lt) goto loc_82F2DF58;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82F2DF58:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82F2DF68:
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82f25fd8
	sub_82F25FD8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82eb3358
	sub_82EB3358(ctx, base);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82f2dfc0
	if (!cr6.eq) goto loc_82F2DFC0;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82F2DFC0:
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82eae638
	sub_82EAE638(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82eae240
	sub_82EAE240(ctx, base);
	// lwz r3,30588(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 30588);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r8,546
	ctx.r8.s64 = 546;
	// addi r6,r1,464
	ctx.r6.s64 = ctx.r1.s64 + 464;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82eae128
	sub_82EAE128(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// mr r29,r26
	r29.u64 = r26.u64;
loc_82F2E014:
	// lwz r11,7732(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 7732);
	// add r31,r29,r11
	r31.u64 = r29.u64 + r11.u64;
	// lbz r11,2(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// cmpwi cr6,r10,100
	cr6.compare<int32_t>(ctx.r10.s32, 100, xer);
	// bge cr6,0x82f2e0c4
	if (!cr6.lt) goto loc_82F2E0C4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f25fd8
	sub_82F25FD8(ctx, base);
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// bl 0x82f25fd8
	sub_82F25FD8(ctx, base);
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// extsb r3,r10
	ctx.r3.s64 = ctx.r10.s8;
	// bl 0x82f25fd8
	sub_82F25FD8(ctx, base);
	// lbz r7,2(r31)
	ctx.r7.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82eb2670
	sub_82EB2670(ctx, base);
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82eae638
	sub_82EAE638(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82eadae8
	sub_82EADAE8(ctx, base);
	// lwz r3,30588(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 30588);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r8,561
	ctx.r8.s64 = 561;
	// addi r6,r1,464
	ctx.r6.s64 = ctx.r1.s64 + 464;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82eae128
	sub_82EAE128(ctx, base);
loc_82F2E0C4:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,3
	r29.s64 = r29.s64 + 3;
	// cmpwi cr6,r30,32
	cr6.compare<int32_t>(r30.s32, 32, xer);
	// blt cr6,0x82f2e014
	if (cr6.lt) goto loc_82F2E014;
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82f2e100
	if (!cr6.eq) goto loc_82F2E100;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82F2E100:
	// addi r26,r26,96
	r26.s64 = r26.s64 + 96;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// cmpwi cr6,r26,3075
	cr6.compare<int32_t>(r26.s32, 3075, xer);
	// blt cr6,0x82f2df20
	if (cr6.lt) goto loc_82F2DF20;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// mr r24,r21
	r24.u64 = r21.u64;
	// li r27,3
	r27.s64 = 3;
	// addi r26,r11,240
	r26.s64 = r11.s64 + 240;
loc_82F2E120:
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r21.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r21.u32);
	// stw r20,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r20.u32);
	// bl 0x82eb2950
	sub_82EB2950(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82f2e168
	if (!cr6.lt) goto loc_82F2E168;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82f2e158
	if (cr6.lt) goto loc_82F2E158;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82F2E158:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82F2E168:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82f25fd8
	sub_82F25FD8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82eb3358
	sub_82EB3358(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82f2e1c0
	if (!cr6.eq) goto loc_82F2E1C0;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82F2E1C0:
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82eae638
	sub_82EAE638(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82eae240
	sub_82EAE240(ctx, base);
	// lwz r3,30588(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 30588);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r8,569
	ctx.r8.s64 = 569;
	// addi r6,r1,464
	ctx.r6.s64 = ctx.r1.s64 + 464;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82eae128
	sub_82EAE128(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// mr r29,r27
	r29.u64 = r27.u64;
loc_82F2E214:
	// lwz r11,7728(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 7728);
	// add r31,r29,r11
	r31.u64 = r29.u64 + r11.u64;
	// lbz r11,2(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// cmpwi cr6,r10,100
	cr6.compare<int32_t>(ctx.r10.s32, 100, xer);
	// bge cr6,0x82f2e2c4
	if (!cr6.lt) goto loc_82F2E2C4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f25fd8
	sub_82F25FD8(ctx, base);
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// bl 0x82f25fd8
	sub_82F25FD8(ctx, base);
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// extsb r3,r10
	ctx.r3.s64 = ctx.r10.s8;
	// bl 0x82f25fd8
	sub_82F25FD8(ctx, base);
	// lbz r7,2(r31)
	ctx.r7.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82eb2670
	sub_82EB2670(ctx, base);
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82eae638
	sub_82EAE638(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82eadae8
	sub_82EADAE8(ctx, base);
	// lwz r3,30588(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 30588);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r8,584
	ctx.r8.s64 = 584;
	// addi r6,r1,464
	ctx.r6.s64 = ctx.r1.s64 + 464;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82eae128
	sub_82EAE128(ctx, base);
loc_82F2E2C4:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,3
	r29.s64 = r29.s64 + 3;
	// cmpwi cr6,r30,32
	cr6.compare<int32_t>(r30.s32, 32, xer);
	// blt cr6,0x82f2e214
	if (cr6.lt) goto loc_82F2E214;
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82f2e300
	if (!cr6.eq) goto loc_82F2E300;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82F2E300:
	// addi r27,r27,96
	r27.s64 = r27.s64 + 96;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// cmpwi cr6,r27,3075
	cr6.compare<int32_t>(r27.s32, 3075, xer);
	// blt cr6,0x82f2e120
	if (cr6.lt) goto loc_82F2E120;
	// lwz r3,30588(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 30588);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F2E324:
	// addi r1,r1,1104
	ctx.r1.s64 = ctx.r1.s64 + 1104;
	// b 0x831b0b50
	return;
}

__attribute__((alias("__imp__sub_82F2E330"))) PPC_WEAK_FUNC(sub_82F2E330);
PPC_FUNC_IMPL(__imp__sub_82F2E330) {
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
	// bl 0x82f2d788
	sub_82F2D788(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f2e378
	if (cr6.eq) goto loc_82F2E378;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r6,39
	ctx.r6.s64 = 39;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82F2E378:
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

__attribute__((alias("__imp__sub_82F2E398"))) PPC_WEAK_FUNC(sub_82F2E398);
PPC_FUNC_IMPL(__imp__sub_82F2E398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,5(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// add r30,r11,r4
	r30.u64 = r11.u64 + ctx.r4.u64;
	// lwzx r29,r11,r4
	r29.u64 = PPC_LOAD_U32(r11.u32 + ctx.r4.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82f2e440
	if (cr6.eq) goto loc_82F2E440;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, r30.u32, xer);
	// beq cr6,0x82f2e440
	if (cr6.eq) goto loc_82F2E440;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82f2e440
	if (cr6.eq) goto loc_82F2E440;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r5,r31,32
	ctx.r5.s64 = r31.s64 + 32;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r9,r11,13
	ctx.r9.s64 = r11.s64 + 13;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + r11.u32);
	// rotlwi r9,r10,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r8,2476(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2476);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F2E440:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lfs f1,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82F2E450"))) PPC_WEAK_FUNC(sub_82F2E450);
PPC_FUNC_IMPL(__imp__sub_82F2E450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b00
	// li r12,-144
	r12.s64 = -144;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,428(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 428);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwz r6,420(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// addi r10,r8,32
	ctx.r10.s64 = ctx.r8.s64 + 32;
	// addi r11,r31,32
	r11.s64 = r31.s64 + 32;
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r7,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// addi r4,r11,32
	ctx.r4.s64 = r11.s64 + 32;
	// stw r6,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r6.u32);
	// li r28,16
	r28.s64 = 16;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// li r29,32
	r29.s64 = 32;
	// stw r5,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r5.u32);
	// li r25,0
	r25.s64 = 0;
	// lwz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r24,48
	r24.s64 = 48;
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// li r23,80
	r23.s64 = 80;
	// stw r6,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r6.u32);
	// addi r22,r1,96
	r22.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r21,r1,80
	r21.s64 = ctx.r1.s64 + 80;
	// stw r3,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// addi r20,r1,80
	r20.s64 = ctx.r1.s64 + 80;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r19,r11
	r19.u64 = r11.u64;
	// stw r7,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r7.u32);
	// addi r3,r30,20
	ctx.r3.s64 = r30.s64 + 20;
	// lwz r18,8(r8)
	r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// addi r7,r5,8
	ctx.r7.s64 = ctx.r5.s64 + 8;
	// stw r18,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r18.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r18,12(r8)
	r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r18,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r18.u32);
	// lwz r8,16(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// stw r8,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r8.u32);
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r25,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r25.u32);
	// lvx128 v13,r10,r28
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r4,r28
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r10,r29
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r4,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r9,136(r31)
	PPC_STORE_U32(r31.u32 + 136, ctx.r9.u32);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lvx128 v11,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 20);
	f0.f64 = double(temp.f32);
	// lvx128 v10,r4,r24
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + r24.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v127,v11,v10
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v127.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v10.f32)));
	// vmsum3fp128 v9,v127,v127
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(v127.f32), 0xEF));
	// stvx128 v127,r11,r23
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + r23.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v9,r0,r22
	simde_mm_store_si128((simde__m128i*)(base + ((r22.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f12,f13
	ctx.f12.f64 = double(float(sqrt(ctx.f13.f64)));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v8,0,r21
	temp.u32 = r21.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v7,v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), 0xFF));
	// stvewx v7,r0,r20
	ea = (r20.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v7.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,4(r19)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r19.u32 + 4, temp.u32);
	// stfs f11,100(r19)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r19.u32 + 100, temp.u32);
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lfs f1,20(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r26,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r26.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,-22120(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -22120);
	f0.f64 = double(temp.f32);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v6,0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r11,4512
	ctx.r10.s64 = r11.s64 + 4512;
	// vspltw v5,v6,0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.u32), 0xFF));
	// lvx128 v12,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// lfs f10,16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// vsubfp v4,v13,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v4.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)));
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// vspltw v0,v5,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v5.u32), 0xFF));
	// lvx128 v11,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f10,128(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 128, temp.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lvlx v3,0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v2,v3,0
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.u32), 0xFF));
	// vsubfp v1,v11,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v1.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)));
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// vmulfp128 v31,v4,v2
	simde_mm_store_ps(v31.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v2.f32)));
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// vmulfp128 v30,v1,v12
	simde_mm_store_ps(v30.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v12.f32)));
	// stvx128 v31,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v0,v0,v13,v30
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(v30.f32)));
	// vaddfp128 v29,v0,v127
	simde_mm_store_ps(v29.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(v127.f32)));
	// stvx128 v0,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v29,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// li r0,-144
	r0.s64 = -144;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x831b0b50
	return;
}

__attribute__((alias("__imp__sub_82F2E638"))) PPC_WEAK_FUNC(sub_82F2E638);
PPC_FUNC_IMPL(__imp__sub_82F2E638) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E640"))) PPC_WEAK_FUNC(sub_82F2E640);
PPC_FUNC_IMPL(__imp__sub_82F2E640) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

