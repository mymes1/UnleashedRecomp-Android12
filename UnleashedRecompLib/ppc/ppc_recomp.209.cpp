#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8301F788"))) PPC_WEAK_FUNC(sub_8301F788);
PPC_FUNC_IMPL(__imp__sub_8301F788) {
	PPC_FUNC_PROLOGUE();
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r6,228(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// bl 0x82fe1350
	sub_82FE1350(ctx, base);
	// lis r11,-32237
	r11.s64 = -2112684032;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// addi r11,r11,31912
	r11.s64 = r11.s64 + 31912;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82fe1758
	sub_82FE1758(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_8301F7F0"))) PPC_WEAK_FUNC(sub_8301F7F0);
PPC_FUNC_IMPL(__imp__sub_8301F7F0) {
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
	// bl 0x82fe1298
	sub_82FE1298(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301F818"))) PPC_WEAK_FUNC(sub_8301F818);
PPC_FUNC_IMPL(__imp__sub_8301F818) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8301f864
	if (cr6.eq) goto loc_8301F864;
	// lhz r11,0(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8301f864
	if (cr0.eq) goto loc_8301F864;
	// addi r11,r28,2
	r11.s64 = r28.s64 + 2;
	// b 0x8301f84c
	goto loc_8301F84C;
loc_8301F848:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
loc_8301F84C:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8301f848
	if (!cr0.eq) goto loc_8301F848;
	// subf r11,r28,r11
	r11.s64 = r11.s64 - r28.s64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// b 0x8301f868
	goto loc_8301F868;
loc_8301F864:
	// li r11,0
	r11.s64 = 0;
loc_8301F868:
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r30,r10,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + r30.u32);
	// lwz r10,52(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x8301f8e4
	if (cr6.gt) goto loc_8301F8E4;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r11,r10,r30
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// lwz r29,48(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stw r9,52(r11)
	PPC_STORE_U32(r11.u32 + 52, ctx.r9.u32);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
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
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// stw r3,48(r11)
	PPC_STORE_U32(r11.u32 + 48, ctx.r3.u32);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8301F8E4:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// bl 0x82fd9eb0
	sub_82FD9EB0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8301F900"))) PPC_WEAK_FUNC(sub_8301F900);
PPC_FUNC_IMPL(__imp__sub_8301F900) {
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
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8301f93c
	if (cr0.eq) goto loc_8301F93C;
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
loc_8301F93C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8301F968"))) PPC_WEAK_FUNC(sub_8301F968);
PPC_FUNC_IMPL(__imp__sub_8301F968) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8305b8b8
	sub_8305B8B8(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r30,40(r31)
	PPC_STORE_U8(r31.u32 + 40, r30.u8);
	// addi r11,r11,20984
	r11.s64 = r11.s64 + 20984;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r10,41(r31)
	PPC_STORE_U8(r31.u32 + 41, ctx.r10.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stb r10,42(r31)
	PPC_STORE_U8(r31.u32 + 42, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_8301F9C8"))) PPC_WEAK_FUNC(sub_8301F9C8);
PPC_FUNC_IMPL(__imp__sub_8301F9C8) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 40);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301F9D0"))) PPC_WEAK_FUNC(sub_8301F9D0);
PPC_FUNC_IMPL(__imp__sub_8301F9D0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,41(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 41);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301F9D8"))) PPC_WEAK_FUNC(sub_8301F9D8);
PPC_FUNC_IMPL(__imp__sub_8301F9D8) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,42(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 42);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301F9E0"))) PPC_WEAK_FUNC(sub_8301F9E0);
PPC_FUNC_IMPL(__imp__sub_8301F9E0) {
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
	// lwz r3,216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 216);
	// lwz r4,196(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 196);
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
	// lwz r4,216(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 216);
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// stw r3,196(r31)
	PPC_STORE_U32(r31.u32 + 196, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8301FA40"))) PPC_WEAK_FUNC(sub_8301FA40);
PPC_FUNC_IMPL(__imp__sub_8301FA40) {
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
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	r11.s64 = 0;
	// stb r11,120(r31)
	PPC_STORE_U8(r31.u32 + 120, r11.u8);
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

__attribute__((alias("__imp__sub_8301FAA0"))) PPC_WEAK_FUNC(sub_8301FAA0);
PPC_FUNC_IMPL(__imp__sub_8301FAA0) {
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8301fad4
	if (cr0.eq) goto loc_8301FAD4;
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
loc_8301FAD4:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8301faf4
	if (cr0.eq) goto loc_8301FAF4;
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
loc_8301FAF4:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8301fb14
	if (cr0.eq) goto loc_8301FB14;
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
loc_8301FB14:
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

__attribute__((alias("__imp__sub_8301FB28"))) PPC_WEAK_FUNC(sub_8301FB28);
PPC_FUNC_IMPL(__imp__sub_8301FB28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,528(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301FB40"))) PPC_WEAK_FUNC(sub_8301FB40);
PPC_FUNC_IMPL(__imp__sub_8301FB40) {
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
	// lwz r3,216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 216);
	// lwz r11,480(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 480);
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 480);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x8301fba8
	if (!cr6.gt) goto loc_8301FBA8;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8301FB88:
	// lwz r9,484(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 484);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stwx r9,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + r29.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,480(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 480);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8301fb88
	if (cr6.lt) goto loc_8301FB88;
loc_8301FBA8:
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bge cr6,0x8301fbd4
	if (!cr6.lt) goto loc_8301FBD4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x8301fbd4
	if (cr0.eq) goto loc_8301FBD4;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8301FBC8:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8301fbc8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8301FBC8;
loc_8301FBD4:
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
	// stw r29,484(r31)
	PPC_STORE_U32(r31.u32 + 484, r29.u32);
	// stw r30,480(r31)
	PPC_STORE_U32(r31.u32 + 480, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8301FC00"))) PPC_WEAK_FUNC(sub_8301FC00);
PPC_FUNC_IMPL(__imp__sub_8301FC00) {
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
	// lwz r11,584(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 584);
	// lwz r10,588(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 588);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x8301fc34
	if (!cr6.gt) goto loc_8301FC34;
	// li r25,2
	r25.s64 = 2;
	// b 0x8301fc58
	goto loc_8301FC58;
loc_8301FC34:
	// lwz r10,592(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 592);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x8301fc48
	if (!cr6.gt) goto loc_8301FC48;
	// li r25,0
	r25.s64 = 0;
	// b 0x8301fc58
	goto loc_8301FC58;
loc_8301FC48:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// li r25,1
	r25.s64 = 1;
	// stw r11,592(r31)
	PPC_STORE_U32(r31.u32 + 592, r11.u32);
	// stw r11,588(r31)
	PPC_STORE_U32(r31.u32 + 588, r11.u32);
loc_8301FC58:
	// lbz r11,16(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8301fc88
	if (cr0.eq) goto loc_8301FC88;
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8301fc88
	if (cr0.eq) goto loc_8301FC88;
	// lbz r11,581(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 581);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r24,r11,1
	r24.s64 = r11.s64 + 1;
loc_8301FC88:
	// lwz r4,600(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 600);
	// li r28,0
	r28.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8301fcd0
	if (cr0.eq) goto loc_8301FCD0;
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 568);
	// bl 0x83015c80
	sub_83015C80(ctx, base);
	// lwz r11,600(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 600);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x8301fcc4
	if (cr6.eq) goto loc_8301FCC4;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x8301fcc8
	if (!cr6.eq) goto loc_8301FCC8;
loc_8301FCC4:
	// li r11,1
	r11.s64 = 1;
loc_8301FCC8:
	// clrlwi r30,r11,24
	r30.u64 = r11.u32 & 0xFF;
	// b 0x8301fce8
	goto loc_8301FCE8;
loc_8301FCD0:
	// lwz r4,596(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 596);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8301fce8
	if (cr0.eq) goto loc_8301FCE8;
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 568);
	// bl 0x83015c80
	sub_83015C80(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_8301FCE8:
	// lwz r4,604(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 604);
	// li r29,0
	r29.s64 = 0;
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8301fd44
	if (cr0.eq) goto loc_8301FD44;
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8301fd44
	if (!cr0.eq) goto loc_8301FD44;
	// cmpwi cr6,r24,2
	cr6.compare<int32_t>(r24.s32, 2, xer);
	// bne cr6,0x8301fd44
	if (!cr6.eq) goto loc_8301FD44;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8301fd1c
	if (cr6.eq) goto loc_8301FD1C;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// b 0x8301fd2c
	goto loc_8301FD2C;
loc_8301FD1C:
	// lwz r3,596(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 596);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8301fd60
	if (cr0.eq) goto loc_8301FD60;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8301FD2C:
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
loc_8301FD44:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8301fd60
	if (cr6.eq) goto loc_8301FD60;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 568);
	// bl 0x83015c80
	sub_83015C80(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8301fd64
	goto loc_8301FD64;
loc_8301FD60:
	// li r30,0
	r30.s64 = 0;
loc_8301FD64:
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8301fd8c
	if (cr0.eq) goto loc_8301FD8C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 568);
	// bl 0x83015c80
	sub_83015C80(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// b 0x8301fd90
	goto loc_8301FD90;
loc_8301FD8C:
	// li r8,0
	ctx.r8.s64 = 0;
loc_8301FD90:
	// lwz r3,52(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 52);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// lwz r11,604(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 604);
	// li r30,0
	r30.s64 = 0;
	// lwz r26,568(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 568);
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lbz r7,580(r31)
	ctx.r7.u64 = PPC_LOAD_U8(r31.u32 + 580);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r6,196(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lwz r3,572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 572);
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
	// lwz r28,572(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 572);
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
	// lwz r11,584(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 584);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,584(r31)
	PPC_STORE_U32(r31.u32 + 584, r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_8301FE30"))) PPC_WEAK_FUNC(sub_8301FE30);
PPC_FUNC_IMPL(__imp__sub_8301FE30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r11,580(r3)
	PPC_STORE_U8(ctx.r3.u32 + 580, r11.u8);
	// stb r11,581(r3)
	PPC_STORE_U8(ctx.r3.u32 + 581, r11.u8);
	// stw r10,584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 584, ctx.r10.u32);
	// stw r10,588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 588, ctx.r10.u32);
	// stw r10,592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 592, ctx.r10.u32);
	// stw r11,596(r3)
	PPC_STORE_U32(ctx.r3.u32 + 596, r11.u32);
	// stw r11,600(r3)
	PPC_STORE_U32(ctx.r3.u32 + 600, r11.u32);
	// stw r11,604(r3)
	PPC_STORE_U32(ctx.r3.u32 + 604, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301FE60"))) PPC_WEAK_FUNC(sub_8301FE60);
PPC_FUNC_IMPL(__imp__sub_8301FE60) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r5,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r5.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r4,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r4.u32);
	// bne cr6,0x8301fec8
	if (!cr6.eq) goto loc_8301FEC8;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,68
	ctx.r6.s64 = 68;
	// addi r4,r11,13768
	ctx.r4.s64 = r11.s64 + 13768;
	// li r5,108
	ctx.r5.s64 = 108;
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
loc_8301FEC8:
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x8301ff14
	if (!cr6.gt) goto loc_8301FF14;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_8301FEF8:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r30.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8301fef8
	if (cr6.lt) goto loc_8301FEF8;
loc_8301FF14:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8301ff28
	if (!cr6.eq) goto loc_8301FF28;
	// li r11,256
	r11.s64 = 256;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_8301FF28:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
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
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
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

__attribute__((alias("__imp__sub_8301FF70"))) PPC_WEAK_FUNC(sub_8301FF70);
PPC_FUNC_IMPL(__imp__sub_8301FF70) {
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
	// ble cr6,0x8301fff0
	if (!cr6.gt) goto loc_8301FFF0;
	// mr r29,r26
	r29.u64 = r26.u64;
loc_8301FF98:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwzx r30,r11,r29
	r30.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x8301ffd4
	if (cr0.eq) goto loc_8301FFD4;
loc_8301FFA8:
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// lwz r28,4(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8301ffc0
	if (cr0.eq) goto loc_8301FFC0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_8301FFC0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// mr r30,r28
	r30.u64 = r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x8301ffa8
	if (!cr6.eq) goto loc_8301FFA8;
loc_8301FFD4:
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
	// blt cr6,0x8301ff98
	if (cr6.lt) goto loc_8301FF98;
loc_8301FFF0:
	// stw r26,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83020000"))) PPC_WEAK_FUNC(sub_83020000);
PPC_FUNC_IMPL(__imp__sub_83020000) {
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
	// blt cr6,0x83020044
	if (cr6.lt) goto loc_83020044;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r6,116
	ctx.r6.s64 = 116;
	// addi r4,r11,32144
	ctx.r4.s64 = r11.s64 + 32144;
	// li r5,249
	ctx.r5.s64 = 249;
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
loc_83020044:
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

__attribute__((alias("__imp__sub_83020060"))) PPC_WEAK_FUNC(sub_83020060);
PPC_FUNC_IMPL(__imp__sub_83020060) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x82fd9f48
	sub_82FD9F48(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x830200c4
	if (!cr6.gt) goto loc_830200C4;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,66
	ctx.r6.s64 = 66;
	// addi r4,r11,13768
	ctx.r4.s64 = r11.s64 + 13768;
	// li r5,304
	ctx.r5.s64 = 304;
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
loc_830200C4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// b 0x830200f8
	goto loc_830200F8;
loc_830200D4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8302010c
	if (!cr0.eq) goto loc_8302010C;
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_830200F8:
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// bne 0x830200d4
	if (!cr0.eq) goto loc_830200D4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_83020104:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
loc_8302010C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x83020104
	goto loc_83020104;
}

__attribute__((alias("__imp__sub_83020118"))) PPC_WEAK_FUNC(sub_83020118);
PPC_FUNC_IMPL(__imp__sub_83020118) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
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
	// ble cr6,0x83020190
	if (!cr6.gt) goto loc_83020190;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,49
	ctx.r6.s64 = 49;
	// addi r4,r11,13712
	ctx.r4.s64 = r11.s64 + 13712;
	// li r5,394
	ctx.r5.s64 = 394;
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
loc_83020190:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r11
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// b 0x830201e0
	goto loc_830201E0;
loc_830201A0:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// bne cr6,0x830201dc
	if (!cr6.eq) goto loc_830201DC;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// bne cr6,0x830201dc
	if (!cr6.eq) goto loc_830201DC;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
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
	// bne 0x830201f4
	if (!cr0.eq) goto loc_830201F4;
loc_830201DC:
	// lwz r30,4(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 4);
loc_830201E0:
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// bne 0x830201a0
	if (!cr0.eq) goto loc_830201A0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830201EC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b74
	return;
loc_830201F4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x830201ec
	goto loc_830201EC;
}

__attribute__((alias("__imp__sub_83020200"))) PPC_WEAK_FUNC(sub_83020200);
PPC_FUNC_IMPL(__imp__sub_83020200) {
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
	// bne cr6,0x83020248
	if (!cr6.eq) goto loc_83020248;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,48
	ctx.r6.s64 = 48;
	// addi r4,r11,13712
	ctx.r4.s64 = r11.s64 + 13712;
	// li r5,185
	ctx.r5.s64 = 185;
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
loc_83020248:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
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
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r11,0
	r11.s64 = 0;
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x8302029c
	if (!cr6.gt) goto loc_8302029C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8302027C:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwx r8,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8302027c
	if (cr6.lt) goto loc_8302027C;
loc_8302029C:
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

__attribute__((alias("__imp__sub_830202B0"))) PPC_WEAK_FUNC(sub_830202B0);
PPC_FUNC_IMPL(__imp__sub_830202B0) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// blt cr6,0x830202f4
	if (cr6.lt) goto loc_830202F4;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r6,116
	ctx.r6.s64 = 116;
	// addi r4,r11,-31376
	ctx.r4.s64 = r11.s64 + -31376;
	// li r5,248
	ctx.r5.s64 = 248;
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
loc_830202F4:
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r11,r4,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83020310"))) PPC_WEAK_FUNC(sub_83020310);
PPC_FUNC_IMPL(__imp__sub_83020310) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83020358
	if (cr6.lt) goto loc_83020358;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r6,116
	ctx.r6.s64 = 116;
	// addi r4,r11,-31376
	ctx.r4.s64 = r11.s64 + -31376;
	// li r5,206
	ctx.r5.s64 = 206;
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
loc_83020358:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8302036c
	if (!cr6.eq) goto loc_8302036C;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// b 0x830203a0
	goto loc_830203A0;
loc_8302036C:
	// bge cr6,0x83020394
	if (!cr6.lt) goto loc_83020394;
loc_83020370:
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83020370
	if (cr6.lt) goto loc_83020370;
loc_83020394:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
loc_830203A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830203B0"))) PPC_WEAK_FUNC(sub_830203B0);
PPC_FUNC_IMPL(__imp__sub_830203B0) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// blt cr6,0x830203f4
	if (cr6.lt) goto loc_830203F4;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r6,116
	ctx.r6.s64 = 116;
	// addi r4,r11,-31376
	ctx.r4.s64 = r11.s64 + -31376;
	// li r5,256
	ctx.r5.s64 = 256;
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
loc_830203F4:
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r3,r11,r4
	ctx.r3.u64 = r11.u64 + ctx.r4.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83020410"))) PPC_WEAK_FUNC(sub_83020410);
PPC_FUNC_IMPL(__imp__sub_83020410) {
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
	// blt cr6,0x830204d4
	if (cr6.lt) goto loc_830204D4;
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
	// bge cr6,0x8302046c
	if (!cr6.lt) goto loc_8302046C;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_8302046C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
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
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x830204b4
	if (!cr6.gt) goto loc_830204B4;
loc_83020498:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// stbx r10,r11,r29
	PPC_STORE_U8(r11.u32 + r29.u32, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83020498
	if (cr6.lt) goto loc_83020498;
loc_830204B4:
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
loc_830204D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830204E0"))) PPC_WEAK_FUNC(sub_830204E0);
PPC_FUNC_IMPL(__imp__sub_830204E0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,20984
	r11.s64 = r11.s64 + 20984;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x8305bd50
	sub_8305BD50(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8302051c
	if (cr0.eq) goto loc_8302051C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_8302051C:
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

__attribute__((alias("__imp__sub_83020538"))) PPC_WEAK_FUNC(sub_83020538);
PPC_FUNC_IMPL(__imp__sub_83020538) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83020060
	sub_83020060(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830205b4
	if (cr0.eq) goto loc_830205B4;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,13768
	ctx.r4.s64 = r11.s64 + 13768;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,65
	ctx.r6.s64 = 65;
	// li r5,250
	ctx.r5.s64 = 250;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8301f6f0
	sub_8301F6F0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-8844
	ctx.r4.s64 = r11.s64 + -8844;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830205B4:
	// li r3,8
	ctx.r3.s64 = 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830205e8
	if (cr0.eq) goto loc_830205E8;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// b 0x830205ec
	goto loc_830205EC;
loc_830205E8:
	// li r11,0
	r11.s64 = 0;
loc_830205EC:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x83020684
	if (!cr6.eq) goto loc_83020684;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lfd f0,-18048(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -18048);
	// fmul f0,f13,f0
	f0.f64 = ctx.f13.f64 * f0.f64;
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
	// lwz r29,96(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r4,r29,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
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
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r29.u32);
loc_83020684:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// stwx r28,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r28.u32);
	// stw r3,16(r28)
	PPC_STORE_U32(r28.u32 + 16, ctx.r3.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830206B0"))) PPC_WEAK_FUNC(sub_830206B0);
PPC_FUNC_IMPL(__imp__sub_830206B0) {
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
	// li r29,0
	r29.s64 = 0;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r7,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r7.u32);
	// stb r5,4(r30)
	PPC_STORE_U8(r30.u32 + 4, ctx.r5.u8);
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// stw r4,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r4.u32);
	// stw r29,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r29.u32);
	// stw r29,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r29.u32);
	// stw r29,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r29.u32);
	// stw r6,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r6.u32);
	// bl 0x83020200
	sub_83020200(ctx, base);
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
	// beq 0x83020710
	if (cr0.eq) goto loc_83020710;
	// bl 0x83017920
	sub_83017920(ctx, base);
	// b 0x83020714
	goto loc_83020714;
loc_83020710:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_83020714:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// stw r3,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8302072c
	if (!cr6.eq) goto loc_8302072C;
	// li r11,256
	r11.s64 = 256;
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
loc_8302072C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
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
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83020760"))) PPC_WEAK_FUNC(sub_83020760);
PPC_FUNC_IMPL(__imp__sub_83020760) {
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

__attribute__((alias("__imp__sub_83020790"))) PPC_WEAK_FUNC(sub_83020790);
PPC_FUNC_IMPL(__imp__sub_83020790) {
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
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x83020118
	sub_83020118(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x83020800
	if (cr0.eq) goto loc_83020800;
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830207ec
	if (cr0.eq) goto loc_830207EC;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830207ec
	if (cr0.eq) goto loc_830207EC;
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
loc_830207EC:
	// stw r26,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r26.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// stw r28,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r28.u32);
	// stw r27,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r27.u32);
	// b 0x83020850
	goto loc_83020850;
loc_83020800:
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83020840
	if (cr0.eq) goto loc_83020840;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r26.u32);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r29.u32);
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r28.u32);
	// stw r27,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r27.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x83020844
	goto loc_83020844;
loc_83020840:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83020844:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, ctx.r10.u32);
loc_83020850:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x830208dc
	if (!cr6.eq) goto loc_830208DC;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lfd f0,-18048(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -18048);
	// fmul f0,f13,f0
	f0.f64 = ctx.f13.f64 * f0.f64;
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
	// lwz r29,80(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r4,r29,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
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
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r29.u32);
loc_830208DC:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// stwx r26,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r26.u32);
	// stw r3,16(r26)
	PPC_STORE_U32(r26.u32 + 16, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83020900"))) PPC_WEAK_FUNC(sub_83020900);
PPC_FUNC_IMPL(__imp__sub_83020900) {
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
	// bl 0x8301ff70
	sub_8301FF70(ctx, base);
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
	// beq 0x83020950
	if (cr0.eq) goto loc_83020950;
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
loc_83020950:
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

__attribute__((alias("__imp__sub_83020968"))) PPC_WEAK_FUNC(sub_83020968);
PPC_FUNC_IMPL(__imp__sub_83020968) {
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
	// blt cr6,0x8302099c
	if (cr6.lt) goto loc_8302099C;
	// bl 0x83070c40
	sub_83070C40(ctx, base);
loc_8302099C:
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
	// beq 0x830209d4
	if (cr0.eq) goto loc_830209D4;
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830209c8
	if (cr0.eq) goto loc_830209C8;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_830209C8:
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// b 0x83020a28
	goto loc_83020A28;
loc_830209D4:
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
	// beq 0x83020a0c
	if (cr0.eq) goto loc_83020A0C;
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
	// b 0x83020a10
	goto loc_83020A10;
loc_83020A0C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83020A10:
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
loc_83020A28:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83020A30"))) PPC_WEAK_FUNC(sub_83020A30);
PPC_FUNC_IMPL(__imp__sub_83020A30) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// stb r5,4(r31)
	PPC_STORE_U8(r31.u32 + 4, ctx.r5.u8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r4,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r4.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// bl 0x830548b8
	sub_830548B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
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

__attribute__((alias("__imp__sub_83020A88"))) PPC_WEAK_FUNC(sub_83020A88);
PPC_FUNC_IMPL(__imp__sub_83020A88) {
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
	// bne 0x83020ad8
	if (!cr0.eq) goto loc_83020AD8;
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
loc_83020AD8:
	// addi r30,r11,-1
	r30.s64 = r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x830203b0
	sub_830203B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lbz r31,0(r11)
	r31.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// bl 0x83020310
	sub_83020310(ctx, base);
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

__attribute__((alias("__imp__sub_83020B18"))) PPC_WEAK_FUNC(sub_83020B18);
PPC_FUNC_IMPL(__imp__sub_83020B18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83020b5c
	if (!cr0.eq) goto loc_83020B5C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r6,80
	ctx.r6.s64 = 80;
	// addi r4,r11,-31320
	ctx.r4.s64 = r11.s64 + -31320;
	// li r5,93
	ctx.r5.s64 = 93;
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
loc_83020B5C:
	// addi r4,r11,-1
	ctx.r4.s64 = r11.s64 + -1;
	// bl 0x830202b0
	sub_830202B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83020B78"))) PPC_WEAK_FUNC(sub_83020B78);
PPC_FUNC_IMPL(__imp__sub_83020B78) {
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
	// bl 0x83020410
	sub_83020410(ctx, base);
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stbx r11,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, r11.u8);
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

__attribute__((alias("__imp__sub_83020BD8"))) PPC_WEAK_FUNC(sub_83020BD8);
PPC_FUNC_IMPL(__imp__sub_83020BD8) {
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
	// beq 0x83020c54
	if (cr0.eq) goto loc_83020C54;
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
	// b 0x83020c58
	goto loc_83020C58;
loc_83020C54:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83020C58:
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// stw r10,516(r30)
	PPC_STORE_U32(r30.u32 + 516, ctx.r10.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83020c84
	if (cr0.eq) goto loc_83020C84;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83060730
	sub_83060730(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83020c88
	goto loc_83020C88;
loc_83020C84:
	// li r4,0
	ctx.r4.s64 = 0;
loc_83020C88:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r4,520(r30)
	PPC_STORE_U32(r30.u32 + 520, ctx.r4.u32);
	// bl 0x82feffa8
	sub_82FEFFA8(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83020cc0
	if (cr0.eq) goto loc_83020CC0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,216(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x8305d650
	sub_8305D650(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83020cc4
	goto loc_83020CC4;
loc_83020CC0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_83020CC4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r4,524(r30)
	PPC_STORE_U32(r30.u32 + 524, ctx.r4.u32);
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
	// beq 0x83020cfc
	if (cr0.eq) goto loc_83020CFC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,216(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x8305c2f8
	sub_8305C2F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x83020d00
	goto loc_83020D00;
loc_83020CFC:
	// li r11,0
	r11.s64 = 0;
loc_83020D00:
	// li r3,20
	ctx.r3.s64 = 20;
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
	// beq 0x83020d34
	if (cr0.eq) goto loc_83020D34;
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
	// b 0x83020d38
	goto loc_83020D38;
loc_83020D34:
	// li r11,0
	r11.s64 = 0;
loc_83020D38:
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// stw r11,536(r30)
	PPC_STORE_U32(r30.u32 + 536, r11.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83020d6c
	if (cr0.eq) goto loc_83020D6C;
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r6,216(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x8301fe60
	sub_8301FE60(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x83020d70
	goto loc_83020D70;
loc_83020D6C:
	// li r11,0
	r11.s64 = 0;
loc_83020D70:
	// li r3,32
	ctx.r3.s64 = 32;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// stw r11,540(r30)
	PPC_STORE_U32(r30.u32 + 540, r11.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83020da8
	if (cr0.eq) goto loc_83020DA8;
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
	// b 0x83020dac
	goto loc_83020DAC;
loc_83020DA8:
	// li r11,0
	r11.s64 = 0;
loc_83020DAC:
	// li r3,28
	ctx.r3.s64 = 28;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// stw r11,544(r30)
	PPC_STORE_U32(r30.u32 + 544, r11.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq 0x83020e0c
	if (cr0.eq) goto loc_83020E0C;
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
	// beq 0x83020dec
	if (cr0.eq) goto loc_83020DEC;
	// bl 0x83007488
	sub_83007488(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x83020df0
	goto loc_83020DF0;
loc_83020DEC:
	// li r6,0
	ctx.r6.s64 = 0;
loc_83020DF0:
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
	// b 0x83020e10
	goto loc_83020E10;
loc_83020E0C:
	// li r11,0
	r11.s64 = 0;
loc_83020E10:
	// li r3,28
	ctx.r3.s64 = 28;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// stw r11,552(r30)
	PPC_STORE_U32(r30.u32 + 552, r11.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// beq 0x83020e70
	if (cr0.eq) goto loc_83020E70;
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
	// beq 0x83020e50
	if (cr0.eq) goto loc_83020E50;
	// bl 0x83017920
	sub_83017920(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x83020e54
	goto loc_83020E54;
loc_83020E50:
	// li r6,0
	ctx.r6.s64 = 0;
loc_83020E54:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83043618
	sub_83043618(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x83020e74
	goto loc_83020E74;
loc_83020E70:
	// li r11,0
	r11.s64 = 0;
loc_83020E74:
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// stw r11,556(r30)
	PPC_STORE_U32(r30.u32 + 556, r11.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// beq 0x83020ed4
	if (cr0.eq) goto loc_83020ED4;
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
	// beq 0x83020eb4
	if (cr0.eq) goto loc_83020EB4;
	// bl 0x83017920
	sub_83017920(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x83020eb8
	goto loc_83020EB8;
loc_83020EB4:
	// li r6,0
	ctx.r6.s64 = 0;
loc_83020EB8:
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
	// b 0x83020ed8
	goto loc_83020ED8;
loc_83020ED4:
	// li r11,0
	r11.s64 = 0;
loc_83020ED8:
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// stw r11,560(r30)
	PPC_STORE_U32(r30.u32 + 560, r11.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83020f00
	if (cr0.eq) goto loc_83020F00;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82ff4ab0
	sub_82FF4AB0(ctx, base);
	// b 0x83020f04
	goto loc_83020F04;
loc_83020F00:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83020F04:
	// stw r3,564(r30)
	PPC_STORE_U32(r30.u32 + 564, ctx.r3.u32);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83020F10"))) PPC_WEAK_FUNC(sub_83020F10);
PPC_FUNC_IMPL(__imp__sub_83020F10) {
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

__attribute__((alias("__imp__sub_83020F40"))) PPC_WEAK_FUNC(sub_83020F40);
PPC_FUNC_IMPL(__imp__sub_83020F40) {
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

__attribute__((alias("__imp__sub_83020F70"))) PPC_WEAK_FUNC(sub_83020F70);
PPC_FUNC_IMPL(__imp__sub_83020F70) {
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

__attribute__((alias("__imp__sub_83020FA0"))) PPC_WEAK_FUNC(sub_83020FA0);
PPC_FUNC_IMPL(__imp__sub_83020FA0) {
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

__attribute__((alias("__imp__sub_83020FD0"))) PPC_WEAK_FUNC(sub_83020FD0);
PPC_FUNC_IMPL(__imp__sub_83020FD0) {
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

__attribute__((alias("__imp__sub_83021000"))) PPC_WEAK_FUNC(sub_83021000);
PPC_FUNC_IMPL(__imp__sub_83021000) {
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

__attribute__((alias("__imp__sub_83021030"))) PPC_WEAK_FUNC(sub_83021030);
PPC_FUNC_IMPL(__imp__sub_83021030) {
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

__attribute__((alias("__imp__sub_83021060"))) PPC_WEAK_FUNC(sub_83021060);
PPC_FUNC_IMPL(__imp__sub_83021060) {
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

__attribute__((alias("__imp__sub_83021090"))) PPC_WEAK_FUNC(sub_83021090);
PPC_FUNC_IMPL(__imp__sub_83021090) {
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

__attribute__((alias("__imp__sub_830210C0"))) PPC_WEAK_FUNC(sub_830210C0);
PPC_FUNC_IMPL(__imp__sub_830210C0) {
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

__attribute__((alias("__imp__sub_830210F0"))) PPC_WEAK_FUNC(sub_830210F0);
PPC_FUNC_IMPL(__imp__sub_830210F0) {
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

__attribute__((alias("__imp__sub_83021120"))) PPC_WEAK_FUNC(sub_83021120);
PPC_FUNC_IMPL(__imp__sub_83021120) {
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

__attribute__((alias("__imp__sub_83021150"))) PPC_WEAK_FUNC(sub_83021150);
PPC_FUNC_IMPL(__imp__sub_83021150) {
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

__attribute__((alias("__imp__sub_83021180"))) PPC_WEAK_FUNC(sub_83021180);
PPC_FUNC_IMPL(__imp__sub_83021180) {
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

__attribute__((alias("__imp__sub_830211B8"))) PPC_WEAK_FUNC(sub_830211B8);
PPC_FUNC_IMPL(__imp__sub_830211B8) {
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
loc_83021208:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82ff6188
	sub_82FF6188(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x83021274
	if (cr6.eq) goto loc_83021274;
	// clrlwi r11,r30,16
	r11.u64 = r30.u32 & 0xFFFF;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(r11.u32, 47, xer);
	// beq cr6,0x83021274
	if (cr6.eq) goto loc_83021274;
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(r11.u32, 62, xer);
	// beq cr6,0x83021274
	if (cr6.eq) goto loc_83021274;
	// lwz r10,132(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 132);
	// lwzx r10,r10,r24
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r24.u32);
	// lbzx r11,r10,r11
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83021268
	if (cr0.eq) goto loc_83021268;
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
	// b 0x83021274
	goto loc_83021274;
loc_83021268:
	// li r4,207
	ctx.r4.s64 = 207;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_83021274:
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
	// bne 0x830214e4
	if (!cr0.eq) goto loc_830214E4;
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
	// beq 0x83021544
	if (cr0.eq) goto loc_83021544;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ff0278
	sub_82FF0278(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83021318
	if (!cr0.eq) goto loc_83021318;
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
	// beq cr6,0x83021208
	if (cr6.eq) goto loc_83021208;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(r11.u32, 47, xer);
	// beq cr6,0x83021208
	if (cr6.eq) goto loc_83021208;
	// cmplwi cr6,r11,39
	cr6.compare<uint32_t>(r11.u32, 39, xer);
	// beq cr6,0x83021318
	if (cr6.eq) goto loc_83021318;
	// cmplwi cr6,r11,34
	cr6.compare<uint32_t>(r11.u32, 34, xer);
	// beq cr6,0x83021318
	if (cr6.eq) goto loc_83021318;
	// lwz r10,132(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 132);
	// lwzx r10,r10,r24
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r24.u32);
	// lbzx r11,r10,r11
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8302155c
	if (cr0.eq) goto loc_8302155C;
loc_83021318:
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
	// bl 0x83061ca8
	sub_83061CA8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83021384
	if (!cr0.eq) goto loc_83021384;
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
	// beq cr6,0x83021384
	if (cr6.eq) goto loc_83021384;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(r11.u32, 47, xer);
	// beq cr6,0x83021384
	if (cr6.eq) goto loc_83021384;
	// lwz r10,132(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 132);
	// lwzx r10,r10,r24
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r24.u32);
	// lbzx r11,r10,r11
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8302155c
	if (cr0.eq) goto loc_8302155C;
loc_83021384:
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
	// beq cr6,0x8302143c
	if (cr6.eq) goto loc_8302143C;
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
	// beq 0x830213f8
	if (cr0.eq) goto loc_830213F8;
	// lhz r11,0(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830213f8
	if (cr0.eq) goto loc_830213F8;
	// addi r11,r4,2
	r11.s64 = ctx.r4.s64 + 2;
	// b 0x830213e0
	goto loc_830213E0;
loc_830213DC:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
loc_830213E0:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x830213dc
	if (!cr0.eq) goto loc_830213DC;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r5,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r5.s64 = r11.s32 >> 1;
	// b 0x830213fc
	goto loc_830213FC;
loc_830213F8:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
loc_830213FC:
	// li r3,58
	ctx.r3.s64 = 58;
	// bl 0x82fda210
	sub_82FDA210(ctx, base);
	// cmpw cr6,r27,r3
	cr6.compare<int32_t>(r27.s32, ctx.r3.s32, xer);
	// beq cr6,0x83021414
	if (cr6.eq) goto loc_83021414;
	// li r4,288
	ctx.r4.s64 = 288;
	// b 0x83021430
	goto loc_83021430;
loc_83021414:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x8302142c
	if (cr6.eq) goto loc_8302142C;
	// lwz r11,236(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 236);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bne cr6,0x8302143c
	if (!cr6.eq) goto loc_8302143C;
loc_8302142C:
	// li r4,289
	ctx.r4.s64 = 289;
loc_83021430:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// b 0x83021208
	goto loc_83021208;
loc_8302143C:
	// cmplw cr6,r23,r17
	cr6.compare<uint32_t>(r23.u32, r17.u32, xer);
	// blt cr6,0x830214a4
	if (cr6.lt) goto loc_830214A4;
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
	// beq 0x83021494
	if (cr0.eq) goto loc_83021494;
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
	// b 0x83021498
	goto loc_83021498;
loc_83021494:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_83021498:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x83043678
	sub_83043678(ctx, base);
	// b 0x830214dc
	goto loc_830214DC;
loc_830214A4:
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
loc_830214DC:
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// b 0x83021208
	goto loc_83021208;
loc_830214E4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83021590
	if (cr6.eq) goto loc_83021590;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(r11.u32, 47, xer);
	// beq cr6,0x830215bc
	if (cr6.eq) goto loc_830215BC;
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(r11.u32, 62, xer);
	// beq cr6,0x830215e4
	if (cr6.eq) goto loc_830215E4;
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(r11.u32, 60, xer);
	// beq cr6,0x83021568
	if (cr6.eq) goto loc_83021568;
	// cmplwi cr6,r11,39
	cr6.compare<uint32_t>(r11.u32, 39, xer);
	// beq cr6,0x83021514
	if (cr6.eq) goto loc_83021514;
	// cmplwi cr6,r11,34
	cr6.compare<uint32_t>(r11.u32, 34, xer);
	// bne cr6,0x83021208
	if (!cr6.eq) goto loc_83021208;
loc_83021514:
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
	// b 0x83021208
	goto loc_83021208;
loc_83021544:
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
	// b 0x83021584
	goto loc_83021584;
loc_8302155C:
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(r11.u32, 60, xer);
	// bne cr6,0x83021584
	if (!cr6.eq) goto loc_83021584;
loc_83021568:
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
loc_83021584:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r31,256
	ctx.r1.s64 = r31.s64 + 256;
	// b 0x831b0b4c
	return;
loc_83021590:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,216(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 216);
	// li r6,47
	ctx.r6.s64 = 47;
	// addi r4,r11,21464
	ctx.r4.s64 = r11.s64 + 21464;
	// li r5,762
	ctx.r5.s64 = 762;
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
loc_830215BC:
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
	// bne 0x83021584
	if (!cr0.eq) goto loc_83021584;
	// b 0x83021568
	goto loc_83021568;
loc_830215E4:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// b 0x83021584
	goto loc_83021584;
}

__attribute__((alias("__imp__sub_830215F0"))) PPC_WEAK_FUNC(sub_830215F0);
PPC_FUNC_IMPL(__imp__sub_830215F0) {
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

__attribute__((alias("__imp__sub_83021628"))) PPC_WEAK_FUNC(sub_83021628);
PPC_FUNC_IMPL(__imp__sub_83021628) {
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
	// addi r31,r1,-384
	r31.s64 = ctx.r1.s64 + -384;
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r17,r11,-27796
	r17.s64 = r11.s64 + -27796;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// stw r30,404(r31)
	PPC_STORE_U32(r31.u32 + 404, r30.u32);
	// bl 0x83062430
	sub_83062430(ctx, base);
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8302166c
	if (cr0.eq) goto loc_8302166C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8302166C:
	// addi r21,r30,124
	r21.s64 = r30.s64 + 124;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830216a0
	if (!cr0.eq) goto loc_830216A0;
	// li r4,207
	ctx.r4.s64 = 207;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
	// b 0x83021e14
	goto loc_83021E14;
loc_830216A0:
	// addi r19,r30,220
	r19.s64 = r30.s64 + 220;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// stw r19,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r19.u32);
	// stw r20,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r20.u32);
	// li r24,0
	r24.s64 = 0;
	// lwz r11,24(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// stw r24,4(r20)
	PPC_STORE_U32(r20.u32 + 4, r24.u32);
	// sth r24,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r24.u16);
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// bl 0x82ffb090
	sub_82FFB090(ctx, base);
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83021704
	if (cr0.eq) goto loc_83021704;
	// li r4,208
	ctx.r4.s64 = 208;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
	// b 0x83021e08
	goto loc_83021E08;
loc_83021704:
	// lwz r10,24(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// sthx r24,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r24.u16);
	// lwz r4,24(r20)
	ctx.r4.u64 = PPC_LOAD_U32(r20.u32 + 24);
	// bl 0x8301f9e0
	sub_8301F9E0(ctx, base);
	// li r3,48
	ctx.r3.s64 = 48;
	// lwz r4,180(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83021760
	if (cr0.eq) goto loc_83021760;
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r10,24(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r24,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r24.u16);
	// lwz r4,24(r20)
	ctx.r4.u64 = PPC_LOAD_U32(r20.u32 + 24);
	// lwz r7,180(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// lwz r5,40(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// bl 0x8306c8b8
	sub_8306C8B8(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// b 0x83021764
	goto loc_83021764;
loc_83021760:
	// mr r22,r24
	r22.u64 = r24.u64;
loc_83021764:
	// stw r22,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r22.u32);
	// li r11,4
	r11.s64 = 4;
	// li r18,1
	r18.s64 = 1;
	// stw r11,12(r22)
	PPC_STORE_U32(r22.u32 + 12, r11.u32);
	// stb r18,20(r22)
	PPC_STORE_U8(r22.u32 + 20, r18.u8);
	// lbz r11,22(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 22);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830217ac
	if (!cr0.eq) goto loc_830217AC;
	// lwz r3,184(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,184(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// stw r3,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r3.u32);
	// b 0x830217fc
	goto loc_830217FC;
loc_830217AC:
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// addi r5,r31,104
	ctx.r5.s64 = r31.s64 + 104;
	// lwz r10,24(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r24,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r24.u16);
	// lwz r4,24(r20)
	ctx.r4.u64 = PPC_LOAD_U32(r20.u32 + 24);
	// lwz r3,540(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 540);
	// bl 0x83020060
	sub_83020060(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830217ec
	if (cr0.eq) goto loc_830217EC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830217ec
	if (cr0.eq) goto loc_830217EC;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// stw r11,16(r22)
	PPC_STORE_U32(r22.u32 + 16, r11.u32);
	// b 0x83021800
	goto loc_83021800;
loc_830217EC:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r3,540(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 540);
	// bl 0x83020538
	sub_83020538(ctx, base);
	// stw r3,16(r22)
	PPC_STORE_U32(r22.u32 + 16, ctx.r3.u32);
loc_830217FC:
	// stw r24,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r24.u32);
loc_83021800:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83021860
	if (cr0.eq) goto loc_83021860;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83021850
	if (cr0.eq) goto loc_83021850;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83021850:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// b 0x83021e08
	goto loc_83021E08;
loc_83021860:
	// lwz r11,172(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 172);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x8302187c
	if (!cr6.eq) goto loc_8302187C;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8302187c
	if (!cr0.eq) goto loc_8302187C;
	// stb r18,16(r30)
	PPC_STORE_U8(r30.u32 + 16, r18.u8);
loc_8302187C:
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// lwz r6,180(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// lwz r5,96(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// mr r25,r24
	r25.u64 = r24.u64;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// mr r23,r24
	r23.u64 = r24.u64;
	// lwz r4,184(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// mr r27,r24
	r27.u64 = r24.u64;
	// mr r26,r24
	r26.u64 = r24.u64;
	// bl 0x83068bb0
	sub_83068BB0(ctx, base);
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x830666d8
	sub_830666D8(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82ff6188
	sub_82FF6188(ctx, base);
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,91
	cr6.compare<uint32_t>(r11.u32, 91, xer);
	// bne cr6,0x830218d4
	if (!cr6.eq) goto loc_830218D4;
	// mr r25,r18
	r25.u64 = r18.u64;
	// b 0x830219d8
	goto loc_830219D8;
loc_830218D4:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// stb r24,15(r30)
	PPC_STORE_U8(r30.u32 + 15, r24.u8);
	// mr r23,r18
	r23.u64 = r18.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r19,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r19.u32);
	// stw r29,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r29.u32);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r19,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r19.u32);
	// stw r28,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r28.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x83069260
	sub_83069260(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8302195c
	if (!cr0.eq) goto loc_8302195C;
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x8306b450
	sub_8306B450(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// b 0x83021e08
	goto loc_83021E08;
loc_8302195C:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r24,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r24.u16);
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r24,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r24.u16);
	// lwz r3,24(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82ff6188
	sub_82FF6188(ctx, base);
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,91
	cr6.compare<uint32_t>(r11.u32, 91, xer);
	// bne cr6,0x830219c0
	if (!cr6.eq) goto loc_830219C0;
	// mr r25,r18
	r25.u64 = r18.u64;
loc_830219C0:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
loc_830219D8:
	// lwz r11,216(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// stw r27,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r27.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// stw r26,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r26.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83021a1c
	if (cr0.eq) goto loc_83021A1C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83021A1C:
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83021abc
	if (cr0.eq) goto loc_83021ABC;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff3638
	sub_82FF3638(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x8306bf98
	sub_8306BF98(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83021a88
	if (!cr0.eq) goto loc_83021A88;
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x82fdae08
	sub_82FDAE08(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82fdae08
	sub_82FDAE08(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x8306b450
	sub_8306B450(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// b 0x83021e08
	goto loc_83021E08;
loc_83021A88:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82ff5df8
	sub_82FF5DF8(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// ble cr6,0x83021ab0
	if (!cr6.gt) goto loc_83021AB0;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82ff5d48
	sub_82FF5D48(ctx, base);
loc_83021AB0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
loc_83021ABC:
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83021b20
	if (!cr0.eq) goto loc_83021B20;
	// li r4,93
	ctx.r4.s64 = 93;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83021b08
	if (cr0.eq) goto loc_83021B08;
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83021b08
	if (cr0.eq) goto loc_83021B08;
	// li r4,257
	ctx.r4.s64 = 257;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// b 0x83021b20
	goto loc_83021B20;
loc_83021B08:
	// li r4,212
	ctx.r4.s64 = 212;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
loc_83021B20:
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83021ddc
	if (cr0.eq) goto loc_83021DDC;
	// lbz r11,22(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 22);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83021bf8
	if (cr0.eq) goto loc_83021BF8;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
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
	// lwz r3,176(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// bl 0x82feeed8
	sub_82FEEED8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x83021bec
	if (cr0.eq) goto loc_83021BEC;
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
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83021bec
	if (!cr0.eq) goto loc_83021BEC;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r29,528(r30)
	PPC_STORE_U32(r30.u32 + 528, r29.u32);
	// stw r29,184(r30)
	PPC_STORE_U32(r30.u32 + 184, r29.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x82fdae08
	sub_82FDAE08(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82fdae08
	sub_82FDAE08(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x8306b450
	sub_8306B450(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// b 0x83021e08
	goto loc_83021E08;
loc_83021BEC:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
loc_83021BF8:
	// lbz r11,23(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 23);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83021c10
	if (!cr0.eq) goto loc_83021C10;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83021ddc
	if (cr0.eq) goto loc_83021DDC;
loc_83021C10:
	// lbz r11,9(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 9);
	// addi r10,r31,100
	ctx.r10.s64 = r31.s64 + 100;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, r11.u8);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82ff69d8
	sub_82FF69D8(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// stw r3,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// bne 0x83021c9c
	if (!cr0.eq) goto loc_83021C9C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,216(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r4,r11,21464
	ctx.r4.s64 = r11.s64 + 21464;
	// li r6,45
	ctx.r6.s64 = 45;
	// li r5,1478
	ctx.r5.s64 = 1478;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
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
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// addi r4,r11,-8860
	ctx.r4.s64 = r11.s64 + -8860;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_83021C9C:
	// lbz r11,21(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 21);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83021d3c
	if (cr0.eq) goto loc_83021D3C;
	// lwz r10,176(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r29,4(r10)
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r28,0(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,176(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
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
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,176(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// bl 0x82fef1e8
	sub_82FEF1E8(ctx, base);
	// lwz r3,184(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,184(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// lwz r3,176(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// bl 0x82fef120
	sub_82FEF120(ctx, base);
loc_83021D3C:
	// li r11,68
	r11.s64 = 68;
	// lwz r4,180(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// li r10,84
	ctx.r10.s64 = 84;
	// sth r24,142(r31)
	PPC_STORE_U16(r31.u32 + 142, r24.u16);
	// li r3,44
	ctx.r3.s64 = 44;
	// sth r11,136(r31)
	PPC_STORE_U16(r31.u32 + 136, r11.u16);
	// sth r10,138(r31)
	PPC_STORE_U16(r31.u32 + 138, ctx.r10.u16);
	// sth r11,140(r31)
	PPC_STORE_U16(r31.u32 + 140, r11.u16);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83021d84
	if (cr0.eq) goto loc_83021D84;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,180(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// addi r4,r31,136
	ctx.r4.s64 = r31.s64 + 136;
	// bl 0x8301f968
	sub_8301F968(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x83021d88
	goto loc_83021D88;
loc_83021D84:
	// mr r30,r24
	r30.u64 = r24.u64;
loc_83021D88:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8301f900
	sub_8301F900(ctx, base);
	// stw r30,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r30.u32);
	// lis r11,2
	r11.s64 = 131072;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// ori r11,r11,32841
	r11.u64 = r11.u64 | 32841;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// stbx r18,r26,r11
	PPC_STORE_U8(r26.u32 + r11.u32, r18.u8);
	// bl 0x82ff65e8
	sub_82FF65E8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x8306b508
	sub_8306B508(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
loc_83021DDC:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x82fdae08
	sub_82FDAE08(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82fdae08
	sub_82FDAE08(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x8306b450
	sub_8306B450(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
loc_83021E08:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
loc_83021E14:
	// addi r1,r31,384
	ctx.r1.s64 = r31.s64 + 384;
	// b 0x831b0b4c
	return;
}

__attribute__((alias("__imp__sub_83021E1C"))) PPC_WEAK_FUNC(sub_83021E1C);
PPC_FUNC_IMPL(__imp__sub_83021E1C) {
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

__attribute__((alias("__imp__sub_83021E44"))) PPC_WEAK_FUNC(sub_83021E44);
PPC_FUNC_IMPL(__imp__sub_83021E44) {
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

__attribute__((alias("__imp__sub_83021E74"))) PPC_WEAK_FUNC(sub_83021E74);
PPC_FUNC_IMPL(__imp__sub_83021E74) {
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

__attribute__((alias("__imp__sub_83021E9C"))) PPC_WEAK_FUNC(sub_83021E9C);
PPC_FUNC_IMPL(__imp__sub_83021E9C) {
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
	// bl 0x8306b450
	sub_8306B450(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83021EC4"))) PPC_WEAK_FUNC(sub_83021EC4);
PPC_FUNC_IMPL(__imp__sub_83021EC4) {
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
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
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

__attribute__((alias("__imp__sub_83021EEC"))) PPC_WEAK_FUNC(sub_83021EEC);
PPC_FUNC_IMPL(__imp__sub_83021EEC) {
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
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
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

__attribute__((alias("__imp__sub_83021F14"))) PPC_WEAK_FUNC(sub_83021F14);
PPC_FUNC_IMPL(__imp__sub_83021F14) {
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

__attribute__((alias("__imp__sub_83021F3C"))) PPC_WEAK_FUNC(sub_83021F3C);
PPC_FUNC_IMPL(__imp__sub_83021F3C) {
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
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
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

__attribute__((alias("__imp__sub_83021F64"))) PPC_WEAK_FUNC(sub_83021F64);
PPC_FUNC_IMPL(__imp__sub_83021F64) {
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

__attribute__((alias("__imp__sub_83021F8C"))) PPC_WEAK_FUNC(sub_83021F8C);
PPC_FUNC_IMPL(__imp__sub_83021F8C) {
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

__attribute__((alias("__imp__sub_83021FB4"))) PPC_WEAK_FUNC(sub_83021FB4);
PPC_FUNC_IMPL(__imp__sub_83021FB4) {
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
	// lwz r4,180(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 180);
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

__attribute__((alias("__imp__sub_83021FE4"))) PPC_WEAK_FUNC(sub_83021FE4);
PPC_FUNC_IMPL(__imp__sub_83021FE4) {
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
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
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

__attribute__((alias("__imp__sub_83022018"))) PPC_WEAK_FUNC(sub_83022018);
PPC_FUNC_IMPL(__imp__sub_83022018) {
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
	// stw r4,316(r31)
	PPC_STORE_U32(r31.u32 + 316, ctx.r4.u32);
	// li r15,1
	r15.s64 = 1;
	// addi r28,r30,316
	r28.s64 = r30.s64 + 316;
	// li r22,0
	r22.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,308(r31)
	PPC_STORE_U32(r31.u32 + 308, r30.u32);
	// stb r15,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, r15.u8);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,24(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// stw r22,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r22.u32);
	// sth r22,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r22.u16);
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// bl 0x82ffb090
	sub_82FFB090(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83022088
	if (!cr0.eq) goto loc_83022088;
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
loc_83022080:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83022bcc
	goto loc_83022BCC;
loc_83022088:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r27,r22
	r27.u64 = r22.u64;
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// li r7,-1
	ctx.r7.s64 = -1;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stb r22,96(r31)
	PPC_STORE_U8(r31.u32 + 96, r22.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// sthx r22,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r22.u16);
	// lwz r3,184(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// lwz r29,24(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r23,r3
	r23.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r23.s32, 0, xer);
	// bne 0x83022144
	if (!cr0.eq) goto loc_83022144;
	// addi r5,r31,100
	ctx.r5.s64 = r31.s64 + 100;
	// lwz r3,540(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 540);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83020060
	sub_83020060(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830220f4
	if (cr0.eq) goto loc_830220F4;
	// lwz r23,0(r3)
	r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r23,0
	cr0.compare<uint32_t>(r23.u32, 0, xer);
	// bne 0x83022144
	if (!cr0.eq) goto loc_83022144;
loc_830220F4:
	// li r3,48
	ctx.r3.s64 = 48;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// mr r27,r15
	r27.u64 = r15.u64;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8302212c
	if (cr0.eq) goto loc_8302212C;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,40(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// bl 0x8306c8b8
	sub_8306C8B8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x83022130
	goto loc_83022130;
loc_8302212C:
	// mr r29,r22
	r29.u64 = r22.u64;
loc_83022130:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,540(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 540);
	// mr r23,r29
	r23.u64 = r29.u64;
	// bl 0x83020538
	sub_83020538(ctx, base);
	// stw r3,16(r29)
	PPC_STORE_U32(r29.u32 + 16, ctx.r3.u32);
loc_83022144:
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// beq 0x83022164
	if (cr0.eq) goto loc_83022164;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830221a4
	if (cr0.eq) goto loc_830221A4;
	// li r11,5
	r11.s64 = 5;
	// stw r11,12(r23)
	PPC_STORE_U32(r23.u32 + 12, r11.u32);
	// b 0x83022180
	goto loc_83022180;
loc_83022164:
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830221a4
	if (cr0.eq) goto loc_830221A4;
	// lwz r11,12(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830221a4
	if (!cr0.eq) goto loc_830221A4;
loc_83022180:
	// lwz r3,8(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 8);
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
loc_830221A4:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// lwz r9,440(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 440);
	// addi r14,r30,400
	r14.s64 = r30.s64 + 400;
	// ori r10,r10,32808
	ctx.r10.u64 = ctx.r10.u64 | 32808;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// clrlwi r29,r11,24
	r29.u64 = r11.u32 & 0xFF;
	// stb r29,97(r31)
	PPC_STORE_U8(r31.u32 + 97, r29.u8);
	// bl 0x8301ec78
	sub_8301EC78(ctx, base);
	// lwz r10,40(r14)
	ctx.r10.u64 = PPC_LOAD_U32(r14.u32 + 40);
	// lwz r9,32(r14)
	ctx.r9.u64 = PPC_LOAD_U32(r14.u32 + 32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,-4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// stb r11,32(r10)
	PPC_STORE_U8(ctx.r10.u32 + 32, r11.u8);
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83022218
	if (cr0.eq) goto loc_83022218;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83022218:
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83022274
	if (cr0.eq) goto loc_83022274;
	// lwz r11,184(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// lbz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,188(r30)
	PPC_STORE_U32(r30.u32 + 188, r11.u32);
	// beq 0x83022284
	if (cr0.eq) goto loc_83022284;
	// lwz r11,196(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83022284
	if (cr6.eq) goto loc_83022284;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r22,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r22.u16);
	// lwz r3,24(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lwz r4,196(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83022284
	if (!cr0.eq) goto loc_83022284;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// bl 0x8301f3f0
	sub_8301F3F0(ctx, base);
	// b 0x83022284
	goto loc_83022284;
loc_83022274:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,8(r23)
	ctx.r4.u64 = PPC_LOAD_U32(r23.u32 + 8);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x8301e438
	sub_8301E438(ctx, base);
loc_83022284:
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r24,r30,124
	r24.s64 = r30.s64 + 124;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
	// lwz r11,548(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 548);
	// lwz r10,84(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// mr r17,r22
	r17.u64 = r22.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r16,8(r10)
	r16.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,548(r30)
	PPC_STORE_U32(r30.u32 + 548, r11.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r20,r11,26808
	r20.s64 = r11.s64 + 26808;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r18,r11,-27800
	r18.s64 = r11.s64 + -27800;
	// lis r11,-32235
	r11.s64 = -2112552960;
	// addi r19,r11,-31840
	r19.s64 = r11.s64 + -31840;
	// lis r11,2
	r11.s64 = 131072;
	// ori r21,r11,32852
	r21.u64 = r11.u64 | 32852;
loc_830222E0:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82ff6188
	sub_82FF6188(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(r17.u32, 0, xer);
	// beq cr6,0x83022344
	if (cr6.eq) goto loc_83022344;
	// clrlwi r11,r29,16
	r11.u64 = r29.u32 & 0xFFFF;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(r11.u32, 47, xer);
	// beq cr6,0x83022344
	if (cr6.eq) goto loc_83022344;
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(r11.u32, 62, xer);
	// beq cr6,0x83022344
	if (cr6.eq) goto loc_83022344;
	// lwz r10,132(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// lwzx r10,r10,r21
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r21.u32);
	// lbzx r11,r10,r11
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83022338
	if (cr0.eq) goto loc_83022338;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82ff6188
	sub_82FF6188(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x83022344
	goto loc_83022344;
loc_83022338:
	// li r4,207
	ctx.r4.s64 = 207;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_83022344:
	// lwz r10,132(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// clrlwi r11,r29,16
	r11.u64 = r29.u32 & 0xFFFF;
	// lwzx r10,r10,r21
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r21.u32);
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x83022700
	if (!cr0.eq) goto loc_83022700;
	// addi r26,r30,232
	r26.s64 = r30.s64 + 232;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r11,24(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// stw r22,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r22.u32);
	// sth r22,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r22.u16);
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// bl 0x82ffb090
	sub_82FFB090(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq 0x83022760
	if (cr0.eq) goto loc_83022760;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ff0278
	sub_82FF0278(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830223e8
	if (!cr0.eq) goto loc_830223E8;
	// li r4,180
	ctx.r4.s64 = 180;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// bl 0x82ff6498
	sub_82FF6498(ctx, base);
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(r11.u32, 62, xer);
	// beq cr6,0x830222e0
	if (cr6.eq) goto loc_830222E0;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(r11.u32, 47, xer);
	// beq cr6,0x830222e0
	if (cr6.eq) goto loc_830222E0;
	// cmplwi cr6,r11,39
	cr6.compare<uint32_t>(r11.u32, 39, xer);
	// beq cr6,0x830223e8
	if (cr6.eq) goto loc_830223E8;
	// cmplwi cr6,r11,34
	cr6.compare<uint32_t>(r11.u32, 34, xer);
	// beq cr6,0x830223e8
	if (cr6.eq) goto loc_830223E8;
	// lwz r10,132(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// lwzx r10,r10,r21
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r21.u32);
	// lbzx r11,r10,r11
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83022778
	if (cr0.eq) goto loc_83022778;
loc_830223E8:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r10,24(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r22,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r22.u16);
	// lwz r29,24(r26)
	r29.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8306d158
	sub_8306D158(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmplw cr6,r17,r16
	cr6.compare<uint32_t>(r17.u32, r16.u32, xer);
	// blt cr6,0x83022480
	if (cr6.lt) goto loc_83022480;
	// li r3,32
	ctx.r3.s64 = 32;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8302246c
	if (cr0.eq) goto loc_8302246C;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x8302243c
	if (cr6.eq) goto loc_8302243C;
	// lwz r8,8(r25)
	ctx.r8.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// b 0x83022440
	goto loc_83022440;
loc_8302243C:
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
loc_83022440:
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,216(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// stb r22,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, r22.u8);
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82ff9d30
	sub_82FF9D30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83022470
	goto loc_83022470;
loc_8302246C:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
loc_83022470:
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// bl 0x83043678
	sub_83043678(ctx, base);
	// b 0x830224d4
	goto loc_830224D4;
loc_83022480:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x830224a0
	if (cr6.eq) goto loc_830224A0;
	// lwz r28,8(r25)
	r28.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// b 0x830224a4
	goto loc_830224A4;
loc_830224A0:
	// mr r28,r22
	r28.u64 = r22.u64;
loc_830224A4:
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r3,16(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x82fe6e90
	sub_82FE6E90(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x82ff9c08
	sub_82FF9C08(ctx, base);
	// stw r28,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r28.u32);
	// stb r22,28(r27)
	PPC_STORE_U8(r27.u32 + 28, r22.u8);
	// stw r22,24(r27)
	PPC_STORE_U32(r27.u32 + 24, r22.u32);
	// stb r15,0(r27)
	PPC_STORE_U8(r27.u32 + 0, r15.u8);
loc_830224D4:
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// lwz r28,16(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bne cr6,0x8302258c
	if (!cr6.eq) goto loc_8302258C;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83022524
	if (cr0.eq) goto loc_83022524;
	// lwz r3,8(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r10,24(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 24);
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
	// lwz r5,24(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// bl 0x8301f560
	sub_8301F560(ctx, base);
loc_83022524:
	// addi r5,r31,104
	ctx.r5.s64 = r31.s64 + 104;
	// lwz r3,556(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 556);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83022548
	if (cr0.eq) goto loc_83022548;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83022568
	if (!cr0.eq) goto loc_83022568;
loc_83022548:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff02e0
	sub_82FF02E0(ctx, base);
	// lwz r11,548(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 548);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// lwz r3,556(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 556);
	// b 0x830225cc
	goto loc_830225CC;
loc_83022568:
	// lwz r10,548(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 548);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// blt cr6,0x830225e4
	if (cr6.lt) goto loc_830225E4;
	// lwz r3,8(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// b 0x83022614
	goto loc_83022614;
loc_8302258C:
	// addi r5,r31,108
	ctx.r5.s64 = r31.s64 + 108;
	// lwz r3,552(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 552);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830225b0
	if (cr0.eq) goto loc_830225B0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830225d4
	if (!cr0.eq) goto loc_830225D4;
loc_830225B0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff02e0
	sub_82FF02E0(ctx, base);
	// lwz r11,548(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 548);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// lwz r3,552(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 552);
loc_830225CC:
	// bl 0x83020968
	sub_83020968(ctx, base);
	// b 0x83022628
	goto loc_83022628;
loc_830225D4:
	// lwz r10,548(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 548);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x830225ec
	if (!cr6.lt) goto loc_830225EC;
loc_830225E4:
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x83022628
	goto loc_83022628;
loc_830225EC:
	// lwz r3,8(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
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
loc_83022614:
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
loc_83022628:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
	// addi r29,r30,260
	r29.s64 = r30.s64 + 260;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// bl 0x83061f58
	sub_83061F58(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83022694
	if (!cr0.eq) goto loc_83022694;
	// li r4,199
	ctx.r4.s64 = 199;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x82ff6498
	sub_82FF6498(ctx, base);
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(r11.u32, 62, xer);
	// beq cr6,0x83022694
	if (cr6.eq) goto loc_83022694;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(r11.u32, 47, xer);
	// beq cr6,0x83022694
	if (cr6.eq) goto loc_83022694;
	// lwz r10,132(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// lwzx r10,r10,r21
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r21.u32);
	// lbzx r11,r10,r11
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83022778
	if (cr0.eq) goto loc_83022778;
loc_83022694:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r22,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r22.u16);
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// bl 0x82ff9c08
	sub_82FF9C08(ctx, base);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x830226f8
	if (cr6.eq) goto loc_830226F8;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830226f8
	if (cr0.eq) goto loc_830226F8;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// sthx r22,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r22.u16);
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830226F8:
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// b 0x830222e0
	goto loc_830222E0;
loc_83022700:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830227ac
	if (cr6.eq) goto loc_830227AC;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(r11.u32, 47, xer);
	// beq cr6,0x830227d8
	if (cr6.eq) goto loc_830227D8;
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(r11.u32, 62, xer);
	// beq cr6,0x83022920
	if (cr6.eq) goto loc_83022920;
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(r11.u32, 60, xer);
	// beq cr6,0x830227f8
	if (cr6.eq) goto loc_830227F8;
	// cmplwi cr6,r11,39
	cr6.compare<uint32_t>(r11.u32, 39, xer);
	// beq cr6,0x83022730
	if (cr6.eq) goto loc_83022730;
	// cmplwi cr6,r11,34
	cr6.compare<uint32_t>(r11.u32, 34, xer);
	// bne cr6,0x830222e0
	if (!cr6.eq) goto loc_830222E0;
loc_83022730:
	// li r4,174
	ctx.r4.s64 = 174;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82ff63e0
	sub_82FF63E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
	// b 0x830222e0
	goto loc_830222E0;
loc_83022760:
	// li r4,174
	ctx.r4.s64 = 174;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
	// b 0x83022080
	goto loc_83022080;
loc_83022778:
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(r11.u32, 60, xer);
	// bne cr6,0x83022080
	if (!cr6.eq) goto loc_83022080;
	// lwz r3,8(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,198
	ctx.r4.s64 = 198;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
	// b 0x83022080
	goto loc_83022080;
loc_830227AC:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r6,47
	ctx.r6.s64 = 47;
	// addi r4,r11,21464
	ctx.r4.s64 = r11.s64 + 21464;
	// li r5,1897
	ctx.r5.s64 = 1897;
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
loc_830227D8:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stb r15,96(r31)
	PPC_STORE_U8(r31.u32 + 96, r15.u8);
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8302281c
	if (!cr0.eq) goto loc_8302281C;
loc_830227F8:
	// lwz r3,8(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
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
loc_8302281C:
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(r17.u32, 0, xer);
	// beq cr6,0x8302282c
	if (cr6.eq) goto loc_8302282C;
	// lwz r3,556(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 556);
	// bl 0x8301ff70
	sub_8301FF70(ctx, base);
loc_8302282C:
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83022ad8
	if (cr0.eq) goto loc_83022AD8;
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r24,r22
	r24.u64 = r22.u64;
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
	// beq 0x83022ad8
	if (cr0.eq) goto loc_83022AD8;
	// li r21,-1
	r21.s64 = -1;
loc_83022880:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,552(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 552);
	// addi r5,r31,108
	ctx.r5.s64 = r31.s64 + 108;
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
	// beq 0x830228d8
	if (cr0.eq) goto loc_830228D8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830228d8
	if (cr0.eq) goto loc_830228D8;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,548(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 548);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83022ab8
	if (!cr6.lt) goto loc_83022AB8;
loc_830228D8:
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83022990
	if (cr0.eq) goto loc_83022990;
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(r27.s32, 2, xer);
	// bne cr6,0x8302292c
	if (!cr6.eq) goto loc_8302292C;
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
	// b 0x83022ab8
	goto loc_83022AB8;
loc_83022920:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// b 0x8302281c
	goto loc_8302281C;
loc_8302292C:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x8302293c
	if (cr6.eq) goto loc_8302293C;
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(r27.s32, 1, xer);
	// bne cr6,0x83022990
	if (!cr6.eq) goto loc_83022990;
loc_8302293C:
	// lbz r11,14(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 14);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83022990
	if (cr0.eq) goto loc_83022990;
	// lbz r11,17(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 17);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83022990
	if (cr0.eq) goto loc_83022990;
	// lwz r3,8(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 8);
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
loc_83022990:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x830229a0
	if (cr6.eq) goto loc_830229A0;
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(r27.s32, 1, xer);
	// bne cr6,0x83022ab8
	if (!cr6.eq) goto loc_83022AB8;
loc_830229A0:
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830229d0
	if (cr0.eq) goto loc_830229D0;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
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
loc_830229D0:
	// cmplw cr6,r17,r16
	cr6.compare<uint32_t>(r17.u32, r16.u32, xer);
	// blt cr6,0x83022a58
	if (cr6.lt) goto loc_83022A58;
	// li r3,32
	ctx.r3.s64 = 32;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// stw r26,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r26.u32);
	// beq 0x83022a44
	if (cr0.eq) goto loc_83022A44;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r28,8(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r27,24(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r29,216(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 216);
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
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stb r22,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, r22.u8);
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// bl 0x82ff9d30
	sub_82FF9D30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83022a48
	goto loc_83022A48;
loc_83022A44:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
loc_83022A48:
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// bl 0x83043678
	sub_83043678(ctx, base);
	// addi r16,r16,1
	r16.s64 = r16.s64 + 1;
	// b 0x83022ab4
	goto loc_83022AB4;
loc_83022A58:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// bl 0x83020000
	sub_83020000(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r27,8(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r26,24(r29)
	r26.u64 = PPC_LOAD_U32(r29.u32 + 24);
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
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x82fe6e90
	sub_82FE6E90(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ff9c08
	sub_82FF9C08(ctx, base);
	// stw r27,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r27.u32);
	// stb r22,28(r28)
	PPC_STORE_U8(r28.u32 + 28, r22.u8);
	// stw r22,24(r28)
	PPC_STORE_U32(r28.u32 + 24, r22.u32);
	// stb r22,0(r28)
	PPC_STORE_U8(r28.u32 + 0, r22.u8);
loc_83022AB4:
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
loc_83022AB8:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r24,r3
	cr6.compare<uint32_t>(r24.u32, ctx.r3.u32, xer);
	// blt cr6,0x83022880
	if (cr6.lt) goto loc_83022880;
loc_83022AD8:
	// lbz r28,96(r31)
	r28.u64 = PPC_LOAD_U8(r31.u32 + 96);
	// mr. r11,r28
	r11.u64 = r28.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83022b90
	if (cr0.eq) goto loc_83022B90;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83022b54
	if (cr0.eq) goto loc_83022B54;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
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
	// blt 0x83022b54
	if (cr0.lt) goto loc_83022B54;
	// lwz r3,8(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
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
loc_83022B54:
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x8301e348
	sub_8301E348(ctx, base);
	// lbz r11,97(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 97);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83022b74
	if (cr6.eq) goto loc_83022B74;
	// lwz r11,316(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// stb r22,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r22.u8);
	// b 0x83022b90
	goto loc_83022B90;
loc_83022B74:
	// lwz r11,40(r14)
	r11.u64 = PPC_LOAD_U32(r14.u32 + 40);
	// lwz r10,32(r14)
	ctx.r10.u64 = PPC_LOAD_U32(r14.u32 + 32);
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
loc_83022B90:
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83022bc8
	if (cr0.eq) goto loc_83022BC8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// lwz r7,84(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// mr r8,r17
	ctx.r8.u64 = r17.u64;
	// lbz r10,97(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 97);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,40(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83022BC8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83022BCC:
	// addi r1,r31,288
	ctx.r1.s64 = r31.s64 + 288;
	// b 0x831b0b40
	return;
}

__attribute__((alias("__imp__sub_83022BD4"))) PPC_WEAK_FUNC(sub_83022BD4);
PPC_FUNC_IMPL(__imp__sub_83022BD4) {
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

__attribute__((alias("__imp__sub_83022C04"))) PPC_WEAK_FUNC(sub_83022C04);
PPC_FUNC_IMPL(__imp__sub_83022C04) {
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

__attribute__((alias("__imp__sub_83022C34"))) PPC_WEAK_FUNC(sub_83022C34);
PPC_FUNC_IMPL(__imp__sub_83022C34) {
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

__attribute__((alias("__imp__sub_83022C68"))) PPC_WEAK_FUNC(sub_83022C68);
PPC_FUNC_IMPL(__imp__sub_83022C68) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,536(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 536);
	// lwz r10,132(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
	// lhz r11,0(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83022d28
	if (cr0.eq) goto loc_83022D28;
	// addis r29,r10,3
	r29.s64 = ctx.r10.s64 + 196608;
	// addi r29,r29,-32684
	r29.s64 = r29.s64 + -32684;
loc_83022CA4:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83022ccc
	if (cr0.eq) goto loc_83022CCC;
	// sth r28,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r28.u16);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83022ca4
	if (!cr0.eq) goto loc_83022CA4;
loc_83022CCC:
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83022d1c
	if (cr0.eq) goto loc_83022D1C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,536(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 536);
	// bl 0x8305c228
	sub_8305C228(ctx, base);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83022d1c
	if (cr0.eq) goto loc_83022D1C;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
loc_83022CFC:
	// lbzx r11,r10,r11
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83022d1c
	if (!cr0.eq) goto loc_83022D1C;
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83022cfc
	if (!cr0.eq) goto loc_83022CFC;
loc_83022D1C:
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83022ca4
	if (!cr0.eq) goto loc_83022CA4;
loc_83022D28:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83022D30"))) PPC_WEAK_FUNC(sub_83022D30);
PPC_FUNC_IMPL(__imp__sub_83022D30) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// mr r27,r26
	r27.u64 = r26.u64;
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x83022dbc
	if (!cr6.gt) goto loc_83022DBC;
	// mr r30,r26
	r30.u64 = r26.u64;
loc_83022D58:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwzx r31,r11,r30
	r31.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x83022da0
	if (cr0.eq) goto loc_83022DA0;
loc_83022D68:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r28,4(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83022d8c
	if (cr0.eq) goto loc_83022D8C;
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
loc_83022D8C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// mr r31,r28
	r31.u64 = r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x83022d68
	if (!cr6.eq) goto loc_83022D68;
loc_83022DA0:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// stwx r26,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, r26.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x83022d58
	if (cr6.lt) goto loc_83022D58;
loc_83022DBC:
	// stw r26,16(r29)
	PPC_STORE_U32(r29.u32 + 16, r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83022DC8"))) PPC_WEAK_FUNC(sub_83022DC8);
PPC_FUNC_IMPL(__imp__sub_83022DC8) {
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
	// beq 0x83022e34
	if (cr0.eq) goto loc_83022E34;
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
	// addi r4,r11,21464
	ctx.r4.s64 = r11.s64 + 21464;
	// li r5,936
	ctx.r5.s64 = 936;
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
loc_83022E34:
	// lbz r11,10(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83022e5c
	if (cr0.eq) goto loc_83022E5C;
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
	// b 0x83022e60
	goto loc_83022E60;
loc_83022E5C:
	// lwz r24,40(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 40);
loc_83022E60:
	// lwz r11,476(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 476);
	// addi r26,r31,400
	r26.s64 = r31.s64 + 400;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bne cr6,0x83022e98
	if (!cr6.eq) goto loc_83022E98;
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x83022eb0
	goto loc_83022EB0;
loc_83022E98:
	// bl 0x8301e348
	sub_8301E348(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_83022EB0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// bl 0x82ffb458
	sub_82FFB458(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83022ef0
	if (!cr0.eq) goto loc_83022EF0;
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
	// b 0x83023488
	goto loc_83023488;
loc_83022EF0:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r11,440(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 440);
	// lwz r9,132(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// ori r10,r10,32808
	ctx.r10.u64 = ctx.r10.u64 | 32808;
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// clrlwi r25,r11,24
	r25.u64 = r11.u32 & 0xFF;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// beq cr6,0x83022f28
	if (cr6.eq) goto loc_83022F28;
	// li r4,278
	ctx.r4.s64 = 278;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_83022F28:
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
	// bne 0x83022f74
	if (!cr0.eq) goto loc_83022F74;
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
loc_83022F74:
	// lwz r11,476(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 476);
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8302304c
	if (!cr6.eq) goto loc_8302304C;
	// lwz r3,576(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 576);
	// bl 0x83020a88
	sub_83020A88(ctx, base);
	// lbz r11,16(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// stb r3,581(r31)
	PPC_STORE_U8(r31.u32 + 581, ctx.r3.u8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83023040
	if (cr0.eq) goto loc_83023040;
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
	// beq 0x83023040
	if (cr0.eq) goto loc_83023040;
	// lwz r11,168(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83022fd4
	if (cr0.eq) goto loc_83022FD4;
	// mr r11,r28
	r11.u64 = r28.u64;
	// b 0x83022fdc
	goto loc_83022FDC;
loc_83022FD4:
	// bl 0x83020b18
	sub_83020B18(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83022FDC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,600(r31)
	PPC_STORE_U32(r31.u32 + 600, r11.u32);
	// bne cr6,0x83022ff8
	if (!cr6.eq) goto loc_83022FF8;
	// lwz r11,168(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// stw r11,596(r31)
	PPC_STORE_U32(r31.u32 + 596, r11.u32);
	// b 0x83022ffc
	goto loc_83022FFC;
loc_83022FF8:
	// stw r28,596(r31)
	PPC_STORE_U32(r31.u32 + 596, r28.u32);
loc_83022FFC:
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8302304c
	if (cr6.eq) goto loc_8302304C;
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
	// stw r3,604(r31)
	PPC_STORE_U32(r31.u32 + 604, ctx.r3.u32);
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8302304c
	if (cr0.eq) goto loc_8302304C;
	// b 0x83023048
	goto loc_83023048;
loc_83023040:
	// stw r28,596(r31)
	PPC_STORE_U32(r31.u32 + 596, r28.u32);
	// stw r28,600(r31)
	PPC_STORE_U32(r31.u32 + 600, r28.u32);
loc_83023048:
	// stw r28,604(r31)
	PPC_STORE_U32(r31.u32 + 604, r28.u32);
loc_8302304C:
	// lbz r11,16(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// mr r27,r28
	r27.u64 = r28.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83023274
	if (cr0.eq) goto loc_83023274;
	// lwz r11,476(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 476);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x830230a8
	if (!cr6.eq) goto loc_830230A8;
	// lbz r11,33(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 33);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830230a8
	if (cr0.eq) goto loc_830230A8;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x830230a8
	if (!cr6.eq) goto loc_830230A8;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,110
	ctx.r4.s64 = 110;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
loc_830230A8:
	// lwz r11,476(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 476);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x830230f4
	if (!cr6.eq) goto loc_830230F4;
	// lbz r11,34(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 34);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830230f4
	if (cr0.eq) goto loc_830230F4;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x830230f4
	if (!cr6.eq) goto loc_830230F4;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,113
	ctx.r4.s64 = 113;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
loc_830230F4:
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
	// blt 0x8302319c
	if (cr0.lt) goto loc_8302319C;
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83023148
	if (!cr0.eq) goto loc_83023148;
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
loc_83023140:
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x83023188
	goto loc_83023188;
loc_83023148:
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// blt cr6,0x83023168
	if (cr6.lt) goto loc_83023168;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,21
	ctx.r4.s64 = 21;
	// b 0x83023140
	goto loc_83023140;
loc_83023168:
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
loc_83023188:
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
loc_8302319C:
	// lwz r11,476(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 476);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83023274
	if (!cr6.eq) goto loc_83023274;
	// lwz r11,168(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// lbz r11,100(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 100);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830231c0
	if (cr0.eq) goto loc_830231C0;
	// stb r23,581(r31)
	PPC_STORE_U8(r31.u32 + 581, r23.u8);
	// b 0x830231f0
	goto loc_830231F0;
loc_830231C0:
	// lwz r11,596(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 596);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830231f0
	if (cr0.eq) goto loc_830231F0;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmpwi cr6,r11,25
	cr6.compare<int32_t>(r11.s32, 25, xer);
	// bne cr6,0x830231f0
	if (!cr6.eq) goto loc_830231F0;
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
loc_830231F0:
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8302321c
	if (cr6.eq) goto loc_8302321C;
	// lwz r11,168(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// lbz r11,101(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 101);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stb r11,580(r31)
	PPC_STORE_U8(r31.u32 + 580, r11.u8);
	// beq 0x8302321c
	if (cr0.eq) goto loc_8302321C;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// stw r11,604(r31)
	PPC_STORE_U32(r31.u32 + 604, r11.u32);
loc_8302321C:
	// lbz r11,16(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83023244
	if (cr0.eq) goto loc_83023244;
	// lbz r11,20(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83023244
	if (cr0.eq) goto loc_83023244;
	// lwz r11,532(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 532);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r11,r23
	r11.u64 = r23.u64;
	// bne cr6,0x83023248
	if (!cr6.eq) goto loc_83023248;
loc_83023244:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_83023248:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83023274
	if (cr0.eq) goto loc_83023274;
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
loc_83023274:
	// lwz r11,476(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 476);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x830232ac
	if (!cr6.eq) goto loc_830232AC;
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8302329c
	if (cr6.eq) goto loc_8302329C;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8301fc00
	sub_8301FC00(ctx, base);
loc_8302329C:
	// lwz r11,168(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// stw r28,52(r11)
	PPC_STORE_U32(r11.u32 + 52, r28.u32);
	// sth r28,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r28.u16);
loc_830232AC:
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830232f0
	if (cr6.eq) goto loc_830232F0;
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
loc_830232F0:
	// lwz r11,476(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 476);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83023334
	if (!cr6.eq) goto loc_83023334;
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83023334
	if (!cr0.eq) goto loc_83023334;
	// lwz r3,576(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 576);
	// bl 0x83020a88
	sub_83020A88(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83023324
	if (!cr0.eq) goto loc_83023324;
	// lbz r11,581(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 581);
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r28.u8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83023328
	if (cr0.eq) goto loc_83023328;
loc_83023324:
	// stb r23,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r23.u8);
loc_83023328:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,576(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 576);
	// bl 0x83020b78
	sub_83020B78(ctx, base);
loc_83023334:
	// clrlwi r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r11,0(r22)
	PPC_STORE_U8(r22.u32 + 0, r11.u8);
	// beq 0x83023488
	if (cr0.eq) goto loc_83023488;
	// lbz r11,10(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8302346c
	if (cr0.eq) goto loc_8302346C;
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
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// stw r3,476(r31)
	PPC_STORE_U32(r31.u32 + 476, ctx.r3.u32);
	// bne cr6,0x830233ec
	if (!cr6.eq) goto loc_830233EC;
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
	// bne 0x830233ec
	if (!cr0.eq) goto loc_830233EC;
	// lbz r11,17(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 17);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830233e4
	if (cr0.eq) goto loc_830233E4;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,216(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 216);
	// li r6,158
	ctx.r6.s64 = 158;
	// addi r4,r11,21464
	ctx.r4.s64 = r11.s64 + 21464;
	// li r5,1187
	ctx.r5.s64 = 1187;
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
loc_830233E4:
	// lwz r11,524(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 524);
	// b 0x83023450
	goto loc_83023450;
loc_830233EC:
	// lwz r11,476(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 476);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83023454
	if (!cr6.eq) goto loc_83023454;
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
	// bne 0x83023454
	if (!cr0.eq) goto loc_83023454;
	// lbz r11,17(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 17);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8302344c
	if (cr0.eq) goto loc_8302344C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,216(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 216);
	// li r6,44
	ctx.r6.s64 = 44;
	// addi r4,r11,21464
	ctx.r4.s64 = r11.s64 + 21464;
	// li r5,1194
	ctx.r5.s64 = 1194;
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
loc_8302344C:
	// lwz r11,520(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 520);
loc_83023450:
	// stw r11,168(r31)
	PPC_STORE_U32(r31.u32 + 168, r11.u32);
loc_83023454:
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
loc_8302346C:
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
loc_83023488:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_83023498"))) PPC_WEAK_FUNC(sub_83023498);
PPC_FUNC_IMPL(__imp__sub_83023498) {
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
	// addi r31,r1,-400
	r31.s64 = ctx.r1.s64 + -400;
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r4,428(r31)
	PPC_STORE_U32(r31.u32 + 428, ctx.r4.u32);
	// li r26,1
	r26.s64 = 1;
	// addi r11,r30,488
	r11.s64 = r30.s64 + 488;
	// li r19,0
	r19.s64 = 0;
	// addi r16,r30,316
	r16.s64 = r30.s64 + 316;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,420(r31)
	PPC_STORE_U32(r31.u32 + 420, r30.u32);
	// stb r26,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, r26.u8);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// stw r19,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r19.u32);
	// sth r19,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r19.u16);
	// lwz r11,24(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + 24);
	// stw r19,4(r16)
	PPC_STORE_U32(r16.u32 + 4, r19.u32);
	// sth r19,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r19.u16);
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// bl 0x82ffb090
	sub_82FFB090(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83023518
	if (!cr0.eq) goto loc_83023518;
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
	// b 0x83024a6c
	goto loc_83024A6C;
loc_83023518:
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
	// stb r29,129(r31)
	PPC_STORE_U8(r31.u32 + 129, r29.u8);
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
	// lwz r11,4(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + 4);
	// addi r6,r31,130
	ctx.r6.s64 = r31.s64 + 130;
	// lwz r10,24(r16)
	ctx.r10.u64 = PPC_LOAD_U32(r16.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r19,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r19.u16);
	// lwz r4,24(r16)
	ctx.r4.u64 = PPC_LOAD_U32(r16.u32 + 24);
	// lwz r5,516(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 516);
	// bl 0x830211b8
	sub_830211B8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// stb r19,128(r31)
	PPC_STORE_U8(r31.u32 + 128, r19.u8);
	// mr r22,r19
	r22.u64 = r19.u64;
	// mr r21,r19
	r21.u64 = r19.u64;
	// li r17,-1
	r17.s64 = -1;
	// stw r25,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r25.u32);
	// mr. r27,r29
	r27.u64 = r29.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// bne 0x83023678
	if (!cr0.eq) goto loc_83023678;
	// lwz r11,476(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83023678
	if (!cr6.eq) goto loc_83023678;
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
	// beq 0x830235ac
	if (cr0.eq) goto loc_830235AC;
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// b 0x830235b0
	goto loc_830235B0;
loc_830235AC:
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
loc_830235B0:
	// lbz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x830235dc
	if (cr0.eq) goto loc_830235DC;
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
	// beq 0x83023604
	if (cr0.eq) goto loc_83023604;
	// mr r29,r19
	r29.u64 = r19.u64;
loc_830235D8:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_830235DC:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x8302361c
	if (cr6.eq) goto loc_8302361C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x8302361c
	if (cr6.eq) goto loc_8302361C;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x8302361c
	if (cr6.eq) goto loc_8302361C;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83023678
	if (!cr6.eq) goto loc_83023678;
	// stb r26,128(r31)
	PPC_STORE_U8(r31.u32 + 128, r26.u8);
	// b 0x83023678
	goto loc_83023678;
loc_83023604:
	// bl 0x83020b18
	sub_83020B18(ctx, base);
	// lwz r29,0(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x830235d8
	if (cr0.eq) goto loc_830235D8;
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// b 0x830235dc
	goto loc_830235DC;
loc_8302361C:
	// lwz r11,80(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83023644
	if (!cr6.eq) goto loc_83023644;
	// lwz r11,60(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83023644
	if (cr6.eq) goto loc_83023644;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83048528
	sub_83048528(ctx, base);
	// stw r3,80(r29)
	PPC_STORE_U32(r29.u32 + 80, ctx.r3.u32);
loc_83023644:
	// lwz r21,80(r29)
	r21.u64 = PPC_LOAD_U32(r29.u32 + 80);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
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
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,-4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// lwz r17,36(r11)
	r17.u64 = PPC_LOAD_U32(r11.u32 + 36);
loc_83023678:
	// addi r14,r30,400
	r14.s64 = r30.s64 + 400;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x8301eaa0
	sub_8301EAA0(ctx, base);
	// lwz r10,40(r14)
	ctx.r10.u64 = PPC_LOAD_U32(r14.u32 + 40);
	// lwz r9,32(r14)
	ctx.r9.u64 = PPC_LOAD_U32(r14.u32 + 32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// stw r3,136(r31)
	PPC_STORE_U32(r31.u32 + 136, ctx.r3.u32);
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
	// stw r29,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r29.u32);
	// beq cr6,0x83023704
	if (cr6.eq) goto loc_83023704;
	// lbz r11,18(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 18);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83023704
	if (cr0.eq) goto loc_83023704;
	// lwz r4,200(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 200);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne 0x830236dc
	if (!cr0.eq) goto loc_830236DC;
	// lwz r11,204(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 204);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83023704
	if (cr6.eq) goto loc_83023704;
loc_830236DC:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830236ec
	if (cr6.eq) goto loc_830236EC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83065db8
	sub_83065DB8(ctx, base);
loc_830236EC:
	// lwz r4,204(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 204);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x83023704
	if (cr0.eq) goto loc_83023704;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830628f0
	sub_830628F0(ctx, base);
loc_83023704:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x83023718
	if (cr6.eq) goto loc_83023718;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83065ea0
	sub_83065EA0(ctx, base);
loc_83023718:
	// lwz r11,476(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// mr r29,r19
	r29.u64 = r19.u64;
	// li r20,-1
	r20.s64 = -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83023898
	if (!cr6.eq) goto loc_83023898;
	// lwz r11,4(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + 4);
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// lwz r10,24(r16)
	ctx.r10.u64 = PPC_LOAD_U32(r16.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r19,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r19.u16);
	// lwz r3,184(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// lwz r28,24(r16)
	r28.u64 = PPC_LOAD_U32(r16.u32 + 24);
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
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
	// bne 0x83023798
	if (!cr0.eq) goto loc_83023798;
	// addi r5,r31,140
	ctx.r5.s64 = r31.s64 + 140;
	// lwz r3,540(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 540);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x83020060
	sub_83020060(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8302378c
	if (!cr0.eq) goto loc_8302378C;
	// mr r29,r19
	r29.u64 = r19.u64;
	// b 0x83023898
	goto loc_83023898;
loc_8302378C:
	// lwz r29,0(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x83023898
	if (cr0.eq) goto loc_83023898;
loc_83023798:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83023898
	if (cr0.eq) goto loc_83023898;
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
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r25,r19
	r25.u64 = r19.u64;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83023898
	if (cr0.eq) goto loc_83023898;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r23,r11,-28120
	r23.s64 = r11.s64 + -28120;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r24,r11,-28108
	r24.s64 = r11.s64 + -28108;
loc_830237F8:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83023828
	if (cr0.eq) goto loc_83023828;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83023878
	if (!cr6.eq) goto loc_83023878;
loc_83023828:
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
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x82fd9c88
	sub_82FD9C88(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83023868
	if (cr0.eq) goto loc_83023868;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83023878
	if (cr0.eq) goto loc_83023878;
loc_83023868:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r5,24(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83061308
	sub_83061308(ctx, base);
loc_83023878:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r25,r3
	cr6.compare<uint32_t>(r25.u32, ctx.r3.u32, xer);
	// blt cr6,0x830237f8
	if (cr6.lt) goto loc_830237F8;
loc_83023898:
	// li r11,-1
	r11.s64 = -1;
	// lwz r10,24(r16)
	ctx.r10.u64 = PPC_LOAD_U32(r16.u32 + 24);
	// addi r18,r30,344
	r18.s64 = r30.s64 + 344;
	// addi r7,r31,132
	ctx.r7.s64 = r31.s64 + 132;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// lwz r11,4(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + 4);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r19,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r19.u16);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r24,24(r16)
	r24.u64 = PPC_LOAD_U32(r16.u32 + 24);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r15,16(r30)
	r15.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x83023948
	if (cr6.eq) goto loc_83023948;
	// lwz r11,4(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 4);
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// lwz r10,24(r18)
	ctx.r10.u64 = PPC_LOAD_U32(r18.u32 + 24);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r19,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r19.u16);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// lwz r4,24(r18)
	ctx.r4.u64 = PPC_LOAD_U32(r18.u32 + 24);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r24
	ctx.r5.u64 = r11.u64 + r24.u64;
	// bl 0x82fe7048
	sub_82FE7048(ctx, base);
	// lwz r11,136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = r11.s64 + -1;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8302d8c8
	sub_8302D8C8(ctx, base);
	// stb r3,128(r31)
	PPC_STORE_U8(r31.u32 + 128, ctx.r3.u8);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x82fe6e10
	sub_82FE6E10(ctx, base);
loc_83023948:
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// mr r25,r19
	r25.u64 = r19.u64;
	// lwz r3,184(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r11,r24
	r28.u64 = r11.u64 + r24.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplw cr6,r23,r11
	cr6.compare<uint32_t>(r23.u32, r11.u32, xer);
	// beq cr6,0x83023c7c
	if (cr6.eq) goto loc_83023C7C;
	// lwz r3,184(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
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
	// bne 0x83023fd8
	if (!cr0.eq) goto loc_83023FD8;
	// lwz r11,476(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830239cc
	if (!cr0.eq) goto loc_830239CC;
	// addi r5,r31,140
	ctx.r5.s64 = r31.s64 + 140;
	// lwz r3,540(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 540);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x83020060
	sub_83020060(ctx, base);
	// b 0x830239ec
	goto loc_830239EC;
loc_830239CC:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83023a00
	if (!cr6.eq) goto loc_83023A00;
	// addi r7,r31,140
	ctx.r7.s64 = r31.s64 + 140;
	// lwz r3,544(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 544);
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x83020118
	sub_83020118(ctx, base);
loc_830239EC:
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830239fc
	if (!cr0.eq) goto loc_830239FC;
	// mr r29,r19
	r29.u64 = r19.u64;
	// b 0x83023a08
	goto loc_83023A08;
loc_830239FC:
	// lwz r29,0(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83023A00:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x83023fd8
	if (!cr6.eq) goto loc_83023FD8;
loc_83023A08:
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
	// cmplw cr6,r27,r23
	cr6.compare<uint32_t>(r27.u32, r23.u32, xer);
	// beq cr6,0x83023ac0
	if (cr6.eq) goto loc_83023AC0;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
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
	// bl 0x83062430
	sub_83062430(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83023a60
	if (!cr0.eq) goto loc_83023A60;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x83023a64
	if (!cr0.eq) goto loc_83023A64;
loc_83023A60:
	// mr r11,r19
	r11.u64 = r19.u64;
loc_83023A64:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83023a94
	if (cr0.eq) goto loc_83023A94;
	// lbz r11,128(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 128);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83023a94
	if (!cr0.eq) goto loc_83023A94;
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
loc_83023A94:
	// lwz r3,184(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
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
	// bne 0x83023fd8
	if (!cr0.eq) goto loc_83023FD8;
loc_83023AC0:
	// cmpwi cr6,r17,-1
	cr6.compare<int32_t>(r17.s32, -1, xer);
	// beq cr6,0x83023ba0
	if (cr6.eq) goto loc_83023BA0;
	// lwz r3,184(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
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
	// bne 0x83023fd8
	if (!cr0.eq) goto loc_83023FD8;
	// addi r7,r31,140
	ctx.r7.s64 = r31.s64 + 140;
	// lwz r3,544(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 544);
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x83020118
	sub_83020118(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83023b20
	if (cr0.eq) goto loc_83023B20;
	// lwz r29,0(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// bne 0x83023fd8
	if (!cr0.eq) goto loc_83023FD8;
loc_83023B20:
	// lwz r3,184(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
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
	// beq 0x83023b5c
	if (cr0.eq) goto loc_83023B5C;
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x83023b60
	if (!cr6.eq) goto loc_83023B60;
loc_83023B5C:
	// mr r11,r19
	r11.u64 = r19.u64;
loc_83023B60:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83023b98
	if (cr0.eq) goto loc_83023B98;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83023b98
	if (cr0.eq) goto loc_83023B98;
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
loc_83023B98:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x83023fd8
	if (!cr6.eq) goto loc_83023FD8;
loc_83023BA0:
	// cmplw cr6,r27,r23
	cr6.compare<uint32_t>(r27.u32, r23.u32, xer);
	// beq cr6,0x83023bb4
	if (cr6.eq) goto loc_83023BB4;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83062430
	sub_83062430(ctx, base);
loc_83023BB4:
	// lwz r11,476(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83023c08
	if (!cr0.eq) goto loc_83023C08;
	// li r3,48
	ctx.r3.s64 = 48;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,140(r31)
	PPC_STORE_U32(r31.u32 + 140, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83023bf4
	if (cr0.eq) goto loc_83023BF4;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8306c8b8
	sub_8306C8B8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x83023bf8
	goto loc_83023BF8;
loc_83023BF4:
	// mr r29,r19
	r29.u64 = r19.u64;
loc_83023BF8:
	// lwz r3,540(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 540);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_83023C00:
	// bl 0x83020538
	sub_83020538(ctx, base);
	// b 0x83023fd0
	goto loc_83023FD0;
loc_83023C08:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83023fd4
	if (!cr6.eq) goto loc_83023FD4;
	// li r3,96
	ctx.r3.s64 = 96;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,140(r31)
	PPC_STORE_U32(r31.u32 + 140, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83023c5c
	if (cr0.eq) goto loc_83023C5C;
	// lwz r11,4(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 4);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r10,24(r18)
	ctx.r10.u64 = PPC_LOAD_U32(r18.u32 + 24);
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// sthx r19,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r19.u16);
	// lwz r4,24(r18)
	ctx.r4.u64 = PPC_LOAD_U32(r18.u32 + 24);
	// lwz r9,216(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x8306dbe0
	sub_8306DBE0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x83023c60
	goto loc_83023C60;
loc_83023C5C:
	// mr r29,r19
	r29.u64 = r19.u64;
loc_83023C60:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r3,544(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 544);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// b 0x83023fcc
	goto loc_83023FCC;
loc_83023C7C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x83023fd8
	if (!cr6.eq) goto loc_83023FD8;
	// lwz r3,184(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
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
	// bne 0x83023fd8
	if (!cr0.eq) goto loc_83023FD8;
	// lwz r11,476(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83023cd0
	if (!cr0.eq) goto loc_83023CD0;
	// addi r5,r31,140
	ctx.r5.s64 = r31.s64 + 140;
	// lwz r3,540(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 540);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x83020060
	sub_83020060(ctx, base);
	// b 0x83023cf0
	goto loc_83023CF0;
loc_83023CD0:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83023d04
	if (!cr6.eq) goto loc_83023D04;
	// addi r7,r31,140
	ctx.r7.s64 = r31.s64 + 140;
	// lwz r3,544(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 544);
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x83020118
	sub_83020118(ctx, base);
loc_83023CF0:
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83023d00
	if (!cr0.eq) goto loc_83023D00;
	// mr r29,r19
	r29.u64 = r19.u64;
	// b 0x83023d0c
	goto loc_83023D0C;
loc_83023D00:
	// lwz r29,0(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83023D04:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x83023fd8
	if (!cr6.eq) goto loc_83023FD8;
loc_83023D0C:
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
	// beq cr6,0x83023dbc
	if (cr6.eq) goto loc_83023DBC;
	// lwz r29,144(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83062430
	sub_83062430(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83023d5c
	if (!cr0.eq) goto loc_83023D5C;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x83023d60
	if (!cr0.eq) goto loc_83023D60;
loc_83023D5C:
	// mr r11,r19
	r11.u64 = r19.u64;
loc_83023D60:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83023d90
	if (cr0.eq) goto loc_83023D90;
	// lbz r11,128(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 128);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83023d90
	if (!cr0.eq) goto loc_83023D90;
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
loc_83023D90:
	// lwz r3,184(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
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
	// bne 0x83023fd8
	if (!cr0.eq) goto loc_83023FD8;
loc_83023DBC:
	// cmpwi cr6,r17,-1
	cr6.compare<int32_t>(r17.s32, -1, xer);
	// beq cr6,0x83023ef4
	if (cr6.eq) goto loc_83023EF4;
	// lwz r3,184(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
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
	// bne 0x83023fd8
	if (!cr0.eq) goto loc_83023FD8;
	// addi r7,r31,140
	ctx.r7.s64 = r31.s64 + 140;
	// lwz r3,544(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 544);
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x83020118
	sub_83020118(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83023e18
	if (!cr0.eq) goto loc_83023E18;
	// mr r29,r19
	r29.u64 = r19.u64;
	// b 0x83023e24
	goto loc_83023E24;
loc_83023E18:
	// lwz r29,0(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// bne 0x83023fd8
	if (!cr0.eq) goto loc_83023FD8;
loc_83023E24:
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// beq cr6,0x83023ef4
	if (cr6.eq) goto loc_83023EF4;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83062430
	sub_83062430(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83023e54
	if (!cr0.eq) goto loc_83023E54;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x83023e58
	if (!cr0.eq) goto loc_83023E58;
loc_83023E54:
	// mr r11,r19
	r11.u64 = r19.u64;
loc_83023E58:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83023e88
	if (cr0.eq) goto loc_83023E88;
	// lbz r11,128(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 128);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83023e88
	if (!cr0.eq) goto loc_83023E88;
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
loc_83023E88:
	// lwz r3,184(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
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
	// beq 0x83023ef4
	if (cr0.eq) goto loc_83023EF4;
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// beq cr6,0x83023fd8
	if (cr6.eq) goto loc_83023FD8;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83023fd8
	if (cr0.eq) goto loc_83023FD8;
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
	// b 0x83023fd8
	goto loc_83023FD8;
loc_83023EF4:
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// beq cr6,0x83023f0c
	if (cr6.eq) goto loc_83023F0C;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83062430
	sub_83062430(ctx, base);
loc_83023F0C:
	// lwz r11,476(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83023f5c
	if (!cr0.eq) goto loc_83023F5C;
	// li r3,48
	ctx.r3.s64 = 48;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,140(r31)
	PPC_STORE_U32(r31.u32 + 140, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83023f4c
	if (cr0.eq) goto loc_83023F4C;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8306c8b8
	sub_8306C8B8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x83023f50
	goto loc_83023F50;
loc_83023F4C:
	// mr r29,r19
	r29.u64 = r19.u64;
loc_83023F50:
	// lwz r3,540(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 540);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// b 0x83023c00
	goto loc_83023C00;
loc_83023F5C:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83023fd4
	if (!cr6.eq) goto loc_83023FD4;
	// li r3,96
	ctx.r3.s64 = 96;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,140(r31)
	PPC_STORE_U32(r31.u32 + 140, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83023fb0
	if (cr0.eq) goto loc_83023FB0;
	// lwz r11,4(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 4);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r10,24(r18)
	ctx.r10.u64 = PPC_LOAD_U32(r18.u32 + 24);
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// sthx r19,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r19.u16);
	// lwz r4,24(r18)
	ctx.r4.u64 = PPC_LOAD_U32(r18.u32 + 24);
	// lwz r9,216(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x8306dbe0
	sub_8306DBE0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x83023fb4
	goto loc_83023FB4;
loc_83023FB0:
	// mr r29,r19
	r29.u64 = r19.u64;
loc_83023FB4:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r3,544(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 544);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
loc_83023FCC:
	// bl 0x83020790
	sub_83020790(ctx, base);
loc_83023FD0:
	// stw r3,16(r29)
	PPC_STORE_U32(r29.u32 + 16, ctx.r3.u32);
loc_83023FD4:
	// li r25,1
	r25.s64 = 1;
loc_83023FD8:
	// addi r26,r30,581
	r26.s64 = r30.s64 + 581;
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r19,0(r26)
	PPC_STORE_U8(r26.u32 + 0, r19.u8);
	// beq 0x83024040
	if (cr0.eq) goto loc_83024040;
	// lbz r11,128(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 128);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83024078
	if (!cr0.eq) goto loc_83024078;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830240c8
	if (cr0.eq) goto loc_830240C8;
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
	// lwz r11,476(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x830240c8
	if (!cr6.eq) goto loc_830240C8;
	// stb r11,0(r26)
	PPC_STORE_U8(r26.u32 + 0, r11.u8);
	// b 0x830240c8
	goto loc_830240C8;
loc_83024040:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x830240c8
	if (!cr0.eq) goto loc_830240C8;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8302406c
	if (!cr0.eq) goto loc_8302406C;
	// lwz r11,476(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8302406c
	if (!cr6.eq) goto loc_8302406C;
	// stb r11,0(r26)
	PPC_STORE_U8(r26.u32 + 0, r11.u8);
loc_8302406C:
	// lbz r11,128(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 128);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83024098
	if (cr0.eq) goto loc_83024098;
loc_83024078:
	// stb r19,16(r30)
	PPC_STORE_U8(r30.u32 + 16, r19.u8);
	// lwz r11,40(r14)
	r11.u64 = PPC_LOAD_U32(r14.u32 + 40);
	// lwz r10,32(r14)
	ctx.r10.u64 = PPC_LOAD_U32(r14.u32 + 32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,-4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// stb r19,32(r11)
	PPC_STORE_U8(r11.u32 + 32, r19.u8);
	// b 0x830240c8
	goto loc_830240C8;
loc_83024098:
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830240c8
	if (cr0.eq) goto loc_830240C8;
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
loc_830240C8:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// ori r10,r10,32808
	ctx.r10.u64 = ctx.r10.u64 | 32808;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x8301e3b0
	sub_8301E3B0(ctx, base);
	// lwz r11,40(r14)
	r11.u64 = PPC_LOAD_U32(r14.u32 + 40);
	// lwz r10,32(r14)
	ctx.r10.u64 = PPC_LOAD_U32(r14.u32 + 32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r25,129(r31)
	r25.u64 = PPC_LOAD_U8(r31.u32 + 129);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// mr r22,r25
	r22.u64 = r25.u64;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// lwz r11,-4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// stw r23,44(r11)
	PPC_STORE_U32(r11.u32 + 44, r23.u32);
	// beq cr6,0x8302413c
	if (cr6.eq) goto loc_8302413C;
	// lwz r11,184(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// lwz r10,476(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// stw r11,188(r30)
	PPC_STORE_U32(r30.u32 + 188, r11.u32);
	// bne cr6,0x8302413c
	if (!cr6.eq) goto loc_8302413C;
	// lwz r11,196(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8302413c
	if (!cr6.eq) goto loc_8302413C;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// stw r3,196(r30)
	PPC_STORE_U32(r30.u32 + 196, ctx.r3.u32);
loc_8302413C:
	// lwz r11,476(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83024180
	if (!cr6.eq) goto loc_83024180;
	// lwz r11,112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83024180
	if (cr6.eq) goto loc_83024180;
	// lwz r11,584(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 584);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,584(r30)
	PPC_STORE_U32(r30.u32 + 584, r11.u32);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8302417c
	if (cr0.eq) goto loc_8302417C;
	// stw r11,592(r30)
	PPC_STORE_U32(r30.u32 + 592, r11.u32);
	// b 0x83024180
	goto loc_83024180;
loc_8302417C:
	// stw r11,588(r30)
	PPC_STORE_U32(r30.u32 + 588, r11.u32);
loc_83024180:
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830241d8
	if (cr0.eq) goto loc_830241D8;
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
	// beq 0x830241d8
	if (cr0.eq) goto loc_830241D8;
	// lwz r11,168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// lbz r11,100(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 100);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830241d8
	if (cr0.eq) goto loc_830241D8;
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r26)
	PPC_STORE_U8(r26.u32 + 0, r11.u8);
loc_830241D8:
	// lwz r11,476(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83024370
	if (!cr6.eq) goto loc_83024370;
	// lwz r11,4(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + 4);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// lwz r10,24(r16)
	ctx.r10.u64 = PPC_LOAD_U32(r16.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r19,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r19.u16);
	// lwz r4,24(r16)
	ctx.r4.u64 = PPC_LOAD_U32(r16.u32 + 24);
	// bl 0x8301f818
	sub_8301F818(ctx, base);
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83024238
	if (cr0.eq) goto loc_83024238;
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
	// beq 0x8302422c
	if (cr0.eq) goto loc_8302422C;
	// mr r11,r19
	r11.u64 = r19.u64;
	// b 0x8302423c
	goto loc_8302423C;
loc_8302422C:
	// bl 0x83020b18
	sub_83020B18(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8302423c
	goto loc_8302423C;
loc_83024238:
	// lwz r11,56(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 56);
loc_8302423C:
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83024330
	if (cr0.eq) goto loc_83024330;
	// lwz r28,36(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// addi r4,r31,140
	ctx.r4.s64 = r31.s64 + 140;
	// lwz r17,24(r11)
	r17.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// li r11,35
	r11.s64 = 35;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// sth r19,142(r31)
	PPC_STORE_U16(r31.u32 + 142, r19.u16);
	// sth r11,140(r31)
	PPC_STORE_U16(r31.u32 + 140, r11.u16);
	// bl 0x82fe2190
	sub_82FE2190(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83024330
	if (!cr0.eq) goto loc_83024330;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fda0f8
	sub_82FDA0F8(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// ble 0x83024330
	if (!cr0.gt) goto loc_83024330;
	// addi r4,r27,1
	ctx.r4.s64 = r27.s64 + 1;
	// lwz r5,216(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x82fe7278
	sub_82FE7278(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// lwz r10,232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r19,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r19.u16);
	// lwz r4,232(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// bl 0x83062430
	sub_83062430(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830242d4
	if (!cr0.eq) goto loc_830242D4;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x830242d8
	if (!cr0.eq) goto loc_830242D8;
loc_830242D4:
	// mr r11,r19
	r11.u64 = r19.u64;
loc_830242D8:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83024318
	if (cr0.eq) goto loc_83024318;
	// lbz r11,128(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 128);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83024318
	if (!cr0.eq) goto loc_83024318;
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,72
	ctx.r4.s64 = 72;
	// sthx r19,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r19.u16);
	// lwz r5,232(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// bl 0x8301f560
	sub_8301F560(ctx, base);
loc_83024318:
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// lwz r4,232(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83024330:
	// lwz r11,40(r14)
	r11.u64 = PPC_LOAD_U32(r14.u32 + 40);
	// lwz r10,32(r14)
	ctx.r10.u64 = PPC_LOAD_U32(r14.u32 + 32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r27,136(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,-4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// stw r17,36(r11)
	PPC_STORE_U32(r11.u32 + 36, r17.u32);
	// lwz r11,480(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 480);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x83024360
	if (cr6.lt) goto loc_83024360;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8301fb40
	sub_8301FB40(ctx, base);
loc_83024360:
	// lwz r11,484(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 484);
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r19,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r19.u32);
	// b 0x83024374
	goto loc_83024374;
loc_83024370:
	// lwz r27,136(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 136);
loc_83024374:
	// lwz r11,40(r14)
	r11.u64 = PPC_LOAD_U32(r14.u32 + 40);
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// lwz r10,32(r14)
	ctx.r10.u64 = PPC_LOAD_U32(r14.u32 + 32);
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
	// beq cr6,0x830243d0
	if (cr6.eq) goto loc_830243D0;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830243e8
	if (cr0.eq) goto loc_830243E8;
	// lwz r4,196(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x830243e8
	if (cr0.eq) goto loc_830243E8;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830243e8
	if (!cr0.eq) goto loc_830243E8;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// bl 0x8301f3f0
	sub_8301F3F0(ctx, base);
	// b 0x830243e8
	goto loc_830243E8;
loc_830243D0:
	// clrlwi. r11,r15,24
	r11.u64 = r15.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830243e8
	if (cr0.eq) goto loc_830243E8;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x8301e438
	sub_8301E438(ctx, base);
loc_830243E8:
	// lwz r11,112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83024408
	if (cr6.eq) goto loc_83024408;
	// lwz r11,476(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83024408
	if (!cr6.eq) goto loc_83024408;
	// lwz r11,564(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 564);
	// stw r19,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r19.u32);
loc_83024408:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r4,516(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 516);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,148(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// lwz r7,84(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// bl 0x83064218
	sub_83064218(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x83024438
	if (cr0.eq) goto loc_83024438;
	// lwz r3,556(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 556);
	// bl 0x8301ff70
	sub_8301FF70(ctx, base);
	// lwz r3,560(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 560);
	// bl 0x830778e0
	sub_830778E0(ctx, base);
loc_83024438:
	// lwz r11,184(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830244b4
	if (cr6.eq) goto loc_830244B4;
	// lwz r11,476(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x830244b4
	if (!cr6.eq) goto loc_830244B4;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83024478
	if (cr0.eq) goto loc_83024478;
	// lbz r11,20(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83024478
	if (cr0.eq) goto loc_83024478;
	// lwz r11,532(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 532);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x8302447c
	if (!cr6.eq) goto loc_8302447C;
loc_83024478:
	// mr r11,r19
	r11.u64 = r19.u64;
loc_8302447C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830244b4
	if (cr0.eq) goto loc_830244B4;
	// lwz r11,4(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 4);
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// lwz r10,24(r18)
	ctx.r10.u64 = PPC_LOAD_U32(r18.u32 + 24);
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// sthx r19,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r19.u16);
	// lwz r8,84(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// lwz r7,24(r18)
	ctx.r7.u64 = PPC_LOAD_U32(r18.u32 + 24);
	// lwz r3,532(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 532);
	// bl 0x8305c790
	sub_8305C790(ctx, base);
loc_830244B4:
	// lwz r11,92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83024500
	if (cr6.eq) goto loc_83024500;
	// lwz r11,4(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 4);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// lwz r7,24(r18)
	ctx.r7.u64 = PPC_LOAD_U32(r18.u32 + 24);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// sthx r19,r11,r7
	PPC_STORE_U16(r11.u32 + ctx.r7.u32, r19.u16);
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// lwz r7,84(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// lwz r6,24(r18)
	ctx.r6.u64 = PPC_LOAD_U32(r18.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83024500:
	// lwz r10,112(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8302455c
	if (cr0.eq) goto loc_8302455C;
	// lwz r11,476(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8302455c
	if (!cr6.eq) goto loc_8302455C;
	// lwz r3,192(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r28,0(r10)
	r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r24,564(r30)
	r24.u64 = PPC_LOAD_U32(r30.u32 + 564);
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
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8302455C:
	// lbz r11,130(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 130);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83024928
	if (cr0.eq) goto loc_83024928;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x8301e348
	sub_8301E348(ctx, base);
	// lwz r11,476(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// mr r27,r19
	r27.u64 = r19.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83024634
	if (!cr6.eq) goto loc_83024634;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83024628
	if (cr0.eq) goto loc_83024628;
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83024628
	if (cr0.eq) goto loc_83024628;
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
	// beq 0x830245c0
	if (cr0.eq) goto loc_830245C0;
	// mr r11,r19
	r11.u64 = r19.u64;
	// b 0x830245c8
	goto loc_830245C8;
loc_830245C0:
	// bl 0x83020b18
	sub_83020B18(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_830245C8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,600(r30)
	PPC_STORE_U32(r30.u32 + 600, r11.u32);
	// bne cr6,0x830245e4
	if (!cr6.eq) goto loc_830245E4;
	// lwz r11,168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// stw r11,596(r30)
	PPC_STORE_U32(r30.u32 + 596, r11.u32);
	// b 0x830245e8
	goto loc_830245E8;
loc_830245E4:
	// stw r19,596(r30)
	PPC_STORE_U32(r30.u32 + 596, r19.u32);
loc_830245E8:
	// lwz r11,112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83024634
	if (cr6.eq) goto loc_83024634;
	// lwz r11,168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r19,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, r19.u16);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// stw r3,604(r30)
	PPC_STORE_U32(r30.u32 + 604, ctx.r3.u32);
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83024634
	if (cr0.eq) goto loc_83024634;
	// b 0x83024630
	goto loc_83024630;
loc_83024628:
	// stw r19,596(r30)
	PPC_STORE_U32(r30.u32 + 596, r19.u32);
	// stw r19,600(r30)
	PPC_STORE_U32(r30.u32 + 600, r19.u32);
loc_83024630:
	// stw r19,604(r30)
	PPC_STORE_U32(r30.u32 + 604, r19.u32);
loc_83024634:
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83024778
	if (cr0.eq) goto loc_83024778;
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
	// blt 0x830246a4
	if (cr0.lt) goto loc_830246A4;
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
loc_830246A4:
	// lwz r11,476(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83024778
	if (!cr6.eq) goto loc_83024778;
	// lwz r11,168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// lbz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 100);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x830246cc
	if (cr0.eq) goto loc_830246CC;
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r26)
	PPC_STORE_U8(r26.u32 + 0, r11.u8);
	// b 0x83024720
	goto loc_83024720;
loc_830246CC:
	// lwz r10,112(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830246f0
	if (cr6.eq) goto loc_830246F0;
	// lbz r11,101(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 101);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stb r11,580(r30)
	PPC_STORE_U8(r30.u32 + 580, r11.u8);
	// beq 0x830246f0
	if (cr0.eq) goto loc_830246F0;
	// lwz r11,52(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// stw r11,604(r30)
	PPC_STORE_U32(r30.u32 + 604, r11.u32);
loc_830246F0:
	// lwz r11,596(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 596);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83024720
	if (cr0.eq) goto loc_83024720;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmpwi cr6,r11,25
	cr6.compare<int32_t>(r11.s32, 25, xer);
	// bne cr6,0x83024720
	if (!cr6.eq) goto loc_83024720;
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
loc_83024720:
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83024748
	if (cr0.eq) goto loc_83024748;
	// lbz r11,20(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83024748
	if (cr0.eq) goto loc_83024748;
	// lwz r11,532(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 532);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x8302474c
	if (!cr6.eq) goto loc_8302474C;
loc_83024748:
	// mr r11,r19
	r11.u64 = r19.u64;
loc_8302474C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83024778
	if (cr0.eq) goto loc_83024778;
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
	// sthx r19,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, r19.u16);
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lwz r3,532(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 532);
	// bl 0x8305c4f8
	sub_8305C4F8(ctx, base);
loc_83024778:
	// lwz r11,476(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x830247a0
	if (!cr6.eq) goto loc_830247A0;
	// lwz r11,112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830247a0
	if (cr6.eq) goto loc_830247A0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8301fc00
	sub_8301FC00(ctx, base);
loc_830247A0:
	// lwz r11,92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830247e0
	if (cr6.eq) goto loc_830247E0;
	// lwz r11,4(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 4);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// lwz r10,24(r18)
	ctx.r10.u64 = PPC_LOAD_U32(r18.u32 + 24);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// sthx r19,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r19.u16);
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// lwz r7,24(r18)
	ctx.r7.u64 = PPC_LOAD_U32(r18.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830247E0:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x830247f4
	if (cr6.eq) goto loc_830247F4;
	// lwz r11,428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// stb r19,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r19.u8);
	// b 0x83024a68
	goto loc_83024A68;
loc_830247F4:
	// lwz r11,40(r14)
	r11.u64 = PPC_LOAD_U32(r14.u32 + 40);
	// lwz r10,32(r14)
	ctx.r10.u64 = PPC_LOAD_U32(r14.u32 + 32);
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
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// stw r3,476(r30)
	PPC_STORE_U32(r30.u32 + 476, ctx.r3.u32);
	// bne cr6,0x83024888
	if (!cr6.eq) goto loc_83024888;
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
	// bne 0x83024888
	if (!cr0.eq) goto loc_83024888;
	// lbz r11,17(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 17);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83024880
	if (cr0.eq) goto loc_83024880;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r6,158
	ctx.r6.s64 = 158;
	// addi r4,r11,21464
	ctx.r4.s64 = r11.s64 + 21464;
	// li r5,2881
	ctx.r5.s64 = 2881;
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
loc_83024880:
	// lwz r11,524(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 524);
	// b 0x830248ec
	goto loc_830248EC;
loc_83024888:
	// lwz r11,476(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x830248f0
	if (!cr6.eq) goto loc_830248F0;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
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
	// bne 0x830248f0
	if (!cr0.eq) goto loc_830248F0;
	// lbz r11,17(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 17);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830248e8
	if (cr0.eq) goto loc_830248E8;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r6,44
	ctx.r6.s64 = 44;
	// addi r4,r11,21464
	ctx.r4.s64 = r11.s64 + 21464;
	// li r5,2888
	ctx.r5.s64 = 2888;
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
loc_830248E8:
	// lwz r11,520(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 520);
loc_830248EC:
	// stw r11,168(r30)
	PPC_STORE_U32(r30.u32 + 168, r11.u32);
loc_830248F0:
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// lwz r4,184(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,40(r14)
	r11.u64 = PPC_LOAD_U32(r14.u32 + 40);
	// lwz r10,32(r14)
	ctx.r10.u64 = PPC_LOAD_U32(r14.u32 + 32);
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
	// b 0x83024a68
	goto loc_83024A68;
loc_83024928:
	// lwz r11,476(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83024a68
	if (!cr6.eq) goto loc_83024A68;
	// lwz r11,112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83024a5c
	if (cr6.eq) goto loc_83024A5C;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// mr r28,r19
	r28.u64 = r19.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830249a8
	if (cr0.eq) goto loc_830249A8;
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830249a8
	if (cr0.eq) goto loc_830249A8;
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
	// bne 0x8302498c
	if (!cr0.eq) goto loc_8302498C;
	// bl 0x83020b18
	sub_83020B18(ctx, base);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne 0x8302499c
	if (!cr0.eq) goto loc_8302499C;
loc_8302498C:
	// lwz r11,168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// lwz r4,40(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x830249a8
	if (cr0.eq) goto loc_830249A8;
loc_8302499C:
	// lwz r3,568(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 568);
	// bl 0x83015c80
	sub_83015C80(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_830249A8:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830249d0
	if (cr0.eq) goto loc_830249D0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,568(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 568);
	// bl 0x83015c80
	sub_83015C80(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// b 0x830249d4
	goto loc_830249D4;
loc_830249D0:
	// mr r8,r19
	ctx.r8.u64 = r19.u64;
loc_830249D4:
	// lwz r3,568(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 568);
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
	// stw r19,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r19.u32);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r3,572(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 572);
	// lbz r7,101(r7)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + 101);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r19,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r19.u32);
	// stw r19,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r19.u32);
	// bl 0x8305c008
	sub_8305C008(ctx, base);
	// lwz r10,112(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// lwz r3,192(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r27,572(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 572);
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
loc_83024A5C:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,576(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 576);
	// bl 0x83020b78
	sub_83020B78(ctx, base);
loc_83024A68:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83024A6C:
	// addi r1,r31,400
	ctx.r1.s64 = r31.s64 + 400;
	// b 0x831b0b40
	return;
}

__attribute__((alias("__imp__sub_83024A74"))) PPC_WEAK_FUNC(sub_83024A74);
PPC_FUNC_IMPL(__imp__sub_83024A74) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-400
	r31.s64 = r12.s64 + -400;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
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

__attribute__((alias("__imp__sub_83024A9C"))) PPC_WEAK_FUNC(sub_83024A9C);
PPC_FUNC_IMPL(__imp__sub_83024A9C) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,420(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 420);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 140);
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

__attribute__((alias("__imp__sub_83024ACC"))) PPC_WEAK_FUNC(sub_83024ACC);
PPC_FUNC_IMPL(__imp__sub_83024ACC) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,420(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 420);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 140);
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

__attribute__((alias("__imp__sub_83024AFC"))) PPC_WEAK_FUNC(sub_83024AFC);
PPC_FUNC_IMPL(__imp__sub_83024AFC) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,420(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 420);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 140);
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

__attribute__((alias("__imp__sub_83024B2C"))) PPC_WEAK_FUNC(sub_83024B2C);
PPC_FUNC_IMPL(__imp__sub_83024B2C) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,420(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 420);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 140);
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

__attribute__((alias("__imp__sub_83024B5C"))) PPC_WEAK_FUNC(sub_83024B5C);
PPC_FUNC_IMPL(__imp__sub_83024B5C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-400
	r31.s64 = r12.s64 + -400;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
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

__attribute__((alias("__imp__sub_83024B90"))) PPC_WEAK_FUNC(sub_83024B90);
PPC_FUNC_IMPL(__imp__sub_83024B90) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r3,520(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 520);
	// stw r30,308(r31)
	PPC_STORE_U32(r31.u32 + 308, r30.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,17(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 17);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83024be4
	if (cr0.eq) goto loc_83024BE4;
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
loc_83024BE4:
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
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
	// bne 0x83024c4c
	if (!cr0.eq) goto loc_83024C4C;
	// lbz r11,17(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 17);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83024c44
	if (cr0.eq) goto loc_83024C44;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83024c44
	if (cr0.eq) goto loc_83024C44;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r6,44
	ctx.r6.s64 = 44;
	// addi r4,r11,21464
	ctx.r4.s64 = r11.s64 + 21464;
	// li r5,3165
	ctx.r5.s64 = 3165;
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
loc_83024C44:
	// lwz r11,520(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 520);
	// stw r11,168(r30)
	PPC_STORE_U32(r30.u32 + 168, r11.u32);
loc_83024C4C:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,176(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// addi r26,r11,-27796
	r26.s64 = r11.s64 + -27796;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82feeed8
	sub_82FEEED8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,528(r30)
	PPC_STORE_U32(r30.u32 + 528, ctx.r3.u32);
	// beq 0x83024c80
	if (cr0.eq) goto loc_83024C80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83024cb8
	goto loc_83024CB8;
loc_83024C80:
	// li r3,36
	ctx.r3.s64 = 36;
	// lwz r4,180(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83024ca8
	if (cr0.eq) goto loc_83024CA8;
	// lwz r4,180(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// bl 0x83059550
	sub_83059550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83024cac
	goto loc_83024CAC;
loc_83024CA8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_83024CAC:
	// lwz r3,176(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// stw r4,528(r30)
	PPC_STORE_U32(r30.u32 + 528, ctx.r4.u32);
	// bl 0x82fef120
	sub_82FEF120(ctx, base);
loc_83024CB8:
	// lwz r3,528(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 528);
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
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83024d0c
	if (cr0.eq) goto loc_83024D0C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83024D0C:
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83024d28
	if (cr0.eq) goto loc_83024D28;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83024D28:
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83024d44
	if (cr0.eq) goto loc_83024D44;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83024D44:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8301fa40
	sub_8301FA40(ctx, base);
	// lwz r3,540(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 540);
	// bl 0x83022d30
	sub_83022D30(ctx, base);
	// clrlwi. r24,r28,24
	r24.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// beq 0x83024df4
	if (cr0.eq) goto loc_83024DF4;
	// lwz r11,176(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r28,4(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r27,0(r28)
	r27.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,176(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
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
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,176(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// bl 0x82fef1e8
	sub_82FEF1E8(ctx, base);
	// lwz r3,184(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
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
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,184(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// lwz r3,176(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// bl 0x82fef120
	sub_82FEF120(ctx, base);
loc_83024DF4:
	// addi r25,r30,124
	r25.s64 = r30.s64 + 124;
	// lbz r9,9(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 9);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82ff5178
	sub_82FF5178(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// bne 0x83024ed0
	if (!cr0.eq) goto loc_83024ED0;
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
	// lwz r30,216(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// beq 0x83024e90
	if (cr0.eq) goto loc_83024E90;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r4,r11,21464
	ctx.r4.s64 = r11.s64 + 21464;
	// li r6,76
	ctx.r6.s64 = 76;
	// li r5,3222
	ctx.r5.s64 = 3222;
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
loc_83024E90:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r4,r11,21464
	ctx.r4.s64 = r11.s64 + 21464;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,3224
	ctx.r5.s64 = 3224;
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
loc_83024ED0:
	// li r11,68
	r11.s64 = 68;
	// lwz r4,180(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// li r10,84
	ctx.r10.s64 = 84;
	// li r3,44
	ctx.r3.s64 = 44;
	// sth r11,104(r31)
	PPC_STORE_U16(r31.u32 + 104, r11.u16);
	// sth r11,108(r31)
	PPC_STORE_U16(r31.u32 + 108, r11.u16);
	// li r11,0
	r11.s64 = 0;
	// sth r10,106(r31)
	PPC_STORE_U16(r31.u32 + 106, ctx.r10.u16);
	// sth r11,110(r31)
	PPC_STORE_U16(r31.u32 + 110, r11.u16);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83024f1c
	if (cr0.eq) goto loc_83024F1C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,180(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// bl 0x8301f968
	sub_8301F968(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x83024f20
	goto loc_83024F20;
loc_83024F1C:
	// li r28,0
	r28.s64 = 0;
loc_83024F20:
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8301f900
	sub_8301F900(ctx, base);
	// stw r28,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r28.u32);
	// lis r11,2
	r11.s64 = 131072;
	// li r26,1
	r26.s64 = 1;
	// ori r11,r11,32841
	r11.u64 = r11.u64 | 32841;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stbx r26,r27,r11
	PPC_STORE_U8(r27.u32 + r11.u32, r26.u8);
	// bl 0x82ff65e8
	sub_82FF65E8(ctx, base);
	// lwz r11,96(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8302501c
	if (cr6.eq) goto loc_8302501C;
	// li r3,48
	ctx.r3.s64 = 48;
	// lwz r4,180(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83024fa4
	if (cr0.eq) goto loc_83024FA4;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r7,180(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// lwz r5,40(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// bl 0x8306c8b8
	sub_8306C8B8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x83024fa8
	goto loc_83024FA8;
loc_83024FA4:
	// li r28,0
	r28.s64 = 0;
loc_83024FA8:
	// li r11,4
	r11.s64 = 4;
	// stw r28,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r28.u32);
	// stb r26,20(r28)
	PPC_STORE_U8(r28.u32 + 20, r26.u8);
	// stw r11,12(r28)
	PPC_STORE_U32(r28.u32 + 12, r11.u32);
	// lwz r11,96(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r27,0(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
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
loc_8302501C:
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// lwz r6,180(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// lwz r5,96(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// lwz r4,184(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// bl 0x83068bb0
	sub_83068BB0(ctx, base);
	// addi r6,r30,220
	ctx.r6.s64 = r30.s64 + 220;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x830666d8
	sub_830666D8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x8306b508
	sub_8306B508(ctx, base);
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83025080
	if (cr0.eq) goto loc_83025080;
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
loc_83025080:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x83025090
	if (cr6.eq) goto loc_83025090;
	// lwz r3,176(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// bl 0x82fef530
	sub_82FEF530(ctx, base);
loc_83025090:
	// lwz r30,528(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 528);
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x8306b450
	sub_8306B450(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,288
	ctx.r1.s64 = r31.s64 + 288;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_830250B4"))) PPC_WEAK_FUNC(sub_830250B4);
PPC_FUNC_IMPL(__imp__sub_830250B4) {
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

__attribute__((alias("__imp__sub_830250E4"))) PPC_WEAK_FUNC(sub_830250E4);
PPC_FUNC_IMPL(__imp__sub_830250E4) {
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

__attribute__((alias("__imp__sub_83025114"))) PPC_WEAK_FUNC(sub_83025114);
PPC_FUNC_IMPL(__imp__sub_83025114) {
	PPC_FUNC_PROLOGUE();
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

__attribute__((alias("__imp__sub_8302513C"))) PPC_WEAK_FUNC(sub_8302513C);
PPC_FUNC_IMPL(__imp__sub_8302513C) {
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

__attribute__((alias("__imp__sub_8302516C"))) PPC_WEAK_FUNC(sub_8302516C);
PPC_FUNC_IMPL(__imp__sub_8302516C) {
	PPC_FUNC_PROLOGUE();
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

__attribute__((alias("__imp__sub_83025194"))) PPC_WEAK_FUNC(sub_83025194);
PPC_FUNC_IMPL(__imp__sub_83025194) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x8306b450
	sub_8306B450(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830251C0"))) PPC_WEAK_FUNC(sub_830251C0);
PPC_FUNC_IMPL(__imp__sub_830251C0) {
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
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83022d30
	sub_83022D30(ctx, base);
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

__attribute__((alias("__imp__sub_83025228"))) PPC_WEAK_FUNC(sub_83025228);
PPC_FUNC_IMPL(__imp__sub_83025228) {
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
	// bne 0x83025280
	if (!cr0.eq) goto loc_83025280;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r6,78
	ctx.r6.s64 = 78;
	// addi r4,r11,21464
	ctx.r4.s64 = r11.s64 + 21464;
	// li r5,308
	ctx.r5.s64 = 308;
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
loc_83025280:
	// li r29,1
	r29.s64 = 1;
	// stb r29,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r29.u8);
loc_83025288:
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
	// bne cr6,0x830252d0
	if (!cr6.eq) goto loc_830252D0;
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
	// b 0x830254e8
	goto loc_830254E8;
loc_830252D0:
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x8302535c
	if (!cr6.eq) goto loc_8302535C;
	// lwz r11,440(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 440);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83025354
	if (!cr0.eq) goto loc_83025354;
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
loc_83025354:
	// li r29,0
	r29.s64 = 0;
	// b 0x830254fc
	goto loc_830254FC;
loc_8302535C:
	// li r11,1
	r11.s64 = 1;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stb r11,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r11.u8);
	// beq cr6,0x830253e8
	if (cr6.eq) goto loc_830253E8;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x830253dc
	if (cr6.eq) goto loc_830253DC;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x830253cc
	if (cr6.eq) goto loc_830253CC;
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// beq cr6,0x830253c0
	if (cr6.eq) goto loc_830253C0;
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// beq cr6,0x8302539c
	if (cr6.eq) goto loc_8302539C;
	// li r4,60
	ctx.r4.s64 = 60;
	// addi r3,r30,124
	ctx.r3.s64 = r30.s64 + 124;
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
	// b 0x8302542c
	goto loc_8302542C;
loc_8302539C:
	// lbz r11,10(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 10);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830253b8
	if (cr0.eq) goto loc_830253B8;
	// bl 0x83023498
	sub_83023498(ctx, base);
	// b 0x8302542c
	goto loc_8302542C;
loc_830253B8:
	// bl 0x83022018
	sub_83022018(ctx, base);
	// b 0x8302542c
	goto loc_8302542C;
loc_830253C0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0ca8
	sub_82FF0CA8(ctx, base);
	// b 0x8302542c
	goto loc_8302542C;
loc_830253CC:
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83022dc8
	sub_83022DC8(ctx, base);
	// b 0x8302542c
	goto loc_8302542C;
loc_830253DC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff1d50
	sub_82FF1D50(ctx, base);
	// b 0x8302542c
	goto loc_8302542C;
loc_830253E8:
	// lwz r11,440(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 440);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83025418
	if (cr0.eq) goto loc_83025418;
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
loc_83025418:
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
loc_8302542C:
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
	// beq cr6,0x8302547c
	if (cr6.eq) goto loc_8302547C;
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
loc_8302547C:
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830254fc
	if (!cr0.eq) goto loc_830254FC;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830254b0
	if (cr0.eq) goto loc_830254B0;
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
loc_830254B0:
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
	// beq 0x830254fc
	if (cr0.eq) goto loc_830254FC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830254E8:
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
loc_830254FC:
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8302550c
	if (!cr0.eq) goto loc_8302550C;
	// addi r3,r30,124
	ctx.r3.s64 = r30.s64 + 124;
	// bl 0x82ff5aa8
	sub_82FF5AA8(ctx, base);
loc_8302550C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x8302552c
	goto loc_8302552C;
	// lwz r30,180(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// lbz r29,80(r31)
	r29.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// b 0x83025288
	goto loc_83025288;
	// b 0x83025528
	goto loc_83025528;
	// b 0x83025528
	goto loc_83025528;
loc_83025528:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8302552C:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8302553C"))) PPC_WEAK_FUNC(sub_8302553C);
PPC_FUNC_IMPL(__imp__sub_8302553C) {
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
	// beq 0x83025588
	if (cr0.eq) goto loc_83025588;
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
loc_83025588:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31998
	ctx.r3.s64 = -2097020928;
	// addi r3,r3,21780
	ctx.r3.s64 = ctx.r3.s64 + 21780;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830255A8"))) PPC_WEAK_FUNC(sub_830255A8);
PPC_FUNC_IMPL(__imp__sub_830255A8) {
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

__attribute__((alias("__imp__sub_830255C8"))) PPC_WEAK_FUNC(sub_830255C8);
PPC_FUNC_IMPL(__imp__sub_830255C8) {
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

__attribute__((alias("__imp__sub_830255F8"))) PPC_WEAK_FUNC(sub_830255F8);
PPC_FUNC_IMPL(__imp__sub_830255F8) {
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
	// lis r3,-31998
	ctx.r3.s64 = -2097020928;
	// addi r3,r3,21792
	ctx.r3.s64 = ctx.r3.s64 + 21792;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83025634"))) PPC_WEAK_FUNC(sub_83025634);
PPC_FUNC_IMPL(__imp__sub_83025634) {
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
	// lis r3,-31998
	ctx.r3.s64 = -2097020928;
	// addi r3,r3,21796
	ctx.r3.s64 = ctx.r3.s64 + 21796;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83025670"))) PPC_WEAK_FUNC(sub_83025670);
PPC_FUNC_IMPL(__imp__sub_83025670) {
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
	// bne 0x830256d0
	if (!cr0.eq) goto loc_830256D0;
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
	// b 0x83025730
	goto loc_83025730;
loc_830256D0:
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
	// blt cr6,0x83025710
	if (cr6.lt) goto loc_83025710;
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
	// b 0x83025730
	goto loc_83025730;
loc_83025710:
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
loc_83025730:
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
	// lis r3,-31998
	ctx.r3.s64 = -2097020928;
	// addi r3,r3,21800
	ctx.r3.s64 = ctx.r3.s64 + 21800;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83025770"))) PPC_WEAK_FUNC(sub_83025770);
PPC_FUNC_IMPL(__imp__sub_83025770) {
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

__attribute__((alias("__imp__sub_83025790"))) PPC_WEAK_FUNC(sub_83025790);
PPC_FUNC_IMPL(__imp__sub_83025790) {
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

__attribute__((alias("__imp__sub_830257C0"))) PPC_WEAK_FUNC(sub_830257C0);
PPC_FUNC_IMPL(__imp__sub_830257C0) {
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
loc_830257F0:
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830259a4
	if (cr0.eq) goto loc_830259A4;
loc_830257FC:
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830259a0
	if (cr0.eq) goto loc_830259A0;
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
	// bne cr6,0x83025840
	if (!cr6.eq) goto loc_83025840;
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
	// b 0x830257fc
	goto loc_830257FC;
loc_83025840:
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x8302589c
	if (!cr6.eq) goto loc_8302589C;
	// lwz r11,440(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 440);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83025894
	if (!cr0.eq) goto loc_83025894;
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
loc_83025894:
	// stb r29,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r29.u8);
	// b 0x830257fc
	goto loc_830257FC;
loc_8302589C:
	// li r11,1
	r11.s64 = 1;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stb r11,81(r31)
	PPC_STORE_U8(r31.u32 + 81, r11.u8);
	// beq cr6,0x83025928
	if (cr6.eq) goto loc_83025928;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x8302591c
	if (cr6.eq) goto loc_8302591C;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x8302590c
	if (cr6.eq) goto loc_8302590C;
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// beq cr6,0x83025900
	if (cr6.eq) goto loc_83025900;
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// beq cr6,0x830258dc
	if (cr6.eq) goto loc_830258DC;
	// li r4,60
	ctx.r4.s64 = 60;
	// addi r3,r30,124
	ctx.r3.s64 = r30.s64 + 124;
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
	// b 0x8302595c
	goto loc_8302595C;
loc_830258DC:
	// lbz r11,10(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 10);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830258f8
	if (cr0.eq) goto loc_830258F8;
	// bl 0x83023498
	sub_83023498(ctx, base);
	// b 0x8302595c
	goto loc_8302595C;
loc_830258F8:
	// bl 0x83022018
	sub_83022018(ctx, base);
	// b 0x8302595c
	goto loc_8302595C;
loc_83025900:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0ca8
	sub_82FF0CA8(ctx, base);
	// b 0x8302595c
	goto loc_8302595C;
loc_8302590C:
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83022dc8
	sub_83022DC8(ctx, base);
	// b 0x8302595c
	goto loc_8302595C;
loc_8302591C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff1d50
	sub_82FF1D50(ctx, base);
	// b 0x8302595c
	goto loc_8302595C;
loc_83025928:
	// lwz r11,440(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 440);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83025948
	if (cr0.eq) goto loc_83025948;
	// li r4,280
	ctx.r4.s64 = 280;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83025948:
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
loc_8302595C:
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
	// beq cr6,0x8302598c
	if (cr6.eq) goto loc_8302598C;
	// li r4,231
	ctx.r4.s64 = 231;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8302598C:
	// stb r29,81(r31)
	PPC_STORE_U8(r31.u32 + 81, r29.u8);
	// b 0x830257fc
	goto loc_830257FC;
	// lwz r30,148(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// li r29,0
	r29.s64 = 0;
	// b 0x830257f0
	goto loc_830257F0;
loc_830259A0:
	// b 0x830257f0
	goto loc_830257F0;
loc_830259A4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830259B8"))) PPC_WEAK_FUNC(sub_830259B8);
PPC_FUNC_IMPL(__imp__sub_830259B8) {
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
	// beq 0x830259e8
	if (cr0.eq) goto loc_830259E8;
	// lwz r30,148(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// li r4,231
	ctx.r4.s64 = 231;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// b 0x830259ec
	goto loc_830259EC;
loc_830259E8:
	// lwz r30,148(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 148);
loc_830259EC:
	// lwz r11,92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83025a14
	if (cr6.eq) goto loc_83025A14;
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
loc_83025A14:
	// li r11,0
	r11.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31998
	ctx.r3.s64 = -2097020928;
	// addi r3,r3,22932
	ctx.r3.s64 = ctx.r3.s64 + 22932;
	// stb r11,81(r31)
	PPC_STORE_U8(r31.u32 + 81, r11.u8);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83025A40"))) PPC_WEAK_FUNC(sub_83025A40);
PPC_FUNC_IMPL(__imp__sub_83025A40) {
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
	// bne cr6,0x83025ab4
	if (!cr6.eq) goto loc_83025AB4;
	// li r11,1
	r11.s64 = 1;
	// stb r11,16(r30)
	PPC_STORE_U8(r30.u32 + 16, r11.u8);
loc_83025AB4:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r29,13(r30)
	PPC_STORE_U8(r30.u32 + 13, r29.u8);
	// extsh r11,r27
	r11.s64 = r27.s16;
	// stb r29,14(r30)
	PPC_STORE_U8(r30.u32 + 14, r29.u8);
	// stw r29,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r29.u32);
	// stb r29,472(r30)
	PPC_STORE_U8(r30.u32 + 472, r29.u8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// stb r10,15(r30)
	PPC_STORE_U8(r30.u32 + 15, ctx.r10.u8);
	// bne cr6,0x83025aec
	if (!cr6.eq) goto loc_83025AEC;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830618f0
	sub_830618F0(ctx, base);
	// b 0x83025b04
	goto loc_83025B04;
loc_83025AEC:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83025b1c
	if (!cr6.eq) goto loc_83025B1C;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83024b90
	sub_83024B90(ctx, base);
loc_83025B04:
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
loc_83025B1C:
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
	// b 0x83025b44
	goto loc_83025B44;
	// b 0x83025b44
	goto loc_83025B44;
	// b 0x83025b44
	goto loc_83025B44;
loc_83025B44:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83025B58"))) PPC_WEAK_FUNC(sub_83025B58);
PPC_FUNC_IMPL(__imp__sub_83025B58) {
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

__attribute__((alias("__imp__sub_83025B78"))) PPC_WEAK_FUNC(sub_83025B78);
PPC_FUNC_IMPL(__imp__sub_83025B78) {
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

__attribute__((alias("__imp__sub_83025BA8"))) PPC_WEAK_FUNC(sub_83025BA8);
PPC_FUNC_IMPL(__imp__sub_83025BA8) {
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
	// lis r3,-31998
	ctx.r3.s64 = -2097020928;
	// addi r3,r3,23356
	ctx.r3.s64 = ctx.r3.s64 + 23356;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83025BE4"))) PPC_WEAK_FUNC(sub_83025BE4);
PPC_FUNC_IMPL(__imp__sub_83025BE4) {
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
	// lis r3,-31998
	ctx.r3.s64 = -2097020928;
	// addi r3,r3,23360
	ctx.r3.s64 = ctx.r3.s64 + 23360;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83025C20"))) PPC_WEAK_FUNC(sub_83025C20);
PPC_FUNC_IMPL(__imp__sub_83025C20) {
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
	// bne 0x83025c6c
	if (!cr0.eq) goto loc_83025C6C;
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
	// b 0x83025cd8
	goto loc_83025CD8;
loc_83025C6C:
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
	// blt cr6,0x83025cac
	if (cr6.lt) goto loc_83025CAC;
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
	// b 0x83025ccc
	goto loc_83025CCC;
loc_83025CAC:
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
loc_83025CCC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
loc_83025CD8:
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
	// lis r3,-31998
	ctx.r3.s64 = -2097020928;
	// addi r3,r3,23364
	ctx.r3.s64 = ctx.r3.s64 + 23364;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83025D0C"))) PPC_WEAK_FUNC(sub_83025D0C);
PPC_FUNC_IMPL(__imp__sub_83025D0C) {
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

__attribute__((alias("__imp__sub_83025D2C"))) PPC_WEAK_FUNC(sub_83025D2C);
PPC_FUNC_IMPL(__imp__sub_83025D2C) {
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

__attribute__((alias("__imp__sub_83025D60"))) PPC_WEAK_FUNC(sub_83025D60);
PPC_FUNC_IMPL(__imp__sub_83025D60) {
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
	// beq 0x83025de0
	if (cr0.eq) goto loc_83025DE0;
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
loc_83025DE0:
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
	// beq 0x83025e34
	if (cr0.eq) goto loc_83025E34;
	// li r4,279
	ctx.r4.s64 = 279;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// b 0x83025ea8
	goto loc_83025EA8;
loc_83025E34:
	// bl 0x830257c0
	sub_830257C0(ctx, base);
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
	// beq 0x83025ebc
	if (cr0.eq) goto loc_83025EBC;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83025e7c
	if (cr0.eq) goto loc_83025E7C;
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
loc_83025E7C:
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
	// bne 0x83025ebc
	if (!cr0.eq) goto loc_83025EBC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff2b28
	sub_82FF2B28(ctx, base);
loc_83025EA8:
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
loc_83025EBC:
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83025eec
	if (cr0.eq) goto loc_83025EEC;
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
loc_83025EEC:
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
	// b 0x83025f14
	goto loc_83025F14;
	// b 0x83025f14
	goto loc_83025F14;
	// b 0x83025f14
	goto loc_83025F14;
loc_83025F14:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83025F24"))) PPC_WEAK_FUNC(sub_83025F24);
PPC_FUNC_IMPL(__imp__sub_83025F24) {
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

__attribute__((alias("__imp__sub_83025F44"))) PPC_WEAK_FUNC(sub_83025F44);
PPC_FUNC_IMPL(__imp__sub_83025F44) {
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

__attribute__((alias("__imp__sub_83025F74"))) PPC_WEAK_FUNC(sub_83025F74);
PPC_FUNC_IMPL(__imp__sub_83025F74) {
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
	// lis r3,-31998
	ctx.r3.s64 = -2097020928;
	// addi r3,r3,24332
	ctx.r3.s64 = ctx.r3.s64 + 24332;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83025FB0"))) PPC_WEAK_FUNC(sub_83025FB0);
PPC_FUNC_IMPL(__imp__sub_83025FB0) {
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
	// lis r3,-31998
	ctx.r3.s64 = -2097020928;
	// addi r3,r3,24336
	ctx.r3.s64 = ctx.r3.s64 + 24336;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83025FEC"))) PPC_WEAK_FUNC(sub_83025FEC);
PPC_FUNC_IMPL(__imp__sub_83025FEC) {
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
	// bne 0x8302604c
	if (!cr0.eq) goto loc_8302604C;
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
	// b 0x830260ac
	goto loc_830260AC;
loc_8302604C:
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
	// blt cr6,0x8302608c
	if (cr6.lt) goto loc_8302608C;
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
	// b 0x830260ac
	goto loc_830260AC;
loc_8302608C:
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
loc_830260AC:
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
	// lis r3,-31998
	ctx.r3.s64 = -2097020928;
	// addi r3,r3,24340
	ctx.r3.s64 = ctx.r3.s64 + 24340;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830260EC"))) PPC_WEAK_FUNC(sub_830260EC);
PPC_FUNC_IMPL(__imp__sub_830260EC) {
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

__attribute__((alias("__imp__sub_8302610C"))) PPC_WEAK_FUNC(sub_8302610C);
PPC_FUNC_IMPL(__imp__sub_8302610C) {
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

__attribute__((alias("__imp__sub_83026138"))) PPC_WEAK_FUNC(sub_83026138);
PPC_FUNC_IMPL(__imp__sub_83026138) {
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
	// lwz r3,516(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 516);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83026188
	if (cr0.eq) goto loc_83026188;
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
loc_83026188:
	// lwz r3,520(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 520);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830261a8
	if (cr0.eq) goto loc_830261A8;
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
loc_830261A8:
	// lwz r3,524(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 524);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830261c8
	if (cr0.eq) goto loc_830261C8;
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
loc_830261C8:
	// lwz r3,532(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 532);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830261e8
	if (cr0.eq) goto loc_830261E8;
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
loc_830261E8:
	// lwz r3,536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 536);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830261fc
	if (cr0.eq) goto loc_830261FC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82fdeaa8
	sub_82FDEAA8(ctx, base);
loc_830261FC:
	// lwz r30,540(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 540);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x83026218
	if (cr0.eq) goto loc_83026218;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830251c0
	sub_830251C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_83026218:
	// lwz r30,544(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 544);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x83026234
	if (cr0.eq) goto loc_83026234;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83015b18
	sub_83015B18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_83026234:
	// lwz r30,552(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 552);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x83026250
	if (cr0.eq) goto loc_83026250;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83020900
	sub_83020900(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_83026250:
	// lwz r30,556(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 556);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x8302626c
	if (cr0.eq) goto loc_8302626C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83020900
	sub_83020900(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_8302626C:
	// lwz r30,560(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 560);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x83026288
	if (cr0.eq) goto loc_83026288;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8307cbb8
	sub_8307CBB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_83026288:
	// lwz r30,564(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 564);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x830262a4
	if (cr0.eq) goto loc_830262A4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8301faa0
	sub_8301FAA0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_830262A4:
	// lwz r3,572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 572);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830262c4
	if (cr0.eq) goto loc_830262C4;
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
loc_830262C4:
	// lwz r3,576(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 576);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830262d8
	if (cr0.eq) goto loc_830262D8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82fdeaa8
	sub_82FDEAA8(ctx, base);
loc_830262D8:
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

__attribute__((alias("__imp__sub_830262F8"))) PPC_WEAK_FUNC(sub_830262F8);
PPC_FUNC_IMPL(__imp__sub_830262F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// bl 0x82ff3818
	sub_82FF3818(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r29,0
	r29.s64 = 0;
	// addi r11,r11,23976
	r11.s64 = r11.s64 + 23976;
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
	// stw r29,524(r30)
	PPC_STORE_U32(r30.u32 + 524, r29.u32);
	// stw r29,528(r30)
	PPC_STORE_U32(r30.u32 + 528, r29.u32);
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
	// stw r29,568(r30)
	PPC_STORE_U32(r30.u32 + 568, r29.u32);
	// stw r29,572(r30)
	PPC_STORE_U32(r30.u32 + 572, r29.u32);
	// stw r29,576(r30)
	PPC_STORE_U32(r30.u32 + 576, r29.u32);
	// stw r29,520(r30)
	PPC_STORE_U32(r30.u32 + 520, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83020bd8
	sub_83020BD8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x830263bc
	if (!cr6.eq) goto loc_830263BC;
	// lwz r11,520(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 520);
	// stw r11,168(r30)
	PPC_STORE_U32(r30.u32 + 168, r11.u32);
loc_830263BC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_830263D0"))) PPC_WEAK_FUNC(sub_830263D0);
PPC_FUNC_IMPL(__imp__sub_830263D0) {
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

__attribute__((alias("__imp__sub_830263F0"))) PPC_WEAK_FUNC(sub_830263F0);
PPC_FUNC_IMPL(__imp__sub_830263F0) {
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
	// bl 0x83026138
	sub_83026138(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_83026414"))) PPC_WEAK_FUNC(sub_83026414);
PPC_FUNC_IMPL(__imp__sub_83026414) {
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

__attribute__((alias("__imp__sub_8302643C"))) PPC_WEAK_FUNC(sub_8302643C);
PPC_FUNC_IMPL(__imp__sub_8302643C) {
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

__attribute__((alias("__imp__sub_83026468"))) PPC_WEAK_FUNC(sub_83026468);
PPC_FUNC_IMPL(__imp__sub_83026468) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r3,r11,-27708
	ctx.r3.s64 = r11.s64 + -27708;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83026480"))) PPC_WEAK_FUNC(sub_83026480);
PPC_FUNC_IMPL(__imp__sub_83026480) {
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
	// addi r11,r11,23976
	r11.s64 = r11.s64 + 23976;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x83026138
	sub_83026138(ctx, base);
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

__attribute__((alias("__imp__sub_830264E8"))) PPC_WEAK_FUNC(sub_830264E8);
PPC_FUNC_IMPL(__imp__sub_830264E8) {
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

__attribute__((alias("__imp__sub_83026510"))) PPC_WEAK_FUNC(sub_83026510);
PPC_FUNC_IMPL(__imp__sub_83026510) {
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

__attribute__((alias("__imp__sub_83026540"))) PPC_WEAK_FUNC(sub_83026540);
PPC_FUNC_IMPL(__imp__sub_83026540) {
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
	// bl 0x83026480
	sub_83026480(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83026570
	if (cr0.eq) goto loc_83026570;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_83026570:
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

__attribute__((alias("__imp__sub_83026590"))) PPC_WEAK_FUNC(sub_83026590);
PPC_FUNC_IMPL(__imp__sub_83026590) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addis r8,r11,1
	ctx.r8.s64 = r11.s64 + 65536;
	// addi r8,r8,-32764
	ctx.r8.s64 = ctx.r8.s64 + -32764;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x830265f0
	if (!cr6.lt) goto loc_830265F0;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r10,r10,32852
	ctx.r10.u64 = ctx.r10.u64 | 32852;
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
loc_830265BC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r6,r11
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r6.u32 + r11.u32);
	// lbzx r6,r6,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r7.u32);
	// rlwinm. r6,r6,0,28,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq 0x830265f0
	if (cr0.eq) goto loc_830265F0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// blt cr6,0x830265bc
	if (cr6.lt) goto loc_830265BC;
loc_830265F0:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addis r10,r11,2
	ctx.r10.s64 = r11.s64 + 131072;
	// addi r7,r9,2
	ctx.r7.s64 = ctx.r9.s64 + 2;
	// addi r10,r10,-16376
	ctx.r10.s64 = ctx.r10.s64 + -16376;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r5,r9,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r9.s64;
	// add r4,r7,r11
	ctx.r4.u64 = ctx.r7.u64 + r11.u64;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// b 0x82fe1990
	sub_82FE1990(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83026628"))) PPC_WEAK_FUNC(sub_83026628);
PPC_FUNC_IMPL(__imp__sub_83026628) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83026630"))) PPC_WEAK_FUNC(sub_83026630);
PPC_FUNC_IMPL(__imp__sub_83026630) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,184(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83026648"))) PPC_WEAK_FUNC(sub_83026648);
PPC_FUNC_IMPL(__imp__sub_83026648) {
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
	// beq 0x830266b4
	if (cr0.eq) goto loc_830266B4;
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
	// addi r4,r11,24320
	ctx.r4.s64 = r11.s64 + 24320;
	// li r5,605
	ctx.r5.s64 = 605;
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
loc_830266B4:
	// lbz r11,10(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830266dc
	if (cr0.eq) goto loc_830266DC;
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
	// b 0x830266e0
	goto loc_830266E0;
loc_830266DC:
	// lwz r27,40(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 40);
loc_830266E0:
	// addi r3,r31,400
	ctx.r3.s64 = r31.s64 + 400;
	// bl 0x8301e348
	sub_8301E348(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,440(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 440);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r28,r11,24
	r28.u64 = r11.u32 & 0xFF;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 8);
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
	// bne 0x83026750
	if (!cr0.eq) goto loc_83026750;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 8);
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
	// b 0x83026958
	goto loc_83026958;
loc_83026750:
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
	// beq cr6,0x83026778
	if (cr6.eq) goto loc_83026778;
	// li r4,278
	ctx.r4.s64 = 278;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_83026778:
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
	// bne 0x830267c4
	if (!cr0.eq) goto loc_830267C4;
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
loc_830267C4:
	// lbz r11,16(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830268f8
	if (cr0.eq) goto loc_830268F8;
	// lbz r11,33(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 33);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83026810
	if (cr0.eq) goto loc_83026810;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83026810
	if (!cr6.eq) goto loc_83026810;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,110
	ctx.r4.s64 = 110;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
loc_83026810:
	// lbz r11,34(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 34);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83026850
	if (cr0.eq) goto loc_83026850;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x83026850
	if (!cr6.eq) goto loc_83026850;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,113
	ctx.r4.s64 = 113;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
loc_83026850:
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 16);
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
	// blt 0x830268f8
	if (cr0.lt) goto loc_830268F8;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830268a4
	if (!cr0.eq) goto loc_830268A4;
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
loc_8302689C:
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x830268e4
	goto loc_830268E4;
loc_830268A4:
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// blt cr6,0x830268c4
	if (cr6.lt) goto loc_830268C4;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,21
	ctx.r4.s64 = 21;
	// b 0x8302689c
	goto loc_8302689C;
loc_830268C4:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
loc_830268E4:
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
loc_830268F8:
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83026948
	if (cr6.eq) goto loc_83026948;
	// lbz r11,10(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83026920
	if (cr0.eq) goto loc_83026920;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x83026928
	goto loc_83026928;
loc_83026920:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r7,r11,-27800
	ctx.r7.s64 = r11.s64 + -27800;
loc_83026928:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83026948:
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stb r11,0(r26)
	PPC_STORE_U8(r26.u32 + 0, r11.u8);
loc_83026958:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83026960"))) PPC_WEAK_FUNC(sub_83026960);
PPC_FUNC_IMPL(__imp__sub_83026960) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cntlzw r11,r5
	r11.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83026a88
	if (!cr0.eq) goto loc_83026A88;
	// lbz r11,16(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// li r26,0
	r26.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83026a48
	if (cr0.eq) goto loc_83026A48;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// rlwinm r11,r5,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r31,400
	ctx.r3.s64 = r31.s64 + 400;
	// sthx r26,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r26.u16);
	// lwz r29,24(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r28,4(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x8301e5d8
	sub_8301E5D8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// beq 0x83026a38
	if (cr0.eq) goto loc_83026A38;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82ffa048
	sub_82FFA048(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83026a30
	if (cr0.eq) goto loc_83026A30;
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(r27.s32, 1, xer);
	// bne cr6,0x83026a10
	if (!cr6.eq) goto loc_83026A10;
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83026a7c
	if (cr6.eq) goto loc_83026A7C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// b 0x83026a70
	goto loc_83026A70;
loc_83026A10:
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(r27.s32, 2, xer);
	// bne cr6,0x83026a7c
	if (!cr6.eq) goto loc_83026A7C;
loc_83026A18:
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83026a7c
	if (cr6.eq) goto loc_83026A7C;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// b 0x83026a64
	goto loc_83026A64;
loc_83026A30:
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(r27.s32, 2, xer);
	// beq cr6,0x83026a18
	if (cr6.eq) goto loc_83026A18;
loc_83026A38:
	// li r4,22
	ctx.r4.s64 = 22;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// bl 0x8301f3f0
	sub_8301F3F0(ctx, base);
	// b 0x83026a7c
	goto loc_83026A7C;
loc_83026A48:
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83026a7c
	if (cr6.eq) goto loc_83026A7C;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// rlwinm r11,r5,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r26,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r26.u16);
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 24);
loc_83026A64:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
loc_83026A70:
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83026A7C:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// stw r26,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r26.u32);
	// sth r26,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r26.u16);
loc_83026A88:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83026A90"))) PPC_WEAK_FUNC(sub_83026A90);
PPC_FUNC_IMPL(__imp__sub_83026A90) {
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
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r28,r11,-27944
	r28.s64 = r11.s64 + -27944;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// addi r27,r11,-28364
	r27.s64 = r11.s64 + -28364;
	// beq cr6,0x83026b5c
	if (cr6.eq) goto loc_83026B5C;
	// lhz r11,0(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83026b5c
	if (cr0.eq) goto loc_83026B5C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-28120
	ctx.r4.s64 = r11.s64 + -28120;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83026aec
	if (cr0.eq) goto loc_83026AEC;
	// li r4,301
	ctx.r4.s64 = 301;
	// b 0x83026b18
	goto loc_83026B18;
loc_83026AEC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83026b20
	if (cr0.eq) goto loc_83026B20;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83026b20
	if (!cr0.eq) goto loc_83026B20;
	// li r4,303
	ctx.r4.s64 = 303;
loc_83026B18:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_83026B20:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x83026b40
	if (cr6.eq) goto loc_83026B40;
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83026b5c
	if (!cr0.eq) goto loc_83026B5C;
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83026b5c
	if (!cr6.eq) goto loc_83026B5C;
loc_83026B40:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,300
	ctx.r4.s64 = 300;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
loc_83026B5C:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-28092
	ctx.r4.s64 = r11.s64 + -28092;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83026b7c
	if (cr0.eq) goto loc_83026B7C;
	// li r4,302
	ctx.r4.s64 = 302;
	// b 0x83026ba8
	goto loc_83026BA8;
loc_83026B7C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83026bb0
	if (cr0.eq) goto loc_83026BB0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83026bb0
	if (!cr0.eq) goto loc_83026BB0;
	// li r4,304
	ctx.r4.s64 = 304;
loc_83026BA8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_83026BB0:
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 192);
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,400
	ctx.r3.s64 = r31.s64 + 400;
	// bl 0x8301ee40
	sub_8301EE40(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83026BE8"))) PPC_WEAK_FUNC(sub_83026BE8);
PPC_FUNC_IMPL(__imp__sub_83026BE8) {
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
	// beq cr6,0x83026c30
	if (cr6.eq) goto loc_83026C30;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// b 0x83026c34
	goto loc_83026C34;
loc_83026C30:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_83026C34:
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
	// bne 0x83026c64
	if (!cr0.eq) goto loc_83026C64;
	// li r3,0
	ctx.r3.s64 = 0;
loc_83026C5C:
	// addi r1,r31,272
	ctx.r1.s64 = r31.s64 + 272;
	// b 0x831b0b58
	return;
loc_83026C64:
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
	// beq cr6,0x83026c88
	if (cr6.eq) goto loc_83026C88;
	// lbz r11,17(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 17);
	// b 0x83026c8c
	goto loc_83026C8C;
loc_83026C88:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_83026C8C:
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
loc_83026CAC:
	// lis r11,2
	r11.s64 = 131072;
	// ori r28,r11,32852
	r28.u64 = r11.u64 | 32852;
loc_83026CB4:
	// addi r30,r29,124
	r30.s64 = r29.s64 + 124;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// sth r3,84(r31)
	PPC_STORE_U16(r31.u32 + 84, ctx.r3.u16);
	// clrlwi. r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x83026d04
	if (!cr0.eq) goto loc_83026D04;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,216(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 216);
	// li r6,47
	ctx.r6.s64 = 47;
	// addi r4,r11,24320
	ctx.r4.s64 = r11.s64 + 24320;
	// li r5,2575
	ctx.r5.s64 = 2575;
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
loc_83026D04:
	// lhz r11,88(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 88);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x83026d4c
	if (!cr6.eq) goto loc_83026D4C;
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
	// bne cr6,0x83026d30
	if (!cr6.eq) goto loc_83026D30;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83026c5c
	goto loc_83026C5C;
loc_83026D30:
	// ble cr6,0x83026d4c
	if (!cr6.gt) goto loc_83026D4C;
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
	// b 0x83026c5c
	goto loc_83026C5C;
loc_83026D4C:
	// stb r25,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r25.u8);
	// cmplwi cr6,r10,38
	cr6.compare<uint32_t>(ctx.r10.u32, 38, xer);
	// bne cr6,0x83026dcc
	if (!cr6.eq) goto loc_83026DCC;
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
	// beq cr6,0x83026d90
	if (cr6.eq) goto loc_83026D90;
	// mr r27,r25
	r27.u64 = r25.u64;
	// b 0x83026cb4
	goto loc_83026CB4;
loc_83026D90:
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83026e94
	if (cr0.eq) goto loc_83026E94;
	// lwz r11,440(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 440);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83026e94
	if (!cr0.eq) goto loc_83026E94;
	// lwz r11,440(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 440);
	// lwz r10,432(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 432);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,-4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// stb r10,34(r11)
	PPC_STORE_U8(r11.u32 + 34, ctx.r10.u8);
	// b 0x83026e94
	goto loc_83026E94;
loc_83026DCC:
	// cmplwi cr6,r10,55296
	cr6.compare<uint32_t>(ctx.r10.u32, 55296, xer);
	// blt cr6,0x83026e00
	if (cr6.lt) goto loc_83026E00;
	// cmplwi cr6,r10,56319
	cr6.compare<uint32_t>(ctx.r10.u32, 56319, xer);
	// bgt cr6,0x83026e00
	if (cr6.gt) goto loc_83026E00;
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83026df8
	if (cr0.eq) goto loc_83026DF8;
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x83026e94
	goto loc_83026E94;
loc_83026DF8:
	// li r27,1
	r27.s64 = 1;
	// b 0x83026e94
	goto loc_83026E94;
loc_83026E00:
	// cmplwi cr6,r10,56320
	cr6.compare<uint32_t>(ctx.r10.u32, 56320, xer);
	// blt cr6,0x83026e28
	if (cr6.lt) goto loc_83026E28;
	// cmplwi cr6,r10,57343
	cr6.compare<uint32_t>(ctx.r10.u32, 57343, xer);
	// bgt cr6,0x83026e28
	if (cr6.gt) goto loc_83026E28;
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83026e90
	if (!cr0.eq) goto loc_83026E90;
	// li r4,282
	ctx.r4.s64 = 282;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// b 0x83026e8c
	goto loc_83026E8C;
loc_83026E28:
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83026e40
	if (cr0.eq) goto loc_83026E40;
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83026E40:
	// lwz r11,132(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 132);
	// lhz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U16(r31.u32 + 84);
	// lwzx r11,r11,r28
	r11.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// lbzx r11,r11,r3
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83026e90
	if (!cr0.eq) goto loc_83026E90;
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
loc_83026E8C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83026E90:
	// mr r27,r25
	r27.u64 = r25.u64;
loc_83026E94:
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83026ecc
	if (!cr0.eq) goto loc_83026ECC;
	// lhz r11,84(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 84);
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(r11.u32, 60, xer);
	// bne cr6,0x83026ecc
	if (!cr6.eq) goto loc_83026ECC;
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
loc_83026ECC:
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83026f78
	if (!cr6.eq) goto loc_83026F78;
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83026f48
	if (!cr0.eq) goto loc_83026F48;
	// lhz r11,84(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 84);
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(r11.u32, 9, xer);
	// beq cr6,0x83026f00
	if (cr6.eq) goto loc_83026F00;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// beq cr6,0x83026f00
	if (cr6.eq) goto loc_83026F00;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(r11.u32, 13, xer);
	// bne cr6,0x83026f48
	if (!cr6.eq) goto loc_83026F48;
loc_83026F00:
	// lbz r11,14(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 14);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83026f40
	if (cr0.eq) goto loc_83026F40;
	// lbz r11,16(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83026f40
	if (cr0.eq) goto loc_83026F40;
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83026f40
	if (cr0.eq) goto loc_83026F40;
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
loc_83026F40:
	// li r11,32
	r11.s64 = 32;
	// sth r11,84(r31)
	PPC_STORE_U16(r31.u32 + 84, r11.u16);
loc_83026F48:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
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
	// beq 0x83026cb4
	if (cr0.eq) goto loc_83026CB4;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// sth r25,86(r31)
	PPC_STORE_U16(r31.u32 + 86, r25.u16);
	// b 0x83026cb4
	goto loc_83026CB4;
loc_83026F78:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// bne cr6,0x83026fdc
	if (!cr6.eq) goto loc_83026FDC;
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83026f98
	if (cr0.eq) goto loc_83026F98;
	// lhz r11,84(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 84);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(r11.u32, 32, xer);
	// bne cr6,0x83026fb0
	if (!cr6.eq) goto loc_83026FB0;
loc_83026F98:
	// lwz r11,132(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 132);
	// lhz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 84);
	// lwzx r11,r11,r28
	r11.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83026cb4
	if (!cr0.eq) goto loc_83026CB4;
loc_83026FB0:
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83026fc8
	if (cr0.eq) goto loc_83026FC8;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83026FC8:
	// li r26,1
	r26.s64 = 1;
	// stw r26,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r26.u32);
loc_83026FD0:
	// li r24,1
	r24.s64 = 1;
	// stb r24,81(r31)
	PPC_STORE_U8(r31.u32 + 81, r24.u8);
	// b 0x83026f48
	goto loc_83026F48;
loc_83026FDC:
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(r26.s32, 1, xer);
	// bne cr6,0x83026f48
	if (!cr6.eq) goto loc_83026F48;
	// lhz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 84);
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// beq cr6,0x83027010
	if (cr6.eq) goto loc_83027010;
	// lwz r11,132(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 132);
	// lwzx r11,r11,r28
	r11.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83026fd0
	if (cr0.eq) goto loc_83026FD0;
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83026fd0
	if (!cr0.eq) goto loc_83026FD0;
loc_83027010:
	// mr r26,r25
	r26.u64 = r25.u64;
	// lbz r11,14(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 14);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r26,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r26.u32);
	// beq 0x83026cb4
	if (cr0.eq) goto loc_83026CB4;
	// lbz r11,16(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83026cb4
	if (cr0.eq) goto loc_83026CB4;
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83026cb4
	if (cr0.eq) goto loc_83026CB4;
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8302706c
	if (cr0.eq) goto loc_8302706C;
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// bne cr6,0x8302706c
	if (!cr6.eq) goto loc_8302706C;
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
	// beq 0x83026cb4
	if (cr0.eq) goto loc_83026CB4;
loc_8302706C:
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
	// b 0x83026cb4
	goto loc_83026CB4;
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
	// b 0x83026cac
	goto loc_83026CAC;
}

__attribute__((alias("__imp__sub_830270C0"))) PPC_WEAK_FUNC(sub_830270C0);
PPC_FUNC_IMPL(__imp__sub_830270C0) {
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
	// lis r3,-31998
	ctx.r3.s64 = -2097020928;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,28816
	ctx.r3.s64 = ctx.r3.s64 + 28816;
	// stb r25,83(r31)
	PPC_STORE_U8(r31.u32 + 83, r25.u8);
	// stb r25,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r25.u8);
	// b 0x831b0b58
	return;
}

__attribute__((alias("__imp__sub_830270F0"))) PPC_WEAK_FUNC(sub_830270F0);
PPC_FUNC_IMPL(__imp__sub_830270F0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,91
	ctx.r4.s64 = 91;
	// addi r24,r30,124
	r24.s64 = r30.s64 + 124;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83027148
	if (!cr0.eq) goto loc_83027148;
	// li r4,261
	ctx.r4.s64 = 261;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
	// li r4,91
	ctx.r4.s64 = 91;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830273b0
	if (cr0.eq) goto loc_830273B0;
loc_83027148:
	// addi r23,r30,220
	r23.s64 = r30.s64 + 220;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r23,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r23.u32);
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// addi r3,r30,400
	ctx.r3.s64 = r30.s64 + 400;
	// li r21,0
	r21.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// bl 0x8301e5d8
	sub_8301E5D8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// clrlwi. r29,r28,16
	r29.u64 = r28.u32 & 0xFFFF;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x830272fc
	if (cr0.eq) goto loc_830272FC;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r20,r11,24488
	r20.s64 = r11.s64 + 24488;
	// lis r11,2
	r11.s64 = 131072;
	// ori r22,r11,32852
	r22.u64 = r11.u64 | 32852;
loc_830271B0:
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83027200
	if (cr0.eq) goto loc_83027200;
	// lbz r11,14(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 14);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83027200
	if (cr0.eq) goto loc_83027200;
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// lwzx r11,r11,r22
	r11.u64 = PPC_LOAD_U32(r11.u32 + r22.u32);
	// lbzx r11,r11,r29
	r11.u64 = PPC_LOAD_U8(r11.u32 + r29.u32);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83027200
	if (cr0.eq) goto loc_83027200;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lbz r11,20(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83027200
	if (cr0.eq) goto loc_83027200;
	// cmpwi cr6,r19,1
	cr6.compare<int32_t>(r19.s32, 1, xer);
	// bne cr6,0x83027200
	if (!cr6.eq) goto loc_83027200;
	// li r4,84
	ctx.r4.s64 = 84;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// bl 0x8301f3f0
	sub_8301F3F0(ctx, base);
loc_83027200:
	// cmplwi cr6,r29,93
	cr6.compare<uint32_t>(r29.u32, 93, xer);
	// bne cr6,0x8302721c
	if (!cr6.eq) goto loc_8302721C;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// bl 0x82ffb458
	sub_82FFB458(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83027334
	if (!cr0.eq) goto loc_83027334;
loc_8302721C:
	// clrlwi. r11,r21,24
	r11.u64 = r21.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830272dc
	if (!cr0.eq) goto loc_830272DC;
	// cmplwi cr6,r29,55296
	cr6.compare<uint32_t>(r29.u32, 55296, xer);
	// blt cr6,0x83027254
	if (cr6.lt) goto loc_83027254;
	// cmplwi cr6,r29,56319
	cr6.compare<uint32_t>(r29.u32, 56319, xer);
	// bgt cr6,0x83027254
	if (cr6.gt) goto loc_83027254;
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8302724c
	if (cr0.eq) goto loc_8302724C;
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// b 0x830272dc
	goto loc_830272DC;
loc_8302724C:
	// li r27,1
	r27.s64 = 1;
	// b 0x830272dc
	goto loc_830272DC;
loc_83027254:
	// cmplwi cr6,r29,56320
	cr6.compare<uint32_t>(r29.u32, 56320, xer);
	// blt cr6,0x83027274
	if (cr6.lt) goto loc_83027274;
	// cmplwi cr6,r29,57343
	cr6.compare<uint32_t>(r29.u32, 57343, xer);
	// bgt cr6,0x83027274
	if (cr6.gt) goto loc_83027274;
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830272d8
	if (!cr0.eq) goto loc_830272D8;
	// li r4,282
	ctx.r4.s64 = 282;
	// b 0x83027280
	goto loc_83027280;
loc_83027274:
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8302728c
	if (cr0.eq) goto loc_8302728C;
	// li r4,249
	ctx.r4.s64 = 249;
loc_83027280:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// b 0x830272d8
	goto loc_830272D8;
loc_8302728C:
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// lwzx r11,r11,r22
	r11.u64 = PPC_LOAD_U32(r11.u32 + r22.u32);
	// lbzx r11,r11,r29
	r11.u64 = PPC_LOAD_U8(r11.u32 + r29.u32);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830272d8
	if (!cr0.eq) goto loc_830272D8;
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
loc_830272D8:
	// li r27,0
	r27.s64 = 0;
loc_830272DC:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// clrlwi. r29,r28,16
	r29.u64 = r28.u32 & 0xFFFF;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x830271b0
	if (!cr0.eq) goto loc_830271B0;
loc_830272FC:
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
	// addi r4,r11,24320
	ctx.r4.s64 = r11.s64 + 24320;
	// li r5,2791
	ctx.r5.s64 = 2791;
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
loc_83027334:
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83027348
	if (cr0.eq) goto loc_83027348;
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_83027348:
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83027368
	if (cr0.eq) goto loc_83027368;
	// cmpwi cr6,r19,2
	cr6.compare<int32_t>(r19.s32, 2, xer);
	// beq cr6,0x83027368
	if (cr6.eq) goto loc_83027368;
	// li r4,22
	ctx.r4.s64 = 22;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// bl 0x8301f3f0
	sub_8301F3F0(ctx, base);
loc_83027368:
	// lwz r11,92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830273a4
	if (cr6.eq) goto loc_830273A4;
	// lwz r5,4(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,24(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r11,r5,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, ctx.r9.u16);
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// lwz r4,24(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830273A4:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
loc_830273B0:
	// addi r1,r31,240
	ctx.r1.s64 = r31.s64 + 240;
	// b 0x831b0b54
	return;
}

__attribute__((alias("__imp__sub_830273B8"))) PPC_WEAK_FUNC(sub_830273B8);
PPC_FUNC_IMPL(__imp__sub_830273B8) {
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

__attribute__((alias("__imp__sub_830273E0"))) PPC_WEAK_FUNC(sub_830273E0);
PPC_FUNC_IMPL(__imp__sub_830273E0) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x82fd9f48
	sub_82FD9F48(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x83027444
	if (!cr6.gt) goto loc_83027444;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,66
	ctx.r6.s64 = 66;
	// addi r4,r11,13768
	ctx.r4.s64 = r11.s64 + 13768;
	// li r5,304
	ctx.r5.s64 = 304;
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
loc_83027444:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// b 0x83027470
	goto loc_83027470;
loc_83027454:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83027484
	if (!cr0.eq) goto loc_83027484;
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_83027470:
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// bne 0x83027454
	if (!cr0.eq) goto loc_83027454;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8302747C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
loc_83027484:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8302747c
	goto loc_8302747C;
}

__attribute__((alias("__imp__sub_83027490"))) PPC_WEAK_FUNC(sub_83027490);
PPC_FUNC_IMPL(__imp__sub_83027490) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
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
	// ble cr6,0x83027504
	if (!cr6.gt) goto loc_83027504;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,49
	ctx.r6.s64 = 49;
	// addi r4,r11,-17060
	ctx.r4.s64 = r11.s64 + -17060;
	// li r5,361
	ctx.r5.s64 = 361;
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
loc_83027504:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r11
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// b 0x83027548
	goto loc_83027548;
loc_83027514:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
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
	// beq 0x83027544
	if (cr0.eq) goto loc_83027544;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// beq cr6,0x8302755c
	if (cr6.eq) goto loc_8302755C;
loc_83027544:
	// lwz r30,4(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 4);
loc_83027548:
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// bne 0x83027514
	if (!cr0.eq) goto loc_83027514;
	// li r3,0
	ctx.r3.s64 = 0;
loc_83027554:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
loc_8302755C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x83027554
	goto loc_83027554;
}

__attribute__((alias("__imp__sub_83027568"))) PPC_WEAK_FUNC(sub_83027568);
PPC_FUNC_IMPL(__imp__sub_83027568) {
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
	// lis r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r11,r11,32772
	r11.u64 = r11.u64 | 32772;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwzx r11,r31,r11
	r11.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x830275c4
	if (cr6.lt) goto loc_830275C4;
	// lis r11,1
	r11.s64 = 65536;
	// ori r11,r11,49177
	r11.u64 = r11.u64 | 49177;
	// lbzx r11,r31,r11
	r11.u64 = PPC_LOAD_U8(r31.u32 + r11.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830275b4
	if (cr0.eq) goto loc_830275B4;
loc_830275AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83027608
	goto loc_83027608;
loc_830275B4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ffacf0
	sub_82FFACF0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830275ac
	if (cr0.eq) goto loc_830275AC;
loc_830275C4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// clrlwi r10,r30,16
	ctx.r10.u64 = r30.u32 & 0xFFFF;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r31
	r11.u64 = PPC_LOAD_U16(r11.u32 + r31.u32);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x830275ac
	if (cr6.eq) goto loc_830275AC;
	// sth r11,0(r29)
	PPC_STORE_U16(r29.u32 + 0, r11.u16);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82ff4ef8
	sub_82FF4EF8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_83027608:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83027618"))) PPC_WEAK_FUNC(sub_83027618);
PPC_FUNC_IMPL(__imp__sub_83027618) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
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
	// li r3,36
	ctx.r3.s64 = 36;
	// lwz r10,176(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// stb r11,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, r11.u8);
	// lwz r4,180(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// li r27,0
	r27.s64 = 0;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83027678
	if (cr0.eq) goto loc_83027678;
	// lwz r4,180(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// bl 0x83059550
	sub_83059550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8302767c
	goto loc_8302767C;
loc_83027678:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_8302767C:
	// lwz r3,176(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// stw r4,480(r30)
	PPC_STORE_U32(r30.u32 + 480, ctx.r4.u32);
	// bl 0x82fef120
	sub_82FEF120(ctx, base);
	// lwz r4,480(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 480);
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// stw r27,188(r30)
	PPC_STORE_U32(r30.u32 + 188, r27.u32);
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
	// beq 0x830276d8
	if (cr0.eq) goto loc_830276D8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830276D8:
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830276f4
	if (cr0.eq) goto loc_830276F4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830276F4:
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83027710
	if (cr0.eq) goto loc_83027710;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83027710:
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
	// stw r27,196(r30)
	PPC_STORE_U32(r30.u32 + 196, r27.u32);
	// bl 0x8301e758
	sub_8301E758(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// lwz r3,476(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// stb r27,13(r30)
	PPC_STORE_U8(r30.u32 + 13, r27.u8);
	// stb r27,14(r30)
	PPC_STORE_U8(r30.u32 + 14, r27.u8);
	// stw r27,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r27.u32);
	// stb r11,15(r30)
	PPC_STORE_U8(r30.u32 + 15, r11.u8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,476(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// lwz r10,104(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lbz r11,17(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 17);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830277a0
	if (cr0.eq) goto loc_830277A0;
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
loc_830277A0:
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
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff5178
	sub_82FF5178(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x8302787c
	if (!cr0.eq) goto loc_8302787C;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
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
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// beq 0x8302783c
	if (cr0.eq) goto loc_8302783C;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r4,r11,24320
	ctx.r4.s64 = r11.s64 + 24320;
	// li r6,76
	ctx.r6.s64 = 76;
	// li r5,2215
	ctx.r5.s64 = 2215;
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
loc_8302783C:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r4,r11,24320
	ctx.r4.s64 = r11.s64 + 24320;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,2217
	ctx.r5.s64 = 2217;
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
loc_8302787C:
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
	// beq 0x830278ac
	if (cr0.eq) goto loc_830278AC;
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
	// stw r27,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r27.u32);
loc_830278AC:
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(r11.u32, 32, xer);
	// blt cr6,0x830278d4
	if (cr6.lt) goto loc_830278D4;
	// lwz r3,492(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 492);
	// bl 0x8301ff70
	sub_8301FF70(ctx, base);
	// lwz r3,496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 496);
	// bl 0x8301ff70
	sub_8301FF70(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0490
	sub_82FF0490(ctx, base);
	// b 0x830278dc
	goto loc_830278DC;
loc_830278D4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0448
	sub_82FF0448(ctx, base);
loc_830278DC:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_830278E4"))) PPC_WEAK_FUNC(sub_830278E4);
PPC_FUNC_IMPL(__imp__sub_830278E4) {
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

__attribute__((alias("__imp__sub_83027920"))) PPC_WEAK_FUNC(sub_83027920);
PPC_FUNC_IMPL(__imp__sub_83027920) {
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
	// addi r31,r1,-320
	r31.s64 = ctx.r1.s64 + -320;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r26,r30,220
	r26.s64 = r30.s64 + 220;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r30,340(r31)
	PPC_STORE_U32(r31.u32 + 340, r30.u32);
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stw r26,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r26.u32);
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
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
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
	// stw r26,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r26.u32);
	// stw r29,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r29.u32);
	// lwz r11,100(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// mr r25,r28
	r25.u64 = r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83027a2c
	if (cr6.eq) goto loc_83027A2C;
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
	// bne 0x830279e0
	if (!cr0.eq) goto loc_830279E0;
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
loc_830279E0:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r28,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r28.u16);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// stw r28,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r28.u32);
	// stw r28,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r28.u32);
	// stw r10,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// stw r28,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r28.u32);
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
	// b 0x83027a40
	goto loc_83027A40;
loc_83027A2C:
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
loc_83027A40:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// bne cr6,0x83027bac
	if (!cr6.eq) goto loc_83027BAC;
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
	// beq 0x83027b18
	if (cr0.eq) goto loc_83027B18;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x8301c488
	sub_8301C488(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83027b18
	if (!cr0.eq) goto loc_83027B18;
	// lbz r11,8(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83027ae4
	if (cr0.eq) goto loc_83027AE4;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x8301c4c0
	sub_8301C4C0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83027ae4
	if (cr0.eq) goto loc_83027AE4;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r6,99
	ctx.r6.s64 = 99;
	// addi r4,r11,24320
	ctx.r4.s64 = r11.s64 + 24320;
	// li r5,2514
	ctx.r5.s64 = 2514;
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
loc_83027AE4:
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
	// beq 0x83027b0c
	if (cr0.eq) goto loc_83027B0C;
	// addi r4,r31,192
	ctx.r4.s64 = r31.s64 + 192;
	// lwz r5,216(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x8301c1d0
	sub_8301C1D0(ctx, base);
	// b 0x83027b10
	goto loc_83027B10;
loc_83027B0C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_83027B10:
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// b 0x83027ba4
	goto loc_83027BA4;
loc_83027B18:
	// lbz r11,8(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83027bd0
	if (!cr0.eq) goto loc_83027BD0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r26,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r26.u32);
	// stw r27,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r27.u32);
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
	// beq 0x83027b90
	if (cr0.eq) goto loc_83027B90;
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
	// b 0x83027b94
	goto loc_83027B94;
loc_83027B90:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_83027B94:
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
loc_83027BA4:
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x8301cf70
	sub_8301CF70(ctx, base);
loc_83027BAC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r31,320
	ctx.r1.s64 = r31.s64 + 320;
	// b 0x831b0b68
	return;
loc_83027BD0:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r6,99
	ctx.r6.s64 = 99;
	// addi r4,r11,24320
	ctx.r4.s64 = r11.s64 + 24320;
	// li r5,2509
	ctx.r5.s64 = 2509;
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

__attribute__((alias("__imp__sub_83027BFC"))) PPC_WEAK_FUNC(sub_83027BFC);
PPC_FUNC_IMPL(__imp__sub_83027BFC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
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

__attribute__((alias("__imp__sub_83027C24"))) PPC_WEAK_FUNC(sub_83027C24);
PPC_FUNC_IMPL(__imp__sub_83027C24) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
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

__attribute__((alias("__imp__sub_83027C4C"))) PPC_WEAK_FUNC(sub_83027C4C);
PPC_FUNC_IMPL(__imp__sub_83027C4C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
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

__attribute__((alias("__imp__sub_83027C74"))) PPC_WEAK_FUNC(sub_83027C74);
PPC_FUNC_IMPL(__imp__sub_83027C74) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,340(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 340);
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

__attribute__((alias("__imp__sub_83027CA4"))) PPC_WEAK_FUNC(sub_83027CA4);
PPC_FUNC_IMPL(__imp__sub_83027CA4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
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

__attribute__((alias("__imp__sub_83027CCC"))) PPC_WEAK_FUNC(sub_83027CCC);
PPC_FUNC_IMPL(__imp__sub_83027CCC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,340(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 340);
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

__attribute__((alias("__imp__sub_83027D08"))) PPC_WEAK_FUNC(sub_83027D08);
PPC_FUNC_IMPL(__imp__sub_83027D08) {
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
loc_83027D70:
	// lbz r11,81(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 81);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83027fd4
	if (cr0.eq) goto loc_83027FD4;
loc_83027D7C:
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// bne cr6,0x83027d9c
	if (!cr6.eq) goto loc_83027D9C;
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83027d9c
	if (!cr0.eq) goto loc_83027D9C;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,132(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 132);
	// bl 0x83026590
	sub_83026590(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83027D9C:
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
	// bne 0x83027dd8
	if (!cr0.eq) goto loc_83027DD8;
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83027dd0
	if (cr0.eq) goto loc_83027DD0;
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83027DD0:
	// stb r27,81(r31)
	PPC_STORE_U8(r31.u32 + 81, r27.u8);
	// b 0x83027d70
	goto loc_83027D70;
loc_83027DD8:
	// lhz r11,84(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 84);
	// stb r27,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r27.u8);
	// cmplwi cr6,r11,38
	cr6.compare<uint32_t>(r11.u32, 38, xer);
	// bne cr6,0x83027e5c
	if (!cr6.eq) goto loc_83027E5C;
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
	// beq cr6,0x83027e54
	if (cr6.eq) goto loc_83027E54;
	// mr r25,r27
	r25.u64 = r27.u64;
	// stb r28,28(r30)
	PPC_STORE_U8(r30.u32 + 28, r28.u8);
	// b 0x83027d7c
	goto loc_83027D7C;
loc_83027E54:
	// stb r28,28(r30)
	PPC_STORE_U8(r30.u32 + 28, r28.u8);
	// b 0x83027f2c
	goto loc_83027F2C;
loc_83027E5C:
	// cmplwi cr6,r11,55296
	cr6.compare<uint32_t>(r11.u32, 55296, xer);
	// blt cr6,0x83027e90
	if (cr6.lt) goto loc_83027E90;
	// cmplwi cr6,r11,56319
	cr6.compare<uint32_t>(r11.u32, 56319, xer);
	// bgt cr6,0x83027e90
	if (cr6.gt) goto loc_83027E90;
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83027e88
	if (cr0.eq) goto loc_83027E88;
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x83027f2c
	goto loc_83027F2C;
loc_83027E88:
	// li r25,1
	r25.s64 = 1;
	// b 0x83027f2c
	goto loc_83027F2C;
loc_83027E90:
	// cmplwi cr6,r11,56320
	cr6.compare<uint32_t>(r11.u32, 56320, xer);
	// blt cr6,0x83027eb8
	if (cr6.lt) goto loc_83027EB8;
	// cmplwi cr6,r11,57343
	cr6.compare<uint32_t>(r11.u32, 57343, xer);
	// bgt cr6,0x83027eb8
	if (cr6.gt) goto loc_83027EB8;
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83027f28
	if (!cr0.eq) goto loc_83027F28;
	// li r4,282
	ctx.r4.s64 = 282;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// b 0x83027f24
	goto loc_83027F24;
loc_83027EB8:
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83027ed0
	if (cr0.eq) goto loc_83027ED0;
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83027ED0:
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
	// bne 0x83027f28
	if (!cr0.eq) goto loc_83027F28;
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
loc_83027F24:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83027F28:
	// mr r25,r27
	r25.u64 = r27.u64;
loc_83027F2C:
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83027f84
	if (!cr0.eq) goto loc_83027F84;
	// lhz r11,84(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 84);
	// cmplwi cr6,r11,93
	cr6.compare<uint32_t>(r11.u32, 93, xer);
	// bne cr6,0x83027f64
	if (!cr6.eq) goto loc_83027F64;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// bne cr6,0x83027f54
	if (!cr6.eq) goto loc_83027F54;
	// li r24,1
	r24.s64 = 1;
	// b 0x83027f88
	goto loc_83027F88;
loc_83027F54:
	// cmpwi cr6,r24,1
	cr6.compare<int32_t>(r24.s32, 1, xer);
	// bne cr6,0x83027f8c
	if (!cr6.eq) goto loc_83027F8C;
	// li r24,2
	r24.s64 = 2;
	// b 0x83027f88
	goto loc_83027F88;
loc_83027F64:
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(r11.u32, 62, xer);
	// bne cr6,0x83027f84
	if (!cr6.eq) goto loc_83027F84;
	// cmpwi cr6,r24,2
	cr6.compare<int32_t>(r24.s32, 2, xer);
	// bne cr6,0x83027f84
	if (!cr6.eq) goto loc_83027F84;
	// li r4,262
	ctx.r4.s64 = 262;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83027F84:
	// mr r24,r27
	r24.u64 = r27.u64;
loc_83027F88:
	// stw r24,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r24.u32);
loc_83027F8C:
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
	// beq 0x83027d7c
	if (cr0.eq) goto loc_83027D7C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// sth r27,86(r31)
	PPC_STORE_U16(r31.u32 + 86, r27.u16);
	// b 0x83027d7c
	goto loc_83027D7C;
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
	// b 0x83027d70
	goto loc_83027D70;
loc_83027FD4:
	// lbz r11,16(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83028050
	if (cr0.eq) goto loc_83028050;
	// lbz r11,14(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 14);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83028050
	if (cr0.eq) goto loc_83028050;
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
	// beq 0x83028050
	if (cr0.eq) goto loc_83028050;
	// addi r3,r29,400
	ctx.r3.s64 = r29.s64 + 400;
	// bl 0x8301e5d8
	sub_8301E5D8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r11,20(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83028050
	if (cr0.eq) goto loc_83028050;
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
	// bne cr6,0x83028050
	if (!cr6.eq) goto loc_83028050;
	// li r4,84
	ctx.r4.s64 = 84;
	// lwz r3,168(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 168);
	// bl 0x8301f3f0
	sub_8301F3F0(ctx, base);
loc_83028050:
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

__attribute__((alias("__imp__sub_83028084"))) PPC_WEAK_FUNC(sub_83028084);
PPC_FUNC_IMPL(__imp__sub_83028084) {
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
	// beq cr6,0x830280e0
	if (cr6.eq) goto loc_830280E0;
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
loc_830280E0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31998
	ctx.r3.s64 = -2097020928;
	// addi r3,r3,32700
	ctx.r3.s64 = ctx.r3.s64 + 32700;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_830280F8"))) PPC_WEAK_FUNC(sub_830280F8);
PPC_FUNC_IMPL(__imp__sub_830280F8) {
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

__attribute__((alias("__imp__sub_83028120"))) PPC_WEAK_FUNC(sub_83028120);
PPC_FUNC_IMPL(__imp__sub_83028120) {
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

__attribute__((alias("__imp__sub_83028148"))) PPC_WEAK_FUNC(sub_83028148);
PPC_FUNC_IMPL(__imp__sub_83028148) {
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
	// beq 0x830281ac
	if (cr0.eq) goto loc_830281AC;
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8302819c
	if (cr0.eq) goto loc_8302819C;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x8302819c
	if (cr0.eq) goto loc_8302819C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ff9cc8
	sub_82FF9CC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_8302819C:
	// stw r27,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r27.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// stw r28,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r28.u32);
	// b 0x830281f8
	goto loc_830281F8;
loc_830281AC:
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
	// beq 0x830281e8
	if (cr0.eq) goto loc_830281E8;
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
	// b 0x830281ec
	goto loc_830281EC;
loc_830281E8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_830281EC:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, ctx.r10.u32);
loc_830281F8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83028200"))) PPC_WEAK_FUNC(sub_83028200);
PPC_FUNC_IMPL(__imp__sub_83028200) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r3,-15640(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -15640);
	// bl 0x830273e0
	sub_830273E0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83028240
	if (cr0.eq) goto loc_83028240;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8302825c
	if (!cr0.eq) goto loc_8302825C;
loc_83028240:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830273e0
	sub_830273E0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8302825c
	if (cr0.eq) goto loc_8302825C;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8302825C:
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

__attribute__((alias("__imp__sub_83028280"))) PPC_WEAK_FUNC(sub_83028280);
PPC_FUNC_IMPL(__imp__sub_83028280) {
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
	// addi r31,r1,-368
	r31.s64 = ctx.r1.s64 + -368;
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// stw r30,388(r31)
	PPC_STORE_U32(r31.u32 + 388, r30.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830282b4
	if (cr0.eq) goto loc_830282B4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830282B4:
	// addi r21,r30,124
	r21.s64 = r30.s64 + 124;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830282e8
	if (!cr0.eq) goto loc_830282E8;
	// li r4,207
	ctx.r4.s64 = 207;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
	// b 0x83028a60
	goto loc_83028A60;
loc_830282E8:
	// addi r19,r30,220
	r19.s64 = r30.s64 + 220;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// stw r19,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r19.u32);
	// stw r20,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r20.u32);
	// li r23,0
	r23.s64 = 0;
	// lwz r11,24(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// stw r23,4(r20)
	PPC_STORE_U32(r20.u32 + 4, r23.u32);
	// sth r23,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r23.u16);
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// bl 0x82ffb090
	sub_82FFB090(ctx, base);
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8302834c
	if (cr0.eq) goto loc_8302834C;
	// li r4,208
	ctx.r4.s64 = 208;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
	// b 0x83028a54
	goto loc_83028A54;
loc_8302834C:
	// lwz r10,24(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// sthx r23,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r23.u16);
	// lwz r4,24(r20)
	ctx.r4.u64 = PPC_LOAD_U32(r20.u32 + 24);
	// bl 0x8301f9e0
	sub_8301F9E0(ctx, base);
	// li r3,48
	ctx.r3.s64 = 48;
	// lwz r4,180(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830283a8
	if (cr0.eq) goto loc_830283A8;
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r10,24(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r23,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r23.u16);
	// lwz r4,24(r20)
	ctx.r4.u64 = PPC_LOAD_U32(r20.u32 + 24);
	// lwz r7,180(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// lwz r5,40(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// bl 0x8306c8b8
	sub_8306C8B8(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// b 0x830283ac
	goto loc_830283AC;
loc_830283A8:
	// mr r22,r23
	r22.u64 = r23.u64;
loc_830283AC:
	// stw r22,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r22.u32);
	// li r11,4
	r11.s64 = 4;
	// li r18,1
	r18.s64 = 1;
	// stw r11,12(r22)
	PPC_STORE_U32(r22.u32 + 12, r11.u32);
	// stb r18,20(r22)
	PPC_STORE_U8(r22.u32 + 20, r18.u8);
	// lbz r11,22(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 22);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830283f4
	if (!cr0.eq) goto loc_830283F4;
	// lwz r3,184(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,184(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// stw r3,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r3.u32);
	// b 0x83028444
	goto loc_83028444;
loc_830283F4:
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// addi r5,r31,104
	ctx.r5.s64 = r31.s64 + 104;
	// lwz r10,24(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r23,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r23.u16);
	// lwz r4,24(r20)
	ctx.r4.u64 = PPC_LOAD_U32(r20.u32 + 24);
	// lwz r3,484(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 484);
	// bl 0x83020060
	sub_83020060(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83028434
	if (cr0.eq) goto loc_83028434;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83028434
	if (cr0.eq) goto loc_83028434;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// stw r11,16(r22)
	PPC_STORE_U32(r22.u32 + 16, r11.u32);
	// b 0x83028448
	goto loc_83028448;
loc_83028434:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r3,484(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 484);
	// bl 0x83020538
	sub_83020538(ctx, base);
	// stw r3,16(r22)
	PPC_STORE_U32(r22.u32 + 16, ctx.r3.u32);
loc_83028444:
	// stw r23,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r23.u32);
loc_83028448:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830284a8
	if (cr0.eq) goto loc_830284A8;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83028498
	if (cr0.eq) goto loc_83028498;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83028498:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// b 0x83028a54
	goto loc_83028A54;
loc_830284A8:
	// lwz r11,172(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 172);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x830284c4
	if (!cr6.eq) goto loc_830284C4;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830284c4
	if (!cr0.eq) goto loc_830284C4;
	// stb r18,16(r30)
	PPC_STORE_U8(r30.u32 + 16, r18.u8);
loc_830284C4:
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// lwz r6,180(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// lwz r5,96(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// mr r25,r23
	r25.u64 = r23.u64;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// mr r24,r23
	r24.u64 = r23.u64;
	// lwz r4,184(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// mr r26,r23
	r26.u64 = r23.u64;
	// mr r27,r23
	r27.u64 = r23.u64;
	// bl 0x83068bb0
	sub_83068BB0(ctx, base);
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x830666d8
	sub_830666D8(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82ff6188
	sub_82FF6188(ctx, base);
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,91
	cr6.compare<uint32_t>(r11.u32, 91, xer);
	// bne cr6,0x8302851c
	if (!cr6.eq) goto loc_8302851C;
	// mr r25,r18
	r25.u64 = r18.u64;
	// b 0x83028620
	goto loc_83028620;
loc_8302851C:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// stb r23,15(r30)
	PPC_STORE_U8(r30.u32 + 15, r23.u8);
	// mr r24,r18
	r24.u64 = r18.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r19,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r19.u32);
	// stw r29,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r29.u32);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r19,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r19.u32);
	// stw r28,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r28.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x83069260
	sub_83069260(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830285a4
	if (!cr0.eq) goto loc_830285A4;
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x8306b450
	sub_8306B450(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// b 0x83028a54
	goto loc_83028A54;
loc_830285A4:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r23,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r23.u16);
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r23,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r23.u16);
	// lwz r3,24(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82ff6188
	sub_82FF6188(ctx, base);
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,91
	cr6.compare<uint32_t>(r11.u32, 91, xer);
	// bne cr6,0x83028608
	if (!cr6.eq) goto loc_83028608;
	// mr r25,r18
	r25.u64 = r18.u64;
loc_83028608:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
loc_83028620:
	// lwz r11,216(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// stw r26,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r26.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// stw r27,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r27.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83028664
	if (cr0.eq) goto loc_83028664;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83028664:
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83028704
	if (cr0.eq) goto loc_83028704;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff3638
	sub_82FF3638(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x8306bf98
	sub_8306BF98(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830286d0
	if (!cr0.eq) goto loc_830286D0;
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x82fdae08
	sub_82FDAE08(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82fdae08
	sub_82FDAE08(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x8306b450
	sub_8306B450(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// b 0x83028a54
	goto loc_83028A54;
loc_830286D0:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82ff5df8
	sub_82FF5DF8(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// ble cr6,0x830286f8
	if (!cr6.gt) goto loc_830286F8;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82ff5d48
	sub_82FF5D48(ctx, base);
loc_830286F8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
loc_83028704:
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83028768
	if (!cr0.eq) goto loc_83028768;
	// li r4,93
	ctx.r4.s64 = 93;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83028750
	if (cr0.eq) goto loc_83028750;
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83028750
	if (cr0.eq) goto loc_83028750;
	// li r4,257
	ctx.r4.s64 = 257;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// b 0x83028768
	goto loc_83028768;
loc_83028750:
	// li r4,212
	ctx.r4.s64 = 212;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
loc_83028768:
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83028a28
	if (cr0.eq) goto loc_83028A28;
	// lbz r11,22(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 22);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83028840
	if (cr0.eq) goto loc_83028840;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
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
	// lwz r3,176(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// bl 0x82feeed8
	sub_82FEEED8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x83028834
	if (cr0.eq) goto loc_83028834;
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
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83028834
	if (!cr0.eq) goto loc_83028834;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r29,480(r30)
	PPC_STORE_U32(r30.u32 + 480, r29.u32);
	// stw r29,184(r30)
	PPC_STORE_U32(r30.u32 + 184, r29.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x82fdae08
	sub_82FDAE08(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82fdae08
	sub_82FDAE08(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x8306b450
	sub_8306B450(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// b 0x83028a54
	goto loc_83028A54;
loc_83028834:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
loc_83028840:
	// lbz r11,23(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 23);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83028858
	if (!cr0.eq) goto loc_83028858;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83028a28
	if (cr0.eq) goto loc_83028A28;
loc_83028858:
	// lbz r11,9(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 9);
	// addi r10,r31,100
	ctx.r10.s64 = r31.s64 + 100;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, r11.u8);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82ff69d8
	sub_82FF69D8(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// stw r3,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// bne 0x830288e4
	if (!cr0.eq) goto loc_830288E4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,216(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r4,r11,24320
	ctx.r4.s64 = r11.s64 + 24320;
	// li r6,45
	ctx.r6.s64 = 45;
	// li r5,1031
	ctx.r5.s64 = 1031;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
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
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// addi r4,r11,-8860
	ctx.r4.s64 = r11.s64 + -8860;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830288E4:
	// lbz r11,21(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 21);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83028988
	if (cr0.eq) goto loc_83028988;
	// lwz r10,176(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r29,4(r10)
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r28,0(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,176(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
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
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,176(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// addi r4,r11,-27796
	ctx.r4.s64 = r11.s64 + -27796;
	// bl 0x82fef1e8
	sub_82FEF1E8(ctx, base);
	// lwz r3,184(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,184(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// lwz r3,176(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// bl 0x82fef120
	sub_82FEF120(ctx, base);
loc_83028988:
	// li r11,68
	r11.s64 = 68;
	// lwz r4,180(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// li r10,84
	ctx.r10.s64 = 84;
	// sth r23,142(r31)
	PPC_STORE_U16(r31.u32 + 142, r23.u16);
	// li r3,44
	ctx.r3.s64 = 44;
	// sth r11,136(r31)
	PPC_STORE_U16(r31.u32 + 136, r11.u16);
	// sth r10,138(r31)
	PPC_STORE_U16(r31.u32 + 138, ctx.r10.u16);
	// sth r11,140(r31)
	PPC_STORE_U16(r31.u32 + 140, r11.u16);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830289d0
	if (cr0.eq) goto loc_830289D0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,180(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// addi r4,r31,136
	ctx.r4.s64 = r31.s64 + 136;
	// bl 0x8301f968
	sub_8301F968(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x830289d4
	goto loc_830289D4;
loc_830289D0:
	// mr r30,r23
	r30.u64 = r23.u64;
loc_830289D4:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8301f900
	sub_8301F900(ctx, base);
	// stw r30,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r30.u32);
	// lis r11,2
	r11.s64 = 131072;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// ori r11,r11,32841
	r11.u64 = r11.u64 | 32841;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// stbx r18,r27,r11
	PPC_STORE_U8(r27.u32 + r11.u32, r18.u8);
	// bl 0x82ff65e8
	sub_82FF65E8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x8306b508
	sub_8306B508(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
loc_83028A28:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x82fdae08
	sub_82FDAE08(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82fdae08
	sub_82FDAE08(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x8306b450
	sub_8306B450(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
loc_83028A54:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
loc_83028A60:
	// addi r1,r31,368
	ctx.r1.s64 = r31.s64 + 368;
	// b 0x831b0b50
	return;
}

__attribute__((alias("__imp__sub_83028A68"))) PPC_WEAK_FUNC(sub_83028A68);
PPC_FUNC_IMPL(__imp__sub_83028A68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-368
	r31.s64 = r12.s64 + -368;
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

__attribute__((alias("__imp__sub_83028A90"))) PPC_WEAK_FUNC(sub_83028A90);
PPC_FUNC_IMPL(__imp__sub_83028A90) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,388(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 388);
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

__attribute__((alias("__imp__sub_83028AC0"))) PPC_WEAK_FUNC(sub_83028AC0);
PPC_FUNC_IMPL(__imp__sub_83028AC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-368
	r31.s64 = r12.s64 + -368;
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

__attribute__((alias("__imp__sub_83028AE8"))) PPC_WEAK_FUNC(sub_83028AE8);
PPC_FUNC_IMPL(__imp__sub_83028AE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-368
	r31.s64 = r12.s64 + -368;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x8306b450
	sub_8306B450(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83028B10"))) PPC_WEAK_FUNC(sub_83028B10);
PPC_FUNC_IMPL(__imp__sub_83028B10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-368
	r31.s64 = r12.s64 + -368;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
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

__attribute__((alias("__imp__sub_83028B38"))) PPC_WEAK_FUNC(sub_83028B38);
PPC_FUNC_IMPL(__imp__sub_83028B38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-368
	r31.s64 = r12.s64 + -368;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
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

__attribute__((alias("__imp__sub_83028B60"))) PPC_WEAK_FUNC(sub_83028B60);
PPC_FUNC_IMPL(__imp__sub_83028B60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-368
	r31.s64 = r12.s64 + -368;
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

__attribute__((alias("__imp__sub_83028B88"))) PPC_WEAK_FUNC(sub_83028B88);
PPC_FUNC_IMPL(__imp__sub_83028B88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-368
	r31.s64 = r12.s64 + -368;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
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

__attribute__((alias("__imp__sub_83028BB0"))) PPC_WEAK_FUNC(sub_83028BB0);
PPC_FUNC_IMPL(__imp__sub_83028BB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-368
	r31.s64 = r12.s64 + -368;
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

__attribute__((alias("__imp__sub_83028BD8"))) PPC_WEAK_FUNC(sub_83028BD8);
PPC_FUNC_IMPL(__imp__sub_83028BD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-368
	r31.s64 = r12.s64 + -368;
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

__attribute__((alias("__imp__sub_83028C00"))) PPC_WEAK_FUNC(sub_83028C00);
PPC_FUNC_IMPL(__imp__sub_83028C00) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,388(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 388);
	// lwz r4,180(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 180);
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

__attribute__((alias("__imp__sub_83028C30"))) PPC_WEAK_FUNC(sub_83028C30);
PPC_FUNC_IMPL(__imp__sub_83028C30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-368
	r31.s64 = r12.s64 + -368;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
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

__attribute__((alias("__imp__sub_83028C60"))) PPC_WEAK_FUNC(sub_83028C60);
PPC_FUNC_IMPL(__imp__sub_83028C60) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r3,476(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// stw r30,308(r31)
	PPC_STORE_U32(r31.u32 + 308, r30.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,17(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 17);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83028cb4
	if (cr0.eq) goto loc_83028CB4;
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
loc_83028CB4:
	// li r3,36
	ctx.r3.s64 = 36;
	// lwz r4,180(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83028cdc
	if (cr0.eq) goto loc_83028CDC;
	// lwz r4,180(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// bl 0x83059550
	sub_83059550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83028ce0
	goto loc_83028CE0;
loc_83028CDC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_83028CE0:
	// lwz r3,176(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// stw r4,480(r30)
	PPC_STORE_U32(r30.u32 + 480, ctx.r4.u32);
	// bl 0x82fef120
	sub_82FEF120(ctx, base);
	// lwz r4,480(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 480);
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
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
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83028d24
	if (cr0.eq) goto loc_83028D24;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83028D24:
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83028d40
	if (cr0.eq) goto loc_83028D40;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83028D40:
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83028d5c
	if (cr0.eq) goto loc_83028D5C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83028D5C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8301fa40
	sub_8301FA40(ctx, base);
	// clrlwi. r24,r28,24
	r24.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// beq 0x83028e08
	if (cr0.eq) goto loc_83028E08;
	// lwz r11,176(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r28,4(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r27,0(r28)
	r27.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,176(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
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
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,176(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// addi r4,r11,-27796
	ctx.r4.s64 = r11.s64 + -27796;
	// bl 0x82fef1e8
	sub_82FEF1E8(ctx, base);
	// lwz r3,184(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
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
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,184(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// lwz r3,176(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// bl 0x82fef120
	sub_82FEF120(ctx, base);
loc_83028E08:
	// addi r25,r30,124
	r25.s64 = r30.s64 + 124;
	// lbz r9,9(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 9);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82ff5178
	sub_82FF5178(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// bne 0x83028ee4
	if (!cr0.eq) goto loc_83028EE4;
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
	// lwz r30,216(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// beq 0x83028ea4
	if (cr0.eq) goto loc_83028EA4;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r4,r11,24320
	ctx.r4.s64 = r11.s64 + 24320;
	// li r6,76
	ctx.r6.s64 = 76;
	// li r5,1828
	ctx.r5.s64 = 1828;
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
loc_83028EA4:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r4,r11,24320
	ctx.r4.s64 = r11.s64 + 24320;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1830
	ctx.r5.s64 = 1830;
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
loc_83028EE4:
	// li r11,68
	r11.s64 = 68;
	// lwz r4,180(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// li r10,84
	ctx.r10.s64 = 84;
	// li r3,44
	ctx.r3.s64 = 44;
	// sth r11,104(r31)
	PPC_STORE_U16(r31.u32 + 104, r11.u16);
	// sth r11,108(r31)
	PPC_STORE_U16(r31.u32 + 108, r11.u16);
	// li r11,0
	r11.s64 = 0;
	// sth r10,106(r31)
	PPC_STORE_U16(r31.u32 + 106, ctx.r10.u16);
	// sth r11,110(r31)
	PPC_STORE_U16(r31.u32 + 110, r11.u16);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83028f30
	if (cr0.eq) goto loc_83028F30;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,180(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// bl 0x8301f968
	sub_8301F968(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x83028f34
	goto loc_83028F34;
loc_83028F30:
	// li r28,0
	r28.s64 = 0;
loc_83028F34:
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8301f900
	sub_8301F900(ctx, base);
	// stw r28,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r28.u32);
	// lis r11,2
	r11.s64 = 131072;
	// li r26,1
	r26.s64 = 1;
	// ori r11,r11,32841
	r11.u64 = r11.u64 | 32841;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stbx r26,r27,r11
	PPC_STORE_U8(r27.u32 + r11.u32, r26.u8);
	// bl 0x82ff65e8
	sub_82FF65E8(ctx, base);
	// lwz r11,96(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83029030
	if (cr6.eq) goto loc_83029030;
	// li r3,48
	ctx.r3.s64 = 48;
	// lwz r4,180(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83028fb8
	if (cr0.eq) goto loc_83028FB8;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r7,180(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// lwz r5,40(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// bl 0x8306c8b8
	sub_8306C8B8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x83028fbc
	goto loc_83028FBC;
loc_83028FB8:
	// li r28,0
	r28.s64 = 0;
loc_83028FBC:
	// li r11,4
	r11.s64 = 4;
	// stw r28,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r28.u32);
	// stb r26,20(r28)
	PPC_STORE_U8(r28.u32 + 20, r26.u8);
	// stw r11,12(r28)
	PPC_STORE_U32(r28.u32 + 12, r11.u32);
	// lwz r11,96(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r27,0(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
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
loc_83029030:
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// lwz r6,180(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// lwz r5,96(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// lwz r4,184(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// bl 0x83068bb0
	sub_83068BB0(ctx, base);
	// addi r6,r30,220
	ctx.r6.s64 = r30.s64 + 220;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x830666d8
	sub_830666D8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x8306b508
	sub_8306B508(ctx, base);
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83029094
	if (cr0.eq) goto loc_83029094;
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
loc_83029094:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x830290a4
	if (cr6.eq) goto loc_830290A4;
	// lwz r3,176(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// bl 0x82fef530
	sub_82FEF530(ctx, base);
loc_830290A4:
	// lwz r30,480(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 480);
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x8306b450
	sub_8306B450(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,288
	ctx.r1.s64 = r31.s64 + 288;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_830290C8"))) PPC_WEAK_FUNC(sub_830290C8);
PPC_FUNC_IMPL(__imp__sub_830290C8) {
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

__attribute__((alias("__imp__sub_830290F8"))) PPC_WEAK_FUNC(sub_830290F8);
PPC_FUNC_IMPL(__imp__sub_830290F8) {
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

__attribute__((alias("__imp__sub_83029128"))) PPC_WEAK_FUNC(sub_83029128);
PPC_FUNC_IMPL(__imp__sub_83029128) {
	PPC_FUNC_PROLOGUE();
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

__attribute__((alias("__imp__sub_83029150"))) PPC_WEAK_FUNC(sub_83029150);
PPC_FUNC_IMPL(__imp__sub_83029150) {
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

__attribute__((alias("__imp__sub_83029180"))) PPC_WEAK_FUNC(sub_83029180);
PPC_FUNC_IMPL(__imp__sub_83029180) {
	PPC_FUNC_PROLOGUE();
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

__attribute__((alias("__imp__sub_830291A8"))) PPC_WEAK_FUNC(sub_830291A8);
PPC_FUNC_IMPL(__imp__sub_830291A8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x8306b450
	sub_8306B450(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830291D8"))) PPC_WEAK_FUNC(sub_830291D8);
PPC_FUNC_IMPL(__imp__sub_830291D8) {
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
	// li r3,20
	ctx.r3.s64 = 20;
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
	// beq 0x83029220
	if (cr0.eq) goto loc_83029220;
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
	// b 0x83029224
	goto loc_83029224;
loc_83029220:
	// li r11,0
	r11.s64 = 0;
loc_83029224:
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// stw r11,472(r30)
	PPC_STORE_U32(r30.u32 + 472, r11.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83029250
	if (cr0.eq) goto loc_83029250;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83060730
	sub_83060730(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83029254
	goto loc_83029254;
loc_83029250:
	// li r4,0
	ctx.r4.s64 = 0;
loc_83029254:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r4,476(r30)
	PPC_STORE_U32(r30.u32 + 476, ctx.r4.u32);
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
	// beq 0x83029290
	if (cr0.eq) goto loc_83029290;
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r6,216(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x8301fe60
	sub_8301FE60(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x83029294
	goto loc_83029294;
loc_83029290:
	// li r11,0
	r11.s64 = 0;
loc_83029294:
	// li r3,28
	ctx.r3.s64 = 28;
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
	// beq 0x830292f4
	if (cr0.eq) goto loc_830292F4;
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
	// beq 0x830292d4
	if (cr0.eq) goto loc_830292D4;
	// bl 0x83007488
	sub_83007488(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x830292d8
	goto loc_830292D8;
loc_830292D4:
	// li r6,0
	ctx.r6.s64 = 0;
loc_830292D8:
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
	// b 0x830292f8
	goto loc_830292F8;
loc_830292F4:
	// li r11,0
	r11.s64 = 0;
loc_830292F8:
	// li r3,28
	ctx.r3.s64 = 28;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// stw r11,492(r30)
	PPC_STORE_U32(r30.u32 + 492, r11.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// beq 0x83029354
	if (cr0.eq) goto loc_83029354;
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
	// beq 0x83029338
	if (cr0.eq) goto loc_83029338;
	// bl 0x83017920
	sub_83017920(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x8302933c
	goto loc_8302933C;
loc_83029338:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8302933C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83043618
	sub_83043618(ctx, base);
	// b 0x83029358
	goto loc_83029358;
loc_83029354:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83029358:
	// stw r3,496(r30)
	PPC_STORE_U32(r30.u32 + 496, ctx.r3.u32);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83029364"))) PPC_WEAK_FUNC(sub_83029364);
PPC_FUNC_IMPL(__imp__sub_83029364) {
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

__attribute__((alias("__imp__sub_83029394"))) PPC_WEAK_FUNC(sub_83029394);
PPC_FUNC_IMPL(__imp__sub_83029394) {
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

__attribute__((alias("__imp__sub_830293C4"))) PPC_WEAK_FUNC(sub_830293C4);
PPC_FUNC_IMPL(__imp__sub_830293C4) {
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

__attribute__((alias("__imp__sub_830293F4"))) PPC_WEAK_FUNC(sub_830293F4);
PPC_FUNC_IMPL(__imp__sub_830293F4) {
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

__attribute__((alias("__imp__sub_83029424"))) PPC_WEAK_FUNC(sub_83029424);
PPC_FUNC_IMPL(__imp__sub_83029424) {
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

__attribute__((alias("__imp__sub_83029454"))) PPC_WEAK_FUNC(sub_83029454);
PPC_FUNC_IMPL(__imp__sub_83029454) {
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

__attribute__((alias("__imp__sub_83029484"))) PPC_WEAK_FUNC(sub_83029484);
PPC_FUNC_IMPL(__imp__sub_83029484) {
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

__attribute__((alias("__imp__sub_830294C0"))) PPC_WEAK_FUNC(sub_830294C0);
PPC_FUNC_IMPL(__imp__sub_830294C0) {
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
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// stw r28,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r28.u32);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83029510
	if (!cr0.eq) goto loc_83029510;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x83029510
	if (!cr6.eq) goto loc_83029510;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830298f8
	goto loc_830298F8;
loc_83029510:
	// lwz r18,8(r29)
	r18.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r19,r30
	r19.u64 = r30.u64;
	// li r25,0
	r25.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83029894
	if (cr6.eq) goto loc_83029894;
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// mr r20,r25
	r20.u64 = r25.u64;
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83029894
	if (cr0.eq) goto loc_83029894;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r23,-1
	r23.s64 = -1;
	// addi r24,r11,-27800
	r24.s64 = r11.s64 + -27800;
loc_83029564:
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,492(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 492);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830295b8
	if (cr0.eq) goto loc_830295B8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830295b8
	if (cr0.eq) goto loc_830295B8;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,488(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 488);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83029874
	if (!cr6.lt) goto loc_83029874;
loc_830295B8:
	// lbz r11,16(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 16);
	// lwz r27,4(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83029668
	if (cr0.eq) goto loc_83029668;
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(r27.s32, 2, xer);
	// bne cr6,0x83029604
	if (!cr6.eq) goto loc_83029604;
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,168(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 168);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
	// b 0x83029874
	goto loc_83029874;
loc_83029604:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x83029614
	if (cr6.eq) goto loc_83029614;
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(r27.s32, 1, xer);
	// bne cr6,0x83029668
	if (!cr6.eq) goto loc_83029668;
loc_83029614:
	// lbz r11,14(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 14);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83029668
	if (cr0.eq) goto loc_83029668;
	// lbz r11,17(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 17);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83029668
	if (cr0.eq) goto loc_83029668;
	// lwz r3,8(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 8);
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,82
	ctx.r4.s64 = 82;
	// lwz r3,168(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 168);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
loc_83029668:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x83029678
	if (cr6.eq) goto loc_83029678;
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(r27.s32, 1, xer);
	// bne cr6,0x83029874
	if (!cr6.eq) goto loc_83029874;
loc_83029678:
	// lbz r11,16(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830296a8
	if (cr0.eq) goto loc_830296A8;
	// lwz r3,168(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 168);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830296A8:
	// cmplw cr6,r19,r18
	cr6.compare<uint32_t>(r19.u32, r18.u32, xer);
	// blt cr6,0x830297b0
	if (cr6.lt) goto loc_830297B0;
	// lbz r11,10(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 10);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83029730
	if (cr0.eq) goto loc_83029730;
	// li r3,32
	ctx.r3.s64 = 32;
	// lwz r4,216(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// stw r26,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r26.u32);
	// beq 0x83029724
	if (cr0.eq) goto loc_83029724;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r29,8(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r27,24(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r30,216(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 216);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stb r25,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, r25.u8);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// bl 0x82ff9d30
	sub_82FF9D30(ctx, base);
	// b 0x83029728
	goto loc_83029728;
loc_83029724:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_83029728:
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x830297a0
	goto loc_830297A0;
loc_83029730:
	// li r3,32
	ctx.r3.s64 = 32;
	// lwz r4,216(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// stw r26,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r26.u32);
	// beq 0x83029798
	if (cr0.eq) goto loc_83029798;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r29,8(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r27,24(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r30,216(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 216);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stb r25,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, r25.u8);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// bl 0x82ff9d30
	sub_82FF9D30(ctx, base);
	// b 0x8302979c
	goto loc_8302979C;
loc_83029798:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_8302979C:
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_830297A0:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,84(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 84);
	// bl 0x83043678
	sub_83043678(ctx, base);
	// b 0x83029830
	goto loc_83029830;
loc_830297B0:
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// lwz r3,84(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 84);
	// bl 0x83020000
	sub_83020000(ctx, base);
	// lbz r11,10(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 10);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r27,8(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r30,24(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// beq 0x830297fc
	if (cr0.eq) goto loc_830297FC;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r5,40(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// bl 0x82fe6ed8
	sub_82FE6ED8(ctx, base);
	// b 0x83029814
	goto loc_83029814;
loc_830297FC:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82fe6e90
	sub_82FE6E90(ctx, base);
loc_83029814:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff9c08
	sub_82FF9C08(ctx, base);
	// stw r25,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r25.u32);
	// stb r25,28(r29)
	PPC_STORE_U8(r29.u32 + 28, r25.u8);
	// stw r27,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r27.u32);
	// stb r25,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r25.u8);
loc_83029830:
	// lbz r11,10(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 10);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83029870
	if (cr0.eq) goto loc_83029870;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x83029870
	if (cr0.eq) goto loc_83029870;
	// lhz r11,0(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83029870
	if (cr0.eq) goto loc_83029870;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8302cd78
	sub_8302CD78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff9bf8
	sub_82FF9BF8(ctx, base);
loc_83029870:
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
loc_83029874:
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r20,r3
	cr6.compare<uint32_t>(r20.u32, ctx.r3.u32, xer);
	// blt cr6,0x83029564
	if (cr6.lt) goto loc_83029564;
loc_83029894:
	// lwz r3,472(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 472);
	// mr r30,r25
	r30.u64 = r25.u64;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x830298ec
	if (!cr6.gt) goto loc_830298EC;
loc_830298A8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8308ea58
	sub_8308EA58(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x8302cd78
	sub_8302CD78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff9bf8
	sub_82FF9BF8(ctx, base);
	// lwz r3,472(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 472);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x830298a8
	if (cr6.lt) goto loc_830298A8;
loc_830298EC:
	// lwz r11,472(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 472);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// stw r25,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r25.u32);
loc_830298F8:
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// b 0x831b0b50
	return;
}

__attribute__((alias("__imp__sub_83029900"))) PPC_WEAK_FUNC(sub_83029900);
PPC_FUNC_IMPL(__imp__sub_83029900) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,244(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 244);
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

__attribute__((alias("__imp__sub_83029930"))) PPC_WEAK_FUNC(sub_83029930);
PPC_FUNC_IMPL(__imp__sub_83029930) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,244(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 244);
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

__attribute__((alias("__imp__sub_83029968"))) PPC_WEAK_FUNC(sub_83029968);
PPC_FUNC_IMPL(__imp__sub_83029968) {
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
	// beq 0x83029a0c
	if (cr0.eq) goto loc_83029A0C;
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
	// bne 0x830299e0
	if (!cr0.eq) goto loc_830299E0;
loc_830299D8:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x83029f24
	goto loc_83029F24;
loc_830299E0:
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
	// beq cr6,0x83029a04
	if (cr6.eq) goto loc_83029A04;
	// li r4,231
	ctx.r4.s64 = 231;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_83029A04:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83029f24
	goto loc_83029F24;
loc_83029A0C:
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
	// bne 0x83029a64
	if (!cr0.eq) goto loc_83029A64;
	// li r4,226
	ctx.r4.s64 = 226;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_83029A54:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// b 0x830299d8
	goto loc_830299D8;
loc_83029A64:
	// li r4,59
	ctx.r4.s64 = 59;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83029aa4
	if (!cr0.eq) goto loc_83029AA4;
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
loc_83029AA4:
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// beq cr6,0x83029ac0
	if (cr6.eq) goto loc_83029AC0;
	// li r4,231
	ctx.r4.s64 = 231;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_83029AC0:
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
	// lwz r3,480(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 480);
	// bl 0x83028200
	sub_83028200(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x83029b68
	if (!cr0.eq) goto loc_83029B68;
	// lbz r11,14(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 14);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83029b38
	if (!cr0.eq) goto loc_83029B38;
	// lbz r11,15(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 15);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83029b38
	if (!cr0.eq) goto loc_83029B38;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83029b64
	if (cr0.eq) goto loc_83029B64;
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
	// b 0x83029b64
	goto loc_83029B64;
loc_83029B38:
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
loc_83029B64:
	// b 0x83029a54
	goto loc_83029A54;
loc_83029B68:
	// lbz r11,14(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 14);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83029bbc
	if (cr0.eq) goto loc_83029BBC;
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
	// bne 0x83029bbc
	if (!cr0.eq) goto loc_83029BBC;
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
loc_83029BBC:
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// li r26,1
	r26.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83029bdc
	if (!cr6.eq) goto loc_83029BDC;
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r11,r27
	r11.u64 = r27.u64;
	// beq cr6,0x83029be0
	if (cr6.eq) goto loc_83029BE0;
loc_83029BDC:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_83029BE0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83029de0
	if (cr0.eq) goto loc_83029DE0;
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
	// beq 0x83029c30
	if (cr0.eq) goto loc_83029C30;
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
	// b 0x83029a54
	goto loc_83029A54;
loc_83029C30:
	// clrlwi. r26,r22,24
	r26.u64 = r22.u32 & 0xFF;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// beq 0x83029c44
	if (cr0.eq) goto loc_83029C44;
	// li r4,270
	ctx.r4.s64 = 270;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_83029C44:
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
	// bne 0x83029cdc
	if (!cr0.eq) goto loc_83029CDC;
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
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r4,r11,24320
	ctx.r4.s64 = r11.s64 + 24320;
	// li r6,46
	ctx.r6.s64 = 46;
	// li r5,3224
	ctx.r5.s64 = 3224;
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
loc_83029CDC:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82ff65e8
	sub_82FF65E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83029d30
	if (!cr0.eq) goto loc_83029D30;
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
loc_83029D1C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x83029f24
	goto loc_83029F24;
loc_83029D30:
	// lwz r11,208(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 208);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83029d88
	if (cr6.eq) goto loc_83029D88;
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
	// ble cr6,0x83029d88
	if (!cr6.gt) goto loc_83029D88;
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
loc_83029D88:
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83029db0
	if (cr0.eq) goto loc_83029DB0;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x83029db0
	if (!cr6.eq) goto loc_83029DB0;
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
loc_83029DB0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff1820
	sub_82FF1820(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83029dd0
	if (cr0.eq) goto loc_83029DD0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff1060
	sub_82FF1060(ctx, base);
loc_83029DD0:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// b 0x83029f14
	goto loc_83029F14;
loc_83029DE0:
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
	// beq 0x83029e14
	if (cr0.eq) goto loc_83029E14;
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
	// b 0x83029d1c
	goto loc_83029D1C;
loc_83029E14:
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
	// bne 0x83029e6c
	if (!cr0.eq) goto loc_83029E6C;
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
loc_83029E6C:
	// lwz r11,208(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 208);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83029ec0
	if (cr6.eq) goto loc_83029EC0;
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
	// ble cr6,0x83029ec0
	if (!cr6.gt) goto loc_83029EC0;
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
loc_83029EC0:
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83029ee8
	if (cr0.eq) goto loc_83029EE8;
	// clrlwi. r11,r22,24
	r11.u64 = r22.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83029ee8
	if (!cr0.eq) goto loc_83029EE8;
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
loc_83029EE8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff1820
	sub_82FF1820(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83029f14
	if (cr0.eq) goto loc_83029F14;
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
loc_83029F14:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83029F24:
	// addi r1,r31,240
	ctx.r1.s64 = r31.s64 + 240;
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_83029F2C"))) PPC_WEAK_FUNC(sub_83029F2C);
PPC_FUNC_IMPL(__imp__sub_83029F2C) {
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

__attribute__((alias("__imp__sub_83029F54"))) PPC_WEAK_FUNC(sub_83029F54);
PPC_FUNC_IMPL(__imp__sub_83029F54) {
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

__attribute__((alias("__imp__sub_83029F88"))) PPC_WEAK_FUNC(sub_83029F88);
PPC_FUNC_IMPL(__imp__sub_83029F88) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(r11.u32, 20, xer);
	// ble cr6,0x8302a034
	if (!cr6.gt) goto loc_8302A034;
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, r11.u8);
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8302a030
	if (!cr0.eq) goto loc_8302A030;
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq 0x8302a024
	if (cr0.eq) goto loc_8302A024;
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
	// beq 0x8302a000
	if (cr0.eq) goto loc_8302A000;
	// bl 0x83017920
	sub_83017920(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x8302a004
	goto loc_8302A004;
loc_8302A000:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8302A004:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// bl 0x83020a30
	sub_83020A30(ctx, base);
	// b 0x8302a028
	goto loc_8302A028;
loc_8302A024:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8302A028:
	// stw r3,88(r30)
	PPC_STORE_U32(r30.u32 + 88, ctx.r3.u32);
	// b 0x8302a034
	goto loc_8302A034;
loc_8302A030:
	// bl 0x82ff3770
	sub_82FF3770(ctx, base);
loc_8302A034:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8302A03C"))) PPC_WEAK_FUNC(sub_8302A03C);
PPC_FUNC_IMPL(__imp__sub_8302A03C) {
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

__attribute__((alias("__imp__sub_8302A06C"))) PPC_WEAK_FUNC(sub_8302A06C);
PPC_FUNC_IMPL(__imp__sub_8302A06C) {
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

__attribute__((alias("__imp__sub_8302A0A8"))) PPC_WEAK_FUNC(sub_8302A0A8);
PPC_FUNC_IMPL(__imp__sub_8302A0A8) {
	PPC_FUNC_PROLOGUE();
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
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
	// stb r29,1(r11)
	PPC_STORE_U8(r11.u32 + 1, r29.u8);
	// lwz r11,172(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 172);
	// stw r29,188(r30)
	PPC_STORE_U32(r30.u32 + 188, r29.u32);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x8302a11c
	if (!cr6.eq) goto loc_8302A11C;
	// li r11,1
	r11.s64 = 1;
	// stb r11,16(r30)
	PPC_STORE_U8(r30.u32 + 16, r11.u8);
loc_8302A11C:
	// extsh. r11,r28
	r11.s64 = r28.s16;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r29,13(r30)
	PPC_STORE_U8(r30.u32 + 13, r29.u8);
	// li r11,1
	r11.s64 = 1;
	// stb r29,14(r30)
	PPC_STORE_U8(r30.u32 + 14, r29.u8);
	// stw r29,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r29.u32);
	// stb r11,15(r30)
	PPC_STORE_U8(r30.u32 + 15, r11.u8);
	// bne 0x8302a160
	if (!cr0.eq) goto loc_8302A160;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83028c60
	sub_83028C60(ctx, base);
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
loc_8302A160:
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
	// b 0x8302a188
	goto loc_8302A188;
	// b 0x8302a188
	goto loc_8302A188;
	// b 0x8302a188
	goto loc_8302A188;
loc_8302A188:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_8302A19C"))) PPC_WEAK_FUNC(sub_8302A19C);
PPC_FUNC_IMPL(__imp__sub_8302A19C) {
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

__attribute__((alias("__imp__sub_8302A1BC"))) PPC_WEAK_FUNC(sub_8302A1BC);
PPC_FUNC_IMPL(__imp__sub_8302A1BC) {
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

__attribute__((alias("__imp__sub_8302A1EC"))) PPC_WEAK_FUNC(sub_8302A1EC);
PPC_FUNC_IMPL(__imp__sub_8302A1EC) {
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
	// addi r3,r3,-24192
	ctx.r3.s64 = ctx.r3.s64 + -24192;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_8302A228"))) PPC_WEAK_FUNC(sub_8302A228);
PPC_FUNC_IMPL(__imp__sub_8302A228) {
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
	// addi r3,r3,-24188
	ctx.r3.s64 = ctx.r3.s64 + -24188;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_8302A264"))) PPC_WEAK_FUNC(sub_8302A264);
PPC_FUNC_IMPL(__imp__sub_8302A264) {
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
	// bne 0x8302a2b0
	if (!cr0.eq) goto loc_8302A2B0;
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
	// b 0x8302a31c
	goto loc_8302A31C;
loc_8302A2B0:
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
	// blt cr6,0x8302a2f0
	if (cr6.lt) goto loc_8302A2F0;
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
	// b 0x8302a310
	goto loc_8302A310;
loc_8302A2F0:
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
loc_8302A310:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
loc_8302A31C:
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
	// addi r3,r3,-24184
	ctx.r3.s64 = ctx.r3.s64 + -24184;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_8302A350"))) PPC_WEAK_FUNC(sub_8302A350);
PPC_FUNC_IMPL(__imp__sub_8302A350) {
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

__attribute__((alias("__imp__sub_8302A370"))) PPC_WEAK_FUNC(sub_8302A370);
PPC_FUNC_IMPL(__imp__sub_8302A370) {
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

__attribute__((alias("__imp__sub_8302A398"))) PPC_WEAK_FUNC(sub_8302A398);
PPC_FUNC_IMPL(__imp__sub_8302A398) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,244
	ctx.r4.s64 = ctx.r1.s64 + 244;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r21,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, r21.u32);
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bl 0x83029f88
	sub_83029F88(ctx, base);
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// ble cr6,0x8302a5a8
	if (!cr6.gt) goto loc_8302A5A8;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lbz r20,80(r1)
	r20.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r24,r11,-27800
	r24.s64 = r11.s64 + -27800;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r23,r11,-28120
	r23.s64 = r11.s64 + -28120;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r22,r11,-28364
	r22.s64 = r11.s64 + -28364;
loc_8302A3F4:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// lwz r30,8(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r28,16(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x8302a484
	if (cr0.eq) goto loc_8302A484;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8302a484
	if (cr0.eq) goto loc_8302A484;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8302a44c
	if (cr0.eq) goto loc_8302A44C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,48(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// bl 0x82ff9bf8
	sub_82FF9BF8(ctx, base);
	// b 0x8302a4ac
	goto loc_8302A4AC;
loc_8302A44C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8302a474
	if (cr0.eq) goto loc_8302A474;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,52(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// bl 0x82ff9bf8
	sub_82FF9BF8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// b 0x8302a49c
	goto loc_8302A49C;
loc_8302A474:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,472(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 472);
	// bl 0x8305c228
	sub_8305C228(ctx, base);
	// b 0x8302a4ac
	goto loc_8302A4AC;
loc_8302A484:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8302a4ac
	if (cr0.eq) goto loc_8302A4AC;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
loc_8302A49C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83026a90
	sub_83026A90(ctx, base);
loc_8302A4AC:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// bne cr6,0x8302a530
	if (!cr6.eq) goto loc_8302A530;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// ble cr6,0x8302a59c
	if (!cr6.gt) goto loc_8302A59C;
loc_8302A4C0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x83020000
	sub_83020000(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r8,32(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x8302a520
	if (!cr6.eq) goto loc_8302A520;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8302a520
	if (cr0.eq) goto loc_8302A520;
	// lwz r3,8(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,247
	ctx.r4.s64 = 247;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
loc_8302A520:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r27
	cr6.compare<int32_t>(r30.s32, r27.s32, xer);
	// blt cr6,0x8302a4c0
	if (cr6.lt) goto loc_8302A4C0;
	// b 0x8302a59c
	goto loc_8302A59C;
loc_8302A530:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r3,88(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 88);
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
	// beq 0x8302a584
	if (cr0.eq) goto loc_8302A584;
	// lwz r3,8(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,247
	ctx.r4.s64 = 247;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
loc_8302A584:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r3,88(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 88);
	// lwz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x83028148
	sub_83028148(ctx, base);
loc_8302A59C:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpw cr6,r27,r21
	cr6.compare<int32_t>(r27.s32, r21.s32, xer);
	// blt cr6,0x8302a3f4
	if (cr6.lt) goto loc_8302A3F4;
loc_8302A5A8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b58
	return;
}

__attribute__((alias("__imp__sub_8302A5B8"))) PPC_WEAK_FUNC(sub_8302A5B8);
PPC_FUNC_IMPL(__imp__sub_8302A5B8) {
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
	// li r14,1
	r14.s64 = 1;
	// addi r29,r30,316
	r29.s64 = r30.s64 + 316;
	// li r25,0
	r25.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,324(r31)
	PPC_STORE_U32(r31.u32 + 324, r30.u32);
	// stb r14,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, r14.u8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// stw r25,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r25.u32);
	// sth r25,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r25.u16);
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// bl 0x82ffb090
	sub_82FFB090(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8302a628
	if (!cr0.eq) goto loc_8302A628;
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
loc_8302A620:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8302b0d8
	goto loc_8302B0D8;
loc_8302A628:
	// lwz r11,440(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 440);
	// li r16,-1
	r16.s64 = -1;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// mr r28,r25
	r28.u64 = r25.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// stb r25,96(r31)
	PPC_STORE_U8(r31.u32 + 96, r25.u8);
	// mr r7,r16
	ctx.r7.u64 = r16.u64;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r27,r11,24
	r27.u64 = r11.u32 & 0xFF;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stb r27,97(r31)
	PPC_STORE_U8(r31.u32 + 97, r27.u8);
	// sthx r25,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r25.u16);
	// lwz r3,184(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// lwz r15,24(r29)
	r15.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r24,r3
	r24.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// bne 0x8302a6fc
	if (!cr0.eq) goto loc_8302A6FC;
	// addi r5,r31,104
	ctx.r5.s64 = r31.s64 + 104;
	// lwz r3,484(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 484);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// bl 0x83020060
	sub_83020060(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8302a6ac
	if (cr0.eq) goto loc_8302A6AC;
	// lwz r24,0(r3)
	r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r24,0
	cr0.compare<uint32_t>(r24.u32, 0, xer);
	// bne 0x8302a6fc
	if (!cr0.eq) goto loc_8302A6FC;
loc_8302A6AC:
	// li r3,48
	ctx.r3.s64 = 48;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// mr r28,r14
	r28.u64 = r14.u64;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8302a6e4
	if (cr0.eq) goto loc_8302A6E4;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// lwz r5,40(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// bl 0x8306c8b8
	sub_8306C8B8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8302a6e8
	goto loc_8302A6E8;
loc_8302A6E4:
	// mr r29,r25
	r29.u64 = r25.u64;
loc_8302A6E8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,484(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 484);
	// mr r24,r29
	r24.u64 = r29.u64;
	// bl 0x83020538
	sub_83020538(ctx, base);
	// stw r3,16(r29)
	PPC_STORE_U32(r29.u32 + 16, ctx.r3.u32);
loc_8302A6FC:
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8302a764
	if (cr0.eq) goto loc_8302A764;
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8302a71c
	if (cr0.eq) goto loc_8302A71C;
	// li r11,5
	r11.s64 = 5;
	// stw r11,12(r24)
	PPC_STORE_U32(r24.u32 + 12, r11.u32);
	// b 0x8302a730
	goto loc_8302A730;
loc_8302A71C:
	// lwz r11,12(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8302a74c
	if (!cr0.eq) goto loc_8302A74C;
loc_8302A730:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
loc_8302A74C:
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8302A764:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// addi r29,r30,400
	r29.s64 = r30.s64 + 400;
	// ori r10,r10,32808
	ctx.r10.u64 = ctx.r10.u64 | 32808;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r29,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r29.u32);
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x8301ec78
	sub_8301EC78(ctx, base);
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// beq 0x8302a7d4
	if (cr0.eq) goto loc_8302A7D4;
	// lwz r11,184(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// lbz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,188(r30)
	PPC_STORE_U32(r30.u32 + 188, r11.u32);
	// beq 0x8302a7f0
	if (cr0.eq) goto loc_8302A7F0;
	// lwz r4,196(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8302a7f0
	if (cr0.eq) goto loc_8302A7F0;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8302a7f0
	if (!cr0.eq) goto loc_8302A7F0;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// bl 0x8301f3f0
	sub_8301F3F0(ctx, base);
	// b 0x8302a7f0
	goto loc_8302A7F0;
loc_8302A7D4:
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8302a7f0
	if (cr0.eq) goto loc_8302A7F0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,8(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8301e438
	sub_8301E438(ctx, base);
loc_8302A7F0:
	// addi r23,r30,124
	r23.s64 = r30.s64 + 124;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
	// lwz r11,488(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 488);
	// lwz r10,84(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// mr r20,r25
	r20.u64 = r25.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r17,8(r10)
	r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,488(r30)
	PPC_STORE_U32(r30.u32 + 488, r11.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r19,r11,26808
	r19.s64 = r11.s64 + 26808;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r21,r11,-27800
	r21.s64 = r11.s64 + -27800;
	// lis r11,-32235
	r11.s64 = -2112552960;
	// addi r18,r11,-31840
	r18.s64 = r11.s64 + -31840;
	// lis r11,2
	r11.s64 = 131072;
	// ori r22,r11,32852
	r22.u64 = r11.u64 | 32852;
loc_8302A838:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82ff6188
	sub_82FF6188(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// beq cr6,0x8302a89c
	if (cr6.eq) goto loc_8302A89C;
	// clrlwi r11,r29,16
	r11.u64 = r29.u32 & 0xFFFF;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(r11.u32, 47, xer);
	// beq cr6,0x8302a89c
	if (cr6.eq) goto loc_8302A89C;
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(r11.u32, 62, xer);
	// beq cr6,0x8302a89c
	if (cr6.eq) goto loc_8302A89C;
	// lwz r10,132(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// lwzx r10,r10,r22
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r22.u32);
	// lbzx r11,r10,r11
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8302a890
	if (cr0.eq) goto loc_8302A890;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82ff6188
	sub_82FF6188(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8302a89c
	goto loc_8302A89C;
loc_8302A890:
	// li r4,207
	ctx.r4.s64 = 207;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_8302A89C:
	// lwz r10,132(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// clrlwi r11,r29,16
	r11.u64 = r29.u32 & 0xFFFF;
	// lwzx r10,r10,r22
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r22.u32);
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8302ae10
	if (!cr0.eq) goto loc_8302AE10;
	// addi r29,r30,232
	r29.s64 = r30.s64 + 232;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// stw r25,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r25.u32);
	// sth r25,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r25.u16);
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// bl 0x82ffb090
	sub_82FFB090(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq 0x8302ae70
	if (cr0.eq) goto loc_8302AE70;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ff0278
	sub_82FF0278(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8302a940
	if (!cr0.eq) goto loc_8302A940;
	// li r4,180
	ctx.r4.s64 = 180;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x82ff6498
	sub_82FF6498(ctx, base);
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(r11.u32, 62, xer);
	// beq cr6,0x8302a838
	if (cr6.eq) goto loc_8302A838;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(r11.u32, 47, xer);
	// beq cr6,0x8302a838
	if (cr6.eq) goto loc_8302A838;
	// cmplwi cr6,r11,39
	cr6.compare<uint32_t>(r11.u32, 39, xer);
	// beq cr6,0x8302a940
	if (cr6.eq) goto loc_8302A940;
	// cmplwi cr6,r11,34
	cr6.compare<uint32_t>(r11.u32, 34, xer);
	// beq cr6,0x8302a940
	if (cr6.eq) goto loc_8302A940;
	// lwz r10,132(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// lwzx r10,r10,r22
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r22.u32);
	// lbzx r11,r10,r11
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8302ae88
	if (cr0.eq) goto loc_8302AE88;
loc_8302A940:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r25,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r25.u16);
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// bl 0x8306d158
	sub_8306D158(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// cmplw cr6,r20,r17
	cr6.compare<uint32_t>(r20.u32, r17.u32, xer);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r25,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r25.u16);
	// blt cr6,0x8302aa6c
	if (cr6.lt) goto loc_8302AA6C;
	// lbz r11,10(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 10);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8302a9f0
	if (cr0.eq) goto loc_8302A9F0;
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
	// beq 0x8302a9e4
	if (cr0.eq) goto loc_8302A9E4;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8302a9ac
	if (cr6.eq) goto loc_8302A9AC;
	// lwz r7,8(r26)
	ctx.r7.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// b 0x8302a9b0
	goto loc_8302A9B0;
loc_8302A9AC:
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
loc_8302A9B0:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stb r25,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, r25.u8);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// sthx r25,r11,r9
	PPC_STORE_U16(r11.u32 + ctx.r9.u32, r25.u16);
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r9,216(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// bl 0x82ff9e88
	sub_82FF9E88(ctx, base);
	// b 0x8302a9e8
	goto loc_8302A9E8;
loc_8302A9E4:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_8302A9E8:
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// b 0x8302aa5c
	goto loc_8302AA5C;
loc_8302A9F0:
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
	// beq 0x8302aa54
	if (cr0.eq) goto loc_8302AA54;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8302aa18
	if (cr6.eq) goto loc_8302AA18;
	// lwz r8,8(r26)
	ctx.r8.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// b 0x8302aa1c
	goto loc_8302AA1C;
loc_8302AA18:
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
loc_8302AA1C:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stb r25,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, r25.u8);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// sthx r25,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r25.u16);
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r10,216(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82ff9d30
	sub_82FF9D30(ctx, base);
	// b 0x8302aa58
	goto loc_8302AA58;
loc_8302AA54:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_8302AA58:
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_8302AA5C:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// bl 0x83043678
	sub_83043678(ctx, base);
	// b 0x8302ab10
	goto loc_8302AB10;
loc_8302AA6C:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// bl 0x83020000
	sub_83020000(ctx, base);
	// lbz r11,10(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 10);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq 0x8302aac0
	if (cr0.eq) goto loc_8302AAC0;
	// beq cr6,0x8302aa98
	if (cr6.eq) goto loc_8302AA98;
	// lwz r28,8(r26)
	r28.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// b 0x8302aa9c
	goto loc_8302AA9C;
loc_8302AA98:
	// mr r28,r25
	r28.u64 = r25.u64;
loc_8302AA9C:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r25,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r25.u16);
	// lwz r5,40(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r3,16(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// bl 0x82fe6ed8
	sub_82FE6ED8(ctx, base);
	// b 0x8302aaf4
	goto loc_8302AAF4;
loc_8302AAC0:
	// beq cr6,0x8302aacc
	if (cr6.eq) goto loc_8302AACC;
	// lwz r28,8(r26)
	r28.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// b 0x8302aad0
	goto loc_8302AAD0;
loc_8302AACC:
	// mr r28,r25
	r28.u64 = r25.u64;
loc_8302AAD0:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r25,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r25.u16);
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r3,16(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// bl 0x82fe6e90
	sub_82FE6E90(ctx, base);
loc_8302AAF4:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ff9c08
	sub_82FF9C08(ctx, base);
	// stw r25,24(r27)
	PPC_STORE_U32(r27.u32 + 24, r25.u32);
	// stb r25,28(r27)
	PPC_STORE_U8(r27.u32 + 28, r25.u8);
	// stw r28,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r28.u32);
	// stb r14,0(r27)
	PPC_STORE_U8(r27.u32 + 0, r14.u8);
loc_8302AB10:
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// lwz r28,16(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// beq cr6,0x8302aba0
	if (cr6.eq) goto loc_8302ABA0;
	// addi r5,r31,112
	ctx.r5.s64 = r31.s64 + 112;
	// lwz r3,492(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 492);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8302ab44
	if (cr0.eq) goto loc_8302AB44;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8302ab64
	if (!cr0.eq) goto loc_8302AB64;
loc_8302AB44:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff02e0
	sub_82FF02E0(ctx, base);
	// lwz r11,488(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 488);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// lwz r3,492(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 492);
	// b 0x8302abe0
	goto loc_8302ABE0;
loc_8302AB64:
	// lwz r10,488(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 488);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// blt cr6,0x8302abf8
	if (cr6.lt) goto loc_8302ABF8;
	// lwz r3,8(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
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
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// b 0x8302ac10
	goto loc_8302AC10;
loc_8302ABA0:
	// addi r5,r31,116
	ctx.r5.s64 = r31.s64 + 116;
	// lwz r3,496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 496);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8302abc4
	if (cr0.eq) goto loc_8302ABC4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8302abe8
	if (!cr0.eq) goto loc_8302ABE8;
loc_8302ABC4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff02e0
	sub_82FF02E0(ctx, base);
	// lwz r11,488(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 488);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// lwz r3,496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 496);
loc_8302ABE0:
	// bl 0x83020968
	sub_83020968(ctx, base);
	// b 0x8302ac24
	goto loc_8302AC24;
loc_8302ABE8:
	// lwz r10,488(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 488);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x8302ac00
	if (!cr6.lt) goto loc_8302AC00;
loc_8302ABF8:
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x8302ac24
	goto loc_8302AC24;
loc_8302AC00:
	// lwz r3,8(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_8302AC10:
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
loc_8302AC24:
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8302ac64
	if (cr0.eq) goto loc_8302AC64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x8302ac64
	if (!cr6.eq) goto loc_8302AC64;
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
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// li r4,17
	ctx.r4.s64 = 17;
	// sthx r25,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r25.u16);
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// bl 0x8301f560
	sub_8301F560(ctx, base);
loc_8302AC64:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// addi r28,r30,260
	r28.s64 = r30.s64 + 260;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// sthx r25,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r25.u16);
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// bl 0x83026be8
	sub_83026BE8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8302ace0
	if (!cr0.eq) goto loc_8302ACE0;
	// li r4,199
	ctx.r4.s64 = 199;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// bl 0x82ff6498
	sub_82FF6498(ctx, base);
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(r11.u32, 62, xer);
	// beq cr6,0x8302ace0
	if (cr6.eq) goto loc_8302ACE0;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(r11.u32, 47, xer);
	// beq cr6,0x8302ace0
	if (cr6.eq) goto loc_8302ACE0;
	// lwz r10,132(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// lwzx r10,r10,r22
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r22.u32);
	// lbzx r11,r10,r11
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8302ae88
	if (cr0.eq) goto loc_8302AE88;
loc_8302ACE0:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r25,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r25.u16);
	// lwz r4,24(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// bl 0x82ff9c08
	sub_82FF9C08(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8302ad44
	if (cr6.eq) goto loc_8302AD44;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8302ad44
	if (cr0.eq) goto loc_8302AD44;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// sthx r25,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r25.u16);
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// lwz r5,24(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8302AD44:
	// lbz r11,10(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 10);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8302ae08
	if (cr0.eq) goto loc_8302AE08;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r4,58
	ctx.r4.s64 = 58;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r25,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r25.u16);
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// bl 0x82fda0f8
	sub_82FDA0F8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(r28.s32, -1, xer);
	// beq cr6,0x8302ae08
	if (cr6.eq) goto loc_8302AE08;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r25,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r25.u16);
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8302adc4
	if (cr0.eq) goto loc_8302ADC4;
	// lhz r11,0(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8302adc4
	if (cr0.eq) goto loc_8302ADC4;
	// addi r11,r4,2
	r11.s64 = ctx.r4.s64 + 2;
	// b 0x8302adac
	goto loc_8302ADAC;
loc_8302ADA8:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
loc_8302ADAC:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8302ada8
	if (!cr0.eq) goto loc_8302ADA8;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r5,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r5.s64 = r11.s32 >> 1;
	// b 0x8302adc8
	goto loc_8302ADC8;
loc_8302ADC4:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
loc_8302ADC8:
	// li r3,58
	ctx.r3.s64 = 58;
	// bl 0x82fda210
	sub_82FDA210(ctx, base);
	// cmpw cr6,r28,r3
	cr6.compare<int32_t>(r28.s32, ctx.r3.s32, xer);
	// beq cr6,0x8302ade0
	if (cr6.eq) goto loc_8302ADE0;
	// li r4,288
	ctx.r4.s64 = 288;
	// b 0x8302adfc
	goto loc_8302ADFC;
loc_8302ADE0:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x8302adf8
	if (cr6.eq) goto loc_8302ADF8;
	// lwz r11,236(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 236);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bne cr6,0x8302ae08
	if (!cr6.eq) goto loc_8302AE08;
loc_8302ADF8:
	// li r4,289
	ctx.r4.s64 = 289;
loc_8302ADFC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// b 0x8302a838
	goto loc_8302A838;
loc_8302AE08:
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// b 0x8302a838
	goto loc_8302A838;
loc_8302AE10:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8302aebc
	if (cr6.eq) goto loc_8302AEBC;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(r11.u32, 47, xer);
	// beq cr6,0x8302aee8
	if (cr6.eq) goto loc_8302AEE8;
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(r11.u32, 62, xer);
	// beq cr6,0x8302afc8
	if (cr6.eq) goto loc_8302AFC8;
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(r11.u32, 60, xer);
	// beq cr6,0x8302af08
	if (cr6.eq) goto loc_8302AF08;
	// cmplwi cr6,r11,39
	cr6.compare<uint32_t>(r11.u32, 39, xer);
	// beq cr6,0x8302ae40
	if (cr6.eq) goto loc_8302AE40;
	// cmplwi cr6,r11,34
	cr6.compare<uint32_t>(r11.u32, 34, xer);
	// bne cr6,0x8302a838
	if (!cr6.eq) goto loc_8302A838;
loc_8302AE40:
	// li r4,174
	ctx.r4.s64 = 174;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82ff63e0
	sub_82FF63E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
	// b 0x8302a838
	goto loc_8302A838;
loc_8302AE70:
	// li r4,174
	ctx.r4.s64 = 174;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
	// b 0x8302a620
	goto loc_8302A620;
loc_8302AE88:
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(r11.u32, 60, xer);
	// bne cr6,0x8302a620
	if (!cr6.eq) goto loc_8302A620;
	// lwz r3,8(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,198
	ctx.r4.s64 = 198;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
	// b 0x8302a620
	goto loc_8302A620;
loc_8302AEBC:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r6,47
	ctx.r6.s64 = 47;
	// addi r4,r11,24320
	ctx.r4.s64 = r11.s64 + 24320;
	// li r5,1491
	ctx.r5.s64 = 1491;
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
loc_8302AEE8:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// stb r14,96(r31)
	PPC_STORE_U8(r31.u32 + 96, r14.u8);
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8302af2c
	if (!cr0.eq) goto loc_8302AF2C;
loc_8302AF08:
	// lwz r3,8(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
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
loc_8302AF2C:
	// lbz r11,10(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 10);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8302af54
	if (cr0.eq) goto loc_8302AF54;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// beq cr6,0x8302af64
	if (cr6.eq) goto loc_8302AF64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// lwz r4,84(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8302a398
	sub_8302A398(ctx, base);
loc_8302AF54:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// beq cr6,0x8302af64
	if (cr6.eq) goto loc_8302AF64;
	// lwz r3,496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 496);
	// bl 0x8301ff70
	sub_8301FF70(ctx, base);
loc_8302AF64:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r6,84(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830294c0
	sub_830294C0(ctx, base);
	// lwz r11,92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// lwz r28,40(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8302b004
	if (cr6.eq) goto loc_8302B004;
	// lbz r11,10(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 10);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8302afb0
	if (cr0.eq) goto loc_8302AFB0;
	// lwz r11,8(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x8302cd78
	sub_8302CD78(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_8302AFB0:
	// lbz r11,10(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 10);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8302afd4
	if (cr0.eq) goto loc_8302AFD4;
	// lwz r11,8(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x8302afd8
	goto loc_8302AFD8;
loc_8302AFC8:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// b 0x8302af2c
	goto loc_8302AF2C;
loc_8302AFD4:
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
loc_8302AFD8:
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// li r9,0
	ctx.r9.s64 = 0;
	// lbz r10,97(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 97);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// lwz r7,84(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8302B004:
	// lbz r11,96(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 96);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8302b0d4
	if (cr0.eq) goto loc_8302B0D4;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8302b074
	if (cr0.eq) goto loc_8302B074;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
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
	// blt 0x8302b074
	if (cr0.lt) goto loc_8302B074;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
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
loc_8302B074:
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8302b0b8
	if (cr0.eq) goto loc_8302B0B8;
	// lbz r11,10(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 10);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8302b098
	if (cr0.eq) goto loc_8302B098;
	// lwz r11,8(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x8302b09c
	goto loc_8302B09C;
loc_8302B098:
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
loc_8302B09C:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lbz r6,97(r31)
	ctx.r6.u64 = PPC_LOAD_U8(r31.u32 + 97);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8302B0B8:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// bl 0x8301e348
	sub_8301E348(ctx, base);
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8302b0d4
	if (cr6.eq) goto loc_8302B0D4;
	// lwz r11,332(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 332);
	// stb r25,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r25.u8);
loc_8302B0D4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8302B0D8:
	// addi r1,r31,304
	ctx.r1.s64 = r31.s64 + 304;
	// b 0x831b0b40
	return;
}

__attribute__((alias("__imp__sub_8302B0E0"))) PPC_WEAK_FUNC(sub_8302B0E0);
PPC_FUNC_IMPL(__imp__sub_8302B0E0) {
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

__attribute__((alias("__imp__sub_8302B110"))) PPC_WEAK_FUNC(sub_8302B110);
PPC_FUNC_IMPL(__imp__sub_8302B110) {
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

__attribute__((alias("__imp__sub_8302B140"))) PPC_WEAK_FUNC(sub_8302B140);
PPC_FUNC_IMPL(__imp__sub_8302B140) {
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

__attribute__((alias("__imp__sub_8302B178"))) PPC_WEAK_FUNC(sub_8302B178);
PPC_FUNC_IMPL(__imp__sub_8302B178) {
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
	// bne 0x8302b1d0
	if (!cr0.eq) goto loc_8302B1D0;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r6,78
	ctx.r6.s64 = 78;
	// addi r4,r11,24320
	ctx.r4.s64 = r11.s64 + 24320;
	// li r5,287
	ctx.r5.s64 = 287;
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
loc_8302B1D0:
	// li r29,1
	r29.s64 = 1;
	// stb r29,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r29.u8);
loc_8302B1D8:
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
	// bne cr6,0x8302b220
	if (!cr6.eq) goto loc_8302B220;
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
	// b 0x8302b424
	goto loc_8302B424;
loc_8302B220:
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x8302b2ac
	if (!cr6.eq) goto loc_8302B2AC;
	// lwz r11,440(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 440);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8302b2a4
	if (!cr0.eq) goto loc_8302B2A4;
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
loc_8302B2A4:
	// li r29,0
	r29.s64 = 0;
	// b 0x8302b438
	goto loc_8302B438;
loc_8302B2AC:
	// li r11,1
	r11.s64 = 1;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stb r11,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r11.u8);
	// beq cr6,0x8302b324
	if (cr6.eq) goto loc_8302B324;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x8302b318
	if (cr6.eq) goto loc_8302B318;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x8302b308
	if (cr6.eq) goto loc_8302B308;
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// beq cr6,0x8302b2fc
	if (cr6.eq) goto loc_8302B2FC;
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// beq cr6,0x8302b2ec
	if (cr6.eq) goto loc_8302B2EC;
	// li r4,60
	ctx.r4.s64 = 60;
	// addi r3,r30,124
	ctx.r3.s64 = r30.s64 + 124;
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
	// b 0x8302b368
	goto loc_8302B368;
loc_8302B2EC:
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8302a5b8
	sub_8302A5B8(ctx, base);
	// b 0x8302b368
	goto loc_8302B368;
loc_8302B2FC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0ca8
	sub_82FF0CA8(ctx, base);
	// b 0x8302b368
	goto loc_8302B368;
loc_8302B308:
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83026648
	sub_83026648(ctx, base);
	// b 0x8302b368
	goto loc_8302B368;
loc_8302B318:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff1d50
	sub_82FF1D50(ctx, base);
	// b 0x8302b368
	goto loc_8302B368;
loc_8302B324:
	// lwz r11,440(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 440);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8302b354
	if (cr0.eq) goto loc_8302B354;
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
loc_8302B354:
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
loc_8302B368:
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
	// beq cr6,0x8302b3b8
	if (cr6.eq) goto loc_8302B3B8;
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
loc_8302B3B8:
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8302b438
	if (!cr0.eq) goto loc_8302B438;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8302b3ec
	if (cr0.eq) goto loc_8302B3EC;
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
loc_8302B3EC:
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
	// beq 0x8302b438
	if (cr0.eq) goto loc_8302B438;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8302B424:
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
loc_8302B438:
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8302b448
	if (!cr0.eq) goto loc_8302B448;
	// addi r3,r30,124
	ctx.r3.s64 = r30.s64 + 124;
	// bl 0x82ff5aa8
	sub_82FF5AA8(ctx, base);
loc_8302B448:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x8302b468
	goto loc_8302B468;
	// lwz r30,180(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// lbz r29,80(r31)
	r29.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// b 0x8302b1d8
	goto loc_8302B1D8;
	// b 0x8302b464
	goto loc_8302B464;
	// b 0x8302b464
	goto loc_8302B464;
loc_8302B464:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8302B468:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8302B478"))) PPC_WEAK_FUNC(sub_8302B478);
PPC_FUNC_IMPL(__imp__sub_8302B478) {
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
	// beq 0x8302b4c4
	if (cr0.eq) goto loc_8302B4C4;
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
loc_8302B4C4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31997
	ctx.r3.s64 = -2096955392;
	// addi r3,r3,-19376
	ctx.r3.s64 = ctx.r3.s64 + -19376;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8302B4E4"))) PPC_WEAK_FUNC(sub_8302B4E4);
PPC_FUNC_IMPL(__imp__sub_8302B4E4) {
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

__attribute__((alias("__imp__sub_8302B504"))) PPC_WEAK_FUNC(sub_8302B504);
PPC_FUNC_IMPL(__imp__sub_8302B504) {
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

__attribute__((alias("__imp__sub_8302B534"))) PPC_WEAK_FUNC(sub_8302B534);
PPC_FUNC_IMPL(__imp__sub_8302B534) {
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
	// addi r3,r3,-19364
	ctx.r3.s64 = ctx.r3.s64 + -19364;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8302B570"))) PPC_WEAK_FUNC(sub_8302B570);
PPC_FUNC_IMPL(__imp__sub_8302B570) {
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
	// addi r3,r3,-19360
	ctx.r3.s64 = ctx.r3.s64 + -19360;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8302B5AC"))) PPC_WEAK_FUNC(sub_8302B5AC);
PPC_FUNC_IMPL(__imp__sub_8302B5AC) {
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
	// bne 0x8302b60c
	if (!cr0.eq) goto loc_8302B60C;
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
	// b 0x8302b66c
	goto loc_8302B66C;
loc_8302B60C:
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
	// blt cr6,0x8302b64c
	if (cr6.lt) goto loc_8302B64C;
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
	// b 0x8302b66c
	goto loc_8302B66C;
loc_8302B64C:
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
loc_8302B66C:
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
	// addi r3,r3,-19356
	ctx.r3.s64 = ctx.r3.s64 + -19356;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8302B6AC"))) PPC_WEAK_FUNC(sub_8302B6AC);
PPC_FUNC_IMPL(__imp__sub_8302B6AC) {
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

__attribute__((alias("__imp__sub_8302B6CC"))) PPC_WEAK_FUNC(sub_8302B6CC);
PPC_FUNC_IMPL(__imp__sub_8302B6CC) {
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

__attribute__((alias("__imp__sub_8302B700"))) PPC_WEAK_FUNC(sub_8302B700);
PPC_FUNC_IMPL(__imp__sub_8302B700) {
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
loc_8302B730:
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8302b8d0
	if (cr0.eq) goto loc_8302B8D0;
loc_8302B73C:
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8302b8cc
	if (cr0.eq) goto loc_8302B8CC;
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
	// bne cr6,0x8302b780
	if (!cr6.eq) goto loc_8302B780;
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
	// b 0x8302b73c
	goto loc_8302B73C;
loc_8302B780:
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x8302b7dc
	if (!cr6.eq) goto loc_8302B7DC;
	// lwz r11,440(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 440);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8302b7d4
	if (!cr0.eq) goto loc_8302B7D4;
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
loc_8302B7D4:
	// stb r29,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r29.u8);
	// b 0x8302b73c
	goto loc_8302B73C;
loc_8302B7DC:
	// li r11,1
	r11.s64 = 1;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stb r11,81(r31)
	PPC_STORE_U8(r31.u32 + 81, r11.u8);
	// beq cr6,0x8302b854
	if (cr6.eq) goto loc_8302B854;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x8302b848
	if (cr6.eq) goto loc_8302B848;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x8302b838
	if (cr6.eq) goto loc_8302B838;
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// beq cr6,0x8302b82c
	if (cr6.eq) goto loc_8302B82C;
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// beq cr6,0x8302b81c
	if (cr6.eq) goto loc_8302B81C;
	// li r4,60
	ctx.r4.s64 = 60;
	// addi r3,r30,124
	ctx.r3.s64 = r30.s64 + 124;
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
	// b 0x8302b888
	goto loc_8302B888;
loc_8302B81C:
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8302a5b8
	sub_8302A5B8(ctx, base);
	// b 0x8302b888
	goto loc_8302B888;
loc_8302B82C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0ca8
	sub_82FF0CA8(ctx, base);
	// b 0x8302b888
	goto loc_8302B888;
loc_8302B838:
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83026648
	sub_83026648(ctx, base);
	// b 0x8302b888
	goto loc_8302B888;
loc_8302B848:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff1d50
	sub_82FF1D50(ctx, base);
	// b 0x8302b888
	goto loc_8302B888;
loc_8302B854:
	// lwz r11,440(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 440);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8302b874
	if (cr0.eq) goto loc_8302B874;
	// li r4,280
	ctx.r4.s64 = 280;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8302B874:
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
loc_8302B888:
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
	// beq cr6,0x8302b8b8
	if (cr6.eq) goto loc_8302B8B8;
	// li r4,231
	ctx.r4.s64 = 231;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8302B8B8:
	// stb r29,81(r31)
	PPC_STORE_U8(r31.u32 + 81, r29.u8);
	// b 0x8302b73c
	goto loc_8302B73C;
	// lwz r30,148(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// li r29,0
	r29.s64 = 0;
	// b 0x8302b730
	goto loc_8302B730;
loc_8302B8CC:
	// b 0x8302b730
	goto loc_8302B730;
loc_8302B8D0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8302B8E4"))) PPC_WEAK_FUNC(sub_8302B8E4);
PPC_FUNC_IMPL(__imp__sub_8302B8E4) {
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
	// beq 0x8302b914
	if (cr0.eq) goto loc_8302B914;
	// lwz r30,148(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// li r4,231
	ctx.r4.s64 = 231;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// b 0x8302b918
	goto loc_8302B918;
loc_8302B914:
	// lwz r30,148(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 148);
loc_8302B918:
	// lwz r11,92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8302b940
	if (cr6.eq) goto loc_8302B940;
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
loc_8302B940:
	// li r11,0
	r11.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31997
	ctx.r3.s64 = -2096955392;
	// addi r3,r3,-18240
	ctx.r3.s64 = ctx.r3.s64 + -18240;
	// stb r11,81(r31)
	PPC_STORE_U8(r31.u32 + 81, r11.u8);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8302B960"))) PPC_WEAK_FUNC(sub_8302B960);
PPC_FUNC_IMPL(__imp__sub_8302B960) {
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
	// lwz r3,472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 472);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8302b98c
	if (cr0.eq) goto loc_8302B98C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82fdeaa8
	sub_82FDEAA8(ctx, base);
loc_8302B98C:
	// lwz r3,476(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 476);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8302b9ac
	if (cr0.eq) goto loc_8302B9AC;
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
loc_8302B9AC:
	// lwz r30,484(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 484);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x8302b9c8
	if (cr0.eq) goto loc_8302B9C8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830251c0
	sub_830251C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_8302B9C8:
	// lwz r30,492(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 492);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x8302b9e4
	if (cr0.eq) goto loc_8302B9E4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83020900
	sub_83020900(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_8302B9E4:
	// lwz r31,496(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 496);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x8302ba00
	if (cr0.eq) goto loc_8302BA00;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83020900
	sub_83020900(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_8302BA00:
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

__attribute__((alias("__imp__sub_8302BA20"))) PPC_WEAK_FUNC(sub_8302BA20);
PPC_FUNC_IMPL(__imp__sub_8302BA20) {
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
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// bl 0x82ff3818
	sub_82FF3818(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r10,r11,27576
	ctx.r10.s64 = r11.s64 + 27576;
	// li r11,0
	r11.s64 = 0;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r11,472(r30)
	PPC_STORE_U32(r30.u32 + 472, r11.u32);
	// stw r11,480(r30)
	PPC_STORE_U32(r30.u32 + 480, r11.u32);
	// stw r11,484(r30)
	PPC_STORE_U32(r30.u32 + 484, r11.u32);
	// stw r11,488(r30)
	PPC_STORE_U32(r30.u32 + 488, r11.u32);
	// stw r11,492(r30)
	PPC_STORE_U32(r30.u32 + 492, r11.u32);
	// stw r11,496(r30)
	PPC_STORE_U32(r30.u32 + 496, r11.u32);
	// stw r11,476(r30)
	PPC_STORE_U32(r30.u32 + 476, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830291d8
	sub_830291D8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8302baec
	if (cr6.eq) goto loc_8302BAEC;
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
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8302baf4
	if (!cr0.eq) goto loc_8302BAF4;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r6,44
	ctx.r6.s64 = 44;
	// addi r4,r11,24320
	ctx.r4.s64 = r11.s64 + 24320;
	// li r5,71
	ctx.r5.s64 = 71;
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
loc_8302BAEC:
	// lwz r11,476(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// stw r11,168(r30)
	PPC_STORE_U32(r30.u32 + 168, r11.u32);
loc_8302BAF4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8302BB08"))) PPC_WEAK_FUNC(sub_8302BB08);
PPC_FUNC_IMPL(__imp__sub_8302BB08) {
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

__attribute__((alias("__imp__sub_8302BB28"))) PPC_WEAK_FUNC(sub_8302BB28);
PPC_FUNC_IMPL(__imp__sub_8302BB28) {
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
	// bl 0x8302b960
	sub_8302B960(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_8302BB4C"))) PPC_WEAK_FUNC(sub_8302BB4C);
PPC_FUNC_IMPL(__imp__sub_8302BB4C) {
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

__attribute__((alias("__imp__sub_8302BB78"))) PPC_WEAK_FUNC(sub_8302BB78);
PPC_FUNC_IMPL(__imp__sub_8302BB78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r3,r11,-27652
	ctx.r3.s64 = r11.s64 + -27652;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8302BB90"))) PPC_WEAK_FUNC(sub_8302BB90);
PPC_FUNC_IMPL(__imp__sub_8302BB90) {
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
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,27576
	r11.s64 = r11.s64 + 27576;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x8302b960
	sub_8302B960(ctx, base);
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

__attribute__((alias("__imp__sub_8302BBE0"))) PPC_WEAK_FUNC(sub_8302BBE0);
PPC_FUNC_IMPL(__imp__sub_8302BBE0) {
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

__attribute__((alias("__imp__sub_8302BC10"))) PPC_WEAK_FUNC(sub_8302BC10);
PPC_FUNC_IMPL(__imp__sub_8302BC10) {
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
	// beq 0x8302bc90
	if (cr0.eq) goto loc_8302BC90;
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
loc_8302BC90:
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
	// beq 0x8302bce4
	if (cr0.eq) goto loc_8302BCE4;
	// li r4,279
	ctx.r4.s64 = 279;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// b 0x8302bd58
	goto loc_8302BD58;
loc_8302BCE4:
	// bl 0x8302b700
	sub_8302B700(ctx, base);
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
	// beq 0x8302bd6c
	if (cr0.eq) goto loc_8302BD6C;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8302bd2c
	if (cr0.eq) goto loc_8302BD2C;
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
loc_8302BD2C:
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
	// bne 0x8302bd6c
	if (!cr0.eq) goto loc_8302BD6C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff2b28
	sub_82FF2B28(ctx, base);
loc_8302BD58:
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
loc_8302BD6C:
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8302bd9c
	if (cr0.eq) goto loc_8302BD9C;
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
loc_8302BD9C:
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
	// b 0x8302bdc4
	goto loc_8302BDC4;
	// b 0x8302bdc4
	goto loc_8302BDC4;
	// b 0x8302bdc4
	goto loc_8302BDC4;
loc_8302BDC4:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8302BDD4"))) PPC_WEAK_FUNC(sub_8302BDD4);
PPC_FUNC_IMPL(__imp__sub_8302BDD4) {
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

__attribute__((alias("__imp__sub_8302BDF4"))) PPC_WEAK_FUNC(sub_8302BDF4);
PPC_FUNC_IMPL(__imp__sub_8302BDF4) {
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

__attribute__((alias("__imp__sub_8302BE24"))) PPC_WEAK_FUNC(sub_8302BE24);
PPC_FUNC_IMPL(__imp__sub_8302BE24) {
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
	// addi r3,r3,-16964
	ctx.r3.s64 = ctx.r3.s64 + -16964;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8302BE60"))) PPC_WEAK_FUNC(sub_8302BE60);
PPC_FUNC_IMPL(__imp__sub_8302BE60) {
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
	// addi r3,r3,-16960
	ctx.r3.s64 = ctx.r3.s64 + -16960;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8302BE9C"))) PPC_WEAK_FUNC(sub_8302BE9C);
PPC_FUNC_IMPL(__imp__sub_8302BE9C) {
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
	// bne 0x8302befc
	if (!cr0.eq) goto loc_8302BEFC;
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
	// b 0x8302bf5c
	goto loc_8302BF5C;
loc_8302BEFC:
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
	// blt cr6,0x8302bf3c
	if (cr6.lt) goto loc_8302BF3C;
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
	// b 0x8302bf5c
	goto loc_8302BF5C;
loc_8302BF3C:
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
loc_8302BF5C:
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
	// addi r3,r3,-16956
	ctx.r3.s64 = ctx.r3.s64 + -16956;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8302BF9C"))) PPC_WEAK_FUNC(sub_8302BF9C);
PPC_FUNC_IMPL(__imp__sub_8302BF9C) {
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

__attribute__((alias("__imp__sub_8302BFBC"))) PPC_WEAK_FUNC(sub_8302BFBC);
PPC_FUNC_IMPL(__imp__sub_8302BFBC) {
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

__attribute__((alias("__imp__sub_8302BFE8"))) PPC_WEAK_FUNC(sub_8302BFE8);
PPC_FUNC_IMPL(__imp__sub_8302BFE8) {
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
	// bl 0x8302bb90
	sub_8302BB90(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8302c018
	if (cr0.eq) goto loc_8302C018;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_8302C018:
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

__attribute__((alias("__imp__sub_8302C040"))) PPC_WEAK_FUNC(sub_8302C040);
PPC_FUNC_IMPL(__imp__sub_8302C040) {
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
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8302c084
	if (cr0.eq) goto loc_8302C084;
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
loc_8302C084:
	// li r3,36
	ctx.r3.s64 = 36;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8302c0b4
	if (cr0.eq) goto loc_8302C0B4;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82fe7048
	sub_82FE7048(ctx, base);
	// b 0x8302c0b8
	goto loc_8302C0B8;
loc_8302C0B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8302C0B8:
	// stw r3,32(r30)
	PPC_STORE_U32(r30.u32 + 32, ctx.r3.u32);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8302C0C4"))) PPC_WEAK_FUNC(sub_8302C0C4);
PPC_FUNC_IMPL(__imp__sub_8302C0C4) {
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

__attribute__((alias("__imp__sub_8302C100"))) PPC_WEAK_FUNC(sub_8302C100);
PPC_FUNC_IMPL(__imp__sub_8302C100) {
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
	// bne 0x8302c158
	if (!cr0.eq) goto loc_8302C158;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r6,78
	ctx.r6.s64 = 78;
	// addi r4,r11,28392
	ctx.r4.s64 = r11.s64 + 28392;
	// li r5,311
	ctx.r5.s64 = 311;
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
loc_8302C158:
	// li r29,1
	r29.s64 = 1;
	// stb r29,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r29.u8);
loc_8302C160:
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
	// bne cr6,0x8302c1a8
	if (!cr6.eq) goto loc_8302C1A8;
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
	// b 0x8302c3b4
	goto loc_8302C3B4;
loc_8302C1A8:
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x8302c234
	if (!cr6.eq) goto loc_8302C234;
	// lwz r11,440(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 440);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8302c22c
	if (!cr0.eq) goto loc_8302C22C;
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
loc_8302C22C:
	// li r29,0
	r29.s64 = 0;
	// b 0x8302c3c8
	goto loc_8302C3C8;
loc_8302C234:
	// li r11,1
	r11.s64 = 1;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stb r11,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r11.u8);
	// beq cr6,0x8302c2b4
	if (cr6.eq) goto loc_8302C2B4;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x8302c2a8
	if (cr6.eq) goto loc_8302C2A8;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x8302c29c
	if (cr6.eq) goto loc_8302C29C;
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// beq cr6,0x8302c290
	if (cr6.eq) goto loc_8302C290;
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// beq cr6,0x8302c274
	if (cr6.eq) goto loc_8302C274;
	// li r4,60
	ctx.r4.s64 = 60;
	// addi r3,r30,124
	ctx.r3.s64 = r30.s64 + 124;
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
	// b 0x8302c2f8
	goto loc_8302C2F8;
loc_8302C274:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
loc_8302C27C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8302c2f8
	goto loc_8302C2F8;
loc_8302C290:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0ca8
	sub_82FF0CA8(ctx, base);
	// b 0x8302c2f8
	goto loc_8302C2F8;
loc_8302C29C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// b 0x8302c27c
	goto loc_8302C27C;
loc_8302C2A8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff1d50
	sub_82FF1D50(ctx, base);
	// b 0x8302c2f8
	goto loc_8302C2F8;
loc_8302C2B4:
	// lwz r11,440(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 440);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8302c2e4
	if (cr0.eq) goto loc_8302C2E4;
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
loc_8302C2E4:
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
loc_8302C2F8:
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
	// beq cr6,0x8302c348
	if (cr6.eq) goto loc_8302C348;
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
loc_8302C348:
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8302c3c8
	if (!cr0.eq) goto loc_8302C3C8;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8302c37c
	if (cr0.eq) goto loc_8302C37C;
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
loc_8302C37C:
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
	// beq 0x8302c3c8
	if (cr0.eq) goto loc_8302C3C8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8302C3B4:
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
loc_8302C3C8:
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8302c3d8
	if (!cr0.eq) goto loc_8302C3D8;
	// addi r3,r30,124
	ctx.r3.s64 = r30.s64 + 124;
	// bl 0x82ff5aa8
	sub_82FF5AA8(ctx, base);
loc_8302C3D8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x8302c3f8
	goto loc_8302C3F8;
	// lwz r30,180(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// lbz r29,80(r31)
	r29.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// b 0x8302c160
	goto loc_8302C160;
	// b 0x8302c3f4
	goto loc_8302C3F4;
	// b 0x8302c3f4
	goto loc_8302C3F4;
loc_8302C3F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8302C3F8:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8302C408"))) PPC_WEAK_FUNC(sub_8302C408);
PPC_FUNC_IMPL(__imp__sub_8302C408) {
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
	// beq 0x8302c454
	if (cr0.eq) goto loc_8302C454;
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
loc_8302C454:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31997
	ctx.r3.s64 = -2096955392;
	// addi r3,r3,-15392
	ctx.r3.s64 = ctx.r3.s64 + -15392;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8302C474"))) PPC_WEAK_FUNC(sub_8302C474);
PPC_FUNC_IMPL(__imp__sub_8302C474) {
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

__attribute__((alias("__imp__sub_8302C494"))) PPC_WEAK_FUNC(sub_8302C494);
PPC_FUNC_IMPL(__imp__sub_8302C494) {
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

__attribute__((alias("__imp__sub_8302C4C4"))) PPC_WEAK_FUNC(sub_8302C4C4);
PPC_FUNC_IMPL(__imp__sub_8302C4C4) {
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
	// addi r3,r3,-15380
	ctx.r3.s64 = ctx.r3.s64 + -15380;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8302C500"))) PPC_WEAK_FUNC(sub_8302C500);
PPC_FUNC_IMPL(__imp__sub_8302C500) {
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
	// addi r3,r3,-15376
	ctx.r3.s64 = ctx.r3.s64 + -15376;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8302C53C"))) PPC_WEAK_FUNC(sub_8302C53C);
PPC_FUNC_IMPL(__imp__sub_8302C53C) {
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
	// bne 0x8302c59c
	if (!cr0.eq) goto loc_8302C59C;
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
	// b 0x8302c5fc
	goto loc_8302C5FC;
loc_8302C59C:
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
	// blt cr6,0x8302c5dc
	if (cr6.lt) goto loc_8302C5DC;
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
	// b 0x8302c5fc
	goto loc_8302C5FC;
loc_8302C5DC:
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
loc_8302C5FC:
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
	// addi r3,r3,-15372
	ctx.r3.s64 = ctx.r3.s64 + -15372;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8302C63C"))) PPC_WEAK_FUNC(sub_8302C63C);
PPC_FUNC_IMPL(__imp__sub_8302C63C) {
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

__attribute__((alias("__imp__sub_8302C65C"))) PPC_WEAK_FUNC(sub_8302C65C);
PPC_FUNC_IMPL(__imp__sub_8302C65C) {
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

__attribute__((alias("__imp__sub_8302C690"))) PPC_WEAK_FUNC(sub_8302C690);
PPC_FUNC_IMPL(__imp__sub_8302C690) {
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
loc_8302C6C0:
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8302c868
	if (cr0.eq) goto loc_8302C868;
loc_8302C6CC:
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8302c864
	if (cr0.eq) goto loc_8302C864;
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
	// bne cr6,0x8302c710
	if (!cr6.eq) goto loc_8302C710;
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
	// b 0x8302c6cc
	goto loc_8302C6CC;
loc_8302C710:
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x8302c76c
	if (!cr6.eq) goto loc_8302C76C;
	// lwz r11,440(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 440);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8302c764
	if (!cr0.eq) goto loc_8302C764;
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
loc_8302C764:
	// stb r29,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r29.u8);
	// b 0x8302c6cc
	goto loc_8302C6CC;
loc_8302C76C:
	// li r11,1
	r11.s64 = 1;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stb r11,81(r31)
	PPC_STORE_U8(r31.u32 + 81, r11.u8);
	// beq cr6,0x8302c7ec
	if (cr6.eq) goto loc_8302C7EC;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x8302c7e0
	if (cr6.eq) goto loc_8302C7E0;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x8302c7d4
	if (cr6.eq) goto loc_8302C7D4;
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// beq cr6,0x8302c7c8
	if (cr6.eq) goto loc_8302C7C8;
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// beq cr6,0x8302c7ac
	if (cr6.eq) goto loc_8302C7AC;
	// li r4,60
	ctx.r4.s64 = 60;
	// addi r3,r30,124
	ctx.r3.s64 = r30.s64 + 124;
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
	// b 0x8302c820
	goto loc_8302C820;
loc_8302C7AC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
loc_8302C7B4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8302c820
	goto loc_8302C820;
loc_8302C7C8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0ca8
	sub_82FF0CA8(ctx, base);
	// b 0x8302c820
	goto loc_8302C820;
loc_8302C7D4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// b 0x8302c7b4
	goto loc_8302C7B4;
loc_8302C7E0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff1d50
	sub_82FF1D50(ctx, base);
	// b 0x8302c820
	goto loc_8302C820;
loc_8302C7EC:
	// lwz r11,440(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 440);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8302c80c
	if (cr0.eq) goto loc_8302C80C;
	// li r4,280
	ctx.r4.s64 = 280;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8302C80C:
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
loc_8302C820:
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
	// beq cr6,0x8302c850
	if (cr6.eq) goto loc_8302C850;
	// li r4,231
	ctx.r4.s64 = 231;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8302C850:
	// stb r29,81(r31)
	PPC_STORE_U8(r31.u32 + 81, r29.u8);
	// b 0x8302c6cc
	goto loc_8302C6CC;
	// lwz r30,148(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// li r29,0
	r29.s64 = 0;
	// b 0x8302c6c0
	goto loc_8302C6C0;
loc_8302C864:
	// b 0x8302c6c0
	goto loc_8302C6C0;
loc_8302C868:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8302C87C"))) PPC_WEAK_FUNC(sub_8302C87C);
PPC_FUNC_IMPL(__imp__sub_8302C87C) {
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
	// beq 0x8302c8ac
	if (cr0.eq) goto loc_8302C8AC;
	// lwz r30,148(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// li r4,231
	ctx.r4.s64 = 231;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// b 0x8302c8b0
	goto loc_8302C8B0;
loc_8302C8AC:
	// lwz r30,148(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 148);
loc_8302C8B0:
	// lwz r11,92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8302c8d8
	if (cr6.eq) goto loc_8302C8D8;
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
loc_8302C8D8:
	// li r11,0
	r11.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31997
	ctx.r3.s64 = -2096955392;
	// addi r3,r3,-14248
	ctx.r3.s64 = ctx.r3.s64 + -14248;
	// stb r11,81(r31)
	PPC_STORE_U8(r31.u32 + 81, r11.u8);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8302C8F8"))) PPC_WEAK_FUNC(sub_8302C8F8);
PPC_FUNC_IMPL(__imp__sub_8302C8F8) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r4,58
	ctx.r4.s64 = 58;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// bl 0x82fda0f8
	sub_82FDA0F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// stw r5,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r5.u32);
	// li r30,0
	r30.s64 = 0;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// bne cr6,0x8302c964
	if (!cr6.eq) goto loc_8302C964;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// addi r4,r11,-27800
	ctx.r4.s64 = r11.s64 + -27800;
	// extsh r5,r27
	ctx.r5.s64 = r27.s16;
	// addi r3,r28,400
	ctx.r3.s64 = r28.s64 + 400;
	// sth r30,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r30.u16);
	// bl 0x8301e640
	sub_8301E640(ctx, base);
	// b 0x8302ca34
	goto loc_8302CA34;
loc_8302C964:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r4,r11,-28120
	ctx.r4.s64 = r11.s64 + -28120;
	// rlwinm r11,r10,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// sthx r30,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r30.u16);
	// lwz r31,24(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8302c9cc
	if (cr0.eq) goto loc_8302C9CC;
	// extsh r11,r27
	r11.s64 = r27.s16;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8302c9c4
	if (!cr6.eq) goto loc_8302C9C4;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,305
	ctx.r4.s64 = 305;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
loc_8302C9C4:
	// lwz r3,52(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 52);
	// b 0x8302ca34
	goto loc_8302CA34;
loc_8302C9CC:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-28364
	ctx.r4.s64 = r11.s64 + -28364;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8302c9ec
	if (cr0.eq) goto loc_8302C9EC;
	// lwz r3,48(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 48);
	// b 0x8302ca34
	goto loc_8302CA34;
loc_8302C9EC:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// extsh r5,r27
	ctx.r5.s64 = r27.s16;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r28,400
	ctx.r3.s64 = r28.s64 + 400;
	// bl 0x8301e640
	sub_8301E640(ctx, base);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8302ca30
	if (cr0.eq) goto loc_8302CA30;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,277
	ctx.r4.s64 = 277;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
loc_8302CA30:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8302CA34:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8302CA40"))) PPC_WEAK_FUNC(sub_8302CA40);
PPC_FUNC_IMPL(__imp__sub_8302CA40) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// li r24,0
	r24.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8302ca6c
	if (cr6.eq) goto loc_8302CA6C;
	// lwz r19,8(r4)
	r19.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// b 0x8302ca70
	goto loc_8302CA70;
loc_8302CA6C:
	// mr r19,r24
	r19.u64 = r24.u64;
loc_8302CA70:
	// lwz r11,24(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 24);
	// li r22,1
	r22.s64 = 1;
	// stw r24,4(r23)
	PPC_STORE_U32(r23.u32 + 4, r24.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// sth r24,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r24.u16);
	// beq cr6,0x8302ca90
	if (cr6.eq) goto loc_8302CA90;
	// lbz r20,17(r4)
	r20.u64 = PPC_LOAD_U8(ctx.r4.u32 + 17);
	// b 0x8302ca94
	goto loc_8302CA94;
loc_8302CA90:
	// mr r20,r24
	r20.u64 = r24.u64;
loc_8302CA94:
	// lhz r11,0(r6)
	r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// li r27,1
	r27.s64 = 1;
	// mr r25,r24
	r25.u64 = r24.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8302cc78
	if (cr0.eq) goto loc_8302CC78;
	// lis r11,2
	r11.s64 = 131072;
	// ori r26,r11,32852
	r26.u64 = r11.u64 | 32852;
loc_8302CAB4:
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r31,r11
	r31.u64 = r11.u64;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// clrlwi r9,r31,16
	ctx.r9.u64 = r31.u32 & 0xFFFF;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r30,r10,27,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8302cae4
	if (cr0.eq) goto loc_8302CAE4;
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// mr r31,r11
	r31.u64 = r11.u64;
loc_8302CAE4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8302cb18
	if (!cr6.eq) goto loc_8302CB18;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(r11.u32, 60, xer);
	// bne cr6,0x8302cb18
	if (!cr6.eq) goto loc_8302CB18;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r4,248
	ctx.r4.s64 = 248;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
	// mr r22,r24
	r22.u64 = r24.u64;
loc_8302CB18:
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(r19.s32, 0, xer);
	// beq cr6,0x8302cbf8
	if (cr6.eq) goto loc_8302CBF8;
	// cmpwi cr6,r19,8
	cr6.compare<int32_t>(r19.s32, 8, xer);
	// bgt cr6,0x8302cbf8
	if (cr6.gt) goto loc_8302CBF8;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bne cr6,0x8302cb68
	if (!cr6.eq) goto loc_8302CB68;
	// lwz r11,132(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 132);
	// clrlwi r10,r31,16
	ctx.r10.u64 = r31.u32 & 0xFFFF;
	// lwzx r11,r11,r26
	r11.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8302cc68
	if (!cr0.eq) goto loc_8302CC68;
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8302cb5c
	if (cr0.eq) goto loc_8302CB5C;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
loc_8302CB5C:
	// li r27,1
	r27.s64 = 1;
loc_8302CB60:
	// li r25,1
	r25.s64 = 1;
	// b 0x8302cc5c
	goto loc_8302CC5C;
loc_8302CB68:
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(r27.s32, 1, xer);
	// bne cr6,0x8302cc5c
	if (!cr6.eq) goto loc_8302CC5C;
	// lwz r10,132(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 132);
	// clrlwi r11,r31,16
	r11.u64 = r31.u32 & 0xFFFF;
	// lwzx r10,r10,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r26.u32);
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// rlwinm. r9,r9,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8302cb60
	if (cr0.eq) goto loc_8302CB60;
	// lbz r9,14(r28)
	ctx.r9.u64 = PPC_LOAD_U8(r28.u32 + 14);
	// mr r27,r24
	r27.u64 = r24.u64;
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x8302cc6c
	if (cr0.eq) goto loc_8302CC6C;
	// lbz r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U8(r28.u32 + 16);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x8302cc6c
	if (cr0.eq) goto loc_8302CC6C;
	// clrlwi. r9,r20,24
	ctx.r9.u64 = r20.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8302cc6c
	if (cr0.eq) goto loc_8302CC6C;
	// clrlwi. r9,r25,24
	ctx.r9.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8302cbd8
	if (cr0.eq) goto loc_8302CBD8;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(r11.u32, 32, xer);
	// bne cr6,0x8302cbd8
	if (!cr6.eq) goto loc_8302CBD8;
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8302cbd8
	if (cr0.eq) goto loc_8302CBD8;
	// lbzx r11,r10,r11
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8302cc6c
	if (cr0.eq) goto loc_8302CC6C;
loc_8302CBD8:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,168(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 168);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r4,83
	ctx.r4.s64 = 83;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
	// b 0x8302cc6c
	goto loc_8302CC6C;
loc_8302CBF8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8302cc5c
	if (!cr6.eq) goto loc_8302CC5C;
	// clrlwi r11,r31,16
	r11.u64 = r31.u32 & 0xFFFF;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(r11.u32, 9, xer);
	// beq cr6,0x8302cc1c
	if (cr6.eq) goto loc_8302CC1C;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// beq cr6,0x8302cc1c
	if (cr6.eq) goto loc_8302CC1C;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(r11.u32, 13, xer);
	// bne cr6,0x8302cc5c
	if (!cr6.eq) goto loc_8302CC5C;
loc_8302CC1C:
	// lbz r11,14(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 14);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8302cc58
	if (cr0.eq) goto loc_8302CC58;
	// lbz r11,16(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8302cc58
	if (cr0.eq) goto loc_8302CC58;
	// clrlwi. r11,r20,24
	r11.u64 = r20.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8302cc58
	if (cr0.eq) goto loc_8302CC58;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,168(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 168);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r4,83
	ctx.r4.s64 = 83;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
loc_8302CC58:
	// li r31,32
	r31.s64 = 32;
loc_8302CC5C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
loc_8302CC68:
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
loc_8302CC6C:
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8302cab4
	if (!cr0.eq) goto loc_8302CAB4;
loc_8302CC78:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b54
	return;
}

__attribute__((alias("__imp__sub_8302CC88"))) PPC_WEAK_FUNC(sub_8302CC88);
PPC_FUNC_IMPL(__imp__sub_8302CC88) {
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
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// li r26,0
	r26.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// li r25,1
	r25.s64 = 1;
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// stw r26,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r26.u32);
	// sth r26,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r26.u16);
	// lhz r11,0(r5)
	r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// b 0x8302cd64
	goto loc_8302CD64;
loc_8302CCC0:
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r30,r11
	r30.u64 = r11.u64;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// clrlwi r9,r30,16
	ctx.r9.u64 = r30.u32 & 0xFFFF;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r28,r10,27,31,31
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x8302ccf0
	if (cr0.eq) goto loc_8302CCF0;
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// mr r30,r11
	r30.u64 = r11.u64;
loc_8302CCF0:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x8302cd50
	if (!cr6.eq) goto loc_8302CD50;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(r11.u32, 60, xer);
	// bne cr6,0x8302cd24
	if (!cr6.eq) goto loc_8302CD24;
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
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
	// mr r25,r26
	r25.u64 = r26.u64;
loc_8302CD24:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x8302cd50
	if (!cr6.eq) goto loc_8302CD50;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r11,132(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 132);
	// clrlwi r9,r30,16
	ctx.r9.u64 = r30.u32 & 0xFFFF;
	// ori r10,r10,32852
	ctx.r10.u64 = ctx.r10.u64 | 32852;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lbzx r11,r11,r9
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r9.u32);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8302cd50
	if (cr0.eq) goto loc_8302CD50;
	// li r30,32
	r30.s64 = 32;
loc_8302CD50:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
loc_8302CD64:
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8302ccc0
	if (!cr0.eq) goto loc_8302CCC0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_8302CD78"))) PPC_WEAK_FUNC(sub_8302CD78);
PPC_FUNC_IMPL(__imp__sub_8302CD78) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,-28120
	ctx.r4.s64 = r11.s64 + -28120;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8302cdb0
	if (cr0.eq) goto loc_8302CDB0;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// b 0x8302ce14
	goto loc_8302CE14;
loc_8302CDB0:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-28364
	ctx.r4.s64 = r11.s64 + -28364;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8302cdd0
	if (cr0.eq) goto loc_8302CDD0;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// b 0x8302ce14
	goto loc_8302CE14;
loc_8302CDD0:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,400
	ctx.r3.s64 = r30.s64 + 400;
	// bl 0x8301e640
	sub_8301E640(ctx, base);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8302ce10
	if (cr0.eq) goto loc_8302CE10;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,277
	ctx.r4.s64 = 277;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
loc_8302CE10:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_8302CE14:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8302CE28"))) PPC_WEAK_FUNC(sub_8302CE28);
PPC_FUNC_IMPL(__imp__sub_8302CE28) {
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
	// beq cr6,0x8302cf4c
	if (cr6.eq) goto loc_8302CF4C;
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
	// bne 0x8302cee8
	if (!cr0.eq) goto loc_8302CEE8;
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
loc_8302CEE8:
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
	// b 0x8302cf60
	goto loc_8302CF60;
loc_8302CF4C:
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
loc_8302CF60:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x8302d0cc
	if (!cr6.eq) goto loc_8302D0CC;
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
	// beq 0x8302d038
	if (cr0.eq) goto loc_8302D038;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x8301c488
	sub_8301C488(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8302d038
	if (!cr0.eq) goto loc_8302D038;
	// lbz r11,8(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8302d004
	if (cr0.eq) goto loc_8302D004;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x8301c4c0
	sub_8301C4C0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8302d004
	if (cr0.eq) goto loc_8302D004;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r6,99
	ctx.r6.s64 = 99;
	// addi r4,r11,28392
	ctx.r4.s64 = r11.s64 + 28392;
	// li r5,3735
	ctx.r5.s64 = 3735;
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
loc_8302D004:
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
	// beq 0x8302d02c
	if (cr0.eq) goto loc_8302D02C;
	// addi r4,r31,192
	ctx.r4.s64 = r31.s64 + 192;
	// lwz r5,216(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x8301c1d0
	sub_8301C1D0(ctx, base);
	// b 0x8302d030
	goto loc_8302D030;
loc_8302D02C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_8302D030:
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// b 0x8302d0c4
	goto loc_8302D0C4;
loc_8302D038:
	// lbz r11,8(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8302d0f0
	if (!cr0.eq) goto loc_8302D0F0;
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
	// beq 0x8302d0b0
	if (cr0.eq) goto loc_8302D0B0;
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
	// b 0x8302d0b4
	goto loc_8302D0B4;
loc_8302D0B0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_8302D0B4:
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
loc_8302D0C4:
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x8301cf70
	sub_8301CF70(ctx, base);
loc_8302D0CC:
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
loc_8302D0F0:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r6,99
	ctx.r6.s64 = 99;
	// addi r4,r11,28392
	ctx.r4.s64 = r11.s64 + 28392;
	// li r5,3730
	ctx.r5.s64 = 3730;
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

__attribute__((alias("__imp__sub_8302D11C"))) PPC_WEAK_FUNC(sub_8302D11C);
PPC_FUNC_IMPL(__imp__sub_8302D11C) {
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

__attribute__((alias("__imp__sub_8302D144"))) PPC_WEAK_FUNC(sub_8302D144);
PPC_FUNC_IMPL(__imp__sub_8302D144) {
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

__attribute__((alias("__imp__sub_8302D16C"))) PPC_WEAK_FUNC(sub_8302D16C);
PPC_FUNC_IMPL(__imp__sub_8302D16C) {
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

__attribute__((alias("__imp__sub_8302D194"))) PPC_WEAK_FUNC(sub_8302D194);
PPC_FUNC_IMPL(__imp__sub_8302D194) {
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

__attribute__((alias("__imp__sub_8302D1C4"))) PPC_WEAK_FUNC(sub_8302D1C4);
PPC_FUNC_IMPL(__imp__sub_8302D1C4) {
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

__attribute__((alias("__imp__sub_8302D1EC"))) PPC_WEAK_FUNC(sub_8302D1EC);
PPC_FUNC_IMPL(__imp__sub_8302D1EC) {
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

