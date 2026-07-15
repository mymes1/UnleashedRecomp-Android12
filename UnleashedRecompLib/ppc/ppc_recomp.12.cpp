#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8235AAE0"))) PPC_WEAK_FUNC(sub_8235AAE0);
PPC_FUNC_IMPL(__imp__sub_8235AAE0) {
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
	// beq 0x8235ab38
	if (cr0.eq) goto loc_8235AB38;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,22884
	ctx.r9.s64 = r11.s64 + 22884;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8235ab3c
	goto loc_8235AB3C;
loc_8235AB38:
	// li r11,0
	r11.s64 = 0;
loc_8235AB3C:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8235ab88
	if (!cr6.eq) goto loc_8235AB88;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8235ab68
	if (cr6.eq) goto loc_8235AB68;
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
loc_8235AB68:
	// lis r11,-31961
	r11.s64 = -2094596096;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-17536(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -17536);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_8235AB88:
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

__attribute__((alias("__imp__sub_8235ABA8"))) PPC_WEAK_FUNC(sub_8235ABA8);
PPC_FUNC_IMPL(__imp__sub_8235ABA8) {
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
	// beq 0x8235ac00
	if (cr0.eq) goto loc_8235AC00;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,22904
	ctx.r9.s64 = r11.s64 + 22904;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8235ac04
	goto loc_8235AC04;
loc_8235AC00:
	// li r11,0
	r11.s64 = 0;
loc_8235AC04:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8235ac50
	if (!cr6.eq) goto loc_8235AC50;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8235ac30
	if (cr6.eq) goto loc_8235AC30;
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
loc_8235AC30:
	// lis r11,-31961
	r11.s64 = -2094596096;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-17536(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -17536);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_8235AC50:
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

__attribute__((alias("__imp__sub_8235AC70"))) PPC_WEAK_FUNC(sub_8235AC70);
PPC_FUNC_IMPL(__imp__sub_8235AC70) {
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
	// beq 0x8235acc8
	if (cr0.eq) goto loc_8235ACC8;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,22924
	ctx.r9.s64 = r11.s64 + 22924;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8235accc
	goto loc_8235ACCC;
loc_8235ACC8:
	// li r11,0
	r11.s64 = 0;
loc_8235ACCC:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8235ad18
	if (!cr6.eq) goto loc_8235AD18;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8235acf8
	if (cr6.eq) goto loc_8235ACF8;
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
loc_8235ACF8:
	// lis r11,-31961
	r11.s64 = -2094596096;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-17536(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -17536);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_8235AD18:
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

__attribute__((alias("__imp__sub_8235AD38"))) PPC_WEAK_FUNC(sub_8235AD38);
PPC_FUNC_IMPL(__imp__sub_8235AD38) {
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
	// beq 0x8235ad90
	if (cr0.eq) goto loc_8235AD90;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,22944
	ctx.r9.s64 = r11.s64 + 22944;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8235ad94
	goto loc_8235AD94;
loc_8235AD90:
	// li r11,0
	r11.s64 = 0;
loc_8235AD94:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8235ade0
	if (!cr6.eq) goto loc_8235ADE0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8235adc0
	if (cr6.eq) goto loc_8235ADC0;
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
loc_8235ADC0:
	// lis r11,-31961
	r11.s64 = -2094596096;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-17536(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -17536);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_8235ADE0:
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

__attribute__((alias("__imp__sub_8235AE00"))) PPC_WEAK_FUNC(sub_8235AE00);
PPC_FUNC_IMPL(__imp__sub_8235AE00) {
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
	// beq 0x8235ae58
	if (cr0.eq) goto loc_8235AE58;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,22964
	ctx.r9.s64 = r11.s64 + 22964;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8235ae5c
	goto loc_8235AE5C;
loc_8235AE58:
	// li r11,0
	r11.s64 = 0;
loc_8235AE5C:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8235aea8
	if (!cr6.eq) goto loc_8235AEA8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8235ae88
	if (cr6.eq) goto loc_8235AE88;
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
loc_8235AE88:
	// lis r11,-31961
	r11.s64 = -2094596096;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-17536(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -17536);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_8235AEA8:
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

__attribute__((alias("__imp__sub_8235AEC8"))) PPC_WEAK_FUNC(sub_8235AEC8);
PPC_FUNC_IMPL(__imp__sub_8235AEC8) {
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
	// beq 0x8235af20
	if (cr0.eq) goto loc_8235AF20;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,22984
	ctx.r9.s64 = r11.s64 + 22984;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8235af24
	goto loc_8235AF24;
loc_8235AF20:
	// li r11,0
	r11.s64 = 0;
loc_8235AF24:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8235af70
	if (!cr6.eq) goto loc_8235AF70;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8235af50
	if (cr6.eq) goto loc_8235AF50;
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
loc_8235AF50:
	// lis r11,-31961
	r11.s64 = -2094596096;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-17536(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -17536);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_8235AF70:
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

__attribute__((alias("__imp__sub_8235AF90"))) PPC_WEAK_FUNC(sub_8235AF90);
PPC_FUNC_IMPL(__imp__sub_8235AF90) {
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
	// beq 0x8235afe8
	if (cr0.eq) goto loc_8235AFE8;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,23004
	ctx.r9.s64 = r11.s64 + 23004;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8235afec
	goto loc_8235AFEC;
loc_8235AFE8:
	// li r11,0
	r11.s64 = 0;
loc_8235AFEC:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8235b038
	if (!cr6.eq) goto loc_8235B038;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8235b018
	if (cr6.eq) goto loc_8235B018;
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
loc_8235B018:
	// lis r11,-31961
	r11.s64 = -2094596096;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-17536(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -17536);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_8235B038:
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

__attribute__((alias("__imp__sub_8235B058"))) PPC_WEAK_FUNC(sub_8235B058);
PPC_FUNC_IMPL(__imp__sub_8235B058) {
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
	// beq 0x8235b0b0
	if (cr0.eq) goto loc_8235B0B0;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,23024
	ctx.r9.s64 = r11.s64 + 23024;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8235b0b4
	goto loc_8235B0B4;
loc_8235B0B0:
	// li r11,0
	r11.s64 = 0;
loc_8235B0B4:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8235b100
	if (!cr6.eq) goto loc_8235B100;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8235b0e0
	if (cr6.eq) goto loc_8235B0E0;
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
loc_8235B0E0:
	// lis r11,-31961
	r11.s64 = -2094596096;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-17536(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -17536);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_8235B100:
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

__attribute__((alias("__imp__sub_8235B120"))) PPC_WEAK_FUNC(sub_8235B120);
PPC_FUNC_IMPL(__imp__sub_8235B120) {
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
	// beq 0x8235b178
	if (cr0.eq) goto loc_8235B178;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,23044
	ctx.r9.s64 = r11.s64 + 23044;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8235b17c
	goto loc_8235B17C;
loc_8235B178:
	// li r11,0
	r11.s64 = 0;
loc_8235B17C:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8235b1c8
	if (!cr6.eq) goto loc_8235B1C8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8235b1a8
	if (cr6.eq) goto loc_8235B1A8;
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
loc_8235B1A8:
	// lis r11,-31961
	r11.s64 = -2094596096;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-17536(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -17536);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_8235B1C8:
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

__attribute__((alias("__imp__sub_8235B1E8"))) PPC_WEAK_FUNC(sub_8235B1E8);
PPC_FUNC_IMPL(__imp__sub_8235B1E8) {
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
	// beq 0x8235b240
	if (cr0.eq) goto loc_8235B240;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,23064
	ctx.r9.s64 = r11.s64 + 23064;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8235b244
	goto loc_8235B244;
loc_8235B240:
	// li r11,0
	r11.s64 = 0;
loc_8235B244:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8235b290
	if (!cr6.eq) goto loc_8235B290;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8235b270
	if (cr6.eq) goto loc_8235B270;
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
loc_8235B270:
	// lis r11,-31961
	r11.s64 = -2094596096;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-17536(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -17536);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_8235B290:
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

__attribute__((alias("__imp__sub_8235B2B0"))) PPC_WEAK_FUNC(sub_8235B2B0);
PPC_FUNC_IMPL(__imp__sub_8235B2B0) {
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
	// beq 0x8235b308
	if (cr0.eq) goto loc_8235B308;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,23084
	ctx.r9.s64 = r11.s64 + 23084;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8235b30c
	goto loc_8235B30C;
loc_8235B308:
	// li r11,0
	r11.s64 = 0;
loc_8235B30C:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8235b358
	if (!cr6.eq) goto loc_8235B358;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8235b338
	if (cr6.eq) goto loc_8235B338;
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
loc_8235B338:
	// lis r11,-31961
	r11.s64 = -2094596096;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-17536(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -17536);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_8235B358:
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

__attribute__((alias("__imp__sub_8235B378"))) PPC_WEAK_FUNC(sub_8235B378);
PPC_FUNC_IMPL(__imp__sub_8235B378) {
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
	// beq 0x8235b3d0
	if (cr0.eq) goto loc_8235B3D0;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,23104
	ctx.r9.s64 = r11.s64 + 23104;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8235b3d4
	goto loc_8235B3D4;
loc_8235B3D0:
	// li r11,0
	r11.s64 = 0;
loc_8235B3D4:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8235b420
	if (!cr6.eq) goto loc_8235B420;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8235b400
	if (cr6.eq) goto loc_8235B400;
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
loc_8235B400:
	// lis r11,-31961
	r11.s64 = -2094596096;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-17536(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -17536);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_8235B420:
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

__attribute__((alias("__imp__sub_8235B440"))) PPC_WEAK_FUNC(sub_8235B440);
PPC_FUNC_IMPL(__imp__sub_8235B440) {
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
	// beq 0x8235b498
	if (cr0.eq) goto loc_8235B498;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,23124
	ctx.r9.s64 = r11.s64 + 23124;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8235b49c
	goto loc_8235B49C;
loc_8235B498:
	// li r11,0
	r11.s64 = 0;
loc_8235B49C:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8235b4e8
	if (!cr6.eq) goto loc_8235B4E8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8235b4c8
	if (cr6.eq) goto loc_8235B4C8;
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
loc_8235B4C8:
	// lis r11,-31961
	r11.s64 = -2094596096;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-17536(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -17536);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_8235B4E8:
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

__attribute__((alias("__imp__sub_8235B508"))) PPC_WEAK_FUNC(sub_8235B508);
PPC_FUNC_IMPL(__imp__sub_8235B508) {
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
	// beq 0x8235b560
	if (cr0.eq) goto loc_8235B560;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,23144
	ctx.r9.s64 = r11.s64 + 23144;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8235b564
	goto loc_8235B564;
loc_8235B560:
	// li r11,0
	r11.s64 = 0;
loc_8235B564:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8235b5b0
	if (!cr6.eq) goto loc_8235B5B0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8235b590
	if (cr6.eq) goto loc_8235B590;
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
loc_8235B590:
	// lis r11,-31961
	r11.s64 = -2094596096;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-17536(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -17536);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_8235B5B0:
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

__attribute__((alias("__imp__sub_8235B5D0"))) PPC_WEAK_FUNC(sub_8235B5D0);
PPC_FUNC_IMPL(__imp__sub_8235B5D0) {
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
	// beq 0x8235b628
	if (cr0.eq) goto loc_8235B628;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,23164
	ctx.r9.s64 = r11.s64 + 23164;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8235b62c
	goto loc_8235B62C;
loc_8235B628:
	// li r11,0
	r11.s64 = 0;
loc_8235B62C:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8235b678
	if (!cr6.eq) goto loc_8235B678;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8235b658
	if (cr6.eq) goto loc_8235B658;
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
loc_8235B658:
	// lis r11,-31961
	r11.s64 = -2094596096;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-17536(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -17536);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_8235B678:
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

__attribute__((alias("__imp__sub_8235B698"))) PPC_WEAK_FUNC(sub_8235B698);
PPC_FUNC_IMPL(__imp__sub_8235B698) {
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
	// beq 0x8235b6f0
	if (cr0.eq) goto loc_8235B6F0;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,23184
	ctx.r9.s64 = r11.s64 + 23184;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8235b6f4
	goto loc_8235B6F4;
loc_8235B6F0:
	// li r11,0
	r11.s64 = 0;
loc_8235B6F4:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8235b740
	if (!cr6.eq) goto loc_8235B740;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8235b720
	if (cr6.eq) goto loc_8235B720;
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
loc_8235B720:
	// lis r11,-31961
	r11.s64 = -2094596096;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-17536(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -17536);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_8235B740:
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

__attribute__((alias("__imp__sub_8235B760"))) PPC_WEAK_FUNC(sub_8235B760);
PPC_FUNC_IMPL(__imp__sub_8235B760) {
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
	// beq 0x8235b7b8
	if (cr0.eq) goto loc_8235B7B8;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,23204
	ctx.r9.s64 = r11.s64 + 23204;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8235b7bc
	goto loc_8235B7BC;
loc_8235B7B8:
	// li r11,0
	r11.s64 = 0;
loc_8235B7BC:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8235b808
	if (!cr6.eq) goto loc_8235B808;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8235b7e8
	if (cr6.eq) goto loc_8235B7E8;
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
loc_8235B7E8:
	// lis r11,-31961
	r11.s64 = -2094596096;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-17536(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -17536);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_8235B808:
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

__attribute__((alias("__imp__sub_8235B828"))) PPC_WEAK_FUNC(sub_8235B828);
PPC_FUNC_IMPL(__imp__sub_8235B828) {
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
	// beq 0x8235b880
	if (cr0.eq) goto loc_8235B880;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,23224
	ctx.r9.s64 = r11.s64 + 23224;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8235b884
	goto loc_8235B884;
loc_8235B880:
	// li r11,0
	r11.s64 = 0;
loc_8235B884:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8235b8d0
	if (!cr6.eq) goto loc_8235B8D0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8235b8b0
	if (cr6.eq) goto loc_8235B8B0;
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
loc_8235B8B0:
	// lis r11,-31961
	r11.s64 = -2094596096;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-17536(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -17536);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_8235B8D0:
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

__attribute__((alias("__imp__sub_8235B8F0"))) PPC_WEAK_FUNC(sub_8235B8F0);
PPC_FUNC_IMPL(__imp__sub_8235B8F0) {
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
	// beq 0x8235b948
	if (cr0.eq) goto loc_8235B948;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,23244
	ctx.r9.s64 = r11.s64 + 23244;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8235b94c
	goto loc_8235B94C;
loc_8235B948:
	// li r11,0
	r11.s64 = 0;
loc_8235B94C:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8235b998
	if (!cr6.eq) goto loc_8235B998;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8235b978
	if (cr6.eq) goto loc_8235B978;
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
loc_8235B978:
	// lis r11,-31961
	r11.s64 = -2094596096;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-17536(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -17536);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_8235B998:
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

__attribute__((alias("__imp__sub_8235B9B8"))) PPC_WEAK_FUNC(sub_8235B9B8);
PPC_FUNC_IMPL(__imp__sub_8235B9B8) {
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
	// beq 0x8235ba10
	if (cr0.eq) goto loc_8235BA10;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,23264
	ctx.r9.s64 = r11.s64 + 23264;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8235ba14
	goto loc_8235BA14;
loc_8235BA10:
	// li r11,0
	r11.s64 = 0;
loc_8235BA14:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8235ba60
	if (!cr6.eq) goto loc_8235BA60;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8235ba40
	if (cr6.eq) goto loc_8235BA40;
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
loc_8235BA40:
	// lis r11,-31961
	r11.s64 = -2094596096;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-17536(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -17536);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_8235BA60:
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

__attribute__((alias("__imp__sub_8235BA80"))) PPC_WEAK_FUNC(sub_8235BA80);
PPC_FUNC_IMPL(__imp__sub_8235BA80) {
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
	// beq 0x8235bad8
	if (cr0.eq) goto loc_8235BAD8;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,23284
	ctx.r9.s64 = r11.s64 + 23284;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8235badc
	goto loc_8235BADC;
loc_8235BAD8:
	// li r11,0
	r11.s64 = 0;
loc_8235BADC:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8235bb28
	if (!cr6.eq) goto loc_8235BB28;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8235bb08
	if (cr6.eq) goto loc_8235BB08;
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
loc_8235BB08:
	// lis r11,-31961
	r11.s64 = -2094596096;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-17536(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -17536);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_8235BB28:
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

__attribute__((alias("__imp__sub_8235BB48"))) PPC_WEAK_FUNC(sub_8235BB48);
PPC_FUNC_IMPL(__imp__sub_8235BB48) {
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
	// beq 0x8235bba0
	if (cr0.eq) goto loc_8235BBA0;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,23324
	ctx.r9.s64 = r11.s64 + 23324;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8235bba4
	goto loc_8235BBA4;
loc_8235BBA0:
	// li r11,0
	r11.s64 = 0;
loc_8235BBA4:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8235bbf0
	if (!cr6.eq) goto loc_8235BBF0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8235bbd0
	if (cr6.eq) goto loc_8235BBD0;
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
loc_8235BBD0:
	// lis r11,-31961
	r11.s64 = -2094596096;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-17536(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -17536);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_8235BBF0:
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

__attribute__((alias("__imp__sub_8235BC10"))) PPC_WEAK_FUNC(sub_8235BC10);
PPC_FUNC_IMPL(__imp__sub_8235BC10) {
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
	// beq 0x8235bc68
	if (cr0.eq) goto loc_8235BC68;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,23344
	ctx.r9.s64 = r11.s64 + 23344;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8235bc6c
	goto loc_8235BC6C;
loc_8235BC68:
	// li r11,0
	r11.s64 = 0;
loc_8235BC6C:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8235bcb8
	if (!cr6.eq) goto loc_8235BCB8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8235bc98
	if (cr6.eq) goto loc_8235BC98;
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
loc_8235BC98:
	// lis r11,-31961
	r11.s64 = -2094596096;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-17536(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -17536);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_8235BCB8:
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

__attribute__((alias("__imp__sub_8235BCD8"))) PPC_WEAK_FUNC(sub_8235BCD8);
PPC_FUNC_IMPL(__imp__sub_8235BCD8) {
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
	// beq 0x8235bd30
	if (cr0.eq) goto loc_8235BD30;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,23364
	ctx.r9.s64 = r11.s64 + 23364;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8235bd34
	goto loc_8235BD34;
loc_8235BD30:
	// li r11,0
	r11.s64 = 0;
loc_8235BD34:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8235bd80
	if (!cr6.eq) goto loc_8235BD80;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8235bd60
	if (cr6.eq) goto loc_8235BD60;
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
loc_8235BD60:
	// lis r11,-31961
	r11.s64 = -2094596096;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-17536(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -17536);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_8235BD80:
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

__attribute__((alias("__imp__sub_8235BDA0"))) PPC_WEAK_FUNC(sub_8235BDA0);
PPC_FUNC_IMPL(__imp__sub_8235BDA0) {
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
	// beq 0x8235bdf8
	if (cr0.eq) goto loc_8235BDF8;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,23384
	ctx.r9.s64 = r11.s64 + 23384;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8235bdfc
	goto loc_8235BDFC;
loc_8235BDF8:
	// li r11,0
	r11.s64 = 0;
loc_8235BDFC:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8235be48
	if (!cr6.eq) goto loc_8235BE48;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8235be28
	if (cr6.eq) goto loc_8235BE28;
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
loc_8235BE28:
	// lis r11,-31961
	r11.s64 = -2094596096;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-17536(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -17536);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_8235BE48:
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

__attribute__((alias("__imp__sub_8235BE68"))) PPC_WEAK_FUNC(sub_8235BE68);
PPC_FUNC_IMPL(__imp__sub_8235BE68) {
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
	// beq 0x8235bec0
	if (cr0.eq) goto loc_8235BEC0;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,23404
	ctx.r9.s64 = r11.s64 + 23404;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8235bec4
	goto loc_8235BEC4;
loc_8235BEC0:
	// li r11,0
	r11.s64 = 0;
loc_8235BEC4:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8235bf10
	if (!cr6.eq) goto loc_8235BF10;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8235bef0
	if (cr6.eq) goto loc_8235BEF0;
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
loc_8235BEF0:
	// lis r11,-31961
	r11.s64 = -2094596096;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-17536(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -17536);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_8235BF10:
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

__attribute__((alias("__imp__sub_8235BF30"))) PPC_WEAK_FUNC(sub_8235BF30);
PPC_FUNC_IMPL(__imp__sub_8235BF30) {
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
	// beq 0x8235bf88
	if (cr0.eq) goto loc_8235BF88;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,23424
	ctx.r9.s64 = r11.s64 + 23424;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8235bf8c
	goto loc_8235BF8C;
loc_8235BF88:
	// li r11,0
	r11.s64 = 0;
loc_8235BF8C:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8235bfd8
	if (!cr6.eq) goto loc_8235BFD8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8235bfb8
	if (cr6.eq) goto loc_8235BFB8;
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
loc_8235BFB8:
	// lis r11,-31961
	r11.s64 = -2094596096;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-17536(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -17536);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_8235BFD8:
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

__attribute__((alias("__imp__sub_8235BFF8"))) PPC_WEAK_FUNC(sub_8235BFF8);
PPC_FUNC_IMPL(__imp__sub_8235BFF8) {
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
	// beq 0x8235c050
	if (cr0.eq) goto loc_8235C050;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,23444
	ctx.r9.s64 = r11.s64 + 23444;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8235c054
	goto loc_8235C054;
loc_8235C050:
	// li r11,0
	r11.s64 = 0;
loc_8235C054:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8235c0a0
	if (!cr6.eq) goto loc_8235C0A0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8235c080
	if (cr6.eq) goto loc_8235C080;
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
loc_8235C080:
	// lis r11,-31961
	r11.s64 = -2094596096;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-17536(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -17536);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_8235C0A0:
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

__attribute__((alias("__imp__sub_8235C0C0"))) PPC_WEAK_FUNC(sub_8235C0C0);
PPC_FUNC_IMPL(__imp__sub_8235C0C0) {
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
	// beq 0x8235c118
	if (cr0.eq) goto loc_8235C118;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,23464
	ctx.r9.s64 = r11.s64 + 23464;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8235c11c
	goto loc_8235C11C;
loc_8235C118:
	// li r11,0
	r11.s64 = 0;
loc_8235C11C:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8235c168
	if (!cr6.eq) goto loc_8235C168;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8235c148
	if (cr6.eq) goto loc_8235C148;
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
loc_8235C148:
	// lis r11,-31961
	r11.s64 = -2094596096;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-17536(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -17536);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_8235C168:
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

__attribute__((alias("__imp__sub_8235C188"))) PPC_WEAK_FUNC(sub_8235C188);
PPC_FUNC_IMPL(__imp__sub_8235C188) {
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
	// beq 0x8235c1e0
	if (cr0.eq) goto loc_8235C1E0;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,23484
	ctx.r9.s64 = r11.s64 + 23484;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8235c1e4
	goto loc_8235C1E4;
loc_8235C1E0:
	// li r11,0
	r11.s64 = 0;
loc_8235C1E4:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8235c230
	if (!cr6.eq) goto loc_8235C230;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8235c210
	if (cr6.eq) goto loc_8235C210;
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
loc_8235C210:
	// lis r11,-31961
	r11.s64 = -2094596096;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-17536(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -17536);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_8235C230:
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

__attribute__((alias("__imp__sub_8235C250"))) PPC_WEAK_FUNC(sub_8235C250);
PPC_FUNC_IMPL(__imp__sub_8235C250) {
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
	// beq 0x8235c2a8
	if (cr0.eq) goto loc_8235C2A8;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,23504
	ctx.r9.s64 = r11.s64 + 23504;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8235c2ac
	goto loc_8235C2AC;
loc_8235C2A8:
	// li r11,0
	r11.s64 = 0;
loc_8235C2AC:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8235c2f8
	if (!cr6.eq) goto loc_8235C2F8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8235c2d8
	if (cr6.eq) goto loc_8235C2D8;
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
loc_8235C2D8:
	// lis r11,-31961
	r11.s64 = -2094596096;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-17536(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -17536);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_8235C2F8:
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

__attribute__((alias("__imp__sub_8235C318"))) PPC_WEAK_FUNC(sub_8235C318);
PPC_FUNC_IMPL(__imp__sub_8235C318) {
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
	// beq 0x8235c370
	if (cr0.eq) goto loc_8235C370;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,23524
	ctx.r9.s64 = r11.s64 + 23524;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8235c374
	goto loc_8235C374;
loc_8235C370:
	// li r11,0
	r11.s64 = 0;
loc_8235C374:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8235c3c0
	if (!cr6.eq) goto loc_8235C3C0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8235c3a0
	if (cr6.eq) goto loc_8235C3A0;
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
loc_8235C3A0:
	// lis r11,-31961
	r11.s64 = -2094596096;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-17536(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -17536);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_8235C3C0:
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

__attribute__((alias("__imp__sub_8235C3E0"))) PPC_WEAK_FUNC(sub_8235C3E0);
PPC_FUNC_IMPL(__imp__sub_8235C3E0) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x8235c40c
	if (cr6.eq) goto loc_8235C40C;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82353300
	sub_82353300(ctx, base);
	// b 0x8235c418
	goto loc_8235C418;
loc_8235C40C:
	// lis r11,-31961
	r11.s64 = -2094596096;
	// addi r11,r11,8128
	r11.s64 = r11.s64 + 8128;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
loc_8235C418:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235C428"))) PPC_WEAK_FUNC(sub_8235C428);
PPC_FUNC_IMPL(__imp__sub_8235C428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lfs f31,-22120(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22120);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f2,f31
	cr6.compare(ctx.f2.f64, f31.f64);
	// blt cr6,0x8235c5d8
	if (cr6.lt) goto loc_8235C5D8;
	// li r4,22
	ctx.r4.s64 = 22;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x823171c8
	sub_823171C8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8235c4f8
	if (cr0.eq) goto loc_8235C4F8;
	// li r4,14
	ctx.r4.s64 = 14;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x823171c8
	sub_823171C8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8235c490
	if (!cr0.eq) goto loc_8235C490;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x823169a8
	sub_823169A8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// blt cr6,0x8235c4f8
	if (cr6.lt) goto loc_8235C4F8;
loc_8235C490:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x823169a8
	sub_823169A8(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f31.f64);
	// ble cr6,0x8235c4d8
	if (!cr6.gt) goto loc_8235C4D8;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,23792
	ctx.r4.s64 = r11.s64 + 23792;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x8230b488
	sub_8230B488(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8235c4d0
	if (cr6.eq) goto loc_8235C4D0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8235C4D0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_8235C4D8:
	// li r11,2
	r11.s64 = 2;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82307eb8
	sub_82307EB8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8245eb98
	sub_8245EB98(ctx, base);
loc_8235C4F8:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x8231a468
	sub_8231A468(ctx, base);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fcmpu cr6,f0,f1
	cr6.compare(f0.f64, ctx.f1.f64);
	// bge cr6,0x8235c51c
	if (!cr6.lt) goto loc_8235C51C;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r4,r11,23784
	ctx.r4.s64 = r11.s64 + 23784;
	// b 0x8235c524
	goto loc_8235C524;
loc_8235C51C:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r4,r11,23772
	ctx.r4.s64 = r11.s64 + 23772;
loc_8235C524:
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82308898
	sub_82308898(ctx, base);
	// cmpwi cr6,r3,11
	cr6.compare<int32_t>(ctx.r3.s32, 11, xer);
	// bne cr6,0x8235c5b0
	if (!cr6.eq) goto loc_8235C5B0;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,23748
	ctx.r4.s64 = r11.s64 + 23748;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r29,r1,80
	r29.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x82308bd0
	sub_82308BD0(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8235c5a8
	if (cr6.eq) goto loc_8235C5A8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8235C5A8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_8235C5B0:
	// li r4,22
	ctx.r4.s64 = 22;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x823171c8
	sub_823171C8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8235c5d8
	if (cr0.eq) goto loc_8235C5D8;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82307eb8
	sub_82307EB8(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8245e8f8
	sub_8245E8F8(ctx, base);
loc_8235C5D8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235C5E8"))) PPC_WEAK_FUNC(sub_8235C5E8);
PPC_FUNC_IMPL(__imp__sub_8235C5E8) {
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
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,12324
	r30.s64 = r11.s64 + 12324;
	// lwz r11,12328(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12328);
	// lwz r27,196(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8235c62c
	if (!cr0.eq) goto loc_8235C62C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r11,12328(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12328, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r9,23808
	ctx.r4.s64 = ctx.r9.s64 + 23808;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
loc_8235C62C:
	// lbz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 848);
	// lis r11,-31943
	r11.s64 = -2093416448;
	// li r28,1
	r28.s64 = 1;
	// addi r29,r11,29232
	r29.s64 = r11.s64 + 29232;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8235c678
	if (!cr0.eq) goto loc_8235C678;
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 832);
	// bl 0x82e06c40
	sub_82E06C40(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8235c678
	if (cr0.eq) goto loc_8235C678;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 832);
	// bl 0x82e202a0
	sub_82E202A0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 832);
	// bl 0x82e1fac8
	sub_82E1FAC8(ctx, base);
	// stb r28,848(r31)
	PPC_STORE_U8(r31.u32 + 848, r28.u8);
loc_8235C678:
	// lbz r11,868(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 868);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8235c6b8
	if (!cr0.eq) goto loc_8235C6B8;
	// lwz r3,852(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 852);
	// bl 0x82e06c40
	sub_82E06C40(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8235c6b8
	if (cr0.eq) goto loc_8235C6B8;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,852(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 852);
	// bl 0x82e202a0
	sub_82E202A0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,852(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 852);
	// bl 0x82e1fac8
	sub_82E1FAC8(ctx, base);
	// stb r28,868(r31)
	PPC_STORE_U8(r31.u32 + 868, r28.u8);
loc_8235C6B8:
	// lwz r30,840(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 840);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8235c6dc
	if (cr6.eq) goto loc_8235C6DC;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r29,832(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 832);
	// bl 0x82307d38
	sub_82307D38(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e46fa0
	sub_82E46FA0(ctx, base);
loc_8235C6DC:
	// lwz r30,860(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 860);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8235c700
	if (cr6.eq) goto loc_8235C700;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r31,852(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 852);
	// bl 0x82307d38
	sub_82307D38(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e46fa0
	sub_82E46FA0(ctx, base);
loc_8235C700:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8235C708"))) PPC_WEAK_FUNC(sub_8235C708);
PPC_FUNC_IMPL(__imp__sub_8235C708) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,196(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823734f8
	sub_823734F8(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8235c740
	if (cr6.eq) goto loc_8235C740;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8235C740:
	// mr r29,r31
	r29.u64 = r31.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8235c7b0
	if (!cr6.eq) goto loc_8235C7B0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8231a670
	sub_8231A670(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8235c770
	if (cr6.eq) goto loc_8235C770;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8235C770:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82317188
	sub_82317188(ctx, base);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r29,0(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8235c794
	if (cr6.eq) goto loc_8235C794;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8235C794:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x8235c7a0
	if (!cr6.eq) goto loc_8235C7A0;
	// mr r29,r31
	r29.u64 = r31.u64;
loc_8235C7A0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8235c7b0
	if (!cr6.eq) goto loc_8235C7B0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8235c7d8
	goto loc_8235C7D8;
loc_8235C7B0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,36(r28)
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + 36);
	// lwz r5,32(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 32);
	// lwz r4,28(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// bl 0x822d2058
	sub_822D2058(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d1f20
	sub_822D1F20(ctx, base);
	// lwz r11,24(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
loc_8235C7D8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8235C7E0"))) PPC_WEAK_FUNC(sub_8235C7E0);
PPC_FUNC_IMPL(__imp__sub_8235C7E0) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,196(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823171c8
	sub_823171C8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8235c874
	if (cr0.eq) goto loc_8235C874;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82316118
	sub_82316118(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8235c860
	if (cr0.eq) goto loc_8235C860;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f3,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,-22120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -22120);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,2244(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2244);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8238f9e8
	sub_8238F9E8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e627e0
	sub_82E627E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// bl 0x823785d0
	sub_823785D0(ctx, base);
	// b 0x8235c874
	goto loc_8235C874;
loc_8235C860:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e627e0
	sub_82E627E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8236fac0
	sub_8236FAC0(ctx, base);
loc_8235C874:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235C880"))) PPC_WEAK_FUNC(sub_8235C880);
PPC_FUNC_IMPL(__imp__sub_8235C880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCVRegister v62{};
	PPCVRegister v63{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,254
	ctx.r4.s64 = 254;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r3,508(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 508);
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82312590
	sub_82312590(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f0.f64 = double(temp.f32);
	// fdivs f0,f0,f31
	f0.f64 = double(float(f0.f64 / f31.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v62,v62,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), 0xFF));
	// vmulfp128 v63,v63,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// stvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235C908"))) PPC_WEAK_FUNC(sub_8235C908);
PPC_FUNC_IMPL(__imp__sub_8235C908) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r28,196(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// bl 0x82512b50
	sub_82512B50(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x824ee0f8
	sub_824EE0F8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8235c94c
	if (cr6.eq) goto loc_8235C94C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8235C94C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x8235c978
	if (!cr6.eq) goto loc_8235C978;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_8235C978:
	// bl 0x8250c268
	sub_8250C268(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r29,r31,24
	r29.s64 = r31.s64 + 24;
	// bl 0x823086f8
	sub_823086F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8245f0b0
	sub_8245F0B0(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82316b60
	sub_82316B60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8245ede0
	sub_8245EDE0(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8245f0f0
	sub_8245F0F0(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83107d10
	sub_83107D10(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8245f008
	sub_8245F008(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823086f8
	sub_823086F8(ctx, base);
	// stfs f1,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// stw r27,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r27.u32);
loc_8235C9EC:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8245fec8
	sub_8245FEC8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8235ca10
	if (cr0.eq) goto loc_8235CA10;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
loc_8235CA10:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpwi cr6,r27,7
	cr6.compare<int32_t>(r27.s32, 7, xer);
	// blt cr6,0x8235c9ec
	if (cr6.lt) goto loc_8235C9EC;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,508(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 508);
	// bl 0x8245dc20
	sub_8245DC20(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8235ca48
	if (!cr0.eq) goto loc_8235CA48;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// bl 0x8245f010
	sub_8245F010(ctx, base);
	// stw r3,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r3.u32);
	// b 0x8235ca5c
	goto loc_8235CA5C;
loc_8235CA48:
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,508(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 508);
	// bl 0x8245dc20
	sub_8245DC20(ctx, base);
	// addi r11,r3,-1
	r11.s64 = ctx.r3.s64 + -1;
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
loc_8235CA5C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8235CA68"))) PPC_WEAK_FUNC(sub_8235CA68);
PPC_FUNC_IMPL(__imp__sub_8235CA68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// li r12,-48
	r12.s64 = -48;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,196(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82317050
	sub_82317050(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f0,-22120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22120);
	f0.f64 = double(temp.f32);
	// lvx128 v127,r0,r10
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x823087c8
	sub_823087C8(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lvlx128 v62,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v62,v62,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), 0xFF));
	// vmaddfp128 v63,v127,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(v62.f32)), simde_mm_load_ps(v63.f32)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// li r0,-48
	r0.s64 = -48;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235CAF8"))) PPC_WEAK_FUNC(sub_8235CAF8);
PPC_FUNC_IMPL(__imp__sub_8235CAF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCVRegister v62{};
	PPCVRegister v63{};
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r31,196(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82316118
	sub_82316118(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8235cc70
	if (cr0.eq) goto loc_8235CC70;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82467b88
	sub_82467B88(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82317050
	sub_82317050(ctx, base);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32), 0xEF));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82317050
	sub_82317050(ctx, base);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e86270
	sub_82E86270(ctx, base);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// li r4,45
	ctx.r4.s64 = 45;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v63,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// fmuls f13,f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// lfs f0,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x8235cc70
	if (!cr6.gt) goto loc_8235CC70;
	// li r4,43
	ctx.r4.s64 = 43;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x82317050
	sub_82317050(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v63,v62,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8230a060
	sub_8230A060(ctx, base);
	// li r4,46
	ctx.r4.s64 = 46;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v63,v62,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82317020
	sub_82317020(ctx, base);
	// lis r11,-31961
	r11.s64 = -2094596096;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-17832(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -17832);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823047a8
	sub_823047A8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_8235CC70:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
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

__attribute__((alias("__imp__sub_8235CC90"))) PPC_WEAK_FUNC(sub_8235CC90);
PPC_FUNC_IMPL(__imp__sub_8235CC90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v62{};
	PPCVRegister v63{};
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
	// lwz r31,196(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82317458
	sub_82317458(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x823171c8
	sub_823171C8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8235ccfc
	if (cr0.eq) goto loc_8235CCFC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82318af0
	sub_82318AF0(ctx, base);
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8235CCFC:
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

__attribute__((alias("__imp__sub_8235CD18"))) PPC_WEAK_FUNC(sub_8235CD18);
PPC_FUNC_IMPL(__imp__sub_8235CD18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r31,196(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// li r8,32
	ctx.r8.s64 = 32;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lfs f0,2440(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2440);
	f0.f64 = double(temp.f32);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lvlx128 v63,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// lvx128 v62,r11,r8
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// vmulfp128 v63,v62,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// lfs f1,-22340(r6)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -22340);
	ctx.f1.f64 = double(temp.f32);
	// stvx128 v63,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x823214a0
	sub_823214A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8231b3e8
	sub_8231B3E8(ctx, base);
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

__attribute__((alias("__imp__sub_8235CD90"))) PPC_WEAK_FUNC(sub_8235CD90);
PPC_FUNC_IMPL(__imp__sub_8235CD90) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// bl 0x82354f90
	sub_82354F90(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235CDD0"))) PPC_WEAK_FUNC(sub_8235CDD0);
PPC_FUNC_IMPL(__imp__sub_8235CDD0) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// bl 0x82355040
	sub_82355040(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235CE10"))) PPC_WEAK_FUNC(sub_8235CE10);
PPC_FUNC_IMPL(__imp__sub_8235CE10) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// bl 0x82355108
	sub_82355108(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235CE50"))) PPC_WEAK_FUNC(sub_8235CE50);
PPC_FUNC_IMPL(__imp__sub_8235CE50) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// bl 0x823551d0
	sub_823551D0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235CE90"))) PPC_WEAK_FUNC(sub_8235CE90);
PPC_FUNC_IMPL(__imp__sub_8235CE90) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// bl 0x822ff8e0
	sub_822FF8E0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235CED0"))) PPC_WEAK_FUNC(sub_8235CED0);
PPC_FUNC_IMPL(__imp__sub_8235CED0) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// bl 0x82355298
	sub_82355298(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235CF10"))) PPC_WEAK_FUNC(sub_8235CF10);
PPC_FUNC_IMPL(__imp__sub_8235CF10) {
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
	// bl 0x82e65b68
	sub_82E65B68(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r10,23872
	ctx.r10.s64 = ctx.r10.s64 + 23872;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
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

__attribute__((alias("__imp__sub_8235CF68"))) PPC_WEAK_FUNC(sub_8235CF68);
PPC_FUNC_IMPL(__imp__sub_8235CF68) {
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
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8235cf8c
	if (cr6.eq) goto loc_8235CF8C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8235CF8C:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8235cf9c
	if (cr6.eq) goto loc_8235CF9C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8235CF9C:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8235cfac
	if (cr6.eq) goto loc_8235CFAC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8235CFAC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e657c8
	sub_82E657C8(ctx, base);
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

__attribute__((alias("__imp__sub_8235CFC8"))) PPC_WEAK_FUNC(sub_8235CFC8);
PPC_FUNC_IMPL(__imp__sub_8235CFC8) {
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
	// bl 0x82e65b68
	sub_82E65B68(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r10,23992
	ctx.r10.s64 = ctx.r10.s64 + 23992;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
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

__attribute__((alias("__imp__sub_8235D018"))) PPC_WEAK_FUNC(sub_8235D018);
PPC_FUNC_IMPL(__imp__sub_8235D018) {
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
	// bl 0x82e65b68
	sub_82E65B68(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r10,24400
	ctx.r10.s64 = ctx.r10.s64 + 24400;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
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

__attribute__((alias("__imp__sub_8235D068"))) PPC_WEAK_FUNC(sub_8235D068);
PPC_FUNC_IMPL(__imp__sub_8235D068) {
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
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8235d08c
	if (cr6.eq) goto loc_8235D08C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8235D08C:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8235d09c
	if (cr6.eq) goto loc_8235D09C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8235D09C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e657c8
	sub_82E657C8(ctx, base);
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

__attribute__((alias("__imp__sub_8235D0B8"))) PPC_WEAK_FUNC(sub_8235D0B8);
PPC_FUNC_IMPL(__imp__sub_8235D0B8) {
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
	// bl 0x8235cf68
	sub_8235CF68(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8235d0e8
	if (cr0.eq) goto loc_8235D0E8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_8235D0E8:
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

__attribute__((alias("__imp__sub_8235D108"))) PPC_WEAK_FUNC(sub_8235D108);
PPC_FUNC_IMPL(__imp__sub_8235D108) {
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
	// bl 0x8235d068
	sub_8235D068(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8235d138
	if (cr0.eq) goto loc_8235D138;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_8235D138:
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

__attribute__((alias("__imp__sub_8235D158"))) PPC_WEAK_FUNC(sub_8235D158);
PPC_FUNC_IMPL(__imp__sub_8235D158) {
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
	// beq 0x8235d1b0
	if (cr0.eq) goto loc_8235D1B0;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,23304
	ctx.r9.s64 = r11.s64 + 23304;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8235d1b4
	goto loc_8235D1B4;
loc_8235D1B0:
	// li r11,0
	r11.s64 = 0;
loc_8235D1B4:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8235d1f8
	if (!cr6.eq) goto loc_8235D1F8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8235d1d8
	if (cr6.eq) goto loc_8235D1D8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82372cf0
	sub_82372CF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_8235D1D8:
	// lis r11,-31961
	r11.s64 = -2094596096;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-17536(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -17536);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_8235D1F8:
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

__attribute__((alias("__imp__sub_8235D218"))) PPC_WEAK_FUNC(sub_8235D218);
PPC_FUNC_IMPL(__imp__sub_8235D218) {
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
	// beq cr6,0x8235d244
	if (cr6.eq) goto loc_8235D244;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82372cf0
	sub_82372CF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_8235D244:
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

__attribute__((alias("__imp__sub_8235D258"))) PPC_WEAK_FUNC(sub_8235D258);
PPC_FUNC_IMPL(__imp__sub_8235D258) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x8235d284
	if (cr6.eq) goto loc_8235D284;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82353378
	sub_82353378(ctx, base);
	// b 0x8235d290
	goto loc_8235D290;
loc_8235D284:
	// lis r11,-31961
	r11.s64 = -2094596096;
	// addi r11,r11,8216
	r11.s64 = r11.s64 + 8216;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
loc_8235D290:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235D2A0"))) PPC_WEAK_FUNC(sub_8235D2A0);
PPC_FUNC_IMPL(__imp__sub_8235D2A0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,23624
	ctx.r4.s64 = r11.s64 + 23624;
	// li r5,425
	ctx.r5.s64 = 425;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235d300
	if (cr0.eq) goto loc_8235D300;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	f0.f64 = double(temp.f32);
	// addi r10,r10,23716
	ctx.r10.s64 = ctx.r10.s64 + 23716;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// b 0x8235d304
	goto loc_8235D304;
loc_8235D300:
	// li r31,0
	r31.s64 = 0;
loc_8235D304:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354f90
	sub_82354F90(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235D338"))) PPC_WEAK_FUNC(sub_8235D338);
PPC_FUNC_IMPL(__imp__sub_8235D338) {
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
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r30,196(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// bl 0x8235c5e8
	sub_8235C5E8(ctx, base);
	// lwz r3,572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 572);
	// bl 0x82bbb378
	sub_82BBB378(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8235d36c
	if (cr0.eq) goto loc_8235D36C;
	// addi r3,r31,768
	ctx.r3.s64 = r31.s64 + 768;
	// bl 0x82e0eb08
	sub_82E0EB08(ctx, base);
loc_8235D36C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82317458
	sub_82317458(ctx, base);
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v63,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r3,572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 572);
	// lfs f0,-24792(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24792);
	f0.f64 = double(temp.f32);
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// lfs f2,2244(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82bb48c0
	sub_82BB48C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82374d58
	sub_82374D58(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,140(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82310f20
	sub_82310F20(ctx, base);
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8235d424
	if (cr0.eq) goto loc_8235D424;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,140(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8235d424
	if (!cr0.eq) goto loc_8235D424;
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// bl 0x82316118
	sub_82316118(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8235d424
	if (cr0.eq) goto loc_8235D424;
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8235D424:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823166e0
	sub_823166E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8235d44c
	if (!cr0.eq) goto loc_8235D44C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82353678
	sub_82353678(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82353600
	sub_82353600(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82353768
	sub_82353768(ctx, base);
loc_8235D44C:
	// lis r11,-31946
	r11.s64 = -2093613056;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,8028(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8028);
	// bl 0x82df98c0
	sub_82DF98C0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b4e2f0
	sub_82B4E2F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8235D478"))) PPC_WEAK_FUNC(sub_8235D478);
PPC_FUNC_IMPL(__imp__sub_8235D478) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r30,0
	r30.s64 = 0;
	// lwz r4,840(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 840);
	// lfs f31,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8235d4d0
	if (cr6.eq) goto loc_8235D4D0;
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 832);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82e46fa0
	sub_82E46FA0(ctx, base);
	// stw r30,840(r31)
	PPC_STORE_U32(r31.u32 + 840, r30.u32);
	// lwz r3,844(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 844);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r30,844(r31)
	PPC_STORE_U32(r31.u32 + 844, r30.u32);
	// beq cr6,0x8235d4d0
	if (cr6.eq) goto loc_8235D4D0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8235D4D0:
	// lwz r4,860(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 860);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8235d500
	if (cr6.eq) goto loc_8235D500;
	// lwz r3,852(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 852);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82e46fa0
	sub_82E46FA0(ctx, base);
	// stw r30,860(r31)
	PPC_STORE_U32(r31.u32 + 860, r30.u32);
	// lwz r3,864(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 864);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r30,864(r31)
	PPC_STORE_U32(r31.u32 + 864, r30.u32);
	// beq cr6,0x8235d500
	if (cr6.eq) goto loc_8235D500;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8235D500:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_8235D520"))) PPC_WEAK_FUNC(sub_8235D520);
PPC_FUNC_IMPL(__imp__sub_8235D520) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235d55c
	if (cr0.eq) goto loc_8235D55C;
	// bl 0x82339d78
	sub_82339D78(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235d560
	goto loc_8235D560;
loc_8235D55C:
	// li r31,0
	r31.s64 = 0;
loc_8235D560:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82355d88
	sub_82355D88(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235D590"))) PPC_WEAK_FUNC(sub_8235D590);
PPC_FUNC_IMPL(__imp__sub_8235D590) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,204
	ctx.r3.s64 = 204;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235d5cc
	if (cr0.eq) goto loc_8235D5CC;
	// bl 0x8239a880
	sub_8239A880(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235d5d0
	goto loc_8235D5D0;
loc_8235D5CC:
	// li r31,0
	r31.s64 = 0;
loc_8235D5D0:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82355e50
	sub_82355E50(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235D600"))) PPC_WEAK_FUNC(sub_8235D600);
PPC_FUNC_IMPL(__imp__sub_8235D600) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235d63c
	if (cr0.eq) goto loc_8235D63C;
	// bl 0x823996b0
	sub_823996B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235d640
	goto loc_8235D640;
loc_8235D63C:
	// li r31,0
	r31.s64 = 0;
loc_8235D640:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82355f18
	sub_82355F18(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235D670"))) PPC_WEAK_FUNC(sub_8235D670);
PPC_FUNC_IMPL(__imp__sub_8235D670) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235d6ac
	if (cr0.eq) goto loc_8235D6AC;
	// bl 0x8239a0d0
	sub_8239A0D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235d6b0
	goto loc_8235D6B0;
loc_8235D6AC:
	// li r31,0
	r31.s64 = 0;
loc_8235D6B0:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82355fe0
	sub_82355FE0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235D6E0"))) PPC_WEAK_FUNC(sub_8235D6E0);
PPC_FUNC_IMPL(__imp__sub_8235D6E0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235d71c
	if (cr0.eq) goto loc_8235D71C;
	// bl 0x82338f40
	sub_82338F40(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235d720
	goto loc_8235D720;
loc_8235D71C:
	// li r31,0
	r31.s64 = 0;
loc_8235D720:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823560a8
	sub_823560A8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235D750"))) PPC_WEAK_FUNC(sub_8235D750);
PPC_FUNC_IMPL(__imp__sub_8235D750) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235d78c
	if (cr0.eq) goto loc_8235D78C;
	// bl 0x82339528
	sub_82339528(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235d790
	goto loc_8235D790;
loc_8235D78C:
	// li r31,0
	r31.s64 = 0;
loc_8235D790:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82356170
	sub_82356170(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235D7C0"))) PPC_WEAK_FUNC(sub_8235D7C0);
PPC_FUNC_IMPL(__imp__sub_8235D7C0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235d7fc
	if (cr0.eq) goto loc_8235D7FC;
	// bl 0x82392920
	sub_82392920(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235d800
	goto loc_8235D800;
loc_8235D7FC:
	// li r31,0
	r31.s64 = 0;
loc_8235D800:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823566e8
	sub_823566E8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235D830"))) PPC_WEAK_FUNC(sub_8235D830);
PPC_FUNC_IMPL(__imp__sub_8235D830) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235d86c
	if (cr0.eq) goto loc_8235D86C;
	// bl 0x82393c70
	sub_82393C70(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235d870
	goto loc_8235D870;
loc_8235D86C:
	// li r31,0
	r31.s64 = 0;
loc_8235D870:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823567b0
	sub_823567B0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235D8A0"))) PPC_WEAK_FUNC(sub_8235D8A0);
PPC_FUNC_IMPL(__imp__sub_8235D8A0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235d8dc
	if (cr0.eq) goto loc_8235D8DC;
	// bl 0x823931c8
	sub_823931C8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235d8e0
	goto loc_8235D8E0;
loc_8235D8DC:
	// li r31,0
	r31.s64 = 0;
loc_8235D8E0:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82356878
	sub_82356878(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235D910"))) PPC_WEAK_FUNC(sub_8235D910);
PPC_FUNC_IMPL(__imp__sub_8235D910) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235d94c
	if (cr0.eq) goto loc_8235D94C;
	// bl 0x82395cd0
	sub_82395CD0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235d950
	goto loc_8235D950;
loc_8235D94C:
	// li r31,0
	r31.s64 = 0;
loc_8235D950:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82356940
	sub_82356940(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235D980"))) PPC_WEAK_FUNC(sub_8235D980);
PPC_FUNC_IMPL(__imp__sub_8235D980) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235d9bc
	if (cr0.eq) goto loc_8235D9BC;
	// bl 0x82393790
	sub_82393790(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235d9c0
	goto loc_8235D9C0;
loc_8235D9BC:
	// li r31,0
	r31.s64 = 0;
loc_8235D9C0:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82356a08
	sub_82356A08(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235D9F0"))) PPC_WEAK_FUNC(sub_8235D9F0);
PPC_FUNC_IMPL(__imp__sub_8235D9F0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,192
	ctx.r3.s64 = 192;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235da2c
	if (cr0.eq) goto loc_8235DA2C;
	// bl 0x82395858
	sub_82395858(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235da30
	goto loc_8235DA30;
loc_8235DA2C:
	// li r31,0
	r31.s64 = 0;
loc_8235DA30:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82356b98
	sub_82356B98(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235DA60"))) PPC_WEAK_FUNC(sub_8235DA60);
PPC_FUNC_IMPL(__imp__sub_8235DA60) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,144
	ctx.r3.s64 = 144;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235da9c
	if (cr0.eq) goto loc_8235DA9C;
	// bl 0x823946a8
	sub_823946A8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235daa0
	goto loc_8235DAA0;
loc_8235DA9C:
	// li r31,0
	r31.s64 = 0;
loc_8235DAA0:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82356c60
	sub_82356C60(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235DAD0"))) PPC_WEAK_FUNC(sub_8235DAD0);
PPC_FUNC_IMPL(__imp__sub_8235DAD0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235db0c
	if (cr0.eq) goto loc_8235DB0C;
	// bl 0x823946e8
	sub_823946E8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235db10
	goto loc_8235DB10;
loc_8235DB0C:
	// li r31,0
	r31.s64 = 0;
loc_8235DB10:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82356d28
	sub_82356D28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235DB40"))) PPC_WEAK_FUNC(sub_8235DB40);
PPC_FUNC_IMPL(__imp__sub_8235DB40) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235db7c
	if (cr0.eq) goto loc_8235DB7C;
	// bl 0x82391e90
	sub_82391E90(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235db80
	goto loc_8235DB80;
loc_8235DB7C:
	// li r31,0
	r31.s64 = 0;
loc_8235DB80:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82356df0
	sub_82356DF0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235DBB0"))) PPC_WEAK_FUNC(sub_8235DBB0);
PPC_FUNC_IMPL(__imp__sub_8235DBB0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,204
	ctx.r3.s64 = 204;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235dbec
	if (cr0.eq) goto loc_8235DBEC;
	// bl 0x82338288
	sub_82338288(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235dbf0
	goto loc_8235DBF0;
loc_8235DBEC:
	// li r31,0
	r31.s64 = 0;
loc_8235DBF0:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82356eb8
	sub_82356EB8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235DC20"))) PPC_WEAK_FUNC(sub_8235DC20);
PPC_FUNC_IMPL(__imp__sub_8235DC20) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235dc5c
	if (cr0.eq) goto loc_8235DC5C;
	// bl 0x8239c698
	sub_8239C698(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235dc60
	goto loc_8235DC60;
loc_8235DC5C:
	// li r31,0
	r31.s64 = 0;
loc_8235DC60:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82357048
	sub_82357048(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235DC90"))) PPC_WEAK_FUNC(sub_8235DC90);
PPC_FUNC_IMPL(__imp__sub_8235DC90) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,224
	ctx.r3.s64 = 224;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235dccc
	if (cr0.eq) goto loc_8235DCCC;
	// bl 0x8233dc70
	sub_8233DC70(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235dcd0
	goto loc_8235DCD0;
loc_8235DCCC:
	// li r31,0
	r31.s64 = 0;
loc_8235DCD0:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823571d8
	sub_823571D8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235DD00"))) PPC_WEAK_FUNC(sub_8235DD00);
PPC_FUNC_IMPL(__imp__sub_8235DD00) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235dd3c
	if (cr0.eq) goto loc_8235DD3C;
	// bl 0x8233e5c0
	sub_8233E5C0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235dd40
	goto loc_8235DD40;
loc_8235DD3C:
	// li r31,0
	r31.s64 = 0;
loc_8235DD40:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823572a0
	sub_823572A0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235DD70"))) PPC_WEAK_FUNC(sub_8235DD70);
PPC_FUNC_IMPL(__imp__sub_8235DD70) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,288
	ctx.r3.s64 = 288;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235ddac
	if (cr0.eq) goto loc_8235DDAC;
	// bl 0x82340230
	sub_82340230(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235ddb0
	goto loc_8235DDB0;
loc_8235DDAC:
	// li r31,0
	r31.s64 = 0;
loc_8235DDB0:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82357368
	sub_82357368(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235DDE0"))) PPC_WEAK_FUNC(sub_8235DDE0);
PPC_FUNC_IMPL(__imp__sub_8235DDE0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235de1c
	if (cr0.eq) goto loc_8235DE1C;
	// bl 0x82392de0
	sub_82392DE0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235de20
	goto loc_8235DE20;
loc_8235DE1C:
	// li r31,0
	r31.s64 = 0;
loc_8235DE20:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82357750
	sub_82357750(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235DE50"))) PPC_WEAK_FUNC(sub_8235DE50);
PPC_FUNC_IMPL(__imp__sub_8235DE50) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235de8c
	if (cr0.eq) goto loc_8235DE8C;
	// bl 0x82334a10
	sub_82334A10(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235de90
	goto loc_8235DE90;
loc_8235DE8C:
	// li r31,0
	r31.s64 = 0;
loc_8235DE90:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82357818
	sub_82357818(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235DEC0"))) PPC_WEAK_FUNC(sub_8235DEC0);
PPC_FUNC_IMPL(__imp__sub_8235DEC0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235defc
	if (cr0.eq) goto loc_8235DEFC;
	// bl 0x82397198
	sub_82397198(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235df00
	goto loc_8235DF00;
loc_8235DEFC:
	// li r31,0
	r31.s64 = 0;
loc_8235DF00:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823578e0
	sub_823578E0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235DF30"))) PPC_WEAK_FUNC(sub_8235DF30);
PPC_FUNC_IMPL(__imp__sub_8235DF30) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235df6c
	if (cr0.eq) goto loc_8235DF6C;
	// bl 0x823363a0
	sub_823363A0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235df70
	goto loc_8235DF70;
loc_8235DF6C:
	// li r31,0
	r31.s64 = 0;
loc_8235DF70:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82357c00
	sub_82357C00(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235DFA0"))) PPC_WEAK_FUNC(sub_8235DFA0);
PPC_FUNC_IMPL(__imp__sub_8235DFA0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235dfdc
	if (cr0.eq) goto loc_8235DFDC;
	// bl 0x82340a58
	sub_82340A58(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235dfe0
	goto loc_8235DFE0;
loc_8235DFDC:
	// li r31,0
	r31.s64 = 0;
loc_8235DFE0:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82357cc8
	sub_82357CC8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235E010"))) PPC_WEAK_FUNC(sub_8235E010);
PPC_FUNC_IMPL(__imp__sub_8235E010) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235e04c
	if (cr0.eq) goto loc_8235E04C;
	// bl 0x82393e98
	sub_82393E98(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235e050
	goto loc_8235E050;
loc_8235E04C:
	// li r31,0
	r31.s64 = 0;
loc_8235E050:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823580b0
	sub_823580B0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235E080"))) PPC_WEAK_FUNC(sub_8235E080);
PPC_FUNC_IMPL(__imp__sub_8235E080) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235e0bc
	if (cr0.eq) goto loc_8235E0BC;
	// bl 0x82391b38
	sub_82391B38(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235e0c0
	goto loc_8235E0C0;
loc_8235E0BC:
	// li r31,0
	r31.s64 = 0;
loc_8235E0C0:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82358178
	sub_82358178(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235E0F0"))) PPC_WEAK_FUNC(sub_8235E0F0);
PPC_FUNC_IMPL(__imp__sub_8235E0F0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235e12c
	if (cr0.eq) goto loc_8235E12C;
	// bl 0x823917f0
	sub_823917F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235e130
	goto loc_8235E130;
loc_8235E12C:
	// li r31,0
	r31.s64 = 0;
loc_8235E130:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82358240
	sub_82358240(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235E160"))) PPC_WEAK_FUNC(sub_8235E160);
PPC_FUNC_IMPL(__imp__sub_8235E160) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235e19c
	if (cr0.eq) goto loc_8235E19C;
	// bl 0x823913c0
	sub_823913C0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235e1a0
	goto loc_8235E1A0;
loc_8235E19C:
	// li r31,0
	r31.s64 = 0;
loc_8235E1A0:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82358308
	sub_82358308(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235E1D0"))) PPC_WEAK_FUNC(sub_8235E1D0);
PPC_FUNC_IMPL(__imp__sub_8235E1D0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235e20c
	if (cr0.eq) goto loc_8235E20C;
	// bl 0x8233c3b0
	sub_8233C3B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235e210
	goto loc_8235E210;
loc_8235E20C:
	// li r31,0
	r31.s64 = 0;
loc_8235E210:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823583d0
	sub_823583D0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235E240"))) PPC_WEAK_FUNC(sub_8235E240);
PPC_FUNC_IMPL(__imp__sub_8235E240) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235e27c
	if (cr0.eq) goto loc_8235E27C;
	// bl 0x8233b490
	sub_8233B490(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235e280
	goto loc_8235E280;
loc_8235E27C:
	// li r31,0
	r31.s64 = 0;
loc_8235E280:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82358498
	sub_82358498(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235E2B0"))) PPC_WEAK_FUNC(sub_8235E2B0);
PPC_FUNC_IMPL(__imp__sub_8235E2B0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235e2ec
	if (cr0.eq) goto loc_8235E2EC;
	// bl 0x8233bd88
	sub_8233BD88(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235e2f0
	goto loc_8235E2F0;
loc_8235E2EC:
	// li r31,0
	r31.s64 = 0;
loc_8235E2F0:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82358560
	sub_82358560(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235E320"))) PPC_WEAK_FUNC(sub_8235E320);
PPC_FUNC_IMPL(__imp__sub_8235E320) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235e35c
	if (cr0.eq) goto loc_8235E35C;
	// bl 0x8233b730
	sub_8233B730(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235e360
	goto loc_8235E360;
loc_8235E35C:
	// li r31,0
	r31.s64 = 0;
loc_8235E360:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82358628
	sub_82358628(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235E390"))) PPC_WEAK_FUNC(sub_8235E390);
PPC_FUNC_IMPL(__imp__sub_8235E390) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235e3cc
	if (cr0.eq) goto loc_8235E3CC;
	// bl 0x8233b9f0
	sub_8233B9F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235e3d0
	goto loc_8235E3D0;
loc_8235E3CC:
	// li r31,0
	r31.s64 = 0;
loc_8235E3D0:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823586f0
	sub_823586F0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235E400"))) PPC_WEAK_FUNC(sub_8235E400);
PPC_FUNC_IMPL(__imp__sub_8235E400) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235e43c
	if (cr0.eq) goto loc_8235E43C;
	// bl 0x8233baf8
	sub_8233BAF8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235e440
	goto loc_8235E440;
loc_8235E43C:
	// li r31,0
	r31.s64 = 0;
loc_8235E440:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823587b8
	sub_823587B8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235E470"))) PPC_WEAK_FUNC(sub_8235E470);
PPC_FUNC_IMPL(__imp__sub_8235E470) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,192
	ctx.r3.s64 = 192;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235e4ac
	if (cr0.eq) goto loc_8235E4AC;
	// bl 0x8239da50
	sub_8239DA50(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235e4b0
	goto loc_8235E4B0;
loc_8235E4AC:
	// li r31,0
	r31.s64 = 0;
loc_8235E4B0:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82358880
	sub_82358880(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235E4E0"))) PPC_WEAK_FUNC(sub_8235E4E0);
PPC_FUNC_IMPL(__imp__sub_8235E4E0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235e51c
	if (cr0.eq) goto loc_8235E51C;
	// bl 0x8239d630
	sub_8239D630(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235e520
	goto loc_8235E520;
loc_8235E51C:
	// li r31,0
	r31.s64 = 0;
loc_8235E520:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82358948
	sub_82358948(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235E550"))) PPC_WEAK_FUNC(sub_8235E550);
PPC_FUNC_IMPL(__imp__sub_8235E550) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235e58c
	if (cr0.eq) goto loc_8235E58C;
	// bl 0x8233eb10
	sub_8233EB10(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235e590
	goto loc_8235E590;
loc_8235E58C:
	// li r31,0
	r31.s64 = 0;
loc_8235E590:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82358a10
	sub_82358A10(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235E5C0"))) PPC_WEAK_FUNC(sub_8235E5C0);
PPC_FUNC_IMPL(__imp__sub_8235E5C0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235e5fc
	if (cr0.eq) goto loc_8235E5FC;
	// bl 0x82335c28
	sub_82335C28(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235e600
	goto loc_8235E600;
loc_8235E5FC:
	// li r31,0
	r31.s64 = 0;
loc_8235E600:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82358ad8
	sub_82358AD8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235E630"))) PPC_WEAK_FUNC(sub_8235E630);
PPC_FUNC_IMPL(__imp__sub_8235E630) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235e66c
	if (cr0.eq) goto loc_8235E66C;
	// bl 0x8239b008
	sub_8239B008(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235e670
	goto loc_8235E670;
loc_8235E66C:
	// li r31,0
	r31.s64 = 0;
loc_8235E670:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82358ba0
	sub_82358BA0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235E6A0"))) PPC_WEAK_FUNC(sub_8235E6A0);
PPC_FUNC_IMPL(__imp__sub_8235E6A0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235e6dc
	if (cr0.eq) goto loc_8235E6DC;
	// bl 0x823966b8
	sub_823966B8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235e6e0
	goto loc_8235E6E0;
loc_8235E6DC:
	// li r31,0
	r31.s64 = 0;
loc_8235E6E0:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82358c68
	sub_82358C68(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235E710"))) PPC_WEAK_FUNC(sub_8235E710);
PPC_FUNC_IMPL(__imp__sub_8235E710) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235e74c
	if (cr0.eq) goto loc_8235E74C;
	// bl 0x823908f8
	sub_823908F8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235e750
	goto loc_8235E750;
loc_8235E74C:
	// li r31,0
	r31.s64 = 0;
loc_8235E750:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82358d30
	sub_82358D30(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235E780"))) PPC_WEAK_FUNC(sub_8235E780);
PPC_FUNC_IMPL(__imp__sub_8235E780) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235e7bc
	if (cr0.eq) goto loc_8235E7BC;
	// bl 0x82390f48
	sub_82390F48(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235e7c0
	goto loc_8235E7C0;
loc_8235E7BC:
	// li r31,0
	r31.s64 = 0;
loc_8235E7C0:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82358df8
	sub_82358DF8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235E7F0"))) PPC_WEAK_FUNC(sub_8235E7F0);
PPC_FUNC_IMPL(__imp__sub_8235E7F0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235e82c
	if (cr0.eq) goto loc_8235E82C;
	// bl 0x82390bf8
	sub_82390BF8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235e830
	goto loc_8235E830;
loc_8235E82C:
	// li r31,0
	r31.s64 = 0;
loc_8235E830:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82358ec0
	sub_82358EC0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235E860"))) PPC_WEAK_FUNC(sub_8235E860);
PPC_FUNC_IMPL(__imp__sub_8235E860) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,192
	ctx.r3.s64 = 192;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235e89c
	if (cr0.eq) goto loc_8235E89C;
	// bl 0x8233abd8
	sub_8233ABD8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235e8a0
	goto loc_8235E8A0;
loc_8235E89C:
	// li r31,0
	r31.s64 = 0;
loc_8235E8A0:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82358f88
	sub_82358F88(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235E8D0"))) PPC_WEAK_FUNC(sub_8235E8D0);
PPC_FUNC_IMPL(__imp__sub_8235E8D0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235e90c
	if (cr0.eq) goto loc_8235E90C;
	// bl 0x8239e340
	sub_8239E340(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235e910
	goto loc_8235E910;
loc_8235E90C:
	// li r31,0
	r31.s64 = 0;
loc_8235E910:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359050
	sub_82359050(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235E940"))) PPC_WEAK_FUNC(sub_8235E940);
PPC_FUNC_IMPL(__imp__sub_8235E940) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235e97c
	if (cr0.eq) goto loc_8235E97C;
	// bl 0x8239b518
	sub_8239B518(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235e980
	goto loc_8235E980;
loc_8235E97C:
	// li r31,0
	r31.s64 = 0;
loc_8235E980:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359118
	sub_82359118(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235E9B0"))) PPC_WEAK_FUNC(sub_8235E9B0);
PPC_FUNC_IMPL(__imp__sub_8235E9B0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,224
	ctx.r3.s64 = 224;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235e9ec
	if (cr0.eq) goto loc_8235E9EC;
	// bl 0x8239be08
	sub_8239BE08(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235e9f0
	goto loc_8235E9F0;
loc_8235E9EC:
	// li r31,0
	r31.s64 = 0;
loc_8235E9F0:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823591e0
	sub_823591E0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235EA20"))) PPC_WEAK_FUNC(sub_8235EA20);
PPC_FUNC_IMPL(__imp__sub_8235EA20) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24496
	ctx.r4.s64 = r11.s64 + 24496;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235ea5c
	if (cr0.eq) goto loc_8235EA5C;
	// bl 0x8239e560
	sub_8239E560(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235ea60
	goto loc_8235EA60;
loc_8235EA5C:
	// li r31,0
	r31.s64 = 0;
loc_8235EA60:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823592a8
	sub_823592A8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235EA90"))) PPC_WEAK_FUNC(sub_8235EA90);
PPC_FUNC_IMPL(__imp__sub_8235EA90) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24496
	ctx.r4.s64 = r11.s64 + 24496;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8235ead8
	if (cr0.eq) goto loc_8235EAD8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e65b68
	sub_82E65B68(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,23832
	r11.s64 = r11.s64 + 23832;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x8235eadc
	goto loc_8235EADC;
loc_8235EAD8:
	// li r31,0
	r31.s64 = 0;
loc_8235EADC:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359370
	sub_82359370(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235EB10"))) PPC_WEAK_FUNC(sub_8235EB10);
PPC_FUNC_IMPL(__imp__sub_8235EB10) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24496
	ctx.r4.s64 = r11.s64 + 24496;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r3,132
	ctx.r3.s64 = 132;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235eb4c
	if (cr0.eq) goto loc_8235EB4C;
	// bl 0x8235cf10
	sub_8235CF10(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235eb50
	goto loc_8235EB50;
loc_8235EB4C:
	// li r31,0
	r31.s64 = 0;
loc_8235EB50:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359438
	sub_82359438(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235EB80"))) PPC_WEAK_FUNC(sub_8235EB80);
PPC_FUNC_IMPL(__imp__sub_8235EB80) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24496
	ctx.r4.s64 = r11.s64 + 24496;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8235ebc8
	if (cr0.eq) goto loc_8235EBC8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e65b68
	sub_82E65B68(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,23912
	r11.s64 = r11.s64 + 23912;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x8235ebcc
	goto loc_8235EBCC;
loc_8235EBC8:
	// li r31,0
	r31.s64 = 0;
loc_8235EBCC:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359500
	sub_82359500(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235EC00"))) PPC_WEAK_FUNC(sub_8235EC00);
PPC_FUNC_IMPL(__imp__sub_8235EC00) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24496
	ctx.r4.s64 = r11.s64 + 24496;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r3,124
	ctx.r3.s64 = 124;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8235ec48
	if (cr0.eq) goto loc_8235EC48;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82342300
	sub_82342300(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,23952
	r11.s64 = r11.s64 + 23952;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x8235ec4c
	goto loc_8235EC4C;
loc_8235EC48:
	// li r31,0
	r31.s64 = 0;
loc_8235EC4C:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823595c8
	sub_823595C8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235EC80"))) PPC_WEAK_FUNC(sub_8235EC80);
PPC_FUNC_IMPL(__imp__sub_8235EC80) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24496
	ctx.r4.s64 = r11.s64 + 24496;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235ecbc
	if (cr0.eq) goto loc_8235ECBC;
	// bl 0x82341e08
	sub_82341E08(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235ecc0
	goto loc_8235ECC0;
loc_8235ECBC:
	// li r31,0
	r31.s64 = 0;
loc_8235ECC0:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359690
	sub_82359690(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235ECF0"))) PPC_WEAK_FUNC(sub_8235ECF0);
PPC_FUNC_IMPL(__imp__sub_8235ECF0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24496
	ctx.r4.s64 = r11.s64 + 24496;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235ed2c
	if (cr0.eq) goto loc_8235ED2C;
	// bl 0x82342de0
	sub_82342DE0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235ed30
	goto loc_8235ED30;
loc_8235ED2C:
	// li r31,0
	r31.s64 = 0;
loc_8235ED30:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359758
	sub_82359758(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235ED60"))) PPC_WEAK_FUNC(sub_8235ED60);
PPC_FUNC_IMPL(__imp__sub_8235ED60) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24496
	ctx.r4.s64 = r11.s64 + 24496;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r3,320
	ctx.r3.s64 = 320;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235ed9c
	if (cr0.eq) goto loc_8235ED9C;
	// bl 0x82343838
	sub_82343838(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235eda0
	goto loc_8235EDA0;
loc_8235ED9C:
	// li r31,0
	r31.s64 = 0;
loc_8235EDA0:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359820
	sub_82359820(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235EDD0"))) PPC_WEAK_FUNC(sub_8235EDD0);
PPC_FUNC_IMPL(__imp__sub_8235EDD0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24496
	ctx.r4.s64 = r11.s64 + 24496;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235ee0c
	if (cr0.eq) goto loc_8235EE0C;
	// bl 0x8235cfc8
	sub_8235CFC8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235ee10
	goto loc_8235EE10;
loc_8235EE0C:
	// li r31,0
	r31.s64 = 0;
loc_8235EE10:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823598e8
	sub_823598E8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235EE40"))) PPC_WEAK_FUNC(sub_8235EE40);
PPC_FUNC_IMPL(__imp__sub_8235EE40) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,224
	ctx.r3.s64 = 224;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235ee7c
	if (cr0.eq) goto loc_8235EE7C;
	// bl 0x82348510
	sub_82348510(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235ee80
	goto loc_8235EE80;
loc_8235EE7C:
	// li r31,0
	r31.s64 = 0;
loc_8235EE80:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823599b0
	sub_823599B0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235EEB0"))) PPC_WEAK_FUNC(sub_8235EEB0);
PPC_FUNC_IMPL(__imp__sub_8235EEB0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,224
	ctx.r3.s64 = 224;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235eeec
	if (cr0.eq) goto loc_8235EEEC;
	// bl 0x82346e90
	sub_82346E90(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235eef0
	goto loc_8235EEF0;
loc_8235EEEC:
	// li r31,0
	r31.s64 = 0;
loc_8235EEF0:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359a78
	sub_82359A78(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235EF20"))) PPC_WEAK_FUNC(sub_8235EF20);
PPC_FUNC_IMPL(__imp__sub_8235EF20) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,144
	ctx.r3.s64 = 144;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235ef5c
	if (cr0.eq) goto loc_8235EF5C;
	// bl 0x82388600
	sub_82388600(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235ef60
	goto loc_8235EF60;
loc_8235EF5C:
	// li r31,0
	r31.s64 = 0;
loc_8235EF60:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359cd0
	sub_82359CD0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235EF90"))) PPC_WEAK_FUNC(sub_8235EF90);
PPC_FUNC_IMPL(__imp__sub_8235EF90) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235efcc
	if (cr0.eq) goto loc_8235EFCC;
	// bl 0x8238bc88
	sub_8238BC88(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235efd0
	goto loc_8235EFD0;
loc_8235EFCC:
	// li r31,0
	r31.s64 = 0;
loc_8235EFD0:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359d98
	sub_82359D98(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235F000"))) PPC_WEAK_FUNC(sub_8235F000);
PPC_FUNC_IMPL(__imp__sub_8235F000) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,144
	ctx.r3.s64 = 144;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235f03c
	if (cr0.eq) goto loc_8235F03C;
	// bl 0x8238ac88
	sub_8238AC88(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235f040
	goto loc_8235F040;
loc_8235F03C:
	// li r31,0
	r31.s64 = 0;
loc_8235F040:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359e60
	sub_82359E60(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235F070"))) PPC_WEAK_FUNC(sub_8235F070);
PPC_FUNC_IMPL(__imp__sub_8235F070) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,144
	ctx.r3.s64 = 144;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235f0ac
	if (cr0.eq) goto loc_8235F0AC;
	// bl 0x8234e1b0
	sub_8234E1B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235f0b0
	goto loc_8235F0B0;
loc_8235F0AC:
	// li r31,0
	r31.s64 = 0;
loc_8235F0B0:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359f28
	sub_82359F28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235F0E0"))) PPC_WEAK_FUNC(sub_8235F0E0);
PPC_FUNC_IMPL(__imp__sub_8235F0E0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235f11c
	if (cr0.eq) goto loc_8235F11C;
	// bl 0x8234ed70
	sub_8234ED70(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235f120
	goto loc_8235F120;
loc_8235F11C:
	// li r31,0
	r31.s64 = 0;
loc_8235F120:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359ff0
	sub_82359FF0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235F150"))) PPC_WEAK_FUNC(sub_8235F150);
PPC_FUNC_IMPL(__imp__sub_8235F150) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,208
	ctx.r3.s64 = 208;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235f18c
	if (cr0.eq) goto loc_8235F18C;
	// bl 0x8238d140
	sub_8238D140(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235f190
	goto loc_8235F190;
loc_8235F18C:
	// li r31,0
	r31.s64 = 0;
loc_8235F190:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235a0b8
	sub_8235A0B8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235F1C0"))) PPC_WEAK_FUNC(sub_8235F1C0);
PPC_FUNC_IMPL(__imp__sub_8235F1C0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235f1fc
	if (cr0.eq) goto loc_8235F1FC;
	// bl 0x8238de60
	sub_8238DE60(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235f200
	goto loc_8235F200;
loc_8235F1FC:
	// li r31,0
	r31.s64 = 0;
loc_8235F200:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235a180
	sub_8235A180(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235F230"))) PPC_WEAK_FUNC(sub_8235F230);
PPC_FUNC_IMPL(__imp__sub_8235F230) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235f26c
	if (cr0.eq) goto loc_8235F26C;
	// bl 0x8238c7d0
	sub_8238C7D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235f270
	goto loc_8235F270;
loc_8235F26C:
	// li r31,0
	r31.s64 = 0;
loc_8235F270:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235a248
	sub_8235A248(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235F2A0"))) PPC_WEAK_FUNC(sub_8235F2A0);
PPC_FUNC_IMPL(__imp__sub_8235F2A0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235f2dc
	if (cr0.eq) goto loc_8235F2DC;
	// bl 0x82389d50
	sub_82389D50(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235f2e0
	goto loc_8235F2E0;
loc_8235F2DC:
	// li r31,0
	r31.s64 = 0;
loc_8235F2E0:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235a4a0
	sub_8235A4A0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235F310"))) PPC_WEAK_FUNC(sub_8235F310);
PPC_FUNC_IMPL(__imp__sub_8235F310) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,192
	ctx.r3.s64 = 192;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235f34c
	if (cr0.eq) goto loc_8235F34C;
	// bl 0x82389310
	sub_82389310(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235f350
	goto loc_8235F350;
loc_8235F34C:
	// li r31,0
	r31.s64 = 0;
loc_8235F350:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235a568
	sub_8235A568(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235F380"))) PPC_WEAK_FUNC(sub_8235F380);
PPC_FUNC_IMPL(__imp__sub_8235F380) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,224
	ctx.r3.s64 = 224;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235f3bc
	if (cr0.eq) goto loc_8235F3BC;
	// bl 0x82346440
	sub_82346440(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235f3c0
	goto loc_8235F3C0;
loc_8235F3BC:
	// li r31,0
	r31.s64 = 0;
loc_8235F3C0:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235a6f8
	sub_8235A6F8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235F3F0"))) PPC_WEAK_FUNC(sub_8235F3F0);
PPC_FUNC_IMPL(__imp__sub_8235F3F0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,224
	ctx.r3.s64 = 224;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235f42c
	if (cr0.eq) goto loc_8235F42C;
	// bl 0x82344cf0
	sub_82344CF0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235f430
	goto loc_8235F430;
loc_8235F42C:
	// li r31,0
	r31.s64 = 0;
loc_8235F430:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235a7c0
	sub_8235A7C0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235F460"))) PPC_WEAK_FUNC(sub_8235F460);
PPC_FUNC_IMPL(__imp__sub_8235F460) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,144
	ctx.r3.s64 = 144;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235f49c
	if (cr0.eq) goto loc_8235F49C;
	// bl 0x823882d8
	sub_823882D8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235f4a0
	goto loc_8235F4A0;
loc_8235F49C:
	// li r31,0
	r31.s64 = 0;
loc_8235F4A0:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235aa18
	sub_8235AA18(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235F4D0"))) PPC_WEAK_FUNC(sub_8235F4D0);
PPC_FUNC_IMPL(__imp__sub_8235F4D0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235f50c
	if (cr0.eq) goto loc_8235F50C;
	// bl 0x8234ee48
	sub_8234EE48(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235f510
	goto loc_8235F510;
loc_8235F50C:
	// li r31,0
	r31.s64 = 0;
loc_8235F510:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235ad38
	sub_8235AD38(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235F540"))) PPC_WEAK_FUNC(sub_8235F540);
PPC_FUNC_IMPL(__imp__sub_8235F540) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8235f594
	if (cr0.eq) goto loc_8235F594;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234f100
	sub_8234F100(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r10,24032
	ctx.r10.s64 = ctx.r10.s64 + 24032;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// b 0x8235f598
	goto loc_8235F598;
loc_8235F594:
	// li r31,0
	r31.s64 = 0;
loc_8235F598:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235ae00
	sub_8235AE00(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235F5C8"))) PPC_WEAK_FUNC(sub_8235F5C8);
PPC_FUNC_IMPL(__imp__sub_8235F5C8) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235f604
	if (cr0.eq) goto loc_8235F604;
	// bl 0x8234f488
	sub_8234F488(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235f608
	goto loc_8235F608;
loc_8235F604:
	// li r31,0
	r31.s64 = 0;
loc_8235F608:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235aec8
	sub_8235AEC8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235F638"))) PPC_WEAK_FUNC(sub_8235F638);
PPC_FUNC_IMPL(__imp__sub_8235F638) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235f674
	if (cr0.eq) goto loc_8235F674;
	// bl 0x8234f940
	sub_8234F940(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235f678
	goto loc_8235F678;
loc_8235F674:
	// li r31,0
	r31.s64 = 0;
loc_8235F678:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235af90
	sub_8235AF90(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235F6A8"))) PPC_WEAK_FUNC(sub_8235F6A8);
PPC_FUNC_IMPL(__imp__sub_8235F6A8) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8235f6f0
	if (cr0.eq) goto loc_8235F6F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234f100
	sub_8234F100(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,24076
	r11.s64 = r11.s64 + 24076;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x8235f6f4
	goto loc_8235F6F4;
loc_8235F6F0:
	// li r31,0
	r31.s64 = 0;
loc_8235F6F4:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235b058
	sub_8235B058(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235F728"))) PPC_WEAK_FUNC(sub_8235F728);
PPC_FUNC_IMPL(__imp__sub_8235F728) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24496
	ctx.r4.s64 = r11.s64 + 24496;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8235f770
	if (cr0.eq) goto loc_8235F770;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e65b68
	sub_82E65B68(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,24120
	r11.s64 = r11.s64 + 24120;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x8235f774
	goto loc_8235F774;
loc_8235F770:
	// li r31,0
	r31.s64 = 0;
loc_8235F774:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235b120
	sub_8235B120(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235F7A8"))) PPC_WEAK_FUNC(sub_8235F7A8);
PPC_FUNC_IMPL(__imp__sub_8235F7A8) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24496
	ctx.r4.s64 = r11.s64 + 24496;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8235f7f0
	if (cr0.eq) goto loc_8235F7F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e65b68
	sub_82E65B68(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,24160
	r11.s64 = r11.s64 + 24160;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x8235f7f4
	goto loc_8235F7F4;
loc_8235F7F0:
	// li r31,0
	r31.s64 = 0;
loc_8235F7F4:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235b1e8
	sub_8235B1E8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235F828"))) PPC_WEAK_FUNC(sub_8235F828);
PPC_FUNC_IMPL(__imp__sub_8235F828) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24496
	ctx.r4.s64 = r11.s64 + 24496;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r3,192
	ctx.r3.s64 = 192;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8235f870
	if (cr0.eq) goto loc_8235F870;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e65b68
	sub_82E65B68(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,24200
	r11.s64 = r11.s64 + 24200;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x8235f874
	goto loc_8235F874;
loc_8235F870:
	// li r31,0
	r31.s64 = 0;
loc_8235F874:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235b2b0
	sub_8235B2B0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235F8A8"))) PPC_WEAK_FUNC(sub_8235F8A8);
PPC_FUNC_IMPL(__imp__sub_8235F8A8) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24496
	ctx.r4.s64 = r11.s64 + 24496;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8235f8f0
	if (cr0.eq) goto loc_8235F8F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e65b68
	sub_82E65B68(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,24240
	r11.s64 = r11.s64 + 24240;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x8235f8f4
	goto loc_8235F8F4;
loc_8235F8F0:
	// li r31,0
	r31.s64 = 0;
loc_8235F8F4:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235b378
	sub_8235B378(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235F928"))) PPC_WEAK_FUNC(sub_8235F928);
PPC_FUNC_IMPL(__imp__sub_8235F928) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24496
	ctx.r4.s64 = r11.s64 + 24496;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8235f97c
	if (cr0.eq) goto loc_8235F97C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e65b68
	sub_82E65B68(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r10,24280
	ctx.r10.s64 = ctx.r10.s64 + 24280;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// b 0x8235f980
	goto loc_8235F980;
loc_8235F97C:
	// li r31,0
	r31.s64 = 0;
loc_8235F980:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235b440
	sub_8235B440(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235F9B0"))) PPC_WEAK_FUNC(sub_8235F9B0);
PPC_FUNC_IMPL(__imp__sub_8235F9B0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24496
	ctx.r4.s64 = r11.s64 + 24496;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r3,144
	ctx.r3.s64 = 144;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8235f9f8
	if (cr0.eq) goto loc_8235F9F8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e65b68
	sub_82E65B68(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,24320
	r11.s64 = r11.s64 + 24320;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x8235f9fc
	goto loc_8235F9FC;
loc_8235F9F8:
	// li r31,0
	r31.s64 = 0;
loc_8235F9FC:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235b508
	sub_8235B508(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235FA30"))) PPC_WEAK_FUNC(sub_8235FA30);
PPC_FUNC_IMPL(__imp__sub_8235FA30) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24496
	ctx.r4.s64 = r11.s64 + 24496;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r3,192
	ctx.r3.s64 = 192;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235fa6c
	if (cr0.eq) goto loc_8235FA6C;
	// bl 0x8238dfc0
	sub_8238DFC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235fa70
	goto loc_8235FA70;
loc_8235FA6C:
	// li r31,0
	r31.s64 = 0;
loc_8235FA70:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235b5d0
	sub_8235B5D0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235FAA0"))) PPC_WEAK_FUNC(sub_8235FAA0);
PPC_FUNC_IMPL(__imp__sub_8235FAA0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24496
	ctx.r4.s64 = r11.s64 + 24496;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235fadc
	if (cr0.eq) goto loc_8235FADC;
	// bl 0x82351248
	sub_82351248(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235fae0
	goto loc_8235FAE0;
loc_8235FADC:
	// li r31,0
	r31.s64 = 0;
loc_8235FAE0:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235b698
	sub_8235B698(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235FB10"))) PPC_WEAK_FUNC(sub_8235FB10);
PPC_FUNC_IMPL(__imp__sub_8235FB10) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24496
	ctx.r4.s64 = r11.s64 + 24496;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r3,192
	ctx.r3.s64 = 192;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8235fb64
	if (cr0.eq) goto loc_8235FB64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e65b68
	sub_82E65B68(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r10,24360
	ctx.r10.s64 = ctx.r10.s64 + 24360;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// b 0x8235fb68
	goto loc_8235FB68;
loc_8235FB64:
	// li r31,0
	r31.s64 = 0;
loc_8235FB68:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235b760
	sub_8235B760(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235FB98"))) PPC_WEAK_FUNC(sub_8235FB98);
PPC_FUNC_IMPL(__imp__sub_8235FB98) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24496
	ctx.r4.s64 = r11.s64 + 24496;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235fbd4
	if (cr0.eq) goto loc_8235FBD4;
	// bl 0x8238fe00
	sub_8238FE00(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235fbd8
	goto loc_8235FBD8;
loc_8235FBD4:
	// li r31,0
	r31.s64 = 0;
loc_8235FBD8:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235b828
	sub_8235B828(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235FC08"))) PPC_WEAK_FUNC(sub_8235FC08);
PPC_FUNC_IMPL(__imp__sub_8235FC08) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24496
	ctx.r4.s64 = r11.s64 + 24496;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235fc44
	if (cr0.eq) goto loc_8235FC44;
	// bl 0x8234ff70
	sub_8234FF70(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235fc48
	goto loc_8235FC48;
loc_8235FC44:
	// li r31,0
	r31.s64 = 0;
loc_8235FC48:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235b8f0
	sub_8235B8F0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235FC78"))) PPC_WEAK_FUNC(sub_8235FC78);
PPC_FUNC_IMPL(__imp__sub_8235FC78) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24496
	ctx.r4.s64 = r11.s64 + 24496;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235fcb4
	if (cr0.eq) goto loc_8235FCB4;
	// bl 0x8235d018
	sub_8235D018(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235fcb8
	goto loc_8235FCB8;
loc_8235FCB4:
	// li r31,0
	r31.s64 = 0;
loc_8235FCB8:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235b9b8
	sub_8235B9B8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235FCE8"))) PPC_WEAK_FUNC(sub_8235FCE8);
PPC_FUNC_IMPL(__imp__sub_8235FCE8) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24496
	ctx.r4.s64 = r11.s64 + 24496;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235fd24
	if (cr0.eq) goto loc_8235FD24;
	// bl 0x823505f0
	sub_823505F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235fd28
	goto loc_8235FD28;
loc_8235FD24:
	// li r31,0
	r31.s64 = 0;
loc_8235FD28:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235ba80
	sub_8235BA80(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235FD58"))) PPC_WEAK_FUNC(sub_8235FD58);
PPC_FUNC_IMPL(__imp__sub_8235FD58) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822efb38
	sub_822EFB38(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// beq cr6,0x8235fdb0
	if (cr6.eq) goto loc_8235FDB0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8235FDB0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235FDC8"))) PPC_WEAK_FUNC(sub_8235FDC8);
PPC_FUNC_IMPL(__imp__sub_8235FDC8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8235bc10
	sub_8235BC10(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// beq cr6,0x8235fe20
	if (cr6.eq) goto loc_8235FE20;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8235FE20:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235FE38"))) PPC_WEAK_FUNC(sub_8235FE38);
PPC_FUNC_IMPL(__imp__sub_8235FE38) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8235bda0
	sub_8235BDA0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// beq cr6,0x8235fe90
	if (cr6.eq) goto loc_8235FE90;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8235FE90:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235FEA8"))) PPC_WEAK_FUNC(sub_8235FEA8);
PPC_FUNC_IMPL(__imp__sub_8235FEA8) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-20020
	ctx.r4.s64 = r11.s64 + -20020;
	// li r5,137
	ctx.r5.s64 = 137;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235feec
	if (cr0.eq) goto loc_8235FEEC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82b57e80
	sub_82B57E80(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235fef0
	goto loc_8235FEF0;
loc_8235FEEC:
	// li r31,0
	r31.s64 = 0;
loc_8235FEF0:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235be68
	sub_8235BE68(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235FF20"))) PPC_WEAK_FUNC(sub_8235FF20);
PPC_FUNC_IMPL(__imp__sub_8235FF20) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-20020
	ctx.r4.s64 = r11.s64 + -20020;
	// li r5,115
	ctx.r5.s64 = 115;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8235ff68
	if (cr0.eq) goto loc_8235FF68;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e626b8
	sub_82E626B8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,20476
	r11.s64 = r11.s64 + 20476;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x8235ff6c
	goto loc_8235FF6C;
loc_8235FF68:
	// li r31,0
	r31.s64 = 0;
loc_8235FF6C:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235bff8
	sub_8235BFF8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8235FFA0"))) PPC_WEAK_FUNC(sub_8235FFA0);
PPC_FUNC_IMPL(__imp__sub_8235FFA0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-20020
	ctx.r4.s64 = r11.s64 + -20020;
	// li r5,137
	ctx.r5.s64 = 137;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235ffe4
	if (cr0.eq) goto loc_8235FFE4;
	// lbz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// bl 0x82b5d9c0
	sub_82B5D9C0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8235ffe8
	goto loc_8235FFE8;
loc_8235FFE4:
	// li r31,0
	r31.s64 = 0;
loc_8235FFE8:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235c0c0
	sub_8235C0C0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82360018"))) PPC_WEAK_FUNC(sub_82360018);
PPC_FUNC_IMPL(__imp__sub_82360018) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-20020
	ctx.r4.s64 = r11.s64 + -20020;
	// li r5,137
	ctx.r5.s64 = 137;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8236005c
	if (cr0.eq) goto loc_8236005C;
	// lbz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// bl 0x82b5da50
	sub_82B5DA50(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82360060
	goto loc_82360060;
loc_8236005C:
	// li r31,0
	r31.s64 = 0;
loc_82360060:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235c188
	sub_8235C188(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82360090"))) PPC_WEAK_FUNC(sub_82360090);
PPC_FUNC_IMPL(__imp__sub_82360090) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-20020
	ctx.r4.s64 = r11.s64 + -20020;
	// li r5,137
	ctx.r5.s64 = 137;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823600d4
	if (cr0.eq) goto loc_823600D4;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82b5dcf0
	sub_82B5DCF0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x823600d8
	goto loc_823600D8;
loc_823600D4:
	// li r31,0
	r31.s64 = 0;
loc_823600D8:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235c250
	sub_8235C250(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82360108"))) PPC_WEAK_FUNC(sub_82360108);
PPC_FUNC_IMPL(__imp__sub_82360108) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// li r30,0
	r30.s64 = 0;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-20020
	ctx.r4.s64 = r11.s64 + -20020;
	// li r5,137
	ctx.r5.s64 = 137;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82360170
	if (cr0.eq) goto loc_82360170;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// li r30,1
	r30.s64 = 1;
	// bl 0x82336c40
	sub_82336C40(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82360174
	goto loc_82360174;
loc_82360170:
	// li r31,0
	r31.s64 = 0;
loc_82360174:
	// stw r31,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r31.u32);
	// addi r29,r27,4
	r29.s64 = r27.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8235c318
	sub_8235C318(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823601a8
	if (cr0.eq) goto loc_823601A8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_823601A8:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_823601B8"))) PPC_WEAK_FUNC(sub_823601B8);
PPC_FUNC_IMPL(__imp__sub_823601B8) {
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
	// bl 0x82e65b68
	sub_82E65B68(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r10,24564
	ctx.r10.s64 = ctx.r10.s64 + 24564;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r11.u32);
	// stw r11,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r11.u32);
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

__attribute__((alias("__imp__sub_82360208"))) PPC_WEAK_FUNC(sub_82360208);
PPC_FUNC_IMPL(__imp__sub_82360208) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// bl 0x82376708
	sub_82376708(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8235d478
	sub_8235D478(ctx, base);
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

__attribute__((alias("__imp__sub_82360248"))) PPC_WEAK_FUNC(sub_82360248);
PPC_FUNC_IMPL(__imp__sub_82360248) {
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
	PPCRegister f31{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r31,196(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82316318
	sub_82316318(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823604b0
	if (cr0.eq) goto loc_823604B0;
	// lis r11,-31945
	r11.s64 = -2093547520;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r28,-28880(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + -28880);
	// bl 0x82316328
	sub_82316328(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x827bf498
	sub_827BF498(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823604b0
	if (!cr0.eq) goto loc_823604B0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8231cf10
	sub_8231CF10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8236f9d8
	sub_8236F9D8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82360350
	if (cr0.eq) goto loc_82360350;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82317eb0
	sub_82317EB0(ctx, base);
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v63,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// lfs f0,24600(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24600);
	f0.f64 = double(temp.f32);
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x82360350
	if (!cr6.gt) goto loc_82360350;
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// vspltisw128 v63,1
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_set1_epi32(int(0x1)));
	// vspltisw128 v62,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// vcsxwfp128 v13,v63,1
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v63.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3F000000)))));
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v63,v63
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// vrsqrtefp128 v0,v63
	simde_mm_store_ps(ctx.v0.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(v63.f32))));
	// vor128 v12,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)v63.u8));
	// vmulfp128 v11,v63,v13
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vcmpeqfp128 v10,v63,v62
	simde_mm_store_ps(ctx.v10.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// vmulfp128 v9,v0,v0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v13,v11,v9,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v13.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v63,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vsel v0,v0,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// stvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e86198
	sub_82E86198(ctx, base);
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lvlx128 v62,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v62,v62,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), 0xFF));
	// vmulfp128 v63,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82360350:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,196(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// bl 0x82317050
	sub_82317050(ctx, base);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v62,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v62.f32, simde_mm_dp_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// lfs f31,2240(r8)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2240);
	f31.f64 = double(temp.f32);
	// stvx128 v62,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// blt cr6,0x82360394
	if (cr6.lt) goto loc_82360394;
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82360394:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lvlx128 v62,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v62,v62,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), 0xFF));
	// vmulfp128 v63,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e86270
	sub_82E86270(ctx, base);
	// addi r30,r30,40
	r30.s64 = r30.s64 + 40;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82e5f798
	sub_82E5F798(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82e627e0
	sub_82E627E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e6a288
	sub_82E6A288(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8236fa48
	sub_8236FA48(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82316328
	sub_82316328(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r31,r1,112
	r31.s64 = ctx.r1.s64 + 112;
	// bl 0x823087c8
	sub_823087C8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// bl 0x8241a798
	sub_8241A798(ctx, base);
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
	// beq cr6,0x82360464
	if (cr6.eq) goto loc_82360464;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82360448:
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
	// bne 0x82360448
	if (!cr0.eq) goto loc_82360448;
loc_82360464:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r31,r1,88
	r31.s64 = ctx.r1.s64 + 88;
	// bl 0x82e627e0
	sub_82E627E0(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r4,r11,23624
	ctx.r4.s64 = r11.s64 + 23624;
	// li r5,2595
	ctx.r5.s64 = 2595;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// bl 0x82e61a78
	sub_82E61A78(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823604a0
	if (cr6.eq) goto loc_823604A0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_823604A0:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823604b0
	if (cr6.eq) goto loc_823604B0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_823604B0:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_823604C0"))) PPC_WEAK_FUNC(sub_823604C0);
PPC_FUNC_IMPL(__imp__sub_823604C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// li r12,-48
	r12.s64 = -48;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r31,196(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,56(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8231c590
	sub_8231C590(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e627e0
	sub_82E627E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823700b0
	sub_823700B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823606dc
	if (cr0.eq) goto loc_823606DC;
	// li r29,0
	r29.s64 = 0;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// bl 0x823171c8
	sub_823171C8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8236055c
	if (cr0.eq) goto loc_8236055C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82374ed8
	sub_82374ED8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823605f4
	if (cr6.eq) goto loc_823605F4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
	// b 0x823605f4
	goto loc_823605F4;
loc_8236055C:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,23624
	ctx.r4.s64 = r11.s64 + 23624;
	// li r5,3005
	ctx.r5.s64 = 3005;
	// li r3,224
	ctx.r3.s64 = 224;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x823605e8
	if (cr0.eq) goto loc_823605E8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82317050
	sub_82317050(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f0,-11900(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -11900);
	f0.f64 = double(temp.f32);
	// lvx128 v127,r0,r10
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x823087c8
	sub_823087C8(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp128 v62,v127,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v62.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(v63.f32)), simde_mm_load_ps(v62.f32)));
	// stvx128 v62,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e84d20
	sub_82E84D20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e1bac0
	sub_82E1BAC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823605ec
	goto loc_823605EC;
loc_823605E8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_823605EC:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822e3958
	sub_822E3958(ctx, base);
loc_823605F4:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,24604
	ctx.r4.s64 = r11.s64 + 24604;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lwz r30,92(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// beq cr6,0x8236063c
	if (cr6.eq) goto loc_8236063C;
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
loc_82360620:
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
	// bne 0x82360620
	if (!cr0.eq) goto loc_82360620;
loc_8236063C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a6fe20
	sub_82A6FE20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
	// bne cr6,0x82360664
	if (!cr6.eq) goto loc_82360664;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_82360664:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8250e538
	sub_8250E538(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,-192
	ctx.r4.s64 = r11.s64 + -192;
	// bne cr6,0x82360680
	if (!cr6.eq) goto loc_82360680;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_82360680:
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x827da560
	sub_827DA560(ctx, base);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823606a4
	if (cr6.eq) goto loc_823606A4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_823606A4:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823606c4
	if (cr6.eq) goto loc_823606C4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_823606C4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x823606dc
	if (cr6.eq) goto loc_823606DC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_823606DC:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// li r0,-48
	r0.s64 = -48;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_823606F0"))) PPC_WEAK_FUNC(sub_823606F0);
PPC_FUNC_IMPL(__imp__sub_823606F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// bl 0x82316b60
	sub_82316B60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x823607b0
	if (!cr0.eq) goto loc_823607B0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8235ff20
	sub_8235FF20(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// beq cr6,0x8236075c
	if (cr6.eq) goto loc_8236075C;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82360740:
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
	// bne 0x82360740
	if (!cr0.eq) goto loc_82360740;
loc_8236075C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
	// bl 0x82e627e0
	sub_82E627E0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r10,23624
	ctx.r4.s64 = ctx.r10.s64 + 23624;
	// li r5,3336
	ctx.r5.s64 = 3336;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x82e61a78
	sub_82E61A78(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8236079c
	if (cr6.eq) goto loc_8236079C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8236079C:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823607bc
	if (cr6.eq) goto loc_823607BC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
	// b 0x823607bc
	goto loc_823607BC;
loc_823607B0:
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// bl 0x8231fae8
	sub_8231FAE8(ctx, base);
loc_823607BC:
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

__attribute__((alias("__imp__sub_823607D8"))) PPC_WEAK_FUNC(sub_823607D8);
PPC_FUNC_IMPL(__imp__sub_823607D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r4,24(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// bl 0x82318aa0
	sub_82318AA0(ctx, base);
	// li r11,5
	r11.s64 = 5;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82320740
	sub_82320740(ctx, base);
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
	// beq cr6,0x82360848
	if (cr6.eq) goto loc_82360848;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8236082C:
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
	// bne 0x8236082c
	if (!cr0.eq) goto loc_8236082C;
loc_82360848:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x82360868
	if (!cr6.eq) goto loc_82360868;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82360868:
	// addi r30,r1,88
	r30.s64 = ctx.r1.s64 + 88;
	// bl 0x8250c118
	sub_8250C118(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r10,23624
	ctx.r4.s64 = ctx.r10.s64 + 23624;
	// li r5,3354
	ctx.r5.s64 = 3354;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x82e61a78
	sub_82E61A78(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823608ac
	if (cr6.eq) goto loc_823608AC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_823608AC:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823608bc
	if (cr6.eq) goto loc_823608BC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_823608BC:
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

__attribute__((alias("__imp__sub_823608D8"))) PPC_WEAK_FUNC(sub_823608D8);
PPC_FUNC_IMPL(__imp__sub_823608D8) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,196(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// addi r30,r3,40
	r30.s64 = ctx.r3.s64 + 40;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8236fe70
	sub_8236FE70(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r29,r11,23624
	r29.s64 = r11.s64 + 23624;
	// li r5,3829
	ctx.r5.s64 = 3829;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// bl 0x82e5fe50
	sub_82E5FE50(ctx, base);
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823171c8
	sub_823171C8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823609c4
	if (cr0.eq) goto loc_823609C4;
	// li r11,1
	r11.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8235ffa0
	sub_8235FFA0(ctx, base);
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
	// beq cr6,0x82360978
	if (cr6.eq) goto loc_82360978;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8236095C:
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
	// bne 0x8236095c
	if (!cr0.eq) goto loc_8236095C;
loc_82360978:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r31,r1,88
	r31.s64 = ctx.r1.s64 + 88;
	// bl 0x8236fe70
	sub_8236FE70(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r5,3831
	ctx.r5.s64 = 3831;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e61a78
	sub_82E61A78(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823609b4
	if (cr6.eq) goto loc_823609B4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_823609B4:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823609c4
	if (cr6.eq) goto loc_823609C4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_823609C4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_823609D0"))) PPC_WEAK_FUNC(sub_823609D0);
PPC_FUNC_IMPL(__imp__sub_823609D0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r29,r31,40
	r29.s64 = r31.s64 + 40;
	// lwz r30,196(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8236fe70
	sub_8236FE70(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r28,r11,23624
	r28.s64 = r11.s64 + 23624;
	// li r5,3882
	ctx.r5.s64 = 3882;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// bl 0x82e5fe50
	sub_82E5FE50(ctx, base);
	// lis r11,-31961
	r11.s64 = -2094596096;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,-17848(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -17848);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r31,r1,84
	r31.s64 = ctx.r1.s64 + 84;
	// bl 0x82304020
	sub_82304020(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82360ae4
	if (cr0.eq) goto loc_82360AE4;
	// li r11,1
	r11.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82360018
	sub_82360018(ctx, base);
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
	// beq cr6,0x82360a98
	if (cr6.eq) goto loc_82360A98;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82360A7C:
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
	// bne 0x82360a7c
	if (!cr0.eq) goto loc_82360A7C;
loc_82360A98:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r31,r1,88
	r31.s64 = ctx.r1.s64 + 88;
	// bl 0x8236fe70
	sub_8236FE70(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r5,3884
	ctx.r5.s64 = 3884;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e61a78
	sub_82E61A78(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82360ad4
	if (cr6.eq) goto loc_82360AD4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82360AD4:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82360ae4
	if (cr6.eq) goto loc_82360AE4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82360AE4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82360AF0"))) PPC_WEAK_FUNC(sub_82360AF0);
PPC_FUNC_IMPL(__imp__sub_82360AF0) {
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
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r31,196(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r29,r11,-4
	r29.s64 = r11.s64 + -4;
	// bne cr6,0x82360b30
	if (!cr6.eq) goto loc_82360B30;
	// li r29,0
	r29.s64 = 0;
loc_82360B30:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82316208
	sub_82316208(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823171c8
	sub_823171C8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8231a468
	sub_8231A468(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x8250c268
	sub_8250C268(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x8245edf0
	sub_8245EDF0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r29,r11,-4
	r29.s64 = r11.s64 + -4;
	// bne cr6,0x82360b9c
	if (!cr6.eq) goto loc_82360B9C;
	// li r29,0
	r29.s64 = 0;
loc_82360B9C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823087c8
	sub_823087C8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82308308
	sub_82308308(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x82309f98
	sub_82309F98(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250c9f8
	sub_8250C9F8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r31,r30,40
	r31.s64 = r30.s64 + 40;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82315158
	sub_82315158(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f30,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f30.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	cr6.compare(f31.f64, f30.f64);
	// ble cr6,0x82360cd4
	if (!cr6.gt) goto loc_82360CD4;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lfs f0,26548(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 26548);
	f0.f64 = double(temp.f32);
	// fmuls f0,f31,f0
	f0.f64 = double(float(f31.f64 * f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&f0.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, f0.u64);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x82360090
	sub_82360090(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// beq cr6,0x82360c64
	if (cr6.eq) goto loc_82360C64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82360C48:
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
	// bne 0x82360c48
	if (!cr0.eq) goto loc_82360C48;
loc_82360C64:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x82360c84
	if (!cr6.eq) goto loc_82360C84;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82360C84:
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
	// bl 0x8250c118
	sub_8250C118(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,23624
	ctx.r4.s64 = r11.s64 + 23624;
	// li r5,4120
	ctx.r5.s64 = 4120;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x82e61a78
	sub_82E61A78(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82360cc4
	if (cr6.eq) goto loc_82360CC4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82360CC4:
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82360cd4
	if (cr6.eq) goto loc_82360CD4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82360CD4:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82360CE8"))) PPC_WEAK_FUNC(sub_82360CE8);
PPC_FUNC_IMPL(__imp__sub_82360CE8) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x82360d20
	if (!cr6.eq) goto loc_82360D20;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82360D20:
	// bl 0x8250c0b8
	sub_8250C0B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82e76d50
	sub_82E76D50(ctx, base);
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x82361620
	if (cr6.eq) goto loc_82361620;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x8236145c
	if (cr6.eq) goto loc_8236145C;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x82361298
	if (cr6.eq) goto loc_82361298;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// beq cr6,0x823610e8
	if (cr6.eq) goto loc_823610E8;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82360f24
	if (cr6.eq) goto loc_82360F24;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// bne cr6,0x823617ec
	if (!cr6.eq) goto loc_823617EC;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r4,r11,25136
	ctx.r4.s64 = r11.s64 + 25136;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x82e491c8
	sub_82E491C8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r31,840
	ctx.r10.s64 = r31.s64 + 840;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,840(r31)
	PPC_STORE_U32(r31.u32 + 840, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,252(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82360dc0
	if (cr6.eq) goto loc_82360DC0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82360DC0:
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// addi r4,r11,25104
	ctx.r4.s64 = r11.s64 + 25104;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82e491c8
	sub_82E491C8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r31,860
	ctx.r10.s64 = r31.s64 + 860;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,860(r31)
	PPC_STORE_U32(r31.u32 + 860, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,228(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82360e18
	if (cr6.eq) goto loc_82360E18;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82360E18:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r10,r10,25092
	ctx.r10.s64 = ctx.r10.s64 + 25092;
	// addi r9,r9,25080
	ctx.r9.s64 = ctx.r9.s64 + 25080;
	// addi r3,r1,376
	ctx.r3.s64 = ctx.r1.s64 + 376;
	// lfs f0,-22120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22120);
	f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824ec488
	sub_824EC488(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lfs f0,-31000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31000);
	f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&f0.f64));
	// stfd f0,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, f0.u64);
	// lwz r30,124(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(r30.u32, 2, xer);
	// ble cr6,0x82360e7c
	if (!cr6.gt) goto loc_82360E7C;
	// li r30,2
	r30.s64 = 2;
loc_82360E7C:
	// addi r3,r1,376
	ctx.r3.s64 = ctx.r1.s64 + 376;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// add r4,r11,r9
	ctx.r4.u64 = r11.u64 + ctx.r9.u64;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x82360108
	sub_82360108(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r11.u32);
	// beq cr6,0x82360ed8
	if (cr6.eq) goto loc_82360ED8;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82360EBC:
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
	// bne 0x82360ebc
	if (!cr0.eq) goto loc_82360EBC;
loc_82360ED8:
	// addi r30,r31,40
	r30.s64 = r31.s64 + 40;
	// addi r28,r1,176
	r28.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83159478
	sub_83159478(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r10,23624
	ctx.r4.s64 = ctx.r10.s64 + 23624;
	// li r5,4343
	ctx.r5.s64 = 4343;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// bl 0x82e61a78
	sub_82E61A78(ctx, base);
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82360f1c
	if (cr6.eq) goto loc_82360F1C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82360F1C:
	// lwz r3,268(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// b 0x823617e0
	goto loc_823617E0;
loc_82360F24:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// addi r4,r11,25048
	ctx.r4.s64 = r11.s64 + 25048;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,172
	ctx.r5.s64 = ctx.r1.s64 + 172;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// bl 0x82e491c8
	sub_82E491C8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r31,840
	ctx.r10.s64 = r31.s64 + 840;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,840(r31)
	PPC_STORE_U32(r31.u32 + 840, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,348(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82360f74
	if (cr6.eq) goto loc_82360F74;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82360F74:
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// addi r4,r11,25016
	ctx.r4.s64 = r11.s64 + 25016;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// bl 0x82e491c8
	sub_82E491C8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r31,860
	ctx.r10.s64 = r31.s64 + 860;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,860(r31)
	PPC_STORE_U32(r31.u32 + 860, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,284(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82360fcc
	if (cr6.eq) goto loc_82360FCC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82360FCC:
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r10,r10,24992
	ctx.r10.s64 = ctx.r10.s64 + 24992;
	// lfs f0,-22120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22120);
	f0.f64 = double(temp.f32);
	// addi r9,r9,24980
	ctx.r9.s64 = ctx.r9.s64 + 24980;
	// addi r11,r8,25004
	r11.s64 = ctx.r8.s64 + 25004;
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r1,408
	ctx.r3.s64 = ctx.r1.s64 + 408;
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824ec488
	sub_824EC488(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-21220(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -21220);
	f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&f0.f64));
	// stfd f0,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, f0.u64);
	// lwz r30,124(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(r30.u32, 3, xer);
	// ble cr6,0x82361040
	if (!cr6.gt) goto loc_82361040;
	// li r30,3
	r30.s64 = 3;
loc_82361040:
	// addi r3,r1,408
	ctx.r3.s64 = ctx.r1.s64 + 408;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// add r4,r11,r9
	ctx.r4.u64 = r11.u64 + ctx.r9.u64;
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// bl 0x82360108
	sub_82360108(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r11.u32);
	// beq cr6,0x8236109c
	if (cr6.eq) goto loc_8236109C;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82361080:
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
	// bne 0x82361080
	if (!cr0.eq) goto loc_82361080;
loc_8236109C:
	// addi r30,r31,40
	r30.s64 = r31.s64 + 40;
	// addi r28,r1,184
	r28.s64 = ctx.r1.s64 + 184;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83159478
	sub_83159478(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r10,23624
	ctx.r4.s64 = ctx.r10.s64 + 23624;
	// li r5,4326
	ctx.r5.s64 = 4326;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// bl 0x82e61a78
	sub_82E61A78(ctx, base);
	// lwz r3,188(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823610e0
	if (cr6.eq) goto loc_823610E0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_823610E0:
	// lwz r3,300(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// b 0x823617e0
	goto loc_823617E0;
loc_823610E8:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// addi r4,r11,24948
	ctx.r4.s64 = r11.s64 + 24948;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// bl 0x82e491c8
	sub_82E491C8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r31,840
	ctx.r10.s64 = r31.s64 + 840;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,840(r31)
	PPC_STORE_U32(r31.u32 + 840, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,364(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82361138
	if (cr6.eq) goto loc_82361138;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82361138:
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// addi r4,r11,24916
	ctx.r4.s64 = r11.s64 + 24916;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// bl 0x82e491c8
	sub_82E491C8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r31,860
	ctx.r10.s64 = r31.s64 + 860;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,860(r31)
	PPC_STORE_U32(r31.u32 + 860, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,316(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82361190
	if (cr6.eq) goto loc_82361190;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82361190:
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r10,r10,24904
	ctx.r10.s64 = ctx.r10.s64 + 24904;
	// addi r9,r9,24892
	ctx.r9.s64 = ctx.r9.s64 + 24892;
	// addi r3,r1,392
	ctx.r3.s64 = ctx.r1.s64 + 392;
	// lfs f31,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824ec488
	sub_824EC488(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lfs f0,-31000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31000);
	f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&f0.f64));
	// stfd f0,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, f0.u64);
	// lwz r30,124(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(r30.u32, 2, xer);
	// ble cr6,0x823611f4
	if (!cr6.gt) goto loc_823611F4;
	// li r30,2
	r30.s64 = 2;
loc_823611F4:
	// addi r3,r1,392
	ctx.r3.s64 = ctx.r1.s64 + 392;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// add r4,r11,r9
	ctx.r4.u64 = r11.u64 + ctx.r9.u64;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x82360108
	sub_82360108(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, r11.u32);
	// beq cr6,0x82361250
	if (cr6.eq) goto loc_82361250;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82361234:
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
	// bne 0x82361234
	if (!cr0.eq) goto loc_82361234;
loc_82361250:
	// addi r30,r31,40
	r30.s64 = r31.s64 + 40;
	// addi r28,r1,200
	r28.s64 = ctx.r1.s64 + 200;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83159478
	sub_83159478(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r4,r11,23624
	ctx.r4.s64 = r11.s64 + 23624;
	// li r5,4307
	ctx.r5.s64 = 4307;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// bl 0x82e61a78
	sub_82E61A78(ctx, base);
	// lwz r3,204(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82361290
	if (cr6.eq) goto loc_82361290;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82361290:
	// lwz r3,236(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// b 0x823617e0
	goto loc_823617E0;
loc_82361298:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,24860
	ctx.r4.s64 = r11.s64 + 24860;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82e491c8
	sub_82E491C8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r31,840
	ctx.r10.s64 = r31.s64 + 840;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,840(r31)
	PPC_STORE_U32(r31.u32 + 840, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,244(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823612e8
	if (cr6.eq) goto loc_823612E8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_823612E8:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,24828
	ctx.r4.s64 = r11.s64 + 24828;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82e491c8
	sub_82E491C8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r31,860
	ctx.r10.s64 = r31.s64 + 860;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,860(r31)
	PPC_STORE_U32(r31.u32 + 860, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,260(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82361340
	if (cr6.eq) goto loc_82361340;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82361340:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r10,r10,24804
	ctx.r10.s64 = ctx.r10.s64 + 24804;
	// lfs f0,-22120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22120);
	f0.f64 = double(temp.f32);
	// addi r9,r9,7660
	ctx.r9.s64 = ctx.r9.s64 + 7660;
	// addi r11,r8,24816
	r11.s64 = ctx.r8.s64 + 24816;
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824ec488
	sub_824EC488(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-21220(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -21220);
	f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&f0.f64));
	// stfd f0,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, f0.u64);
	// lwz r30,124(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(r30.u32, 3, xer);
	// ble cr6,0x823613b4
	if (!cr6.gt) goto loc_823613B4;
	// li r30,3
	r30.s64 = 3;
loc_823613B4:
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// add r4,r11,r9
	ctx.r4.u64 = r11.u64 + ctx.r9.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82360108
	sub_82360108(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, r11.u32);
	// beq cr6,0x82361410
	if (cr6.eq) goto loc_82361410;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_823613F4:
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
	// bne 0x823613f4
	if (!cr0.eq) goto loc_823613F4;
loc_82361410:
	// addi r30,r31,40
	r30.s64 = r31.s64 + 40;
	// addi r28,r1,216
	r28.s64 = ctx.r1.s64 + 216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83159478
	sub_83159478(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r10,23624
	ctx.r4.s64 = ctx.r10.s64 + 23624;
	// li r5,4290
	ctx.r5.s64 = 4290;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// bl 0x82e61a78
	sub_82E61A78(ctx, base);
	// lwz r3,220(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82361454
	if (cr6.eq) goto loc_82361454;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82361454:
	// lwz r3,292(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// b 0x823617e0
	goto loc_823617E0;
loc_8236145C:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// addi r4,r11,24772
	ctx.r4.s64 = r11.s64 + 24772;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82e491c8
	sub_82E491C8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r31,840
	ctx.r10.s64 = r31.s64 + 840;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,840(r31)
	PPC_STORE_U32(r31.u32 + 840, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,308(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823614ac
	if (cr6.eq) goto loc_823614AC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_823614AC:
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,24740
	ctx.r4.s64 = r11.s64 + 24740;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82e491c8
	sub_82E491C8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r31,860
	ctx.r10.s64 = r31.s64 + 860;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,860(r31)
	PPC_STORE_U32(r31.u32 + 860, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,324(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82361504
	if (cr6.eq) goto loc_82361504;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82361504:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r10,r10,24716
	ctx.r10.s64 = ctx.r10.s64 + 24716;
	// lfs f0,-22120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22120);
	f0.f64 = double(temp.f32);
	// addi r9,r9,24704
	ctx.r9.s64 = ctx.r9.s64 + 24704;
	// addi r11,r8,24728
	r11.s64 = ctx.r8.s64 + 24728;
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824ec488
	sub_824EC488(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-21220(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -21220);
	f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&f0.f64));
	// stfd f0,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, f0.u64);
	// lwz r30,124(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(r30.u32, 3, xer);
	// ble cr6,0x82361578
	if (!cr6.gt) goto loc_82361578;
	// li r30,3
	r30.s64 = 3;
loc_82361578:
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// add r4,r11,r9
	ctx.r4.u64 = r11.u64 + ctx.r9.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82360108
	sub_82360108(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, r11.u32);
	// beq cr6,0x823615d4
	if (cr6.eq) goto loc_823615D4;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_823615B8:
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
	// bne 0x823615b8
	if (!cr0.eq) goto loc_823615B8;
loc_823615D4:
	// addi r30,r31,40
	r30.s64 = r31.s64 + 40;
	// addi r28,r1,192
	r28.s64 = ctx.r1.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83159478
	sub_83159478(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r10,23624
	ctx.r4.s64 = ctx.r10.s64 + 23624;
	// li r5,4271
	ctx.r5.s64 = 4271;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// bl 0x82e61a78
	sub_82E61A78(ctx, base);
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82361618
	if (cr6.eq) goto loc_82361618;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82361618:
	// lwz r3,356(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// b 0x823617e0
	goto loc_823617E0;
loc_82361620:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// addi r4,r11,24672
	ctx.r4.s64 = r11.s64 + 24672;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82e491c8
	sub_82E491C8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r31,840
	ctx.r10.s64 = r31.s64 + 840;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,840(r31)
	PPC_STORE_U32(r31.u32 + 840, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,372(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82361670
	if (cr6.eq) goto loc_82361670;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82361670:
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// addi r4,r11,24640
	ctx.r4.s64 = r11.s64 + 24640;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82e491c8
	sub_82E491C8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r31,860
	ctx.r10.s64 = r31.s64 + 860;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,860(r31)
	PPC_STORE_U32(r31.u32 + 860, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,388(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823616c8
	if (cr6.eq) goto loc_823616C8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_823616C8:
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r10,r10,9232
	ctx.r10.s64 = ctx.r10.s64 + 9232;
	// lfs f0,-22120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22120);
	f0.f64 = double(temp.f32);
	// addi r9,r9,24616
	ctx.r9.s64 = ctx.r9.s64 + 24616;
	// addi r11,r8,24628
	r11.s64 = ctx.r8.s64 + 24628;
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824ec488
	sub_824EC488(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-21220(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -21220);
	f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&f0.f64));
	// stfd f0,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, f0.u64);
	// lwz r30,124(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(r30.u32, 3, xer);
	// ble cr6,0x8236173c
	if (!cr6.gt) goto loc_8236173C;
	// li r30,3
	r30.s64 = 3;
loc_8236173C:
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// add r4,r11,r9
	ctx.r4.u64 = r11.u64 + ctx.r9.u64;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82360108
	sub_82360108(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, r11.u32);
	// beq cr6,0x82361798
	if (cr6.eq) goto loc_82361798;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8236177C:
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
	// bne 0x8236177c
	if (!cr0.eq) goto loc_8236177C;
loc_82361798:
	// addi r30,r31,40
	r30.s64 = r31.s64 + 40;
	// addi r28,r1,208
	r28.s64 = ctx.r1.s64 + 208;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83159478
	sub_83159478(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r10,23624
	ctx.r4.s64 = ctx.r10.s64 + 23624;
	// li r5,4252
	ctx.r5.s64 = 4252;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// bl 0x82e61a78
	sub_82E61A78(ctx, base);
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823617dc
	if (cr6.eq) goto loc_823617DC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_823617DC:
	// lwz r3,420(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
loc_823617E0:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823617ec
	if (cr6.eq) goto loc_823617EC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_823617EC:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x82315158
	sub_82315158(ctx, base);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82361808"))) PPC_WEAK_FUNC(sub_82361808);
PPC_FUNC_IMPL(__imp__sub_82361808) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x824ee0f8
	sub_824EE0F8(ctx, base);
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8251a510
	sub_8251A510(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82361858
	if (cr6.eq) goto loc_82361858;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82361858:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82320740
	sub_82320740(ctx, base);
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
	// beq cr6,0x823618ac
	if (cr6.eq) goto loc_823618AC;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82361890:
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
	// bne 0x82361890
	if (!cr0.eq) goto loc_82361890;
loc_823618AC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x823618cc
	if (!cr6.eq) goto loc_823618CC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823618CC:
	// addi r30,r1,88
	r30.s64 = ctx.r1.s64 + 88;
	// bl 0x8250c118
	sub_8250C118(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r10,23624
	ctx.r4.s64 = ctx.r10.s64 + 23624;
	// li r5,4391
	ctx.r5.s64 = 4391;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x82e61a78
	sub_82E61A78(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82361910
	if (cr6.eq) goto loc_82361910;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82361910:
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82361920
	if (cr6.eq) goto loc_82361920;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82361920:
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

__attribute__((alias("__imp__sub_82361938"))) PPC_WEAK_FUNC(sub_82361938);
PPC_FUNC_IMPL(__imp__sub_82361938) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8235d158
	sub_8235D158(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// beq cr6,0x82361990
	if (cr6.eq) goto loc_82361990;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82361990:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823619A8"))) PPC_WEAK_FUNC(sub_823619A8);
PPC_FUNC_IMPL(__imp__sub_823619A8) {
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
	// bl 0x823487b8
	sub_823487B8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,25248
	r11.s64 = r11.s64 + 25248;
	// addi r4,r10,25168
	ctx.r4.s64 = ctx.r10.s64 + 25168;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,41
	ctx.r5.s64 = 41;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823619f4
	if (cr0.eq) goto loc_823619F4;
	// bl 0x82346fa0
	sub_82346FA0(ctx, base);
	// b 0x823619f8
	goto loc_823619F8;
loc_823619F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823619F8:
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// stw r3,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82361a20
	if (cr6.eq) goto loc_82361A20;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82361A20:
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

__attribute__((alias("__imp__sub_82361A38"))) PPC_WEAK_FUNC(sub_82361A38);
PPC_FUNC_IMPL(__imp__sub_82361A38) {
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
	// bl 0x8234ec58
	sub_8234EC58(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,25364
	r11.s64 = r11.s64 + 25364;
	// addi r4,r10,25288
	ctx.r4.s64 = ctx.r10.s64 + 25288;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82361a84
	if (cr0.eq) goto loc_82361A84;
	// bl 0x82346fa0
	sub_82346FA0(ctx, base);
	// b 0x82361a88
	goto loc_82361A88;
loc_82361A84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82361A88:
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// stw r3,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82361ab0
	if (cr6.eq) goto loc_82361AB0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82361AB0:
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

__attribute__((alias("__imp__sub_82361AC8"))) PPC_WEAK_FUNC(sub_82361AC8);
PPC_FUNC_IMPL(__imp__sub_82361AC8) {
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
	// bl 0x8234e950
	sub_8234E950(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,25484
	r11.s64 = r11.s64 + 25484;
	// addi r4,r10,25400
	ctx.r4.s64 = ctx.r10.s64 + 25400;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,31
	ctx.r5.s64 = 31;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82361b14
	if (cr0.eq) goto loc_82361B14;
	// bl 0x82346fa0
	sub_82346FA0(ctx, base);
	// b 0x82361b18
	goto loc_82361B18;
loc_82361B14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82361B18:
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// stw r3,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82361b40
	if (cr6.eq) goto loc_82361B40;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82361B40:
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

__attribute__((alias("__imp__sub_82361B58"))) PPC_WEAK_FUNC(sub_82361B58);
PPC_FUNC_IMPL(__imp__sub_82361B58) {
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
	// bl 0x823601b8
	sub_823601B8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,25600
	r11.s64 = r11.s64 + 25600;
	// addi r4,r10,25520
	ctx.r4.s64 = ctx.r10.s64 + 25520;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,45
	ctx.r5.s64 = 45;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82361ba4
	if (cr0.eq) goto loc_82361BA4;
	// bl 0x82346fa0
	sub_82346FA0(ctx, base);
	// b 0x82361ba8
	goto loc_82361BA8;
loc_82361BA4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82361BA8:
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// stw r3,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82361bd0
	if (cr6.eq) goto loc_82361BD0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82361BD0:
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

__attribute__((alias("__imp__sub_82361BE8"))) PPC_WEAK_FUNC(sub_82361BE8);
PPC_FUNC_IMPL(__imp__sub_82361BE8) {
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
	// bl 0x8238ae08
	sub_8238AE08(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,25712
	r11.s64 = r11.s64 + 25712;
	// addi r4,r10,25640
	ctx.r4.s64 = ctx.r10.s64 + 25640;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,30
	ctx.r5.s64 = 30;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82361c34
	if (cr0.eq) goto loc_82361C34;
	// bl 0x82346fa0
	sub_82346FA0(ctx, base);
	// b 0x82361c38
	goto loc_82361C38;
loc_82361C34:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82361C38:
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// stw r3,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82361c60
	if (cr6.eq) goto loc_82361C60;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82361C60:
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

__attribute__((alias("__imp__sub_82361C78"))) PPC_WEAK_FUNC(sub_82361C78);
PPC_FUNC_IMPL(__imp__sub_82361C78) {
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
	// bl 0x823487b8
	sub_823487B8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,25752
	r11.s64 = r11.s64 + 25752;
	// addi r4,r10,25168
	ctx.r4.s64 = ctx.r10.s64 + 25168;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,41
	ctx.r5.s64 = 41;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82361cc4
	if (cr0.eq) goto loc_82361CC4;
	// bl 0x82344f48
	sub_82344F48(ctx, base);
	// b 0x82361cc8
	goto loc_82361CC8;
loc_82361CC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82361CC8:
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// stw r3,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82361cf0
	if (cr6.eq) goto loc_82361CF0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82361CF0:
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

__attribute__((alias("__imp__sub_82361D08"))) PPC_WEAK_FUNC(sub_82361D08);
PPC_FUNC_IMPL(__imp__sub_82361D08) {
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
	// bl 0x8234ec58
	sub_8234EC58(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,25792
	r11.s64 = r11.s64 + 25792;
	// addi r4,r10,25288
	ctx.r4.s64 = ctx.r10.s64 + 25288;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82361d54
	if (cr0.eq) goto loc_82361D54;
	// bl 0x82344f48
	sub_82344F48(ctx, base);
	// b 0x82361d58
	goto loc_82361D58;
loc_82361D54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82361D58:
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// stw r3,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82361d80
	if (cr6.eq) goto loc_82361D80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82361D80:
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

__attribute__((alias("__imp__sub_82361D98"))) PPC_WEAK_FUNC(sub_82361D98);
PPC_FUNC_IMPL(__imp__sub_82361D98) {
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
	// bl 0x8234e950
	sub_8234E950(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,25832
	r11.s64 = r11.s64 + 25832;
	// addi r4,r10,25400
	ctx.r4.s64 = ctx.r10.s64 + 25400;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,31
	ctx.r5.s64 = 31;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82361de4
	if (cr0.eq) goto loc_82361DE4;
	// bl 0x82344f48
	sub_82344F48(ctx, base);
	// b 0x82361de8
	goto loc_82361DE8;
loc_82361DE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82361DE8:
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// stw r3,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82361e10
	if (cr6.eq) goto loc_82361E10;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82361E10:
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

__attribute__((alias("__imp__sub_82361E28"))) PPC_WEAK_FUNC(sub_82361E28);
PPC_FUNC_IMPL(__imp__sub_82361E28) {
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
	// bl 0x823601b8
	sub_823601B8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,25872
	r11.s64 = r11.s64 + 25872;
	// addi r4,r10,25520
	ctx.r4.s64 = ctx.r10.s64 + 25520;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,45
	ctx.r5.s64 = 45;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82361e74
	if (cr0.eq) goto loc_82361E74;
	// bl 0x82344f48
	sub_82344F48(ctx, base);
	// b 0x82361e78
	goto loc_82361E78;
loc_82361E74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82361E78:
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// stw r3,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82361ea0
	if (cr6.eq) goto loc_82361EA0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82361EA0:
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

__attribute__((alias("__imp__sub_82361EB8"))) PPC_WEAK_FUNC(sub_82361EB8);
PPC_FUNC_IMPL(__imp__sub_82361EB8) {
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
	// bl 0x8238ae08
	sub_8238AE08(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,25912
	r11.s64 = r11.s64 + 25912;
	// addi r4,r10,25640
	ctx.r4.s64 = ctx.r10.s64 + 25640;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,30
	ctx.r5.s64 = 30;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82361f04
	if (cr0.eq) goto loc_82361F04;
	// bl 0x82344f48
	sub_82344F48(ctx, base);
	// b 0x82361f08
	goto loc_82361F08;
loc_82361F04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82361F08:
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// stw r3,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82361f30
	if (cr6.eq) goto loc_82361F30;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82361F30:
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

__attribute__((alias("__imp__sub_82361F48"))) PPC_WEAK_FUNC(sub_82361F48);
PPC_FUNC_IMPL(__imp__sub_82361F48) {
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
	// bl 0x82348670
	sub_82348670(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82361f78
	if (cr0.eq) goto loc_82361F78;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_82361F78:
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

__attribute__((alias("__imp__sub_82361F98"))) PPC_WEAK_FUNC(sub_82361F98);
PPC_FUNC_IMPL(__imp__sub_82361F98) {
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
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82361fc4
	if (cr6.eq) goto loc_82361FC4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82361FC4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82348670
	sub_82348670(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82361fdc
	if (cr0.eq) goto loc_82361FDC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_82361FDC:
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

__attribute__((alias("__imp__sub_82361FF8"))) PPC_WEAK_FUNC(sub_82361FF8);
PPC_FUNC_IMPL(__imp__sub_82361FF8) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,144
	ctx.r3.s64 = 144;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82362034
	if (cr0.eq) goto loc_82362034;
	// bl 0x823619a8
	sub_823619A8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82362038
	goto loc_82362038;
loc_82362034:
	// li r31,0
	r31.s64 = 0;
loc_82362038:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359b40
	sub_82359B40(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82362068"))) PPC_WEAK_FUNC(sub_82362068);
PPC_FUNC_IMPL(__imp__sub_82362068) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823620a4
	if (cr0.eq) goto loc_823620A4;
	// bl 0x82361a38
	sub_82361A38(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x823620a8
	goto loc_823620A8;
loc_823620A4:
	// li r31,0
	r31.s64 = 0;
loc_823620A8:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359c08
	sub_82359C08(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_823620D8"))) PPC_WEAK_FUNC(sub_823620D8);
PPC_FUNC_IMPL(__imp__sub_823620D8) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82362114
	if (cr0.eq) goto loc_82362114;
	// bl 0x82361ac8
	sub_82361AC8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82362118
	goto loc_82362118;
loc_82362114:
	// li r31,0
	r31.s64 = 0;
loc_82362118:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235a310
	sub_8235A310(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82362148"))) PPC_WEAK_FUNC(sub_82362148);
PPC_FUNC_IMPL(__imp__sub_82362148) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82362184
	if (cr0.eq) goto loc_82362184;
	// bl 0x82361b58
	sub_82361B58(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82362188
	goto loc_82362188;
loc_82362184:
	// li r31,0
	r31.s64 = 0;
loc_82362188:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235a3d8
	sub_8235A3D8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_823621B8"))) PPC_WEAK_FUNC(sub_823621B8);
PPC_FUNC_IMPL(__imp__sub_823621B8) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823621f4
	if (cr0.eq) goto loc_823621F4;
	// bl 0x82361be8
	sub_82361BE8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x823621f8
	goto loc_823621F8;
loc_823621F4:
	// li r31,0
	r31.s64 = 0;
loc_823621F8:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235a630
	sub_8235A630(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82362228"))) PPC_WEAK_FUNC(sub_82362228);
PPC_FUNC_IMPL(__imp__sub_82362228) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,144
	ctx.r3.s64 = 144;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82362264
	if (cr0.eq) goto loc_82362264;
	// bl 0x82361c78
	sub_82361C78(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82362268
	goto loc_82362268;
loc_82362264:
	// li r31,0
	r31.s64 = 0;
loc_82362268:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235a888
	sub_8235A888(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82362298"))) PPC_WEAK_FUNC(sub_82362298);
PPC_FUNC_IMPL(__imp__sub_82362298) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823622d4
	if (cr0.eq) goto loc_823622D4;
	// bl 0x82361d08
	sub_82361D08(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x823622d8
	goto loc_823622D8;
loc_823622D4:
	// li r31,0
	r31.s64 = 0;
loc_823622D8:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235a950
	sub_8235A950(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82362308"))) PPC_WEAK_FUNC(sub_82362308);
PPC_FUNC_IMPL(__imp__sub_82362308) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82362344
	if (cr0.eq) goto loc_82362344;
	// bl 0x82361d98
	sub_82361D98(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82362348
	goto loc_82362348;
loc_82362344:
	// li r31,0
	r31.s64 = 0;
loc_82362348:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235aae0
	sub_8235AAE0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82362378"))) PPC_WEAK_FUNC(sub_82362378);
PPC_FUNC_IMPL(__imp__sub_82362378) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823623b4
	if (cr0.eq) goto loc_823623B4;
	// bl 0x82361e28
	sub_82361E28(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x823623b8
	goto loc_823623B8;
loc_823623B4:
	// li r31,0
	r31.s64 = 0;
loc_823623B8:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235aba8
	sub_8235ABA8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_823623E8"))) PPC_WEAK_FUNC(sub_823623E8);
PPC_FUNC_IMPL(__imp__sub_823623E8) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82362424
	if (cr0.eq) goto loc_82362424;
	// bl 0x82361eb8
	sub_82361EB8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82362428
	goto loc_82362428;
loc_82362424:
	// li r31,0
	r31.s64 = 0;
loc_82362428:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235ac70
	sub_8235AC70(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82362458"))) PPC_WEAK_FUNC(sub_82362458);
PPC_FUNC_IMPL(__imp__sub_82362458) {
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
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,12332
	r31.s64 = r11.s64 + 12332;
	// lwz r11,12340(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12340);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x823624a0
	if (!cr0.eq) goto loc_823624A0;
	// lis r9,-32119
	ctx.r9.s64 = -2104950784;
	// lis r8,-32202
	ctx.r8.s64 = -2110390272;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// addi r9,r9,-18024
	ctx.r9.s64 = ctx.r9.s64 + -18024;
	// addi r8,r8,-15392
	ctx.r8.s64 = ctx.r8.s64 + -15392;
	// stw r11,12340(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12340, r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
loc_823624A0:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r29,0
	r29.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r30,8
	ctx.r5.s64 = r30.s64 + 8;
	// stb r29,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r29.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x828f8138
	sub_828F8138(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823624cc
	if (cr0.eq) goto loc_823624CC;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// b 0x823624d0
	goto loc_823624D0;
loc_823624CC:
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
loc_823624D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_823624D8"))) PPC_WEAK_FUNC(sub_823624D8);
PPC_FUNC_IMPL(__imp__sub_823624D8) {
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
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,12344
	r31.s64 = r11.s64 + 12344;
	// lwz r11,12352(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12352);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82362520
	if (!cr0.eq) goto loc_82362520;
	// lis r9,-32083
	ctx.r9.s64 = -2102591488;
	// lis r8,-32202
	ctx.r8.s64 = -2110390272;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// addi r9,r9,24432
	ctx.r9.s64 = ctx.r9.s64 + 24432;
	// addi r8,r8,-11688
	ctx.r8.s64 = ctx.r8.s64 + -11688;
	// stw r11,12352(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12352, r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
loc_82362520:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r29,0
	r29.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r6,r30,8
	ctx.r6.s64 = r30.s64 + 8;
	// stb r29,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r29.u8);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x829319b8
	sub_829319B8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8236254c
	if (cr0.eq) goto loc_8236254C;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// b 0x82362550
	goto loc_82362550;
loc_8236254C:
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
loc_82362550:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82362558"))) PPC_WEAK_FUNC(sub_82362558);
PPC_FUNC_IMPL(__imp__sub_82362558) {
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
	// bl 0x82334410
	sub_82334410(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r31,108
	ctx.r3.s64 = r31.s64 + 108;
	// addi r11,r11,26480
	r11.s64 = r11.s64 + 26480;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82e668c8
	sub_82E668C8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// addi r11,r11,20484
	r11.s64 = r11.s64 + 20484;
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
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

__attribute__((alias("__imp__sub_823625B0"))) PPC_WEAK_FUNC(sub_823625B0);
PPC_FUNC_IMPL(__imp__sub_823625B0) {
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
	// bl 0x82334410
	sub_82334410(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// addi r11,r11,26524
	r11.s64 = r11.s64 + 26524;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82e668c8
	sub_82E668C8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,20500
	r11.s64 = r11.s64 + 20500;
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
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

__attribute__((alias("__imp__sub_82362600"))) PPC_WEAK_FUNC(sub_82362600);
PPC_FUNC_IMPL(__imp__sub_82362600) {
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
	// bl 0x82334410
	sub_82334410(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// addi r11,r11,26612
	r11.s64 = r11.s64 + 26612;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82e668c8
	sub_82E668C8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,20516
	r11.s64 = r11.s64 + 20516;
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
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

__attribute__((alias("__imp__sub_82362650"))) PPC_WEAK_FUNC(sub_82362650);
PPC_FUNC_IMPL(__imp__sub_82362650) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0af0
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -176, f29.u64);
	// stfd f30,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-1024(r1)
	ea = -1024 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r15,r4
	r15.u64 = ctx.r4.u64;
	// mr r16,r5
	r16.u64 = ctx.r5.u64;
	// mr r14,r6
	r14.u64 = ctx.r6.u64;
	// bl 0x82313ba0
	sub_82313BA0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r30,r31,40
	r30.s64 = r31.s64 + 40;
	// bne cr6,0x8236268c
	if (!cr6.eq) goto loc_8236268C;
	// li r30,0
	r30.s64 = 0;
loc_8236268C:
	// lis r11,-31959
	r11.s64 = -2094465024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-10388(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -10388);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x8250c3a8
	sub_8250C3A8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,196(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// bl 0x82307870
	sub_82307870(ctx, base);
	// lwz r27,0(r13)
	r27.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r26,20
	r26.s64 = 20;
	// li r5,39
	ctx.r5.s64 = 39;
	// li r4,96
	ctx.r4.s64 = 96;
	// lwzx r3,r26,r27
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + r27.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r24,96
	r24.s64 = 96;
	// li r4,129
	ctx.r4.s64 = 129;
	// sth r24,4(r29)
	PPC_STORE_U16(r29.u32 + 4, r24.u16);
	// lwz r3,508(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 508);
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r4,131
	ctx.r4.s64 = 131;
	// lfs f31,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
	// lwz r3,508(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 508);
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stfs f1,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r25,r11,26768
	r25.s64 = r11.s64 + 26768;
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r11,r1,208
	r11.s64 = ctx.r1.s64 + 208;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// lis r28,-31949
	r28.s64 = -2093809664;
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// lvx128 v62,r0,r25
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r25.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stvx128 v62,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f2,-396(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + -396);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82f270c8
	sub_82F270C8(ctx, base);
	// addi r21,r31,740
	r21.s64 = r31.s64 + 740;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x822e8a28
	sub_822E8A28(ctx, base);
	// li r5,39
	ctx.r5.s64 = 39;
	// li r4,96
	ctx.r4.s64 = 96;
	// lwzx r3,r26,r27
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + r27.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r4,129
	ctx.r4.s64 = 129;
	// sth r24,4(r29)
	PPC_STORE_U16(r29.u32 + 4, r24.u16);
	// lwz r3,508(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 508);
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// li r4,132
	ctx.r4.s64 = 132;
	// lwz r3,508(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 508);
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// stfs f1,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r10,r1,416
	ctx.r10.s64 = ctx.r1.s64 + 416;
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r9,r1,272
	ctx.r9.s64 = ctx.r1.s64 + 272;
	// lfs f2,-396(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + -396);
	ctx.f2.f64 = double(temp.f32);
	// addi r5,r1,416
	ctx.r5.s64 = ctx.r1.s64 + 416;
	// lvx128 v63,r0,r25
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r25.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x82f270c8
	sub_82F270C8(ctx, base);
	// addi r19,r31,748
	r19.s64 = r31.s64 + 748;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x822e8a28
	sub_822E8A28(ctx, base);
	// li r5,39
	ctx.r5.s64 = 39;
	// li r4,96
	ctx.r4.s64 = 96;
	// lwzx r3,r26,r27
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + r27.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,26752
	r11.s64 = r11.s64 + 26752;
	// addi r10,r10,26736
	ctx.r10.s64 = ctx.r10.s64 + 26736;
	// addi r9,r1,400
	ctx.r9.s64 = ctx.r1.s64 + 400;
	// addi r8,r1,304
	ctx.r8.s64 = ctx.r1.s64 + 304;
	// sth r24,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r24.u16);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lfs f2,-396(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -396);
	ctx.f2.f64 = double(temp.f32);
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,400
	ctx.r5.s64 = ctx.r1.s64 + 400;
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f30,-17788(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -17788);
	f30.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x82f270c8
	sub_82F270C8(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,756(r31)
	PPC_STORE_U8(r31.u32 + 756, ctx.r10.u8);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// addi r20,r11,23624
	r20.s64 = r11.s64 + 23624;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// li r5,520
	ctx.r5.s64 = 520;
	// li r3,224
	ctx.r3.s64 = 224;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x823628d0
	if (cr0.eq) goto loc_823628D0;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// lfs f3,26548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 26548);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x82e84cb8
	sub_82E84CB8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// lfs f1,-7004(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -7004);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e85790
	sub_82E85790(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// bl 0x822c6a10
	sub_822C6A10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e1bac0
	sub_82E1BAC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823628d4
	goto loc_823628D4;
loc_823628D0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_823628D4:
	// addi r18,r31,688
	r18.s64 = r31.s64 + 688;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x822e3958
	sub_822E3958(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,26724
	ctx.r4.s64 = r11.s64 + 26724;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// lwz r4,564(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 564);
	// lwz r29,688(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 688);
	// bl 0x82e1e040
	sub_82E1E040(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82e1b810
	sub_82E1B810(ctx, base);
	// lwz r3,204(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82362920
	if (cr6.eq) goto loc_82362920;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82362920:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,28760(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 28760);
	// lwz r4,28784(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28784);
	// bl 0x822f9dd0
	sub_822F9DD0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e6ad8
	sub_822E6AD8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// ld r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U64(r29.u32 + 0);
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// lwz r3,28636(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 28636);
	// bl 0x8248ebd8
	sub_8248EBD8(ctx, base);
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// beq cr6,0x82362980
	if (cr6.eq) goto loc_82362980;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822e9f20
	sub_822E9F20(ctx, base);
loc_82362980:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,26716
	ctx.r4.s64 = r11.s64 + 26716;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8231b200
	sub_8231B200(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,28640(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 28640);
	// bl 0x82307ae8
	sub_82307AE8(ctx, base);
	// lwz r11,196(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r3,720(r31)
	PPC_STORE_U32(r31.u32 + 720, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823629d0
	if (cr6.eq) goto loc_823629D0;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_823629D0:
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823629e0
	if (cr6.eq) goto loc_823629E0;
	// bl 0x822e9f40
	sub_822E9F40(ctx, base);
loc_823629E0:
	// li r5,39
	ctx.r5.s64 = 39;
	// lwzx r3,r26,r27
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + r27.u32);
	// li r4,96
	ctx.r4.s64 = 96;
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r4,123
	ctx.r4.s64 = 123;
	// sth r24,4(r29)
	PPC_STORE_U16(r29.u32 + 4, r24.u16);
	// lwz r3,508(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 508);
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// li r4,124
	ctx.r4.s64 = 124;
	// lwz r3,508(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 508);
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmr f29,f1
	f29.f64 = ctx.f1.f64;
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// stfs f31,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r10,r1,432
	ctx.r10.s64 = ctx.r1.s64 + 432;
	// stfs f1,100(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r9,r1,336
	ctx.r9.s64 = ctx.r1.s64 + 336;
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lvx128 v63,r0,r25
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r25.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,432
	ctx.r5.s64 = ctx.r1.s64 + 432;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// lfs f2,-396(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + -396);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82f270c8
	sub_82F270C8(ctx, base);
	// addi r11,r31,744
	r11.s64 = r31.s64 + 744;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822e8a28
	sub_822E8A28(ctx, base);
	// lwz r3,744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 744);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// beq cr6,0x82362a80
	if (cr6.eq) goto loc_82362A80;
	// bl 0x822e9f20
	sub_822E9F20(ctx, base);
loc_82362A80:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,26708
	ctx.r4.s64 = r11.s64 + 26708;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8231b200
	sub_8231B200(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82307ae8
	sub_82307AE8(ctx, base);
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r3,724(r31)
	PPC_STORE_U32(r31.u32 + 724, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82362acc
	if (cr6.eq) goto loc_82362ACC;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82362ACC:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82362adc
	if (cr6.eq) goto loc_82362ADC;
	// bl 0x822e9f40
	sub_822E9F40(ctx, base);
loc_82362ADC:
	// li r5,39
	ctx.r5.s64 = 39;
	// lwzx r3,r26,r27
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + r27.u32);
	// li r4,96
	ctx.r4.s64 = 96;
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r4,126
	ctx.r4.s64 = 126;
	// sth r24,4(r29)
	PPC_STORE_U16(r29.u32 + 4, r24.u16);
	// lwz r3,508(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 508);
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// li r4,127
	ctx.r4.s64 = 127;
	// lwz r3,508(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 508);
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmr f29,f1
	f29.f64 = ctx.f1.f64;
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// addi r9,r1,368
	ctx.r9.s64 = ctx.r1.s64 + 368;
	// lvx128 v63,r0,r25
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r25.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// stfs f1,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r10,r1,448
	ctx.r10.s64 = ctx.r1.s64 + 448;
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r5,r1,448
	ctx.r5.s64 = ctx.r1.s64 + 448;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// lfs f2,-396(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + -396);
	ctx.f2.f64 = double(temp.f32);
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82f270c8
	sub_82F270C8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r29.u32);
	// beq 0x82362b68
	if (cr0.eq) goto loc_82362B68;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822e9f20
	sub_822E9F20(ctx, base);
loc_82362B68:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r23,r11,26696
	r23.s64 = r11.s64 + 26696;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8231b200
	sub_8231B200(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82307ae8
	sub_82307AE8(ctx, base);
	// lwz r11,164(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r3,728(r31)
	PPC_STORE_U32(r31.u32 + 728, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82362bb8
	if (cr6.eq) goto loc_82362BB8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82362BB8:
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82362bc8
	if (cr6.eq) goto loc_82362BC8;
	// bl 0x822e9f40
	sub_822E9F40(ctx, base);
loc_82362BC8:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82362bd8
	if (cr6.eq) goto loc_82362BD8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822e9f40
	sub_822E9F40(ctx, base);
loc_82362BD8:
	// li r5,39
	ctx.r5.s64 = 39;
	// lwzx r3,r26,r27
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + r27.u32);
	// li r4,96
	ctx.r4.s64 = 96;
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r4,123
	ctx.r4.s64 = 123;
	// sth r24,4(r29)
	PPC_STORE_U16(r29.u32 + 4, r24.u16);
	// lwz r3,508(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 508);
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// li r4,125
	ctx.r4.s64 = 125;
	// lwz r3,508(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 508);
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmr f29,f1
	f29.f64 = ctx.f1.f64;
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// addi r9,r1,256
	ctx.r9.s64 = ctx.r1.s64 + 256;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r0,r25
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r25.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// stfs f1,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f2,-396(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + -396);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82f270c8
	sub_82F270C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,752
	ctx.r3.s64 = r31.s64 + 752;
	// bl 0x822e8a28
	sub_822E8A28(ctx, base);
	// lwz r11,4(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 4);
	// lwz r10,0(r18)
	ctx.r10.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r11.u32);
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// beq cr6,0x82362c98
	if (cr6.eq) goto loc_82362C98;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82362C7C:
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
	// bne 0x82362c7c
	if (!cr0.eq) goto loc_82362C7C;
loc_82362C98:
	// stw r17,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r17.u32);
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(r17.u32, 0, xer);
	// beq cr6,0x82362cac
	if (cr6.eq) goto loc_82362CAC;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x822e9f20
	sub_822E9F20(ctx, base);
loc_82362CAC:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,17480
	ctx.r4.s64 = r11.s64 + 17480;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// addi r7,r1,152
	ctx.r7.s64 = ctx.r1.s64 + 152;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82307ae8
	sub_82307AE8(ctx, base);
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r3,736(r31)
	PPC_STORE_U32(r31.u32 + 736, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82362cec
	if (cr6.eq) goto loc_82362CEC;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822e9f40
	sub_822E9F40(ctx, base);
loc_82362CEC:
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82362cfc
	if (cr6.eq) goto loc_82362CFC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82362CFC:
	// li r5,39
	ctx.r5.s64 = 39;
	// lwzx r3,r26,r27
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + r27.u32);
	// li r4,64
	ctx.r4.s64 = 64;
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// addi r11,r11,-20912
	r11.s64 = r11.s64 + -20912;
	// addi r10,r10,30976
	ctx.r10.s64 = ctx.r10.s64 + 30976;
	// addi r9,r1,288
	ctx.r9.s64 = ctx.r1.s64 + 288;
	// addi r8,r1,320
	ctx.r8.s64 = ctx.r1.s64 + 320;
	// li r7,64
	ctx.r7.s64 = 64;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// sth r7,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r7.u16);
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// stvx128 v62,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82f27c28
	sub_82F27C28(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r29.u32);
	// beq 0x82362d60
	if (cr0.eq) goto loc_82362D60;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822e9f20
	sub_822E9F20(ctx, base);
loc_82362D60:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-20580
	ctx.r4.s64 = r11.s64 + -20580;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x8231b200
	sub_8231B200(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,28632(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 28632);
	// bl 0x82307ae8
	sub_82307AE8(ctx, base);
	// lwz r3,172(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82362da8
	if (cr6.eq) goto loc_82362DA8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82362DA8:
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82362db8
	if (cr6.eq) goto loc_82362DB8;
	// bl 0x822e9f40
	sub_822E9F40(ctx, base);
loc_82362DB8:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82362dc8
	if (cr6.eq) goto loc_82362DC8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822e9f40
	sub_822E9F40(ctx, base);
loc_82362DC8:
	// li r5,39
	ctx.r5.s64 = 39;
	// lwzx r3,r26,r27
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + r27.u32);
	// li r4,96
	ctx.r4.s64 = 96;
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r4,379
	ctx.r4.s64 = 379;
	// sth r24,4(r29)
	PPC_STORE_U16(r29.u32 + 4, r24.u16);
	// lwz r3,508(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 508);
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// li r4,378
	ctx.r4.s64 = 378;
	// lwz r3,508(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 508);
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// addi r9,r1,384
	ctx.r9.s64 = ctx.r1.s64 + 384;
	// lvx128 v63,r0,r25
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r25.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// stfs f1,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r10,r1,352
	ctx.r10.s64 = ctx.r1.s64 + 352;
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// lfs f2,-396(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + -396);
	ctx.f2.f64 = double(temp.f32);
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82f270c8
	sub_82F270C8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// beq 0x82362e54
	if (cr0.eq) goto loc_82362E54;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822e9f20
	sub_822E9F20(ctx, base);
loc_82362E54:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x8231b200
	sub_8231B200(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82307ae8
	sub_82307AE8(ctx, base);
	// lwz r11,188(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// stw r3,732(r31)
	PPC_STORE_U32(r31.u32 + 732, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82362e9c
	if (cr6.eq) goto loc_82362E9C;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82362E9C:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82362eac
	if (cr6.eq) goto loc_82362EAC;
	// bl 0x822e9f40
	sub_822E9F40(ctx, base);
loc_82362EAC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82362ebc
	if (cr6.eq) goto loc_82362EBC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822e9f40
	sub_822E9F40(ctx, base);
loc_82362EBC:
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82ed4d70
	sub_82ED4D70(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r25,6
	r25.s64 = 6;
	// lwzx r3,r26,r27
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + r27.u32);
	// li r5,45
	ctx.r5.s64 = 45;
	// stb r25,640(r1)
	PPC_STORE_U8(ctx.r1.u32 + 640, r25.u8);
	// li r4,512
	ctx.r4.s64 = 512;
	// lfs f31,-14352(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -14352);
	f31.f64 = double(temp.f32);
	// stfs f31,632(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 632, temp.u32);
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// stw r11,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, r11.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// li r28,512
	r28.s64 = 512;
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// sth r28,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r28.u16);
	// bl 0x82ed3c60
	sub_82ED3C60(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,598
	ctx.r5.s64 = 598;
	// li r3,272
	ctx.r3.s64 = 272;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82362f34
	if (cr0.eq) goto loc_82362F34;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r31,40
	ctx.r4.s64 = r31.s64 + 40;
	// bl 0x822efe60
	sub_822EFE60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82362f38
	goto loc_82362F38;
loc_82362F34:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82362F38:
	// addi r29,r31,696
	r29.s64 = r31.s64 + 696;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8235fd58
	sub_8235FD58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r24,696(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 696);
	// bl 0x8231b200
	sub_8231B200(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x822eff10
	sub_822EFF10(ctx, base);
	// lis r24,-31946
	r24.s64 = -2093613056;
	// lwz r3,696(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 696);
	// lwz r4,28644(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 28644);
	// bl 0x82491af8
	sub_82491AF8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825146a8
	sub_825146A8(ctx, base);
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82362f8c
	if (cr6.eq) goto loc_82362F8C;
	// bl 0x822e9f40
	sub_822E9F40(ctx, base);
loc_82362F8C:
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82ed4d70
	sub_82ED4D70(ctx, base);
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// stfs f31,632(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 632, temp.u32);
	// stb r25,640(r1)
	PPC_STORE_U8(ctx.r1.u32 + 640, r25.u8);
	// li r5,45
	ctx.r5.s64 = 45;
	// lwzx r3,r26,r27
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + r27.u32);
	// li r4,512
	ctx.r4.s64 = 512;
	// stw r11,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, r11.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// sth r28,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r28.u16);
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// bl 0x82ed3c60
	sub_82ED3C60(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,610
	ctx.r5.s64 = 610;
	// li r3,272
	ctx.r3.s64 = 272;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82362ff4
	if (cr0.eq) goto loc_82362FF4;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r31,40
	ctx.r4.s64 = r31.s64 + 40;
	// bl 0x822efe60
	sub_822EFE60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82362ff8
	goto loc_82362FF8;
loc_82362FF4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82362FF8:
	// addi r29,r31,704
	r29.s64 = r31.s64 + 704;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8235fd58
	sub_8235FD58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r30,704(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 704);
	// bl 0x8231b200
	sub_8231B200(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822eff10
	sub_822EFF10(ctx, base);
	// lwz r4,28644(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 28644);
	// lwz r3,704(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 704);
	// bl 0x82491af8
	sub_82491AF8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825146a8
	sub_825146A8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,704(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 704);
	// bl 0x82491aa0
	sub_82491AA0(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82363054
	if (cr6.eq) goto loc_82363054;
	// bl 0x822e9f40
	sub_822E9F40(ctx, base);
loc_82363054:
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82ed4d70
	sub_82ED4D70(ctx, base);
	// stfs f31,632(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 632, temp.u32);
	// stw r17,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, r17.u32);
	// li r5,45
	ctx.r5.s64 = 45;
	// stb r25,640(r1)
	PPC_STORE_U8(ctx.r1.u32 + 640, r25.u8);
	// li r4,512
	ctx.r4.s64 = 512;
	// lwzx r3,r26,r27
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + r27.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// sth r28,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r28.u16);
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// bl 0x82ed3c60
	sub_82ED3C60(ctx, base);
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,623
	ctx.r5.s64 = 623;
	// li r3,272
	ctx.r3.s64 = 272;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823630b8
	if (cr0.eq) goto loc_823630B8;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// addi r4,r31,40
	ctx.r4.s64 = r31.s64 + 40;
	// bl 0x822efe60
	sub_822EFE60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823630bc
	goto loc_823630BC;
loc_823630B8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_823630BC:
	// addi r30,r31,712
	r30.s64 = r31.s64 + 712;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235fd58
	sub_8235FD58(ctx, base);
	// lwz r11,4(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 4);
	// lwz r10,0(r18)
	ctx.r10.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x82363100
	if (cr6.eq) goto loc_82363100;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_823630E4:
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
	// bne 0x823630e4
	if (!cr0.eq) goto loc_823630E4;
loc_82363100:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x822eff10
	sub_822EFF10(ctx, base);
	// lwz r4,28644(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 28644);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82491af8
	sub_82491AF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825146a8
	sub_825146A8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82491aa0
	sub_82491AA0(ctx, base);
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82363140
	if (cr6.eq) goto loc_82363140;
	// bl 0x822e9f40
	sub_822E9F40(ctx, base);
loc_82363140:
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 124);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// bl 0x82370e98
	sub_82370E98(ctx, base);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x8250c268
	sub_8250C268(ctx, base);
	// bl 0x8245fee0
	sub_8245FEE0(ctx, base);
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(r17.u32, 0, xer);
	// beq cr6,0x82363188
	if (cr6.eq) goto loc_82363188;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x822e9f40
	sub_822E9F40(ctx, base);
loc_82363188:
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x831b0b40
	return;
}

__attribute__((alias("__imp__sub_823631A0"))) PPC_WEAK_FUNC(sub_823631A0);
PPC_FUNC_IMPL(__imp__sub_823631A0) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r3,196(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 196);
	// bl 0x8231b7d8
	sub_8231B7D8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823632c4
	if (!cr0.eq) goto loc_823632C4;
	// lis r26,-31961
	r26.s64 = -2094596096;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,-17880(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + -17880);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lwz r3,196(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 196);
	// addi r30,r1,96
	r30.s64 = ctx.r1.s64 + 96;
	// bl 0x82307e20
	sub_82307E20(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823632c4
	if (!cr0.eq) goto loc_823632C4;
	// li r30,0
	r30.s64 = 0;
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 64);
	f0.f64 = double(temp.f32);
	// lfs f13,68(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// addi r28,r31,76
	r28.s64 = r31.s64 + 76;
	// lfs f12,72(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r30.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r30.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// mr r29,r30
	r29.u64 = r30.u64;
loc_8236322C:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82363268
	if (cr6.eq) goto loc_82363268;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x82363268
	if (!cr6.lt) goto loc_82363268;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
	// bl 0x82498048
	sub_82498048(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// b 0x8236322c
	goto loc_8236322C;
loc_82363268:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,-17880(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + -17880);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823047a8
	sub_823047A8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addi r10,r31,128
	ctx.r10.s64 = r31.s64 + 128;
	// lfs f2,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 144);
	ctx.f2.f64 = double(temp.f32);
	// addi r7,r31,96
	ctx.r7.s64 = r31.s64 + 96;
	// lfs f1,116(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r8,112(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// addi r5,r31,48
	ctx.r5.s64 = r31.s64 + 48;
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239db00
	sub_8239DB00(ctx, base);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x82b7b7d0
	sub_82B7B7D0(ctx, base);
loc_823632C4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_823632D0"))) PPC_WEAK_FUNC(sub_823632D0);
PPC_FUNC_IMPL(__imp__sub_823632D0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82363318
	if (cr0.eq) goto loc_82363318;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82334410
	sub_82334410(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,25952
	r11.s64 = r11.s64 + 25952;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x8236331c
	goto loc_8236331C;
loc_82363318:
	// li r31,0
	r31.s64 = 0;
loc_8236331C:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82355810
	sub_82355810(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82363350"))) PPC_WEAK_FUNC(sub_82363350);
PPC_FUNC_IMPL(__imp__sub_82363350) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82363398
	if (cr0.eq) goto loc_82363398;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82334410
	sub_82334410(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,25996
	r11.s64 = r11.s64 + 25996;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x8236339c
	goto loc_8236339C;
loc_82363398:
	// li r31,0
	r31.s64 = 0;
loc_8236339C:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82355b30
	sub_82355B30(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_823633D0"))) PPC_WEAK_FUNC(sub_823633D0);
PPC_FUNC_IMPL(__imp__sub_823633D0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,144
	ctx.r3.s64 = 144;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82363418
	if (cr0.eq) goto loc_82363418;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82334410
	sub_82334410(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,26040
	r11.s64 = r11.s64 + 26040;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x8236341c
	goto loc_8236341C;
loc_82363418:
	// li r31,0
	r31.s64 = 0;
loc_8236341C:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82356238
	sub_82356238(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82363450"))) PPC_WEAK_FUNC(sub_82363450);
PPC_FUNC_IMPL(__imp__sub_82363450) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82363498
	if (cr0.eq) goto loc_82363498;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82334410
	sub_82334410(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,26084
	r11.s64 = r11.s64 + 26084;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x8236349c
	goto loc_8236349C;
loc_82363498:
	// li r31,0
	r31.s64 = 0;
loc_8236349C:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82356300
	sub_82356300(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_823634D0"))) PPC_WEAK_FUNC(sub_823634D0);
PPC_FUNC_IMPL(__imp__sub_823634D0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82363518
	if (cr0.eq) goto loc_82363518;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82334410
	sub_82334410(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,26128
	r11.s64 = r11.s64 + 26128;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x8236351c
	goto loc_8236351C;
loc_82363518:
	// li r31,0
	r31.s64 = 0;
loc_8236351C:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82356558
	sub_82356558(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82363550"))) PPC_WEAK_FUNC(sub_82363550);
PPC_FUNC_IMPL(__imp__sub_82363550) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82363598
	if (cr0.eq) goto loc_82363598;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82334410
	sub_82334410(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,26172
	r11.s64 = r11.s64 + 26172;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x8236359c
	goto loc_8236359C;
loc_82363598:
	// li r31,0
	r31.s64 = 0;
loc_8236359C:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82356620
	sub_82356620(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_823635D0"))) PPC_WEAK_FUNC(sub_823635D0);
PPC_FUNC_IMPL(__imp__sub_823635D0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82363618
	if (cr0.eq) goto loc_82363618;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82334410
	sub_82334410(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,26216
	r11.s64 = r11.s64 + 26216;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x8236361c
	goto loc_8236361C;
loc_82363618:
	// li r31,0
	r31.s64 = 0;
loc_8236361C:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82356ad0
	sub_82356AD0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82363650"))) PPC_WEAK_FUNC(sub_82363650);
PPC_FUNC_IMPL(__imp__sub_82363650) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x823636a4
	if (cr0.eq) goto loc_823636A4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82334410
	sub_82334410(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r10,26260
	ctx.r10.s64 = ctx.r10.s64 + 26260;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// b 0x823636a8
	goto loc_823636A8;
loc_823636A4:
	// li r31,0
	r31.s64 = 0;
loc_823636A8:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82356f80
	sub_82356F80(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_823636D8"))) PPC_WEAK_FUNC(sub_823636D8);
PPC_FUNC_IMPL(__imp__sub_823636D8) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82363720
	if (cr0.eq) goto loc_82363720;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82334410
	sub_82334410(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,26304
	r11.s64 = r11.s64 + 26304;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x82363724
	goto loc_82363724;
loc_82363720:
	// li r31,0
	r31.s64 = 0;
loc_82363724:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82357110
	sub_82357110(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82363758"))) PPC_WEAK_FUNC(sub_82363758);
PPC_FUNC_IMPL(__imp__sub_82363758) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x823637a0
	if (cr0.eq) goto loc_823637A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82334410
	sub_82334410(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,26348
	r11.s64 = r11.s64 + 26348;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x823637a4
	goto loc_823637A4;
loc_823637A0:
	// li r31,0
	r31.s64 = 0;
loc_823637A4:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82357430
	sub_82357430(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_823637D8"))) PPC_WEAK_FUNC(sub_823637D8);
PPC_FUNC_IMPL(__imp__sub_823637D8) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82363820
	if (cr0.eq) goto loc_82363820;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82334410
	sub_82334410(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,26392
	r11.s64 = r11.s64 + 26392;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x82363824
	goto loc_82363824;
loc_82363820:
	// li r31,0
	r31.s64 = 0;
loc_82363824:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82357688
	sub_82357688(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82363858"))) PPC_WEAK_FUNC(sub_82363858);
PPC_FUNC_IMPL(__imp__sub_82363858) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x823638a0
	if (cr0.eq) goto loc_823638A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82334410
	sub_82334410(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,26436
	r11.s64 = r11.s64 + 26436;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x823638a4
	goto loc_823638A4;
loc_823638A0:
	// li r31,0
	r31.s64 = 0;
loc_823638A4:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82357a70
	sub_82357A70(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_823638D8"))) PPC_WEAK_FUNC(sub_823638D8);
PPC_FUNC_IMPL(__imp__sub_823638D8) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,220
	ctx.r3.s64 = 220;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82363914
	if (cr0.eq) goto loc_82363914;
	// bl 0x82362558
	sub_82362558(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82363918
	goto loc_82363918;
loc_82363914:
	// li r31,0
	r31.s64 = 0;
loc_82363918:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82357b38
	sub_82357B38(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82363948"))) PPC_WEAK_FUNC(sub_82363948);
PPC_FUNC_IMPL(__imp__sub_82363948) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,208
	ctx.r3.s64 = 208;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82363984
	if (cr0.eq) goto loc_82363984;
	// bl 0x823625b0
	sub_823625B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82363988
	goto loc_82363988;
loc_82363984:
	// li r31,0
	r31.s64 = 0;
loc_82363988:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82357e58
	sub_82357E58(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_823639B8"))) PPC_WEAK_FUNC(sub_823639B8);
PPC_FUNC_IMPL(__imp__sub_823639B8) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82363a00
	if (cr0.eq) goto loc_82363A00;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82334410
	sub_82334410(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,26568
	r11.s64 = r11.s64 + 26568;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x82363a04
	goto loc_82363A04;
loc_82363A00:
	// li r31,0
	r31.s64 = 0;
loc_82363A04:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82357f20
	sub_82357F20(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82363A38"))) PPC_WEAK_FUNC(sub_82363A38);
PPC_FUNC_IMPL(__imp__sub_82363A38) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// std r4,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,26828
	ctx.r4.s64 = r11.s64 + 26828;
	// li r5,43
	ctx.r5.s64 = 43;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82363ab4
	if (cr0.eq) goto loc_82363AB4;
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r10,23704
	ctx.r10.s64 = ctx.r10.s64 + 23704;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// b 0x82363ab8
	goto loc_82363AB8;
loc_82363AB4:
	// li r31,0
	r31.s64 = 0;
loc_82363AB8:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8235bcd8
	sub_8235BCD8(ctx, base);
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
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82afaf88
	sub_82AFAF88(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82363af4
	if (cr6.eq) goto loc_82363AF4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82363AF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82363B10"))) PPC_WEAK_FUNC(sub_82363B10);
PPC_FUNC_IMPL(__imp__sub_82363B10) {
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
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82e66778
	sub_82E66778(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823344a0
	sub_823344A0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82363b4c
	if (cr0.eq) goto loc_82363B4C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_82363B4C:
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

__attribute__((alias("__imp__sub_82363B68"))) PPC_WEAK_FUNC(sub_82363B68);
PPC_FUNC_IMPL(__imp__sub_82363B68) {
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
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82363b94
	if (cr6.eq) goto loc_82363B94;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82363B94:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823344a0
	sub_823344A0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82363bac
	if (cr0.eq) goto loc_82363BAC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_82363BAC:
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

__attribute__((alias("__imp__sub_82363BC8"))) PPC_WEAK_FUNC(sub_82363BC8);
PPC_FUNC_IMPL(__imp__sub_82363BC8) {
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
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82363bf4
	if (cr6.eq) goto loc_82363BF4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82363BF4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823344a0
	sub_823344A0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82363c0c
	if (cr0.eq) goto loc_82363C0C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_82363C0C:
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

__attribute__((alias("__imp__sub_82363C28"))) PPC_WEAK_FUNC(sub_82363C28);
PPC_FUNC_IMPL(__imp__sub_82363C28) {
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
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r31,108
	ctx.r3.s64 = r31.s64 + 108;
	// bl 0x82e66778
	sub_82E66778(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823344a0
	sub_823344A0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82363c6c
	if (cr0.eq) goto loc_82363C6C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_82363C6C:
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

__attribute__((alias("__imp__sub_82363C88"))) PPC_WEAK_FUNC(sub_82363C88);
PPC_FUNC_IMPL(__imp__sub_82363C88) {
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
	// bl 0x823148e8
	sub_823148E8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,27636
	r11.s64 = r11.s64 + 27636;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r10,r10,27612
	ctx.r10.s64 = ctx.r10.s64 + 27612;
	// addi r9,r9,27596
	ctx.r9.s64 = ctx.r9.s64 + 27596;
	// li r11,0
	r11.s64 = 0;
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// stw r9,192(r31)
	PPC_STORE_U32(r31.u32 + 192, ctx.r9.u32);
	// addi r10,r31,696
	ctx.r10.s64 = r31.s64 + 696;
	// stw r11,672(r31)
	PPC_STORE_U32(r31.u32 + 672, r11.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,676(r31)
	PPC_STORE_U32(r31.u32 + 676, r11.u32);
	// stw r11,680(r31)
	PPC_STORE_U32(r31.u32 + 680, r11.u32);
	// stw r11,684(r31)
	PPC_STORE_U32(r31.u32 + 684, r11.u32);
	// stw r11,688(r31)
	PPC_STORE_U32(r31.u32 + 688, r11.u32);
	// stw r11,692(r31)
	PPC_STORE_U32(r31.u32 + 692, r11.u32);
loc_82363CE8:
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
	// bge 0x82363ce8
	if (!cr0.lt) goto loc_82363CE8;
	// stw r11,740(r31)
	PPC_STORE_U32(r31.u32 + 740, r11.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,744(r31)
	PPC_STORE_U32(r31.u32 + 744, r11.u32);
	// addi r10,r31,768
	ctx.r10.s64 = r31.s64 + 768;
	// stw r11,748(r31)
	PPC_STORE_U32(r31.u32 + 748, r11.u32);
	// addi r10,r31,720
	ctx.r10.s64 = r31.s64 + 720;
	// stw r11,752(r31)
	PPC_STORE_U32(r31.u32 + 752, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,760(r31)
	PPC_STORE_U32(r31.u32 + 760, r11.u32);
	// stw r11,764(r31)
	PPC_STORE_U32(r31.u32 + 764, r11.u32);
	// stw r11,772(r31)
	PPC_STORE_U32(r31.u32 + 772, r11.u32);
	// stw r11,776(r31)
	PPC_STORE_U32(r31.u32 + 776, r11.u32);
	// stw r11,780(r31)
	PPC_STORE_U32(r31.u32 + 780, r11.u32);
	// stw r11,788(r31)
	PPC_STORE_U32(r31.u32 + 788, r11.u32);
	// stw r11,792(r31)
	PPC_STORE_U32(r31.u32 + 792, r11.u32);
	// stw r11,796(r31)
	PPC_STORE_U32(r31.u32 + 796, r11.u32);
	// stw r9,800(r31)
	PPC_STORE_U32(r31.u32 + 800, ctx.r9.u32);
	// stw r11,808(r31)
	PPC_STORE_U32(r31.u32 + 808, r11.u32);
	// stw r11,812(r31)
	PPC_STORE_U32(r31.u32 + 812, r11.u32);
	// stw r11,816(r31)
	PPC_STORE_U32(r31.u32 + 816, r11.u32);
	// stw r11,820(r31)
	PPC_STORE_U32(r31.u32 + 820, r11.u32);
	// stw r11,824(r31)
	PPC_STORE_U32(r31.u32 + 824, r11.u32);
	// stw r11,828(r31)
	PPC_STORE_U32(r31.u32 + 828, r11.u32);
	// stw r11,832(r31)
	PPC_STORE_U32(r31.u32 + 832, r11.u32);
	// stw r11,836(r31)
	PPC_STORE_U32(r31.u32 + 836, r11.u32);
	// stw r11,840(r31)
	PPC_STORE_U32(r31.u32 + 840, r11.u32);
	// stw r11,844(r31)
	PPC_STORE_U32(r31.u32 + 844, r11.u32);
	// stw r11,852(r31)
	PPC_STORE_U32(r31.u32 + 852, r11.u32);
	// stw r11,856(r31)
	PPC_STORE_U32(r31.u32 + 856, r11.u32);
	// stw r11,860(r31)
	PPC_STORE_U32(r31.u32 + 860, r11.u32);
	// stw r11,864(r31)
	PPC_STORE_U32(r31.u32 + 864, r11.u32);
	// stw r11,720(r31)
	PPC_STORE_U32(r31.u32 + 720, r11.u32);
	// stw r11,724(r31)
	PPC_STORE_U32(r31.u32 + 724, r11.u32);
	// stw r11,728(r31)
	PPC_STORE_U32(r31.u32 + 728, r11.u32);
	// stw r11,732(r31)
	PPC_STORE_U32(r31.u32 + 732, r11.u32);
	// stw r11,736(r31)
	PPC_STORE_U32(r31.u32 + 736, r11.u32);
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

__attribute__((alias("__imp__sub_82363DA0"))) PPC_WEAK_FUNC(sub_82363DA0);
PPC_FUNC_IMPL(__imp__sub_82363DA0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// b 0x82363ef8
	sub_82363EF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82363DA8"))) PPC_WEAK_FUNC(sub_82363DA8);
PPC_FUNC_IMPL(__imp__sub_82363DA8) {
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
	// lwz r3,864(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 864);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82363dc8
	if (cr6.eq) goto loc_82363DC8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82363DC8:
	// lwz r3,856(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 856);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82363dd8
	if (cr6.eq) goto loc_82363DD8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82363DD8:
	// lwz r3,844(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 844);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82363de8
	if (cr6.eq) goto loc_82363DE8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82363DE8:
	// lwz r3,836(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 836);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82363df8
	if (cr6.eq) goto loc_82363DF8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82363DF8:
	// lwz r3,828(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 828);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82363e08
	if (cr6.eq) goto loc_82363E08;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82363E08:
	// lwz r3,820(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 820);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82363e18
	if (cr6.eq) goto loc_82363E18;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82363E18:
	// lwz r3,812(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 812);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82363e28
	if (cr6.eq) goto loc_82363E28;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82363E28:
	// addi r30,r31,768
	r30.s64 = r31.s64 + 768;
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// bl 0x82b971e8
	sub_82B971E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b971e8
	sub_82B971E8(ctx, base);
	// lwz r3,764(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 764);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82363e4c
	if (cr6.eq) goto loc_82363E4C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82363E4C:
	// lwz r3,752(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 752);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82363e5c
	if (cr6.eq) goto loc_82363E5C;
	// bl 0x822e9f40
	sub_822E9F40(ctx, base);
loc_82363E5C:
	// lwz r3,748(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 748);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82363e6c
	if (cr6.eq) goto loc_82363E6C;
	// bl 0x822e9f40
	sub_822E9F40(ctx, base);
loc_82363E6C:
	// lwz r3,744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 744);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82363e7c
	if (cr6.eq) goto loc_82363E7C;
	// bl 0x822e9f40
	sub_822E9F40(ctx, base);
loc_82363E7C:
	// lwz r3,740(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 740);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82363e8c
	if (cr6.eq) goto loc_82363E8C;
	// bl 0x822e9f40
	sub_822E9F40(ctx, base);
loc_82363E8C:
	// addi r11,r31,720
	r11.s64 = r31.s64 + 720;
	// li r29,2
	r29.s64 = 2;
	// addi r30,r11,4
	r30.s64 = r11.s64 + 4;
loc_82363E98:
	// addi r30,r30,-8
	r30.s64 = r30.s64 + -8;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82363eac
	if (cr6.eq) goto loc_82363EAC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82363EAC:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bge 0x82363e98
	if (!cr0.lt) goto loc_82363E98;
	// lwz r3,692(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 692);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82363ec4
	if (cr6.eq) goto loc_82363EC4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82363EC4:
	// lwz r3,684(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 684);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82363ed4
	if (cr6.eq) goto loc_82363ED4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82363ED4:
	// lwz r3,676(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 676);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82363ee4
	if (cr6.eq) goto loc_82363EE4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82363EE4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82314820
	sub_82314820(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82363EF8"))) PPC_WEAK_FUNC(sub_82363EF8);
PPC_FUNC_IMPL(__imp__sub_82363EF8) {
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
	// bl 0x82363da8
	sub_82363DA8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82363f28
	if (cr0.eq) goto loc_82363F28;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_82363F28:
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

__attribute__((alias("__imp__sub_82363F48"))) PPC_WEAK_FUNC(sub_82363F48);
PPC_FUNC_IMPL(__imp__sub_82363F48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b08
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r27,r31,204
	r27.s64 = r31.s64 + 204;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,12360
	ctx.r4.s64 = r11.s64 + 12360;
	// lwz r25,196(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// bl 0x82e656b0
	sub_82E656B0(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r3,r31,300
	ctx.r3.s64 = r31.s64 + 300;
	// addi r30,r11,15560
	r30.s64 = r11.s64 + 15560;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82e69870
	sub_82E69870(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,308
	ctx.r3.s64 = r31.s64 + 308;
	// bl 0x82e69870
	sub_82E69870(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r3,r31,548
	ctx.r3.s64 = r31.s64 + 548;
	// addi r30,r11,17640
	r30.s64 = r11.s64 + 17640;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82e69870
	sub_82E69870(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,556
	ctx.r3.s64 = r31.s64 + 556;
	// bl 0x82e69870
	sub_82E69870(ctx, base);
	// clrlwi. r24,r26,24
	r24.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// addi r3,r31,316
	ctx.r3.s64 = r31.s64 + 316;
	// beq 0x82363fe8
	if (cr0.eq) goto loc_82363FE8;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r4,r11,16680
	ctx.r4.s64 = r11.s64 + 16680;
	// bl 0x82e656b0
	sub_82E656B0(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r4,r11,17440
	ctx.r4.s64 = r11.s64 + 17440;
	// b 0x82363ffc
	goto loc_82363FFC;
loc_82363FE8:
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r4,r11,15960
	ctx.r4.s64 = r11.s64 + 15960;
	// bl 0x82e656b0
	sub_82E656B0(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r4,r11,17240
	ctx.r4.s64 = r11.s64 + 17240;
loc_82363FFC:
	// addi r3,r31,432
	ctx.r3.s64 = r31.s64 + 432;
	// bl 0x82e656b0
	sub_82E656B0(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r29,r11,23624
	r29.s64 = r11.s64 + 23624;
	// li r5,1784
	ctx.r5.s64 = 1784;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82364038
	if (cr0.eq) goto loc_82364038;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82332168
	sub_82332168(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8236403c
	goto loc_8236403C;
loc_82364038:
	// li r30,0
	r30.s64 = 0;
loc_8236403C:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82355360
	sub_82355360(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r23,84(r1)
	r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r28,80(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r23.u32);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// beq cr6,0x82364094
	if (cr6.eq) goto loc_82364094;
	// addi r11,r23,4
	r11.s64 = r23.s64 + 4;
loc_82364078:
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
	// bne 0x82364078
	if (!cr0.eq) goto loc_82364078;
loc_82364094:
	// addi r30,r31,40
	r30.s64 = r31.s64 + 40;
	// addi r20,r1,88
	r20.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83159478
	sub_83159478(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r5,1785
	ctx.r5.s64 = 1785;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// bl 0x82e5fcd0
	sub_82E5FCD0(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823640cc
	if (cr6.eq) goto loc_823640CC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_823640CC:
	// lbz r11,27(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 27);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82364104
	if (cr0.eq) goto loc_82364104;
	// lis r11,-31961
	r11.s64 = -2094596096;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-17608(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -17608);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82306f08
	sub_82306F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_82364104:
	// lbz r11,26(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 26);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82364140
	if (cr0.eq) goto loc_82364140;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82306450
	sub_82306450(ctx, base);
	// lis r11,-31961
	r11.s64 = -2094596096;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-17676(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -17676);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82306cf8
	sub_82306CF8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_82364140:
	// lbz r11,25(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 25);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823642b4
	if (cr0.eq) goto loc_823642B4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82e658d8
	sub_82E658D8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1797
	ctx.r5.s64 = 1797;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82364188
	if (cr0.eq) goto loc_82364188;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82334410
	sub_82334410(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,26788
	r11.s64 = r11.s64 + 26788;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x8236418c
	goto loc_8236418C;
loc_82364188:
	// li r30,0
	r30.s64 = 0;
loc_8236418C:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82355428
	sub_82355428(ctx, base);
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
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// beq cr6,0x823641e4
	if (cr6.eq) goto loc_823641E4;
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
loc_823641C8:
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
	// bne 0x823641c8
	if (!cr0.eq) goto loc_823641C8;
loc_823641E4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lfs f31,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82e676a0
	sub_82E676A0(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82364218
	if (cr6.eq) goto loc_82364218;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82364218:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82364228
	if (cr6.eq) goto loc_82364228;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82364228:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82364238
	if (cr6.eq) goto loc_82364238;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82364238:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82316118
	sub_82316118(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq 0x8236427c
	if (cr0.eq) goto loc_8236427C;
	// lis r11,-31961
	r11.s64 = -2094596096;
	// lwz r4,-18024(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -18024);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x82e679f0
	sub_82E679F0(ctx, base);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// b 0x823642a8
	goto loc_823642A8;
loc_8236427C:
	// lis r11,-31961
	r11.s64 = -2094596096;
	// lwz r4,-17996(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -17996);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x82e679f0
	sub_82E679F0(ctx, base);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_823642A8:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823642b4
	if (cr6.eq) goto loc_823642B4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_823642B4:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// bl 0x82320b70
	sub_82320B70(ctx, base);
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r30,-31961
	r30.s64 = -2094596096;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-17548(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -17548);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82304c68
	sub_82304C68(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r29,-31961
	r29.s64 = -2094596096;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-17544(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + -17544);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82304b70
	sub_82304B70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// bne cr6,0x823643e8
	if (!cr6.eq) goto loc_823643E8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-17548(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -17548);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82304bc0
	sub_82304BC0(ctx, base);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82364350
	if (cr6.eq) goto loc_82364350;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82364350:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-17544(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + -17544);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82304ac8
	sub_82304AC8(ctx, base);
	// lwz r30,4(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// beq cr6,0x823643ac
	if (cr6.eq) goto loc_823643AC;
	// addi r10,r30,4
	ctx.r10.s64 = r30.s64 + 4;
loc_82364390:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r10
	reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwcx. r9,0,r10
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x82364390
	if (!cr0.eq) goto loc_82364390;
loc_823643AC:
	// stw r11,760(r31)
	PPC_STORE_U32(r31.u32 + 760, r11.u32);
	// addi r11,r31,760
	r11.s64 = r31.s64 + 760;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x823643d0
	if (cr6.eq) goto loc_823643D0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_823643D0:
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823643e0
	if (cr6.eq) goto loc_823643E0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_823643E0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_823643E8:
	// clrlwi. r11,r21,24
	r11.u64 = r21.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8236443c
	if (cr0.eq) goto loc_8236443C;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x82364408
	if (cr6.eq) goto loc_82364408;
	// lis r11,-31960
	r11.s64 = -2094530560;
	// lwz r4,21508(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 21508);
	// b 0x82364410
	goto loc_82364410;
loc_82364408:
	// lis r11,-31960
	r11.s64 = -2094530560;
	// lwz r4,21496(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 21496);
loc_82364410:
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r8,2
	ctx.r8.s64 = 2;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82305908
	sub_82305908(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_8236443C:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x8236444c
	if (cr6.eq) goto loc_8236444C;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8236444C:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x831b0b58
	return;
}

__attribute__((alias("__imp__sub_82364458"))) PPC_WEAK_FUNC(sub_82364458);
PPC_FUNC_IMPL(__imp__sub_82364458) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,204
	ctx.r3.s64 = 204;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x823644a0
	if (cr0.eq) goto loc_823644A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82362600
	sub_82362600(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,26888
	r11.s64 = r11.s64 + 26888;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x823644a4
	goto loc_823644A4;
loc_823644A0:
	// li r31,0
	r31.s64 = 0;
loc_823644A4:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823554f0
	sub_823554F0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_823644D8"))) PPC_WEAK_FUNC(sub_823644D8);
PPC_FUNC_IMPL(__imp__sub_823644D8) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82364520
	if (cr0.eq) goto loc_82364520;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82340fc0
	sub_82340FC0(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,26932
	r11.s64 = r11.s64 + 26932;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x82364524
	goto loc_82364524;
loc_82364520:
	// li r31,0
	r31.s64 = 0;
loc_82364524:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823555b8
	sub_823555B8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82364558"))) PPC_WEAK_FUNC(sub_82364558);
PPC_FUNC_IMPL(__imp__sub_82364558) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x823645a0
	if (cr0.eq) goto loc_823645A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82338a98
	sub_82338A98(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,26976
	r11.s64 = r11.s64 + 26976;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x823645a4
	goto loc_823645A4;
loc_823645A0:
	// li r31,0
	r31.s64 = 0;
loc_823645A4:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82355680
	sub_82355680(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_823645D8"))) PPC_WEAK_FUNC(sub_823645D8);
PPC_FUNC_IMPL(__imp__sub_823645D8) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,124
	ctx.r3.s64 = 124;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8236462c
	if (cr0.eq) goto loc_8236462C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82334410
	sub_82334410(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r10,27020
	ctx.r10.s64 = ctx.r10.s64 + 27020;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// b 0x82364630
	goto loc_82364630;
loc_8236462C:
	// li r31,0
	r31.s64 = 0;
loc_82364630:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82355748
	sub_82355748(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82364660"))) PPC_WEAK_FUNC(sub_82364660);
PPC_FUNC_IMPL(__imp__sub_82364660) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x823646a8
	if (cr0.eq) goto loc_823646A8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82334410
	sub_82334410(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,27064
	r11.s64 = r11.s64 + 27064;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x823646ac
	goto loc_823646AC;
loc_823646A8:
	// li r31,0
	r31.s64 = 0;
loc_823646AC:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823558d8
	sub_823558D8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_823646E0"))) PPC_WEAK_FUNC(sub_823646E0);
PPC_FUNC_IMPL(__imp__sub_823646E0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82364728
	if (cr0.eq) goto loc_82364728;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82334fb0
	sub_82334FB0(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,27108
	r11.s64 = r11.s64 + 27108;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x8236472c
	goto loc_8236472C;
loc_82364728:
	// li r31,0
	r31.s64 = 0;
loc_8236472C:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823559a0
	sub_823559A0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82364760"))) PPC_WEAK_FUNC(sub_82364760);
PPC_FUNC_IMPL(__imp__sub_82364760) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x823647a8
	if (cr0.eq) goto loc_823647A8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823351f8
	sub_823351F8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,27152
	r11.s64 = r11.s64 + 27152;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x823647ac
	goto loc_823647AC;
loc_823647A8:
	// li r31,0
	r31.s64 = 0;
loc_823647AC:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82355a68
	sub_82355A68(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_823647E0"))) PPC_WEAK_FUNC(sub_823647E0);
PPC_FUNC_IMPL(__imp__sub_823647E0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82364828
	if (cr0.eq) goto loc_82364828;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82334410
	sub_82334410(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,27196
	r11.s64 = r11.s64 + 27196;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x8236482c
	goto loc_8236482C;
loc_82364828:
	// li r31,0
	r31.s64 = 0;
loc_8236482C:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82355bf8
	sub_82355BF8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82364860"))) PPC_WEAK_FUNC(sub_82364860);
PPC_FUNC_IMPL(__imp__sub_82364860) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x823648a8
	if (cr0.eq) goto loc_823648A8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82339970
	sub_82339970(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,27240
	r11.s64 = r11.s64 + 27240;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x823648ac
	goto loc_823648AC;
loc_823648A8:
	// li r31,0
	r31.s64 = 0;
loc_823648AC:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82355cc0
	sub_82355CC0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_823648E0"))) PPC_WEAK_FUNC(sub_823648E0);
PPC_FUNC_IMPL(__imp__sub_823648E0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82364928
	if (cr0.eq) goto loc_82364928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82335910
	sub_82335910(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,27288
	r11.s64 = r11.s64 + 27288;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x8236492c
	goto loc_8236492C;
loc_82364928:
	// li r31,0
	r31.s64 = 0;
loc_8236492C:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823563c8
	sub_823563C8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82364960"))) PPC_WEAK_FUNC(sub_82364960);
PPC_FUNC_IMPL(__imp__sub_82364960) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x823649a8
	if (cr0.eq) goto loc_823649A8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82335a90
	sub_82335A90(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,27332
	r11.s64 = r11.s64 + 27332;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x823649ac
	goto loc_823649AC;
loc_823649A8:
	// li r31,0
	r31.s64 = 0;
loc_823649AC:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82356490
	sub_82356490(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_823649E0"))) PPC_WEAK_FUNC(sub_823649E0);
PPC_FUNC_IMPL(__imp__sub_823649E0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82364a34
	if (cr0.eq) goto loc_82364A34;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82334410
	sub_82334410(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r11.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r11.u32);
	// addi r11,r10,27376
	r11.s64 = ctx.r10.s64 + 27376;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x82364a38
	goto loc_82364A38;
loc_82364A34:
	// li r31,0
	r31.s64 = 0;
loc_82364A38:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823574f8
	sub_823574F8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82364A68"))) PPC_WEAK_FUNC(sub_82364A68);
PPC_FUNC_IMPL(__imp__sub_82364A68) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82364ab0
	if (cr0.eq) goto loc_82364AB0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82334410
	sub_82334410(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,27420
	r11.s64 = r11.s64 + 27420;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x82364ab4
	goto loc_82364AB4;
loc_82364AB0:
	// li r31,0
	r31.s64 = 0;
loc_82364AB4:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823575c0
	sub_823575C0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82364AE8"))) PPC_WEAK_FUNC(sub_82364AE8);
PPC_FUNC_IMPL(__imp__sub_82364AE8) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82364b30
	if (cr0.eq) goto loc_82364B30;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8233e7f0
	sub_8233E7F0(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,27464
	r11.s64 = r11.s64 + 27464;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x82364b34
	goto loc_82364B34;
loc_82364B30:
	// li r31,0
	r31.s64 = 0;
loc_82364B34:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823579a8
	sub_823579A8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82364B68"))) PPC_WEAK_FUNC(sub_82364B68);
PPC_FUNC_IMPL(__imp__sub_82364B68) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82364bb0
	if (cr0.eq) goto loc_82364BB0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82334410
	sub_82334410(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,27508
	r11.s64 = r11.s64 + 27508;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x82364bb4
	goto loc_82364BB4;
loc_82364BB0:
	// li r31,0
	r31.s64 = 0;
loc_82364BB4:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82357d90
	sub_82357D90(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82364BE8"))) PPC_WEAK_FUNC(sub_82364BE8);
PPC_FUNC_IMPL(__imp__sub_82364BE8) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24436
	ctx.r4.s64 = r11.s64 + 24436;
	// li r5,83
	ctx.r5.s64 = 83;
	// li r3,204
	ctx.r3.s64 = 204;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82364c30
	if (cr0.eq) goto loc_82364C30;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8233d2c0
	sub_8233D2C0(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,27552
	r11.s64 = r11.s64 + 27552;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x82364c34
	goto loc_82364C34;
loc_82364C30:
	// li r31,0
	r31.s64 = 0;
loc_82364C34:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82357fe8
	sub_82357FE8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82364C68"))) PPC_WEAK_FUNC(sub_82364C68);
PPC_FUNC_IMPL(__imp__sub_82364C68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// clrlwi. r11,r6,24
	r11.u64 = ctx.r6.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r31,196(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 196);
	// beq 0x82364cac
	if (cr0.eq) goto loc_82364CAC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x8232f260
	sub_8232F260(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82364d24
	if (cr0.eq) goto loc_82364D24;
loc_82364CAC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f31,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82378748
	sub_82378748(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82377f78
	sub_82377F78(ctx, base);
	// clrlwi. r29,r29,24
	r29.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x82364cec
	if (!cr0.eq) goto loc_82364CEC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82316208
	sub_82316208(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82364d24
	if (!cr0.eq) goto loc_82364D24;
loc_82364CEC:
	// cntlzw r11,r29
	r11.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// rlwinm r7,r11,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82363f48
	sub_82363F48(ctx, base);
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823171c8
	sub_823171C8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82364d24
	if (cr0.eq) goto loc_82364D24;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82374398
	sub_82374398(ctx, base);
loc_82364D24:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82364D38"))) PPC_WEAK_FUNC(sub_82364D38);
PPC_FUNC_IMPL(__imp__sub_82364D38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r31,196(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 196);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82378748
	sub_82378748(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82377f78
	sub_82377F78(ctx, base);
	// clrlwi. r28,r28,24
	r28.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bne 0x82364d98
	if (!cr0.eq) goto loc_82364D98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82316208
	sub_82316208(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82364dd0
	if (cr0.eq) goto loc_82364DD0;
loc_82364D98:
	// cntlzw r11,r28
	r11.u64 = r28.u32 == 0 ? 32 : __builtin_clz(r28.u32);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// rlwinm r7,r11,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82363f48
	sub_82363F48(ctx, base);
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823171c8
	sub_823171C8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82364dd0
	if (cr0.eq) goto loc_82364DD0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82374530
	sub_82374530(ctx, base);
loc_82364DD0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82364DE0"))) PPC_WEAK_FUNC(sub_82364DE0);
PPC_FUNC_IMPL(__imp__sub_82364DE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// li r12,-80
	r12.s64 = -80;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r31,196(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 196);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823171c8
	sub_823171C8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82364e28
	if (!cr0.eq) goto loc_82364E28;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82316208
	sub_82316208(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82365208
	if (cr0.eq) goto loc_82365208;
loc_82364E28:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823167e0
	sub_823167E0(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-24412(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24412);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x82364e50
	if (!cr6.gt) goto loc_82364E50;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82316768
	sub_82316768(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82365208
	if (!cr0.eq) goto loc_82365208;
loc_82364E50:
	// addi r29,r30,48
	r29.s64 = r30.s64 + 48;
	// lwz r5,32(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// addi r28,r30,24
	r28.s64 = r30.s64 + 24;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823171f0
	sub_823171F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bne 0x82364fa0
	if (!cr0.eq) goto loc_82364FA0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8231a670
	sub_8231A670(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r27,r10,1
	r27.u64 = ctx.r10.u64 ^ 1;
	// beq cr6,0x82364ea4
	if (cr6.eq) goto loc_82364EA4;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82364EA4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// clrlwi. r10,r27,24
	ctx.r10.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lfs f31,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f31.f64 = double(temp.f32);
	// beq 0x82364f14
	if (cr0.eq) goto loc_82364F14;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8231a670
	sub_8231A670(ctx, base);
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// bl 0x822d2058
	sub_822D2058(ctx, base);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82364ee4
	if (cr6.eq) goto loc_82364EE4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82364EE4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8231cf10
	sub_8231CF10(ctx, base);
	// addi r11,r1,272
	r11.s64 = ctx.r1.s64 + 272;
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bgt cr6,0x82365208
	if (cr6.gt) goto loc_82365208;
loc_82364F14:
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r6,36(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r5,32(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8231d718
	sub_8231D718(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82320e90
	sub_82320E90(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r11,r11,13344
	r11.s64 = r11.s64 + 13344;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lvx128 v127,r0,r11
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x823087c8
	sub_823087C8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v63,v63,v127
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v127.f32)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x823171c8
	sub_823171C8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f1,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82364c68
	sub_82364C68(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82316760
	sub_82316760(ctx, base);
	// b 0x82365208
	goto loc_82365208;
loc_82364FA0:
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8231a670
	sub_8231A670(ctx, base);
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// bl 0x822d2058
	sub_822D2058(ctx, base);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82364fcc
	if (cr6.eq) goto loc_82364FCC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82364FCC:
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82e86068
	sub_82E86068(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823087c8
	sub_823087C8(ctx, base);
	// addi r11,r1,304
	r11.s64 = ctx.r1.s64 + 304;
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,288
	ctx.r7.s64 = ctx.r1.s64 + 288;
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,192
	r11.s64 = ctx.r1.s64 + 192;
	// vsubfp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_sub_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// vmsum3fp128 v61,v63,v62
	simde_mm_store_ps(v61.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32), 0xEF));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v63,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// vmulfp128 v63,v62,v63
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// stvx128 v63,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e86270
	sub_82E86270(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8231cf10
	sub_8231CF10(ctx, base);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// vmsum3fp128 v62,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v62.f32, simde_mm_dp_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// stvx128 v62,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v62,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v62,v62,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), 0xFF));
	// vmulfp128 v63,v63,v62
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// stvx128 v63,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e86270
	sub_82E86270(ctx, base);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// vspltisw128 v62,1
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_set1_epi32(int(0x1)));
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// vspltisw128 v61,0
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v0,v62,1
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v62.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3F000000)))));
	// vmsum3fp128 v62,v63,v63
	simde_mm_store_ps(v62.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// lfs f0,26548(r7)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 26548);
	f0.f64 = double(temp.f32);
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v63,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// vrsqrtefp128 v13,v62
	simde_mm_store_ps(ctx.v13.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(v62.f32))));
	// vor128 v11,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)v62.u8));
	// vmulfp128 v10,v62,v0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp128 v9,v62,v61
	simde_mm_store_ps(ctx.v9.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v61.f32)));
	// vmulfp128 v8,v13,v13
	simde_mm_store_ps(ctx.v8.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vrsqrtefp128 v12,v63
	simde_mm_store_ps(ctx.v12.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(v63.f32))));
	// vor128 v7,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)v63.u8));
	// vmulfp128 v6,v63,v0
	simde_mm_store_ps(ctx.v6.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp128 v5,v63,v61
	simde_mm_store_ps(ctx.v5.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v61.f32)));
	// vnmsubfp v10,v10,v8,v0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v0.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmulfp128 v8,v12,v12
	simde_mm_store_ps(ctx.v8.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v13,v13,v10,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v0,v6,v8,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v0.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmulfp128 v13,v62,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v12,v0,v12
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vsel v13,v13,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8))));
	// vmulfp128 v0,v63,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v13,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// vsel v0,v0,v7,v5
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8))));
	// stvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blt cr6,0x82365118
	if (cr6.lt) goto loc_82365118;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_82365118:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-24788(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24788);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// ble cr6,0x82365208
	if (!cr6.gt) goto loc_82365208;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x8231a670
	sub_8231A670(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x823087c8
	sub_823087C8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d24c8
	sub_822D24C8(ctx, base);
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82365178
	if (cr6.eq) goto loc_82365178;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82365178:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8231a670
	sub_8231A670(ctx, base);
	// addi r7,r1,336
	ctx.r7.s64 = ctx.r1.s64 + 336;
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x822d2120
	sub_822D2120(ctx, base);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823651ac
	if (cr6.eq) goto loc_823651AC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_823651AC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r1,176
	r30.s64 = ctx.r1.s64 + 176;
	// bl 0x82317050
	sub_82317050(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82317d58
	sub_82317D58(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823651fc
	if (cr0.eq) goto loc_823651FC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r1,240
	r30.s64 = ctx.r1.s64 + 240;
	// bl 0x82317050
	sub_82317050(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82317d58
	sub_82317D58(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82365208
	if (cr0.eq) goto loc_82365208;
loc_823651FC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x8231d8e0
	sub_8231D8E0(ctx, base);
loc_82365208:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// li r0,-80
	r0.s64 = -80;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82365220"))) PPC_WEAK_FUNC(sub_82365220);
PPC_FUNC_IMPL(__imp__sub_82365220) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCVRegister v63{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// li r12,-64
	r12.s64 = -64;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r29,196(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82318e88
	sub_82318E88(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8236539c
	if (!cr0.eq) goto loc_8236539C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82316208
	sub_82316208(ctx, base);
	// lbz r11,52(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 52);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82365288
	if (cr0.eq) goto loc_82365288;
	// li r11,32
	r11.s64 = 32;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lvx128 v63,r31,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f1,2240(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82365314
	goto loc_82365314;
loc_82365288:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r4,196(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,27728
	r11.s64 = r11.s64 + 27728;
	// lvx128 v127,r0,r11
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x823087c8
	sub_823087C8(ctx, base);
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// vaddfp128 v63,v63,v127
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v127.f32)));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f2,48(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// lbz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f31,2240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82364c68
	sub_82364C68(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82316208
	sub_82316208(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82365330
	if (!cr0.eq) goto loc_82365330;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r4,196(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,27712
	r11.s64 = r11.s64 + 27712;
	// lvx128 v127,r0,r11
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x823087c8
	sub_823087C8(ctx, base);
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// vaddfp128 v63,v63,v127
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v127.f32)));
	// fmr f1,f31
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f1.f64 = f31.f64;
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82365314:
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f2,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// lbz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82364c68
	sub_82364C68(ctx, base);
loc_82365330:
	// lbz r11,53(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 53);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8236539c
	if (cr0.eq) goto loc_8236539C;
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8236539c
	if (!cr0.eq) goto loc_8236539C;
	// addi r3,r30,40
	ctx.r3.s64 = r30.s64 + 40;
	// bl 0x83159478
	sub_83159478(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e627e0
	sub_82E627E0(ctx, base);
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, xer);
	// beq cr6,0x8236539c
	if (cr6.eq) goto loc_8236539C;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823171c8
	sub_823171C8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8236539c
	if (!cr0.eq) goto loc_8236539C;
	// li r4,210
	ctx.r4.s64 = 210;
	// lwz r3,508(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 508);
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// li r4,209
	ctx.r4.s64 = 209;
	// lwz r3,508(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 508);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// bl 0x82317278
	sub_82317278(ctx, base);
loc_8236539C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

__attribute__((alias("__imp__sub_823653B0"))) PPC_WEAK_FUNC(sub_823653B0);
PPC_FUNC_IMPL(__imp__sub_823653B0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// bl 0x82318e88
	sub_82318E88(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823653fc
	if (!cr0.eq) goto loc_823653FC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lbz r6,24(r30)
	ctx.r6.u64 = PPC_LOAD_U8(r30.u32 + 24);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f2,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,2240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82364d38
	sub_82364D38(ctx, base);
loc_823653FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82365418"))) PPC_WEAK_FUNC(sub_82365418);
PPC_FUNC_IMPL(__imp__sub_82365418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v63{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// li r12,-64
	r12.s64 = -64;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r31,196(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 196);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823171c8
	sub_823171C8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82365600
	if (!cr0.eq) goto loc_82365600;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823171c8
	sub_823171C8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82365600
	if (!cr0.eq) goto loc_82365600;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82370668
	sub_82370668(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82365600
	if (!cr0.eq) goto loc_82365600;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82373538
	sub_82373538(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823655f0
	if (cr6.eq) goto loc_823655F0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82370698
	sub_82370698(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823655f0
	if (cr0.eq) goto loc_823655F0;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823171c8
	sub_823171C8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82365528
	if (cr0.eq) goto loc_82365528;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r11,r11,13344
	r11.s64 = r11.s64 + 13344;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lvx128 v127,r0,r11
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x823087c8
	sub_823087C8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v63,v63,v127
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v127.f32)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x823171c8
	sub_823171C8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f2,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f2.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82364c68
	sub_82364C68(ctx, base);
loc_82365528:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823758c0
	sub_823758C0(ctx, base);
	// lis r11,-31961
	r11.s64 = -2094596096;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-17808(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -17808);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82307e28
	sub_82307E28(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-31961
	r11.s64 = -2094596096;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-17824(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -17824);
	// bne 0x823655d8
	if (!cr0.eq) goto loc_823655D8;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82307e28
	sub_82307E28(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82dfafc0
	sub_82DFAFC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823655f0
	if (cr0.eq) goto loc_823655F0;
	// lis r11,-31961
	r11.s64 = -2094596096;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-17812(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -17812);
loc_823655D8:
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823047a8
	sub_823047A8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_823655F0:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82365600
	if (cr6.eq) goto loc_82365600;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82365600:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// li r0,-64
	r0.s64 = -64;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82365610"))) PPC_WEAK_FUNC(sub_82365610);
PPC_FUNC_IMPL(__imp__sub_82365610) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f2,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	ctx.f2.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f1,2240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82364d38
	sub_82364D38(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82378f80
	sub_82378F80(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82365668"))) PPC_WEAK_FUNC(sub_82365668);
PPC_FUNC_IMPL(__imp__sub_82365668) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r3,196(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// bl 0x82318e88
	sub_82318E88(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823657a4
	if (!cr0.eq) goto loc_823657A4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f3,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// lbz r4,25(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 25);
	// lfs f2,36(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,28(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8238f9e8
	sub_8238F9E8(ctx, base);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lbz r7,44(r31)
	ctx.r7.u64 = PPC_LOAD_U8(r31.u32 + 44);
	// addi r4,r31,48
	ctx.r4.s64 = r31.s64 + 48;
	// lbz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82365610
	sub_82365610(ctx, base);
	// bl 0x82477a30
	sub_82477A30(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	f0.f64 = double(temp.f32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// bl 0x8235fea8
	sub_8235FEA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// beq cr6,0x82365730
	if (cr6.eq) goto loc_82365730;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82365714:
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
	// bne 0x82365714
	if (!cr0.eq) goto loc_82365714;
loc_82365730:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82512d38
	sub_82512D38(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-148
	ctx.r3.s64 = r11.s64 + -148;
	// bne cr6,0x82365750
	if (!cr6.eq) goto loc_82365750;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82365750:
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// bl 0x8252b660
	sub_8252B660(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r10,23624
	ctx.r4.s64 = ctx.r10.s64 + 23624;
	// li r5,2508
	ctx.r5.s64 = 2508;
	// addi r3,r30,40
	ctx.r3.s64 = r30.s64 + 40;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// bl 0x82e61a78
	sub_82E61A78(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82365794
	if (cr6.eq) goto loc_82365794;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82365794:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823657a4
	if (cr6.eq) goto loc_823657A4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_823657A4:
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

__attribute__((alias("__imp__sub_823657C0"))) PPC_WEAK_FUNC(sub_823657C0);
PPC_FUNC_IMPL(__imp__sub_823657C0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f2,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	ctx.f2.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f1,2240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82364d38
	sub_82364D38(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82378d18
	sub_82378D18(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82365818"))) PPC_WEAK_FUNC(sub_82365818);
PPC_FUNC_IMPL(__imp__sub_82365818) {
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
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x82364d38
	sub_82364D38(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// bl 0x823171d0
	sub_823171D0(ctx, base);
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r4,8
	ctx.r4.s64 = 8;
	// beq 0x82365860
	if (cr0.eq) goto loc_82365860;
	// bl 0x823171d0
	sub_823171D0(ctx, base);
	// b 0x82365864
	goto loc_82365864;
loc_82365860:
	// bl 0x823171d8
	sub_823171D8(ctx, base);
loc_82365864:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82365880"))) PPC_WEAK_FUNC(sub_82365880);
PPC_FUNC_IMPL(__imp__sub_82365880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v62{};
	PPCVRegister v63{};
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
	// lwz r30,196(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 196);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82318e88
	sub_82318E88(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823659b8
	if (!cr0.eq) goto loc_823659B8;
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x823658dc
	if (cr6.eq) goto loc_823658DC;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bne cr6,0x82365910
	if (!cr6.eq) goto loc_82365910;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f2,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82364d38
	sub_82364D38(ctx, base);
	// b 0x82365910
	goto loc_82365910;
loc_823658DC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,140(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82365910
	if (!cr0.eq) goto loc_82365910;
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// lfs f1,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82375d40
	sub_82375D40(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823659b8
	if (cr0.eq) goto loc_823659B8;
loc_82365910:
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// blt cr6,0x8236592c
	if (cr6.lt) goto loc_8236592C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// ble cr6,0x823659a8
	if (!cr6.gt) goto loc_823659A8;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// beq cr6,0x823659a8
	if (cr6.eq) goto loc_823659A8;
loc_8236592C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,140(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823659a8
	if (cr0.eq) goto loc_823659A8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823734f8
	sub_823734F8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822d20b0
	sub_822D20B0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82365970
	if (cr6.eq) goto loc_82365970;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82365970:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r11,r31,48
	r11.s64 = r31.s64 + 48;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// li r7,4
	ctx.r7.s64 = 4;
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v62,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v62.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32), 0xEF));
	// stvx128 v62,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v62,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v62,v62,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), 0xFF));
	// vmulfp128 v63,v63,v62
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r7,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r7.u32);
loc_823659A8:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r29,40
	ctx.r3.s64 = r29.s64 + 40;
	// bl 0x82315158
	sub_82315158(ctx, base);
loc_823659B8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_823659C0"))) PPC_WEAK_FUNC(sub_823659C0);
PPC_FUNC_IMPL(__imp__sub_823659C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r30,196(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82316208
	sub_82316208(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82365a80
	if (cr0.eq) goto loc_82365A80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82320e90
	sub_82320E90(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8231a670
	sub_8231A670(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822d20e8
	sub_822D20E8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82365a14
	if (cr6.eq) goto loc_82365A14;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82365A14:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823087c8
	sub_823087C8(ctx, base);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823087c8
	sub_823087C8(ctx, base);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_sub_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// lfs f0,27976(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 27976);
	f0.f64 = double(temp.f32);
	// vmsum3fp128 v63,v63,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,112(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x82365a80
	if (!cr6.gt) goto loc_82365A80;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f2,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82364d38
	sub_82364D38(ctx, base);
loc_82365A80:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,140(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82365b18
	if (cr0.eq) goto loc_82365B18;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,196(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// bl 0x823734f8
	sub_823734F8(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r29,0(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82365ac0
	if (cr6.eq) goto loc_82365AC0;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82365AC0:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d20e8
	sub_822D20E8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,196(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// bl 0x823087c8
	sub_823087C8(ctx, base);
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v63,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_sub_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// lfs f0,26552(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 26552);
	f0.f64 = double(temp.f32);
	// vmsum3fp128 v63,v63,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,112(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x82365b18
	if (!cr6.gt) goto loc_82365B18;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82377720
	sub_82377720(ctx, base);
loc_82365B18:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823166e0
	sub_823166E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82365b34
	if (cr0.eq) goto loc_82365B34;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82330eb8
	sub_82330EB8(ctx, base);
loc_82365B34:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82365B40"))) PPC_WEAK_FUNC(sub_82365B40);
PPC_FUNC_IMPL(__imp__sub_82365B40) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r29,196(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8231b7d8
	sub_8231B7D8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82365bdc
	if (!cr0.eq) goto loc_82365BDC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82318e88
	sub_82318E88(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82365bdc
	if (!cr0.eq) goto loc_82365BDC;
	// lbz r11,72(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 72);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82365bc0
	if (cr0.eq) goto loc_82365BC0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823703c0
	sub_823703C0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lbz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq 0x82365bb0
	if (cr0.eq) goto loc_82365BB0;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f2,-28612(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -28612);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-22120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -22120);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82365bbc
	goto loc_82365BBC;
loc_82365BB0:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lfs f2,-22120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22120);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
loc_82365BBC:
	// bl 0x82365818
	sub_82365818(ctx, base);
loc_82365BC0:
	// addi r4,r31,48
	ctx.r4.s64 = r31.s64 + 48;
	// lbz r8,81(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 81);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r7,76(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// lfs f2,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 68);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,64(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82370ad8
	sub_82370AD8(ctx, base);
loc_82365BDC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

