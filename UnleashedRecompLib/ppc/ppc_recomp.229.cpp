#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_830E9490"))) PPC_WEAK_FUNC(sub_830E9490);
PPC_FUNC_IMPL(__imp__sub_830E9490) {
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
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830d7d30
	sub_830D7D30(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
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

__attribute__((alias("__imp__sub_830E94E0"))) PPC_WEAK_FUNC(sub_830E94E0);
PPC_FUNC_IMPL(__imp__sub_830E94E0) {
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
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// li r4,2002
	ctx.r4.s64 = 2002;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x830d7d30
	sub_830D7D30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E9518"))) PPC_WEAK_FUNC(sub_830E9518);
PPC_FUNC_IMPL(__imp__sub_830E9518) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830d7d30
	sub_830D7D30(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830E9558"))) PPC_WEAK_FUNC(sub_830E9558);
PPC_FUNC_IMPL(__imp__sub_830E9558) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830d7d30
	sub_830D7D30(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830E9598"))) PPC_WEAK_FUNC(sub_830E9598);
PPC_FUNC_IMPL(__imp__sub_830E9598) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830e93a8
	sub_830E93A8(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r31,r1,96
	r31.s64 = ctx.r1.s64 + 96;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
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

__attribute__((alias("__imp__sub_830E95F0"))) PPC_WEAK_FUNC(sub_830E95F0);
PPC_FUNC_IMPL(__imp__sub_830E95F0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830e9318
	sub_830E9318(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r31,r1,96
	r31.s64 = ctx.r1.s64 + 96;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
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

__attribute__((alias("__imp__sub_830E9648"))) PPC_WEAK_FUNC(sub_830E9648);
PPC_FUNC_IMPL(__imp__sub_830E9648) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x830e9138
	sub_830E9138(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e96ac
	if (cr0.lt) goto loc_830E96AC;
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x830e9698
	if (!cr6.eq) goto loc_830E9698;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,17
	ctx.r3.u64 = ctx.r3.u64 | 17;
	// b 0x830e96ac
	goto loc_830E96AC;
loc_830E9698:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
loc_830E96AC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830E96B8"))) PPC_WEAK_FUNC(sub_830E96B8);
PPC_FUNC_IMPL(__imp__sub_830E96B8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r31.u32);
	// bne cr6,0x830e973c
	if (!cr6.eq) goto loc_830E973C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830ef730
	sub_830EF730(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_830E96F4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_830E9708:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830ef730
	sub_830EF730(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x830e974c
	if (!cr6.eq) goto loc_830E974C;
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e8388
	sub_830E8388(ctx, base);
	// lwz r31,164(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
loc_830E973C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830e9708
	if (!cr6.eq) goto loc_830E9708;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830e96f4
	goto loc_830E96F4;
loc_830E974C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830e96f4
	goto loc_830E96F4;
}

__attribute__((alias("__imp__sub_830E9758"))) PPC_WEAK_FUNC(sub_830E9758);
PPC_FUNC_IMPL(__imp__sub_830E9758) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r4,31
	ctx.r4.s64 = 31;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x830e2638
	sub_830E2638(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E9790"))) PPC_WEAK_FUNC(sub_830E9790);
PPC_FUNC_IMPL(__imp__sub_830E9790) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830e9490
	sub_830E9490(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
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

__attribute__((alias("__imp__sub_830E97D8"))) PPC_WEAK_FUNC(sub_830E97D8);
PPC_FUNC_IMPL(__imp__sub_830E97D8) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// lwz r29,4(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830e98b0
	if (cr0.eq) goto loc_830E98B0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8310aff8
	sub_8310AFF8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lhz r5,2(r30)
	ctx.r5.u64 = PPC_LOAD_U16(r30.u32 + 2);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x830e9844
	if (!cr0.lt) goto loc_830E9844;
loc_830E9830:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_830E9834:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_830E9838:
	// bl 0x8310b5c8
	sub_8310B5C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x830e99fc
	goto loc_830E99FC;
loc_830E9844:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// beq cr6,0x830e985c
	if (cr6.eq) goto loc_830E985C;
	// lis r31,-32720
	r31.s64 = -2144337920;
	// ori r31,r31,1
	r31.u64 = r31.u64 | 1;
	// b 0x830e9834
	goto loc_830E9834;
loc_830E985C:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r31,0
	r31.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x830e98a8
	if (!cr6.gt) goto loc_830E98A8;
loc_830E9870:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mullw r10,r10,r31
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r31.s32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x830e97d8
	sub_830E97D8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e9830
	if (cr0.lt) goto loc_830E9830;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(r31.s32, ctx.r10.s32, xer);
	// blt cr6,0x830e9870
	if (cr6.lt) goto loc_830E9870;
loc_830E98A8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// b 0x830e99f4
	goto loc_830E99F4;
loc_830E98B0:
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(r11.s32, 10, xer);
	// bne cr6,0x830e9938
	if (!cr6.eq) goto loc_830E9938;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e99fc
	if (cr0.lt) goto loc_830E99FC;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830e9914
	if (cr0.eq) goto loc_830E9914;
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830E9908:
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x830e99f8
	if (!cr0.lt) goto loc_830E99F8;
	// b 0x830e99fc
	goto loc_830E99FC;
loc_830E9914:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,20(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x830e9908
	goto loc_830E9908;
loc_830E9938:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8310aff8
	sub_8310AFF8(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8310f968
	sub_8310F968(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lhz r5,2(r30)
	ctx.r5.u64 = PPC_LOAD_U16(r30.u32 + 2);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	r11.s64 = 0;
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// bge 0x830e9984
	if (!cr0.lt) goto loc_830E9984;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// b 0x830e9838
	goto loc_830E9838;
loc_830E9984:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x830e99f0
	if (cr6.eq) goto loc_830E99F0;
	// lis r31,-31947
	r31.s64 = -2093678592;
	// lwz r11,24404(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24404);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x830e99d8
	if (!cr6.eq) goto loc_830E99D8;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-24624
	ctx.r4.s64 = ctx.r10.s64 + -24624;
	// lwz r3,-13928(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -13928);
	// bl 0x830d7390
	sub_830D7390(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e99cc
	if (cr0.lt) goto loc_830E99CC;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,24404(r31)
	PPC_STORE_U32(r31.u32 + 24404, r11.u32);
	// b 0x830e99d0
	goto loc_830E99D0;
loc_830E99CC:
	// lwz r11,24404(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24404);
loc_830E99D0:
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x830e99f0
	if (cr6.eq) goto loc_830E99F0;
loc_830E99D8:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x830e99f0
	if (!cr6.eq) goto loc_830E99F0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8310f8f0
	sub_8310F8F0(ctx, base);
loc_830E99F0:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
loc_830E99F4:
	// bl 0x8310b5c8
	sub_8310B5C8(ctx, base);
loc_830E99F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E99FC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830E9A08"))) PPC_WEAK_FUNC(sub_830E9A08);
PPC_FUNC_IMPL(__imp__sub_830E9A08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsw r11,r3
	r11.s64 = ctx.r3.s32;
	// extsw r10,r5
	ctx.r10.s64 = ctx.r5.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fcfid f12,f0
	ctx.f12.f64 = double(f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfs f30,-24792(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24792);
	f30.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lfs f0,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f31,2244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	f31.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lfs f0,8260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8260);
	f0.f64 = double(temp.f32);
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * f30.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fnmsubs f13,f12,f30,f31
	ctx.f13.f64 = double(float(-(ctx.f12.f64 * f30.f64 - f31.f64)));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x83120f38
	sub_83120F38(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83120820
	sub_83120820(ctx, base);
	// extsw r11,r31
	r11.s64 = r31.s32;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,4412(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4412);
	f0.f64 = double(temp.f32);
	// fmsubs f13,f13,f30,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f30.f64 - f31.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x83120f38
	sub_83120F38(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83120820
	sub_83120820(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f31
	f0.f64 = double(float(f0.f64 + f31.f64));
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,0(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// stfs f11,4(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// stfs f0,0(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
	// stfs f13,4(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r29.u32 + 4, temp.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-48(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830E9B20"))) PPC_WEAK_FUNC(sub_830E9B20);
PPC_FUNC_IMPL(__imp__sub_830E9B20) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x830e90f0
	sub_830E90F0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x830e9b70
	if (!cr0.lt) goto loc_830E9B70;
	// lis r11,-32720
	r11.s64 = -2144337920;
	// ori r11,r11,38
	r11.u64 = r11.u64 | 38;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bne cr6,0x830e9bdc
	if (!cr6.eq) goto loc_830E9BDC;
loc_830E9B70:
	// li r11,0
	r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x830e8400
	sub_830E8400(ctx, base);
	// b 0x830e9bb4
	goto loc_830E9BB4;
loc_830E9B88:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e9b20
	sub_830E9B20(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e9bdc
	if (cr0.lt) goto loc_830E9BDC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e84f0
	sub_830E84F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e9bdc
	if (cr0.lt) goto loc_830E9BDC;
loc_830E9BB4:
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x830e9b88
	if (!cr6.eq) goto loc_830E9B88;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x830e92c8
	sub_830E92C8(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
loc_830E9BDC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830E9BE8"))) PPC_WEAK_FUNC(sub_830E9BE8);
PPC_FUNC_IMPL(__imp__sub_830E9BE8) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b0c
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lfs f0,-24700(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24700);
	f0.f64 = double(temp.f32);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lfs f13,-7552(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -7552);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stfs f0,0(r27)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r27.u32 + 0, temp.u32);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// stfs f13,0(r26)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r26.u32 + 0, temp.u32);
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// li r25,0
	r25.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// addi r24,r10,-24840
	r24.s64 = ctx.r10.s64 + -24840;
	// addi r23,r9,-24824
	r23.s64 = ctx.r9.s64 + -24824;
	// addi r28,r11,-24904
	r28.s64 = r11.s64 + -24904;
loc_830E9C40:
	// lwz r11,4(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830e9c54
	if (cr6.eq) goto loc_830E9C54;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_830E9C54:
	// cmpw cr6,r29,r10
	cr6.compare<int32_t>(r29.s32, ctx.r10.s32, xer);
	// bge cr6,0x830e9cf0
	if (!cr6.lt) goto loc_830E9CF0;
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(r30.s32, 3, xer);
	// bge cr6,0x830e9cf0
	if (!cr6.lt) goto loc_830E9CF0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mullw r10,r10,r29
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r29.s32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r31,r11,8
	r31.s64 = r11.s64 + 8;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x831ba858
	sub_831BA858(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x830e9ca0
	if (!cr0.eq) goto loc_830E9CA0;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8310fa50
	sub_8310FA50(ctx, base);
	// li r25,1
	r25.s64 = 1;
	// b 0x830e9ce4
	goto loc_830E9CE4;
loc_830E9CA0:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x831ba858
	sub_831BA858(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x830e9cc0
	if (!cr0.eq) goto loc_830E9CC0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// b 0x830e9cdc
	goto loc_830E9CDC;
loc_830E9CC0:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x831ba858
	sub_831BA858(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x830e9ce8
	if (!cr0.eq) goto loc_830E9CE8;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_830E9CDC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8310f940
	sub_8310F940(ctx, base);
loc_830E9CE4:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_830E9CE8:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// b 0x830e9c40
	goto loc_830E9C40;
loc_830E9CF0:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// beq cr6,0x830e9d00
	if (cr6.eq) goto loc_830E9D00;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830e9d08
	goto loc_830E9D08;
loc_830E9D00:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,7
	ctx.r3.u64 = ctx.r3.u64 | 7;
loc_830E9D08:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_830E9D10"))) PPC_WEAK_FUNC(sub_830E9D10);
PPC_FUNC_IMPL(__imp__sub_830E9D10) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm. r11,r28,0,30,30
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830e9d70
	if (cr0.eq) goto loc_830E9D70;
	// lwz r10,-4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + -4);
	// addi r29,r30,-4
	r29.s64 = r30.s64 + -4;
	// mulli r11,r10,68
	r11.s64 = ctx.r10.s64 * 68;
	// addic. r31,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	r31.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
	// blt 0x830e9d58
	if (cr0.lt) goto loc_830E9D58;
loc_830E9D44:
	// addi r30,r30,-68
	r30.s64 = r30.s64 + -68;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831083e0
	sub_831083E0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bge 0x830e9d44
	if (!cr0.lt) goto loc_830E9D44;
loc_830E9D58:
	// clrlwi. r11,r28,31
	r11.u64 = r28.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830e9d68
	if (cr0.eq) goto loc_830E9D68;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_830E9D68:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x830e9d8c
	goto loc_830E9D8C;
loc_830E9D70:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831083e0
	sub_831083E0(ctx, base);
	// clrlwi. r11,r28,31
	r11.u64 = r28.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830e9d88
	if (cr0.eq) goto loc_830E9D88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_830E9D88:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_830E9D8C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830E9D98"))) PPC_WEAK_FUNC(sub_830E9D98);
PPC_FUNC_IMPL(__imp__sub_830E9D98) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r4,-13928(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13928);
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// li r31,0
	r31.s64 = 0;
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x830e9ddc
	if (!cr0.eq) goto loc_830E9DDC;
loc_830E9DD4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830e9f24
	goto loc_830E9F24;
loc_830E9DDC:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x830e9e0c
	if (cr0.eq) goto loc_830E9E0C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x830e88b0
	sub_830E88B0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// bl 0x830e88b0
	sub_830E88B0(ctx, base);
	// b 0x830e9dd4
	goto loc_830E9DD4;
loc_830E9E0C:
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// cmplwi cr6,r28,1
	cr6.compare<uint32_t>(r28.u32, 1, xer);
	// stw r11,16(r29)
	PPC_STORE_U32(r29.u32 + 16, r11.u32);
	// blt cr6,0x830e9e60
	if (cr6.lt) goto loc_830E9E60;
	// beq cr6,0x830e9e58
	if (cr6.eq) goto loc_830E9E58;
	// cmplwi cr6,r28,3
	cr6.compare<uint32_t>(r28.u32, 3, xer);
	// blt cr6,0x830e9e50
	if (cr6.lt) goto loc_830E9E50;
	// beq cr6,0x830e9e48
	if (cr6.eq) goto loc_830E9E48;
	// cmplwi cr6,r28,5
	cr6.compare<uint32_t>(r28.u32, 5, xer);
	// blt cr6,0x830e9e40
	if (cr6.lt) goto loc_830E9E40;
	// bne cr6,0x830e9f14
	if (!cr6.eq) goto loc_830E9F14;
	// lwz r30,40(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// b 0x830e9e64
	goto loc_830E9E64;
loc_830E9E40:
	// lwz r30,36(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// b 0x830e9e64
	goto loc_830E9E64;
loc_830E9E48:
	// lwz r30,24(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// b 0x830e9e64
	goto loc_830E9E64;
loc_830E9E50:
	// lwz r30,20(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// b 0x830e9e64
	goto loc_830E9E64;
loc_830E9E58:
	// lwz r30,32(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// b 0x830e9e64
	goto loc_830E9E64;
loc_830E9E60:
	// lwz r30,28(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 28);
loc_830E9E64:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x830e9f14
	if (cr6.eq) goto loc_830E9F14;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830e9f14
	if (cr0.eq) goto loc_830E9F14;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x830e8388
	sub_830E8388(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830e9f14
	if (cr6.eq) goto loc_830E9F14;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8310ed78
	sub_8310ED78(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x830e9f14
	if (cr0.eq) goto loc_830E9F14;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(r31.u32, ctx.r3.u32, xer);
	// beq cr6,0x830e9f14
	if (cr6.eq) goto loc_830E9F14;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// beq cr6,0x830e9ecc
	if (cr6.eq) goto loc_830E9ECC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f03b0
	sub_830F03B0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830e9ef8
	if (cr0.eq) goto loc_830E9EF8;
loc_830E9ECC:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// beq cr6,0x830e9ee4
	if (cr6.eq) goto loc_830E9EE4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f0830
	sub_830F0830(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830e9ef8
	if (cr0.eq) goto loc_830E9EF8;
loc_830E9EE4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e96b8
	sub_830E96B8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830e9f14
	if (cr0.eq) goto loc_830E9F14;
loc_830E9EF8:
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x830e9d98
	sub_830E9D98(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_830E9F14:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r11,16(r29)
	PPC_STORE_U32(r29.u32 + 16, r11.u32);
loc_830E9F24:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_830E9F30"))) PPC_WEAK_FUNC(sub_830E9F30);
PPC_FUNC_IMPL(__imp__sub_830E9F30) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830e9f5c
	if (!cr6.eq) goto loc_830E9F5C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x830e9f98
	goto loc_830E9F98;
loc_830E9F5C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830e91f0
	sub_830E91F0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e9f98
	if (cr0.lt) goto loc_830E9F98;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_830E9F98:
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

__attribute__((alias("__imp__sub_830E9FB0"))) PPC_WEAK_FUNC(sub_830E9FB0);
PPC_FUNC_IMPL(__imp__sub_830E9FB0) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r31,-7832(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + -7832);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830e9ffc
	if (cr6.eq) goto loc_830E9FFC;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(r31.u32, ctx.r3.u32, xer);
	// beq cr6,0x830e9ff4
	if (cr6.eq) goto loc_830E9FF4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830e8a20
	sub_830E8A20(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830e9ffc
	if (cr0.eq) goto loc_830E9FFC;
loc_830E9FF4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830ea050
	goto loc_830EA050;
loc_830E9FFC:
	// li r30,0
	r30.s64 = 0;
loc_830EA000:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e7a68
	sub_830E7A68(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x830ea038
	if (cr0.eq) goto loc_830EA038;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(r31.u32, ctx.r3.u32, xer);
	// beq cr6,0x830e9ff4
	if (cr6.eq) goto loc_830E9FF4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830e8a20
	sub_830E8A20(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x830e9ff4
	if (!cr0.eq) goto loc_830E9FF4;
loc_830EA038:
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r30,r11,24
	r30.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(r30.u32, 4, xer);
	// blt cr6,0x830ea000
	if (cr6.lt) goto loc_830EA000;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830EA050:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830EA058"))) PPC_WEAK_FUNC(sub_830EA058);
PPC_FUNC_IMPL(__imp__sub_830EA058) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r31,-7832(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + -7832);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830ea0a4
	if (cr6.eq) goto loc_830EA0A4;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(r31.u32, ctx.r3.u32, xer);
	// beq cr6,0x830ea09c
	if (cr6.eq) goto loc_830EA09C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830e8a20
	sub_830E8A20(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830ea0a4
	if (cr0.eq) goto loc_830EA0A4;
loc_830EA09C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x830ea0f8
	goto loc_830EA0F8;
loc_830EA0A4:
	// li r30,0
	r30.s64 = 0;
loc_830EA0A8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e7a68
	sub_830E7A68(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x830ea0e0
	if (cr0.eq) goto loc_830EA0E0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(r31.u32, ctx.r3.u32, xer);
	// beq cr6,0x830ea09c
	if (cr6.eq) goto loc_830EA09C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830e8a20
	sub_830E8A20(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x830ea09c
	if (!cr0.eq) goto loc_830EA09C;
loc_830EA0E0:
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r30,r11,24
	r30.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(r30.u32, 4, xer);
	// blt cr6,0x830ea0a8
	if (cr6.lt) goto loc_830EA0A8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830EA0F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830EA100"))) PPC_WEAK_FUNC(sub_830EA100);
PPC_FUNC_IMPL(__imp__sub_830EA100) {
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
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x830ea12c
	if (!cr6.eq) goto loc_830EA12C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x830ea198
	goto loc_830EA198;
loc_830EA12C:
	// li r31,0
	r31.s64 = 0;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// lwz r4,-13928(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13928);
	// bl 0x830d7698
	sub_830D7698(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830ea154
	if (!cr0.eq) goto loc_830EA154;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// b 0x830ea198
	goto loc_830EA198;
loc_830EA154:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// bl 0x830e8400
	sub_830E8400(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830ea178
	if (!cr6.eq) goto loc_830EA178;
loc_830EA16C:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,23
	ctx.r3.u64 = ctx.r3.u64 | 23;
	// b 0x830ea198
	goto loc_830EA198;
loc_830EA178:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,-13924(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13924);
	// bl 0x830d7698
	sub_830D7698(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830ea16c
	if (cr0.eq) goto loc_830EA16C;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_830EA198:
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

__attribute__((alias("__imp__sub_830EA1B0"))) PPC_WEAK_FUNC(sub_830EA1B0);
PPC_FUNC_IMPL(__imp__sub_830EA1B0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x830ea100
	sub_830EA100(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830ea280
	if (cr0.lt) goto loc_830EA280;
	// lwz r29,80(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830e8de8
	sub_830E8DE8(ctx, base);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830e8de8
	sub_830E8DE8(ctx, base);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x830ea278
	if (cr6.lt) goto loc_830EA278;
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// blt cr6,0x830ea278
	if (cr6.lt) goto loc_830EA278;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// beq cr6,0x830ea264
	if (cr6.eq) goto loc_830EA264;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830e8de8
	sub_830E8DE8(ctx, base);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x830ea278
	if (cr6.lt) goto loc_830EA278;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r5,r4
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, xer);
	// blt cr6,0x830ea278
	if (cr6.lt) goto loc_830EA278;
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r5,r6
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, xer);
	// bgt cr6,0x830ea278
	if (cr6.gt) goto loc_830EA278;
loc_830EA264:
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830e8d88
	sub_830E8D88(ctx, base);
	// b 0x830ea280
	goto loc_830EA280;
loc_830EA278:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830EA280:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_830EA288"))) PPC_WEAK_FUNC(sub_830EA288);
PPC_FUNC_IMPL(__imp__sub_830EA288) {
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
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x830ea2e4
	if (cr6.lt) goto loc_830EA2E4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r30,r11,-23056
	r30.s64 = r11.s64 + -23056;
loc_830EA2A8:
	// rlwinm r31,r4,4,0,27
	r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r30,8
	r11.s64 = r30.s64 + 8;
	// addi r10,r30,4
	ctx.r10.s64 = r30.s64 + 4;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwzx r6,r31,r11
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// lwzx r4,r31,r10
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + ctx.r10.u32);
	// bl 0x830ea1b0
	sub_830EA1B0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x830ea2f0
	if (!cr0.lt) goto loc_830EA2F0;
	// addi r11,r30,12
	r11.s64 = r30.s64 + 12;
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge cr6,0x830ea2a8
	if (!cr6.lt) goto loc_830EA2A8;
loc_830EA2E4:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,38
	ctx.r3.u64 = ctx.r3.u64 | 38;
	// b 0x830ea2f4
	goto loc_830EA2F4;
loc_830EA2F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830EA2F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830EA300"))) PPC_WEAK_FUNC(sub_830EA300);
PPC_FUNC_IMPL(__imp__sub_830EA300) {
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
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x830ea3f4
	if (cr6.eq) goto loc_830EA3F4;
loc_830EA328:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x830ea3f4
	if (cr6.eq) goto loc_830EA3F4;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x830ea3f4
	if (cr6.eq) goto loc_830EA3F4;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x830ea1b0
	sub_830EA1B0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x830ea3ec
	if (!cr0.lt) goto loc_830EA3EC;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830ea37c
	if (cr6.eq) goto loc_830EA37C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x830ea37c
	if (cr6.eq) goto loc_830EA37C;
	// mr r28,r30
	r28.u64 = r30.u64;
	// mr r27,r31
	r27.u64 = r31.u64;
	// li r31,0
	r31.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// b 0x830ea328
	goto loc_830EA328;
loc_830EA37C:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r29,0
	r29.s64 = 0;
	// addi r30,r11,-23056
	r30.s64 = r11.s64 + -23056;
	// addi r31,r30,8
	r31.s64 = r30.s64 + 8;
loc_830EA38C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,-4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + -4);
	// bl 0x831ba858
	sub_831BA858(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x830ea3b4
	if (!cr0.eq) goto loc_830EA3B4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x831ba858
	sub_831BA858(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830ea3d4
	if (cr0.eq) goto loc_830EA3D4;
loc_830EA3B4:
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// addi r11,r30,392
	r11.s64 = r30.s64 + 392;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x830ea38c
	if (cr6.lt) goto loc_830EA38C;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,38
	ctx.r3.u64 = ctx.r3.u64 | 38;
	// b 0x830ea3fc
	goto loc_830EA3FC;
loc_830EA3D4:
	// rlwinm r11,r29,4,0,27
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r30,12
	ctx.r10.s64 = r30.s64 + 12;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x830ea288
	sub_830EA288(ctx, base);
	// b 0x830ea3fc
	goto loc_830EA3FC;
loc_830EA3EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830ea3fc
	goto loc_830EA3FC;
loc_830EA3F4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830EA3FC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_830EA408"))) PPC_WEAK_FUNC(sub_830EA408);
PPC_FUNC_IMPL(__imp__sub_830EA408) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830ea418
	if (!cr6.eq) goto loc_830EA418;
	// blr 
	return;
loc_830EA418:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x830e9d98
	sub_830E9D98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EA428"))) PPC_WEAK_FUNC(sub_830EA428);
PPC_FUNC_IMPL(__imp__sub_830EA428) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,-13920(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13920);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x830ea4bc
	if (cr0.eq) goto loc_830EA4BC;
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// rlwinm r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bne cr6,0x830ea4bc
	if (!cr6.eq) goto loc_830EA4BC;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
loc_830EA460:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r29,r31
	r29.u64 = r31.u64;
	// bl 0x830d7eb0
	sub_830D7EB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r28,r1,96
	r28.s64 = ctx.r1.s64 + 96;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830ea4a8
	if (!cr6.eq) goto loc_830EA4A8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e8388
	sub_830E8388(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830ea460
	if (!cr6.eq) goto loc_830EA460;
loc_830EA4A8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830e9758
	sub_830E9758(ctx, base);
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r11,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r11.u32);
loc_830EA4BC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830EA4C8"))) PPC_WEAK_FUNC(sub_830EA4C8);
PPC_FUNC_IMPL(__imp__sub_830EA4C8) {
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
	// lis r31,-31942
	r31.s64 = -2093350912;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r4,-13920(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + -13920);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x830ea4f8
	if (!cr0.eq) goto loc_830EA4F8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x830ea5a4
	goto loc_830EA5A4;
loc_830EA4F8:
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ea534
	if (cr6.eq) goto loc_830EA534;
	// lwz r4,-13920(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + -13920);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830ea57c
	if (cr0.eq) goto loc_830EA57C;
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// clrlwi. r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830ea57c
	if (cr0.eq) goto loc_830EA57C;
	// li r4,42
	ctx.r4.s64 = 42;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// b 0x830ea574
	goto loc_830EA574;
loc_830EA534:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830f0e80
	sub_830F0E80(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x830ea57c
	if (cr0.eq) goto loc_830EA57C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,-13920(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + -13920);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830ea57c
	if (cr0.eq) goto loc_830EA57C;
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// clrlwi. r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830ea57c
	if (cr0.eq) goto loc_830EA57C;
	// li r4,42
	ctx.r4.s64 = 42;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_830EA574:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
loc_830EA57C:
	// lwz r11,56(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// clrlwi. r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830ea5a0
	if (cr0.eq) goto loc_830EA5A0;
	// li r4,42
	ctx.r4.s64 = 42;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
loc_830EA5A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830EA5A4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830EA5B0"))) PPC_WEAK_FUNC(sub_830EA5B0);
PPC_FUNC_IMPL(__imp__sub_830EA5B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, f30.u64);
	// stfd f31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// lwz r4,-13940(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13940);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830ea5ec
	if (!cr0.eq) goto loc_830EA5EC;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x830ea600
	goto loc_830EA600;
loc_830EA5EC:
	// li r6,3
	ctx.r6.s64 = 3;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x830df898
	sub_830DF898(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_830EA600:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EA618"))) PPC_WEAK_FUNC(sub_830EA618);
PPC_FUNC_IMPL(__imp__sub_830EA618) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830ea684
	if (cr6.eq) goto loc_830EA684;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x830ea660
	if (cr6.eq) goto loc_830EA660;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830e9228
	sub_830E9228(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e2638
	sub_830E2638(ctx, base);
loc_830EA660:
	// clrlwi r11,r31,31
	r11.u64 = r31.u32 & 0x1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x830ea674
	if (!cr6.eq) goto loc_830EA674;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831192a0
	sub_831192A0(ctx, base);
loc_830EA674:
	// rlwinm r11,r31,0,29,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bne cr6,0x830ea684
	if (!cr6.eq) goto loc_830EA684;
	// bl 0x831131f8
	sub_831131F8(ctx, base);
loc_830EA684:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_830EA6A0"))) PPC_WEAK_FUNC(sub_830EA6A0);
PPC_FUNC_IMPL(__imp__sub_830EA6A0) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm. r11,r28,0,30,30
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830ea700
	if (cr0.eq) goto loc_830EA700;
	// lwz r10,-4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + -4);
	// addi r29,r30,-4
	r29.s64 = r30.s64 + -4;
	// rlwinm r11,r10,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addic. r31,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	r31.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
	// blt 0x830ea6e8
	if (cr0.lt) goto loc_830EA6E8;
loc_830EA6D4:
	// addi r30,r30,-16
	r30.s64 = r30.s64 + -16;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8310f8a8
	sub_8310F8A8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bge 0x830ea6d4
	if (!cr0.lt) goto loc_830EA6D4;
loc_830EA6E8:
	// clrlwi. r11,r28,31
	r11.u64 = r28.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830ea6f8
	if (cr0.eq) goto loc_830EA6F8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_830EA6F8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x830ea71c
	goto loc_830EA71C;
loc_830EA700:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8310f8a8
	sub_8310F8A8(ctx, base);
	// clrlwi. r11,r28,31
	r11.u64 = r28.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830ea718
	if (cr0.eq) goto loc_830EA718;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_830EA718:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_830EA71C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830EA728"))) PPC_WEAK_FUNC(sub_830EA728);
PPC_FUNC_IMPL(__imp__sub_830EA728) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x830e70a0
	sub_830E70A0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x830ea8fc
	if (cr0.lt) goto loc_830EA8FC;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x830ea7b4
	if (cr6.eq) goto loc_830EA7B4;
	// bl 0x830e6618
	sub_830E6618(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830e6548
	sub_830E6548(ctx, base);
loc_830EA780:
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x830ea868
	if (cr0.lt) goto loc_830EA868;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x830e8f90
	sub_830E8F90(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x830ea7c4
	if (cr6.eq) goto loc_830EA7C4;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830e6578
	sub_830E6578(ctx, base);
	// b 0x830ea7d4
	goto loc_830EA7D4;
loc_830EA7B4:
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x830e66c8
	sub_830E66C8(ctx, base);
	// b 0x830ea780
	goto loc_830EA780;
loc_830EA7C4:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ea7d8
	if (cr6.eq) goto loc_830EA7D8;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_830EA7D4:
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
loc_830EA7D8:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830e6660
	sub_830E6660(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// blt cr6,0x830ea8fc
	if (cr6.lt) goto loc_830EA8FC;
	// bl 0x830d7830
	sub_830D7830(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830ea8fc
	if (cr0.eq) goto loc_830EA8FC;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// rlwinm r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x830ea8fc
	if (!cr6.eq) goto loc_830EA8FC;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830e7238
	sub_830E7238(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830ea8fc
	if (cr0.lt) goto loc_830EA8FC;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x830ea854
	if (cr6.eq) goto loc_830EA854;
	// bl 0x830e6618
	sub_830E6618(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830e6548
	sub_830E6548(ctx, base);
	// b 0x830ea860
	goto loc_830EA860;
loc_830EA854:
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x830e66c8
	sub_830E66C8(ctx, base);
loc_830EA860:
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x830ea874
	if (!cr0.lt) goto loc_830EA874;
loc_830EA868:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830e6660
	sub_830E6660(ctx, base);
	// b 0x830ea8fc
	goto loc_830EA8FC;
loc_830EA874:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x830e8f90
	sub_830E8F90(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x830ea8a0
	if (cr6.eq) goto loc_830EA8A0;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830e6578
	sub_830E6578(ctx, base);
	// b 0x830ea8b0
	goto loc_830EA8B0;
loc_830EA8A0:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ea8b4
	if (cr6.eq) goto loc_830EA8B4;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_830EA8B0:
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
loc_830EA8B4:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830e6660
	sub_830E6660(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// blt cr6,0x830ea8f4
	if (cr6.lt) goto loc_830EA8F4;
	// lwz r30,96(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8310c528
	sub_8310C528(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e9030
	sub_830E9030(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bge cr6,0x830ea8fc
	if (!cr6.lt) goto loc_830EA8FC;
loc_830EA8F4:
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x830e9030
	sub_830E9030(ctx, base);
loc_830EA8FC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_830EA908"))) PPC_WEAK_FUNC(sub_830EA908);
PPC_FUNC_IMPL(__imp__sub_830EA908) {
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
	// li r11,0
	r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x830e8388
	sub_830E8388(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830e9b20
	sub_830E9B20(ctx, base);
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

__attribute__((alias("__imp__sub_830EA960"))) PPC_WEAK_FUNC(sub_830EA960);
PPC_FUNC_IMPL(__imp__sub_830EA960) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830ea978
	if (!cr6.eq) goto loc_830EA978;
	// blr 
	return;
loc_830EA978:
	// b 0x830d7190
	sub_830D7190(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EA980"))) PPC_WEAK_FUNC(sub_830EA980);
PPC_FUNC_IMPL(__imp__sub_830EA980) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830ea998
	if (!cr6.eq) goto loc_830EA998;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_830EA998:
	// b 0x830d7218
	sub_830D7218(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EA9A0"))) PPC_WEAK_FUNC(sub_830EA9A0);
PPC_FUNC_IMPL(__imp__sub_830EA9A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830ea9b8
	if (!cr6.eq) goto loc_830EA9B8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_830EA9B8:
	// b 0x830d7448
	sub_830D7448(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EA9C0"))) PPC_WEAK_FUNC(sub_830EA9C0);
PPC_FUNC_IMPL(__imp__sub_830EA9C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830ea9d8
	if (!cr6.eq) goto loc_830EA9D8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_830EA9D8:
	// b 0x830d7518
	sub_830D7518(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EA9E0"))) PPC_WEAK_FUNC(sub_830EA9E0);
PPC_FUNC_IMPL(__imp__sub_830EA9E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830ea9f8
	if (!cr6.eq) goto loc_830EA9F8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_830EA9F8:
	// b 0x830dafc0
	sub_830DAFC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EAA00"))) PPC_WEAK_FUNC(sub_830EAA00);
PPC_FUNC_IMPL(__imp__sub_830EAA00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830eaa18
	if (!cr6.eq) goto loc_830EAA18;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_830EAA18:
	// b 0x830db0d0
	sub_830DB0D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EAA20"))) PPC_WEAK_FUNC(sub_830EAA20);
PPC_FUNC_IMPL(__imp__sub_830EAA20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830eaa38
	if (!cr6.eq) goto loc_830EAA38;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_830EAA38:
	// b 0x830db1e0
	sub_830DB1E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EAA40"))) PPC_WEAK_FUNC(sub_830EAA40);
PPC_FUNC_IMPL(__imp__sub_830EAA40) {
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
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830eaaac
	if (cr6.eq) goto loc_830EAAAC;
	// bl 0x830d7830
	sub_830D7830(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830eaaac
	if (cr0.eq) goto loc_830EAAAC;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bl 0x830daef0
	sub_830DAEF0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830eaaac
	if (cr6.eq) goto loc_830EAAAC;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x830ea728
	sub_830EA728(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_830EAAAC:
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

__attribute__((alias("__imp__sub_830EAAC8"))) PPC_WEAK_FUNC(sub_830EAAC8);
PPC_FUNC_IMPL(__imp__sub_830EAAC8) {
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
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x830eac3c
	if (cr6.eq) goto loc_830EAC3C;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x830eac3c
	if (cr6.eq) goto loc_830EAC3C;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x830eac3c
	if (cr6.eq) goto loc_830EAC3C;
	// li r25,0
	r25.s64 = 0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// stw r25,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r25.u32);
	// stw r25,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r25.u32);
	// stw r25,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r25.u32);
	// bne cr6,0x830eab20
	if (!cr6.eq) goto loc_830EAB20;
	// mr r31,r27
	r31.u64 = r27.u64;
	// b 0x830eab90
	goto loc_830EAB90;
loc_830EAB20:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831b1a88
	sub_831B1A88(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x831b1a88
	sub_831B1A88(ctx, base);
	// add r11,r3,r29
	r11.u64 = ctx.r3.u64 + r29.u64;
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// ble cr6,0x830eac30
	if (!cr6.gt) goto loc_830EAC30;
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, xer);
	// ble cr6,0x830eac30
	if (!cr6.gt) goto loc_830EAC30;
	// lis r11,32767
	r11.s64 = 2147418112;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x830eac30
	if (!cr6.lt) goto loc_830EAC30;
	// rlwinm r3,r30,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x830eac30
	if (cr0.eq) goto loc_830EAC30;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831ba8e0
	sub_831BA8E0(ctx, base);
	// rlwinm r11,r29,1,0,30
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// subf r4,r29,r30
	ctx.r4.s64 = r30.s64 - r29.s64;
	// add r3,r11,r31
	ctx.r3.u64 = r11.u64 + r31.u64;
	// bl 0x831ba8e0
	sub_831BA8E0(ctx, base);
loc_830EAB90:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r28,r11,-7992
	r28.s64 = r11.s64 + -7992;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8324b51c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r29,r11,-7864
	r29.s64 = r11.s64 + -7864;
loc_830EABA8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8310d5a0
	sub_8310D5A0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(r31.u32, r27.u32, xer);
	// beq cr6,0x830eabec
	if (cr6.eq) goto loc_830EABEC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bge cr6,0x830eabd8
	if (!cr6.lt) goto loc_830EABD8;
	// mr r31,r27
	r31.u64 = r27.u64;
	// b 0x830eabe4
	goto loc_830EABE4;
loc_830EABD8:
	// li r11,1
	r11.s64 = 1;
	// mr r31,r25
	r31.u64 = r25.u64;
	// stw r11,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r11.u32);
loc_830EABE4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830eaba8
	if (!cr6.eq) goto loc_830EABA8;
loc_830EABEC:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bge cr6,0x830eac08
	if (!cr6.lt) goto loc_830EAC08;
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,38
	ctx.r3.u64 = ctx.r3.u64 | 38;
	// b 0x830eac44
	goto loc_830EAC44;
loc_830EAC08:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r11.u32);
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830eac44
	goto loc_830EAC44;
loc_830EAC30:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x830eac44
	goto loc_830EAC44;
loc_830EAC3C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830EAC44:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_830EAC50"))) PPC_WEAK_FUNC(sub_830EAC50);
PPC_FUNC_IMPL(__imp__sub_830EAC50) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r11,5461
	r11.s64 = 357892096;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// ori r11,r11,21845
	r11.u64 = r11.u64 | 21845;
	// stw r21,24(r22)
	PPC_STORE_U32(r22.u32 + 24, r21.u32);
	// mr r19,r6
	r19.u64 = ctx.r6.u64;
	// lwz r20,8(r30)
	r20.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r18,r7
	r18.u64 = ctx.r7.u64;
	// cmplw cr6,r20,r11
	cr6.compare<uint32_t>(r20.u32, r11.u32, xer);
	// mulli r3,r20,12
	ctx.r3.s64 = r20.s64 * 12;
	// ble cr6,0x830eac90
	if (!cr6.gt) goto loc_830EAC90;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_830EAC90:
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,56(r22)
	PPC_STORE_U32(r22.u32 + 56, ctx.r3.u32);
	// bne 0x830eacac
	if (!cr0.eq) goto loc_830EACAC;
loc_830EACA0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x830eaf70
	goto loc_830EAF70;
loc_830EACAC:
	// stw r20,52(r22)
	PPC_STORE_U32(r22.u32 + 52, r20.u32);
	// li r23,0
	r23.s64 = 0;
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(r20.s32, 0, xer);
	// ble cr6,0x830eae08
	if (!cr6.gt) goto loc_830EAE08;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r31,0
	r31.s64 = 0;
	// li r25,0
	r25.s64 = 0;
	// addi r24,r11,-22672
	r24.s64 = r11.s64 + -22672;
loc_830EACCC:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// ble cr6,0x830eadb4
	if (!cr6.gt) goto loc_830EADB4;
	// stw r21,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r21.u32);
	// addi r26,r1,88
	r26.s64 = ctx.r1.s64 + 88;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r24.u32);
	// li r28,0
	r28.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x830ead9c
	if (!cr6.gt) goto loc_830EAD9C;
	// li r29,0
	r29.s64 = 0;
loc_830EAD04:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8310aff8
	sub_8310AFF8(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830eae34
	if (cr0.lt) goto loc_830EAE34;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwzx r10,r10,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r29.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r9,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x830eae48
	if (!cr0.eq) goto loc_830EAE48;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// beq cr6,0x830ead78
	if (cr6.eq) goto loc_830EAD78;
	// lwz r26,100(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_830EAD78:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8310b5c8
	sub_8310B5C8(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x830ead04
	if (cr6.lt) goto loc_830EAD04;
loc_830EAD9C:
	// lwz r11,56(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 56);
	// stwx r26,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, r26.u32);
	// lwz r11,56(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 56);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
	// b 0x830eade0
	goto loc_830EADE0;
loc_830EADB4:
	// bne cr6,0x830eadf4
	if (!cr6.eq) goto loc_830EADF4;
	// lwz r11,56(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 56);
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r10,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, ctx.r10.u32);
	// lwz r11,56(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 56);
	// add r10,r11,r31
	ctx.r10.u64 = r11.u64 + r31.u64;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
loc_830EADE0:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r11,56(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 56);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lwzx r10,r10,r25
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r25.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
loc_830EADF4:
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// cmpw cr6,r23,r20
	cr6.compare<int32_t>(r23.s32, r20.s32, xer);
	// blt cr6,0x830eaccc
	if (cr6.lt) goto loc_830EACCC;
loc_830EAE08:
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(r19.s32, 0, xer);
	// beq cr6,0x830eae54
	if (cr6.eq) goto loc_830EAE54;
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830eae54
	if (cr6.eq) goto loc_830EAE54;
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x83107de8
	sub_83107DE8(ctx, base);
	// b 0x830eaf6c
	goto loc_830EAF6C;
loc_830EAE34:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_830EAE38:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8310b5c8
	sub_8310B5C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x830eaf70
	goto loc_830EAF70;
loc_830EAE48:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,87
	r31.u64 = r31.u64 | 87;
	// b 0x830eae38
	goto loc_830EAE38;
loc_830EAE54:
	// lwz r25,20(r30)
	r25.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8310fc18
	sub_8310FC18(ctx, base);
	// mr. r24,r3
	r24.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// beq 0x830eaca0
	if (cr0.eq) goto loc_830EACA0;
	// li r23,0
	r23.s64 = 0;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// ble cr6,0x830eaf48
	if (!cr6.gt) goto loc_830EAF48;
	// li r31,0
	r31.s64 = 0;
	// addi r27,r24,4
	r27.s64 = r24.s64 + 4;
loc_830EAE84:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwzx r11,r31,r11
	r11.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// stw r11,-4(r27)
	PPC_STORE_U32(r27.u32 + -4, r11.u32);
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x830eaeac
	if (cr0.eq) goto loc_830EAEAC;
	// li r11,1
	r11.s64 = 1;
	// b 0x830eaeb8
	goto loc_830EAEB8;
loc_830EAEAC:
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830eaebc
	if (cr0.eq) goto loc_830EAEBC;
	// li r11,2
	r11.s64 = 2;
loc_830EAEB8:
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
loc_830EAEBC:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// addi r7,r27,12
	ctx.r7.s64 = r27.s64 + 12;
	// addi r6,r27,4
	ctx.r6.s64 = r27.s64 + 4;
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// lbz r10,7(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 7);
	// lbz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 6);
	// lbz r11,5(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// extsb r5,r10
	ctx.r5.s64 = ctx.r10.s8;
	// extsb r4,r9
	ctx.r4.s64 = ctx.r9.s8;
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// bl 0x830e9a08
	sub_830E9A08(ctx, base);
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(r20.s32, 0, xer);
	// ble cr6,0x830eaf34
	if (!cr6.gt) goto loc_830EAF34;
	// li r28,0
	r28.s64 = 0;
loc_830EAEF8:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// add r4,r11,r28
	ctx.r4.u64 = r11.u64 + r28.u64;
	// bl 0x8310b3e0
	sub_8310B3E0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// blt 0x830eaf78
	if (cr0.lt) goto loc_830EAF78;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r28,r28,20
	r28.s64 = r28.s64 + 20;
	// addi r11,r11,20
	r11.s64 = r11.s64 + 20;
	// cmpw cr6,r26,r20
	cr6.compare<int32_t>(r26.s32, r20.s32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// blt cr6,0x830eaef8
	if (cr6.lt) goto loc_830EAEF8;
loc_830EAF34:
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r27,r27,28
	r27.s64 = r27.s64 + 28;
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// cmpw cr6,r23,r25
	cr6.compare<int32_t>(r23.s32, r25.s32, xer);
	// blt cr6,0x830eae84
	if (cr6.lt) goto loc_830EAE84;
loc_830EAF48:
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x83107de8
	sub_83107DE8(ctx, base);
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(r19.s32, 0, xer);
	// beq cr6,0x830eaf6c
	if (cr6.eq) goto loc_830EAF6C;
	// stw r24,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r24.u32);
loc_830EAF6C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830EAF70:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831b0b50
	return;
loc_830EAF78:
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8310fb98
	sub_8310FB98(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x830eaf70
	goto loc_830EAF70;
}

__attribute__((alias("__imp__sub_830EAF90"))) PPC_WEAK_FUNC(sub_830EAF90);
PPC_FUNC_IMPL(__imp__sub_830EAF90) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// cmplwi cr6,r25,1
	cr6.compare<uint32_t>(r25.u32, 1, xer);
	// beq cr6,0x830eafb8
	if (cr6.eq) goto loc_830EAFB8;
	// cmplwi cr6,r25,2
	cr6.compare<uint32_t>(r25.u32, 2, xer);
	// bne cr6,0x830eaff0
	if (!cr6.eq) goto loc_830EAFF0;
loc_830EAFB8:
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x830e9278
	sub_830E9278(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830eafe8
	if (cr6.eq) goto loc_830EAFE8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x830ea618
	sub_830EA618(ctx, base);
loc_830EAFE8:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x830e8340
	sub_830E8340(ctx, base);
loc_830EAFF0:
	// lis r30,-31942
	r30.s64 = -2093350912;
	// li r26,0
	r26.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r28,r26
	r28.u64 = r26.u64;
	// mr r31,r26
	r31.u64 = r26.u64;
	// lwz r4,-13920(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -13920);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x830eb0ec
	if (cr0.eq) goto loc_830EB0EC;
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830eb064
	if (cr6.eq) goto loc_830EB064;
loc_830EB020:
	// lwz r4,-13920(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -13920);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x830eb03c
	if (cr0.eq) goto loc_830EB03C;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// clrlwi. r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830eb09c
	if (!cr0.eq) goto loc_830EB09C;
loc_830EB03C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x830e8250
	sub_830E8250(ctx, base);
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830eb07c
	if (cr6.eq) goto loc_830EB07C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x830e8250
	sub_830E8250(ctx, base);
	// stw r26,36(r29)
	PPC_STORE_U32(r29.u32 + 36, r26.u32);
	// b 0x830eb09c
	goto loc_830EB09C;
loc_830EB064:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x830f0e80
	sub_830F0E80(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x830eb03c
	if (cr0.eq) goto loc_830EB03C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// b 0x830eb020
	goto loc_830EB020;
loc_830EB07C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x830eb09c
	if (cr6.eq) goto loc_830EB09C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830e8250
	sub_830E8250(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830eb09c
	if (cr6.eq) goto loc_830EB09C;
	// stw r26,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r26.u32);
loc_830EB09C:
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x830e9558
	sub_830E9558(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r31,r1,144
	r31.s64 = ctx.r1.s64 + 144;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// cmplwi cr6,r24,4
	cr6.compare<uint32_t>(r24.u32, 4, xer);
	// bne cr6,0x830eb0d8
	if (!cr6.eq) goto loc_830EB0D8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x830e9790
	sub_830E9790(ctx, base);
loc_830EB0D8:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x830eb0ec
	if (!cr6.eq) goto loc_830EB0EC;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x830e2548
	sub_830E2548(ctx, base);
loc_830EB0EC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_830EB0F8"))) PPC_WEAK_FUNC(sub_830EB0F8);
PPC_FUNC_IMPL(__imp__sub_830EB0F8) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// clrlwi r26,r25,24
	r26.u64 = r25.u32 & 0xFF;
	// cmplwi cr6,r26,4
	cr6.compare<uint32_t>(r26.u32, 4, xer);
	// blt cr6,0x830eb12c
	if (cr6.lt) goto loc_830EB12C;
	// cmplwi cr6,r26,255
	cr6.compare<uint32_t>(r26.u32, 255, xer);
	// beq cr6,0x830eb12c
	if (cr6.eq) goto loc_830EB12C;
loc_830EB120:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x830eb314
	goto loc_830EB314;
loc_830EB12C:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// li r24,0
	r24.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r28,r11,-7832
	r28.s64 = r11.s64 + -7832;
	// addi r27,r10,-7828
	r27.s64 = ctx.r10.s64 + -7828;
	// beq cr6,0x830eb1a0
	if (cr6.eq) goto loc_830EB1A0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x830eb1a0
	if (cr0.eq) goto loc_830EB1A0;
	// cmplwi cr6,r26,255
	cr6.compare<uint32_t>(r26.u32, 255, xer);
	// beq cr6,0x830eb1a0
	if (cr6.eq) goto loc_830EB1A0;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
loc_830EB164:
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// bne cr6,0x830eb178
	if (!cr6.eq) goto loc_830EB178;
	// mr r11,r28
	r11.u64 = r28.u64;
	// b 0x830eb180
	goto loc_830EB180;
loc_830EB178:
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
loc_830EB180:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bne cr6,0x830eb194
	if (!cr6.eq) goto loc_830EB194;
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, xer);
	// bne cr6,0x830eb120
	if (!cr6.eq) goto loc_830EB120;
loc_830EB194:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// blt cr6,0x830eb164
	if (cr6.lt) goto loc_830EB164;
loc_830EB1A0:
	// cmplwi cr6,r26,4
	cr6.compare<uint32_t>(r26.u32, 4, xer);
	// bge cr6,0x830eb1e4
	if (!cr6.lt) goto loc_830EB1E4;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x830eb268
	if (cr6.eq) goto loc_830EB268;
	// lis r8,-31947
	ctx.r8.s64 = -2093678592;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// mr r11,r24
	r11.u64 = r24.u64;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r11,24400(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24400, r11.u32);
	// stw r10,-7904(r7)
	PPC_STORE_U32(ctx.r7.u32 + -7904, ctx.r10.u32);
	// beq cr6,0x830eb23c
	if (cr6.eq) goto loc_830EB23C;
	// li r4,255
	ctx.r4.s64 = 255;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830eb0f8
	sub_830EB0F8(ctx, base);
	// b 0x830eb23c
	goto loc_830EB23C;
loc_830EB1E4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x830eb268
	if (cr6.eq) goto loc_830EB268;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// li r11,1
	r11.s64 = 1;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r31,r24
	r31.u64 = r24.u64;
	// stw r11,24400(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24400, r11.u32);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r30,r11,-7900
	r30.s64 = r11.s64 + -7900;
loc_830EB208:
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stwx r24,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, r24.u32);
	// bl 0x830e7a68
	sub_830E7A68(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830eb228
	if (cr0.eq) goto loc_830EB228;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830eb0f8
	sub_830EB0F8(ctx, base);
loc_830EB228:
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// clrlwi r4,r11,24
	ctx.r4.u64 = r11.u32 & 0xFF;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// blt cr6,0x830eb208
	if (cr6.lt) goto loc_830EB208;
loc_830EB23C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830e9f30
	sub_830E9F30(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830eb314
	if (cr0.lt) goto loc_830EB314;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x830eb268
	if (!cr6.eq) goto loc_830EB268;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,20
	ctx.r3.u64 = ctx.r3.u64 | 20;
	// b 0x830eb314
	goto loc_830EB314;
loc_830EB268:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x830e7a68
	sub_830E7A68(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x830eb298
	if (cr0.eq) goto loc_830EB298;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830e9170
	sub_830E9170(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
loc_830EB298:
	// cmplwi cr6,r26,255
	cr6.compare<uint32_t>(r26.u32, 255, xer);
	// bne cr6,0x830eb2a8
	if (!cr6.eq) goto loc_830EB2A8;
	// mr r11,r28
	r11.u64 = r28.u64;
	// b 0x830eb2b0
	goto loc_830EB2B0;
loc_830EB2A8:
	// rlwinm r11,r26,2,0,29
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
loc_830EB2B0:
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x830eb310
	if (cr6.eq) goto loc_830EB310;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830e91b0
	sub_830E91B0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x830eb310
	if (!cr6.eq) goto loc_830EB310;
	// cmplwi cr6,r26,255
	cr6.compare<uint32_t>(r26.u32, 255, xer);
	// bne cr6,0x830eb2f8
	if (!cr6.eq) goto loc_830EB2F8;
	// mr r11,r28
	r11.u64 = r28.u64;
	// b 0x830eb300
	goto loc_830EB300;
loc_830EB2F8:
	// rlwinm r11,r26,2,0,29
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
loc_830EB300:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x830eb314
	goto loc_830EB314;
loc_830EB310:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830EB314:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_830EB320"))) PPC_WEAK_FUNC(sub_830EB320);
PPC_FUNC_IMPL(__imp__sub_830EB320) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x830e9f30
	sub_830E9F30(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830eb370
	if (cr0.lt) goto loc_830EB370;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x830eb370
	if (cr6.eq) goto loc_830EB370;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,-13928(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13928);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// b 0x830eb374
	goto loc_830EB374;
loc_830EB370:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830EB374:
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

__attribute__((alias("__imp__sub_830EB388"))) PPC_WEAK_FUNC(sub_830EB388);
PPC_FUNC_IMPL(__imp__sub_830EB388) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x830e8400
	sub_830E8400(ctx, base);
	// b 0x830eb454
	goto loc_830EB454;
loc_830EB3A8:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x830eb3c0
	if (cr6.eq) goto loc_830EB3C0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f03b0
	sub_830F03B0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830eb448
	if (cr0.eq) goto loc_830EB448;
loc_830EB3C0:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x830eb3d8
	if (cr6.eq) goto loc_830EB3D8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f0830
	sub_830F0830(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830eb448
	if (cr0.eq) goto loc_830EB448;
loc_830EB3D8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e96b8
	sub_830E96B8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x830eb448
	if (!cr0.eq) goto loc_830EB448;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x830d7fa0
	sub_830D7FA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r28,r1,112
	r28.s64 = ctx.r1.s64 + 112;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x830eb434
	if (cr6.eq) goto loc_830EB434;
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x830eb46c
	if (cr6.eq) goto loc_830EB46C;
loc_830EB434:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// bl 0x830eb320
	sub_830EB320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x830eb474
	if (!cr0.eq) goto loc_830EB474;
loc_830EB448:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e84f0
	sub_830E84F0(ctx, base);
loc_830EB454:
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830eb3a8
	if (!cr6.eq) goto loc_830EB3A8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830EB464:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b78
	return;
loc_830EB46C:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// b 0x830eb464
	goto loc_830EB464;
loc_830EB474:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// b 0x830eb464
	goto loc_830EB464;
}

__attribute__((alias("__imp__sub_830EB480"))) PPC_WEAK_FUNC(sub_830EB480);
PPC_FUNC_IMPL(__imp__sub_830EB480) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x830e8478
	sub_830E8478(ctx, base);
	// b 0x830eb54c
	goto loc_830EB54C;
loc_830EB4A0:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x830eb4b8
	if (cr6.eq) goto loc_830EB4B8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f03b0
	sub_830F03B0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830eb540
	if (cr0.eq) goto loc_830EB540;
loc_830EB4B8:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x830eb4d0
	if (cr6.eq) goto loc_830EB4D0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f0830
	sub_830F0830(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830eb540
	if (cr0.eq) goto loc_830EB540;
loc_830EB4D0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e96b8
	sub_830E96B8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x830eb540
	if (!cr0.eq) goto loc_830EB540;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x830d7fa0
	sub_830D7FA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r28,r1,112
	r28.s64 = ctx.r1.s64 + 112;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x830eb52c
	if (cr6.eq) goto loc_830EB52C;
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x830eb564
	if (cr6.eq) goto loc_830EB564;
loc_830EB52C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// bl 0x830eb320
	sub_830EB320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x830eb56c
	if (!cr0.eq) goto loc_830EB56C;
loc_830EB540:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e8568
	sub_830E8568(ctx, base);
loc_830EB54C:
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830eb4a0
	if (!cr6.eq) goto loc_830EB4A0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830EB55C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b78
	return;
loc_830EB564:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// b 0x830eb55c
	goto loc_830EB55C;
loc_830EB56C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// b 0x830eb55c
	goto loc_830EB55C;
}

__attribute__((alias("__imp__sub_830EB578"))) PPC_WEAK_FUNC(sub_830EB578);
PPC_FUNC_IMPL(__imp__sub_830EB578) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
loc_830EB590:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x830eb63c
	goto loc_830EB63C;
loc_830EB598:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x830eb5b0
	if (cr6.eq) goto loc_830EB5B0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f03b0
	sub_830F03B0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830eb638
	if (cr0.eq) goto loc_830EB638;
loc_830EB5B0:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x830eb5c8
	if (cr6.eq) goto loc_830EB5C8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f0830
	sub_830F0830(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830eb638
	if (cr0.eq) goto loc_830EB638;
loc_830EB5C8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e96b8
	sub_830E96B8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x830eb638
	if (!cr0.eq) goto loc_830EB638;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x830d7fa0
	sub_830D7FA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r27,r1,112
	r27.s64 = ctx.r1.s64 + 112;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x830eb624
	if (cr6.eq) goto loc_830EB624;
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x830eb670
	if (cr6.eq) goto loc_830EB670;
loc_830EB624:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// bl 0x830eb320
	sub_830EB320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x830eb678
	if (!cr0.eq) goto loc_830EB678;
loc_830EB638:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_830EB63C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830e84f0
	sub_830E84F0(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830eb598
	if (!cr6.eq) goto loc_830EB598;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e8388
	sub_830E8388(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830eb684
	if (cr6.eq) goto loc_830EB684;
	// mr r30,r11
	r30.u64 = r11.u64;
	// b 0x830eb590
	goto loc_830EB590;
loc_830EB670:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// b 0x830eb694
	goto loc_830EB694;
loc_830EB678:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// b 0x830eb694
	goto loc_830EB694;
loc_830EB684:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830eb388
	sub_830EB388(ctx, base);
loc_830EB694:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_830EB6A0"))) PPC_WEAK_FUNC(sub_830EB6A0);
PPC_FUNC_IMPL(__imp__sub_830EB6A0) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
loc_830EB6B8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x830eb764
	goto loc_830EB764;
loc_830EB6C0:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x830eb6d8
	if (cr6.eq) goto loc_830EB6D8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f03b0
	sub_830F03B0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830eb760
	if (cr0.eq) goto loc_830EB760;
loc_830EB6D8:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x830eb6f0
	if (cr6.eq) goto loc_830EB6F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f0830
	sub_830F0830(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830eb760
	if (cr0.eq) goto loc_830EB760;
loc_830EB6F0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e96b8
	sub_830E96B8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x830eb760
	if (!cr0.eq) goto loc_830EB760;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x830d7fa0
	sub_830D7FA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r27,r1,112
	r27.s64 = ctx.r1.s64 + 112;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x830eb74c
	if (cr6.eq) goto loc_830EB74C;
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x830eb798
	if (cr6.eq) goto loc_830EB798;
loc_830EB74C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// bl 0x830eb320
	sub_830EB320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x830eb7a0
	if (!cr0.eq) goto loc_830EB7A0;
loc_830EB760:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_830EB764:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830e8568
	sub_830E8568(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830eb6c0
	if (!cr6.eq) goto loc_830EB6C0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e8388
	sub_830E8388(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830eb7ac
	if (cr6.eq) goto loc_830EB7AC;
	// mr r30,r11
	r30.u64 = r11.u64;
	// b 0x830eb6b8
	goto loc_830EB6B8;
loc_830EB798:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// b 0x830eb7bc
	goto loc_830EB7BC;
loc_830EB7A0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// b 0x830eb7bc
	goto loc_830EB7BC;
loc_830EB7AC:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830eb480
	sub_830EB480(ctx, base);
loc_830EB7BC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_830EB7C8"))) PPC_WEAK_FUNC(sub_830EB7C8);
PPC_FUNC_IMPL(__imp__sub_830EB7C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x830eb0f8
	sub_830EB0F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EB7D0"))) PPC_WEAK_FUNC(sub_830EB7D0);
PPC_FUNC_IMPL(__imp__sub_830EB7D0) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830eb7f8
	if (!cr6.eq) goto loc_830EB7F8;
loc_830EB7F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830eb82c
	goto loc_830EB82C;
loc_830EB7F8:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x830eb828
	if (cr6.lt) goto loc_830EB828;
	// beq cr6,0x830eb820
	if (cr6.eq) goto loc_830EB820;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x830eb818
	if (cr6.lt) goto loc_830EB818;
	// bne cr6,0x830eb7f0
	if (!cr6.eq) goto loc_830EB7F0;
	// bl 0x830eb480
	sub_830EB480(ctx, base);
	// b 0x830eb82c
	goto loc_830EB82C;
loc_830EB818:
	// bl 0x830eb388
	sub_830EB388(ctx, base);
	// b 0x830eb82c
	goto loc_830EB82C;
loc_830EB820:
	// bl 0x830eb6a0
	sub_830EB6A0(ctx, base);
	// b 0x830eb82c
	goto loc_830EB82C;
loc_830EB828:
	// bl 0x830eb578
	sub_830EB578(ctx, base);
loc_830EB82C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EB840"))) PPC_WEAK_FUNC(sub_830EB840);
PPC_FUNC_IMPL(__imp__sub_830EB840) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-7812
	r31.s64 = r11.s64 + -7812;
	// lwz r11,-7792(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7792);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x830eb88c
	if (!cr0.eq) goto loc_830EB88C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r11,-7792(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7792, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,2240(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8310b028
	sub_8310B028(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-20608
	ctx.r3.s64 = r11.s64 + -20608;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
loc_830EB88C:
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

__attribute__((alias("__imp__sub_830EB8A8"))) PPC_WEAK_FUNC(sub_830EB8A8);
PPC_FUNC_IMPL(__imp__sub_830EB8A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-7788
	r31.s64 = r11.s64 + -7788;
	// lwz r11,-7768(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7768);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x830eb8f4
	if (!cr0.eq) goto loc_830EB8F4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r11,-7768(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7768, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,2244(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2244);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8310b028
	sub_8310B028(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-20592
	ctx.r3.s64 = r11.s64 + -20592;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
loc_830EB8F4:
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

__attribute__((alias("__imp__sub_830EB910"))) PPC_WEAK_FUNC(sub_830EB910);
PPC_FUNC_IMPL(__imp__sub_830EB910) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-7764
	r31.s64 = r11.s64 + -7764;
	// lwz r11,-7744(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7744);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x830eb96c
	if (!cr0.eq) goto loc_830EB96C;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,-7744(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7744, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,2240(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8310b038
	sub_8310B038(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-20576
	ctx.r3.s64 = r11.s64 + -20576;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
loc_830EB96C:
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

__attribute__((alias("__imp__sub_830EB988"))) PPC_WEAK_FUNC(sub_830EB988);
PPC_FUNC_IMPL(__imp__sub_830EB988) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-7740
	r31.s64 = r11.s64 + -7740;
	// lwz r11,-7720(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7720);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x830eb9e4
	if (!cr0.eq) goto loc_830EB9E4;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,-7720(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7720, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,2244(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8310b038
	sub_8310B038(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-20560
	ctx.r3.s64 = r11.s64 + -20560;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
loc_830EB9E4:
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

__attribute__((alias("__imp__sub_830EBA00"))) PPC_WEAK_FUNC(sub_830EBA00);
PPC_FUNC_IMPL(__imp__sub_830EBA00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-7716
	r31.s64 = r11.s64 + -7716;
	// lwz r11,-7696(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7696);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x830eba68
	if (!cr0.eq) goto loc_830EBA68;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,-7696(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7696, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,2240(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	f0.f64 = double(temp.f32);
	// lfs f13,2244(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2244);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x8310b5d0
	sub_8310B5D0(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-20544
	ctx.r3.s64 = r11.s64 + -20544;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
loc_830EBA68:
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

__attribute__((alias("__imp__sub_830EBA80"))) PPC_WEAK_FUNC(sub_830EBA80);
PPC_FUNC_IMPL(__imp__sub_830EBA80) {
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-7692
	r31.s64 = r11.s64 + -7692;
	// lwz r11,-7672(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7672);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x830ebac8
	if (!cr0.eq) goto loc_830EBAC8;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,-7672(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7672, r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8310b018
	sub_8310B018(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-20528
	ctx.r3.s64 = r11.s64 + -20528;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
loc_830EBAC8:
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

__attribute__((alias("__imp__sub_830EBAE0"))) PPC_WEAK_FUNC(sub_830EBAE0);
PPC_FUNC_IMPL(__imp__sub_830EBAE0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r29,r11,-7964
	r29.s64 = r11.s64 + -7964;
	// li r30,0
	r30.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8324b51c
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830ebb18
	if (!cr6.eq) goto loc_830EBB18;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r30,-7848(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + -7848);
	// b 0x830ebb44
	goto loc_830EBB44;
loc_830EBB18:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r31,r11,-7880
	r31.s64 = r11.s64 + -7880;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8310d5a0
	sub_8310D5A0(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x830ebb44
	if (cr6.eq) goto loc_830EBB44;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_830EBB44:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830EBB58"))) PPC_WEAK_FUNC(sub_830EBB58);
PPC_FUNC_IMPL(__imp__sub_830EBB58) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x830e8910
	sub_830E8910(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830ebbc0
	if (!cr6.eq) goto loc_830EBBC0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e8998
	sub_830E8998(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830ebbc0
	if (!cr6.eq) goto loc_830EBBC0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x830ebbd4
	goto loc_830EBBD4;
loc_830EBBC0:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830eac50
	sub_830EAC50(ctx, base);
loc_830EBBD4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_830EBBE0"))) PPC_WEAK_FUNC(sub_830EBBE0);
PPC_FUNC_IMPL(__imp__sub_830EBBE0) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r6
	r19.u64 = ctx.r6.u64;
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r20,r7
	r20.u64 = ctx.r7.u64;
	// li r22,-1
	r22.s64 = -1;
	// li r21,-5
	r21.s64 = -5;
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(r19.s32, 0, xer);
	// beq cr6,0x830ebc2c
	if (cr6.eq) goto loc_830EBC2C;
	// lwz r11,20(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830ebc2c
	if (cr6.eq) goto loc_830EBC2C;
	// stw r11,36(r23)
	PPC_STORE_U32(r23.u32 + 36, r11.u32);
	// lwz r11,16(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 16);
	// stw r11,40(r23)
	PPC_STORE_U32(r23.u32 + 40, r11.u32);
	// b 0x830ebdb0
	goto loc_830EBDB0;
loc_830EBC2C:
	// lwz r31,16(r25)
	r31.u64 = PPC_LOAD_U32(r25.u32 + 16);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x830ebdc4
	if (!cr6.gt) goto loc_830EBDC4;
	// lis r11,4095
	r11.s64 = 268369920;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// rlwinm r11,r31,4,0,27
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x830ebc50
	if (!cr6.gt) goto loc_830EBC50;
	// mr r11,r22
	r11.u64 = r22.u64;
loc_830EBC50:
	// cmplw cr6,r11,r21
	cr6.compare<uint32_t>(r11.u32, r21.u32, xer);
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// ble cr6,0x830ebc60
	if (!cr6.gt) goto loc_830EBC60;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_830EBC60:
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830ebc94
	if (cr0.eq) goto loc_830EBC94;
	// addi r29,r3,4
	r29.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// mr r30,r29
	r30.u64 = r29.u64;
	// b 0x830ebc88
	goto loc_830EBC88;
loc_830EBC7C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831100e8
	sub_831100E8(ctx, base);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
loc_830EBC88:
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bge 0x830ebc7c
	if (!cr0.lt) goto loc_830EBC7C;
	// b 0x830ebc98
	goto loc_830EBC98;
loc_830EBC94:
	// li r29,0
	r29.s64 = 0;
loc_830EBC98:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r29,36(r23)
	PPC_STORE_U32(r23.u32 + 36, r29.u32);
	// bne cr6,0x830ebcb0
	if (!cr6.eq) goto loc_830EBCB0;
loc_830EBCA4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x830ebea8
	goto loc_830EBEA8;
loc_830EBCB0:
	// lwz r11,16(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 16);
	// li r24,0
	r24.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x830ebda0
	if (!cr6.gt) goto loc_830EBDA0;
	// li r31,0
	r31.s64 = 0;
loc_830EBCC4:
	// lwz r10,12(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 12);
	// lwz r11,36(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 36);
	// add r29,r31,r11
	r29.u64 = r31.u64 + r11.u64;
	// lwzx r3,r31,r10
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + ctx.r10.u32);
	// bl 0x831b1a88
	sub_831B1A88(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830ebca4
	if (cr0.eq) goto loc_830EBCA4;
	// lwz r11,12(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 12);
	// addi r4,r30,1
	ctx.r4.s64 = r30.s64 + 1;
	// lwzx r5,r31,r11
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// bl 0x831ba8e0
	sub_831BA8E0(ctx, base);
	// lwz r11,12(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 12);
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// lwz r11,12(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 12);
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// beq cr6,0x830ebd80
	if (cr6.eq) goto loc_830EBD80;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x830ebd80
	if (cr6.eq) goto loc_830EBD80;
	// lwz r11,12(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 12);
	// li r30,0
	r30.s64 = 0;
	// lwz r28,16(r25)
	r28.u64 = PPC_LOAD_U32(r25.u32 + 16);
	// add r10,r31,r11
	ctx.r10.u64 = r31.u64 + r11.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// lwz r26,12(r10)
	r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// ble cr6,0x830ebd78
	if (!cr6.gt) goto loc_830EBD78;
	// mr r27,r11
	r27.u64 = r11.u64;
loc_830EBD54:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x831ba858
	sub_831BA858(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830ebd7c
	if (cr0.eq) goto loc_830EBD7C;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r27,r27,16
	r27.s64 = r27.s64 + 16;
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(r30.s32, r28.s32, xer);
	// blt cr6,0x830ebd54
	if (cr6.lt) goto loc_830EBD54;
loc_830EBD78:
	// li r30,-1
	r30.s64 = -1;
loc_830EBD7C:
	// stw r30,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r30.u32);
loc_830EBD80:
	// lwz r11,40(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 40);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,40(r23)
	PPC_STORE_U32(r23.u32 + 40, r11.u32);
	// lwz r11,16(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 16);
	// cmpw cr6,r24,r11
	cr6.compare<int32_t>(r24.s32, r11.s32, xer);
	// blt cr6,0x830ebcc4
	if (cr6.lt) goto loc_830EBCC4;
loc_830EBDA0:
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(r19.s32, 0, xer);
	// beq cr6,0x830ebdc4
	if (cr6.eq) goto loc_830EBDC4;
	// lwz r11,36(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 36);
	// stw r11,20(r25)
	PPC_STORE_U32(r25.u32 + 20, r11.u32);
loc_830EBDB0:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r20,48(r23)
	PPC_STORE_U32(r23.u32 + 48, r20.u32);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// stw r10,44(r23)
	PPC_STORE_U32(r23.u32 + 44, ctx.r10.u32);
	// bl 0x8310b988
	sub_8310B988(ctx, base);
loc_830EBDC4:
	// lwz r26,28(r25)
	r26.u64 = PPC_LOAD_U32(r25.u32 + 28);
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(r26.s32, 1, xer);
	// blt cr6,0x830ebea4
	if (cr6.lt) goto loc_830EBEA4;
	// lis r11,963
	r11.s64 = 63111168;
	// ori r11,r11,50115
	r11.u64 = r11.u64 | 50115;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// mulli r11,r26,68
	r11.s64 = r26.s64 * 68;
	// ble cr6,0x830ebde8
	if (!cr6.gt) goto loc_830EBDE8;
	// mr r11,r22
	r11.u64 = r22.u64;
loc_830EBDE8:
	// cmplw cr6,r11,r21
	cr6.compare<uint32_t>(r11.u32, r21.u32, xer);
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// ble cr6,0x830ebdf8
	if (!cr6.gt) goto loc_830EBDF8;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_830EBDF8:
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830ebe3c
	if (cr0.eq) goto loc_830EBE3C;
	// addi r29,r3,4
	r29.s64 = ctx.r3.s64 + 4;
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r26.u32);
	// addic. r31,r26,-1
	xer.ca = r26.u32 > 0;
	r31.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// mr r30,r29
	r30.u64 = r29.u64;
	// blt 0x830ebe34
	if (cr0.lt) goto loc_830EBE34;
loc_830EBE18:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8310f8b0
	sub_8310F8B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831083d8
	sub_831083D8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,68
	r30.s64 = r30.s64 + 68;
	// bge 0x830ebe18
	if (!cr0.lt) goto loc_830EBE18;
loc_830EBE34:
	// mr r27,r29
	r27.u64 = r29.u64;
	// b 0x830ebe40
	goto loc_830EBE40;
loc_830EBE3C:
	// li r27,0
	r27.s64 = 0;
loc_830EBE40:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x830ebca4
	if (cr6.eq) goto loc_830EBCA4;
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// ble cr6,0x830ebe94
	if (!cr6.gt) goto loc_830EBE94;
	// li r30,0
	r30.s64 = 0;
	// mr r31,r27
	r31.u64 = r27.u64;
loc_830EBE5C:
	// lwz r11,32(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 32);
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// add r4,r11,r30
	ctx.r4.u64 = r11.u64 + r30.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x830ebb58
	sub_830EBB58(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// blt 0x830ebeb0
	if (cr0.lt) goto loc_830EBEB0;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,68
	r31.s64 = r31.s64 + 68;
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// cmpw cr6,r28,r26
	cr6.compare<int32_t>(r28.s32, r26.s32, xer);
	// blt cr6,0x830ebe5c
	if (cr6.lt) goto loc_830EBE5C;
loc_830EBE94:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x831088b0
	sub_831088B0(ctx, base);
loc_830EBEA4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830EBEA8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b50
	return;
loc_830EBEB0:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x830e9d10
	sub_830E9D10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x830ebea8
	goto loc_830EBEA8;
}

__attribute__((alias("__imp__sub_830EBEC8"))) PPC_WEAK_FUNC(sub_830EBEC8);
PPC_FUNC_IMPL(__imp__sub_830EBEC8) {
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
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x830eaac8
	sub_830EAAC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EBEF0"))) PPC_WEAK_FUNC(sub_830EBEF0);
PPC_FUNC_IMPL(__imp__sub_830EBEF0) {
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
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x830ebf24
	if (cr6.eq) goto loc_830EBF24;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8310c7c8
	sub_8310C7C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_830EBF24:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
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

__attribute__((alias("__imp__sub_830EBF58"))) PPC_WEAK_FUNC(sub_830EBF58);
PPC_FUNC_IMPL(__imp__sub_830EBF58) {
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
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// stw r30,0(r21)
	PPC_STORE_U32(r21.u32 + 0, r30.u32);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// bl 0x830e24d8
	sub_830E24D8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830ec288
	if (cr0.lt) goto loc_830EC288;
	// lis r22,-31942
	r22.s64 = -2093350912;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// bne cr6,0x830ebfec
	if (!cr6.eq) goto loc_830EBFEC;
	// lwz r4,-13940(r22)
	ctx.r4.u64 = PPC_LOAD_U32(r22.u32 + -13940);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830d7698
	sub_830D7698(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830ebfec
	if (cr0.eq) goto loc_830EBFEC;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830ebfec
	if (cr0.lt) goto loc_830EBFEC;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830ebfec
	if (cr6.eq) goto loc_830EBFEC;
	// lwz r10,240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 240);
	// ori r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 8192;
	// stw r10,240(r11)
	PPC_STORE_U32(r11.u32 + 240, ctx.r10.u32);
loc_830EBFEC:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// mr r29,r30
	r29.u64 = r30.u64;
	// addi r10,r10,-22672
	ctx.r10.s64 = ctx.r10.s64 + -22672;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
loc_830EC008:
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830ec01c
	if (cr6.eq) goto loc_830EC01C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_830EC01C:
	// cmpw cr6,r29,r10
	cr6.compare<int32_t>(r29.s32, ctx.r10.s32, xer);
	// bge cr6,0x830ec050
	if (!cr6.lt) goto loc_830EC050;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mullw r10,r10,r29
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r29.s32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x830e97d8
	sub_830E97D8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x830ec264
	if (cr0.lt) goto loc_830EC264;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// b 0x830ec008
	goto loc_830EC008;
loc_830EC050:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ec114
	if (cr6.eq) goto loc_830EC114;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bl 0x830de740
	sub_830DE740(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830ec0a4
	if (!cr0.eq) goto loc_830EC0A4;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r3,-13652(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -13652);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ec0a4
	if (cr6.eq) goto loc_830EC0A4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x830ec0a4
	if (!cr0.lt) goto loc_830EC0A4;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
loc_830EC0A4:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830d70e8
	sub_830D70E8(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830ec114
	if (cr6.eq) goto loc_830EC114;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// beq cr6,0x830ec114
	if (cr6.eq) goto loc_830EC114;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x830daf80
	sub_830DAF80(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x830ec0f0
	if (!cr0.eq) goto loc_830EC0F0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// bl 0x830e88b0
	sub_830E88B0(ctx, base);
	// lis r31,-32720
	r31.s64 = -2144337920;
	// ori r31,r31,22
	r31.u64 = r31.u64 | 22;
	// b 0x830ec264
	goto loc_830EC264;
loc_830EC0F0:
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x830e1f80
	sub_830E1F80(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x830ec264
	if (cr0.lt) goto loc_830EC264;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_830EC114:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_830EC118:
	// lwz r11,8(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830ec12c
	if (cr6.eq) goto loc_830EC12C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_830EC12C:
	// cmpw cr6,r29,r10
	cr6.compare<int32_t>(r29.s32, ctx.r10.s32, xer);
	// bge cr6,0x830ec1ac
	if (!cr6.lt) goto loc_830EC1AC;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mullw r10,r10,r29
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r29.s32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// bl 0x830ebf58
	sub_830EBF58(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x830ec264
	if (cr0.lt) goto loc_830EC264;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830e82f0
	sub_830E82F0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x830ec264
	if (cr0.lt) goto loc_830EC264;
	// lwz r4,-13940(r22)
	ctx.r4.u64 = PPC_LOAD_U32(r22.u32 + -13940);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830ec1a4
	if (cr0.eq) goto loc_830EC1A4;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
loc_830EC1A4:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// b 0x830ec118
	goto loc_830EC118;
loc_830EC1AC:
	// lwz r11,32(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830ec1c4
	if (!cr6.eq) goto loc_830EC1C4;
	// lwz r11,12(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830ec27c
	if (cr6.eq) goto loc_830EC27C;
loc_830EC1C4:
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x830ec1e8
	if (cr0.eq) goto loc_830EC1E8;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x8310f8b0
	sub_8310F8B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83107bd0
	sub_83107BD0(ctx, base);
	// mr r30,r31
	r30.u64 = r31.u64;
loc_830EC1E8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x830ec1fc
	if (!cr6.eq) goto loc_830EC1FC;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x830ec264
	goto loc_830EC264;
loc_830EC1FC:
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x830ebbe0
	sub_830EBBE0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x830ec254
	if (cr0.lt) goto loc_830EC254;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// beq cr6,0x830ec240
	if (cr6.eq) goto loc_830EC240;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83107c58
	sub_83107C58(ctx, base);
loc_830EC240:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830e8c90
	sub_830E8C90(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bge 0x830ec27c
	if (!cr0.lt) goto loc_830EC27C;
loc_830EC254:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83108970
	sub_83108970(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_830EC264:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ec274
	if (cr6.eq) goto loc_830EC274;
	// bl 0x830e2548
	sub_830E2548(ctx, base);
loc_830EC274:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x830ec288
	goto loc_830EC288;
loc_830EC27C:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r21)
	PPC_STORE_U32(r21.u32 + 0, r11.u32);
loc_830EC288:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_830EC290"))) PPC_WEAK_FUNC(sub_830EC290);
PPC_FUNC_IMPL(__imp__sub_830EC290) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b14
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x830ec2c0
	if (!cr6.eq) goto loc_830EC2C0;
loc_830EC2B4:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// b 0x830ec6e8
	goto loc_830EC6E8;
loc_830EC2C0:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830e8388
	sub_830E8388(ctx, base);
	// lwz r25,88(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// bne cr6,0x830ec2e4
	if (!cr6.eq) goto loc_830EC2E4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x830ec6e8
	goto loc_830EC6E8;
loc_830EC2E4:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r28,r11,-28224
	r28.s64 = r11.s64 + -28224;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830de740
	sub_830DE740(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x830d7618
	sub_830D7618(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// beq 0x830ec328
	if (cr0.eq) goto loc_830EC328;
	// li r11,0
	r11.s64 = 0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x830e88b0
	sub_830E88B0(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x830ec6e8
	goto loc_830EC6E8;
loc_830EC328:
	// bl 0x830e7780
	sub_830E7780(ctx, base);
	// mr. r23,r3
	r23.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r23.s32, 0, xer);
	// beq 0x830ec2b4
	if (cr0.eq) goto loc_830EC2B4;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x830e9518
	sub_830E9518(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r31,r1,144
	r31.s64 = ctx.r1.s64 + 144;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830ec394
	if (cr0.lt) goto loc_830EC394;
	// lwz r11,152(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x830ec394
	if (cr6.eq) goto loc_830EC394;
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x830ec394
	if (cr6.eq) goto loc_830EC394;
	// lwz r11,56(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 56);
	// stw r27,64(r23)
	PPC_STORE_U32(r23.u32 + 64, r27.u32);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,56(r23)
	PPC_STORE_U32(r23.u32 + 56, r11.u32);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,68(r23)
	PPC_STORE_U32(r23.u32 + 68, r11.u32);
loc_830EC394:
	// li r24,0
	r24.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r24.u32);
	// beq cr6,0x830ec3f4
	if (cr6.eq) goto loc_830EC3F4;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830ec3f4
	if (cr0.eq) goto loc_830EC3F4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830f0300
	sub_830F0300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830eaac8
	sub_830EAAC8(ctx, base);
	// lwz r26,88(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830ec3ec
	if (cr0.lt) goto loc_830EC3EC;
	// lwz r11,28(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bge cr6,0x830ec3ec
	if (!cr6.lt) goto loc_830EC3EC;
	// mr r26,r24
	r26.u64 = r24.u64;
loc_830EC3EC:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x830ec41c
	if (!cr6.eq) goto loc_830EC41C;
loc_830EC3F4:
	// lwz r11,56(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 56);
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x830ec6e4
	if (cr6.eq) goto loc_830EC6E4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830eaf90
	sub_830EAF90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830ec6e8
	goto loc_830EC6E8;
loc_830EC41C:
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830e24d8
	sub_830E24D8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x830ec674
	if (cr0.lt) goto loc_830EC674;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830ec458
	if (!cr6.eq) goto loc_830EC458;
	// lis r30,-32768
	r30.s64 = -2147483648;
	// ori r30,r30,65535
	r30.u64 = r30.u64 | 65535;
	// b 0x830ec674
	goto loc_830EC674;
loc_830EC458:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x830ee9a0
	sub_830EE9A0(ctx, base);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x830ee9b8
	sub_830EE9B8(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x830ec490
	if (cr6.eq) goto loc_830EC490;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,32(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + 32);
	// bl 0x830f9dc0
	sub_830F9DC0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x830ec674
	if (cr0.lt) goto loc_830EC674;
loc_830EC490:
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830ec530
	if (cr6.eq) goto loc_830EC530;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x830ec530
	if (!cr6.gt) goto loc_830EC530;
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x830e9be8
	sub_830E9BE8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830ec530
	if (cr0.lt) goto loc_830EC530;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830e9648
	sub_830E9648(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-24792(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24792);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x830ec504
	if (!cr6.gt) goto loc_830EC504;
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// lfs f12,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
loc_830EC504:
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x830ec524
	if (!cr6.gt) goto loc_830EC524;
	// lfs f0,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f0,124(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
loc_830EC524:
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830e8810
	sub_830E8810(ctx, base);
loc_830EC530:
	// lis r31,-31947
	r31.s64 = -2093678592;
	// lwz r3,24408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24408);
	// bl 0x8324b85c
	__imp__KeTlsGetValue(ctx, base);
	// lwz r11,24408(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24408);
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8324b86c
	__imp__KeTlsSetValue(ctx, base);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830e84f0
	sub_830E84F0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830e85e0
	sub_830E85E0(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bge cr6,0x830ec590
	if (!cr6.lt) goto loc_830EC590;
	// lwz r3,24408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24408);
loc_830EC578:
	// bl 0x8324b85c
	__imp__KeTlsGetValue(ctx, base);
	// lwz r11,24408(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24408);
	// addi r4,r3,-1
	ctx.r4.s64 = ctx.r3.s64 + -1;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8324b86c
	__imp__KeTlsSetValue(ctx, base);
	// b 0x830ec674
	goto loc_830EC674;
loc_830EC590:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830e8340
	sub_830E8340(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830e82f0
	sub_830E82F0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// lwz r3,24408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24408);
	// blt 0x830ec578
	if (cr0.lt) goto loc_830EC578;
	// bl 0x8324b85c
	__imp__KeTlsGetValue(ctx, base);
	// lwz r11,24408(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24408);
	// addi r4,r3,-1
	ctx.r4.s64 = ctx.r3.s64 + -1;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8324b86c
	__imp__KeTlsSetValue(ctx, base);
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830ec5f8
	if (cr0.eq) goto loc_830EC5F8;
	// li r11,1
	r11.s64 = 1;
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8310f8b0
	sub_8310F8B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831083d8
	sub_831083D8(ctx, base);
	// mr r28,r31
	r28.u64 = r31.u64;
	// b 0x830ec5fc
	goto loc_830EC5FC;
loc_830EC5F8:
	// mr r28,r24
	r28.u64 = r24.u64;
loc_830EC5FC:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x830ec610
	if (!cr6.eq) goto loc_830EC610;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x830ec674
	goto loc_830EC674;
loc_830EC610:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,32(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830eac50
	sub_830EAC50(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x830ec668
	if (cr0.lt) goto loc_830EC668;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x830ec654
	if (cr0.eq) goto loc_830EC654;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x8310f8b0
	sub_8310F8B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83107bd0
	sub_83107BD0(ctx, base);
	// b 0x830ec658
	goto loc_830EC658;
loc_830EC654:
	// mr r31,r24
	r31.u64 = r24.u64;
loc_830EC658:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830ec68c
	if (!cr6.eq) goto loc_830EC68C;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
loc_830EC668:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830e9d10
	sub_830E9D10(ctx, base);
loc_830EC674:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ec684
	if (cr6.eq) goto loc_830EC684;
	// bl 0x830e2548
	sub_830E2548(ctx, base);
loc_830EC684:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x830ec6e8
	goto loc_830EC6E8;
loc_830EC68C:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831088b0
	sub_831088B0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830e8c90
	sub_830E8C90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83107d10
	sub_83107D10(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830e8d88
	sub_830E8D88(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831086e0
	sub_831086E0(ctx, base);
	// lwz r11,56(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 56);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,56(r23)
	PPC_STORE_U32(r23.u32 + 56, r11.u32);
loc_830EC6E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830EC6E8:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_830EC6F0"))) PPC_WEAK_FUNC(sub_830EC6F0);
PPC_FUNC_IMPL(__imp__sub_830EC6F0) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x830ec728
	if (!cr6.eq) goto loc_830EC728;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x830ec800
	goto loc_830EC800;
loc_830EC728:
	// li r31,0
	r31.s64 = 0;
	// lis r24,-31947
	r24.s64 = -2093678592;
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// lwz r3,24408(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 24408);
	// bl 0x8324b85c
	__imp__KeTlsGetValue(ctx, base);
	// lwz r11,24408(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 24408);
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8324b86c
	__imp__KeTlsSetValue(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ebf58
	sub_830EBF58(ctx, base);
	// lwz r11,24408(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 24408);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8324b85c
	__imp__KeTlsGetValue(ctx, base);
	// lwz r11,24408(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 24408);
	// addi r4,r3,-1
	ctx.r4.s64 = ctx.r3.s64 + -1;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8324b86c
	__imp__KeTlsSetValue(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bge cr6,0x830ec7a8
	if (!cr6.lt) goto loc_830EC7A8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x830ec800
	goto loc_830EC800;
loc_830EC7A8:
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// beq cr6,0x830ec7d8
	if (cr6.eq) goto loc_830EC7D8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ea908
	sub_830EA908(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x830ec7d8
	if (!cr0.lt) goto loc_830EC7D8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e2548
	sub_830E2548(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x830ec800
	goto loc_830EC800;
loc_830EC7D8:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,-13940(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13940);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830ec7f8
	if (cr0.eq) goto loc_830EC7F8;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
loc_830EC7F8:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_830EC800:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_830EC808"))) PPC_WEAK_FUNC(sub_830EC808);
PPC_FUNC_IMPL(__imp__sub_830EC808) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lis r28,-31942
	r28.s64 = -2093350912;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x830ec834
	if (cr6.eq) goto loc_830EC834;
	// lwz r11,-7884(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -7884);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,-7884(r28)
	PPC_STORE_U32(r28.u32 + -7884, r11.u32);
loc_830EC834:
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830e91f0
	sub_830E91F0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x830ec8e4
	if (cr0.lt) goto loc_830EC8E4;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x830ec87c
	if (cr6.eq) goto loc_830EC87C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830eb0f8
	sub_830EB0F8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x830ec8e4
	goto loc_830EC8E4;
loc_830EC87C:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x830ec8dc
	if (!cr6.eq) goto loc_830EC8DC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e8400
	sub_830E8400(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830ec8dc
	if (cr6.eq) goto loc_830EC8DC;
loc_830EC8A4:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ec808
	sub_830EC808(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830ec8d4
	if (cr0.eq) goto loc_830EC8D4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e84f0
	sub_830E84F0(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830ec8a4
	if (!cr6.eq) goto loc_830EC8A4;
loc_830EC8D4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830ec8e4
	if (!cr6.eq) goto loc_830EC8E4;
loc_830EC8DC:
	// lis r30,-32768
	r30.s64 = -2147483648;
	// ori r30,r30,16389
	r30.u64 = r30.u64 | 16389;
loc_830EC8E4:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x830ec8f8
	if (cr6.eq) goto loc_830EC8F8;
	// lwz r11,-7884(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -7884);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,-7884(r28)
	PPC_STORE_U32(r28.u32 + -7884, r11.u32);
loc_830EC8F8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_830EC908"))) PPC_WEAK_FUNC(sub_830EC908);
PPC_FUNC_IMPL(__imp__sub_830EC908) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830ecbac
	if (cr6.eq) goto loc_830ECBAC;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x830ecbac
	if (cr6.eq) goto loc_830ECBAC;
	// li r30,0
	r30.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r30.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// bl 0x830e6790
	sub_830E6790(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830ec984
	if (cr0.eq) goto loc_830EC984;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830d5b80
	sub_830D5B80(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x830eca08
	if (!cr0.eq) goto loc_830ECA08;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x830ecbb4
	goto loc_830ECBB4;
loc_830EC984:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x830ec9a4
	if (!cr6.eq) goto loc_830EC9A4;
	// lis r31,-32720
	r31.s64 = -2144337920;
	// ori r31,r31,18
	r31.u64 = r31.u64 | 18;
loc_830EC994:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x830ecbb4
	goto loc_830ECBB4;
loc_830EC9A4:
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x830e6840
	sub_830E6840(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bge 0x830ec9cc
	if (!cr0.lt) goto loc_830EC9CC;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// b 0x830ec994
	goto loc_830EC994;
loc_830EC9CC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x830d5b80
	sub_830D5B80(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x830eca08
	if (!cr6.eq) goto loc_830ECA08;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// lwz r25,96(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
loc_830EC9F8:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x830ecbb4
	goto loc_830ECBB4;
loc_830ECA08:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// lwz r25,96(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x830e5478
	sub_830E5478(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x830eca34
	if (!cr0.lt) goto loc_830ECA34;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x830ec9f8
	goto loc_830EC9F8;
loc_830ECA34:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// bl 0x830e8400
	sub_830E8400(ctx, base);
	// lwz r29,88(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// mr r27,r29
	r27.u64 = r29.u64;
	// beq cr6,0x830ecad8
	if (cr6.eq) goto loc_830ECAD8;
	// lis r28,-31942
	r28.s64 = -2093350912;
loc_830ECA58:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r31,-13920(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + -13920);
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830d7698
	sub_830D7698(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x830eca90
	if (!cr0.eq) goto loc_830ECA90;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830e84f0
	sub_830E84F0(ctx, base);
	// lwz r29,88(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x830eca58
	if (!cr6.eq) goto loc_830ECA58;
	// b 0x830ecad0
	goto loc_830ECAD0;
loc_830ECA90:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830e84f0
	sub_830E84F0(ctx, base);
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(r29.u32, r27.u32, xer);
	// bne cr6,0x830ecac0
	if (!cr6.eq) goto loc_830ECAC0;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830ecad0
	if (cr6.eq) goto loc_830ECAD0;
loc_830ECAC0:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830e88b0
	sub_830E88B0(ctx, base);
loc_830ECAD0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830ecaec
	if (!cr6.eq) goto loc_830ECAEC;
loc_830ECAD8:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830e2548
	sub_830E2548(ctx, base);
	// lis r30,-32720
	r30.s64 = -2144337920;
	// ori r30,r30,10
	r30.u64 = r30.u64 | 10;
	// b 0x830ec9f8
	goto loc_830EC9F8;
loc_830ECAEC:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e95f0
	sub_830E95F0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bge 0x830ecb10
	if (!cr0.lt) goto loc_830ECB10;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830e2548
	sub_830E2548(ctx, base);
	// mr r30,r29
	r30.u64 = r29.u64;
	// b 0x830ec9f8
	goto loc_830EC9F8;
loc_830ECB10:
	// lis r29,-31947
	r29.s64 = -2093678592;
	// lwz r3,24408(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 24408);
	// bl 0x8324b85c
	__imp__KeTlsGetValue(ctx, base);
	// lwz r11,24408(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24408);
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8324b86c
	__imp__KeTlsSetValue(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e8340
	sub_830E8340(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830e2548
	sub_830E2548(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// lwz r3,24408(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 24408);
	// bl 0x8324b85c
	__imp__KeTlsGetValue(ctx, base);
	// lwz r11,24408(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24408);
	// addi r4,r3,-1
	ctx.r4.s64 = ctx.r3.s64 + -1;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8324b86c
	__imp__KeTlsSetValue(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ea908
	sub_830EA908(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x830ecb78
	if (!cr0.lt) goto loc_830ECB78;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e2548
	sub_830E2548(ctx, base);
	// b 0x830ec9f8
	goto loc_830EC9F8;
loc_830ECB78:
	// rlwinm. r11,r23,0,30,30
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830ecb98
	if (cr0.eq) goto loc_830ECB98;
	// li r4,41
	ctx.r4.s64 = 41;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e2638
	sub_830E2638(ctx, base);
loc_830ECB98:
	// stw r31,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r31.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830ecbb4
	goto loc_830ECBB4;
loc_830ECBAC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830ECBB4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_830ECBC0"))) PPC_WEAK_FUNC(sub_830ECBC0);
PPC_FUNC_IMPL(__imp__sub_830ECBC0) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x830ec908
	sub_830EC908(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830ECBC8"))) PPC_WEAK_FUNC(sub_830ECBC8);
PPC_FUNC_IMPL(__imp__sub_830ECBC8) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// b 0x830ec6f0
	sub_830EC6F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830ECBD0"))) PPC_WEAK_FUNC(sub_830ECBD0);
PPC_FUNC_IMPL(__imp__sub_830ECBD0) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// clrlwi r29,r11,31
	r29.u64 = r11.u32 & 0x1;
	// bl 0x830eaac8
	sub_830EAAC8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830eccac
	if (cr0.lt) goto loc_830ECCAC;
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830ecc28
	if (cr0.eq) goto loc_830ECC28;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,37
	ctx.r3.u64 = ctx.r3.u64 | 37;
	// b 0x830eccac
	goto loc_830ECCAC;
loc_830ECC28:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r30,r11,-7936
	r30.s64 = r11.s64 + -7936;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8324b51c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// bne cr6,0x830ecc54
	if (!cr6.eq) goto loc_830ECC54;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
loc_830ECC54:
	// cntlzw r11,r29
	r11.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r6,r11,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ec6f0
	sub_830EC6F0(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x830ecca8
	if (cr6.eq) goto loc_830ECCA8;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// blt cr6,0x830ecca8
	if (cr6.lt) goto loc_830ECCA8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x830e9598
	sub_830E9598(ctx, base);
loc_830ECCA8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_830ECCAC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_830ECCB8"))) PPC_WEAK_FUNC(sub_830ECCB8);
PPC_FUNC_IMPL(__imp__sub_830ECCB8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x830e7780
	sub_830E7780(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830ecce4
	if (!cr0.eq) goto loc_830ECCE4;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// b 0x830eccf8
	goto loc_830ECCF8;
loc_830ECCE4:
	// lwz r4,48(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ec290
	sub_830EC290(ctx, base);
loc_830ECCF8:
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

__attribute__((alias("__imp__sub_830ECD10"))) PPC_WEAK_FUNC(sub_830ECD10);
PPC_FUNC_IMPL(__imp__sub_830ECD10) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x830e7780
	sub_830E7780(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830ecd3c
	if (!cr0.eq) goto loc_830ECD3C;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// b 0x830ecd50
	goto loc_830ECD50;
loc_830ECD3C:
	// lwz r4,52(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ec290
	sub_830EC290(ctx, base);
loc_830ECD50:
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

__attribute__((alias("__imp__sub_830ECD68"))) PPC_WEAK_FUNC(sub_830ECD68);
PPC_FUNC_IMPL(__imp__sub_830ECD68) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x830e7780
	sub_830E7780(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830ecd94
	if (!cr0.eq) goto loc_830ECD94;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// b 0x830ecda8
	goto loc_830ECDA8;
loc_830ECD94:
	// lwz r4,44(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ec290
	sub_830EC290(ctx, base);
loc_830ECDA8:
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

__attribute__((alias("__imp__sub_830ECDC0"))) PPC_WEAK_FUNC(sub_830ECDC0);
PPC_FUNC_IMPL(__imp__sub_830ECDC0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x830e7780
	sub_830E7780(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830ecdf4
	if (!cr0.eq) goto loc_830ECDF4;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// b 0x830ece1c
	goto loc_830ECE1C;
loc_830ECDF4:
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(r30.u32, 3, xer);
	// blt cr6,0x830ece08
	if (cr6.lt) goto loc_830ECE08;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x830ece1c
	goto loc_830ECE1C;
loc_830ECE08:
	// lwz r4,40(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ec290
	sub_830EC290(ctx, base);
loc_830ECE1C:
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

__attribute__((alias("__imp__sub_830ECE38"))) PPC_WEAK_FUNC(sub_830ECE38);
PPC_FUNC_IMPL(__imp__sub_830ECE38) {
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
	// li r28,0
	r28.s64 = 0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830ece9c
	if (cr6.eq) goto loc_830ECE9C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r29,r28
	r29.u64 = r28.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x830ece90
	if (!cr6.gt) goto loc_830ECE90;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_830ECE6C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + r11.u64;
	// bl 0x830d5c18
	sub_830D5C18(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x830ece6c
	if (cr6.lt) goto loc_830ECE6C;
loc_830ECE90:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
loc_830ECE9C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830eceb0
	if (cr6.eq) goto loc_830ECEB0;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// stw r28,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r28.u32);
loc_830ECEB0:
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// stw r28,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830ECEC0"))) PPC_WEAK_FUNC(sub_830ECEC0);
PPC_FUNC_IMPL(__imp__sub_830ECEC0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x830ecfbc
	if (cr6.lt) goto loc_830ECFBC;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// bge cr6,0x830ecfbc
	if (!cr6.lt) goto loc_830ECFBC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mulli r29,r30,12
	r29.s64 = r30.s64 * 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + r11.u64;
	// bl 0x830d5c18
	sub_830D5C18(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// beq cr6,0x830ecf4c
	if (cr6.eq) goto loc_830ECF4C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - r30.s64;
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + r11.u64;
	// mulli r11,r10,12
	r11.s64 = ctx.r10.s64 * 12;
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// addi r5,r11,-12
	ctx.r5.s64 = r11.s64 + -12;
	// bl 0x831b5e00
	sub_831B5E00(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r11,-4
	ctx.r5.s64 = r11.s64 + -4;
	// bl 0x831b5e00
	sub_831B5E00(ctx, base);
loc_830ECF4C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mulli r4,r11,12
	ctx.r4.s64 = r11.s64 * 12;
	// bl 0x830e6210
	sub_830E6210(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830ecf74
	if (!cr0.eq) goto loc_830ECF74;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x830ecf78
	if (!cr6.eq) goto loc_830ECF78;
loc_830ECF74:
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_830ECF78:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x830e6210
	sub_830E6210(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830ecfa0
	if (!cr0.eq) goto loc_830ECFA0;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x830ecfa4
	if (!cr6.eq) goto loc_830ECFA4;
loc_830ECFA0:
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
loc_830ECFA4:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// b 0x830ecfc0
	goto loc_830ECFC0;
loc_830ECFBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830ECFC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830ECFC8"))) PPC_WEAK_FUNC(sub_830ECFC8);
PPC_FUNC_IMPL(__imp__sub_830ECFC8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x830ed0c4
	if (cr6.lt) goto loc_830ED0C4;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// bge cr6,0x830ed0c4
	if (!cr6.lt) goto loc_830ED0C4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mulli r29,r30,12
	r29.s64 = r30.s64 * 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + r11.u64;
	// bl 0x830d5c18
	sub_830D5C18(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// beq cr6,0x830ed054
	if (cr6.eq) goto loc_830ED054;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - r30.s64;
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + r11.u64;
	// mulli r11,r10,12
	r11.s64 = ctx.r10.s64 * 12;
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// addi r5,r11,-12
	ctx.r5.s64 = r11.s64 + -12;
	// bl 0x831b5e00
	sub_831B5E00(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r11,-8
	ctx.r5.s64 = r11.s64 + -8;
	// bl 0x831b5e00
	sub_831B5E00(ctx, base);
loc_830ED054:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mulli r4,r11,12
	ctx.r4.s64 = r11.s64 * 12;
	// bl 0x830e6210
	sub_830E6210(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830ed07c
	if (!cr0.eq) goto loc_830ED07C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x830ed080
	if (!cr6.eq) goto loc_830ED080;
loc_830ED07C:
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_830ED080:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x830e6210
	sub_830E6210(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830ed0a8
	if (!cr0.eq) goto loc_830ED0A8;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x830ed0ac
	if (!cr6.eq) goto loc_830ED0AC;
loc_830ED0A8:
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
loc_830ED0AC:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// b 0x830ed0c8
	goto loc_830ED0C8;
loc_830ED0C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830ED0C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830ED0D0"))) PPC_WEAK_FUNC(sub_830ED0D0);
PPC_FUNC_IMPL(__imp__sub_830ED0D0) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// li r28,0
	r28.s64 = 0;
	// addi r30,r11,-7880
	r30.s64 = r11.s64 + -7880;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x830ed12c
	if (!cr6.gt) goto loc_830ED12C;
	// li r29,0
	r29.s64 = 0;
loc_830ED0F8:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwzx r31,r29,r10
	r31.u64 = PPC_LOAD_U32(r29.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830ed11c
	if (cr6.eq) goto loc_830ED11C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ebef0
	sub_830EBEF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
loc_830ED11C:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x830ed0f8
	if (cr6.lt) goto loc_830ED0F8;
loc_830ED12C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ece38
	sub_830ECE38(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830ED140"))) PPC_WEAK_FUNC(sub_830ED140);
PPC_FUNC_IMPL(__imp__sub_830ED140) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// clrlwi r30,r28,24
	r30.u64 = r28.u32 & 0xFF;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(r30.u32, 4, xer);
	// blt cr6,0x830ed17c
	if (cr6.lt) goto loc_830ED17C;
	// cmplwi cr6,r30,255
	cr6.compare<uint32_t>(r30.u32, 255, xer);
	// beq cr6,0x830ed17c
	if (cr6.eq) goto loc_830ED17C;
	// cmplwi cr6,r30,254
	cr6.compare<uint32_t>(r30.u32, 254, xer);
	// beq cr6,0x830ed17c
	if (cr6.eq) goto loc_830ED17C;
	// cmplwi cr6,r30,253
	cr6.compare<uint32_t>(r30.u32, 253, xer);
	// bne cr6,0x830ed31c
	if (!cr6.eq) goto loc_830ED31C;
loc_830ED17C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ed31c
	if (cr6.eq) goto loc_830ED31C;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x830ed31c
	if (cr6.eq) goto loc_830ED31C;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,253
	cr6.compare<uint32_t>(r30.u32, 253, xer);
	// bne cr6,0x830ed1c8
	if (!cr6.eq) goto loc_830ED1C8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r30,255
	r30.s64 = 255;
	// bl 0x830ea058
	sub_830EA058(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830ed1c4
	if (cr0.eq) goto loc_830ED1C4;
	// bl 0x830e7b30
	sub_830E7B30(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_830ED1C4:
	// mr r28,r30
	r28.u64 = r30.u64;
loc_830ED1C8:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830e93f0
	sub_830E93F0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bne cr6,0x830ed1fc
	if (!cr6.eq) goto loc_830ED1FC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830ed324
	goto loc_830ED324;
loc_830ED1FC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830e9790
	sub_830E9790(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830ed218
	if (cr0.eq) goto loc_830ED218;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x830ed324
	goto loc_830ED324;
loc_830ED218:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ea4c8
	sub_830EA4C8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x830e8388
	sub_830E8388(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830ed28c
	if (!cr6.eq) goto loc_830ED28C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e8388
	sub_830E8388(ctx, base);
	// lwz r29,80(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x830ed264
	if (!cr6.eq) goto loc_830ED264;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,11
	ctx.r3.u64 = ctx.r3.u64 | 11;
	// b 0x830ed324
	goto loc_830ED324;
loc_830ED264:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e84f0
	sub_830E84F0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830e85e0
	sub_830E85E0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830ed324
	if (cr0.lt) goto loc_830ED324;
loc_830ED28C:
	// li r4,41
	ctx.r4.s64 = 41;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e2638
	sub_830E2638(ctx, base);
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,254
	cr6.compare<uint32_t>(r11.u32, 254, xer);
	// beq cr6,0x830ed2c0
	if (cr6.eq) goto loc_830ED2C0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ec808
	sub_830EC808(ctx, base);
loc_830ED2C0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e8250
	sub_830E8250(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e8250
	sub_830E8250(ctx, base);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,-13920(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13920);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830ed2f4
	if (cr0.eq) goto loc_830ED2F4;
	// stw r30,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r30.u32);
loc_830ED2F4:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bne cr6,0x830ed308
	if (!cr6.eq) goto loc_830ED308;
	// li r4,1
	ctx.r4.s64 = 1;
loc_830ED308:
	// bl 0x830ecdc0
	sub_830ECDC0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ecd68
	sub_830ECD68(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830ed324
	goto loc_830ED324;
loc_830ED31C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830ED324:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_830ED330"))) PPC_WEAK_FUNC(sub_830ED330);
PPC_FUNC_IMPL(__imp__sub_830ED330) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// clrlwi r29,r27,24
	r29.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r29,4
	cr6.compare<uint32_t>(r29.u32, 4, xer);
	// blt cr6,0x830ed368
	if (cr6.lt) goto loc_830ED368;
	// cmplwi cr6,r29,255
	cr6.compare<uint32_t>(r29.u32, 255, xer);
	// beq cr6,0x830ed368
	if (cr6.eq) goto loc_830ED368;
	// cmplwi cr6,r29,254
	cr6.compare<uint32_t>(r29.u32, 254, xer);
	// beq cr6,0x830ed368
	if (cr6.eq) goto loc_830ED368;
	// cmplwi cr6,r29,253
	cr6.compare<uint32_t>(r29.u32, 253, xer);
	// bne cr6,0x830ed548
	if (!cr6.eq) goto loc_830ED548;
loc_830ED368:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ed548
	if (cr6.eq) goto loc_830ED548;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830ed548
	if (cr6.eq) goto loc_830ED548;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,253
	cr6.compare<uint32_t>(r29.u32, 253, xer);
	// bne cr6,0x830ed3b4
	if (!cr6.eq) goto loc_830ED3B4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r29,255
	r29.s64 = 255;
	// bl 0x830ea058
	sub_830EA058(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830ed3b0
	if (cr0.eq) goto loc_830ED3B0;
	// bl 0x830e7b30
	sub_830E7B30(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_830ED3B0:
	// mr r27,r29
	r27.u64 = r29.u64;
loc_830ED3B4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830f0e80
	sub_830F0E80(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(r29.u32, r31.u32, xer);
	// beq cr6,0x830ed3dc
	if (cr6.eq) goto loc_830ED3DC;
loc_830ED3C8:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ed46c
	if (cr6.eq) goto loc_830ED46C;
	// bl 0x830f0e80
	sub_830F0E80(ctx, base);
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, r31.u32, xer);
	// bne cr6,0x830ed3c8
	if (!cr6.eq) goto loc_830ED3C8;
loc_830ED3DC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ea4c8
	sub_830EA4C8(ctx, base);
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// beq cr6,0x830ed428
	if (cr6.eq) goto loc_830ED428;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e9790
	sub_830E9790(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(r29.u32, r31.u32, xer);
	// beq cr6,0x830ed428
	if (cr6.eq) goto loc_830ED428;
loc_830ED404:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830e9790
	sub_830E9790(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830e2548
	sub_830E2548(ctx, base);
	// mr r29,r28
	r29.u64 = r28.u64;
	// cmplw cr6,r28,r31
	cr6.compare<uint32_t>(r28.u32, r31.u32, xer);
	// bne cr6,0x830ed404
	if (!cr6.eq) goto loc_830ED404;
loc_830ED428:
	// li r11,0
	r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x830e8388
	sub_830E8388(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830ed4b8
	if (!cr6.eq) goto loc_830ED4B8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e8388
	sub_830E8388(ctx, base);
	// lwz r29,80(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x830ed478
	if (!cr6.eq) goto loc_830ED478;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,11
	ctx.r3.u64 = ctx.r3.u64 | 11;
	// b 0x830ed550
	goto loc_830ED550;
loc_830ED46C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x830ed550
	goto loc_830ED550;
loc_830ED478:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e8568
	sub_830E8568(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830e85e0
	sub_830E85E0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830ed550
	if (cr0.lt) goto loc_830ED550;
	// li r4,41
	ctx.r4.s64 = 41;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e2638
	sub_830E2638(ctx, base);
loc_830ED4B8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ea428
	sub_830EA428(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830e9440
	sub_830E9440(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,254
	cr6.compare<uint32_t>(r11.u32, 254, xer);
	// beq cr6,0x830ed4fc
	if (cr6.eq) goto loc_830ED4FC;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ec808
	sub_830EC808(ctx, base);
loc_830ED4FC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e8250
	sub_830E8250(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e8250
	sub_830E8250(ctx, base);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,-13920(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13920);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830ed530
	if (cr0.eq) goto loc_830ED530;
	// stw r30,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r30.u32);
loc_830ED530:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830eccb8
	sub_830ECCB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ecd10
	sub_830ECD10(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830ed550
	goto loc_830ED550;
loc_830ED548:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830ED550:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_830ED558"))) PPC_WEAK_FUNC(sub_830ED558);
PPC_FUNC_IMPL(__imp__sub_830ED558) {
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
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x830ed5c8
	if (!cr6.eq) goto loc_830ED5C8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x830ed58c
	if (!cr6.eq) goto loc_830ED58C;
	// li r30,1
	r30.s64 = 1;
	// b 0x830ed5a4
	goto loc_830ED5A4;
loc_830ED58C:
	// rlwinm. r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// ble 0x830ed5b8
	if (!cr0.gt) goto loc_830ED5B8;
	// lis r11,2730
	r11.s64 = 178913280;
	// ori r11,r11,43690
	r11.u64 = r11.u64 | 43690;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x830ed5b8
	if (!cr6.lt) goto loc_830ED5B8;
loc_830ED5A4:
	// mulli r4,r30,12
	ctx.r4.s64 = r30.s64 * 12;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830e6210
	sub_830E6210(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830ed5c0
	if (!cr0.eq) goto loc_830ED5C0;
loc_830ED5B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830ed604
	goto loc_830ED604;
loc_830ED5C0:
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_830ED5C8:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add. r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830ed5f4
	if (cr0.eq) goto loc_830ED5F4;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
loc_830ED5F4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_830ED604:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830ED610"))) PPC_WEAK_FUNC(sub_830ED610);
PPC_FUNC_IMPL(__imp__sub_830ED610) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r28,r11,-7992
	r28.s64 = r11.s64 + -7992;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8324b51c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r31,r11,-7864
	r31.s64 = r11.s64 + -7864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8310d5a0
	sub_8310D5A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x830ed668
	if (!cr0.lt) goto loc_830ED668;
	// lis r31,-32768
	r31.s64 = -2147483648;
	// ori r31,r31,16389
	r31.u64 = r31.u64 | 16389;
loc_830ED654:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_830ED668:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + r11.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x8310bac0
	sub_8310BAC0(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ed68c
	if (cr6.eq) goto loc_830ED68C;
	// bl 0x8310bac0
	sub_8310BAC0(ctx, base);
loc_830ED68C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8310d5a0
	sub_8310D5A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x830ed6ac
	if (cr6.eq) goto loc_830ED6AC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ecfc8
	sub_830ECFC8(ctx, base);
loc_830ED6AC:
	// li r31,0
	r31.s64 = 0;
	// b 0x830ed654
	goto loc_830ED654;
}

__attribute__((alias("__imp__sub_830ED6B8"))) PPC_WEAK_FUNC(sub_830ED6B8);
PPC_FUNC_IMPL(__imp__sub_830ED6B8) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x830d5b80
	sub_830D5B80(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x830ed6fc
	if (!cr0.eq) goto loc_830ED6FC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830ed718
	goto loc_830ED718;
loc_830ED6FC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ed558
	sub_830ED558(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_830ED718:
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

__attribute__((alias("__imp__sub_830ED730"))) PPC_WEAK_FUNC(sub_830ED730);
PPC_FUNC_IMPL(__imp__sub_830ED730) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
	// bl 0x830eaa40
	sub_830EAA40(ctx, base);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r25,r11,-7964
	r25.s64 = r11.s64 + -7964;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8324b51c
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x830ed7a8
	if (!cr6.eq) goto loc_830ED7A8;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r31,r11,-7848
	r31.s64 = r11.s64 + -7848;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830d5b80
	sub_830D5B80(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830ed8d8
	if (cr0.eq) goto loc_830ED8D8;
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x830ed7a0
	if (cr6.eq) goto loc_830ED7A0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8310c7c8
	sub_8310C7C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_830ED7A0:
	// stw r26,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r26.u32);
	// b 0x830ed8e0
	goto loc_830ED8E0;
loc_830ED7A8:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r29,r11,-7880
	r29.s64 = r11.s64 + -7880;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8310d5a0
	sub_8310D5A0(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x830ed850
	if (!cr6.eq) goto loc_830ED850;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830ed8e0
	if (cr6.eq) goto loc_830ED8E0;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830ed7f4
	if (cr0.eq) goto loc_830ED7F4;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r28.u32);
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r28.u32);
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r28.u32);
	// b 0x830ed7f8
	goto loc_830ED7F8;
loc_830ED7F4:
	// mr r30,r28
	r30.u64 = r28.u64;
loc_830ED7F8:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x830ed8d8
	if (cr6.eq) goto loc_830ED8D8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830d5b80
	sub_830D5B80(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830ed834
	if (cr0.eq) goto loc_830ED834;
	// stw r26,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r26.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8310d890
	sub_8310D890(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x830ed8e0
	if (!cr0.eq) goto loc_830ED8E0;
loc_830ED834:
	// lis r28,-32761
	r28.s64 = -2147024896;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r28,r28,14
	r28.u64 = r28.u64 | 14;
	// bl 0x830ebef0
	sub_830EBEF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// b 0x830ed8e0
	goto loc_830ED8E0;
loc_830ED850:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// lwzx r30,r10,r11
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bne cr6,0x830ed8a0
	if (!cr6.eq) goto loc_830ED8A0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x830ed87c
	if (cr6.eq) goto loc_830ED87C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ebef0
	sub_830EBEF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_830ED87C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8310d5a0
	sub_8310D5A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x830ed8e0
	if (cr6.eq) goto loc_830ED8E0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830ecec0
	sub_830ECEC0(ctx, base);
	// b 0x830ed8e0
	goto loc_830ED8E0;
loc_830ED8A0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830d5b80
	sub_830D5B80(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830ed8d8
	if (cr0.eq) goto loc_830ED8D8;
	// lwz r31,12(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830ed8d0
	if (cr6.eq) goto loc_830ED8D0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8310c7c8
	sub_8310C7C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_830ED8D0:
	// stw r26,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r26.u32);
	// b 0x830ed8e0
	goto loc_830ED8E0;
loc_830ED8D8:
	// lis r28,-32761
	r28.s64 = -2147024896;
	// ori r28,r28,14
	r28.u64 = r28.u64 | 14;
loc_830ED8E0:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_830ED8F8"))) PPC_WEAK_FUNC(sub_830ED8F8);
PPC_FUNC_IMPL(__imp__sub_830ED8F8) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r25,r11,-7992
	r25.s64 = r11.s64 + -7992;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8324b51c
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// li r28,0
	r28.s64 = 0;
	// bne cr6,0x830ed97c
	if (!cr6.eq) goto loc_830ED97C;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r30,r11,-7864
	r30.s64 = r11.s64 + -7864;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x830ed970
	if (!cr6.gt) goto loc_830ED970;
	// mr r31,r28
	r31.u64 = r28.u64;
loc_830ED93C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// add r29,r31,r11
	r29.u64 = r31.u64 + r11.u64;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// bl 0x8310bac0
	sub_8310BAC0(ctx, base);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ed95c
	if (cr6.eq) goto loc_830ED95C;
	// bl 0x8310bac0
	sub_8310BAC0(ctx, base);
loc_830ED95C:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x830ed93c
	if (cr6.lt) goto loc_830ED93C;
loc_830ED970:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ece38
	sub_830ECE38(ctx, base);
	// b 0x830eda34
	goto loc_830EDA34;
loc_830ED97C:
	// mr r30,r28
	r30.u64 = r28.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bl 0x831b1a88
	sub_831B1A88(ctx, base);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r31,r11,-7864
	r31.s64 = r11.s64 + -7864;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x830eda00
	if (!cr6.gt) goto loc_830EDA00;
	// mr r29,r28
	r29.u64 = r28.u64;
loc_830ED9B0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r30,r29,r11
	r30.u64 = r29.u64 + r11.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x830ed9e8
	if (cr6.eq) goto loc_830ED9E8;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x831badd0
	sub_831BADD0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x830ed9e8
	if (!cr0.eq) goto loc_830ED9E8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x830ed6b8
	sub_830ED6B8(ctx, base);
loc_830ED9E8:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x830ed9b0
	if (cr6.lt) goto loc_830ED9B0;
	// lwz r30,84(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_830EDA00:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x830eda20
	if (!cr6.gt) goto loc_830EDA20;
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_830EDA0C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830ed610
	sub_830ED610(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// bne 0x830eda0c
	if (!cr0.eq) goto loc_830EDA0C;
loc_830EDA20:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830ed730
	sub_830ED730(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830e4318
	sub_830E4318(ctx, base);
loc_830EDA34:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_830EDA48"))) PPC_WEAK_FUNC(sub_830EDA48);
PPC_FUNC_IMPL(__imp__sub_830EDA48) {
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
	// li r3,8
	ctx.r3.s64 = 8;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// mr. r11,r3
	r11.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830eda80
	if (!cr0.eq) goto loc_830EDA80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830d6008
	sub_830D6008(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830eda98
	goto loc_830EDA98;
loc_830EDA80:
	// sth r30,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r30.u16);
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r29,2(r11)
	PPC_STORE_U16(r11.u32 + 2, r29.u16);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_830EDA98:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830EDAA0"))) PPC_WEAK_FUNC(sub_830EDAA0);
PPC_FUNC_IMPL(__imp__sub_830EDAA0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x830d6008
	sub_830D6008(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b1a88
	sub_831B1A88(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// li r29,0
	r29.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// beq 0x830edb68
	if (cr0.eq) goto loc_830EDB68;
loc_830EDAD4:
	// lhz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(r11.u32, 45, xer);
	// bne cr6,0x830edb08
	if (!cr6.eq) goto loc_830EDB08;
	// addi r11,r28,-1
	r11.s64 = r28.s64 + -1;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// beq cr6,0x830edb38
	if (cr6.eq) goto loc_830EDB38;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bne cr6,0x830edb9c
	if (!cr6.eq) goto loc_830EDB9C;
	// clrlwi. r11,r4,16
	r11.u64 = ctx.r4.u32 & 0xFFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830edb9c
	if (cr0.eq) goto loc_830EDB9C;
	// li r29,1
	r29.s64 = 1;
	// b 0x830edb58
	goto loc_830EDB58;
loc_830EDB08:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x830edb38
	if (cr6.eq) goto loc_830EDB38;
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x830edba0
	if (cr6.gt) goto loc_830EDBA0;
	// bl 0x830eda48
	sub_830EDA48(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830edb90
	if (cr0.eq) goto loc_830EDB90;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// b 0x830edb58
	goto loc_830EDB58;
loc_830EDB38:
	// clrlwi. r11,r4,16
	r11.u64 = ctx.r4.u32 & 0xFFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830edb54
	if (cr0.eq) goto loc_830EDB54;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830eda48
	sub_830EDA48(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830edb90
	if (cr0.eq) goto loc_830EDB90;
loc_830EDB54:
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(r31.u32 + 0);
loc_830EDB58:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// cmplw cr6,r27,r28
	cr6.compare<uint32_t>(r27.u32, r28.u32, xer);
	// blt cr6,0x830edad4
	if (cr6.lt) goto loc_830EDAD4;
loc_830EDB68:
	// clrlwi. r11,r4,16
	r11.u64 = ctx.r4.u32 & 0xFFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830edb84
	if (cr0.eq) goto loc_830EDB84;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830eda48
	sub_830EDA48(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830edb90
	if (cr0.eq) goto loc_830EDB90;
loc_830EDB84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830EDB88:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_830EDB90:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x830edb88
	goto loc_830EDB88;
loc_830EDB9C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_830EDBA0:
	// bl 0x830d6008
	sub_830D6008(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x830edb88
	goto loc_830EDB88;
}

__attribute__((alias("__imp__sub_830EDBB0"))) PPC_WEAK_FUNC(sub_830EDBB0);
PPC_FUNC_IMPL(__imp__sub_830EDBB0) {
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
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830edbe8
	if (cr6.eq) goto loc_830EDBE8;
	// bl 0x83119068
	sub_83119068(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
loc_830EDBE8:
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

__attribute__((alias("__imp__sub_830EDC00"))) PPC_WEAK_FUNC(sub_830EDC00);
PPC_FUNC_IMPL(__imp__sub_830EDC00) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,244(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r11.u32);
	// bl 0x830e7b30
	sub_830E7B30(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x830eb7c8
	sub_830EB7C8(ctx, base);
	// lwz r11,244(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r11,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r11.u32);
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

__attribute__((alias("__imp__sub_830EDC68"))) PPC_WEAK_FUNC(sub_830EDC68);
PPC_FUNC_IMPL(__imp__sub_830EDC68) {
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r5,36(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x830edcc0
	if (cr6.eq) goto loc_830EDCC0;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// bne cr6,0x830edc9c
	if (!cr6.eq) goto loc_830EDC9C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830edcc4
	goto loc_830EDCC4;
loc_830EDC9C:
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r4,44(r11)
	PPC_STORE_U32(r11.u32 + 44, ctx.r4.u32);
	// lis r4,-21829
	ctx.r4.s64 = -1430585344;
	// stw r10,72(r11)
	PPC_STORE_U32(r11.u32 + 72, ctx.r10.u32);
	// ori r4,r4,52445
	ctx.r4.u64 = ctx.r4.u64 | 52445;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r9,40(r11)
	PPC_STORE_U32(r11.u32 + 40, ctx.r9.u32);
	// bl 0x83108a60
	sub_83108A60(ctx, base);
loc_830EDCC0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830EDCC4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EDCD8"))) PPC_WEAK_FUNC(sub_830EDCD8);
PPC_FUNC_IMPL(__imp__sub_830EDCD8) {
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
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830edd14
	if (cr6.eq) goto loc_830EDD14;
	// lis r4,-21829
	ctx.r4.s64 = -1430585344;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// ori r4,r4,52445
	ctx.r4.u64 = ctx.r4.u64 | 52445;
	// bl 0x83108b20
	sub_83108B20(ctx, base);
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
loc_830EDD14:
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

__attribute__((alias("__imp__sub_830EDD28"))) PPC_WEAK_FUNC(sub_830EDD28);
PPC_FUNC_IMPL(__imp__sub_830EDD28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-28652
	ctx.r3.s64 = r11.s64 + -28652;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EDD38"))) PPC_WEAK_FUNC(sub_830EDD38);
PPC_FUNC_IMPL(__imp__sub_830EDD38) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// lwz r11,240(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 240);
	// rlwinm r11,r11,0,14,12
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF;
	// stw r11,240(r31)
	PPC_STORE_U32(r31.u32 + 240, r11.u32);
	// beq cr6,0x830edd90
	if (cr6.eq) goto loc_830EDD90;
	// lwz r11,244(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830edd90
	if (cr6.eq) goto loc_830EDD90;
	// addi r4,r31,164
	ctx.r4.s64 = r31.s64 + 164;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83118ec0
	sub_83118EC0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,244(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// bl 0x8311e4a0
	sub_8311E4A0(ctx, base);
loc_830EDD90:
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

__attribute__((alias("__imp__sub_830EDDA8"))) PPC_WEAK_FUNC(sub_830EDDA8);
PPC_FUNC_IMPL(__imp__sub_830EDDA8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r11,-13816(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -13816);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x830ede48
	if (cr6.eq) goto loc_830EDE48;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r11,-13812(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -13812);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x830ede48
	if (cr6.eq) goto loc_830EDE48;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r11,-13808(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -13808);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x830ede48
	if (cr6.eq) goto loc_830EDE48;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r11,-13804(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -13804);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x830ede48
	if (cr6.eq) goto loc_830EDE48;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r11,-13800(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -13800);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x830ede48
	if (cr6.eq) goto loc_830EDE48;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r11,-13796(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -13796);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x830ede48
	if (cr6.eq) goto loc_830EDE48;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r11,-13792(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -13792);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x830ede48
	if (cr6.eq) goto loc_830EDE48;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r11,-13788(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -13788);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x830ede4c
	if (!cr6.eq) goto loc_830EDE4C;
loc_830EDE48:
	// addi r30,r3,4
	r30.s64 = ctx.r3.s64 + 4;
loc_830EDE4C:
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

__attribute__((alias("__imp__sub_830EDE68"))) PPC_WEAK_FUNC(sub_830EDE68);
PPC_FUNC_IMPL(__imp__sub_830EDE68) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x83119100
	sub_83119100(ctx, base);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x83119128
	sub_83119128(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x831190d8
	sub_831190D8(ctx, base);
	// lwz r29,12(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x830edef0
	if (cr6.eq) goto loc_830EDEF0;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830ededc
	if (cr6.eq) goto loc_830EDEDC;
	// addi r4,r29,4
	ctx.r4.s64 = r29.s64 + 4;
loc_830EDEDC:
	// bl 0x831195d8
	sub_831195D8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
loc_830EDEF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830EDF00"))) PPC_WEAK_FUNC(sub_830EDF00);
PPC_FUNC_IMPL(__imp__sub_830EDF00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r9,232(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 232);
	// lwz r6,240(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 240);
	// andi. r7,r9,10
	ctx.r7.u64 = ctx.r9.u64 & 10;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// addi r8,r7,-10
	ctx.r8.s64 = ctx.r7.s64 + -10;
	// rlwinm. r10,r6,28,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bne 0x830edf38
	if (!cr0.eq) goto loc_830EDF38;
	// andi. r5,r9,5
	ctx.r5.u64 = ctx.r9.u64 & 5;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// cmplwi cr6,r5,5
	cr6.compare<uint32_t>(ctx.r5.u32, 5, xer);
	// bne cr6,0x830edf38
	if (!cr6.eq) goto loc_830EDF38;
	// rlwinm. r5,r9,0,25,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne 0x830edf40
	if (!cr0.eq) goto loc_830EDF40;
loc_830EDF38:
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,60(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 60, temp.u32);
loc_830EDF40:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830edf58
	if (!cr6.eq) goto loc_830EDF58;
	// clrlwi. r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x830edf58
	if (cr0.eq) goto loc_830EDF58;
	// rlwinm. r10,r9,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x830edf60
	if (!cr0.eq) goto loc_830EDF60;
loc_830EDF58:
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,64(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 64, temp.u32);
loc_830EDF60:
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,68(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 68, temp.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830edfd4
	if (cr6.eq) goto loc_830EDFD4;
	// rlwinm r8,r6,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// beq cr6,0x830edfd4
	if (cr6.eq) goto loc_830EDFD4;
	// lwz r8,240(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 240);
	// rlwinm r8,r8,0,26,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r8,32
	cr6.compare<uint32_t>(ctx.r8.u32, 32, xer);
	// bne cr6,0x830edfd4
	if (!cr6.eq) goto loc_830EDFD4;
	// andi. r9,r9,5
	ctx.r9.u64 = ctx.r9.u64 & 5;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// cmplwi cr6,r9,5
	cr6.compare<uint32_t>(ctx.r9.u32, 5, xer);
	// bne cr6,0x830edfb4
	if (!cr6.eq) goto loc_830EDFB4;
	// lfs f13,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 260);
	f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// lfs f13,60(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f0,60(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 60, temp.u32);
loc_830EDFB4:
	// cmplwi cr6,r7,10
	cr6.compare<uint32_t>(ctx.r7.u32, 10, xer);
	// bne cr6,0x830edfd4
	if (!cr6.eq) goto loc_830EDFD4;
	// lfs f13,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,264(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 264);
	f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// lfs f13,64(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f0,64(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 64, temp.u32);
loc_830EDFD4:
	// ori r10,r6,2
	ctx.r10.u64 = ctx.r6.u64 | 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,240(r11)
	PPC_STORE_U32(r11.u32 + 240, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EDFE8"))) PPC_WEAK_FUNC(sub_830EDFE8);
PPC_FUNC_IMPL(__imp__sub_830EDFE8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EDFF8"))) PPC_WEAK_FUNC(sub_830EDFF8);
PPC_FUNC_IMPL(__imp__sub_830EDFF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r10,44(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830ee010
	if (!cr6.eq) goto loc_830EE010;
	// stw r4,44(r9)
	PPC_STORE_U32(ctx.r9.u32 + 44, ctx.r4.u32);
	// b 0x830ee038
	goto loc_830EE038;
loc_830EE010:
	// addi r11,r10,32
	r11.s64 = ctx.r10.s64 + 32;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x830ee028
	goto loc_830EE028;
loc_830EE01C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r10,32
	r11.s64 = ctx.r10.s64 + 32;
	// lwz r8,32(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
loc_830EE028:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x830ee01c
	if (!cr6.eq) goto loc_830EE01C;
	// stw r4,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r4.u32);
	// stw r10,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r10.u32);
loc_830EE038:
	// stw r9,40(r4)
	PPC_STORE_U32(ctx.r4.u32 + 40, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,240(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 240);
	// ori r11,r11,32768
	r11.u64 = r11.u64 | 32768;
	// stw r11,240(r9)
	PPC_STORE_U32(ctx.r9.u32 + 240, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EE050"))) PPC_WEAK_FUNC(sub_830EE050);
PPC_FUNC_IMPL(__imp__sub_830EE050) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// blt 0x830ee074
	if (cr0.lt) goto loc_830EE074;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_830EE074:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EE088"))) PPC_WEAK_FUNC(sub_830EE088);
PPC_FUNC_IMPL(__imp__sub_830EE088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,228(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EE098"))) PPC_WEAK_FUNC(sub_830EE098);
PPC_FUNC_IMPL(__imp__sub_830EE098) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r11,-1
	r11.s64 = -1;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// lwz r11,228(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 228);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830ee120
	if (cr6.eq) goto loc_830EE120;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x830ee120
	if (!cr6.gt) goto loc_830EE120;
	// li r30,0
	r30.s64 = 0;
loc_830EE0D8:
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bl 0x831ba858
	sub_831BA858(ctx, base);
	// lwz r11,228(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 228);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830ee10c
	if (cr0.eq) goto loc_830EE10C;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(r31.s32, ctx.r10.s32, xer);
	// blt cr6,0x830ee0d8
	if (cr6.lt) goto loc_830EE0D8;
	// b 0x830ee120
	goto loc_830EE120;
loc_830EE10C:
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
loc_830EE120:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_830EE130"))) PPC_WEAK_FUNC(sub_830EE130);
PPC_FUNC_IMPL(__imp__sub_830EE130) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r31,44(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// b 0x830ee174
	goto loc_830EE174;
loc_830EE154:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830ee170
	if (cr6.eq) goto loc_830EE170;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831ba858
	sub_831BA858(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830ee18c
	if (cr0.eq) goto loc_830EE18C;
loc_830EE170:
	// lwz r31,32(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 32);
loc_830EE174:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830ee154
	if (!cr6.eq) goto loc_830EE154;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,23
	ctx.r3.u64 = ctx.r3.u64 | 23;
loc_830EE184:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_830EE18C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830ee184
	goto loc_830EE184;
}

__attribute__((alias("__imp__sub_830EE1A0"))) PPC_WEAK_FUNC(sub_830EE1A0);
PPC_FUNC_IMPL(__imp__sub_830EE1A0) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r31,24(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x830ee1e4
	goto loc_830EE1E4;
loc_830EE1C4:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830ee1e0
	if (cr6.eq) goto loc_830EE1E0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831ba858
	sub_831BA858(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830ee1fc
	if (cr0.eq) goto loc_830EE1FC;
loc_830EE1E0:
	// lwz r31,32(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 32);
loc_830EE1E4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830ee1c4
	if (!cr6.eq) goto loc_830EE1C4;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,23
	ctx.r3.u64 = ctx.r3.u64 | 23;
loc_830EE1F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_830EE1FC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830ee1f4
	goto loc_830EE1F4;
}

__attribute__((alias("__imp__sub_830EE210"))) PPC_WEAK_FUNC(sub_830EE210);
PPC_FUNC_IMPL(__imp__sub_830EE210) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// lwz r4,-13940(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13940);
	// bl 0x830d7698
	sub_830D7698(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x830ee254
	if (!cr0.eq) goto loc_830EE254;
loc_830EE248:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// b 0x830ee478
	goto loc_830EE478;
loc_830EE254:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830ee248
	if (cr6.eq) goto loc_830EE248;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,272(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 272);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,268(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 268);
	f0.f64 = double(temp.f32);
	// fsubs f10,f30,f13
	ctx.f10.f64 = double(float(f30.f64 - ctx.f13.f64));
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// fsubs f0,f31,f0
	f0.f64 = double(float(f31.f64 - f0.f64));
	// lfs f13,2240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x830ee294
	if (cr6.eq) goto loc_830EE294;
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_830EE294:
	// lwz r10,248(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 248);
	// lfs f30,260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 260);
	f30.f64 = double(temp.f32);
	// lwz r8,252(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 252);
	// lfs f31,264(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 264);
	f31.f64 = double(temp.f32);
	// lwz r7,256(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 256);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// andi. r6,r31,5
	ctx.r6.u64 = r31.u64 & 5;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// lfs f11,-22120(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -22120);
	ctx.f11.f64 = double(temp.f32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// cmplwi cr6,r6,5
	cr6.compare<uint32_t>(ctx.r6.u32, 5, xer);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// lwz r8,68(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// bne cr6,0x830ee350
	if (!cr6.eq) goto loc_830EE350;
	// rlwinm. r10,r31,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x830ee330
	if (cr0.eq) goto loc_830EE330;
	// lfs f12,260(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 260);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bne cr6,0x830ee2fc
	if (!cr6.eq) goto loc_830EE2FC;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// b 0x830ee310
	goto loc_830EE310;
loc_830EE2FC:
	// lfs f9,276(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 276);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fadds f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 + f0.f64));
	// fdivs f0,f0,f12
	f0.f64 = double(float(f0.f64 / ctx.f12.f64));
	// fmuls f0,f0,f9
	f0.f64 = double(float(f0.f64 * ctx.f9.f64));
loc_830EE310:
	// stfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f12,88(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// beq cr6,0x830ee380
	if (cr6.eq) goto loc_830EE380;
	// fmsubs f0,f12,f0,f12
	f0.f64 = double(float(ctx.f12.f64 * f0.f64 - ctx.f12.f64));
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f0,f12
	f0.f64 = double(float(f0.f64 + ctx.f12.f64));
	// b 0x830ee37c
	goto loc_830EE37C;
loc_830EE330:
	// lfs f12,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bne cr6,0x830ee344
	if (!cr6.eq) goto loc_830EE344;
	// fmr f30,f13
	f30.f64 = ctx.f13.f64;
	// b 0x830ee380
	goto loc_830EE380;
loc_830EE344:
	// fdivs f0,f0,f12
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f0.f64 / ctx.f12.f64));
	// fadds f30,f0,f30
	f30.f64 = double(float(f0.f64 + f30.f64));
	// b 0x830ee380
	goto loc_830EE380;
loc_830EE350:
	// rlwinm r10,r31,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bne cr6,0x830ee368
	if (!cr6.eq) goto loc_830EE368;
	// lfs f12,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 + f0.f64));
	// b 0x830ee37c
	goto loc_830EE37C;
loc_830EE368:
	// rlwinm r10,r31,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bne cr6,0x830ee380
	if (!cr6.eq) goto loc_830EE380;
	// lfs f12,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f0,f11,f12
	f0.f64 = double(float(f0.f64 * ctx.f11.f64 + ctx.f12.f64));
loc_830EE37C:
	// stfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_830EE380:
	// andi. r10,r31,10
	ctx.r10.u64 = r31.u64 & 10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// bne cr6,0x830ee400
	if (!cr6.eq) goto loc_830EE400;
	// rlwinm. r10,r31,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x830ee3e0
	if (cr0.eq) goto loc_830EE3E0;
	// lfs f0,264(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 264);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x830ee3a8
	if (!cr6.eq) goto loc_830EE3A8;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// b 0x830ee3bc
	goto loc_830EE3BC;
loc_830EE3A8:
	// lfs f12,280(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 280);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fadds f11,f0,f10
	ctx.f11.f64 = double(float(f0.f64 + ctx.f10.f64));
	// fdivs f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 / f0.f64));
	// fmuls f0,f0,f12
	f0.f64 = double(float(f0.f64 * ctx.f12.f64));
loc_830EE3BC:
	// stfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f12,92(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// beq cr6,0x830ee430
	if (cr6.eq) goto loc_830EE430;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// fmsubs f0,f13,f0,f13
	f0.f64 = double(float(ctx.f13.f64 * f0.f64 - ctx.f13.f64));
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// b 0x830ee42c
	goto loc_830EE42C;
loc_830EE3E0:
	// lfs f0,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 64);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x830ee3f4
	if (!cr6.eq) goto loc_830EE3F4;
	// fmr f31,f13
	f31.f64 = ctx.f13.f64;
	// b 0x830ee430
	goto loc_830EE430;
loc_830EE3F4:
	// fdivs f0,f10,f0
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f10.f64 / f0.f64));
	// fadds f31,f0,f31
	f31.f64 = double(float(f0.f64 + f31.f64));
	// b 0x830ee430
	goto loc_830EE430;
loc_830EE400:
	// rlwinm r10,r31,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// bne cr6,0x830ee418
	if (!cr6.eq) goto loc_830EE418;
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	f0.f64 = double(temp.f32);
	// fadds f0,f0,f10
	f0.f64 = double(float(f0.f64 + ctx.f10.f64));
	// b 0x830ee42c
	goto loc_830EE42C;
loc_830EE418:
	// rlwinm r10,r31,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// bne cr6,0x830ee430
	if (!cr6.eq) goto loc_830EE430;
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	f0.f64 = double(temp.f32);
	// fmadds f0,f10,f11,f0
	f0.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + f0.f64));
loc_830EE42C:
	// stfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
loc_830EE430:
	// lwz r10,240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 240);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 16;
	// stw r10,240(r11)
	PPC_STORE_U32(r11.u32 + 240, ctx.r10.u32);
	// bl 0x830e86d0
	sub_830E86D0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x830ea5b0
	sub_830EA5B0(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830e8770
	sub_830E8770(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 240);
	// rlwinm r10,r10,0,28,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r10,240(r11)
	PPC_STORE_U32(r11.u32 + 240, ctx.r10.u32);
loc_830EE478:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830EE488"))) PPC_WEAK_FUNC(sub_830EE488);
PPC_FUNC_IMPL(__imp__sub_830EE488) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// lwz r11,240(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 240);
	// lwz r31,24(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,240(r30)
	PPC_STORE_U32(r30.u32 + 240, r11.u32);
	// rlwinm r29,r11,27,31,31
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// b 0x830ee4f0
	goto loc_830EE4F0;
loc_830EE4C0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830e8b18
	sub_830E8B18(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830ee4ec
	if (cr0.lt) goto loc_830EE4EC;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x830ee210
	sub_830EE210(ctx, base);
loc_830EE4EC:
	// lwz r31,32(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 32);
loc_830EE4F0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830ee4c0
	if (!cr6.eq) goto loc_830EE4C0;
	// lwz r11,240(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 240);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r11,240(r30)
	PPC_STORE_U32(r30.u32 + 240, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830EE518"))) PPC_WEAK_FUNC(sub_830EE518);
PPC_FUNC_IMPL(__imp__sub_830EE518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,240(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// rlwimi r11,r4,8,20,23
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0xF00) | (r11.u64 & 0xFFFFFFFFFFFFF0FF);
	// stw r11,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EE528"))) PPC_WEAK_FUNC(sub_830EE528);
PPC_FUNC_IMPL(__imp__sub_830EE528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,240(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// rlwinm r3,r11,24,28,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EE538"))) PPC_WEAK_FUNC(sub_830EE538);
PPC_FUNC_IMPL(__imp__sub_830EE538) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// stw r29,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r29.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x830ee570
	if (cr6.eq) goto loc_830EE570;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x830ee5b0
	goto loc_830EE5B0;
loc_830EE570:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ee588
	if (cr6.eq) goto loc_830EE588;
	// bl 0x83119068
	sub_83119068(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
loc_830EE588:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x8311ab50
	sub_8311AB50(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830ee5b4
	if (cr0.lt) goto loc_830EE5B4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
loc_830EE5B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830EE5B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830EE5C0"))) PPC_WEAK_FUNC(sub_830EE5C0);
PPC_FUNC_IMPL(__imp__sub_830EE5C0) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830ea100
	sub_830EA100(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ee5f8
	if (cr6.eq) goto loc_830EE5F8;
	// bl 0x830e2548
	sub_830E2548(ctx, base);
loc_830EE5F8:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
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

__attribute__((alias("__imp__sub_830EE618"))) PPC_WEAK_FUNC(sub_830EE618);
PPC_FUNC_IMPL(__imp__sub_830EE618) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830ea100
	sub_830EA100(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830ee77c
	if (cr6.eq) goto loc_830EE77C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x830ee668
	if (cr6.eq) goto loc_830EE668;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// b 0x830ee670
	goto loc_830EE670;
loc_830EE668:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830e9fb0
	sub_830E9FB0(ctx, base);
loc_830EE670:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830ee718
	if (cr6.eq) goto loc_830EE718;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x830ee6d4
	if (cr6.eq) goto loc_830EE6D4;
	// bl 0x830e7a38
	sub_830E7A38(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830ee6d4
	if (cr0.eq) goto loc_830EE6D4;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x830ee6c0
	if (!cr6.eq) goto loc_830EE6C0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r5,r11,-24144
	ctx.r5.s64 = r11.s64 + -24144;
	// addi r4,r10,-24116
	ctx.r4.s64 = ctx.r10.s64 + -24116;
	// b 0x830ee778
	goto loc_830EE778;
loc_830EE6C0:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r5,r11,-24220
	ctx.r5.s64 = r11.s64 + -24220;
	// addi r4,r10,-24180
	ctx.r4.s64 = ctx.r10.s64 + -24180;
	// b 0x830ee778
	goto loc_830EE778;
loc_830EE6D4:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x830ee704
	if (!cr6.eq) goto loc_830EE704;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r5,r11,-23124
	ctx.r5.s64 = r11.s64 + -23124;
	// addi r4,r10,-23104
	ctx.r4.s64 = ctx.r10.s64 + -23104;
	// b 0x830ee778
	goto loc_830EE778;
loc_830EE704:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r5,r11,-23268
	ctx.r5.s64 = r11.s64 + -23268;
	// addi r4,r10,-23236
	ctx.r4.s64 = ctx.r10.s64 + -23236;
	// b 0x830ee778
	goto loc_830EE778;
loc_830EE718:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x830ee768
	if (!cr6.eq) goto loc_830EE768;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x830ee754
	if (cr6.eq) goto loc_830EE754;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r5,r11,-24472
	ctx.r5.s64 = r11.s64 + -24472;
	// addi r4,r10,-23144
	ctx.r4.s64 = ctx.r10.s64 + -23144;
	// b 0x830ee778
	goto loc_830EE778;
loc_830EE754:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r5,r11,-23092
	ctx.r5.s64 = r11.s64 + -23092;
	// addi r4,r10,-23072
	ctx.r4.s64 = ctx.r10.s64 + -23072;
	// b 0x830ee778
	goto loc_830EE778;
loc_830EE768:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r5,r11,-23208
	ctx.r5.s64 = r11.s64 + -23208;
	// addi r4,r10,-23172
	ctx.r4.s64 = ctx.r10.s64 + -23172;
loc_830EE778:
	// bl 0x830ea300
	sub_830EA300(ctx, base);
loc_830EE77C:
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

__attribute__((alias("__imp__sub_830EE798"))) PPC_WEAK_FUNC(sub_830EE798);
PPC_FUNC_IMPL(__imp__sub_830EE798) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r31,0
	r31.s64 = 0;
	// bl 0x830e8400
	sub_830E8400(ctx, base);
	// b 0x830ee7d0
	goto loc_830EE7D0;
loc_830EE7B8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830e7d50
	sub_830E7D50(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bl 0x830e84f0
	sub_830E84F0(ctx, base);
loc_830EE7D0:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830ee7b8
	if (!cr6.eq) goto loc_830EE7B8;
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

__attribute__((alias("__imp__sub_830EE7F8"))) PPC_WEAK_FUNC(sub_830EE7F8);
PPC_FUNC_IMPL(__imp__sub_830EE7F8) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r4,-13940(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13940);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830ee854
	if (!cr6.eq) goto loc_830EE854;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x830ee860
	goto loc_830EE860;
loc_830EE854:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830ee798
	sub_830EE798(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_830EE860:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830EE868"))) PPC_WEAK_FUNC(sub_830EE868);
PPC_FUNC_IMPL(__imp__sub_830EE868) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ee8ac
	if (cr6.eq) goto loc_830EE8AC;
	// bl 0x830d7120
	sub_830D7120(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830ee8ac
	if (cr0.eq) goto loc_830EE8AC;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830e8aa0
	sub_830E8AA0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x830ee8b0
	if (!cr0.eq) goto loc_830EE8B0;
loc_830EE8AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830EE8B0:
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

__attribute__((alias("__imp__sub_830EE8C8"))) PPC_WEAK_FUNC(sub_830EE8C8);
PPC_FUNC_IMPL(__imp__sub_830EE8C8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ee91c
	if (cr6.eq) goto loc_830EE91C;
	// lis r31,-31942
	r31.s64 = -2093350912;
loc_830EE8E4:
	// li r11,0
	r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x830e8388
	sub_830E8388(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ee91c
	if (cr6.eq) goto loc_830EE91C;
	// lwz r4,-13928(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + -13928);
	// bl 0x830d7698
	sub_830D7698(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bne 0x830ee934
	if (!cr0.eq) goto loc_830EE934;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830ee8e4
	if (!cr6.eq) goto loc_830EE8E4;
loc_830EE91C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830EE920:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_830EE934:
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// b 0x830ee920
	goto loc_830EE920;
}

__attribute__((alias("__imp__sub_830EE940"))) PPC_WEAK_FUNC(sub_830EE940);
PPC_FUNC_IMPL(__imp__sub_830EE940) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ee984
	if (cr6.eq) goto loc_830EE984;
	// bl 0x830d7120
	sub_830D7120(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830ee984
	if (cr0.eq) goto loc_830EE984;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830e8aa0
	sub_830E8AA0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x830ee988
	if (!cr0.eq) goto loc_830EE988;
loc_830EE984:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830EE988:
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

__attribute__((alias("__imp__sub_830EE9A0"))) PPC_WEAK_FUNC(sub_830EE9A0);
PPC_FUNC_IMPL(__imp__sub_830EE9A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EE9B8"))) PPC_WEAK_FUNC(sub_830EE9B8);
PPC_FUNC_IMPL(__imp__sub_830EE9B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EE9C8"))) PPC_WEAK_FUNC(sub_830EE9C8);
PPC_FUNC_IMPL(__imp__sub_830EE9C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r31,-31942
	r31.s64 = -2093350912;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_830EE9E4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830e8388
	sub_830E8388(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830eea14
	if (cr6.eq) goto loc_830EEA14;
	// lwz r4,-13864(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + -13864);
	// bl 0x830d7698
	sub_830D7698(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bne 0x830eea14
	if (!cr0.eq) goto loc_830EEA14;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830ee9e4
	if (!cr6.eq) goto loc_830EE9E4;
loc_830EEA14:
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

__attribute__((alias("__imp__sub_830EEA28"))) PPC_WEAK_FUNC(sub_830EEA28);
PPC_FUNC_IMPL(__imp__sub_830EEA28) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830ea100
	sub_830EA100(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830eea7c
	if (cr6.eq) goto loc_830EEA7C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r5,r11,-23092
	ctx.r5.s64 = r11.s64 + -23092;
	// addi r4,r10,-23072
	ctx.r4.s64 = ctx.r10.s64 + -23072;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x830ea300
	sub_830EA300(ctx, base);
loc_830EEA7C:
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

__attribute__((alias("__imp__sub_830EEA90"))) PPC_WEAK_FUNC(sub_830EEA90);
PPC_FUNC_IMPL(__imp__sub_830EEA90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stfs f0,4(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lwz r11,160(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x830eeaf0
	if (cr6.eq) goto loc_830EEAF0;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x830eeac0
	if (cr6.eq) goto loc_830EEAC0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_830EEAC0:
	// lfs f13,140(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,148(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// lfs f13,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stfs f0,4(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lfs f0,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	f0.f64 = double(temp.f32);
	// lfs f13,144(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,136(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// b 0x830eeb58
	goto loc_830EEB58;
loc_830EEAF0:
	// lfs f0,148(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	f0.f64 = double(temp.f32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// lfs f13,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stfs f0,4(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// beq cr6,0x830eeb34
	if (cr6.eq) goto loc_830EEB34;
	// addi r11,r4,-1
	r11.s64 = ctx.r4.s64 + -1;
	// lfs f12,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmadds f0,f13,f12,f0
	f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + f0.f64));
	// stfs f0,4(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
loc_830EEB34:
	// lfs f13,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,140(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stfs f0,4(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lfs f0,144(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	f0.f64 = double(temp.f32);
	// lfs f13,136(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// lfs f13,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
loc_830EEB58:
	// stfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EEB68"))) PPC_WEAK_FUNC(sub_830EEB68);
PPC_FUNC_IMPL(__imp__sub_830EEB68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,160(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r10,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r10.u32);
	// bne cr6,0x830eeb8c
	if (!cr6.eq) goto loc_830EEB8C;
	// lwz r11,156(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// rlwinm r11,r11,0,29,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// b 0x830eebbc
	goto loc_830EEBBC;
loc_830EEB8C:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x830eeba4
	if (!cr6.eq) goto loc_830EEBA4;
	// lwz r11,156(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// b 0x830eebbc
	goto loc_830EEBBC;
loc_830EEBA4:
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x830eebb4
	if (cr6.eq) goto loc_830EEBB4;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_830EEBB4:
	// lwz r11,156(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// rlwinm r11,r11,0,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
loc_830EEBBC:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, r11.u32);
	// stw r10,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EEBD0"))) PPC_WEAK_FUNC(sub_830EEBD0);
PPC_FUNC_IMPL(__imp__sub_830EEBD0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f0,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 104);
	f0.f64 = double(temp.f32);
	// stw r4,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r4.u32);
	// stfs f0,120(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// stw r5,124(r31)
	PPC_STORE_U32(r31.u32 + 124, ctx.r5.u32);
	// bl 0x831cdad0
	sub_831CDAD0(ctx, base);
	// stw r3,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r3.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83108a60
	sub_83108A60(ctx, base);
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

__attribute__((alias("__imp__sub_830EEC20"))) PPC_WEAK_FUNC(sub_830EEC20);
PPC_FUNC_IMPL(__imp__sub_830EEC20) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r4,-13940(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13940);
	// bl 0x830d7698
	sub_830D7698(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830eec94
	if (cr0.eq) goto loc_830EEC94;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830eec94
	if (cr6.eq) goto loc_830EEC94;
	// lwz r10,240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 240);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// stw r10,240(r11)
	PPC_STORE_U32(r11.u32 + 240, ctx.r10.u32);
	// bl 0x830e8400
	sub_830E8400(ctx, base);
	// b 0x830eec88
	goto loc_830EEC88;
loc_830EEC78:
	// bl 0x830eec20
	sub_830EEC20(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830e84f0
	sub_830E84F0(ctx, base);
loc_830EEC88:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830eec78
	if (!cr6.eq) goto loc_830EEC78;
loc_830EEC94:
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

__attribute__((alias("__imp__sub_830EECA8"))) PPC_WEAK_FUNC(sub_830EECA8);
PPC_FUNC_IMPL(__imp__sub_830EECA8) {
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
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// li r11,-1
	r11.s64 = -1;
	// addi r25,r10,-23072
	r25.s64 = ctx.r10.s64 + -23072;
	// addi r24,r9,-23092
	r24.s64 = ctx.r9.s64 + -23092;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// mr r31,r25
	r31.u64 = r25.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r30,r24
	r30.u64 = r24.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x830eed34
	if (cr6.eq) goto loc_830EED34;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r31,r11,-23104
	r31.s64 = r11.s64 + -23104;
	// addi r30,r10,-23124
	r30.s64 = ctx.r10.s64 + -23124;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x830eed6c
	if (!cr6.eq) goto loc_830EED6C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r26,r11,-23236
	r26.s64 = r11.s64 + -23236;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x830e8de8
	sub_830E8DE8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x830eed6c
	if (cr6.lt) goto loc_830EED6C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r30,r11,-23268
	r30.s64 = r11.s64 + -23268;
	// b 0x830eed68
	goto loc_830EED68;
loc_830EED34:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x830eed6c
	if (!cr6.eq) goto loc_830EED6C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r26,r11,-23172
	r26.s64 = r11.s64 + -23172;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x830e8de8
	sub_830E8DE8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x830eed6c
	if (cr6.lt) goto loc_830EED6C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r30,r11,-23208
	r30.s64 = r11.s64 + -23208;
loc_830EED68:
	// mr r31,r26
	r31.u64 = r26.u64;
loc_830EED6C:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830e8de8
	sub_830E8DE8(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830e8de8
	sub_830E8DE8(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x830eeda4
	if (cr6.lt) goto loc_830EEDA4;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x830eedc4
	if (!cr6.lt) goto loc_830EEDC4;
loc_830EEDA4:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830e8de8
	sub_830E8DE8(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830e8de8
	sub_830E8DE8(ctx, base);
loc_830EEDC4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_830EEDD0"))) PPC_WEAK_FUNC(sub_830EEDD0);
PPC_FUNC_IMPL(__imp__sub_830EEDD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// addi r29,r30,100
	r29.s64 = r30.s64 + 100;
	// li r28,0
	r28.s64 = 0;
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r28,100(r30)
	PPC_STORE_U32(r30.u32 + 100, r28.u32);
	// beq cr6,0x830eee34
	if (cr6.eq) goto loc_830EEE34;
	// addi r30,r30,152
	r30.s64 = r30.s64 + 152;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830edaa0
	sub_830EDAA0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830eee38
	if (cr0.lt) goto loc_830EEE38;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830d77b0
	sub_830D77B0(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bge 0x830eee34
	if (!cr0.lt) goto loc_830EEE34;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830d6008
	sub_830D6008(ctx, base);
loc_830EEE34:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_830EEE38:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830EEE40"))) PPC_WEAK_FUNC(sub_830EEE40);
PPC_FUNC_IMPL(__imp__sub_830EEE40) {
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
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830eef04
	if (cr6.eq) goto loc_830EEF04;
	// bl 0x831b1a88
	sub_831B1A88(ctx, base);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830eeebc
	if (cr6.eq) goto loc_830EEEBC;
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(r11.u32, ctx.r3.u32, xer);
	// bge cr6,0x830eeeb4
	if (!cr6.lt) goto loc_830EEEB4;
	// subf r11,r11,r3
	r11.s64 = ctx.r3.s64 - r11.s64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
loc_830EEE9C:
	// lwz r8,104(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lhz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// sth r8,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r8.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bne 0x830eee9c
	if (!cr0.eq) goto loc_830EEE9C;
loc_830EEEB4:
	// rlwinm r11,r9,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x830eeefc
	goto loc_830EEEFC;
loc_830EEEBC:
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// bge cr6,0x830eeef8
	if (!cr6.lt) goto loc_830EEEF8;
	// subf r11,r10,r3
	r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
loc_830EEEDC:
	// lwz r6,92(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lhzx r6,r10,r6
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r6.u32);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// sth r6,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r6.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// bne 0x830eeedc
	if (!cr0.eq) goto loc_830EEEDC;
loc_830EEEF8:
	// rlwinm r11,r8,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
loc_830EEEFC:
	// li r10,0
	ctx.r10.s64 = 0;
	// sthx r10,r11,r7
	PPC_STORE_U16(r11.u32 + ctx.r7.u32, ctx.r10.u16);
loc_830EEF04:
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

__attribute__((alias("__imp__sub_830EEF20"))) PPC_WEAK_FUNC(sub_830EEF20);
PPC_FUNC_IMPL(__imp__sub_830EEF20) {
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
	// lbz r11,188(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 188);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830eef64
	if (!cr0.eq) goto loc_830EEF64;
	// bl 0x831cdad0
	sub_831CDAD0(ctx, base);
	// stw r3,184(r31)
	PPC_STORE_U32(r31.u32 + 184, ctx.r3.u32);
	// lis r4,-21829
	ctx.r4.s64 = -1430585344;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,16
	ctx.r5.s64 = 16;
	// ori r4,r4,52445
	ctx.r4.u64 = ctx.r4.u64 | 52445;
	// bl 0x83108a60
	sub_83108A60(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,188(r31)
	PPC_STORE_U8(r31.u32 + 188, r11.u8);
loc_830EEF64:
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

__attribute__((alias("__imp__sub_830EEF78"))) PPC_WEAK_FUNC(sub_830EEF78);
PPC_FUNC_IMPL(__imp__sub_830EEF78) {
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
	// li r30,0
	r30.s64 = 0;
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x830eefd0
	if (cr6.eq) goto loc_830EEFD0;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x830eeff0
	if (!cr6.eq) goto loc_830EEFF0;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830eeff0
	if (cr6.eq) goto loc_830EEFF0;
	// bl 0x830e8340
	sub_830E8340(ctx, base);
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x830eefec
	if (cr6.eq) goto loc_830EEFEC;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// bl 0x830e2548
	sub_830E2548(ctx, base);
	// b 0x830eefec
	goto loc_830EEFEC;
loc_830EEFD0:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830eeff0
	if (cr6.eq) goto loc_830EEFF0;
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x830eefec
	if (cr6.eq) goto loc_830EEFEC;
	// bl 0x83119068
	sub_83119068(ctx, base);
loc_830EEFEC:
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
loc_830EEFF0:
	// li r11,1
	r11.s64 = 1;
	// stw r30,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r30.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
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

__attribute__((alias("__imp__sub_830EF018"))) PPC_WEAK_FUNC(sub_830EF018);
PPC_FUNC_IMPL(__imp__sub_830EF018) {
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
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stw r5,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r5.u32);
	// bl 0x830e8680
	sub_830E8680(ctx, base);
	// addi r4,r31,92
	ctx.r4.s64 = r31.s64 + 92;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// bl 0x830e8720
	sub_830E8720(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// bl 0x830e82f0
	sub_830E82F0(ctx, base);
	// li r11,2
	r11.s64 = 2;
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
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

__attribute__((alias("__imp__sub_830EF080"))) PPC_WEAK_FUNC(sub_830EF080);
PPC_FUNC_IMPL(__imp__sub_830EF080) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x830e8e68
	sub_830E8E68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EF090"))) PPC_WEAK_FUNC(sub_830EF090);
PPC_FUNC_IMPL(__imp__sub_830EF090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-22600
	ctx.r3.s64 = r11.s64 + -22600;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EF0A0"))) PPC_WEAK_FUNC(sub_830EF0A0);
PPC_FUNC_IMPL(__imp__sub_830EF0A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(r11.u32, 11, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EF0C8"))) PPC_WEAK_FUNC(sub_830EF0C8);
PPC_FUNC_IMPL(__imp__sub_830EF0C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// li r11,0
	r11.s64 = 0;
	// lfs f13,2240(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	ctx.f13.f64 = double(temp.f32);
loc_830EF0DC:
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x830ef140
	if (cr6.lt) goto loc_830EF140;
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// bge cr6,0x830ef140
	if (!cr6.lt) goto loc_830EF140;
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x830ef140
	if (cr6.lt) goto loc_830EF140;
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// std r9,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r9.u64);
	// lfd f12,-8(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// bge cr6,0x830ef140
	if (!cr6.lt) goto loc_830EF140;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x830ef0dc
	if (cr6.lt) goto loc_830EF0DC;
	// blr 
	return;
loc_830EF140:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EF148"))) PPC_WEAK_FUNC(sub_830EF148);
PPC_FUNC_IMPL(__imp__sub_830EF148) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// fmr f31,f3
	f31.f64 = ctx.f3.f64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// fmr f30,f4
	f30.f64 = ctx.f4.f64;
	// li r29,0
	r29.s64 = 0;
	// addi r30,r1,88
	r30.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_830EF17C:
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830ef1b4
	if (cr6.eq) goto loc_830EF1B4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e8b18
	sub_830E8B18(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830ef1c8
	if (cr0.lt) goto loc_830EF1C8;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x830ee210
	sub_830EE210(ctx, base);
loc_830EF1B4:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplwi cr6,r29,2
	cr6.compare<uint32_t>(r29.u32, 2, xer);
	// blt cr6,0x830ef17c
	if (cr6.lt) goto loc_830EF17C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830EF1C8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830EF1D8"))) PPC_WEAK_FUNC(sub_830EF1D8);
PPC_FUNC_IMPL(__imp__sub_830EF1D8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x830ef22c
	if (cr6.lt) goto loc_830EF22C;
	// lis r11,1170
	r11.s64 = 76677120;
	// ori r11,r11,18724
	r11.u64 = r11.u64 | 18724;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x830ef22c
	if (!cr6.lt) goto loc_830EF22C;
	// mulli r3,r31,28
	ctx.r3.s64 = r31.s64 * 28;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830ef22c
	if (cr0.eq) goto loc_830EF22C;
	// stw r31,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r31.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830ef230
	goto loc_830EF230;
loc_830EF22C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830EF230:
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

__attribute__((alias("__imp__sub_830EF248"))) PPC_WEAK_FUNC(sub_830EF248);
PPC_FUNC_IMPL(__imp__sub_830EF248) {
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
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x830ef2b0
	if (cr6.lt) goto loc_830EF2B0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, r11.s32, xer);
	// bge cr6,0x830ef2b0
	if (!cr6.lt) goto loc_830EF2B0;
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// cmpw cr6,r4,r10
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, xer);
	// beq cr6,0x830ef29c
	if (cr6.eq) goto loc_830EF29C;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mulli r10,r4,28
	ctx.r10.s64 = ctx.r4.s64 * 28;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mulli r11,r11,28
	r11.s64 = r11.s64 * 28;
	// addi r4,r3,28
	ctx.r4.s64 = ctx.r3.s64 + 28;
	// addi r5,r11,-28
	ctx.r5.s64 = r11.s64 + -28;
	// bl 0x831b5e00
	sub_831B5E00(ctx, base);
loc_830EF29C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// b 0x830ef2b4
	goto loc_830EF2B4;
loc_830EF2B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830EF2B4:
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

__attribute__((alias("__imp__sub_830EF2C8"))) PPC_WEAK_FUNC(sub_830EF2C8);
PPC_FUNC_IMPL(__imp__sub_830EF2C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// twllei r8,0
	// divw r7,r9,r8
	ctx.r7.s32 = ctx.r9.s32 / ctx.r8.s32;
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// mullw r7,r7,r8
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// andc r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// twlgei r10,-1
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EF320"))) PPC_WEAK_FUNC(sub_830EF320);
PPC_FUNC_IMPL(__imp__sub_830EF320) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// add r10,r4,r30
	ctx.r10.u64 = ctx.r4.u64 + r30.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x830ef398
	if (cr6.lt) goto loc_830EF398;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x830ef398
	if (cr6.lt) goto loc_830EF398;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x830ef398
	if (cr6.lt) goto loc_830EF398;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bgt cr6,0x830ef398
	if (cr6.gt) goto loc_830EF398;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + r11.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x831b5e00
	sub_831B5E00(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// b 0x830ef39c
	goto loc_830EF39C;
loc_830EF398:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830EF39C:
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

__attribute__((alias("__imp__sub_830EF3B8"))) PPC_WEAK_FUNC(sub_830EF3B8);
PPC_FUNC_IMPL(__imp__sub_830EF3B8) {
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
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x830ef420
	if (cr6.lt) goto loc_830EF420;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, r11.s32, xer);
	// bge cr6,0x830ef420
	if (!cr6.lt) goto loc_830EF420;
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// cmpw cr6,r4,r10
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, xer);
	// beq cr6,0x830ef40c
	if (cr6.eq) goto loc_830EF40C;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mulli r10,r4,168
	ctx.r10.s64 = ctx.r4.s64 * 168;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mulli r11,r11,168
	r11.s64 = r11.s64 * 168;
	// addi r4,r3,168
	ctx.r4.s64 = ctx.r3.s64 + 168;
	// addi r5,r11,-168
	ctx.r5.s64 = r11.s64 + -168;
	// bl 0x831b5e00
	sub_831B5E00(ctx, base);
loc_830EF40C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// b 0x830ef424
	goto loc_830EF424;
loc_830EF420:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830EF424:
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

__attribute__((alias("__imp__sub_830EF438"))) PPC_WEAK_FUNC(sub_830EF438);
PPC_FUNC_IMPL(__imp__sub_830EF438) {
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
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x830ef4a0
	if (cr6.lt) goto loc_830EF4A0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, r11.s32, xer);
	// bge cr6,0x830ef4a0
	if (!cr6.lt) goto loc_830EF4A0;
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// cmpw cr6,r4,r10
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, xer);
	// beq cr6,0x830ef48c
	if (cr6.eq) goto loc_830EF48C;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// addi r5,r11,-4
	ctx.r5.s64 = r11.s64 + -4;
	// bl 0x831b5e00
	sub_831B5E00(ctx, base);
loc_830EF48C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// b 0x830ef4a4
	goto loc_830EF4A4;
loc_830EF4A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830EF4A4:
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

__attribute__((alias("__imp__sub_830EF4B8"))) PPC_WEAK_FUNC(sub_830EF4B8);
PPC_FUNC_IMPL(__imp__sub_830EF4B8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x830ef51c
	if (cr6.lt) goto loc_830EF51C;
	// lis r11,1638
	r11.s64 = 107347968;
	// ori r11,r11,26214
	r11.u64 = r11.u64 | 26214;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bgt cr6,0x830ef51c
	if (cr6.gt) goto loc_830EF51C;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x830ef514
	if (!cr6.gt) goto loc_830EF514;
	// mulli r3,r31,20
	ctx.r3.s64 = r31.s64 * 20;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830ef51c
	if (cr0.eq) goto loc_830EF51C;
	// li r11,0
	r11.s64 = 0;
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
loc_830EF514:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830ef524
	goto loc_830EF524;
loc_830EF51C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
loc_830EF524:
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

__attribute__((alias("__imp__sub_830EF540"))) PPC_WEAK_FUNC(sub_830EF540);
PPC_FUNC_IMPL(__imp__sub_830EF540) {
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
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830d7d30
	sub_830D7D30(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
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

__attribute__((alias("__imp__sub_830EF590"))) PPC_WEAK_FUNC(sub_830EF590);
PPC_FUNC_IMPL(__imp__sub_830EF590) {
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
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830d7d30
	sub_830D7D30(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
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

__attribute__((alias("__imp__sub_830EF5E0"))) PPC_WEAK_FUNC(sub_830EF5E0);
PPC_FUNC_IMPL(__imp__sub_830EF5E0) {
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
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830d7d30
	sub_830D7D30(ctx, base);
	// std r30,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r30.u64);
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

__attribute__((alias("__imp__sub_830EF630"))) PPC_WEAK_FUNC(sub_830EF630);
PPC_FUNC_IMPL(__imp__sub_830EF630) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830d7d30
	sub_830D7D30(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830EF688"))) PPC_WEAK_FUNC(sub_830EF688);
PPC_FUNC_IMPL(__imp__sub_830EF688) {
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
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// li r11,20
	r11.s64 = 20;
	// stw r8,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r8.u32);
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EF6C0"))) PPC_WEAK_FUNC(sub_830EF6C0);
PPC_FUNC_IMPL(__imp__sub_830EF6C0) {
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
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// li r11,20
	r11.s64 = 20;
	// stw r8,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r8.u32);
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EF6F8"))) PPC_WEAK_FUNC(sub_830EF6F8);
PPC_FUNC_IMPL(__imp__sub_830EF6F8) {
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
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x830d7d30
	sub_830D7D30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EF730"))) PPC_WEAK_FUNC(sub_830EF730);
PPC_FUNC_IMPL(__imp__sub_830EF730) {
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
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// li r4,2054
	ctx.r4.s64 = 2054;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x830d7d30
	sub_830D7D30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EF768"))) PPC_WEAK_FUNC(sub_830EF768);
PPC_FUNC_IMPL(__imp__sub_830EF768) {
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
	// li r4,2051
	ctx.r4.s64 = 2051;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830d7d30
	sub_830D7D30(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
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

__attribute__((alias("__imp__sub_830EF7B8"))) PPC_WEAK_FUNC(sub_830EF7B8);
PPC_FUNC_IMPL(__imp__sub_830EF7B8) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,2052
	ctx.r4.s64 = 2052;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x830d7d30
	sub_830D7D30(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// stw r28,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r28.u32);
	// stw r27,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r27.u32);
	// stw r26,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r26.u32);
	// stw r25,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r25.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_830EF810"))) PPC_WEAK_FUNC(sub_830EF810);
PPC_FUNC_IMPL(__imp__sub_830EF810) {
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
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x830d7d30
	sub_830D7D30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EF848"))) PPC_WEAK_FUNC(sub_830EF848);
PPC_FUNC_IMPL(__imp__sub_830EF848) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830d7d30
	sub_830D7D30(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830EF888"))) PPC_WEAK_FUNC(sub_830EF888);
PPC_FUNC_IMPL(__imp__sub_830EF888) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
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

__attribute__((alias("__imp__sub_830EF8D8"))) PPC_WEAK_FUNC(sub_830EF8D8);
PPC_FUNC_IMPL(__imp__sub_830EF8D8) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// bl 0x830ef848
	sub_830EF848(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ef888
	sub_830EF888(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830EF918"))) PPC_WEAK_FUNC(sub_830EF918);
PPC_FUNC_IMPL(__imp__sub_830EF918) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// bl 0x830ef848
	sub_830EF848(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ef888
	sub_830EF888(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830EF958"))) PPC_WEAK_FUNC(sub_830EF958);
PPC_FUNC_IMPL(__imp__sub_830EF958) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// bl 0x830ef848
	sub_830EF848(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ef888
	sub_830EF888(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// stw r28,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830EF9A0"))) PPC_WEAK_FUNC(sub_830EF9A0);
PPC_FUNC_IMPL(__imp__sub_830EF9A0) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// bl 0x830ef848
	sub_830EF848(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ef888
	sub_830EF888(ctx, base);
	// stb r29,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r29.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830EF9E0"))) PPC_WEAK_FUNC(sub_830EF9E0);
PPC_FUNC_IMPL(__imp__sub_830EF9E0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// bl 0x830ef848
	sub_830EF848(ctx, base);
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ef888
	sub_830EF888(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// stb r29,8(r30)
	PPC_STORE_U8(r30.u32 + 8, r29.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830EFA28"))) PPC_WEAK_FUNC(sub_830EFA28);
PPC_FUNC_IMPL(__imp__sub_830EFA28) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// bl 0x830ef848
	sub_830EF848(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ef888
	sub_830EF888(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// stw r28,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830EFA70"))) PPC_WEAK_FUNC(sub_830EFA70);
PPC_FUNC_IMPL(__imp__sub_830EFA70) {
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
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// li r4,2000
	ctx.r4.s64 = 2000;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x830d7d30
	sub_830D7D30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EFAA8"))) PPC_WEAK_FUNC(sub_830EFAA8);
PPC_FUNC_IMPL(__imp__sub_830EFAA8) {
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
	// li r4,2001
	ctx.r4.s64 = 2001;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830d7d30
	sub_830D7D30(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
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

__attribute__((alias("__imp__sub_830EFAF8"))) PPC_WEAK_FUNC(sub_830EFAF8);
PPC_FUNC_IMPL(__imp__sub_830EFAF8) {
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
	// li r4,2003
	ctx.r4.s64 = 2003;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830d7d30
	sub_830D7D30(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
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

__attribute__((alias("__imp__sub_830EFB48"))) PPC_WEAK_FUNC(sub_830EFB48);
PPC_FUNC_IMPL(__imp__sub_830EFB48) {
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
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// li r4,2039
	ctx.r4.s64 = 2039;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x830d7d30
	sub_830D7D30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EFB80"))) PPC_WEAK_FUNC(sub_830EFB80);
PPC_FUNC_IMPL(__imp__sub_830EFB80) {
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
	// li r4,2040
	ctx.r4.s64 = 2040;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830d7d30
	sub_830D7D30(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
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

__attribute__((alias("__imp__sub_830EFBD0"))) PPC_WEAK_FUNC(sub_830EFBD0);
PPC_FUNC_IMPL(__imp__sub_830EFBD0) {
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
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// li r4,2006
	ctx.r4.s64 = 2006;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x830d7d30
	sub_830D7D30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EFC08"))) PPC_WEAK_FUNC(sub_830EFC08);
PPC_FUNC_IMPL(__imp__sub_830EFC08) {
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
	// li r4,2006
	ctx.r4.s64 = 2006;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830d7d30
	sub_830D7D30(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
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

__attribute__((alias("__imp__sub_830EFC60"))) PPC_WEAK_FUNC(sub_830EFC60);
PPC_FUNC_IMPL(__imp__sub_830EFC60) {
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
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// li r4,2007
	ctx.r4.s64 = 2007;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x830d7d30
	sub_830D7D30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EFC98"))) PPC_WEAK_FUNC(sub_830EFC98);
PPC_FUNC_IMPL(__imp__sub_830EFC98) {
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
	// li r4,2008
	ctx.r4.s64 = 2008;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830d7d30
	sub_830D7D30(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
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

__attribute__((alias("__imp__sub_830EFCE8"))) PPC_WEAK_FUNC(sub_830EFCE8);
PPC_FUNC_IMPL(__imp__sub_830EFCE8) {
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
	// li r4,2009
	ctx.r4.s64 = 2009;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830d7d30
	sub_830D7D30(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
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

__attribute__((alias("__imp__sub_830EFD38"))) PPC_WEAK_FUNC(sub_830EFD38);
PPC_FUNC_IMPL(__imp__sub_830EFD38) {
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
	// li r4,2012
	ctx.r4.s64 = 2012;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830d7d30
	sub_830D7D30(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
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

__attribute__((alias("__imp__sub_830EFD88"))) PPC_WEAK_FUNC(sub_830EFD88);
PPC_FUNC_IMPL(__imp__sub_830EFD88) {
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
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// li r4,2010
	ctx.r4.s64 = 2010;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x830d7d30
	sub_830D7D30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EFDC0"))) PPC_WEAK_FUNC(sub_830EFDC0);
PPC_FUNC_IMPL(__imp__sub_830EFDC0) {
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
	// li r4,2011
	ctx.r4.s64 = 2011;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830d7d30
	sub_830D7D30(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
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

__attribute__((alias("__imp__sub_830EFE10"))) PPC_WEAK_FUNC(sub_830EFE10);
PPC_FUNC_IMPL(__imp__sub_830EFE10) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,2013
	ctx.r4.s64 = 2013;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830d7d30
	sub_830D7D30(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830EFE50"))) PPC_WEAK_FUNC(sub_830EFE50);
PPC_FUNC_IMPL(__imp__sub_830EFE50) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,2014
	ctx.r4.s64 = 2014;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830d7d30
	sub_830D7D30(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830EFE90"))) PPC_WEAK_FUNC(sub_830EFE90);
PPC_FUNC_IMPL(__imp__sub_830EFE90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f28{};
	PPCRegister f29{};
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
	// addi r12,r1,-24
	r12.s64 = ctx.r1.s64 + -24;
	// bl 0x831b1438
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// li r5,17
	ctx.r5.s64 = 17;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// fmr f29,f3
	f29.f64 = ctx.f3.f64;
	// fmr f28,f4
	f28.f64 = ctx.f4.f64;
	// bl 0x830ef848
	sub_830EF848(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ef888
	sub_830EF888(ctx, base);
	// lwz r11,228(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// stfs f31,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// stfs f30,4(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// stfs f29,8(r30)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// stfs f28,12(r30)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-24
	r12.s64 = ctx.r1.s64 + -24;
	// bl 0x831b1484
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EFF18"))) PPC_WEAK_FUNC(sub_830EFF18);
PPC_FUNC_IMPL(__imp__sub_830EFF18) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,2017
	ctx.r4.s64 = 2017;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// li r5,28
	ctx.r5.s64 = 28;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830d7d30
	sub_830D7D30(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830EFF60"))) PPC_WEAK_FUNC(sub_830EFF60);
PPC_FUNC_IMPL(__imp__sub_830EFF60) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,2018
	ctx.r4.s64 = 2018;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// li r5,28
	ctx.r5.s64 = 28;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x830d7d30
	sub_830D7D30(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// stw r28,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r28.u32);
	// stw r27,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r27.u32);
	// stw r26,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r26.u32);
	// stw r25,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r25.u32);
	// stw r24,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r24.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_830EFFC0"))) PPC_WEAK_FUNC(sub_830EFFC0);
PPC_FUNC_IMPL(__imp__sub_830EFFC0) {
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
	// li r4,2019
	ctx.r4.s64 = 2019;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830d7d30
	sub_830D7D30(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
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

__attribute__((alias("__imp__sub_830F0010"))) PPC_WEAK_FUNC(sub_830F0010);
PPC_FUNC_IMPL(__imp__sub_830F0010) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,2020
	ctx.r4.s64 = 2020;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830d7d30
	sub_830D7D30(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830F0050"))) PPC_WEAK_FUNC(sub_830F0050);
PPC_FUNC_IMPL(__imp__sub_830F0050) {
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
	// li r4,2024
	ctx.r4.s64 = 2024;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830d7d30
	sub_830D7D30(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
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

__attribute__((alias("__imp__sub_830F00A0"))) PPC_WEAK_FUNC(sub_830F00A0);
PPC_FUNC_IMPL(__imp__sub_830F00A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r4,2059
	ctx.r4.s64 = 2059;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830d7d30
	sub_830D7D30(ctx, base);
	// stfs f31,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f30,12(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f30,-48(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830F0100"))) PPC_WEAK_FUNC(sub_830F0100);
PPC_FUNC_IMPL(__imp__sub_830F0100) {
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
	// li r4,2021
	ctx.r4.s64 = 2021;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830d7d30
	sub_830D7D30(ctx, base);
	// stb r30,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r30.u8);
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

__attribute__((alias("__imp__sub_830F0150"))) PPC_WEAK_FUNC(sub_830F0150);
PPC_FUNC_IMPL(__imp__sub_830F0150) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,2022
	ctx.r4.s64 = 2022;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830d7d30
	sub_830D7D30(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830F0190"))) PPC_WEAK_FUNC(sub_830F0190);
PPC_FUNC_IMPL(__imp__sub_830F0190) {
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
	// li r4,2023
	ctx.r4.s64 = 2023;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830d7d30
	sub_830D7D30(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
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

__attribute__((alias("__imp__sub_830F01E0"))) PPC_WEAK_FUNC(sub_830F01E0);
PPC_FUNC_IMPL(__imp__sub_830F01E0) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,2056
	ctx.r4.s64 = 2056;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830d7d30
	sub_830D7D30(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830F0228"))) PPC_WEAK_FUNC(sub_830F0228);
PPC_FUNC_IMPL(__imp__sub_830F0228) {
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
	// li r4,2028
	ctx.r4.s64 = 2028;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830d7d30
	sub_830D7D30(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
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

__attribute__((alias("__imp__sub_830F0278"))) PPC_WEAK_FUNC(sub_830F0278);
PPC_FUNC_IMPL(__imp__sub_830F0278) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// bl 0x830ef848
	sub_830EF848(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ef888
	sub_830EF888(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// stw r28,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830F02C0"))) PPC_WEAK_FUNC(sub_830F02C0);
PPC_FUNC_IMPL(__imp__sub_830F02C0) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r5,11
	ctx.r5.s64 = 11;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// bl 0x830ef848
	sub_830EF848(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ef888
	sub_830EF888(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830F0300"))) PPC_WEAK_FUNC(sub_830F0300);
PPC_FUNC_IMPL(__imp__sub_830F0300) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830e9360
	sub_830E9360(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r31,r1,96
	r31.s64 = ctx.r1.s64 + 96;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830dea30
	sub_830DEA30(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// blt 0x830f0344
	if (cr0.lt) goto loc_830F0344;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_830F0344:
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

__attribute__((alias("__imp__sub_830F0358"))) PPC_WEAK_FUNC(sub_830F0358);
PPC_FUNC_IMPL(__imp__sub_830F0358) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830d7eb0
	sub_830D7EB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r31,r1,96
	r31.s64 = ctx.r1.s64 + 96;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830dea30
	sub_830DEA30(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// blt 0x830f039c
	if (cr0.lt) goto loc_830F039C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_830F039C:
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

__attribute__((alias("__imp__sub_830F03B0"))) PPC_WEAK_FUNC(sub_830F03B0);
PPC_FUNC_IMPL(__imp__sub_830F03B0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830ef6f8
	sub_830EF6F8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
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

__attribute__((alias("__imp__sub_830F03F8"))) PPC_WEAK_FUNC(sub_830F03F8);
PPC_FUNC_IMPL(__imp__sub_830F03F8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r31.u32);
	// bne cr6,0x830f047c
	if (!cr6.eq) goto loc_830F047C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830ef730
	sub_830EF730(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_830F0434:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_830F0448:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830ef730
	sub_830EF730(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x830f048c
	if (!cr6.eq) goto loc_830F048C;
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x830e8388
	sub_830E8388(ctx, base);
	// lwz r31,164(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
loc_830F047C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830f0448
	if (!cr6.eq) goto loc_830F0448;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830f0434
	goto loc_830F0434;
loc_830F048C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830f0434
	goto loc_830F0434;
}

__attribute__((alias("__imp__sub_830F0498"))) PPC_WEAK_FUNC(sub_830F0498);
PPC_FUNC_IMPL(__imp__sub_830F0498) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830efc60
	sub_830EFC60(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830f04dc
	if (cr6.eq) goto loc_830F04DC;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_830F04DC:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
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

__attribute__((alias("__imp__sub_830F04F8"))) PPC_WEAK_FUNC(sub_830F04F8);
PPC_FUNC_IMPL(__imp__sub_830F04F8) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830efc98
	sub_830EFC98(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
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

__attribute__((alias("__imp__sub_830F0540"))) PPC_WEAK_FUNC(sub_830F0540);
PPC_FUNC_IMPL(__imp__sub_830F0540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x830ef958
	sub_830EF958(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830dea30
	sub_830DEA30(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F0590"))) PPC_WEAK_FUNC(sub_830F0590);
PPC_FUNC_IMPL(__imp__sub_830F0590) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830efce8
	sub_830EFCE8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
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

__attribute__((alias("__imp__sub_830F05D8"))) PPC_WEAK_FUNC(sub_830F05D8);
PPC_FUNC_IMPL(__imp__sub_830F05D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830efd38
	sub_830EFD38(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830f061c
	if (cr0.lt) goto loc_830F061C;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x830f0620
	if (!cr6.lt) goto loc_830F0620;
loc_830F061C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830F0620:
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

__attribute__((alias("__imp__sub_830F0638"))) PPC_WEAK_FUNC(sub_830F0638);
PPC_FUNC_IMPL(__imp__sub_830F0638) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830efd38
	sub_830EFD38(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830f067c
	if (cr0.lt) goto loc_830F067C;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x830f0680
	if (!cr6.lt) goto loc_830F0680;
loc_830F067C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830F0680:
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

__attribute__((alias("__imp__sub_830F0698"))) PPC_WEAK_FUNC(sub_830F0698);
PPC_FUNC_IMPL(__imp__sub_830F0698) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830efd88
	sub_830EFD88(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// blt 0x830f06d4
	if (cr0.lt) goto loc_830F06D4;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_830F06D4:
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

__attribute__((alias("__imp__sub_830F06E8"))) PPC_WEAK_FUNC(sub_830F06E8);
PPC_FUNC_IMPL(__imp__sub_830F06E8) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830efdc0
	sub_830EFDC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
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

__attribute__((alias("__imp__sub_830F0730"))) PPC_WEAK_FUNC(sub_830F0730);
PPC_FUNC_IMPL(__imp__sub_830F0730) {
	PPC_FUNC_PROLOGUE();
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
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830f0010
	sub_830F0010(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
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

__attribute__((alias("__imp__sub_830F0778"))) PPC_WEAK_FUNC(sub_830F0778);
PPC_FUNC_IMPL(__imp__sub_830F0778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830d7f50
	sub_830D7F50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F07D0"))) PPC_WEAK_FUNC(sub_830F07D0);
PPC_FUNC_IMPL(__imp__sub_830F07D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830eff60
	sub_830EFF60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F0830"))) PPC_WEAK_FUNC(sub_830F0830);
PPC_FUNC_IMPL(__imp__sub_830F0830) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830e94e0
	sub_830E94E0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
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

__attribute__((alias("__imp__sub_830F0878"))) PPC_WEAK_FUNC(sub_830F0878);
PPC_FUNC_IMPL(__imp__sub_830F0878) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830efaf8
	sub_830EFAF8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
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

__attribute__((alias("__imp__sub_830F08C0"))) PPC_WEAK_FUNC(sub_830F08C0);
PPC_FUNC_IMPL(__imp__sub_830F08C0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830efb48
	sub_830EFB48(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
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

__attribute__((alias("__imp__sub_830F0908"))) PPC_WEAK_FUNC(sub_830F0908);
PPC_FUNC_IMPL(__imp__sub_830F0908) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830efb80
	sub_830EFB80(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
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

__attribute__((alias("__imp__sub_830F0950"))) PPC_WEAK_FUNC(sub_830F0950);
PPC_FUNC_IMPL(__imp__sub_830F0950) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830efbd0
	sub_830EFBD0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
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

__attribute__((alias("__imp__sub_830F0990"))) PPC_WEAK_FUNC(sub_830F0990);
PPC_FUNC_IMPL(__imp__sub_830F0990) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830efc08
	sub_830EFC08(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
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

__attribute__((alias("__imp__sub_830F09D8"))) PPC_WEAK_FUNC(sub_830F09D8);
PPC_FUNC_IMPL(__imp__sub_830F09D8) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830efa70
	sub_830EFA70(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
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

__attribute__((alias("__imp__sub_830F0A20"))) PPC_WEAK_FUNC(sub_830F0A20);
PPC_FUNC_IMPL(__imp__sub_830F0A20) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830efaa8
	sub_830EFAA8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
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

__attribute__((alias("__imp__sub_830F0A68"))) PPC_WEAK_FUNC(sub_830F0A68);
PPC_FUNC_IMPL(__imp__sub_830F0A68) {
	PPC_FUNC_PROLOGUE();
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
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830efe10
	sub_830EFE10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
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

__attribute__((alias("__imp__sub_830F0AB0"))) PPC_WEAK_FUNC(sub_830F0AB0);
PPC_FUNC_IMPL(__imp__sub_830F0AB0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830efe50
	sub_830EFE50(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
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

__attribute__((alias("__imp__sub_830F0AF8"))) PPC_WEAK_FUNC(sub_830F0AF8);
PPC_FUNC_IMPL(__imp__sub_830F0AF8) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830effc0
	sub_830EFFC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
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

__attribute__((alias("__imp__sub_830F0B40"))) PPC_WEAK_FUNC(sub_830F0B40);
PPC_FUNC_IMPL(__imp__sub_830F0B40) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830f0050
	sub_830F0050(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
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

__attribute__((alias("__imp__sub_830F0B88"))) PPC_WEAK_FUNC(sub_830F0B88);
PPC_FUNC_IMPL(__imp__sub_830F0B88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830d7f50
	sub_830D7F50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F0BE0"))) PPC_WEAK_FUNC(sub_830F0BE0);
PPC_FUNC_IMPL(__imp__sub_830F0BE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830d7ef8
	sub_830D7EF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F0C38"))) PPC_WEAK_FUNC(sub_830F0C38);
PPC_FUNC_IMPL(__imp__sub_830F0C38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830eff60
	sub_830EFF60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F0C98"))) PPC_WEAK_FUNC(sub_830F0C98);
PPC_FUNC_IMPL(__imp__sub_830F0C98) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830eff18
	sub_830EFF18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
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

__attribute__((alias("__imp__sub_830F0D00"))) PPC_WEAK_FUNC(sub_830F0D00);
PPC_FUNC_IMPL(__imp__sub_830F0D00) {
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
	// bl 0x830f0698
	sub_830F0698(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830f0638
	sub_830F0638(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x830f0d54
	if (cr6.lt) goto loc_830F0D54;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x830f0d54
	if (cr6.lt) goto loc_830F0D54;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x830f0d54
	if (!cr6.gt) goto loc_830F0D54;
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(r31.s32, r30.s32, xer);
	// blt cr6,0x830f0d54
	if (cr6.lt) goto loc_830F0D54;
	// add r11,r3,r30
	r11.u64 = ctx.r3.u64 + r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x830f0d58
	if (cr6.lt) goto loc_830F0D58;
loc_830F0D54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830F0D58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830F0D60"))) PPC_WEAK_FUNC(sub_830F0D60);
PPC_FUNC_IMPL(__imp__sub_830F0D60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// bl 0x830f04f8
	sub_830F04F8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// blt 0x830f0da4
	if (cr0.lt) goto loc_830F0DA4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f0d00
	sub_830F0D00(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x830f0da4
	if (!cr0.eq) goto loc_830F0DA4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f06e8
	sub_830F06E8(ctx, base);
	// b 0x830f0da8
	goto loc_830F0DA8;
loc_830F0DA4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_830F0DA8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830F0DB0"))) PPC_WEAK_FUNC(sub_830F0DB0);
PPC_FUNC_IMPL(__imp__sub_830F0DB0) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// bl 0x830ef768
	sub_830EF768(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r31,r1,112
	r31.s64 = ctx.r1.s64 + 112;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// stw r9,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r9.u32);
	// stw r8,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r8.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_830F0E20"))) PPC_WEAK_FUNC(sub_830F0E20);
PPC_FUNC_IMPL(__imp__sub_830F0E20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830ef7b8
	sub_830EF7B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F0E80"))) PPC_WEAK_FUNC(sub_830F0E80);
PPC_FUNC_IMPL(__imp__sub_830F0E80) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830ef810
	sub_830EF810(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
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

__attribute__((alias("__imp__sub_830F0EC8"))) PPC_WEAK_FUNC(sub_830F0EC8);
PPC_FUNC_IMPL(__imp__sub_830F0EC8) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830f0190
	sub_830F0190(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
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

__attribute__((alias("__imp__sub_830F0F10"))) PPC_WEAK_FUNC(sub_830F0F10);
PPC_FUNC_IMPL(__imp__sub_830F0F10) {
	PPC_FUNC_PROLOGUE();
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
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830f01e0
	sub_830F01E0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
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

__attribute__((alias("__imp__sub_830F0F60"))) PPC_WEAK_FUNC(sub_830F0F60);
PPC_FUNC_IMPL(__imp__sub_830F0F60) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f13,28(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f0,f0,f0
	f0.f64 = double(float(f0.f64 * f0.f64));
	// fmadds f0,f13,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + f0.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bge cr6,0x830f0fb4
	if (!cr6.lt) goto loc_830F0FB4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830f106c
	goto loc_830F106C;
loc_830F0FB4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83120b00
	sub_83120B00(ctx, base);
	// lfs f10,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f7,f9,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// lfs f8,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f6,f8,f11
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(f0.f64 * f0.f64));
	// lfs f5,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,20(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f5,f11
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// fsubs f2,f4,f10
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f10.f64));
	// fmuls f7,f7,f13
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * f0.f64));
	// fmadds f12,f13,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fmadds f7,f3,f0,f7
	ctx.f7.f64 = double(float(ctx.f3.f64 * f0.f64 + ctx.f7.f64));
	// fmadds f6,f2,f13,f6
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fdivs f7,f7,f12
	ctx.f7.f64 = double(float(ctx.f7.f64 / ctx.f12.f64));
	// fdivs f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 / ctx.f12.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * f0.f64));
	// fmuls f7,f7,f13
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fadds f12,f11,f6
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f6.f64));
	// fadds f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 + f0.f64));
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f11,f10,f7
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// fsubs f12,f5,f12
	ctx.f12.f64 = double(float(ctx.f5.f64 - ctx.f12.f64));
	// fsubs f0,f8,f0
	f0.f64 = double(float(ctx.f8.f64 - f0.f64));
	// fsubs f13,f4,f13
	ctx.f13.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// fsubs f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fmuls f12,f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(f0.f64 * f0.f64));
	// fmadds f0,f11,f11,f12
	f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f13,f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x830f105c
	if (cr6.gt) goto loc_830F105C;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_830F105C:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f31.f64);
	// li r3,1
	ctx.r3.s64 = 1;
	// blt cr6,0x830f106c
	if (cr6.lt) goto loc_830F106C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830F106C:
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

__attribute__((alias("__imp__sub_830F1088"))) PPC_WEAK_FUNC(sub_830F1088);
PPC_FUNC_IMPL(__imp__sub_830F1088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// stfs f0,0(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_set1_epi32(int(0x0)));
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// addi r6,r11,-7104
	ctx.r6.s64 = r11.s64 + -7104;
	// stfs f0,4(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// addi r10,r1,-72
	ctx.r10.s64 = ctx.r1.s64 + -72;
	// lfs f0,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	f0.f64 = double(temp.f32);
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
	// stfs f0,24(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 24, temp.u32);
	// addi r9,r1,-72
	ctx.r9.s64 = ctx.r1.s64 + -72;
	// lvx128 v62,r0,r6
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v13,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0x0));
	// lfs f0,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	f0.f64 = double(temp.f32);
	// vrefp128 v0,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(v62.f32)));
	// stfs f0,28(r5)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 28, temp.u32);
	// vor128 v12,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)v62.u8));
	// vnmsubfp v12,v12,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// lfs f11,8(r3)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// vor v10,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vor128 v9,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)v62.u8));
	// addi r8,r1,-65
	ctx.r8.s64 = ctx.r1.s64 + -65;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r31,r1,-80
	r31.s64 = ctx.r1.s64 + -80;
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// vmaddfp v0,v0,v12,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// fadds f12,f12,f11
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f0,-68(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -68, temp.u32);
	// li r11,4
	r11.s64 = 4;
	// stfs f12,-72(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -72, temp.u32);
	// addi r30,r1,-80
	r30.s64 = ctx.r1.s64 + -80;
	// lvsl v7,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// lvx128 v61,r0,r9
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r3,24
	ctx.r9.s64 = ctx.r3.s64 + 24;
	// lvx128 v62,r0,r8
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v62,v61,v62,v7
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vnmsubfp v13,v9,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// addi r9,r1,-72
	ctx.r9.s64 = ctx.r1.s64 + -72;
	// vcmpeqfp v8,v0,v0
	simde_mm_store_ps(ctx.v8.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// addi r10,r1,-65
	ctx.r10.s64 = ctx.r1.s64 + -65;
	// vspltw128 v12,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0x0));
	// addi r8,r4,8
	ctx.r8.s64 = ctx.r4.s64 + 8;
	// addi r7,r3,16
	ctx.r7.s64 = ctx.r3.s64 + 16;
	// vspltw128 v11,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0x0));
	// addi r7,r1,-72
	ctx.r7.s64 = ctx.r1.s64 + -72;
	// addi r8,r1,-72
	ctx.r8.s64 = ctx.r1.s64 + -72;
	// vmaddfp v0,v0,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vsel v0,v10,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vmulfp128 v62,v62,v0
	simde_mm_store_ps(v62.f32, simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vspltw128 v61,v62,0
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), 0xFF));
	// vspltw128 v62,v62,1
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), 0xAA));
	// stvewx128 v61,r0,r31
	ea = (r31.u32) & ~0x3;
	PPC_STORE_U32(ea, v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r30,r11
	ea = (r30.u32 + r11.u32) & ~0x3;
	PPC_STORE_U32(ea, v62.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f13,-76(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -76);
	ctx.f13.f64 = double(temp.f32);
	// lvx128 v62,r0,r6
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,-80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// stfs f13,12(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// vrefp128 v13,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(v62.f32)));
	// lfs f12,8(r3)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// vor128 v0,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)v62.u8));
	// lfs f11,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// vor128 v10,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)v62.u8));
	// lfs f0,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	f0.f64 = double(temp.f32);
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// vnmsubfp v0,v0,v13,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v12.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// fadds f12,f12,f11
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f12,-72(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -72, temp.u32);
	// vor v9,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// stfs f0,-68(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -68, temp.u32);
	// lvx128 v61,r0,r9
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,-80
	ctx.r9.s64 = ctx.r1.s64 + -80;
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v0,v13,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vspltw128 v13,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0x0));
	// vcmpeqfp v7,v0,v0
	simde_mm_store_ps(ctx.v7.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v12,v10,v0,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// lvsl v6,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v62,v61,v62,v6
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// addi r30,r1,-80
	r30.s64 = ctx.r1.s64 + -80;
	// addi r26,r1,-72
	r26.s64 = ctx.r1.s64 + -72;
	// addi r31,r1,-65
	r31.s64 = ctx.r1.s64 + -65;
	// addi r28,r1,-65
	r28.s64 = ctx.r1.s64 + -65;
	// addi r10,r1,-72
	ctx.r10.s64 = ctx.r1.s64 + -72;
	// addi r8,r1,-80
	ctx.r8.s64 = ctx.r1.s64 + -80;
	// addi r29,r1,-80
	r29.s64 = ctx.r1.s64 + -80;
	// addi r27,r1,-72
	r27.s64 = ctx.r1.s64 + -72;
	// addi r25,r1,-80
	r25.s64 = ctx.r1.s64 + -80;
	// lvsl v6,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r10,r4,16
	ctx.r10.s64 = ctx.r4.s64 + 16;
	// addi r10,r1,-80
	ctx.r10.s64 = ctx.r1.s64 + -80;
	// vmaddfp v0,v0,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// lvsl v5,r0,r27
	temp.u32 = r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vsel v0,v9,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vmulfp128 v62,v62,v0
	simde_mm_store_ps(v62.f32, simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vspltw128 v61,v62,0
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), 0xFF));
	// vspltw128 v62,v62,1
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), 0xAA));
	// stvewx128 v61,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, v61.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r9,r5,16
	ctx.r9.s64 = ctx.r5.s64 + 16;
	// stvewx128 v62,r30,r11
	ea = (r30.u32 + r11.u32) & ~0x3;
	PPC_STORE_U32(ea, v62.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r30,r1,-80
	r30.s64 = ctx.r1.s64 + -80;
	// lfs f12,8(r4)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,-76(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -76);
	f0.f64 = double(temp.f32);
	// fadds f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 + f0.f64));
	// lvx128 v62,r0,r6
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrefp128 v0,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(v62.f32)));
	// vor128 v10,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)v62.u8));
	// stfs f11,-68(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -68, temp.u32);
	// vor v9,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// lfs f13,-80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	ctx.f13.f64 = double(temp.f32);
	// vor128 v8,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)v62.u8));
	// fadds f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// vnmsubfp v12,v10,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// stfs f12,-72(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -72, temp.u32);
	// lvx128 v61,r0,r31
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r1,-80
	r31.s64 = ctx.r1.s64 + -80;
	// lvx128 v62,r0,r7
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v62,v62,v61,v6
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vmaddfp v0,v0,v12,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// addi r7,r1,-65
	ctx.r7.s64 = ctx.r1.s64 + -65;
	// vspltw128 v12,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0x0));
	// vnmsubfp v13,v8,v0,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v10,v0,v0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v0,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vsel v0,v9,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vmulfp128 v62,v62,v0
	simde_mm_store_ps(v62.f32, simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vspltw128 v61,v62,0
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), 0xFF));
	// vspltw128 v62,v62,1
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), 0xAA));
	// stvewx128 v61,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, v61.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r8,r1,-72
	ctx.r8.s64 = ctx.r1.s64 + -72;
	// stvewx128 v62,r29,r11
	ea = (r29.u32 + r11.u32) & ~0x3;
	PPC_STORE_U32(ea, v62.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r29,r1,-72
	r29.s64 = ctx.r1.s64 + -72;
	// lvx128 v62,r0,r6
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f12,-76(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -76);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,16(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// vrefp128 v0,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(v62.f32)));
	// stfs f12,20(r4)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// vor128 v13,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)v62.u8));
	// lfs f10,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// fadds f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// vnmsubfp v13,v13,v0,v11
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v11.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// lfs f12,16(r3)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fadds f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// stfs f12,-72(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -72, temp.u32);
	// vor128 v10,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)v62.u8));
	// stfs f11,-68(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -68, temp.u32);
	// vor v9,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// lvx128 v62,r0,r28
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v0,v0,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// lvx128 v61,r0,r26
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r26.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v62,v61,v62,v5
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vspltw128 v13,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0x0));
	// addi r3,r1,-72
	ctx.r3.s64 = ctx.r1.s64 + -72;
	// vnmsubfp v11,v10,v0,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v11.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vcmpeqfp v5,v0,v0
	simde_mm_store_ps(ctx.v5.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// addi r3,r1,-72
	ctx.r3.s64 = ctx.r1.s64 + -72;
	// addi r28,r1,-65
	r28.s64 = ctx.r1.s64 + -65;
	// lvsl v6,r0,r29
	temp.u32 = r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r9,r5,8
	ctx.r9.s64 = ctx.r5.s64 + 8;
	// addi r9,r1,-80
	ctx.r9.s64 = ctx.r1.s64 + -80;
	// addi r29,r1,-80
	r29.s64 = ctx.r1.s64 + -80;
	// vmaddfp v0,v0,v11,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vsel v0,v9,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vmulfp128 v63,v62,v0
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vspltw128 v62,v63,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// vspltw128 v63,v63,1
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xAA));
	// stvewx128 v62,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r25,r11
	ea = (r25.u32 + r11.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v63,r0,r6
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f12,-76(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -76);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,20(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// vrefp128 v0,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(v63.f32)));
	// vor128 v10,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)v63.u8));
	// lfs f12,-80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	ctx.f12.f64 = double(temp.f32);
	// vor128 v9,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)v63.u8));
	// stfs f12,16(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// vnmsubfp v11,v10,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor v10,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// lfs f11,20(r5)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 + f0.f64));
	// vmaddfp v0,v0,v11,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// stfs f0,-68(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -68, temp.u32);
	// stfs f13,-72(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -72, temp.u32);
	// lvx128 v63,r0,r7
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vnmsubfp v13,v9,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v8,v0,v0
	simde_mm_store_ps(ctx.v8.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// lvx128 v62,r0,r8
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v63,v62,v63,v7
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmaddfp v0,v0,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vsel v0,v10,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vmulfp128 v63,v63,v0
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vspltw128 v62,v63,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// vspltw128 v63,v63,1
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xAA));
	// stvewx128 v62,r0,r31
	ea = (r31.u32) & ~0x3;
	PPC_STORE_U32(ea, v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r30,r11
	ea = (r30.u32 + r11.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,-80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	f0.f64 = double(temp.f32);
	// lfs f13,-76(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -76);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// lvx128 v63,r0,r6
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f0,8(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// vrefp128 v0,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(v63.f32)));
	// vor128 v13,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)v63.u8));
	// vor128 v11,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)v63.u8));
	// lfs f11,16(r4)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f0,-68(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -68, temp.u32);
	// vnmsubfp v13,v13,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor v9,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// stfs f12,-72(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -72, temp.u32);
	// lvx128 v62,r0,r3
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r28
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v63,v62,v63,v6
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vmaddfp v0,v0,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v13,v11,v0,v12
	simde_mm_store_ps(ctx.v13.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v10,v0,v0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v0,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vsel v0,v9,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vmulfp128 v63,v63,v0
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vspltw128 v62,v63,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// vspltw128 v63,v63,1
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xAA));
	// stvewx128 v62,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r29,r11
	ea = (r29.u32 + r11.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f13,-76(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -76);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f13,4(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// stfs f0,24(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,28(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_830F1460"))) PPC_WEAK_FUNC(sub_830F1460);
PPC_FUNC_IMPL(__imp__sub_830F1460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lfs f1,-22120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22120);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x830f0f60
	sub_830F0F60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830f14bc
	if (cr0.eq) goto loc_830F14BC;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lfs f2,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830f1510
	if (cr0.lt) goto loc_830F1510;
	// li r11,1
	r11.s64 = 1;
	// b 0x830f1508
	goto loc_830F1508;
loc_830F14BC:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1088
	sub_830F1088(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830f1460
	sub_830F1460(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830f1510
	if (cr0.lt) goto loc_830F1510;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830f1460
	sub_830F1460(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830f1510
	if (cr0.lt) goto loc_830F1510;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
loc_830F1508:
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_830F1510:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830F1518"))) PPC_WEAK_FUNC(sub_830F1518);
PPC_FUNC_IMPL(__imp__sub_830F1518) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x830f1538
	if (!cr6.eq) goto loc_830F1538;
	// stfs f1,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// stfs f1,4(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stfs f2,8(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// b 0x830f1574
	goto loc_830F1574;
loc_830F1538:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bge cr6,0x830f1548
	if (!cr6.lt) goto loc_830F1548;
	// stfs f1,4(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
loc_830F1548:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x830f1558
	if (!cr6.gt) goto loc_830F1558;
	// stfs f1,12(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
loc_830F1558:
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	cr6.compare(ctx.f2.f64, f0.f64);
	// bge cr6,0x830f1568
	if (!cr6.lt) goto loc_830F1568;
	// stfs f2,8(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
loc_830F1568:
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	cr6.compare(ctx.f2.f64, f0.f64);
	// ble cr6,0x830f1578
	if (!cr6.gt) goto loc_830F1578;
loc_830F1574:
	// stfs f2,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
loc_830F1578:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F1588"))) PPC_WEAK_FUNC(sub_830F1588);
PPC_FUNC_IMPL(__imp__sub_830F1588) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// li r29,0
	r29.s64 = 0;
	// addi r27,r11,-7660
	r27.s64 = r11.s64 + -7660;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// mr r24,r29
	r24.u64 = r29.u64;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// lwz r30,0(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x830f16f0
	if (!cr0.gt) goto loc_830F16F0;
	// mr r28,r29
	r28.u64 = r29.u64;
	// mr r25,r11
	r25.u64 = r11.u64;
loc_830F15D0:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// add r31,r28,r11
	r31.u64 = r28.u64 + r11.u64;
	// lwzx r4,r28,r11
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// bl 0x830e8aa0
	sub_830E8AA0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830f16a0
	if (cr0.eq) goto loc_830F16A0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x830f16a0
	if (cr6.eq) goto loc_830F16A0;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// bne cr6,0x830f1630
	if (!cr6.eq) goto loc_830F1630;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83119510
	sub_83119510(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83118b18
	sub_83118B18(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83118f10
	sub_83118F10(ctx, base);
	// li r24,1
	r24.s64 = 1;
loc_830F1630:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x83119100
	sub_83119100(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x831190d8
	sub_831190D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x83119128
	sub_83119128(ctx, base);
	// addi r4,r31,20
	ctx.r4.s64 = r31.s64 + 20;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83118ec0
	sub_83118EC0(ctx, base);
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83118ee8
	sub_83118EE8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r7,156(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r6,152(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// bl 0x830ef630
	sub_830EF630(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
loc_830F16A0:
	// addic. r25,r25,-1
	xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// addi r28,r28,168
	r28.s64 = r28.s64 + 168;
	// bne 0x830f15d0
	if (!cr0.eq) goto loc_830F15D0;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// beq cr6,0x830f16f0
	if (cr6.eq) goto loc_830F16F0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x83119100
	sub_83119100(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x831190d8
	sub_831190D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x83119128
	sub_83119128(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83118ec0
	sub_83118EC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83118ee8
	sub_83118EE8(ctx, base);
loc_830F16F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_830F1700"))) PPC_WEAK_FUNC(sub_830F1700);
PPC_FUNC_IMPL(__imp__sub_830F1700) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x830e90f0
	sub_830E90F0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x830f1758
	if (!cr0.lt) goto loc_830F1758;
	// lis r11,-32720
	r11.s64 = -2144337920;
	// ori r11,r11,38
	r11.u64 = r11.u64 | 38;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bne cr6,0x830f17a8
	if (!cr6.eq) goto loc_830F17A8;
loc_830F1758:
	// li r11,0
	r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e8400
	sub_830E8400(ctx, base);
	// b 0x830f179c
	goto loc_830F179C;
loc_830F1770:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x830f1700
	sub_830F1700(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830f17a8
	if (cr0.lt) goto loc_830F17A8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830e84f0
	sub_830E84F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830f17a8
	if (cr0.lt) goto loc_830F17A8;
loc_830F179C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830f1770
	if (!cr6.eq) goto loc_830F1770;
loc_830F17A8:
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

__attribute__((alias("__imp__sub_830F17C0"))) PPC_WEAK_FUNC(sub_830F17C0);
PPC_FUNC_IMPL(__imp__sub_830F17C0) {
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
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,240(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 240);
	// rlwinm r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x830f1968
	if (!cr6.eq) goto loc_830F1968;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f3,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 68);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,64(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 64);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,60(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x831208d0
	sub_831208D0(ctx, base);
	// addi r4,r31,72
	ctx.r4.s64 = r31.s64 + 72;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83120b78
	sub_83120B78(ctx, base);
	// lfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 96);
	f0.f64 = double(temp.f32);
	// fneg f3,f0
	ctx.f3.u64 = f0.u64 ^ 0x8000000000000000;
	// lfs f13,92(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// fneg f2,f13
	ctx.f2.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f0,88(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 88);
	f0.f64 = double(temp.f32);
	// fneg f1,f0
	ctx.f1.u64 = f0.u64 ^ 0x8000000000000000;
	// bl 0x83120948
	sub_83120948(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lfs f3,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 96);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,92(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 92);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,88(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83120948
	sub_83120948(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// lfs f3,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 56);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,52(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 52);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,48(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83120948
	sub_83120948(ctx, base);
	// addi r30,r31,100
	r30.s64 = r31.s64 + 100;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// bl 0x831209d8
	sub_831209D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x831209d8
	sub_831209D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// bl 0x831209d8
	sub_831209D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831209d8
	sub_831209D8(ctx, base);
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 240);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r10,240(r31)
	PPC_STORE_U32(r31.u32 + 240, ctx.r10.u32);
	// beq cr6,0x830f18c0
	if (cr6.eq) goto loc_830F18C0;
	// addi r5,r11,164
	ctx.r5.s64 = r11.s64 + 164;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,164
	ctx.r3.s64 = r31.s64 + 164;
	// bl 0x831209d8
	sub_831209D8(ctx, base);
	// b 0x830f1940
	goto loc_830F1940;
loc_830F18C0:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,164(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 164, temp.u32);
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,168(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 168, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,172(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 172, temp.u32);
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,176(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 176, temp.u32);
	// lfs f0,16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,180(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 180, temp.u32);
	// lfs f0,20(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 20);
	f0.f64 = double(temp.f32);
	// stfs f0,184(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 184, temp.u32);
	// lfs f0,24(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	f0.f64 = double(temp.f32);
	// stfs f0,188(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 188, temp.u32);
	// lfs f0,28(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 28);
	f0.f64 = double(temp.f32);
	// stfs f0,192(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 192, temp.u32);
	// lfs f0,32(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 32);
	f0.f64 = double(temp.f32);
	// stfs f0,196(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 196, temp.u32);
	// lfs f0,36(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 36);
	f0.f64 = double(temp.f32);
	// stfs f0,200(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 200, temp.u32);
	// lfs f0,40(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 40);
	f0.f64 = double(temp.f32);
	// stfs f0,204(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 204, temp.u32);
	// lfs f0,44(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 44);
	f0.f64 = double(temp.f32);
	// stfs f0,208(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 208, temp.u32);
	// lfs f0,48(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 48);
	f0.f64 = double(temp.f32);
	// stfs f0,212(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 212, temp.u32);
	// lfs f0,52(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 52);
	f0.f64 = double(temp.f32);
	// stfs f0,216(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 216, temp.u32);
	// lfs f0,56(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 56);
	f0.f64 = double(temp.f32);
	// stfs f0,220(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 220, temp.u32);
	// lfs f0,60(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 60);
	f0.f64 = double(temp.f32);
	// stfs f0,224(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 224, temp.u32);
loc_830F1940:
	// lwz r31,24(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// b 0x830f1960
	goto loc_830F1960;
loc_830F1948:
	// lwz r11,240(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 240);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,240(r31)
	PPC_STORE_U32(r31.u32 + 240, r11.u32);
	// bl 0x830f17c0
	sub_830F17C0(ctx, base);
	// lwz r31,32(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 32);
loc_830F1960:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830f1948
	if (!cr6.eq) goto loc_830F1948;
loc_830F1968:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F1980"))) PPC_WEAK_FUNC(sub_830F1980);
PPC_FUNC_IMPL(__imp__sub_830F1980) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x830f17c0
	sub_830F17C0(ctx, base);
	// lfs f0,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 100);
	f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,0(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// lfs f0,104(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 104);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// lfs f0,108(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 108);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// lfs f0,112(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 112);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// lfs f0,116(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 116);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 16, temp.u32);
	// lfs f0,120(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 120);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 20, temp.u32);
	// lfs f0,124(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 124);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 24, temp.u32);
	// lfs f0,128(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 128);
	f0.f64 = double(temp.f32);
	// stfs f0,28(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 28, temp.u32);
	// lfs f0,132(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 132);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 32, temp.u32);
	// lfs f0,136(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 136);
	f0.f64 = double(temp.f32);
	// stfs f0,36(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 36, temp.u32);
	// lfs f0,140(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 140);
	f0.f64 = double(temp.f32);
	// stfs f0,40(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 40, temp.u32);
	// lfs f0,144(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 144);
	f0.f64 = double(temp.f32);
	// stfs f0,44(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 44, temp.u32);
	// lfs f0,148(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 148);
	f0.f64 = double(temp.f32);
	// stfs f0,48(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 48, temp.u32);
	// lfs f0,152(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 152);
	f0.f64 = double(temp.f32);
	// stfs f0,52(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 52, temp.u32);
	// lfs f0,156(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 156);
	f0.f64 = double(temp.f32);
	// stfs f0,56(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 56, temp.u32);
	// lfs f0,160(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 160);
	f0.f64 = double(temp.f32);
	// stfs f0,60(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 60, temp.u32);
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

__attribute__((alias("__imp__sub_830F1A40"))) PPC_WEAK_FUNC(sub_830F1A40);
PPC_FUNC_IMPL(__imp__sub_830F1A40) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x830f17c0
	sub_830F17C0(ctx, base);
	// lfs f0,164(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 164);
	f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,0(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// lfs f0,168(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 168);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// lfs f0,172(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 172);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// lfs f0,176(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 176);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// lfs f0,180(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 180);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 16, temp.u32);
	// lfs f0,184(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 184);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 20, temp.u32);
	// lfs f0,188(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 188);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 24, temp.u32);
	// lfs f0,192(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 192);
	f0.f64 = double(temp.f32);
	// stfs f0,28(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 28, temp.u32);
	// lfs f0,196(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 196);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 32, temp.u32);
	// lfs f0,200(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 200);
	f0.f64 = double(temp.f32);
	// stfs f0,36(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 36, temp.u32);
	// lfs f0,204(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 204);
	f0.f64 = double(temp.f32);
	// stfs f0,40(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 40, temp.u32);
	// lfs f0,208(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 208);
	f0.f64 = double(temp.f32);
	// stfs f0,44(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 44, temp.u32);
	// lfs f0,212(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 212);
	f0.f64 = double(temp.f32);
	// stfs f0,48(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 48, temp.u32);
	// lfs f0,216(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 216);
	f0.f64 = double(temp.f32);
	// stfs f0,52(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 52, temp.u32);
	// lfs f0,220(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 220);
	f0.f64 = double(temp.f32);
	// stfs f0,56(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 56, temp.u32);
	// lfs f0,224(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 224);
	f0.f64 = double(temp.f32);
	// stfs f0,60(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 60, temp.u32);
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

__attribute__((alias("__imp__sub_830F1B00"))) PPC_WEAK_FUNC(sub_830F1B00);
PPC_FUNC_IMPL(__imp__sub_830F1B00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 48);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F1B28"))) PPC_WEAK_FUNC(sub_830F1B28);
PPC_FUNC_IMPL(__imp__sub_830F1B28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f0,64(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 64);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f0,68(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 68);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F1B50"))) PPC_WEAK_FUNC(sub_830F1B50);
PPC_FUNC_IMPL(__imp__sub_830F1B50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,72(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 72, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,76(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 76, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 80, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 84, temp.u32);
	// lwz r10,240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 240);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,240(r11)
	PPC_STORE_U32(r11.u32 + 240, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F1B88"))) PPC_WEAK_FUNC(sub_830F1B88);
PPC_FUNC_IMPL(__imp__sub_830F1B88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,88(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 88);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f0,92(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 92);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f0,96(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 96);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F1BB0"))) PPC_WEAK_FUNC(sub_830F1BB0);
PPC_FUNC_IMPL(__imp__sub_830F1BB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,88(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 88, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,92(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 92, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 96, temp.u32);
	// lwz r10,240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 240);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,240(r11)
	PPC_STORE_U32(r11.u32 + 240, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F1BE0"))) PPC_WEAK_FUNC(sub_830F1BE0);
PPC_FUNC_IMPL(__imp__sub_830F1BE0) {
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
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 240);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x830f1c1c
	if (cr6.eq) goto loc_830F1C1C;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// b 0x830f1e0c
	goto loc_830F1E0C;
loc_830F1C1C:
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x830e9648
	sub_830E9648(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f17c0
	sub_830F17C0(ctx, base);
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// li r10,8
	ctx.r10.s64 = 8;
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_set1_epi32(int(0x0)));
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// li r11,12
	r11.s64 = 12;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// vupkd3d128 v60,v63,4
	temp.f32 = 3.0f;
	temp.s32 += v63.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += v63.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	v60 = vTemp;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// vpermwi128 v63,v60,234
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v60.u32), 0x15));
	// li r3,4
	ctx.r3.s64 = 4;
	// vpermwi128 v62,v60,186
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v60.u32), 0x45));
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lvsr v0,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// rotlwi r11,r7,0
	r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// vpermwi128 v61,v60,174
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v60.u32), 0x51));
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// vperm128 v63,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// vperm128 v62,v62,v62,v0
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// lwz r29,84(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r1,128
	r30.s64 = ctx.r1.s64 + 128;
	// li r7,20
	ctx.r7.s64 = 20;
	// vperm128 v61,v61,v61,v0
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r28,r1,128
	r28.s64 = ctx.r1.s64 + 128;
	// vpermwi128 v60,v60,171
	simde_mm_store_si128((simde__m128i*)v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v60.u32), 0x54));
	// li r27,24
	r27.s64 = 24;
	// stvewx128 v63,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// li r5,28
	ctx.r5.s64 = 28;
	// stvewx128 v63,r29,r3
	ea = (r29.u32 + ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r26,r1,128
	r26.s64 = ctx.r1.s64 + 128;
	// stvewx128 v63,r8,r6
	ea = (ctx.r8.u32 + ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stvewx128 v63,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// li r8,32
	ctx.r8.s64 = 32;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stvewx128 v62,r10,r11
	ea = (ctx.r10.u32 + r11.u32) & ~0x3;
	PPC_STORE_U32(ea, v62.u32[3 - ((ea & 0xF) >> 2)]);
	// li r6,36
	ctx.r6.s64 = 36;
	// stvewx128 v62,r30,r7
	ea = (r30.u32 + ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, v62.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// stvewx128 v62,r28,r27
	ea = (r28.u32 + r27.u32) & ~0x3;
	PPC_STORE_U32(ea, v62.u32[3 - ((ea & 0xF) >> 2)]);
	// li r10,40
	ctx.r10.s64 = 40;
	// stvewx128 v62,r26,r5
	ea = (r26.u32 + ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, v61.u32[3 - ((ea & 0xF) >> 2)]);
	// vperm128 v63,v60,v60,v0
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// stvewx128 v61,r9,r6
	ea = (ctx.r9.u32 + ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, v61.u32[3 - ((ea & 0xF) >> 2)]);
	// li r30,44
	r30.s64 = 44;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// li r9,48
	ctx.r9.s64 = 48;
	// stvewx128 v61,r11,r10
	ea = (r11.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, v61.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// li r29,52
	r29.s64 = 52;
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// stvewx128 v61,r7,r30
	ea = (ctx.r7.u32 + r30.u32) & ~0x3;
	PPC_STORE_U32(ea, v61.u32[3 - ((ea & 0xF) >> 2)]);
	// li r10,56
	ctx.r10.s64 = 56;
	// stvewx128 v63,r8,r9
	ea = (ctx.r8.u32 + ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r28,r1,128
	r28.s64 = ctx.r1.s64 + 128;
	// li r27,60
	r27.s64 = 60;
	// stvewx128 v63,r6,r29
	ea = (ctx.r6.u32 + r29.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r5,r31,164
	ctx.r5.s64 = r31.s64 + 164;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stvewx128 v63,r11,r10
	ea = (r11.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r28,r27
	ea = (r28.u32 + r27.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// bl 0x83120cf8
	sub_83120CF8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r31,88(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lfs f0,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// lwa r10,4(r31)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(r31.u32 + 4));
	// lwa r11,0(r31)
	r11.s64 = int32_t(PPC_LOAD_U32(r31.u32 + 0));
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x83120c28
	sub_83120C28(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f13,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-24780(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24780);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x830f1e04
	if (cr6.lt) goto loc_830F1E04;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,2244(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fcmpu cr6,f13,f11
	cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bgt cr6,0x830f1e04
	if (cr6.gt) goto loc_830F1E04;
	// lfs f13,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x830f1e04
	if (cr6.lt) goto loc_830F1E04;
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fadds f0,f0,f12
	f0.f64 = double(float(f0.f64 + ctx.f12.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x830f1e08
	if (!cr6.gt) goto loc_830F1E08;
loc_830F1E04:
	// li r11,0
	r11.s64 = 0;
loc_830F1E08:
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_830F1E0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_830F1E18"))) PPC_WEAK_FUNC(sub_830F1E18);
PPC_FUNC_IMPL(__imp__sub_830F1E18) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f1e3c
	if (cr6.eq) goto loc_830F1E3C;
	// bl 0x83108348
	sub_83108348(ctx, base);
loc_830F1E3C:
	// lwz r30,228(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x830f1e58
	if (cr6.eq) goto loc_830F1E58;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83108970
	sub_83108970(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_830F1E58:
	// stw r29,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r29.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x830f1e80
	if (cr6.eq) goto loc_830F1E80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// stw r3,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r3.u32);
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// bl 0x831087e0
	sub_831087E0(ctx, base);
	// b 0x830f1e84
	goto loc_830F1E84;
loc_830F1E80:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830F1E84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830F1E90"))) PPC_WEAK_FUNC(sub_830F1E90);
PPC_FUNC_IMPL(__imp__sub_830F1E90) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r3,228(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 228);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f1eb4
	if (cr6.eq) goto loc_830F1EB4;
	// bl 0x82b94390
	sub_82B94390(ctx, base);
loc_830F1EB4:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// beq cr6,0x830f1f3c
	if (cr6.eq) goto loc_830F1F3C;
	// lwz r11,240(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 240);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// beq cr6,0x830f1f3c
	if (cr6.eq) goto loc_830F1F3C;
	// rlwinm r11,r11,0,24,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// beq cr6,0x830f1f3c
	if (cr6.eq) goto loc_830F1F3C;
	// lwz r31,24(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830f1f1c
	if (cr6.eq) goto loc_830F1F1C;
	// lis r28,-31942
	r28.s64 = -2093350912;
loc_830F1EE8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r30,-13924(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + -13924);
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x830d7618
	sub_830D7618(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x830f1f10
	if (!cr0.eq) goto loc_830F1F10;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1e90
	sub_830F1E90(ctx, base);
loc_830F1F10:
	// lwz r31,32(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830f1ee8
	if (!cr6.eq) goto loc_830F1EE8;
loc_830F1F1C:
	// lwz r31,44(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// b 0x830f1f34
	goto loc_830F1F34;
loc_830F1F24:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1e90
	sub_830F1E90(ctx, base);
	// lwz r31,32(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 32);
loc_830F1F34:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830f1f24
	if (!cr6.eq) goto loc_830F1F24;
loc_830F1F3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830F1F48"))) PPC_WEAK_FUNC(sub_830F1F48);
PPC_FUNC_IMPL(__imp__sub_830F1F48) {
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
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// lwz r3,228(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 228);
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f1f90
	if (cr6.eq) goto loc_830F1F90;
	// lwz r11,240(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 240);
	// rlwinm r11,r11,0,18,18
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,8192
	cr6.compare<uint32_t>(r11.u32, 8192, xer);
	// beq cr6,0x830f1f90
	if (cr6.eq) goto loc_830F1F90;
	// li r8,1
	ctx.r8.s64 = 1;
	// bl 0x83107c58
	sub_83107C58(ctx, base);
loc_830F1F90:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// beq cr6,0x830f2038
	if (cr6.eq) goto loc_830F2038;
	// lwz r11,240(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 240);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// beq cr6,0x830f2038
	if (cr6.eq) goto loc_830F2038;
	// rlwinm r11,r11,0,24,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// beq cr6,0x830f2038
	if (cr6.eq) goto loc_830F2038;
	// lwz r31,24(r25)
	r31.u64 = PPC_LOAD_U32(r25.u32 + 24);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830f2008
	if (cr6.eq) goto loc_830F2008;
	// lis r24,-31942
	r24.s64 = -2093350912;
loc_830F1FC4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r26,-13924(r24)
	r26.u64 = PPC_LOAD_U32(r24.u32 + -13924);
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x830d7618
	sub_830D7618(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x830f1ffc
	if (!cr0.eq) goto loc_830F1FFC;
	// li r8,1
	ctx.r8.s64 = 1;
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
	// bl 0x830f1f48
	sub_830F1F48(ctx, base);
loc_830F1FFC:
	// lwz r31,32(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830f1fc4
	if (!cr6.eq) goto loc_830F1FC4;
loc_830F2008:
	// lwz r31,44(r25)
	r31.u64 = PPC_LOAD_U32(r25.u32 + 44);
	// b 0x830f2030
	goto loc_830F2030;
loc_830F2010:
	// li r8,1
	ctx.r8.s64 = 1;
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
	// bl 0x830f1f48
	sub_830F1F48(ctx, base);
	// lwz r31,32(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 32);
loc_830F2030:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830f2010
	if (!cr6.eq) goto loc_830F2010;
loc_830F2038:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_830F2048"))) PPC_WEAK_FUNC(sub_830F2048);
PPC_FUNC_IMPL(__imp__sub_830F2048) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830f2078
	if (cr6.eq) goto loc_830F2078;
	// lwz r10,240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 240);
	// rlwinm r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// beq cr6,0x830f20c0
	if (cr6.eq) goto loc_830F20C0;
loc_830F2078:
	// stfs f1,260(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 260, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stfs f2,264(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 264, temp.u32);
	// beq cr6,0x830f2098
	if (cr6.eq) goto loc_830F2098;
	// addi r5,r31,272
	ctx.r5.s64 = r31.s64 + 272;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r4,r31,268
	ctx.r4.s64 = r31.s64 + 268;
	// bl 0x830e9648
	sub_830E9648(ctx, base);
loc_830F2098:
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 48);
	f0.f64 = double(temp.f32);
	// stfs f0,248(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 248, temp.u32);
	// lfs f0,52(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 52);
	f0.f64 = double(temp.f32);
	// stfs f0,252(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 252, temp.u32);
	// lfs f0,56(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 56);
	f0.f64 = double(temp.f32);
	// stfs f0,256(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 256, temp.u32);
	// lfs f0,60(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 60);
	f0.f64 = double(temp.f32);
	// lfs f13,64(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,276(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 276, temp.u32);
	// stfs f13,280(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 280, temp.u32);
loc_830F20C0:
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

__attribute__((alias("__imp__sub_830F20D8"))) PPC_WEAK_FUNC(sub_830F20D8);
PPC_FUNC_IMPL(__imp__sub_830F20D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// rlwinm r7,r10,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// addi r10,r8,4
	ctx.r10.s64 = ctx.r8.s64 + 4;
	// subfic r6,r8,-4
	xer.ca = ctx.r8.u32 <= 4294967292;
	ctx.r6.s64 = -4 - ctx.r8.s64;
loc_830F2104:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x830f2120
	if (cr6.gt) goto loc_830F2120;
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lfs f12,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// blt cr6,0x830f2138
	if (cr6.lt) goto loc_830F2138;
loc_830F2120:
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lfs f12,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// bgt cr6,0x830f2174
	if (cr6.gt) goto loc_830F2174;
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x830f2174
	if (!cr6.lt) goto loc_830F2174;
loc_830F2138:
	// lfs f13,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f12
	ctx.f10.f64 = double(float(f0.f64 - ctx.f12.f64));
	// fsubs f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f9,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lfs f9,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fdivs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 / ctx.f12.f64));
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fcmpu cr6,f9,f13
	cr6.compare(ctx.f9.f64, ctx.f13.f64);
	// bge cr6,0x830f2174
	if (!cr6.lt) goto loc_830F2174;
	// cntlzw r9,r3
	ctx.r9.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
loc_830F2174:
	// add r7,r6,r10
	ctx.r7.u64 = ctx.r6.u64 + ctx.r10.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bne 0x830f2104
	if (!cr0.eq) goto loc_830F2104;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F2188"))) PPC_WEAK_FUNC(sub_830F2188);
PPC_FUNC_IMPL(__imp__sub_830F2188) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x830f21f8
	if (!cr6.gt) goto loc_830F21F8;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f10,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lfs f0,-21220(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -21220);
	f0.f64 = double(temp.f32);
loc_830F21AC:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 - f0.f64));
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 - f0.f64));
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + f0.f64));
	// fadds f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 + f0.f64));
	// fcmpu cr6,f10,f9
	cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// blt cr6,0x830f21e8
	if (cr6.lt) goto loc_830F21E8;
	// fcmpu cr6,f10,f13
	cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// bgt cr6,0x830f21e8
	if (cr6.gt) goto loc_830F21E8;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x830f21e8
	if (cr6.lt) goto loc_830F21E8;
	// fcmpu cr6,f13,f11
	cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// blelr cr6
	if (!cr6.gt) return;
loc_830F21E8:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,28
	r11.s64 = r11.s64 + 28;
	// cmpw cr6,r3,r10
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, xer);
	// blt cr6,0x830f21ac
	if (cr6.lt) goto loc_830F21AC;
loc_830F21F8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F2200"))) PPC_WEAK_FUNC(sub_830F2200);
PPC_FUNC_IMPL(__imp__sub_830F2200) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-24
	r12.s64 = ctx.r1.s64 + -24;
	// bl 0x831b1434
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// fmr f29,f2
	f29.f64 = ctx.f2.f64;
	// fmr f28,f3
	f28.f64 = ctx.f3.f64;
	// fmr f27,f4
	f27.f64 = ctx.f4.f64;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// rlwinm r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x830f233c
	if (!cr6.eq) goto loc_830F233C;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f13,64(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// addi r30,r31,68
	r30.s64 = r31.s64 + 68;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,-9716(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -9716);
	f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x83120f38
	sub_83120F38(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 56);
	f0.f64 = double(temp.f32);
	// lfs f13,52(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fdivs f2,f0,f27
	ctx.f2.f64 = double(float(f0.f64 / f27.f64));
	// fdivs f1,f13,f28
	ctx.f1.f64 = double(float(ctx.f13.f64 / f28.f64));
	// lfs f31,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// bl 0x831208d0
	sub_831208D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x831209d8
	sub_831209D8(ctx, base);
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stfs f30,88(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f29,92(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f29,100(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x83120820
	sub_83120820(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x83120820
	sub_83120820(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x83120820
	sub_83120820(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lfs f12,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,40(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,-22120(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22120);
	f0.f64 = double(temp.f32);
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fnmsubs f12,f12,f0,f0
	ctx.f12.f64 = double(float(-(ctx.f12.f64 * f0.f64 - f0.f64)));
	// lfs f9,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// fnmsubs f0,f11,f0,f0
	f0.f64 = double(float(-(ctx.f11.f64 * f0.f64 - f0.f64)));
	// lfs f8,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f8.f64 = double(temp.f32);
	// fadds f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// lfs f11,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f11,44(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// fmuls f11,f8,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// fadds f13,f9,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f13,116(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 116, temp.u32);
	// fadds f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 + f0.f64));
	// stfs f0,120(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
loc_830F233C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-24
	r12.s64 = ctx.r1.s64 + -24;
	// bl 0x831b1480
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F2360"))) PPC_WEAK_FUNC(sub_830F2360);
PPC_FUNC_IMPL(__imp__sub_830F2360) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f29{};
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
	// stfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f29.u64);
	// stfd f30,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// fmr f29,f2
	f29.f64 = ctx.f2.f64;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// rlwinm r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x830f2448
	if (!cr6.eq) goto loc_830F2448;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f13,64(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lfs f0,-9716(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -9716);
	f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x83120f38
	sub_83120F38(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f3,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 60);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,56(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 56);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,52(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x831208d0
	sub_831208D0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f31,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
	// lfs f0,-24784(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24784);
	f0.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmuls f2,f29,f0
	ctx.f2.f64 = double(float(f29.f64 * f0.f64));
	// fmuls f1,f30,f0
	ctx.f1.f64 = double(float(f30.f64 * f0.f64));
	// bl 0x83120948
	sub_83120948(ctx, base);
	// addi r30,r31,68
	r30.s64 = r31.s64 + 68;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831209d8
	sub_831209D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// bl 0x831209d8
	sub_831209D8(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f31.f64;
	// lfs f0,-22120(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22120);
	f0.f64 = double(temp.f32);
	// fmuls f2,f29,f0
	ctx.f2.f64 = double(float(f29.f64 * f0.f64));
	// fmuls f1,f30,f0
	ctx.f1.f64 = double(float(f30.f64 * f0.f64));
	// bl 0x83120948
	sub_83120948(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831209d8
	sub_831209D8(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
loc_830F2448:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f30,-40(r1)
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

__attribute__((alias("__imp__sub_830F2470"))) PPC_WEAK_FUNC(sub_830F2470);
PPC_FUNC_IMPL(__imp__sub_830F2470) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// rlwinm r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x830f2574
	if (!cr6.eq) goto loc_830F2574;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f13,64(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lfs f0,-9716(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -9716);
	f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x83120f38
	sub_83120F38(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f3,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	ctx.f3.f64 = double(temp.f32);
	// fdivs f2,f3,f30
	ctx.f2.f64 = double(float(ctx.f3.f64 / f30.f64));
	// fdivs f1,f3,f31
	ctx.f1.f64 = double(float(ctx.f3.f64 / f31.f64));
	// bl 0x831208d0
	sub_831208D0(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lfs f3,60(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 60);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,56(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 56);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,52(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x831208d0
	sub_831208D0(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f2,-24784(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24784);
	ctx.f2.f64 = double(temp.f32);
	// lfs f31,2240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f31.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// bl 0x83120948
	sub_83120948(ctx, base);
	// addi r31,r30,68
	r31.s64 = r30.s64 + 68;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x831209d8
	sub_831209D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// bl 0x831209d8
	sub_831209D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// bl 0x831209d8
	sub_831209D8(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f31.f64;
	// lfs f2,-22120(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22120);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x83120948
	sub_83120948(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831209d8
	sub_831209D8(ctx, base);
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r11,132(r30)
	PPC_STORE_U32(r30.u32 + 132, r11.u32);
loc_830F2574:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
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

__attribute__((alias("__imp__sub_830F2598"))) PPC_WEAK_FUNC(sub_830F2598);
PPC_FUNC_IMPL(__imp__sub_830F2598) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x830e8388
	sub_830E8388(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830f25d8
	if (!cr6.eq) goto loc_830F25D8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830f2600
	goto loc_830F2600;
loc_830F25D8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x830ef848
	sub_830EF848(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830dea30
	sub_830DEA30(ctx, base);
loc_830F2600:
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

__attribute__((alias("__imp__sub_830F2618"))) PPC_WEAK_FUNC(sub_830F2618);
PPC_FUNC_IMPL(__imp__sub_830F2618) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x830e8388
	sub_830E8388(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830f2654
	if (!cr6.eq) goto loc_830F2654;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830f2688
	goto loc_830F2688;
loc_830F2654:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// bl 0x830ef9e0
	sub_830EF9E0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830dea30
	sub_830DEA30(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_830F2688:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830F2690"))) PPC_WEAK_FUNC(sub_830F2690);
PPC_FUNC_IMPL(__imp__sub_830F2690) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x830e8388
	sub_830E8388(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830f26d0
	if (!cr6.eq) goto loc_830F26D0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830f26fc
	goto loc_830F26FC;
loc_830F26D0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x830ef9a0
	sub_830EF9A0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x830dea30
	sub_830DEA30(ctx, base);
loc_830F26FC:
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

__attribute__((alias("__imp__sub_830F2718"))) PPC_WEAK_FUNC(sub_830F2718);
PPC_FUNC_IMPL(__imp__sub_830F2718) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// li r29,1
	r29.s64 = 1;
	// lwz r30,16(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r29,8(r27)
	PPC_STORE_U32(r27.u32 + 8, r29.u32);
	// bl 0x830f0830
	sub_830F0830(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x830f2814
	if (cr0.eq) goto loc_830F2814;
	// bl 0x830f08c0
	sub_830F08C0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lbz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x830f2774
	if (cr0.eq) goto loc_830F2774;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x830f2618
	sub_830F2618(ctx, base);
	// b 0x830f28a8
	goto loc_830F28A8;
loc_830F2774:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x830f2618
	sub_830F2618(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x830f28a8
	if (!cr0.eq) goto loc_830F28A8;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x830f27a4
	if (cr6.eq) goto loc_830F27A4;
	// li r4,1
	ctx.r4.s64 = 1;
	// lbz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e7808
	sub_830E7808(ctx, base);
loc_830F27A4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f0908
	sub_830F0908(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f09d8
	sub_830F09D8(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// bl 0x830f0a20
	sub_830F0A20(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ea100
	sub_830EA100(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830f289c
	if (!cr6.eq) goto loc_830F289C;
	// lbz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// bl 0x830f2690
	sub_830F2690(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f0908
	sub_830F0908(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// bl 0x830e7808
	sub_830E7808(ctx, base);
	// b 0x830f28a8
	goto loc_830F28A8;
loc_830F2814:
	// li r11,0
	r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x830ea100
	sub_830EA100(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f28a8
	if (cr6.eq) goto loc_830F28A8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,-24412
	ctx.r4.s64 = r11.s64 + -24412;
	// bl 0x830e8de8
	sub_830E8DE8(ctx, base);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r11,-24444
	ctx.r4.s64 = r11.s64 + -24444;
	// bl 0x830e8de8
	sub_830E8DE8(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x830f28a8
	if (cr6.lt) goto loc_830F28A8;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x830f28a8
	if (cr6.lt) goto loc_830F28A8;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x830f288c
	if (cr6.eq) goto loc_830F288C;
	// li r4,1
	ctx.r4.s64 = 1;
	// lbz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e7808
	sub_830E7808(ctx, base);
loc_830F288C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f0908
	sub_830F0908(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_830F289C:
	// lbz r11,4(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// stb r11,56(r28)
	PPC_STORE_U8(r28.u32 + 56, r11.u8);
	// bl 0x830f0950
	sub_830F0950(ctx, base);
loc_830F28A8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_830F28B0"))) PPC_WEAK_FUNC(sub_830F28B0);
PPC_FUNC_IMPL(__imp__sub_830F28B0) {
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
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x830f08c0
	sub_830F08C0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830f2980
	if (cr0.eq) goto loc_830F2980;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f0908
	sub_830F0908(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r5,56(r30)
	ctx.r5.u64 = PPC_LOAD_U8(r30.u32 + 56);
	// bl 0x830e7808
	sub_830E7808(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f0830
	sub_830F0830(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830f2918
	if (cr0.eq) goto loc_830F2918;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U8(r30.u32 + 56);
	// bl 0x830f2690
	sub_830F2690(ctx, base);
loc_830F2918:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f0950
	sub_830F0950(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ea100
	sub_830EA100(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f2980
	if (cr6.eq) goto loc_830F2980;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x830e8ce0
	sub_830E8CE0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f2980
	if (cr6.eq) goto loc_830F2980;
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r8,r11,1
	ctx.r8.u64 = r11.u64 ^ 1;
	// bl 0x83107c58
	sub_83107C58(ctx, base);
loc_830F2980:
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

__attribute__((alias("__imp__sub_830F2998"))) PPC_WEAK_FUNC(sub_830F2998);
PPC_FUNC_IMPL(__imp__sub_830F2998) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,2002
	cr6.compare<uint32_t>(r11.u32, 2002, xer);
	// bgt cr6,0x830f2e6c
	if (cr6.gt) goto loc_830F2E6C;
	// beq cr6,0x830f2e50
	if (cr6.eq) goto loc_830F2E50;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(r11.u32, 15, xer);
	// bgt cr6,0x830f2b68
	if (cr6.gt) goto loc_830F2B68;
	// beq cr6,0x830f2b58
	if (cr6.eq) goto loc_830F2B58;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// blt cr6,0x830f2b24
	if (cr6.lt) goto loc_830F2B24;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(r11.u32, 9, xer);
	// beq cr6,0x830f2afc
	if (cr6.eq) goto loc_830F2AFC;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// beq cr6,0x830f2af0
	if (cr6.eq) goto loc_830F2AF0;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(r11.u32, 11, xer);
	// beq cr6,0x830f2aa8
	if (cr6.eq) goto loc_830F2AA8;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(r11.u32, 12, xer);
	// beq cr6,0x830f2a40
	if (cr6.eq) goto loc_830F2A40;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(r11.u32, 13, xer);
	// bne cr6,0x830f31fc
	if (!cr6.eq) goto loc_830F31FC;
	// li r11,1
	r11.s64 = 1;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830f0990
	sub_830F0990(ctx, base);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x830ef918
	sub_830EF918(ctx, base);
	// b 0x830f2a84
	goto loc_830F2A84;
loc_830F2A40:
	// li r11,1
	r11.s64 = 1;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x830f0990
	sub_830F0990(ctx, base);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x830ef8d8
	sub_830EF8D8(ctx, base);
loc_830F2A84:
	// li r11,0
	r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e8388
	sub_830E8388(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830dea30
	sub_830DEA30(ctx, base);
	// b 0x830f31fc
	goto loc_830F31FC;
loc_830F2AA8:
	// li r26,1
	r26.s64 = 1;
	// lwz r29,16(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stw r26,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r26.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// bl 0x830f03b0
	sub_830F03B0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830f2ae4
	if (cr0.eq) goto loc_830F2AE4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x830f03f8
	sub_830F03F8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r11,r26
	r11.u64 = r26.u64;
	// beq 0x830f2ae8
	if (cr0.eq) goto loc_830F2AE8;
loc_830F2AE4:
	// li r11,0
	r11.s64 = 0;
loc_830F2AE8:
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x830f31fc
	goto loc_830F31FC;
loc_830F2AF0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ee5c0
	sub_830EE5C0(ctx, base);
	// b 0x830f31fc
	goto loc_830F31FC;
loc_830F2AFC:
	// li r11,1
	r11.s64 = 1;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// bl 0x830e8218
	sub_830E8218(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x830f31fc
	if (!cr0.eq) goto loc_830F31FC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830e7bf8
	sub_830E7BF8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830f3200
	if (cr0.lt) goto loc_830F3200;
	// b 0x830f3064
	goto loc_830F3064;
loc_830F2B24:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// beq cr6,0x830f31fc
	if (cr6.eq) goto loc_830F31FC;
	// li r4,9
	ctx.r4.s64 = 9;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
loc_830F2B40:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r31,r1,160
	r31.s64 = ctx.r1.s64 + 160;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// b 0x830f31fc
	goto loc_830F31FC;
loc_830F2B58:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f28b0
	sub_830F28B0(ctx, base);
	// b 0x830f31fc
	goto loc_830F31FC;
loc_830F2B68:
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(r11.u32, 18, xer);
	// beq cr6,0x830f2de8
	if (cr6.eq) goto loc_830F2DE8;
	// cmplwi cr6,r11,33
	cr6.compare<uint32_t>(r11.u32, 33, xer);
	// beq cr6,0x830f2d8c
	if (cr6.eq) goto loc_830F2D8C;
	// cmplwi cr6,r11,36
	cr6.compare<uint32_t>(r11.u32, 36, xer);
	// beq cr6,0x830f2c10
	if (cr6.eq) goto loc_830F2C10;
	// cmplwi cr6,r11,40
	cr6.compare<uint32_t>(r11.u32, 40, xer);
	// beq cr6,0x830f2bc4
	if (cr6.eq) goto loc_830F2BC4;
	// cmplwi cr6,r11,41
	cr6.compare<uint32_t>(r11.u32, 41, xer);
	// bne cr6,0x830f31fc
	if (!cr6.eq) goto loc_830F31FC;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// beq cr6,0x830f31fc
	if (cr6.eq) goto loc_830F31FC;
	// li r4,9
	ctx.r4.s64 = 9;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r31,r1,160
	r31.s64 = ctx.r1.s64 + 160;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// b 0x830f3200
	goto loc_830F3200;
loc_830F2BC4:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// bne cr6,0x830f31fc
	if (!cr6.eq) goto loc_830F31FC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x830f08c0
	sub_830F08C0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830f2c04
	if (cr0.eq) goto loc_830F2C04;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e78a0
	sub_830E78A0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830f0908
	sub_830F0908(ctx, base);
loc_830F2C04:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830e7bb0
	sub_830E7BB0(ctx, base);
	// b 0x830f31fc
	goto loc_830F31FC;
loc_830F2C10:
	// lwz r27,16(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830e9fb0
	sub_830E9FB0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830f31fc
	if (cr0.eq) goto loc_830F31FC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// li r28,0
	r28.s64 = 0;
	// bl 0x830e7910
	sub_830E7910(ctx, base);
	// li r26,1
	r26.s64 = 1;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x830f2c8c
	if (cr6.eq) goto loc_830F2C8C;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x830f2c84
	if (cr6.eq) goto loc_830F2C84;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x830f2c7c
	if (cr6.eq) goto loc_830F2C7C;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x830f2c74
	if (cr6.eq) goto loc_830F2C74;
	// cmpwi cr6,r3,7
	cr6.compare<int32_t>(ctx.r3.s32, 7, xer);
	// bne cr6,0x830f31fc
	if (!cr6.eq) goto loc_830F31FC;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// mr r28,r26
	r28.u64 = r26.u64;
	// rlwinm r11,r11,31,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	// ori r29,r11,4
	r29.u64 = r11.u64 | 4;
	// b 0x830f2c90
	goto loc_830F2C90;
loc_830F2C74:
	// mr r29,r26
	r29.u64 = r26.u64;
	// b 0x830f2c90
	goto loc_830F2C90;
loc_830F2C7C:
	// mr r29,r28
	r29.u64 = r28.u64;
	// b 0x830f2c90
	goto loc_830F2C90;
loc_830F2C84:
	// li r29,3
	r29.s64 = 3;
	// b 0x830f2c90
	goto loc_830F2C90;
loc_830F2C8C:
	// li r29,2
	r29.s64 = 2;
loc_830F2C90:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x830f0150
	sub_830F0150(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r29,r1,128
	r29.s64 = ctx.r1.s64 + 128;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x830f2d04
	if (cr6.eq) goto loc_830F2D04;
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r26,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r26.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x830f31fc
	if (!cr6.eq) goto loc_830F31FC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830ea058
	sub_830EA058(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830f2cf8
	if (cr0.eq) goto loc_830F2CF8;
	// bl 0x830e7b30
	sub_830E7B30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x830f2cfc
	goto loc_830F2CFC;
loc_830F2CF8:
	// li r4,255
	ctx.r4.s64 = 255;
loc_830F2CFC:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// b 0x830f2d84
	goto loc_830F2D84;
loc_830F2D04:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x830f31fc
	if (cr6.eq) goto loc_830F31FC;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// stw r26,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r26.u32);
	// rlwinm r30,r11,31,31,31
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x830d7fa0
	sub_830D7FA0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r30,r1,160
	r30.s64 = ctx.r1.s64 + 160;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// lwz r11,168(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x830f31fc
	if (cr6.eq) goto loc_830F31FC;
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x830f31fc
	if (!cr6.eq) goto loc_830F31FC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830ea058
	sub_830EA058(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830f2d7c
	if (cr0.eq) goto loc_830F2D7C;
	// bl 0x830e7b30
	sub_830E7B30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x830f2d80
	goto loc_830F2D80;
loc_830F2D7C:
	// li r4,255
	ctx.r4.s64 = 255;
loc_830F2D80:
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
loc_830F2D84:
	// bl 0x830eb7c8
	sub_830EB7C8(ctx, base);
	// b 0x830f31fc
	goto loc_830F31FC;
loc_830F2D8C:
	// li r11,0
	r11.s64 = 0;
	// lwz r29,16(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x830e8388
	sub_830E8388(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(r11.u32, ctx.r3.u32, xer);
	// bne cr6,0x830f31fc
	if (!cr6.eq) goto loc_830F31FC;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r31,-13924(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + -13924);
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830d7698
	sub_830D7698(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830f31fc
	if (cr0.eq) goto loc_830F31FC;
	// li r26,1
	r26.s64 = 1;
	// stw r26,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r26.u32);
	// stw r26,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r26.u32);
	// b 0x830f31fc
	goto loc_830F31FC;
loc_830F2DE8:
	// li r28,0
	r28.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// bl 0x830d7040
	sub_830D7040(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// bl 0x830f03b0
	sub_830F03B0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x830f31fc
	if (!cr0.eq) goto loc_830F31FC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830e7ab8
	sub_830E7AB8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830f31fc
	if (cr0.eq) goto loc_830F31FC;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830e8388
	sub_830E8388(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830e7b30
	sub_830E7B30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x830f2d84
	goto loc_830F2D84;
loc_830F2E50:
	// li r11,1
	r11.s64 = 1;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
loc_830F2E60:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// b 0x830f31fc
	goto loc_830F31FC;
loc_830F2E6C:
	// cmplwi cr6,r11,2018
	cr6.compare<uint32_t>(r11.u32, 2018, xer);
	// bgt cr6,0x830f30b0
	if (cr6.gt) goto loc_830F30B0;
	// beq cr6,0x830f3074
	if (cr6.eq) goto loc_830F3074;
	// cmplwi cr6,r11,2003
	cr6.compare<uint32_t>(r11.u32, 2003, xer);
	// beq cr6,0x830f302c
	if (cr6.eq) goto loc_830F302C;
	// cmplwi cr6,r11,2006
	cr6.compare<uint32_t>(r11.u32, 2006, xer);
	// beq cr6,0x830f3014
	if (cr6.eq) goto loc_830F3014;
	// cmplwi cr6,r11,2009
	cr6.compare<uint32_t>(r11.u32, 2009, xer);
	// beq cr6,0x830f2fb4
	if (cr6.eq) goto loc_830F2FB4;
	// cmplwi cr6,r11,2015
	cr6.compare<uint32_t>(r11.u32, 2015, xer);
	// beq cr6,0x830f2f64
	if (cr6.eq) goto loc_830F2F64;
	// cmplwi cr6,r11,2016
	cr6.compare<uint32_t>(r11.u32, 2016, xer);
	// beq cr6,0x830f2ed8
	if (cr6.eq) goto loc_830F2ED8;
	// cmplwi cr6,r11,2017
	cr6.compare<uint32_t>(r11.u32, 2017, xer);
	// bne cr6,0x830f31fc
	if (!cr6.eq) goto loc_830F31FC;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x830f2f74
	if (!cr6.eq) goto loc_830F2F74;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x830f2f8c
	if (!cr6.eq) goto loc_830F2F8C;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 52);
loc_830F2ED0:
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// b 0x830f31fc
	goto loc_830F31FC;
loc_830F2ED8:
	// lwz r28,16(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x830f2f74
	if (!cr6.eq) goto loc_830F2F74;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x830f2f8c
	if (!cr6.eq) goto loc_830F2F8C;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// addi r29,r31,44
	r29.s64 = r31.s64 + 44;
	// li r26,1
	r26.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830f2f1c
	if (!cr6.eq) goto loc_830F2F1C;
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830f2f5c
	if (cr6.eq) goto loc_830F2F5C;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f2f34
	if (cr6.eq) goto loc_830F2F34;
loc_830F2F1C:
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830f2f34
	if (cr6.eq) goto loc_830F2F34;
	// bl 0x831ba858
	sub_831BA858(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830f2f5c
	if (cr0.eq) goto loc_830F2F5C;
loc_830F2F34:
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// addic. r11,r11,1
	xer.ca = r11.u32 > 4294967294;
	r11.s64 = r11.s64 + 1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// bne 0x830f2f48
	if (!cr0.eq) goto loc_830F2F48;
	// stw r26,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r26.u32);
loc_830F2F48:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// bl 0x830d77b0
	sub_830D77B0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830f3200
	if (cr0.lt) goto loc_830F3200;
loc_830F2F5C:
	// stw r26,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r26.u32);
	// b 0x830f31fc
	goto loc_830F31FC;
loc_830F2F64:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x830f2f80
	if (cr6.eq) goto loc_830F2F80;
loc_830F2F74:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,33
	ctx.r3.u64 = ctx.r3.u64 | 33;
	// b 0x830f3200
	goto loc_830F3200;
loc_830F2F80:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x830f2f98
	if (cr6.eq) goto loc_830F2F98;
loc_830F2F8C:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,34
	ctx.r3.u64 = ctx.r3.u64 | 34;
	// b 0x830f3200
	goto loc_830F3200;
loc_830F2F98:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 48);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// b 0x830f31fc
	goto loc_830F31FC;
loc_830F2FB4:
	// lwz r29,16(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// li r11,1
	r11.s64 = 1;
	// li r28,0
	r28.s64 = 0;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r28.u32);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830e8400
	sub_830E8400(ctx, base);
	// b 0x830f2ff8
	goto loc_830F2FF8;
loc_830F2FDC:
	// bl 0x830e7d10
	sub_830E7D10(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// beq cr6,0x830f3008
	if (cr6.eq) goto loc_830F3008;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830e84f0
	sub_830E84F0(ctx, base);
loc_830F2FF8:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830f2fdc
	if (!cr6.eq) goto loc_830F2FDC;
	// b 0x830f31fc
	goto loc_830F31FC;
loc_830F3008:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// b 0x830f31fc
	goto loc_830F31FC;
loc_830F3014:
	// li r11,1
	r11.s64 = 1;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// bl 0x830ee618
	sub_830EE618(ctx, base);
	// b 0x830f31fc
	goto loc_830F31FC;
loc_830F302C:
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// beq cr6,0x830f3050
	if (cr6.eq) goto loc_830F3050;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// b 0x830f3054
	goto loc_830F3054;
loc_830F3050:
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_830F3054:
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// bl 0x830e8218
	sub_830E8218(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x830f31fc
	if (!cr0.eq) goto loc_830F31FC;
loc_830F3064:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x830efbd0
	sub_830EFBD0(ctx, base);
	// b 0x830f2b40
	goto loc_830F2B40;
loc_830F3074:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x830f2f74
	if (!cr6.eq) goto loc_830F2F74;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x830f2f8c
	if (!cr6.eq) goto loc_830F2F8C;
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x830d77b0
	sub_830D77B0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830f3200
	if (cr0.lt) goto loc_830F3200;
	// li r11,1
	r11.s64 = 1;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// b 0x830f31fc
	goto loc_830F31FC;
loc_830F30B0:
	// cmplwi cr6,r11,2021
	cr6.compare<uint32_t>(r11.u32, 2021, xer);
	// beq cr6,0x830f31f0
	if (cr6.eq) goto loc_830F31F0;
	// cmplwi cr6,r11,2022
	cr6.compare<uint32_t>(r11.u32, 2022, xer);
	// beq cr6,0x830f3150
	if (cr6.eq) goto loc_830F3150;
	// cmplwi cr6,r11,2039
	cr6.compare<uint32_t>(r11.u32, 2039, xer);
	// beq cr6,0x830f313c
	if (cr6.eq) goto loc_830F313C;
	// cmplwi cr6,r11,2040
	cr6.compare<uint32_t>(r11.u32, 2040, xer);
	// beq cr6,0x830f310c
	if (cr6.eq) goto loc_830F310C;
	// cmplwi cr6,r11,2043
	cr6.compare<uint32_t>(r11.u32, 2043, xer);
	// bne cr6,0x830f31fc
	if (!cr6.eq) goto loc_830F31FC;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x830f2f74
	if (!cr6.eq) goto loc_830F2F74;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x830f2f8c
	if (!cr6.eq) goto loc_830F2F8C;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// b 0x830f2ed0
	goto loc_830F2ED0;
loc_830F310C:
	// li r11,1
	r11.s64 = 1;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// beq cr6,0x830f3130
	if (cr6.eq) goto loc_830F3130;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// b 0x830f3134
	goto loc_830F3134;
loc_830F3130:
	// rlwinm r11,r11,0,29,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
loc_830F3134:
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// b 0x830f31fc
	goto loc_830F31FC;
loc_830F313C:
	// li r11,1
	r11.s64 = 1;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r11,r11,29,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1;
	// b 0x830f2e60
	goto loc_830F2E60;
loc_830F3150:
	// lwz r29,16(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,-13928(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13928);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x830d7698
	sub_830D7698(ctx, base);
	// cmplw cr6,r3,r28
	cr6.compare<uint32_t>(ctx.r3.u32, r28.u32, xer);
	// bne cr6,0x830f31fc
	if (!cr6.eq) goto loc_830F31FC;
	// li r11,0
	r11.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830e8388
	sub_830E8388(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f31a0
	if (cr6.eq) goto loc_830F31A0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830f3200
	if (cr0.lt) goto loc_830F3200;
loc_830F31A0:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x830f31fc
	if (!cr6.eq) goto loc_830F31FC;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830ea408
	sub_830EA408(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r3.u32);
	// beq 0x830f31fc
	if (cr0.eq) goto loc_830F31FC;
	// li r26,1
	r26.s64 = 1;
	// stw r26,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r26.u32);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(r11.u32, ctx.r3.u32, xer);
	// bne cr6,0x830f31fc
	if (!cr6.eq) goto loc_830F31FC;
	// stw r26,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r26.u32);
	// b 0x830f31fc
	goto loc_830F31FC;
loc_830F31F0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f2718
	sub_830F2718(ctx, base);
loc_830F31FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830F3200:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831b0b70
	return;
}

